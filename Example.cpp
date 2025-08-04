#include "Example.hpp"
#include "Offsets.hpp"

bool ExampleModule::IsInGame = false;
AGameEvent_Soccar_TA* ExampleModule::CurrentGameEvent = nullptr;

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
    if (!event.Caller() || !event.Caller()->IsA(APlayerController_TA::StaticClass()) || !CurrentGameEvent) {
        return;
    }

    //check game event
    if (!CurrentGameEvent) { return; }

    //get cars
    TArray<ACar_TA*> cars = SafeRead<TArray<ACar_TA*>>((uintptr_t)CurrentGameEvent + Offsets::TAGame::GameEvent_TA::Cars);
    //get balls
    TArray<ABall_TA*> balls = SafeRead<TArray<ABall_TA*>>((uintptr_t)CurrentGameEvent + Offsets::TAGame::GameEvent_Soccar_TA::GameBalls);
    // get localPlayers
    TArray<APlayerController_TA*> localPlayers = SafeRead<TArray<APlayerController_TA*>>((uintptr_t)CurrentGameEvent + Offsets::TAGame::GameEvent_TA::LocalPlayers); 


    for (ACar_TA* car : cars) {
        // example for car data
        FVector carLocation = SafeRead<FVector>((uintptr_t)car + Offsets::Engine::Actor::Location);
        FVector carVelocity = SafeRead<FVector>((uintptr_t)car + Offsets::Engine::Actor::Velocity);
        FRotator carRotation = SafeRead<FRotator>((uintptr_t)car + Offsets::Engine::Actor::Rotation);
        FVector carAngularVelocity = SafeRead<FVector>((uintptr_t)car + Offsets::Engine::Actor::AngularVelocity);

        //playerName
        APRI_TA* carPRI = SafeRead<APRI_TA*>((uintptr_t)car + Offsets::TAGame::Vehicle_TA::PRI);
        std::string playerName = SafeRead<FString>((uintptr_t)carPRI + Offsets::Engine::PlayerReplicationInfo::PlayerName).ToString();

        ACarComponent_Boost_TA* boostComponent = SafeRead<ACarComponent_Boost_TA*>((uintptr_t)car + Offsets::TAGame::Vehicle_TA::BoostComponent);
        int boostAmount = SafeRead<float>((uintptr_t)boostComponent + Offsets::TAGame::CarComponent_Boost_TA::CurrentBoostAmount) * 100;

        Console.Write("Player " + playerName + ": " + std::to_string(boostAmount));

    }

    for (APlayerController_TA* localPlayer : localPlayers) {
        ACar_TA* car = SafeRead<ACar_TA*>((uintptr_t)localPlayer + Offsets::TAGame::PlayerController_TA::Car);
        APRI_TA* PRI = SafeRead<APRI_TA*>((uintptr_t)localPlayer + Offsets::TAGame::PlayerController_TA::PRI);

        FVehicleInputs currentInputs = SafeRead<FVehicleInputs>((uintptr_t)localPlayer + Offsets::TAGame::PlayerController_TA::VehicleInput);

        // write currentinputs - idea was: {example make throttle to one for every localPlayer (and keep everything else how the player has set it)} but the tought is new coders will shit themselves about this
        FVehicleInputs newInputs = FVehicleInputs();
        newInputs.Throttle = currentInputs.Throttle; //newInputs.Throttle = 1.0;
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
        ExampleWriteToController(newInputs, localPlayer);
    }

    for (ABall_TA* ball : balls) {
        FVector ballLocation = SafeRead<FVector>((uintptr_t)ball + Offsets::Engine::Actor::Location);
        FVector ballVelocity = SafeRead<FVector>((uintptr_t)ball + Offsets::Engine::Actor::Velocity);
        FRotator ballRotation = SafeRead<FRotator>((uintptr_t)ball + Offsets::Engine::Actor::Rotation);
        FVector ballAngularVelocity = SafeRead<FVector>((uintptr_t)ball + Offsets::Engine::Actor::AngularVelocity);

        // this is just an example with the offsets as its the most reliable. its also possible to do stuff like this:
        FVector ballLocationFromPointer = ball->Location; 
        FVector ballVelocityFromPointer = ball->Velocity;
        FRotator ballRotationFromPointer = ball->Rotation;
        FVector ballAngularVelocityFromPointer = ball->AngularVelocity;
        // be carefull tho, if pointers arent valid (can happen because sdk generators arent perfect) it could crash the game.
        // and also it can return junk data.
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

extern class ExampleModule Example;