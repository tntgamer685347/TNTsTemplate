#pragma once
#include "Modules/Module.hpp"
#include "Components/Includes.hpp"

class ExampleModule : public Module
{
public:
    ExampleModule();
    ~ExampleModule() override;

    void OnCreate();
    void OnDestroy();

    static void Hook();

    static void OnGameEventStart(PreEvent& event);
    static void OnGameEventDestroyed(PreEvent& event);
    static void PlayerTickCalled(const PostEvent& event);

    static void Initialize();

    static bool IsInGame;
    static AGameEvent_Soccar_TA* CurrentGameEvent;
};

extern class ExampleModule Example;