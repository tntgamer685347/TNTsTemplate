/*
#############################################################################################
# Rocket League SDK (RLSDK) Season 20 (v2.61)
# Generated with CodeRedGenerator v1.1.5 on 11/05/2025 07:11PM
# ========================================================================================= #
# File: AkAudio_structs.hpp
# ========================================================================================= #
# Psyonix Build ID: 251020.62592.500294
# Build Date: Oct 20 2025 19:02:19
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless, SSLow
# Links: www.github.com/CodeRedModding/CodeRed-Generator, discord.gg/d5ahhQmJbJ
#############################################################################################
*/
#pragma once

#ifdef _MSC_VER
#pragma pack(push, 0x1)
#endif

/*
# ========================================================================================= #
# Structs
# ========================================================================================= #
*/

// ScriptStruct AkAudio.AkParamGroup.AkParamSet
// Size: 0x00A0
struct FAkParamSet
{
	struct FMap_Mirror                                 RTCPs;                                         // 0x0000 (0x0050) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FMap_Mirror                                 Switches;                                      // 0x0050 (0x0050) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct AkAudio.AkSoundSource.ActiveSound
// Size: 0x0010
struct FActiveSound
{
	class UAkSoundCue*                                 Sound;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            PlayId;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            StopId;                                        // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct AkAudio.AkEnvironments.uint
// Size: 0x0004
struct Fuint
{
	int32_t                                            dummyint;                                      // 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct AkAudio.AkEnvironments.AkEnvironment
// Size: 0x0020
struct FAkEnvironment
{
	class FString                                      Id;                                            // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            Priority;                                      // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              WetValue;                                      // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DryValue;                                      // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct Fuint                                       HashedEnvID;                                   // 0x001C (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct AkAudio.AkEnvironments.AkActorEnvironment
// Size: 0x0018
struct FAkActorEnvironment
{
	class TArray<struct FAkEnvironment>                Environments;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class AActor*                                      TargetActor;                                   // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct AkAudio.AkMusicAnalysis.MusicAnalysisInfo
// Size: 0x0020 (0x001C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FMusicAnalysisInfo
{
	float                                              LowEnergy;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class TArray<float>                                Frequencies;                                   // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              HighEnergy;                                    // 0x0018 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x001C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct AkAudio.AkRevPhysicsSimulation.AkRevSimPhysicsControls
// Size: 0x0020
struct FAkRevSimPhysicsControls
{
	float                                              Weight;                                        // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              EngineTorque;                                  // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BreakingHorsePower;                            // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x4];                            // 0x000C (0x0004) MISSED OFFSET
	class TArray<float>                                GearRatios;                                    // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct AkAudio.AkRevPhysicsSimulation.AkRevSimFrame
// Size: 0x0010
struct FAkRevSimFrame
{
	float                                              RPM;                                           // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Gear;                                          // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            RevGear;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Velocity;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct AkAudio.AkRevPhysicsSimulation.AkRevSimUpdateParams
// Size: 0x0048
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
// Size: 0x0030
struct FSoundBankInfo
{
	class FString                                      ShortName;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      RelativePath;                                  // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Language;                                      // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct AkAudio.InterpTrackAkEvent.AkEventTrackKey
// Size: 0x0010
struct FAkEventTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class UAkSoundCue*                                 Event;                                         // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct AkAudio.SeqAct_AkPlayMusicWithCues.MusicSyncEvent
// Size: 0x0018 (0x0011 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FMusicSyncEvent
{
	class FString                                      CueName;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            CueType;                                       // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0011 (0x0007) PADDING FOR MINALIGNMENT
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
