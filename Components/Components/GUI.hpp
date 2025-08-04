#pragma once
#include "../Component.hpp"

class GUIComponent : public Component
{
public:
	GUIComponent();
	~GUIComponent() override;

	static HANDLE InterfaceThread;

public:
	void OnCreate() override;
	void OnDestroy() override;
	static void Initialize();
	static void Unload();

public:
	static bool IsOpen;
	int DisplayX;
	int DisplayY;

public:
	static void InitImGui();

	static void InitMainTab();

	static LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	static void Render();

};

extern class GUIComponent GUI;