#include "Example.hpp"
#include "Offsets.hpp"
#include "Modules/Mods/Drawing.hpp"
#include "ImGui/imgui.h"

bool ExampleModule::IsInGame = false;
AGameEvent_Soccar_TA* ExampleModule::CurrentGameEvent = nullptr;
std::vector<FVector> ExampleModule::carScreenPositions;
std::vector<FVector> ExampleModule::ballScreenPositions;

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
        carScreenPositions.clear();
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

    carScreenPositions.clear();
    ballScreenPositions.clear();

    TArray<APlayerController_TA*> localPlayers = CurrentGameEvent->LocalPlayers;//SafeRead<TArray<APlayerController_TA*>>((uintptr_t)CurrentGameEvent + Offsets::TAGame::GameEvent_TA::LocalPlayers);
    if (localPlayers.size() == 0 || !localPlayers[0]) {
        return;
    }
    APlayerController_TA* localPlayerController = localPlayers[0];

    TArray<ACar_TA*> cars = SafeRead<TArray<ACar_TA*>>((uintptr_t)CurrentGameEvent + Offsets::TAGame::GameEvent_TA::Cars);
    TArray<ABall_TA*> balls = SafeRead<TArray<ABall_TA*>>((uintptr_t)CurrentGameEvent + Offsets::TAGame::GameEvent_Soccar_TA::GameBalls);

    // get all cars and save in list.
    for (ACar_TA* car : cars) {
        if (!car) continue;
        FVector carLocation = SafeRead<FVector>((uintptr_t)car + Offsets::Engine::Actor::Location);
        FVector screenPos = Drawing::CalculateScreenCoordinate(carLocation, localPlayerController);
        carScreenPositions.push_back(screenPos);
    }

    // get all balls and save in list.
    for (ABall_TA* ball : balls) {
        if (!ball) continue;
        FVector ballLocation = SafeRead<FVector>((uintptr_t)ball + Offsets::Engine::Actor::Location);
        FVector screenPos = Drawing::CalculateScreenCoordinate(ballLocation, localPlayerController);
        ballScreenPositions.push_back(screenPos);
    }

    for (APlayerController_TA* localPlayer : localPlayers) {
        // example for getting Car/PRI
        ACar_TA* car = localPlayer->Car;//SafeRead<ACar_TA*>((uintptr_t)localPlayer + Offsets::TAGame::PlayerController_TA::Car);
        APRI_TA* PRI = localPlayer->PRI; //SafeRead<APRI_TA*>((uintptr_t)localPlayer + Offsets::TAGame::PlayerController_TA::PRI);

        //get input
        FVehicleInputs currentInputs = localPlayer->VehicleInput;//SafeRead<FVehicleInputs>((uintptr_t)localPlayer + Offsets::TAGame::PlayerController_TA::VehicleInput);

        //change inputs
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
}

void ExampleModule::OnRender() {
    if (!IsInGame) {
        return;
    }

    ImDrawList* drawList = ImGui::GetBackgroundDrawList();

    // draw circle at ball and car positions
    for (const FVector& screenPos : carScreenPositions) {
        if (screenPos.Z == 0) {
            drawList->AddCircleFilled(ImVec2(screenPos.X, screenPos.Y), 5.f, IM_COL32(255, 0, 0, 255));
        }
    }

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