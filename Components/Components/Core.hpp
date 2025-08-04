#pragma once
#include "../Component.hpp"
#include <cstdint> // Required for uintptr_t

// Manages global objects and names, along with initializing a new thread for the mod to run on.
class CoreComponent : public Component
{
private:
	HANDLE MainThread;

public:
	CoreComponent();
	~CoreComponent() override;

public:
	void OnCreate() override;
	void OnDestroy() override;

public:
	void InitializeThread();
	void DestroyThread();
	static void InitializeGlobals(HMODULE hModule);

private:
	// Finds a byte pattern within the main game module.
	static uintptr_t FindPattern(const char* pattern);

	static bool AreGlobalsValid();
	static bool AreGObjectsValid();
	static bool AreGNamesValid();
};

extern class CoreComponent Core;