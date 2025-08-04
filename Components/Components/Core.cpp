#include "Core.hpp"
#include "../Includes.hpp"
#include "../Offsets.hpp"
#include <filesystem>
#include <algorithm>
#include <psapi.h>

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


uintptr_t CoreComponent::GetGObjects() {
    // pattern scan can go here if needed
    return NULL;
}

uintptr_t CoreComponent::GetGNames() {
    // pattern scan can go here if needed
    return NULL;
}

void CoreComponent::InitializeGlobals(HMODULE hModule)
{
    Console.Initialize(std::filesystem::current_path(), "Template.log");

    uintptr_t BaseAddress = reinterpret_cast<uintptr_t>(GetModuleHandle(NULL));

    if (AreGlobalsValid())
    {
        Console.Notify("[Core Module] Entry Point " + Format::ToHex(reinterpret_cast<void*>(GetModuleHandle(NULL))));
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
        Console.Write("[Core Module] Initalizing.");
        GObjects = reinterpret_cast<TArray<UObject*>*>(BaseAddress + Offsets::Globals::Epic::GObjects);
        GNames = reinterpret_cast<TArray<FNameEntry*>*>(BaseAddress + Offsets::Globals::Epic::GNames);

        if (AreGlobalsValid()) {
            Console.Write("[Core Module] offsets worked! Continuing initialization...");
            void** UnrealVTable = reinterpret_cast<void**>(UObject::StaticClass()->VfTableObject.Dummy);
            EventsComponent::AttachDetour(reinterpret_cast<ProcessEventType>(UnrealVTable[67]));

            Instances.Initialize();
            Events.Initialize();
            GUI.Initialize();
            Main.Initialize();
        }
        else {
            Console.Error("[Core Module] offsets failed. Please update offsets or check platform detection.");
        }
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