#include "Components/Includes.hpp"

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    if (ul_reason_for_call == DLL_PROCESS_ATTACH)
    {
        DisableThreadLibraryCalls(hModule);
        CreateThread(nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(Core.InitializeGlobals), hModule, 0, nullptr);
    }
    if (ul_reason_for_call == DLL_PROCESS_DETACH)
    {
        GUI.Unload();
    }

    return TRUE;
}