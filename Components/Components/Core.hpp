#pragma once
#include "../Component.hpp"

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

public:
	static uintptr_t GetGObjects();
	static uintptr_t GetGNames();

private:
	static bool AreGlobalsValid();
	static bool AreGObjectsValid();
	static bool AreGNamesValid();
};

extern class CoreComponent Core;