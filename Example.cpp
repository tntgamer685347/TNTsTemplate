#include "Example.hpp"
#include "Offsets.hpp"
#include "Modules/Mods/Drawing.hpp"
#include "ImGui/imgui.h"
#include <algorithm>
#include <cmath>

#ifndef IM_PI
#define IM_PI 3.14159265358979323846f
#endif

bool ExampleModule::IsInGame = false;
AGameEvent_Soccar_TA* ExampleModule::CurrentGameEvent = nullptr;
std::vector<CarBoostData> ExampleModule::carBoostData;
std::vector<FVector> ExampleModule::ballScreenPositions;
APRI_TA* ExampleModule::localPlayerPRI = nullptr;

void ExampleModule::Hook() {
    Events.HookEventPre("Function TAGame.GameEvent_Soccar_TA.PostBeginPlay", OnGameEventStart);
    Events.HookEventPre("Function TAGame.GameEvent_Soccar_TA.Destroyed", OnGameEventDestroyed);
    Events.HookEventPre("Function TAGame.GameEvent_Soccar_TA.Active.BeginState", OnGameEventStart);
    Events.HookEventPre("Function TAGame.GameEvent_Soccar_TA.Countdown.BeginState", OnGameEventStart);
    Events.HookEventPost("Function TAGame.PlayerController_TA.PlayerTick", PlayerTickCalled);
}

void ExampleModule::OnGameEventDestroyed(PreEvent& event)
{
    try
    {
        CurrentGameEvent = nullptr;
        IsInGame = false;
        carBoostData.clear();
        ballScreenPositions.clear();
    }
    catch (...) { Console.Error("GameEventHook: Exception in OnGameEventDestroyed"); }
}

void ExampleModule::OnGameEventStart(PreEvent& event)
{
    try
    {
        Console.Write("GameEventHook: Game event started: " + std::string(event.Function()->GetName()));
        if (event.Caller() && event.Caller()->IsA(AGameEvent_Soccar_TA::StaticClass()))
        {
            CurrentGameEvent = static_cast<AGameEvent_Soccar_TA*>(event.Caller());
            Console.Write("GameEventHook: Stored GameEvent instance");
        }
        IsInGame = true;
    }
    catch (...) { Console.Error("GameEventHook: Exception in OnGameEventStart"); }
}

void ExampleWriteToController(FVehicleInputs inputs, APlayerController_TA* player) {
    uintptr_t inputAddress = (uintptr_t)player + Offsets::TAGame::PlayerController_TA::VehicleInput;
    SafeWrite<FVehicleInputs>(inputAddress, inputs);
}

void ExampleModule::PlayerTickCalled(const PostEvent& event) {
    if (!IsInGame || !CurrentGameEvent || !event.Caller() || !event.Caller()->IsA(APlayerController_TA::StaticClass())) {
        return;
    }

    carBoostData.clear();
    ballScreenPositions.clear();

    TArray<APlayerController_TA*> localPlayers = CurrentGameEvent->LocalPlayers;
    if (localPlayers.size() == 0 || !localPlayers[0]) {
        return;
    }
    APlayerController_TA* localPlayerController = localPlayers[0];
    localPlayerPRI = localPlayerController->PRI;

    TArray<ACar_TA*> cars = SafeRead<TArray<ACar_TA*>>((uintptr_t)CurrentGameEvent + Offsets::TAGame::GameEvent_TA::Cars);
    TArray<ABall_TA*> balls = SafeRead<TArray<ABall_TA*>>((uintptr_t)CurrentGameEvent + Offsets::TAGame::GameEvent_Soccar_TA::GameBalls);

    for (APlayerController_TA* localPlayer : localPlayers) {
        // example for getting Car/PRI
        ACar_TA* car = localPlayer->Car;
        APRI_TA* PRI = localPlayer->PRI;

        //get input
        FVehicleInputs currentInputs = SafeRead<FVehicleInputs>((uintptr_t)localPlayer + Offsets::TAGame::PlayerController_TA::VehicleInput);

        //change inputs (or not)
        FVehicleInputs newInputs = FVehicleInputs();
        newInputs.Throttle = currentInputs.Throttle;
        newInputs.bActivateBoost = currentInputs.bActivateBoost;
        newInputs.bHoldingBoost = currentInputs.bHoldingBoost;
        newInputs.bHandbrake = currentInputs.bHandbrake;
        newInputs.bJump = currentInputs.bJump;
        newInputs.bJumped = currentInputs.bJumped;
        newInputs.DodgeForward = currentInputs.DodgeForward;
        newInputs.DodgeRight = currentInputs.DodgeRight;
        newInputs.Pitch = currentInputs.Pitch;
        newInputs.Yaw = currentInputs.Yaw;
        newInputs.Roll = currentInputs.Roll;
        newInputs.Steer = currentInputs.Steer;

        //write it back
        ExampleWriteToController(newInputs, localPlayer);
    }

    // get all cars with boost data
    for (ACar_TA* car : cars) {
        if (!car) continue;

        FVector carLocation = SafeRead<FVector>((uintptr_t)car + Offsets::Engine::Actor::Location);

        FVector boostCircleLocation = carLocation;
        boostCircleLocation.Z += 100.0f; 

        FVector screenPos = Drawing::CalculateScreenCoordinate(boostCircleLocation, localPlayerController);


        ACarComponent_Boost_TA* boostComponent = SafeRead<ACarComponent_Boost_TA*>((uintptr_t)car + Offsets::TAGame::Vehicle_TA::BoostComponent);
        float boostAmount = 0.0f;
        try {
            if (boostComponent) {
                boostAmount = SafeRead<float>((uintptr_t)boostComponent + Offsets::TAGame::CarComponent_Boost_TA::CurrentBoostAmount) * 100;
                Console.Write("Boost amount read: " + std::to_string(boostAmount));
            }
            else {
                Console.Write("BoostComponent was nullptr");
            }
        }
        catch (...) {
            boostAmount = 0.0f;
            Console.Write("BoostComponent was nullptr or sum");
        }

        CarBoostData data;
        data.screenPosition = screenPos;
        data.boostAmount = boostAmount;
        Console.Write("Stored boost amount: " + std::to_string(data.boostAmount));
        carBoostData.push_back(data);
    }

    // get all balls and save in list
    for (ABall_TA* ball : balls) {
        if (!ball) continue;
        FVector ballLocation = SafeRead<FVector>((uintptr_t)ball + Offsets::Engine::Actor::Location);
        FVector screenPos = Drawing::CalculateScreenCoordinate(ballLocation, localPlayerController);
        ballScreenPositions.push_back(screenPos);
    }
}

