#pragma once
#include "Modules/Module.hpp"
#include "Components/Includes.hpp"
#include <vector> // Required for std::vector

struct CarBoostData {
    FVector screenPosition;
    float boostAmount;
};

class ExampleModule : public Module
{
public:
    ExampleModule();
    ~ExampleModule() override;

    void OnCreate();
    void OnDestroy();
    void OnRender(); // Add the OnRender function declaration

    static void Hook();

    static void OnGameEventStart(PreEvent& event);
    static void OnGameEventDestroyed(PreEvent& event);
    static void PlayerTickCalled(const PostEvent& event);

    static void Initialize();

    static bool IsInGame;
    static AGameEvent_Soccar_TA* CurrentGameEvent;

    // Static vectors to store calculated screen positions
    static std::vector<CarBoostData> carBoostData;
    static std::vector<FVector> ballScreenPositions;
    static APRI_TA* localPlayerPRI;
};

extern class ExampleModule Example;