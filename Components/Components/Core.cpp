#include "Core.hpp"
#include "../Includes.hpp"
#include "../Offsets.hpp" // Still useful for non-global offsets like ProcessEvent
#include <filesystem>
#include <psapi.h>
#include <vector>
#include <sstream>

CoreComponent::CoreComponent() : Component("Core", "Initializes globals, components, and modules.")
{
    OnCreate();
}

CoreComponent::~CoreComponent() {
    OnDestroy();
}

void CoreComponent::OnCreate()
{
    MainThread = nullptr;
}

void CoreComponent::OnDestroy() {
    DestroyThread();
}

void CoreComponent::InitializeThread()
{
    MainThread = CreateThread(nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(InitializeGlobals), nullptr, 0, nullptr);
}

void CoreComponent::DestroyThread()
{
    if (MainThread) {
        CloseHandle(MainThread);
        MainThread = nullptr;
    }
}

// Scans the main module's memory for a given byte pattern.
uintptr_t CoreComponent::FindPattern(const char* pattern)
{
    const auto moduleHandle = GetModuleHandle(NULL);
    if (!moduleHandle)
    {
        return 0;
    }

    MODULEINFO moduleInfo;
    if (!GetModuleInformation(GetCurrentProcess(), moduleHandle, &moduleInfo, sizeof(MODULEINFO)))
    {
        return 0;
    }

    const uintptr_t base = reinterpret_cast<uintptr_t>(moduleHandle);
    const uintptr_t size = moduleInfo.SizeOfImage;

    // Parse the pattern string into bytes and wildcards
    std::vector<int> patternBytes;
    std::stringstream ss(pattern);
    std::string byteStr;
    while (ss >> byteStr)
    {
        if (byteStr == "??")
        {
            patternBytes.push_back(-1); // Wildcard
        }
        else
        {
            patternBytes.push_back(std::stoi(byteStr, nullptr, 16));
        }
    }

    const size_t patternSize = patternBytes.size();
    const int* patternData = patternBytes.data();

    // Search for the pattern in memory
    for (uintptr_t i = 0; i < size - patternSize; ++i)
    {
        bool found = true;
        for (size_t j = 0; j < patternSize; ++j)
        {
            const auto memoryByte = *reinterpret_cast<const uint8_t*>(base + i + j);
            if (patternData[j] != -1 && patternData[j] != memoryByte)
            {
                found = false;
                break;
            }
        }

        if (found)
        {
            return base + i;
        }
    }

    return 0; // Pattern not found
}

void CoreComponent::InitializeGlobals(HMODULE hModule)
{
    Console.Initialize(std::filesystem::current_path(), "Template.log");
    Console.Write("[Core Module] Initializing with pattern scanning...");

    uintptr_t BaseAddress = reinterpret_cast<uintptr_t>(GetModuleHandle(NULL));
    Console.Notify("[Core Module] Entry Point " + Format::ToHex(reinterpret_cast<void*>(BaseAddress)));

    // Pattern from the provided C# dumper for finding GNames.
    const char* gnamesPattern = "?? ?? ?? ?? ?? ?? 00 00 ?? ?? 01 00 35 25 02 00";
    uintptr_t gnamesAddress = FindPattern(gnamesPattern);

    if (gnamesAddress == 0)
    {
        Console.Error("[Core Module] GNames pattern scan FAILED. The mod cannot continue.");
        Console.Error("[Core Module] This is likely due to a game update. Please update the pattern.");
        return; // Abort initialization
    }

    // Per the C# dumper, GObjects is located at a fixed offset from GNames.
    uintptr_t gobjectsAddress = gnamesAddress + 0x48;

    Console.Write("[Core Module] Found GNames at: " + Format::ToHex(reinterpret_cast<void*>(gnamesAddress)));
    Console.Write("[Core Module] Calculated GObjects at: " + Format::ToHex(reinterpret_cast<void*>(gobjectsAddress)));

    // Assign the found addresses to the global pointers.
    GNames = reinterpret_cast<TArray<FNameEntry*>*>(gnamesAddress);
    GObjects = reinterpret_cast<TArray<UObject*>*>(gobjectsAddress);

    // Now validate the pointers to ensure they are correct.
    if (AreGlobalsValid())
    {
        Console.Notify("[Core Module] Global Objects: " + Format::ToHex(GObjects));
        Console.Notify("[Core Module] Global Names: " + Format::ToHex(GNames));
        Console.Write("[Core Module] Initialized!");

        void** UnrealVTable = reinterpret_cast<void**>(UObject::StaticClass()->VfTableObject.Dummy);
        EventsComponent::AttachDetour(reinterpret_cast<ProcessEventType>(UnrealVTable[67]));

        Instances.Initialize();
        Events.Initialize();
        GUI.Initialize();
        Main.Initialize();
    }
    else
    {
        Console.Error("[Core Module] GObjects and GNames addresses were found but failed validation!");
        Console.Error("[Core Module] The pattern may have found a false positive, or the 0x48 offset for GObjects is incorrect.");
    }
}

bool CoreComponent::AreGlobalsValid()
{
    return (AreGObjectsValid() && AreGNamesValid());
}

bool CoreComponent::AreGObjectsValid()
{
    if (GObjects
        && UObject::GObjObjects()->size() > 0
        && UObject::GObjObjects()->capacity() > UObject::GObjObjects()->size())
    {
        return true;
    }
    return false;
}

bool CoreComponent::AreGNamesValid()
{
    if (GNames
        && FName::Names()->size() > 0
        && FName::Names()->capacity() > FName::Names()->size())
    {
        return true;
    }
    return false;
}

CoreComponent Core;