void ExampleModule::OnRender() {
    if (!IsInGame) {
        return;
    }

    ImDrawList* drawList = ImGui::GetBackgroundDrawList();

    // Draw Boost Circles
    for (const CarBoostData& data : carBoostData) {
        if (data.screenPosition.Z == 0) {
            float boostPercentage = data.boostAmount / 100.0f;
            if (boostPercentage < 0.0f) boostPercentage = 0.0f;
            if (boostPercentage > 1.0f) boostPercentage = 1.0f;

            ImVec2 center(data.screenPosition.X, data.screenPosition.Y);
            float radius = 25.0f; 

            drawList->AddCircleFilled(center, radius, IM_COL32(50, 50, 50, 180));

            if (boostPercentage > 0.0f) {
                float startAngle = -IM_PI * 0.5f;
                float endAngle = startAngle + (2.0f * IM_PI * boostPercentage);

                ImU32 boostColor;
                if (boostPercentage < 0.33f) {
                    boostColor = IM_COL32(255, 80, 80, 220);
                }
                else if (boostPercentage < 0.66f) {
                    boostColor = IM_COL32(255, 200, 0, 220);
                }
                else {
                    boostColor = IM_COL32(80, 255, 80, 220);
                }

                drawList->PathClear();
                drawList->PathLineTo(center);

                const int numSegments = 32;
                for (int i = 0; i <= numSegments; i++) {
                    float angle = startAngle + (endAngle - startAngle) * ((float)i / numSegments);
                    float x = center.x + cosf(angle) * radius;
                    float y = center.y + sinf(angle) * radius;
                    drawList->PathLineTo(ImVec2(x, y));
                }

                drawList->PathLineTo(center);
                drawList->PathFillConvex(boostColor);
            }

            drawList->AddCircle(center, radius, IM_COL32(255, 255, 255, 150), 32, 2.0f);

            std::string boostText = std::to_string((int)data.boostAmount);
            ImVec2 textSize = ImGui::CalcTextSize(boostText.c_str());
            ImVec2 textPos(center.x - textSize.x * 0.5f, center.y - textSize.y * 0.5f);
            drawList->AddText(textPos, IM_COL32(255, 255, 255, 255), boostText.c_str());
        }
    }

    // ball circles
    for (const FVector& screenPos : ballScreenPositions) {
        if (screenPos.Z == 0) {
            drawList->AddCircleFilled(ImVec2(screenPos.X, screenPos.Y), 8.f, IM_COL32(0, 255, 0, 255));
        }
    }
}

ExampleModule::ExampleModule() : Module("GameEventHook", "Hooks into game events", States::STATES_All) {
    OnCreate();
}
ExampleModule::~ExampleModule() { OnDestroy(); }

void ExampleModule::OnCreate() {
    // do non
}

void ExampleModule::OnDestroy() {
    // do non
}

void ExampleModule::Initialize() {
    Hook();
    Console.Write("ExampleModule Initalized.");
}

ExampleModule Example;