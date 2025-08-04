/*
#############################################################################################
# RocketLeague (1.0.10897.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: AkAudio_structs.hpp
# ========================================================================================= #
# Credits: TheFeckless, ItsBranK
# Links: www.github.com/CodeRedModding/CodeRed-Generator, www.twitter.com/ItsBranK
#############################################################################################
*/
#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

/*
# ========================================================================================= #
# Structs
# ========================================================================================= #
*/

// ScriptStruct AkAudio.AkParamGroup.AkParamSet
// 0x00A0
struct FAkParamSet
{
	struct FMap_Mirror                                 RTCPs;                                         // 0x0000 (0x0050) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FMap_Mirror                                 Switches;                                      // 0x0050 (0x0050) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct AkAudio.AkSoundSource.ActiveSound
// 0x0010
struct FActiveSound
{
	class UAkSoundCue*                                 Sound;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            PlayId;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            StopId;                                        // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct AkAudio.AkEnvironments.uint
// 0x0004
struct Fuint
{
	int32_t                                            dummyint;                                      // 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct AkAudio.AkEnvironments.AkEnvironment
// 0x0020
struct FAkEnvironment
{
	class FString                                      Id;                                            // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            Priority;                                      // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              WetValue;                                      // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DryValue;                                      // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct Fuint                                       HashedEnvID;                                   // 0x001C (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct AkAudio.AkEnvironments.AkActorEnvironment
// 0x0018
struct FAkActorEnvironment
{
	TArray<struct FAkEnvironment>                      Environments;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class AActor*                                      TargetActor;                                   // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct AkAudio.AkMusicAnalysis.MusicAnalysisInfo
// 0x001C
struct FMusicAnalysisInfo
{
	float                                              LowEnergy;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	TArray<float>                                      Frequencies;                                   // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              HighEnergy;                                    // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct AkAudio.AkRevPhysicsSimulation.AkRevSimPhysicsControls
// 0x0020
struct FAkRevSimPhysicsControls
{
	float                                              Weight;                                        // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              EngineTorque;                                  // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BreakingHorsePower;                            // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<float>                                      GearRatios;                                    // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct AkAudio.AkRevPhysicsSimulation.AkRevSimFrame
// 0x0010
struct FAkRevSimFrame
{
	float                                              RPM;                                           // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Gear;                                          // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            RevGear;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Velocity;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct AkAudio.AkRevPhysicsSimulation.AkRevSimUpdateParams
// 0x0048
struct FAkRevSimUpdateParams
{
	float                                              Throttle;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Brake;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              EngineFrictionScale;                           // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              GroundFrictionScale;                           // 0x000C (0x0004) [0x0000000000000000]               
	float                                              ClutchedGearRatio;                             // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           bEnableUpShifting : 1;                         // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FAkRevSimPhysicsControls                    Controls;                                      // 0x0018 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FAkRevSimFrame                              frame;                                         // 0x0038 (0x0010) [0x0000000000000000]               
};

// ScriptStruct AkAudio.AkSoundBanksInfo.SoundBankInfo
// 0x0030
struct FSoundBankInfo
{
	class FString                                      ShortName;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      RelativePath;                                  // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Language;                                      // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct AkAudio.InterpTrackAkEvent.AkEventTrackKey
// 0x0010
struct FAkEventTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	class UAkSoundCue*                                 Event;                                         // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct AkAudio.SeqAct_AkPlayMusicWithCues.MusicSyncEvent
// 0x0011
struct FMusicSyncEvent
{
	class FString                                      CueName;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            CueType;                                       // 0x0010 (0x0001) [0x0000000000000000]               
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
