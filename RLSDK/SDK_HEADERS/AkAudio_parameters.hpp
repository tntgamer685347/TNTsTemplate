/*
#############################################################################################
# RocketLeague (1.0.10897.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: AkAudio_parameters.hpp
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
# Parameters
# ========================================================================================= #
*/

// Function AkAudio.AkBusActor.RegisterReflectionEmitter
// [0x04020401] 
struct AAkBusActor_execRegisterReflectionEmitter_Params
{
	struct FName                                       BusName;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            BusType;                                          		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkBusActor.SetPinnedAxis
// [0x04020401] 
struct AAkBusActor_execSetPinnedAxis_Params
{
	uint8_t                                            AxisToPin;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkDevice.SetBusEffect
// [0x04026401] 
struct UAkDevice_execSetBusEffect_Params
{
	struct FName                                       BusName;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       EffectSetting;                                    		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            EffectSlot;                                       		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function AkAudio.AkDevice.ResetSlapbackObjects
// [0x04022401] 
struct UAkDevice_execResetSlapbackObjects_Params
{
};

// Function AkAudio.AkDevice.SetSoundEnvironment
// [0x04022401] 
struct UAkDevice_execSetSoundEnvironment_Params
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            EnvironmentType;                                  		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkDevice.GetEnvironments
// [0x04022401] 
struct UAkDevice_execGetEnvironments_Params
{
	class UAkEnvironments*                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkDevice.NotifyWhenInitialized
// [0x04022401] 
struct UAkDevice_execNotifyWhenInitialized_Params
{
	struct FScriptDelegate                             Callback;                                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function AkAudio.AkDevice.ProfileStop
// [0x04022401] 
struct UAkDevice_execProfileStop_Params
{
};

// Function AkAudio.AkDevice.ProfileStart
// [0x04022401] 
struct UAkDevice_execProfileStart_Params
{
};

// Function AkAudio.AkDevice.PrintData
// [0x04022401] 
struct UAkDevice_execPrintData_Params
{
};

// Function AkAudio.AkDevice.SetDynamicRange
// [0x04022401] 
struct UAkDevice_execSetDynamicRange_Params
{
	uint8_t                                            Type;                                             		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkDevice.SetOutputType
// [0x04022401] 
struct UAkDevice_execSetOutputType_Params
{
	uint8_t                                            Type;                                             		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkDevice.SetListenerSpatialization
// [0x04022401] 
struct UAkDevice_execSetListenerSpatialization_Params
{
	class ULocalPlayer*                                Player;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            Value;                                            		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkDevice.SetSplitScreenListenerEnabled
// [0x04022401] 
struct UAkDevice_execSetSplitScreenListenerEnabled_Params
{
	uint32_t                                           bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function AkAudio.AkDevice.SetSplitScreenListenerPosition
// [0x04022401] 
struct UAkDevice_execSetSplitScreenListenerPosition_Params
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkDevice.UpdateSecondaryOutputs
// [0x04022401] 
struct UAkDevice_execUpdateSecondaryOutputs_Params
{
};

// Function AkAudio.AkDevice.SetGlobalRTCP
// [0x04022401] 
struct UAkDevice_execSetGlobalRTCP_Params
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkDevice.StopGlobalSound
// [0x04022401] 
struct UAkDevice_execStopGlobalSound_Params
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkDevice.PlayGlobalSound
// [0x04022401] 
struct UAkDevice_execPlayGlobalSound_Params
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkDevice.SetState
// [0x04022401] 
struct UAkDevice_execSetState_Params
{
	struct FName                                       InStateGroup;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       InState;                                          		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkDevice.SetSwitch
// [0x04022401] 
struct UAkDevice_execSetSwitch_Params
{
	class AActor*                                      SourceActor;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       Key;                                              		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       Value;                                            		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkDevice.SetRTCP
// [0x04022401] 
struct UAkDevice_execSetRTCP_Params
{
	class AActor*                                      SourceActor;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       Key;                                              		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Value;                                            		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkDevice.StopAllSounds
// [0x04022401] 
struct UAkDevice_execStopAllSounds_Params
{
	class AActor*                                      SourceActor;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkDevice.StopSound
// [0x04022401] 
struct UAkDevice_execStopSound_Params
{
	class AActor*                                      SourceActor;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UAkSoundCue*                                 Sound;                                            		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkDevice.PlaySound
// [0x04026401] 
struct UAkDevice_execPlaySound_Params
{
	class AActor*                                      SourceActor;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UAkSoundCue*                                 Sound;                                            		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Translation;                                      		// 0x0010 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FRotator                                    Rotation;                                         		// 0x001C (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UAkSoundSource*                              ReturnValue;                                      		// 0x0028 (0x0008) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
};

// Function AkAudio.AkDevice.GetSoundSource
// [0x04026401] 
struct UAkDevice_execGetSoundSource_Params
{
	class AActor*                                      SourceActor;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Translation;                                      		// 0x0008 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FRotator                                    Rotation;                                         		// 0x0014 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UAkSoundSource*                              ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
};

// Function AkAudio.AkDevice.EventInitialized
// [0x00120001] 
struct UAkDevice_execEventInitialized_Params
{
};

// Function AkAudio.AkEnvironments.RemoveActorEnvironment
// [0x00420401] 
struct UAkEnvironments_execRemoveActorEnvironment_Params
{
	class AActor*                                      TargetActor;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      EnvironmentID;                                    		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function AkAudio.AkEnvironments.AddActorEnvironment
// [0x00420401] 
struct UAkEnvironments_execAddActorEnvironment_Params
{
	class AActor*                                      TargetActor;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FAkEnvironment                              Environment;                                      		// 0x0008 (0x0020) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function AkAudio.AkEnvironments.AddLevelDefault
// [0x00420401] 
struct UAkEnvironments_execAddLevelDefault_Params
{
	struct FAkEnvironment                              Environment;                                      		// 0x0000 (0x0020) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function AkAudio.AkMusicAnalysis.UpdateSmoothedMusicInfo
// [0x00022401] 
struct UAkMusicAnalysis_execUpdateSmoothedMusicInfo_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
};

// Function AkAudio.AkMusicAnalysis.UpdateMusicInfo
// [0x00422401] 
struct UAkMusicAnalysis_execUpdateMusicInfo_Params
{
	struct FMusicAnalysisInfo                          NewValues;                                        		// 0x0000 (0x0020) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function AkAudio.AkMusicAnalysis.OnNewTrack
// [0x00022401] 
struct UAkMusicAnalysis_execOnNewTrack_Params
{
	int32_t                                            NewBPM;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkMusicAnalysis.GetInstance
// [0x00022401] 
struct UAkMusicAnalysis_execGetInstance_Params
{
	class UAkMusicAnalysis*                            ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkMusicAnalysis.EventMusicBar
// [0x00120001] 
struct UAkMusicAnalysis_execEventMusicBar_Params
{
};

// Function AkAudio.AkMusicAnalysis.EventMusicBeat
// [0x00120001] 
struct UAkMusicAnalysis_execEventMusicBeat_Params
{
};

// Function AkAudio.AkMusicAnalysis.EventNewMusicTrack
// [0x00120001] 
struct UAkMusicAnalysis_execEventNewMusicTrack_Params
{
	int32_t                                            PlayingID;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            NewBPM;                                           		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkMusicDevice.Seek
// [0x04022401] 
struct UAkMusicDevice_execSeek_Params
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              PositionSeconds;                                  		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkMusicDevice.SetRTCP
// [0x04022401] 
struct UAkMusicDevice_execSetRTCP_Params
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkMusicDevice.StopPlayingID
// [0x04022401] 
struct UAkMusicDevice_execStopPlayingID_Params
{
	int32_t                                            PlayingID;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkMusicDevice.Stop
// [0x04022401] 
struct UAkMusicDevice_execStop_Params
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkMusicDevice.Play
// [0x04022401] 
struct UAkMusicDevice_execPlay_Params
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkMusicDevice.EventTrackEnd
// [0x00120001] 
struct UAkMusicDevice_execEventTrackEnd_Params
{
	int32_t                                            PlayingID;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkMusicDevice.EventTrackStart
// [0x00120001] 
struct UAkMusicDevice_execEventTrackStart_Params
{
	int32_t                                            PlayingID;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      FileMarker;                                       		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function AkAudio.AkParamGroup.SetSendToSlapbacks
// [0x00020003] 
struct UAkParamGroup_execSetSendToSlapbacks_Params
{
	uint32_t                                           bSend : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function AkAudio.AkParamGroup.SetControllerId
// [0x00020003] 
struct UAkParamGroup_execSetControllerId_Params
{
	int32_t                                            InID;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkParamGroup.EnableObjectAttenuation
// [0x00020003] 
struct UAkParamGroup_execEnableObjectAttenuation_Params
{
};

// Function AkAudio.AkParamGroup.DisableObjectAttenuation
// [0x00020003] 
struct UAkParamGroup_execDisableObjectAttenuation_Params
{
};

// Function AkAudio.AkParamGroup.PrintDebugInfo
// [0x400020102] 
struct UAkParamGroup_execPrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// TArray<struct FName>                               RTCPKeys;                                         		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<float>                                      RTCPValues;                                       		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<struct FName>                               SwitchKeys;                                       		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<struct FName>                               SwitchValues;                                     		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            Idx;                                              		// 0x0048 (0x0004) [0x0000000000000000]               
};

// Function AkAudio.AkParamGroup.UpdateSoundSourceAttenuationScaling
// [0x04020401] 
struct UAkParamGroup_execUpdateSoundSourceAttenuationScaling_Params
{
};

// Function AkAudio.AkParamGroup.SetActorParameter
// [0x04020401] 
struct UAkParamGroup_execSetActorParameter_Params
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      Value;                                            		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkParamGroup.SetLinearColorParameter
// [0x04020401] 
struct UAkParamGroup_execSetLinearColorParameter_Params
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FLinearColor                                Value;                                            		// 0x0008 (0x0010) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkParamGroup.SetVectorParameter
// [0x04020401] 
struct UAkParamGroup_execSetVectorParameter_Params
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Value;                                            		// 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkParamGroup.SetFloatParameter
// [0x04020401] 
struct UAkParamGroup_execSetFloatParameter_Params
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkParamGroup.SetNameParameter
// [0x04020401] 
struct UAkParamGroup_execSetNameParameter_Params
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       Value;                                            		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkParamGroup.GetDebugData
// [0x04420401] 
struct UAkParamGroup_execGetDebugData_Params
{
	TArray<struct FName>                               RTCPKeys;                                         		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	TArray<float>                                      RTCPValues;                                       		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	TArray<struct FName>                               SwitchKeys;                                       		// 0x0020 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	TArray<struct FName>                               SwitchValues;                                     		// 0x0030 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function AkAudio.AkParamGroup.StopSound
// [0x04020401] 
struct UAkParamGroup_execStopSound_Params
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkParamGroup.PlaySound
// [0x04024401] 
struct UAkParamGroup_execPlaySound_Params
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Translation;                                      		// 0x0008 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FRotator                                    Rotation;                                         		// 0x0014 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UAkSoundSource*                              ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
};

// Function AkAudio.AkParamGroup.SetSwitch
// [0x04020401] 
struct UAkParamGroup_execSetSwitch_Params
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       Value;                                            		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkParamGroup.SetRTCP
// [0x04020401] 
struct UAkParamGroup_execSetRTCP_Params
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkPlaySoundComponent.SetActorParameter
// [0x00020401] 
struct UAkPlaySoundComponent_execSetActorParameter_Params
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      Value;                                            		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkPlaySoundComponent.SetLinearColorParameter
// [0x00020401] 
struct UAkPlaySoundComponent_execSetLinearColorParameter_Params
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FLinearColor                                Value;                                            		// 0x0008 (0x0010) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkPlaySoundComponent.SetVectorParameter
// [0x00020401] 
struct UAkPlaySoundComponent_execSetVectorParameter_Params
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Value;                                            		// 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkPlaySoundComponent.SetFloatParameter
// [0x00020401] 
struct UAkPlaySoundComponent_execSetFloatParameter_Params
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkPlaySoundComponent.SetNameParameter
// [0x00020401] 
struct UAkPlaySoundComponent_execSetNameParameter_Params
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       Value;                                            		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkPlaySoundComponent.SetRTCP
// [0x00020401] 
struct UAkPlaySoundComponent_execSetRTCP_Params
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkPlaySoundComponent.SetSwitch
// [0x00020401] 
struct UAkPlaySoundComponent_execSetSwitch_Params
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       Value;                                            		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkPlaySoundComponent.IsPlaying
// [0x00020401] 
struct UAkPlaySoundComponent_execIsPlaying_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkPlaySoundComponent.Stop
// [0x00020401] 
struct UAkPlaySoundComponent_execStop_Params
{
};

// Function AkAudio.AkPlaySoundComponent.Play
// [0x00020401] 
struct UAkPlaySoundComponent_execPlay_Params
{
};

// Function AkAudio.AkRevPhysicsSimulation.PrintDebugInfo
// [0x400020102] 
struct UAkRevPhysicsSimulation_execPrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkRevPhysicsSimulation.InterpGearRatio
// [0x00422401] 
struct UAkRevPhysicsSimulation_execInterpGearRatio_Params
{
	struct FAkRevSimUpdateParams                       SimUpdate;                                        		// 0x0000 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            Gear;                                             		// 0x0048 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x004C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkRevPhysicsSimulation.GetGearRatio
// [0x00422401] 
struct UAkRevPhysicsSimulation_execGetGearRatio_Params
{
	struct FAkRevSimUpdateParams                       SimUpdate;                                        		// 0x0000 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	float                                              ReturnValue;                                      		// 0x0048 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkRevPhysicsSimulation.CalcVelocity
// [0x00020401] 
struct UAkRevPhysicsSimulation_execCalcVelocity_Params
{
	float                                              GearRatio;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              RPM;                                              		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkRevPhysicsSimulation.CalcRPM
// [0x00020401] 
struct UAkRevPhysicsSimulation_execCalcRPM_Params
{
	float                                              GearRatio;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Velocity;                                         		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkRevPhysicsSimulation.Step
// [0x00420401] 
struct UAkRevPhysicsSimulation_execStep_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FAkRevSimUpdateParams                       Params;                                           		// 0x0008 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FAkRevSimFrame                              ReturnValue;                                      		// 0x0050 (0x0010) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkRevPhysicsSimulation.EventGearChange
// [0x00120001] 
struct UAkRevPhysicsSimulation_execEventGearChange_Params
{
	class UAkRevPhysicsSimulation*                     Simulation;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkSoundBanksInfo.Parse
// [0x00022401] 
struct UAkSoundBanksInfo_execParse_Params
{
	class FString                                      Text;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UAkSoundBanksInfo*                           ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkSoundBanksInfo.LoadForNativePlatform
// [0x00022401] 
struct UAkSoundBanksInfo_execLoadForNativePlatform_Params
{
	class UAkSoundBanksInfo*                           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkSoundSource.SetSubtitlesEnabled
// [0x04020803] 
struct UAkSoundSource_eventSetSubtitlesEnabled_Params
{
	uint32_t                                           bValue : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function AkAudio.AkSoundSource.SetAttenuationScaling
// [0x04020401] 
struct UAkSoundSource_execSetAttenuationScaling_Params
{
	uint8_t                                            AttenuationType;                                  		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkSoundSource.ForceUpdatePosition
// [0x04020401] 
struct UAkSoundSource_execForceUpdatePosition_Params
{
};

// Function AkAudio.AkSoundSource.RegisterReflectionEmitter
// [0x04020401] 
struct UAkSoundSource_execRegisterReflectionEmitter_Params
{
	struct FName                                       BusName;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            BusType;                                          		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkSoundSource.IsPlayingAny
// [0x04020401] 
struct UAkSoundSource_execIsPlayingAny_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkSoundSource.IsPlaying
// [0x04020401] 
struct UAkSoundSource_execIsPlaying_Params
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkSoundSource.Seek
// [0x04020401] 
struct UAkSoundSource_execSeek_Params
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              SeekSeconds;                                      		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkSoundSource.StopAll
// [0x04020401] 
struct UAkSoundSource_execStopAll_Params
{
};

// Function AkAudio.AkSoundSource.Stop
// [0x04020401] 
struct UAkSoundSource_execStop_Params
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkSoundSource.Play
// [0x04020401] 
struct UAkSoundSource_execPlay_Params
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkSoundSource.EventDuration
// [0x00120001] 
struct UAkSoundSource_execEventDuration_Params
{
	class UAkSoundSource*                              Source;                                           		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	int32_t                                            PlayingID;                                        		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              DurationMS;                                       		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkSoundSource.EventMarker
// [0x00120001] 
struct UAkSoundSource_execEventMarker_Params
{
	class UAkSoundSource*                              Source;                                           		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	int32_t                                            PlayingID;                                        		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Marker;                                           		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function AkAudio.AkSoundSource.EventFinished
// [0x00120001] 
struct UAkSoundSource_execEventFinished_Params
{
	class UAkSoundSource*                              Source;                                           		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	int32_t                                            PlayingID;                                        		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.SeqAct_AkPlayMusicWithCues.TriggerEvents
// [0x00040803] 
struct USeqAct_AkPlayMusicWithCues_eventTriggerEvents_Params
{
	class FString                                      CueName;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class AWorldInfo*                                  CurWorldInfo;                                     		// 0x0010 (0x0008) [0x0000000000000000]               
	// class USeqEvent_AkMusicCue*                        Evt;                                              		// 0x0018 (0x0008) [0x0000000000000000]               
};

// Function AkAudio.SeqAct_AkPlaySound.ToggleSoundFor
// [0x00020003] 
struct USeqAct_AkPlaySound_execToggleSoundFor_Params
{
	class AActor*                                      A;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bPlay : 1;                                        		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function AkAudio.SeqAct_AkPlaySound.ToggleSound
// [0x00020003] 
struct USeqAct_AkPlaySound_execToggleSound_Params
{
	uint32_t                                           bPlay : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class UObject*                                     O;                                                		// 0x0008 (0x0008) [0x0000000000000000]               
	// class AActor*                                      A;                                                		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function AkAudio.SeqAct_AkPlaySound.Activated
// [0x400020802] 
struct USeqAct_AkPlaySound_eventActivated_Params
{
};

// Function AkAudio.SeqAct_AkPostEvent.HandleSoundCueFinished
// [0x00040C01] 
struct USeqAct_AkPostEvent_eventHandleSoundCueFinished_Params
{
	class UAkSoundSource*                              Source;                                           		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	int32_t                                            PlayingID;                                        		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkAmbientSoundActor.OnToggle
// [0x00020003] 
struct AAkAmbientSoundActor_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.SeqAct_AkPlaySoundAndSeek.ToggleSoundFor
// [0x00020003] 
struct USeqAct_AkPlaySoundAndSeek_execToggleSoundFor_Params
{
	class AActor*                                      A;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bPlay : 1;                                        		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function AkAudio.SeqAct_AkPlaySoundAndSeek.ToggleSound
// [0x00020003] 
struct USeqAct_AkPlaySoundAndSeek_execToggleSound_Params
{
	uint32_t                                           bPlay : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class UObject*                                     O;                                                		// 0x0008 (0x0008) [0x0000000000000000]               
	// class AActor*                                      A;                                                		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function AkAudio.SeqAct_AkPlaySoundAndSeek.Activated
// [0x400020802] 
struct USeqAct_AkPlaySoundAndSeek_eventActivated_Params
{
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
