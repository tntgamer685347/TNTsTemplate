/*
#############################################################################################
# RocketLeague (1.0.10897.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: AkAudio_classes.cpp
# ========================================================================================= #
# Credits: TheFeckless, ItsBranK
# Links: www.github.com/CodeRedModding/CodeRed-Generator, www.twitter.com/ItsBranK
#############################################################################################
*/
#include "../SdkHeaders.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function AkAudio.AkBusActor.RegisterReflectionEmitter
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// struct FName                   BusName                        (CPF_Parm)
// EBusEmitterType                BusType                        (CPF_Parm)

void AAkBusActor::RegisterReflectionEmitter(struct FName BusName, EBusEmitterType BusType)
{
	static UFunction* uFnRegisterReflectionEmitter = nullptr;

	if (!uFnRegisterReflectionEmitter)
	{
		uFnRegisterReflectionEmitter = UFunction::FindFunction("Function AkAudio.AkBusActor.RegisterReflectionEmitter");
	}

	AAkBusActor_execRegisterReflectionEmitter_Params RegisterReflectionEmitter_Params;
	memset(&RegisterReflectionEmitter_Params, 0, sizeof(RegisterReflectionEmitter_Params));
	memcpy_s(&RegisterReflectionEmitter_Params.BusName, sizeof(RegisterReflectionEmitter_Params.BusName), &BusName, sizeof(BusName));
	memcpy_s(&RegisterReflectionEmitter_Params.BusType, sizeof(RegisterReflectionEmitter_Params.BusType), &BusType, sizeof(BusType));

	uFnRegisterReflectionEmitter->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRegisterReflectionEmitter, &RegisterReflectionEmitter_Params, nullptr);
	uFnRegisterReflectionEmitter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkBusActor.SetPinnedAxis
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// EPinnedAxisType                AxisToPin                      (CPF_Parm)

void AAkBusActor::SetPinnedAxis(EPinnedAxisType AxisToPin)
{
	static UFunction* uFnSetPinnedAxis = nullptr;

	if (!uFnSetPinnedAxis)
	{
		uFnSetPinnedAxis = UFunction::FindFunction("Function AkAudio.AkBusActor.SetPinnedAxis");
	}

	AAkBusActor_execSetPinnedAxis_Params SetPinnedAxis_Params;
	memset(&SetPinnedAxis_Params, 0, sizeof(SetPinnedAxis_Params));
	memcpy_s(&SetPinnedAxis_Params.AxisToPin, sizeof(SetPinnedAxis_Params.AxisToPin), &AxisToPin, sizeof(AxisToPin));

	uFnSetPinnedAxis->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetPinnedAxis, &SetPinnedAxis_Params, nullptr);
	uFnSetPinnedAxis->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetBusEffect
// [0x04026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// struct FName                   BusName                        (CPF_Parm)
// struct FName                   EffectSetting                  (CPF_Parm)
// int32_t                        EffectSlot                     (CPF_OptionalParm | CPF_Parm)

void UAkDevice::SetBusEffect(struct FName BusName, struct FName EffectSetting, int32_t EffectSlot)
{
	static UFunction* uFnSetBusEffect = nullptr;

	if (!uFnSetBusEffect)
	{
		uFnSetBusEffect = UFunction::FindFunction("Function AkAudio.AkDevice.SetBusEffect");
	}

	UAkDevice_execSetBusEffect_Params SetBusEffect_Params;
	memset(&SetBusEffect_Params, 0, sizeof(SetBusEffect_Params));
	memcpy_s(&SetBusEffect_Params.BusName, sizeof(SetBusEffect_Params.BusName), &BusName, sizeof(BusName));
	memcpy_s(&SetBusEffect_Params.EffectSetting, sizeof(SetBusEffect_Params.EffectSetting), &EffectSetting, sizeof(EffectSetting));
	memcpy_s(&SetBusEffect_Params.EffectSlot, sizeof(SetBusEffect_Params.EffectSlot), &EffectSlot, sizeof(EffectSlot));

	uFnSetBusEffect->FunctionFlags &= ~0x400;
	UAkDevice::StaticClass()->ProcessEvent(uFnSetBusEffect, &SetBusEffect_Params, nullptr);
	uFnSetBusEffect->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.ResetSlapbackObjects
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:

void UAkDevice::ResetSlapbackObjects()
{
	static UFunction* uFnResetSlapbackObjects = nullptr;

	if (!uFnResetSlapbackObjects)
	{
		uFnResetSlapbackObjects = UFunction::FindFunction("Function AkAudio.AkDevice.ResetSlapbackObjects");
	}

	UAkDevice_execResetSlapbackObjects_Params ResetSlapbackObjects_Params;
	memset(&ResetSlapbackObjects_Params, 0, sizeof(ResetSlapbackObjects_Params));

	uFnResetSlapbackObjects->FunctionFlags &= ~0x400;
	UAkDevice::StaticClass()->ProcessEvent(uFnResetSlapbackObjects, &ResetSlapbackObjects_Params, nullptr);
	uFnResetSlapbackObjects->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetSoundEnvironment
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  Actor                          (CPF_Parm)
// EAkEnvironmentType             EnvironmentType                (CPF_Parm)

void UAkDevice::SetSoundEnvironment(class AActor* Actor, EAkEnvironmentType EnvironmentType)
{
	static UFunction* uFnSetSoundEnvironment = nullptr;

	if (!uFnSetSoundEnvironment)
	{
		uFnSetSoundEnvironment = UFunction::FindFunction("Function AkAudio.AkDevice.SetSoundEnvironment");
	}

	UAkDevice_execSetSoundEnvironment_Params SetSoundEnvironment_Params;
	memset(&SetSoundEnvironment_Params, 0, sizeof(SetSoundEnvironment_Params));
	memcpy_s(&SetSoundEnvironment_Params.Actor, sizeof(SetSoundEnvironment_Params.Actor), &Actor, sizeof(Actor));
	memcpy_s(&SetSoundEnvironment_Params.EnvironmentType, sizeof(SetSoundEnvironment_Params.EnvironmentType), &EnvironmentType, sizeof(EnvironmentType));

	uFnSetSoundEnvironment->FunctionFlags &= ~0x400;
	UAkDevice::StaticClass()->ProcessEvent(uFnSetSoundEnvironment, &SetSoundEnvironment_Params, nullptr);
	uFnSetSoundEnvironment->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.GetEnvironments
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// class UAkEnvironments*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UAkEnvironments* UAkDevice::GetEnvironments()
{
	static UFunction* uFnGetEnvironments = nullptr;

	if (!uFnGetEnvironments)
	{
		uFnGetEnvironments = UFunction::FindFunction("Function AkAudio.AkDevice.GetEnvironments");
	}

	UAkDevice_execGetEnvironments_Params GetEnvironments_Params;
	memset(&GetEnvironments_Params, 0, sizeof(GetEnvironments_Params));

	uFnGetEnvironments->FunctionFlags &= ~0x400;
	UAkDevice::StaticClass()->ProcessEvent(uFnGetEnvironments, &GetEnvironments_Params, nullptr);
	uFnGetEnvironments->FunctionFlags |= 0x400;

	return GetEnvironments_Params.ReturnValue;
};

// Function AkAudio.AkDevice.NotifyWhenInitialized
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UAkDevice::NotifyWhenInitialized(struct FScriptDelegate Callback)
{
	static UFunction* uFnNotifyWhenInitialized = nullptr;

	if (!uFnNotifyWhenInitialized)
	{
		uFnNotifyWhenInitialized = UFunction::FindFunction("Function AkAudio.AkDevice.NotifyWhenInitialized");
	}

	UAkDevice_execNotifyWhenInitialized_Params NotifyWhenInitialized_Params;
	memset(&NotifyWhenInitialized_Params, 0, sizeof(NotifyWhenInitialized_Params));
	memcpy_s(&NotifyWhenInitialized_Params.Callback, sizeof(NotifyWhenInitialized_Params.Callback), &Callback, sizeof(Callback));

	uFnNotifyWhenInitialized->FunctionFlags &= ~0x400;
	UAkDevice::StaticClass()->ProcessEvent(uFnNotifyWhenInitialized, &NotifyWhenInitialized_Params, nullptr);
	uFnNotifyWhenInitialized->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.ProfileStop
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:

void UAkDevice::ProfileStop()
{
	static UFunction* uFnProfileStop = nullptr;

	if (!uFnProfileStop)
	{
		uFnProfileStop = UFunction::FindFunction("Function AkAudio.AkDevice.ProfileStop");
	}

	UAkDevice_execProfileStop_Params ProfileStop_Params;
	memset(&ProfileStop_Params, 0, sizeof(ProfileStop_Params));

	uFnProfileStop->FunctionFlags &= ~0x400;
	UAkDevice::StaticClass()->ProcessEvent(uFnProfileStop, &ProfileStop_Params, nullptr);
	uFnProfileStop->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.ProfileStart
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:

void UAkDevice::ProfileStart()
{
	static UFunction* uFnProfileStart = nullptr;

	if (!uFnProfileStart)
	{
		uFnProfileStart = UFunction::FindFunction("Function AkAudio.AkDevice.ProfileStart");
	}

	UAkDevice_execProfileStart_Params ProfileStart_Params;
	memset(&ProfileStart_Params, 0, sizeof(ProfileStart_Params));

	uFnProfileStart->FunctionFlags &= ~0x400;
	UAkDevice::StaticClass()->ProcessEvent(uFnProfileStart, &ProfileStart_Params, nullptr);
	uFnProfileStart->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.PrintData
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:

void UAkDevice::PrintData()
{
	static UFunction* uFnPrintData = nullptr;

	if (!uFnPrintData)
	{
		uFnPrintData = UFunction::FindFunction("Function AkAudio.AkDevice.PrintData");
	}

	UAkDevice_execPrintData_Params PrintData_Params;
	memset(&PrintData_Params, 0, sizeof(PrintData_Params));

	uFnPrintData->FunctionFlags &= ~0x400;
	UAkDevice::StaticClass()->ProcessEvent(uFnPrintData, &PrintData_Params, nullptr);
	uFnPrintData->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetDynamicRange
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// EAkDynamicRangeType            Type                           (CPF_Parm)

void UAkDevice::SetDynamicRange(EAkDynamicRangeType Type)
{
	static UFunction* uFnSetDynamicRange = nullptr;

	if (!uFnSetDynamicRange)
	{
		uFnSetDynamicRange = UFunction::FindFunction("Function AkAudio.AkDevice.SetDynamicRange");
	}

	UAkDevice_execSetDynamicRange_Params SetDynamicRange_Params;
	memset(&SetDynamicRange_Params, 0, sizeof(SetDynamicRange_Params));
	memcpy_s(&SetDynamicRange_Params.Type, sizeof(SetDynamicRange_Params.Type), &Type, sizeof(Type));

	uFnSetDynamicRange->FunctionFlags &= ~0x400;
	UAkDevice::StaticClass()->ProcessEvent(uFnSetDynamicRange, &SetDynamicRange_Params, nullptr);
	uFnSetDynamicRange->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetOutputType
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// EAkOutputType                  Type                           (CPF_Parm)

void UAkDevice::SetOutputType(EAkOutputType Type)
{
	static UFunction* uFnSetOutputType = nullptr;

	if (!uFnSetOutputType)
	{
		uFnSetOutputType = UFunction::FindFunction("Function AkAudio.AkDevice.SetOutputType");
	}

	UAkDevice_execSetOutputType_Params SetOutputType_Params;
	memset(&SetOutputType_Params, 0, sizeof(SetOutputType_Params));
	memcpy_s(&SetOutputType_Params.Type, sizeof(SetOutputType_Params.Type), &Type, sizeof(Type));

	uFnSetOutputType->FunctionFlags &= ~0x400;
	UAkDevice::StaticClass()->ProcessEvent(uFnSetOutputType, &SetOutputType_Params, nullptr);
	uFnSetOutputType->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetListenerSpatialization
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// class ULocalPlayer*            Player                         (CPF_Parm)
// EAkListenerSpacialization      Value                          (CPF_Parm)

void UAkDevice::SetListenerSpatialization(class ULocalPlayer* Player, EAkListenerSpacialization Value)
{
	static UFunction* uFnSetListenerSpatialization = nullptr;

	if (!uFnSetListenerSpatialization)
	{
		uFnSetListenerSpatialization = UFunction::FindFunction("Function AkAudio.AkDevice.SetListenerSpatialization");
	}

	UAkDevice_execSetListenerSpatialization_Params SetListenerSpatialization_Params;
	memset(&SetListenerSpatialization_Params, 0, sizeof(SetListenerSpatialization_Params));
	memcpy_s(&SetListenerSpatialization_Params.Player, sizeof(SetListenerSpatialization_Params.Player), &Player, sizeof(Player));
	memcpy_s(&SetListenerSpatialization_Params.Value, sizeof(SetListenerSpatialization_Params.Value), &Value, sizeof(Value));

	uFnSetListenerSpatialization->FunctionFlags &= ~0x400;
	UAkDevice::StaticClass()->ProcessEvent(uFnSetListenerSpatialization, &SetListenerSpatialization_Params, nullptr);
	uFnSetListenerSpatialization->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetSplitScreenListenerEnabled
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// bool                           bEnable                        (CPF_Parm)

void UAkDevice::SetSplitScreenListenerEnabled(bool bEnable)
{
	static UFunction* uFnSetSplitScreenListenerEnabled = nullptr;

	if (!uFnSetSplitScreenListenerEnabled)
	{
		uFnSetSplitScreenListenerEnabled = UFunction::FindFunction("Function AkAudio.AkDevice.SetSplitScreenListenerEnabled");
	}

	UAkDevice_execSetSplitScreenListenerEnabled_Params SetSplitScreenListenerEnabled_Params;
	memset(&SetSplitScreenListenerEnabled_Params, 0, sizeof(SetSplitScreenListenerEnabled_Params));
	SetSplitScreenListenerEnabled_Params.bEnable = bEnable;

	uFnSetSplitScreenListenerEnabled->FunctionFlags &= ~0x400;
	UAkDevice::StaticClass()->ProcessEvent(uFnSetSplitScreenListenerEnabled, &SetSplitScreenListenerEnabled_Params, nullptr);
	uFnSetSplitScreenListenerEnabled->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetSplitScreenListenerPosition
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 Location                       (CPF_Parm)

void UAkDevice::SetSplitScreenListenerPosition(struct FVector Location)
{
	static UFunction* uFnSetSplitScreenListenerPosition = nullptr;

	if (!uFnSetSplitScreenListenerPosition)
	{
		uFnSetSplitScreenListenerPosition = UFunction::FindFunction("Function AkAudio.AkDevice.SetSplitScreenListenerPosition");
	}

	UAkDevice_execSetSplitScreenListenerPosition_Params SetSplitScreenListenerPosition_Params;
	memset(&SetSplitScreenListenerPosition_Params, 0, sizeof(SetSplitScreenListenerPosition_Params));
	memcpy_s(&SetSplitScreenListenerPosition_Params.Location, sizeof(SetSplitScreenListenerPosition_Params.Location), &Location, sizeof(Location));

	uFnSetSplitScreenListenerPosition->FunctionFlags &= ~0x400;
	UAkDevice::StaticClass()->ProcessEvent(uFnSetSplitScreenListenerPosition, &SetSplitScreenListenerPosition_Params, nullptr);
	uFnSetSplitScreenListenerPosition->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.UpdateSecondaryOutputs
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:

void UAkDevice::UpdateSecondaryOutputs()
{
	static UFunction* uFnUpdateSecondaryOutputs = nullptr;

	if (!uFnUpdateSecondaryOutputs)
	{
		uFnUpdateSecondaryOutputs = UFunction::FindFunction("Function AkAudio.AkDevice.UpdateSecondaryOutputs");
	}

	UAkDevice_execUpdateSecondaryOutputs_Params UpdateSecondaryOutputs_Params;
	memset(&UpdateSecondaryOutputs_Params, 0, sizeof(UpdateSecondaryOutputs_Params));

	uFnUpdateSecondaryOutputs->FunctionFlags &= ~0x400;
	UAkDevice::StaticClass()->ProcessEvent(uFnUpdateSecondaryOutputs, &UpdateSecondaryOutputs_Params, nullptr);
	uFnUpdateSecondaryOutputs->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetGlobalRTCP
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkDevice::SetGlobalRTCP(struct FName Key, float Value)
{
	static UFunction* uFnSetGlobalRTCP = nullptr;

	if (!uFnSetGlobalRTCP)
	{
		uFnSetGlobalRTCP = UFunction::FindFunction("Function AkAudio.AkDevice.SetGlobalRTCP");
	}

	UAkDevice_execSetGlobalRTCP_Params SetGlobalRTCP_Params;
	memset(&SetGlobalRTCP_Params, 0, sizeof(SetGlobalRTCP_Params));
	memcpy_s(&SetGlobalRTCP_Params.Key, sizeof(SetGlobalRTCP_Params.Key), &Key, sizeof(Key));
	memcpy_s(&SetGlobalRTCP_Params.Value, sizeof(SetGlobalRTCP_Params.Value), &Value, sizeof(Value));

	uFnSetGlobalRTCP->FunctionFlags &= ~0x400;
	UAkDevice::StaticClass()->ProcessEvent(uFnSetGlobalRTCP, &SetGlobalRTCP_Params, nullptr);
	uFnSetGlobalRTCP->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.StopGlobalSound
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkDevice::StopGlobalSound(class UAkSoundCue* Sound)
{
	static UFunction* uFnStopGlobalSound = nullptr;

	if (!uFnStopGlobalSound)
	{
		uFnStopGlobalSound = UFunction::FindFunction("Function AkAudio.AkDevice.StopGlobalSound");
	}

	UAkDevice_execStopGlobalSound_Params StopGlobalSound_Params;
	memset(&StopGlobalSound_Params, 0, sizeof(StopGlobalSound_Params));
	memcpy_s(&StopGlobalSound_Params.Sound, sizeof(StopGlobalSound_Params.Sound), &Sound, sizeof(Sound));

	uFnStopGlobalSound->FunctionFlags &= ~0x400;
	UAkDevice::StaticClass()->ProcessEvent(uFnStopGlobalSound, &StopGlobalSound_Params, nullptr);
	uFnStopGlobalSound->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.PlayGlobalSound
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkDevice::PlayGlobalSound(class UAkSoundCue* Sound)
{
	static UFunction* uFnPlayGlobalSound = nullptr;

	if (!uFnPlayGlobalSound)
	{
		uFnPlayGlobalSound = UFunction::FindFunction("Function AkAudio.AkDevice.PlayGlobalSound");
	}

	UAkDevice_execPlayGlobalSound_Params PlayGlobalSound_Params;
	memset(&PlayGlobalSound_Params, 0, sizeof(PlayGlobalSound_Params));
	memcpy_s(&PlayGlobalSound_Params.Sound, sizeof(PlayGlobalSound_Params.Sound), &Sound, sizeof(Sound));

	uFnPlayGlobalSound->FunctionFlags &= ~0x400;
	UAkDevice::StaticClass()->ProcessEvent(uFnPlayGlobalSound, &PlayGlobalSound_Params, nullptr);
	uFnPlayGlobalSound->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetState
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// struct FName                   InStateGroup                   (CPF_Parm)
// struct FName                   InState                        (CPF_Parm)

void UAkDevice::SetState(struct FName InStateGroup, struct FName InState)
{
	static UFunction* uFnSetState = nullptr;

	if (!uFnSetState)
	{
		uFnSetState = UFunction::FindFunction("Function AkAudio.AkDevice.SetState");
	}

	UAkDevice_execSetState_Params SetState_Params;
	memset(&SetState_Params, 0, sizeof(SetState_Params));
	memcpy_s(&SetState_Params.InStateGroup, sizeof(SetState_Params.InStateGroup), &InStateGroup, sizeof(InStateGroup));
	memcpy_s(&SetState_Params.InState, sizeof(SetState_Params.InState), &InState, sizeof(InState));

	uFnSetState->FunctionFlags &= ~0x400;
	UAkDevice::StaticClass()->ProcessEvent(uFnSetState, &SetState_Params, nullptr);
	uFnSetState->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetSwitch
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  SourceActor                    (CPF_Parm)
// struct FName                   Key                            (CPF_Parm)
// struct FName                   Value                          (CPF_Parm)

void UAkDevice::SetSwitch(class AActor* SourceActor, struct FName Key, struct FName Value)
{
	static UFunction* uFnSetSwitch = nullptr;

	if (!uFnSetSwitch)
	{
		uFnSetSwitch = UFunction::FindFunction("Function AkAudio.AkDevice.SetSwitch");
	}

	UAkDevice_execSetSwitch_Params SetSwitch_Params;
	memset(&SetSwitch_Params, 0, sizeof(SetSwitch_Params));
	memcpy_s(&SetSwitch_Params.SourceActor, sizeof(SetSwitch_Params.SourceActor), &SourceActor, sizeof(SourceActor));
	memcpy_s(&SetSwitch_Params.Key, sizeof(SetSwitch_Params.Key), &Key, sizeof(Key));
	memcpy_s(&SetSwitch_Params.Value, sizeof(SetSwitch_Params.Value), &Value, sizeof(Value));

	uFnSetSwitch->FunctionFlags &= ~0x400;
	UAkDevice::StaticClass()->ProcessEvent(uFnSetSwitch, &SetSwitch_Params, nullptr);
	uFnSetSwitch->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetRTCP
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  SourceActor                    (CPF_Parm)
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkDevice::SetRTCP(class AActor* SourceActor, struct FName Key, float Value)
{
	static UFunction* uFnSetRTCP = nullptr;

	if (!uFnSetRTCP)
	{
		uFnSetRTCP = UFunction::FindFunction("Function AkAudio.AkDevice.SetRTCP");
	}

	UAkDevice_execSetRTCP_Params SetRTCP_Params;
	memset(&SetRTCP_Params, 0, sizeof(SetRTCP_Params));
	memcpy_s(&SetRTCP_Params.SourceActor, sizeof(SetRTCP_Params.SourceActor), &SourceActor, sizeof(SourceActor));
	memcpy_s(&SetRTCP_Params.Key, sizeof(SetRTCP_Params.Key), &Key, sizeof(Key));
	memcpy_s(&SetRTCP_Params.Value, sizeof(SetRTCP_Params.Value), &Value, sizeof(Value));

	uFnSetRTCP->FunctionFlags &= ~0x400;
	UAkDevice::StaticClass()->ProcessEvent(uFnSetRTCP, &SetRTCP_Params, nullptr);
	uFnSetRTCP->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.StopAllSounds
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  SourceActor                    (CPF_Parm)

void UAkDevice::StopAllSounds(class AActor* SourceActor)
{
	static UFunction* uFnStopAllSounds = nullptr;

	if (!uFnStopAllSounds)
	{
		uFnStopAllSounds = UFunction::FindFunction("Function AkAudio.AkDevice.StopAllSounds");
	}

	UAkDevice_execStopAllSounds_Params StopAllSounds_Params;
	memset(&StopAllSounds_Params, 0, sizeof(StopAllSounds_Params));
	memcpy_s(&StopAllSounds_Params.SourceActor, sizeof(StopAllSounds_Params.SourceActor), &SourceActor, sizeof(SourceActor));

	uFnStopAllSounds->FunctionFlags &= ~0x400;
	UAkDevice::StaticClass()->ProcessEvent(uFnStopAllSounds, &StopAllSounds_Params, nullptr);
	uFnStopAllSounds->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.StopSound
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  SourceActor                    (CPF_Parm)
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkDevice::StopSound(class AActor* SourceActor, class UAkSoundCue* Sound)
{
	static UFunction* uFnStopSound = nullptr;

	if (!uFnStopSound)
	{
		uFnStopSound = UFunction::FindFunction("Function AkAudio.AkDevice.StopSound");
	}

	UAkDevice_execStopSound_Params StopSound_Params;
	memset(&StopSound_Params, 0, sizeof(StopSound_Params));
	memcpy_s(&StopSound_Params.SourceActor, sizeof(StopSound_Params.SourceActor), &SourceActor, sizeof(SourceActor));
	memcpy_s(&StopSound_Params.Sound, sizeof(StopSound_Params.Sound), &Sound, sizeof(Sound));

	uFnStopSound->FunctionFlags &= ~0x400;
	UAkDevice::StaticClass()->ProcessEvent(uFnStopSound, &StopSound_Params, nullptr);
	uFnStopSound->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.PlaySound
// [0x04026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// class UAkSoundSource*          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
// class AActor*                  SourceActor                    (CPF_Parm)
// class UAkSoundCue*             Sound                          (CPF_Parm)
// struct FVector                 Translation                    (CPF_OptionalParm | CPF_Parm)
// struct FRotator                Rotation                       (CPF_OptionalParm | CPF_Parm)

class UAkSoundSource* UAkDevice::PlaySound(class AActor* SourceActor, class UAkSoundCue* Sound, struct FVector Translation, struct FRotator Rotation)
{
	static UFunction* uFnPlaySound = nullptr;

	if (!uFnPlaySound)
	{
		uFnPlaySound = UFunction::FindFunction("Function AkAudio.AkDevice.PlaySound");
	}

	UAkDevice_execPlaySound_Params PlaySound_Params;
	memset(&PlaySound_Params, 0, sizeof(PlaySound_Params));
	memcpy_s(&PlaySound_Params.SourceActor, sizeof(PlaySound_Params.SourceActor), &SourceActor, sizeof(SourceActor));
	memcpy_s(&PlaySound_Params.Sound, sizeof(PlaySound_Params.Sound), &Sound, sizeof(Sound));
	memcpy_s(&PlaySound_Params.Translation, sizeof(PlaySound_Params.Translation), &Translation, sizeof(Translation));
	memcpy_s(&PlaySound_Params.Rotation, sizeof(PlaySound_Params.Rotation), &Rotation, sizeof(Rotation));

	uFnPlaySound->FunctionFlags &= ~0x400;
	UAkDevice::StaticClass()->ProcessEvent(uFnPlaySound, &PlaySound_Params, nullptr);
	uFnPlaySound->FunctionFlags |= 0x400;

	return PlaySound_Params.ReturnValue;
};

// Function AkAudio.AkDevice.GetSoundSource
// [0x04026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// class UAkSoundSource*          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
// class AActor*                  SourceActor                    (CPF_Parm)
// struct FVector                 Translation                    (CPF_OptionalParm | CPF_Parm)
// struct FRotator                Rotation                       (CPF_OptionalParm | CPF_Parm)

class UAkSoundSource* UAkDevice::GetSoundSource(class AActor* SourceActor, struct FVector Translation, struct FRotator Rotation)
{
	static UFunction* uFnGetSoundSource = nullptr;

	if (!uFnGetSoundSource)
	{
		uFnGetSoundSource = UFunction::FindFunction("Function AkAudio.AkDevice.GetSoundSource");
	}

	UAkDevice_execGetSoundSource_Params GetSoundSource_Params;
	memset(&GetSoundSource_Params, 0, sizeof(GetSoundSource_Params));
	memcpy_s(&GetSoundSource_Params.SourceActor, sizeof(GetSoundSource_Params.SourceActor), &SourceActor, sizeof(SourceActor));
	memcpy_s(&GetSoundSource_Params.Translation, sizeof(GetSoundSource_Params.Translation), &Translation, sizeof(Translation));
	memcpy_s(&GetSoundSource_Params.Rotation, sizeof(GetSoundSource_Params.Rotation), &Rotation, sizeof(Rotation));

	uFnGetSoundSource->FunctionFlags &= ~0x400;
	UAkDevice::StaticClass()->ProcessEvent(uFnGetSoundSource, &GetSoundSource_Params, nullptr);
	uFnGetSoundSource->FunctionFlags |= 0x400;

	return GetSoundSource_Params.ReturnValue;
};

// Function AkAudio.AkDevice.EventInitialized
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UAkDevice::EventInitialized()
{
	static UFunction* uFnEventInitialized = nullptr;

	if (!uFnEventInitialized)
	{
		uFnEventInitialized = UFunction::FindFunction("Function AkAudio.AkDevice.EventInitialized");
	}

	UAkDevice_execEventInitialized_Params EventInitialized_Params;
	memset(&EventInitialized_Params, 0, sizeof(EventInitialized_Params));

	this->ProcessEvent(uFnEventInitialized, &EventInitialized_Params, nullptr);
};

// Function AkAudio.AkEnvironments.RemoveActorEnvironment
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  TargetActor                    (CPF_Parm)
// class FString                  EnvironmentID                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UAkEnvironments::RemoveActorEnvironment(class AActor* TargetActor, class FString& EnvironmentID)
{
	static UFunction* uFnRemoveActorEnvironment = nullptr;

	if (!uFnRemoveActorEnvironment)
	{
		uFnRemoveActorEnvironment = UFunction::FindFunction("Function AkAudio.AkEnvironments.RemoveActorEnvironment");
	}

	UAkEnvironments_execRemoveActorEnvironment_Params RemoveActorEnvironment_Params;
	memset(&RemoveActorEnvironment_Params, 0, sizeof(RemoveActorEnvironment_Params));
	memcpy_s(&RemoveActorEnvironment_Params.TargetActor, sizeof(RemoveActorEnvironment_Params.TargetActor), &TargetActor, sizeof(TargetActor));
	memcpy_s(&RemoveActorEnvironment_Params.EnvironmentID, sizeof(RemoveActorEnvironment_Params.EnvironmentID), &EnvironmentID, sizeof(EnvironmentID));

	uFnRemoveActorEnvironment->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRemoveActorEnvironment, &RemoveActorEnvironment_Params, nullptr);
	uFnRemoveActorEnvironment->FunctionFlags |= 0x400;

	memcpy_s(&EnvironmentID, sizeof(EnvironmentID), &RemoveActorEnvironment_Params.EnvironmentID, sizeof(RemoveActorEnvironment_Params.EnvironmentID));
};

// Function AkAudio.AkEnvironments.AddActorEnvironment
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  TargetActor                    (CPF_Parm)
// struct FAkEnvironment          Environment                    (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UAkEnvironments::AddActorEnvironment(class AActor* TargetActor, struct FAkEnvironment& Environment)
{
	static UFunction* uFnAddActorEnvironment = nullptr;

	if (!uFnAddActorEnvironment)
	{
		uFnAddActorEnvironment = UFunction::FindFunction("Function AkAudio.AkEnvironments.AddActorEnvironment");
	}

	UAkEnvironments_execAddActorEnvironment_Params AddActorEnvironment_Params;
	memset(&AddActorEnvironment_Params, 0, sizeof(AddActorEnvironment_Params));
	memcpy_s(&AddActorEnvironment_Params.TargetActor, sizeof(AddActorEnvironment_Params.TargetActor), &TargetActor, sizeof(TargetActor));
	memcpy_s(&AddActorEnvironment_Params.Environment, sizeof(AddActorEnvironment_Params.Environment), &Environment, sizeof(Environment));

	uFnAddActorEnvironment->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAddActorEnvironment, &AddActorEnvironment_Params, nullptr);
	uFnAddActorEnvironment->FunctionFlags |= 0x400;

	memcpy_s(&Environment, sizeof(Environment), &AddActorEnvironment_Params.Environment, sizeof(AddActorEnvironment_Params.Environment));
};

// Function AkAudio.AkEnvironments.AddLevelDefault
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FAkEnvironment          Environment                    (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UAkEnvironments::AddLevelDefault(struct FAkEnvironment& Environment)
{
	static UFunction* uFnAddLevelDefault = nullptr;

	if (!uFnAddLevelDefault)
	{
		uFnAddLevelDefault = UFunction::FindFunction("Function AkAudio.AkEnvironments.AddLevelDefault");
	}

	UAkEnvironments_execAddLevelDefault_Params AddLevelDefault_Params;
	memset(&AddLevelDefault_Params, 0, sizeof(AddLevelDefault_Params));
	memcpy_s(&AddLevelDefault_Params.Environment, sizeof(AddLevelDefault_Params.Environment), &Environment, sizeof(Environment));

	uFnAddLevelDefault->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAddLevelDefault, &AddLevelDefault_Params, nullptr);
	uFnAddLevelDefault->FunctionFlags |= 0x400;

	memcpy_s(&Environment, sizeof(Environment), &AddLevelDefault_Params.Environment, sizeof(AddLevelDefault_Params.Environment));
};

// Function AkAudio.AkMusicAnalysis.UpdateSmoothedMusicInfo
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Const | CPF_Parm)

void UAkMusicAnalysis::UpdateSmoothedMusicInfo(float DeltaTime)
{
	static UFunction* uFnUpdateSmoothedMusicInfo = nullptr;

	if (!uFnUpdateSmoothedMusicInfo)
	{
		uFnUpdateSmoothedMusicInfo = UFunction::FindFunction("Function AkAudio.AkMusicAnalysis.UpdateSmoothedMusicInfo");
	}

	UAkMusicAnalysis_execUpdateSmoothedMusicInfo_Params UpdateSmoothedMusicInfo_Params;
	memset(&UpdateSmoothedMusicInfo_Params, 0, sizeof(UpdateSmoothedMusicInfo_Params));
	memcpy_s(&UpdateSmoothedMusicInfo_Params.DeltaTime, sizeof(UpdateSmoothedMusicInfo_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	uFnUpdateSmoothedMusicInfo->FunctionFlags &= ~0x400;
	UAkMusicAnalysis::StaticClass()->ProcessEvent(uFnUpdateSmoothedMusicInfo, &UpdateSmoothedMusicInfo_Params, nullptr);
	uFnUpdateSmoothedMusicInfo->FunctionFlags |= 0x400;
};

// Function AkAudio.AkMusicAnalysis.UpdateMusicInfo
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FMusicAnalysisInfo      NewValues                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UAkMusicAnalysis::UpdateMusicInfo(struct FMusicAnalysisInfo& NewValues)
{
	static UFunction* uFnUpdateMusicInfo = nullptr;

	if (!uFnUpdateMusicInfo)
	{
		uFnUpdateMusicInfo = UFunction::FindFunction("Function AkAudio.AkMusicAnalysis.UpdateMusicInfo");
	}

	UAkMusicAnalysis_execUpdateMusicInfo_Params UpdateMusicInfo_Params;
	memset(&UpdateMusicInfo_Params, 0, sizeof(UpdateMusicInfo_Params));
	memcpy_s(&UpdateMusicInfo_Params.NewValues, sizeof(UpdateMusicInfo_Params.NewValues), &NewValues, sizeof(NewValues));

	uFnUpdateMusicInfo->FunctionFlags &= ~0x400;
	UAkMusicAnalysis::StaticClass()->ProcessEvent(uFnUpdateMusicInfo, &UpdateMusicInfo_Params, nullptr);
	uFnUpdateMusicInfo->FunctionFlags |= 0x400;

	memcpy_s(&NewValues, sizeof(NewValues), &UpdateMusicInfo_Params.NewValues, sizeof(UpdateMusicInfo_Params.NewValues));
};

// Function AkAudio.AkMusicAnalysis.OnNewTrack
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        NewBPM                         (CPF_Parm)

void UAkMusicAnalysis::OnNewTrack(int32_t NewBPM)
{
	static UFunction* uFnOnNewTrack = nullptr;

	if (!uFnOnNewTrack)
	{
		uFnOnNewTrack = UFunction::FindFunction("Function AkAudio.AkMusicAnalysis.OnNewTrack");
	}

	UAkMusicAnalysis_execOnNewTrack_Params OnNewTrack_Params;
	memset(&OnNewTrack_Params, 0, sizeof(OnNewTrack_Params));
	memcpy_s(&OnNewTrack_Params.NewBPM, sizeof(OnNewTrack_Params.NewBPM), &NewBPM, sizeof(NewBPM));

	uFnOnNewTrack->FunctionFlags &= ~0x400;
	UAkMusicAnalysis::StaticClass()->ProcessEvent(uFnOnNewTrack, &OnNewTrack_Params, nullptr);
	uFnOnNewTrack->FunctionFlags |= 0x400;
};

// Function AkAudio.AkMusicAnalysis.GetInstance
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UAkMusicAnalysis*        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UAkMusicAnalysis* UAkMusicAnalysis::GetInstance()
{
	static UFunction* uFnGetInstance = nullptr;

	if (!uFnGetInstance)
	{
		uFnGetInstance = UFunction::FindFunction("Function AkAudio.AkMusicAnalysis.GetInstance");
	}

	UAkMusicAnalysis_execGetInstance_Params GetInstance_Params;
	memset(&GetInstance_Params, 0, sizeof(GetInstance_Params));

	uFnGetInstance->FunctionFlags &= ~0x400;
	UAkMusicAnalysis::StaticClass()->ProcessEvent(uFnGetInstance, &GetInstance_Params, nullptr);
	uFnGetInstance->FunctionFlags |= 0x400;

	return GetInstance_Params.ReturnValue;
};

// Function AkAudio.AkMusicAnalysis.EventMusicBar
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UAkMusicAnalysis::EventMusicBar()
{
	static UFunction* uFnEventMusicBar = nullptr;

	if (!uFnEventMusicBar)
	{
		uFnEventMusicBar = UFunction::FindFunction("Function AkAudio.AkMusicAnalysis.EventMusicBar");
	}

	UAkMusicAnalysis_execEventMusicBar_Params EventMusicBar_Params;
	memset(&EventMusicBar_Params, 0, sizeof(EventMusicBar_Params));

	this->ProcessEvent(uFnEventMusicBar, &EventMusicBar_Params, nullptr);
};

// Function AkAudio.AkMusicAnalysis.EventMusicBeat
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UAkMusicAnalysis::EventMusicBeat()
{
	static UFunction* uFnEventMusicBeat = nullptr;

	if (!uFnEventMusicBeat)
	{
		uFnEventMusicBeat = UFunction::FindFunction("Function AkAudio.AkMusicAnalysis.EventMusicBeat");
	}

	UAkMusicAnalysis_execEventMusicBeat_Params EventMusicBeat_Params;
	memset(&EventMusicBeat_Params, 0, sizeof(EventMusicBeat_Params));

	this->ProcessEvent(uFnEventMusicBeat, &EventMusicBeat_Params, nullptr);
};

// Function AkAudio.AkMusicAnalysis.EventNewMusicTrack
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        PlayingID                      (CPF_Parm)
// int32_t                        NewBPM                         (CPF_Parm)

void UAkMusicAnalysis::EventNewMusicTrack(int32_t PlayingID, int32_t NewBPM)
{
	static UFunction* uFnEventNewMusicTrack = nullptr;

	if (!uFnEventNewMusicTrack)
	{
		uFnEventNewMusicTrack = UFunction::FindFunction("Function AkAudio.AkMusicAnalysis.EventNewMusicTrack");
	}

	UAkMusicAnalysis_execEventNewMusicTrack_Params EventNewMusicTrack_Params;
	memset(&EventNewMusicTrack_Params, 0, sizeof(EventNewMusicTrack_Params));
	memcpy_s(&EventNewMusicTrack_Params.PlayingID, sizeof(EventNewMusicTrack_Params.PlayingID), &PlayingID, sizeof(PlayingID));
	memcpy_s(&EventNewMusicTrack_Params.NewBPM, sizeof(EventNewMusicTrack_Params.NewBPM), &NewBPM, sizeof(NewBPM));

	this->ProcessEvent(uFnEventNewMusicTrack, &EventNewMusicTrack_Params, nullptr);
};

// Function AkAudio.AkMusicDevice.Seek
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// class UAkSoundCue*             Sound                          (CPF_Parm)
// float                          PositionSeconds                (CPF_Parm)

void UAkMusicDevice::Seek(class UAkSoundCue* Sound, float PositionSeconds)
{
	static UFunction* uFnSeek = nullptr;

	if (!uFnSeek)
	{
		uFnSeek = UFunction::FindFunction("Function AkAudio.AkMusicDevice.Seek");
	}

	UAkMusicDevice_execSeek_Params Seek_Params;
	memset(&Seek_Params, 0, sizeof(Seek_Params));
	memcpy_s(&Seek_Params.Sound, sizeof(Seek_Params.Sound), &Sound, sizeof(Sound));
	memcpy_s(&Seek_Params.PositionSeconds, sizeof(Seek_Params.PositionSeconds), &PositionSeconds, sizeof(PositionSeconds));

	uFnSeek->FunctionFlags &= ~0x400;
	UAkMusicDevice::StaticClass()->ProcessEvent(uFnSeek, &Seek_Params, nullptr);
	uFnSeek->FunctionFlags |= 0x400;
};

// Function AkAudio.AkMusicDevice.SetRTCP
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkMusicDevice::SetRTCP(struct FName Key, float Value)
{
	static UFunction* uFnSetRTCP = nullptr;

	if (!uFnSetRTCP)
	{
		uFnSetRTCP = UFunction::FindFunction("Function AkAudio.AkMusicDevice.SetRTCP");
	}

	UAkMusicDevice_execSetRTCP_Params SetRTCP_Params;
	memset(&SetRTCP_Params, 0, sizeof(SetRTCP_Params));
	memcpy_s(&SetRTCP_Params.Key, sizeof(SetRTCP_Params.Key), &Key, sizeof(Key));
	memcpy_s(&SetRTCP_Params.Value, sizeof(SetRTCP_Params.Value), &Value, sizeof(Value));

	uFnSetRTCP->FunctionFlags &= ~0x400;
	UAkMusicDevice::StaticClass()->ProcessEvent(uFnSetRTCP, &SetRTCP_Params, nullptr);
	uFnSetRTCP->FunctionFlags |= 0x400;
};

// Function AkAudio.AkMusicDevice.StopPlayingID
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// int32_t                        PlayingID                      (CPF_Parm)

void UAkMusicDevice::StopPlayingID(int32_t PlayingID)
{
	static UFunction* uFnStopPlayingID = nullptr;

	if (!uFnStopPlayingID)
	{
		uFnStopPlayingID = UFunction::FindFunction("Function AkAudio.AkMusicDevice.StopPlayingID");
	}

	UAkMusicDevice_execStopPlayingID_Params StopPlayingID_Params;
	memset(&StopPlayingID_Params, 0, sizeof(StopPlayingID_Params));
	memcpy_s(&StopPlayingID_Params.PlayingID, sizeof(StopPlayingID_Params.PlayingID), &PlayingID, sizeof(PlayingID));

	uFnStopPlayingID->FunctionFlags &= ~0x400;
	UAkMusicDevice::StaticClass()->ProcessEvent(uFnStopPlayingID, &StopPlayingID_Params, nullptr);
	uFnStopPlayingID->FunctionFlags |= 0x400;
};

// Function AkAudio.AkMusicDevice.Stop
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkMusicDevice::Stop(class UAkSoundCue* Sound)
{
	static UFunction* uFnStop = nullptr;

	if (!uFnStop)
	{
		uFnStop = UFunction::FindFunction("Function AkAudio.AkMusicDevice.Stop");
	}

	UAkMusicDevice_execStop_Params Stop_Params;
	memset(&Stop_Params, 0, sizeof(Stop_Params));
	memcpy_s(&Stop_Params.Sound, sizeof(Stop_Params.Sound), &Sound, sizeof(Sound));

	uFnStop->FunctionFlags &= ~0x400;
	UAkMusicDevice::StaticClass()->ProcessEvent(uFnStop, &Stop_Params, nullptr);
	uFnStop->FunctionFlags |= 0x400;
};

// Function AkAudio.AkMusicDevice.Play
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UAkSoundCue*             Sound                          (CPF_Parm)

int32_t UAkMusicDevice::Play(class UAkSoundCue* Sound)
{
	static UFunction* uFnPlay = nullptr;

	if (!uFnPlay)
	{
		uFnPlay = UFunction::FindFunction("Function AkAudio.AkMusicDevice.Play");
	}

	UAkMusicDevice_execPlay_Params Play_Params;
	memset(&Play_Params, 0, sizeof(Play_Params));
	memcpy_s(&Play_Params.Sound, sizeof(Play_Params.Sound), &Sound, sizeof(Sound));

	uFnPlay->FunctionFlags &= ~0x400;
	UAkMusicDevice::StaticClass()->ProcessEvent(uFnPlay, &Play_Params, nullptr);
	uFnPlay->FunctionFlags |= 0x400;

	return Play_Params.ReturnValue;
};

// Function AkAudio.AkMusicDevice.EventTrackEnd
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        PlayingID                      (CPF_Parm)

void UAkMusicDevice::EventTrackEnd(int32_t PlayingID)
{
	static UFunction* uFnEventTrackEnd = nullptr;

	if (!uFnEventTrackEnd)
	{
		uFnEventTrackEnd = UFunction::FindFunction("Function AkAudio.AkMusicDevice.EventTrackEnd");
	}

	UAkMusicDevice_execEventTrackEnd_Params EventTrackEnd_Params;
	memset(&EventTrackEnd_Params, 0, sizeof(EventTrackEnd_Params));
	memcpy_s(&EventTrackEnd_Params.PlayingID, sizeof(EventTrackEnd_Params.PlayingID), &PlayingID, sizeof(PlayingID));

	this->ProcessEvent(uFnEventTrackEnd, &EventTrackEnd_Params, nullptr);
};

// Function AkAudio.AkMusicDevice.EventTrackStart
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        PlayingID                      (CPF_Parm)
// class FString                  FileMarker                     (CPF_Parm | CPF_NeedCtorLink)

void UAkMusicDevice::EventTrackStart(int32_t PlayingID, class FString FileMarker)
{
	static UFunction* uFnEventTrackStart = nullptr;

	if (!uFnEventTrackStart)
	{
		uFnEventTrackStart = UFunction::FindFunction("Function AkAudio.AkMusicDevice.EventTrackStart");
	}

	UAkMusicDevice_execEventTrackStart_Params EventTrackStart_Params;
	memset(&EventTrackStart_Params, 0, sizeof(EventTrackStart_Params));
	memcpy_s(&EventTrackStart_Params.PlayingID, sizeof(EventTrackStart_Params.PlayingID), &PlayingID, sizeof(PlayingID));
	memcpy_s(&EventTrackStart_Params.FileMarker, sizeof(EventTrackStart_Params.FileMarker), &FileMarker, sizeof(FileMarker));

	this->ProcessEvent(uFnEventTrackStart, &EventTrackStart_Params, nullptr);
};

// Function AkAudio.AkParamGroup.SetSendToSlapbacks
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bSend                          (CPF_Parm)

void UAkParamGroup::SetSendToSlapbacks(bool bSend)
{
	static UFunction* uFnSetSendToSlapbacks = nullptr;

	if (!uFnSetSendToSlapbacks)
	{
		uFnSetSendToSlapbacks = UFunction::FindFunction("Function AkAudio.AkParamGroup.SetSendToSlapbacks");
	}

	UAkParamGroup_execSetSendToSlapbacks_Params SetSendToSlapbacks_Params;
	memset(&SetSendToSlapbacks_Params, 0, sizeof(SetSendToSlapbacks_Params));
	SetSendToSlapbacks_Params.bSend = bSend;

	this->ProcessEvent(uFnSetSendToSlapbacks, &SetSendToSlapbacks_Params, nullptr);
};

// Function AkAudio.AkParamGroup.SetControllerId
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        InID                           (CPF_Parm)

void UAkParamGroup::SetControllerId(int32_t InID)
{
	static UFunction* uFnSetControllerId = nullptr;

	if (!uFnSetControllerId)
	{
		uFnSetControllerId = UFunction::FindFunction("Function AkAudio.AkParamGroup.SetControllerId");
	}

	UAkParamGroup_execSetControllerId_Params SetControllerId_Params;
	memset(&SetControllerId_Params, 0, sizeof(SetControllerId_Params));
	memcpy_s(&SetControllerId_Params.InID, sizeof(SetControllerId_Params.InID), &InID, sizeof(InID));

	this->ProcessEvent(uFnSetControllerId, &SetControllerId_Params, nullptr);
};

// Function AkAudio.AkParamGroup.EnableObjectAttenuation
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UAkParamGroup::EnableObjectAttenuation()
{
	static UFunction* uFnEnableObjectAttenuation = nullptr;

	if (!uFnEnableObjectAttenuation)
	{
		uFnEnableObjectAttenuation = UFunction::FindFunction("Function AkAudio.AkParamGroup.EnableObjectAttenuation");
	}

	UAkParamGroup_execEnableObjectAttenuation_Params EnableObjectAttenuation_Params;
	memset(&EnableObjectAttenuation_Params, 0, sizeof(EnableObjectAttenuation_Params));

	this->ProcessEvent(uFnEnableObjectAttenuation, &EnableObjectAttenuation_Params, nullptr);
};

// Function AkAudio.AkParamGroup.DisableObjectAttenuation
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UAkParamGroup::DisableObjectAttenuation()
{
	static UFunction* uFnDisableObjectAttenuation = nullptr;

	if (!uFnDisableObjectAttenuation)
	{
		uFnDisableObjectAttenuation = UFunction::FindFunction("Function AkAudio.AkParamGroup.DisableObjectAttenuation");
	}

	UAkParamGroup_execDisableObjectAttenuation_Params DisableObjectAttenuation_Params;
	memset(&DisableObjectAttenuation_Params, 0, sizeof(DisableObjectAttenuation_Params));

	this->ProcessEvent(uFnDisableObjectAttenuation, &DisableObjectAttenuation_Params, nullptr);
};

// Function AkAudio.AkParamGroup.PrintDebugInfo
// [0x400020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class UDebugDrawer*            Drawer                         (CPF_Parm)

void UAkParamGroup::PrintDebugInfo(class UDebugDrawer* Drawer)
{
	static UFunction* uFnPrintDebugInfo = nullptr;

	if (!uFnPrintDebugInfo)
	{
		uFnPrintDebugInfo = UFunction::FindFunction("Function AkAudio.AkParamGroup.PrintDebugInfo");
	}

	UAkParamGroup_execPrintDebugInfo_Params PrintDebugInfo_Params;
	memset(&PrintDebugInfo_Params, 0, sizeof(PrintDebugInfo_Params));
	memcpy_s(&PrintDebugInfo_Params.Drawer, sizeof(PrintDebugInfo_Params.Drawer), &Drawer, sizeof(Drawer));

	this->ProcessEvent(uFnPrintDebugInfo, &PrintDebugInfo_Params, nullptr);
};

// Function AkAudio.AkParamGroup.UpdateSoundSourceAttenuationScaling
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:

void UAkParamGroup::UpdateSoundSourceAttenuationScaling()
{
	static UFunction* uFnUpdateSoundSourceAttenuationScaling = nullptr;

	if (!uFnUpdateSoundSourceAttenuationScaling)
	{
		uFnUpdateSoundSourceAttenuationScaling = UFunction::FindFunction("Function AkAudio.AkParamGroup.UpdateSoundSourceAttenuationScaling");
	}

	UAkParamGroup_execUpdateSoundSourceAttenuationScaling_Params UpdateSoundSourceAttenuationScaling_Params;
	memset(&UpdateSoundSourceAttenuationScaling_Params, 0, sizeof(UpdateSoundSourceAttenuationScaling_Params));

	uFnUpdateSoundSourceAttenuationScaling->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUpdateSoundSourceAttenuationScaling, &UpdateSoundSourceAttenuationScaling_Params, nullptr);
	uFnUpdateSoundSourceAttenuationScaling->FunctionFlags |= 0x400;
};

// Function AkAudio.AkParamGroup.SetActorParameter
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// struct FName                   Key                            (CPF_Parm)
// class AActor*                  Value                          (CPF_Parm)

void UAkParamGroup::SetActorParameter(struct FName Key, class AActor* Value)
{
	static UFunction* uFnSetActorParameter = nullptr;

	if (!uFnSetActorParameter)
	{
		uFnSetActorParameter = UFunction::FindFunction("Function AkAudio.AkParamGroup.SetActorParameter");
	}

	UAkParamGroup_execSetActorParameter_Params SetActorParameter_Params;
	memset(&SetActorParameter_Params, 0, sizeof(SetActorParameter_Params));
	memcpy_s(&SetActorParameter_Params.Key, sizeof(SetActorParameter_Params.Key), &Key, sizeof(Key));
	memcpy_s(&SetActorParameter_Params.Value, sizeof(SetActorParameter_Params.Value), &Value, sizeof(Value));

	uFnSetActorParameter->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetActorParameter, &SetActorParameter_Params, nullptr);
	uFnSetActorParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkParamGroup.SetLinearColorParameter
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// struct FName                   Key                            (CPF_Parm)
// struct FLinearColor            Value                          (CPF_Parm)

void UAkParamGroup::SetLinearColorParameter(struct FName Key, struct FLinearColor Value)
{
	static UFunction* uFnSetLinearColorParameter = nullptr;

	if (!uFnSetLinearColorParameter)
	{
		uFnSetLinearColorParameter = UFunction::FindFunction("Function AkAudio.AkParamGroup.SetLinearColorParameter");
	}

	UAkParamGroup_execSetLinearColorParameter_Params SetLinearColorParameter_Params;
	memset(&SetLinearColorParameter_Params, 0, sizeof(SetLinearColorParameter_Params));
	memcpy_s(&SetLinearColorParameter_Params.Key, sizeof(SetLinearColorParameter_Params.Key), &Key, sizeof(Key));
	memcpy_s(&SetLinearColorParameter_Params.Value, sizeof(SetLinearColorParameter_Params.Value), &Value, sizeof(Value));

	uFnSetLinearColorParameter->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetLinearColorParameter, &SetLinearColorParameter_Params, nullptr);
	uFnSetLinearColorParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkParamGroup.SetVectorParameter
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// struct FName                   Key                            (CPF_Parm)
// struct FVector                 Value                          (CPF_Parm)

void UAkParamGroup::SetVectorParameter(struct FName Key, struct FVector Value)
{
	static UFunction* uFnSetVectorParameter = nullptr;

	if (!uFnSetVectorParameter)
	{
		uFnSetVectorParameter = UFunction::FindFunction("Function AkAudio.AkParamGroup.SetVectorParameter");
	}

	UAkParamGroup_execSetVectorParameter_Params SetVectorParameter_Params;
	memset(&SetVectorParameter_Params, 0, sizeof(SetVectorParameter_Params));
	memcpy_s(&SetVectorParameter_Params.Key, sizeof(SetVectorParameter_Params.Key), &Key, sizeof(Key));
	memcpy_s(&SetVectorParameter_Params.Value, sizeof(SetVectorParameter_Params.Value), &Value, sizeof(Value));

	uFnSetVectorParameter->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetVectorParameter, &SetVectorParameter_Params, nullptr);
	uFnSetVectorParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkParamGroup.SetFloatParameter
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkParamGroup::SetFloatParameter(struct FName Key, float Value)
{
	static UFunction* uFnSetFloatParameter = nullptr;

	if (!uFnSetFloatParameter)
	{
		uFnSetFloatParameter = UFunction::FindFunction("Function AkAudio.AkParamGroup.SetFloatParameter");
	}

	UAkParamGroup_execSetFloatParameter_Params SetFloatParameter_Params;
	memset(&SetFloatParameter_Params, 0, sizeof(SetFloatParameter_Params));
	memcpy_s(&SetFloatParameter_Params.Key, sizeof(SetFloatParameter_Params.Key), &Key, sizeof(Key));
	memcpy_s(&SetFloatParameter_Params.Value, sizeof(SetFloatParameter_Params.Value), &Value, sizeof(Value));

	uFnSetFloatParameter->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetFloatParameter, &SetFloatParameter_Params, nullptr);
	uFnSetFloatParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkParamGroup.SetNameParameter
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// struct FName                   Key                            (CPF_Parm)
// struct FName                   Value                          (CPF_Parm)

void UAkParamGroup::SetNameParameter(struct FName Key, struct FName Value)
{
	static UFunction* uFnSetNameParameter = nullptr;

	if (!uFnSetNameParameter)
	{
		uFnSetNameParameter = UFunction::FindFunction("Function AkAudio.AkParamGroup.SetNameParameter");
	}

	UAkParamGroup_execSetNameParameter_Params SetNameParameter_Params;
	memset(&SetNameParameter_Params, 0, sizeof(SetNameParameter_Params));
	memcpy_s(&SetNameParameter_Params.Key, sizeof(SetNameParameter_Params.Key), &Key, sizeof(Key));
	memcpy_s(&SetNameParameter_Params.Value, sizeof(SetNameParameter_Params.Value), &Value, sizeof(Value));

	uFnSetNameParameter->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetNameParameter, &SetNameParameter_Params, nullptr);
	uFnSetNameParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkParamGroup.GetDebugData
// [0x04420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// TArray<struct FName>           RTCPKeys                       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<float>                  RTCPValues                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<struct FName>           SwitchKeys                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<struct FName>           SwitchValues                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UAkParamGroup::GetDebugData(TArray<struct FName>& RTCPKeys, TArray<float>& RTCPValues, TArray<struct FName>& SwitchKeys, TArray<struct FName>& SwitchValues)
{
	static UFunction* uFnGetDebugData = nullptr;

	if (!uFnGetDebugData)
	{
		uFnGetDebugData = UFunction::FindFunction("Function AkAudio.AkParamGroup.GetDebugData");
	}

	UAkParamGroup_execGetDebugData_Params GetDebugData_Params;
	memset(&GetDebugData_Params, 0, sizeof(GetDebugData_Params));
	memcpy_s(&GetDebugData_Params.RTCPKeys, sizeof(GetDebugData_Params.RTCPKeys), &RTCPKeys, sizeof(RTCPKeys));
	memcpy_s(&GetDebugData_Params.RTCPValues, sizeof(GetDebugData_Params.RTCPValues), &RTCPValues, sizeof(RTCPValues));
	memcpy_s(&GetDebugData_Params.SwitchKeys, sizeof(GetDebugData_Params.SwitchKeys), &SwitchKeys, sizeof(SwitchKeys));
	memcpy_s(&GetDebugData_Params.SwitchValues, sizeof(GetDebugData_Params.SwitchValues), &SwitchValues, sizeof(SwitchValues));

	uFnGetDebugData->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetDebugData, &GetDebugData_Params, nullptr);
	uFnGetDebugData->FunctionFlags |= 0x400;

	memcpy_s(&RTCPKeys, sizeof(RTCPKeys), &GetDebugData_Params.RTCPKeys, sizeof(GetDebugData_Params.RTCPKeys));
	memcpy_s(&RTCPValues, sizeof(RTCPValues), &GetDebugData_Params.RTCPValues, sizeof(GetDebugData_Params.RTCPValues));
	memcpy_s(&SwitchKeys, sizeof(SwitchKeys), &GetDebugData_Params.SwitchKeys, sizeof(GetDebugData_Params.SwitchKeys));
	memcpy_s(&SwitchValues, sizeof(SwitchValues), &GetDebugData_Params.SwitchValues, sizeof(GetDebugData_Params.SwitchValues));
};

// Function AkAudio.AkParamGroup.StopSound
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkParamGroup::StopSound(class UAkSoundCue* Sound)
{
	static UFunction* uFnStopSound = nullptr;

	if (!uFnStopSound)
	{
		uFnStopSound = UFunction::FindFunction("Function AkAudio.AkParamGroup.StopSound");
	}

	UAkParamGroup_execStopSound_Params StopSound_Params;
	memset(&StopSound_Params, 0, sizeof(StopSound_Params));
	memcpy_s(&StopSound_Params.Sound, sizeof(StopSound_Params.Sound), &Sound, sizeof(Sound));

	uFnStopSound->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStopSound, &StopSound_Params, nullptr);
	uFnStopSound->FunctionFlags |= 0x400;
};

// Function AkAudio.AkParamGroup.PlaySound
// [0x04024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// class UAkSoundSource*          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
// class UAkSoundCue*             Sound                          (CPF_Parm)
// struct FVector                 Translation                    (CPF_OptionalParm | CPF_Parm)
// struct FRotator                Rotation                       (CPF_OptionalParm | CPF_Parm)

class UAkSoundSource* UAkParamGroup::PlaySound(class UAkSoundCue* Sound, struct FVector Translation, struct FRotator Rotation)
{
	static UFunction* uFnPlaySound = nullptr;

	if (!uFnPlaySound)
	{
		uFnPlaySound = UFunction::FindFunction("Function AkAudio.AkParamGroup.PlaySound");
	}

	UAkParamGroup_execPlaySound_Params PlaySound_Params;
	memset(&PlaySound_Params, 0, sizeof(PlaySound_Params));
	memcpy_s(&PlaySound_Params.Sound, sizeof(PlaySound_Params.Sound), &Sound, sizeof(Sound));
	memcpy_s(&PlaySound_Params.Translation, sizeof(PlaySound_Params.Translation), &Translation, sizeof(Translation));
	memcpy_s(&PlaySound_Params.Rotation, sizeof(PlaySound_Params.Rotation), &Rotation, sizeof(Rotation));

	uFnPlaySound->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnPlaySound, &PlaySound_Params, nullptr);
	uFnPlaySound->FunctionFlags |= 0x400;

	return PlaySound_Params.ReturnValue;
};

// Function AkAudio.AkParamGroup.SetSwitch
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// struct FName                   Key                            (CPF_Parm)
// struct FName                   Value                          (CPF_Parm)

void UAkParamGroup::SetSwitch(struct FName Key, struct FName Value)
{
	static UFunction* uFnSetSwitch = nullptr;

	if (!uFnSetSwitch)
	{
		uFnSetSwitch = UFunction::FindFunction("Function AkAudio.AkParamGroup.SetSwitch");
	}

	UAkParamGroup_execSetSwitch_Params SetSwitch_Params;
	memset(&SetSwitch_Params, 0, sizeof(SetSwitch_Params));
	memcpy_s(&SetSwitch_Params.Key, sizeof(SetSwitch_Params.Key), &Key, sizeof(Key));
	memcpy_s(&SetSwitch_Params.Value, sizeof(SetSwitch_Params.Value), &Value, sizeof(Value));

	uFnSetSwitch->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetSwitch, &SetSwitch_Params, nullptr);
	uFnSetSwitch->FunctionFlags |= 0x400;
};

// Function AkAudio.AkParamGroup.SetRTCP
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkParamGroup::SetRTCP(struct FName Key, float Value)
{
	static UFunction* uFnSetRTCP = nullptr;

	if (!uFnSetRTCP)
	{
		uFnSetRTCP = UFunction::FindFunction("Function AkAudio.AkParamGroup.SetRTCP");
	}

	UAkParamGroup_execSetRTCP_Params SetRTCP_Params;
	memset(&SetRTCP_Params, 0, sizeof(SetRTCP_Params));
	memcpy_s(&SetRTCP_Params.Key, sizeof(SetRTCP_Params.Key), &Key, sizeof(Key));
	memcpy_s(&SetRTCP_Params.Value, sizeof(SetRTCP_Params.Value), &Value, sizeof(Value));

	uFnSetRTCP->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetRTCP, &SetRTCP_Params, nullptr);
	uFnSetRTCP->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.SetActorParameter
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   Key                            (CPF_Parm)
// class AActor*                  Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetActorParameter(struct FName Key, class AActor* Value)
{
	static UFunction* uFnSetActorParameter = nullptr;

	if (!uFnSetActorParameter)
	{
		uFnSetActorParameter = UFunction::FindFunction("Function AkAudio.AkPlaySoundComponent.SetActorParameter");
	}

	UAkPlaySoundComponent_execSetActorParameter_Params SetActorParameter_Params;
	memset(&SetActorParameter_Params, 0, sizeof(SetActorParameter_Params));
	memcpy_s(&SetActorParameter_Params.Key, sizeof(SetActorParameter_Params.Key), &Key, sizeof(Key));
	memcpy_s(&SetActorParameter_Params.Value, sizeof(SetActorParameter_Params.Value), &Value, sizeof(Value));

	uFnSetActorParameter->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetActorParameter, &SetActorParameter_Params, nullptr);
	uFnSetActorParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.SetLinearColorParameter
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   Key                            (CPF_Parm)
// struct FLinearColor            Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetLinearColorParameter(struct FName Key, struct FLinearColor Value)
{
	static UFunction* uFnSetLinearColorParameter = nullptr;

	if (!uFnSetLinearColorParameter)
	{
		uFnSetLinearColorParameter = UFunction::FindFunction("Function AkAudio.AkPlaySoundComponent.SetLinearColorParameter");
	}

	UAkPlaySoundComponent_execSetLinearColorParameter_Params SetLinearColorParameter_Params;
	memset(&SetLinearColorParameter_Params, 0, sizeof(SetLinearColorParameter_Params));
	memcpy_s(&SetLinearColorParameter_Params.Key, sizeof(SetLinearColorParameter_Params.Key), &Key, sizeof(Key));
	memcpy_s(&SetLinearColorParameter_Params.Value, sizeof(SetLinearColorParameter_Params.Value), &Value, sizeof(Value));

	uFnSetLinearColorParameter->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetLinearColorParameter, &SetLinearColorParameter_Params, nullptr);
	uFnSetLinearColorParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.SetVectorParameter
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   Key                            (CPF_Parm)
// struct FVector                 Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetVectorParameter(struct FName Key, struct FVector Value)
{
	static UFunction* uFnSetVectorParameter = nullptr;

	if (!uFnSetVectorParameter)
	{
		uFnSetVectorParameter = UFunction::FindFunction("Function AkAudio.AkPlaySoundComponent.SetVectorParameter");
	}

	UAkPlaySoundComponent_execSetVectorParameter_Params SetVectorParameter_Params;
	memset(&SetVectorParameter_Params, 0, sizeof(SetVectorParameter_Params));
	memcpy_s(&SetVectorParameter_Params.Key, sizeof(SetVectorParameter_Params.Key), &Key, sizeof(Key));
	memcpy_s(&SetVectorParameter_Params.Value, sizeof(SetVectorParameter_Params.Value), &Value, sizeof(Value));

	uFnSetVectorParameter->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetVectorParameter, &SetVectorParameter_Params, nullptr);
	uFnSetVectorParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.SetFloatParameter
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetFloatParameter(struct FName Key, float Value)
{
	static UFunction* uFnSetFloatParameter = nullptr;

	if (!uFnSetFloatParameter)
	{
		uFnSetFloatParameter = UFunction::FindFunction("Function AkAudio.AkPlaySoundComponent.SetFloatParameter");
	}

	UAkPlaySoundComponent_execSetFloatParameter_Params SetFloatParameter_Params;
	memset(&SetFloatParameter_Params, 0, sizeof(SetFloatParameter_Params));
	memcpy_s(&SetFloatParameter_Params.Key, sizeof(SetFloatParameter_Params.Key), &Key, sizeof(Key));
	memcpy_s(&SetFloatParameter_Params.Value, sizeof(SetFloatParameter_Params.Value), &Value, sizeof(Value));

	uFnSetFloatParameter->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetFloatParameter, &SetFloatParameter_Params, nullptr);
	uFnSetFloatParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.SetNameParameter
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   Key                            (CPF_Parm)
// struct FName                   Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetNameParameter(struct FName Key, struct FName Value)
{
	static UFunction* uFnSetNameParameter = nullptr;

	if (!uFnSetNameParameter)
	{
		uFnSetNameParameter = UFunction::FindFunction("Function AkAudio.AkPlaySoundComponent.SetNameParameter");
	}

	UAkPlaySoundComponent_execSetNameParameter_Params SetNameParameter_Params;
	memset(&SetNameParameter_Params, 0, sizeof(SetNameParameter_Params));
	memcpy_s(&SetNameParameter_Params.Key, sizeof(SetNameParameter_Params.Key), &Key, sizeof(Key));
	memcpy_s(&SetNameParameter_Params.Value, sizeof(SetNameParameter_Params.Value), &Value, sizeof(Value));

	uFnSetNameParameter->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetNameParameter, &SetNameParameter_Params, nullptr);
	uFnSetNameParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.SetRTCP
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetRTCP(struct FName Key, float Value)
{
	static UFunction* uFnSetRTCP = nullptr;

	if (!uFnSetRTCP)
	{
		uFnSetRTCP = UFunction::FindFunction("Function AkAudio.AkPlaySoundComponent.SetRTCP");
	}

	UAkPlaySoundComponent_execSetRTCP_Params SetRTCP_Params;
	memset(&SetRTCP_Params, 0, sizeof(SetRTCP_Params));
	memcpy_s(&SetRTCP_Params.Key, sizeof(SetRTCP_Params.Key), &Key, sizeof(Key));
	memcpy_s(&SetRTCP_Params.Value, sizeof(SetRTCP_Params.Value), &Value, sizeof(Value));

	uFnSetRTCP->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetRTCP, &SetRTCP_Params, nullptr);
	uFnSetRTCP->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.SetSwitch
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   Key                            (CPF_Parm)
// struct FName                   Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetSwitch(struct FName Key, struct FName Value)
{
	static UFunction* uFnSetSwitch = nullptr;

	if (!uFnSetSwitch)
	{
		uFnSetSwitch = UFunction::FindFunction("Function AkAudio.AkPlaySoundComponent.SetSwitch");
	}

	UAkPlaySoundComponent_execSetSwitch_Params SetSwitch_Params;
	memset(&SetSwitch_Params, 0, sizeof(SetSwitch_Params));
	memcpy_s(&SetSwitch_Params.Key, sizeof(SetSwitch_Params.Key), &Key, sizeof(Key));
	memcpy_s(&SetSwitch_Params.Value, sizeof(SetSwitch_Params.Value), &Value, sizeof(Value));

	uFnSetSwitch->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetSwitch, &SetSwitch_Params, nullptr);
	uFnSetSwitch->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.IsPlaying
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UAkPlaySoundComponent::IsPlaying()
{
	static UFunction* uFnIsPlaying = nullptr;

	if (!uFnIsPlaying)
	{
		uFnIsPlaying = UFunction::FindFunction("Function AkAudio.AkPlaySoundComponent.IsPlaying");
	}

	UAkPlaySoundComponent_execIsPlaying_Params IsPlaying_Params;
	memset(&IsPlaying_Params, 0, sizeof(IsPlaying_Params));

	uFnIsPlaying->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsPlaying, &IsPlaying_Params, nullptr);
	uFnIsPlaying->FunctionFlags |= 0x400;

	return IsPlaying_Params.ReturnValue;
};

// Function AkAudio.AkPlaySoundComponent.Stop
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UAkPlaySoundComponent::Stop()
{
	static UFunction* uFnStop = nullptr;

	if (!uFnStop)
	{
		uFnStop = UFunction::FindFunction("Function AkAudio.AkPlaySoundComponent.Stop");
	}

	UAkPlaySoundComponent_execStop_Params Stop_Params;
	memset(&Stop_Params, 0, sizeof(Stop_Params));

	uFnStop->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStop, &Stop_Params, nullptr);
	uFnStop->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.Play
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UAkPlaySoundComponent::Play()
{
	static UFunction* uFnPlay = nullptr;

	if (!uFnPlay)
	{
		uFnPlay = UFunction::FindFunction("Function AkAudio.AkPlaySoundComponent.Play");
	}

	UAkPlaySoundComponent_execPlay_Params Play_Params;
	memset(&Play_Params, 0, sizeof(Play_Params));

	uFnPlay->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnPlay, &Play_Params, nullptr);
	uFnPlay->FunctionFlags |= 0x400;
};

// Function AkAudio.AkRevPhysicsSimulation.PrintDebugInfo
// [0x400020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class UDebugDrawer*            Drawer                         (CPF_Parm)

void UAkRevPhysicsSimulation::PrintDebugInfo(class UDebugDrawer* Drawer)
{
	static UFunction* uFnPrintDebugInfo = nullptr;

	if (!uFnPrintDebugInfo)
	{
		uFnPrintDebugInfo = UFunction::FindFunction("Function AkAudio.AkRevPhysicsSimulation.PrintDebugInfo");
	}

	UAkRevPhysicsSimulation_execPrintDebugInfo_Params PrintDebugInfo_Params;
	memset(&PrintDebugInfo_Params, 0, sizeof(PrintDebugInfo_Params));
	memcpy_s(&PrintDebugInfo_Params.Drawer, sizeof(PrintDebugInfo_Params.Drawer), &Drawer, sizeof(Drawer));

	this->ProcessEvent(uFnPrintDebugInfo, &PrintDebugInfo_Params, nullptr);
};

// Function AkAudio.AkRevPhysicsSimulation.InterpGearRatio
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Gear                           (CPF_Parm)
// struct FAkRevSimUpdateParams   SimUpdate                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

float UAkRevPhysicsSimulation::InterpGearRatio(int32_t Gear, struct FAkRevSimUpdateParams& SimUpdate)
{
	static UFunction* uFnInterpGearRatio = nullptr;

	if (!uFnInterpGearRatio)
	{
		uFnInterpGearRatio = UFunction::FindFunction("Function AkAudio.AkRevPhysicsSimulation.InterpGearRatio");
	}

	UAkRevPhysicsSimulation_execInterpGearRatio_Params InterpGearRatio_Params;
	memset(&InterpGearRatio_Params, 0, sizeof(InterpGearRatio_Params));
	memcpy_s(&InterpGearRatio_Params.Gear, sizeof(InterpGearRatio_Params.Gear), &Gear, sizeof(Gear));
	memcpy_s(&InterpGearRatio_Params.SimUpdate, sizeof(InterpGearRatio_Params.SimUpdate), &SimUpdate, sizeof(SimUpdate));

	uFnInterpGearRatio->FunctionFlags &= ~0x400;
	UAkRevPhysicsSimulation::StaticClass()->ProcessEvent(uFnInterpGearRatio, &InterpGearRatio_Params, nullptr);
	uFnInterpGearRatio->FunctionFlags |= 0x400;

	memcpy_s(&SimUpdate, sizeof(SimUpdate), &InterpGearRatio_Params.SimUpdate, sizeof(InterpGearRatio_Params.SimUpdate));

	return InterpGearRatio_Params.ReturnValue;
};

// Function AkAudio.AkRevPhysicsSimulation.GetGearRatio
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FAkRevSimUpdateParams   SimUpdate                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

float UAkRevPhysicsSimulation::GetGearRatio(struct FAkRevSimUpdateParams& SimUpdate)
{
	static UFunction* uFnGetGearRatio = nullptr;

	if (!uFnGetGearRatio)
	{
		uFnGetGearRatio = UFunction::FindFunction("Function AkAudio.AkRevPhysicsSimulation.GetGearRatio");
	}

	UAkRevPhysicsSimulation_execGetGearRatio_Params GetGearRatio_Params;
	memset(&GetGearRatio_Params, 0, sizeof(GetGearRatio_Params));
	memcpy_s(&GetGearRatio_Params.SimUpdate, sizeof(GetGearRatio_Params.SimUpdate), &SimUpdate, sizeof(SimUpdate));

	uFnGetGearRatio->FunctionFlags &= ~0x400;
	UAkRevPhysicsSimulation::StaticClass()->ProcessEvent(uFnGetGearRatio, &GetGearRatio_Params, nullptr);
	uFnGetGearRatio->FunctionFlags |= 0x400;

	memcpy_s(&SimUpdate, sizeof(SimUpdate), &GetGearRatio_Params.SimUpdate, sizeof(GetGearRatio_Params.SimUpdate));

	return GetGearRatio_Params.ReturnValue;
};

// Function AkAudio.AkRevPhysicsSimulation.CalcVelocity
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          GearRatio                      (CPF_Parm)
// float                          RPM                            (CPF_Parm)

float UAkRevPhysicsSimulation::CalcVelocity(float GearRatio, float RPM)
{
	static UFunction* uFnCalcVelocity = nullptr;

	if (!uFnCalcVelocity)
	{
		uFnCalcVelocity = UFunction::FindFunction("Function AkAudio.AkRevPhysicsSimulation.CalcVelocity");
	}

	UAkRevPhysicsSimulation_execCalcVelocity_Params CalcVelocity_Params;
	memset(&CalcVelocity_Params, 0, sizeof(CalcVelocity_Params));
	memcpy_s(&CalcVelocity_Params.GearRatio, sizeof(CalcVelocity_Params.GearRatio), &GearRatio, sizeof(GearRatio));
	memcpy_s(&CalcVelocity_Params.RPM, sizeof(CalcVelocity_Params.RPM), &RPM, sizeof(RPM));

	uFnCalcVelocity->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCalcVelocity, &CalcVelocity_Params, nullptr);
	uFnCalcVelocity->FunctionFlags |= 0x400;

	return CalcVelocity_Params.ReturnValue;
};

// Function AkAudio.AkRevPhysicsSimulation.CalcRPM
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          GearRatio                      (CPF_Parm)
// float                          Velocity                       (CPF_Parm)

float UAkRevPhysicsSimulation::CalcRPM(float GearRatio, float Velocity)
{
	static UFunction* uFnCalcRPM = nullptr;

	if (!uFnCalcRPM)
	{
		uFnCalcRPM = UFunction::FindFunction("Function AkAudio.AkRevPhysicsSimulation.CalcRPM");
	}

	UAkRevPhysicsSimulation_execCalcRPM_Params CalcRPM_Params;
	memset(&CalcRPM_Params, 0, sizeof(CalcRPM_Params));
	memcpy_s(&CalcRPM_Params.GearRatio, sizeof(CalcRPM_Params.GearRatio), &GearRatio, sizeof(GearRatio));
	memcpy_s(&CalcRPM_Params.Velocity, sizeof(CalcRPM_Params.Velocity), &Velocity, sizeof(Velocity));

	uFnCalcRPM->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCalcRPM, &CalcRPM_Params, nullptr);
	uFnCalcRPM->FunctionFlags |= 0x400;

	return CalcRPM_Params.ReturnValue;
};

// Function AkAudio.AkRevPhysicsSimulation.Step
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FAkRevSimFrame          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          DeltaTime                      (CPF_Parm)
// struct FAkRevSimUpdateParams   Params                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

struct FAkRevSimFrame UAkRevPhysicsSimulation::Step(float DeltaTime, struct FAkRevSimUpdateParams& Params)
{
	static UFunction* uFnStep = nullptr;

	if (!uFnStep)
	{
		uFnStep = UFunction::FindFunction("Function AkAudio.AkRevPhysicsSimulation.Step");
	}

	UAkRevPhysicsSimulation_execStep_Params Step_Params;
	memset(&Step_Params, 0, sizeof(Step_Params));
	memcpy_s(&Step_Params.DeltaTime, sizeof(Step_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	memcpy_s(&Step_Params.Params, sizeof(Step_Params.Params), &Params, sizeof(Params));

	uFnStep->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStep, &Step_Params, nullptr);
	uFnStep->FunctionFlags |= 0x400;

	memcpy_s(&Params, sizeof(Params), &Step_Params.Params, sizeof(Step_Params.Params));

	return Step_Params.ReturnValue;
};

// Function AkAudio.AkRevPhysicsSimulation.EventGearChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class UAkRevPhysicsSimulation* Simulation                     (CPF_Parm)

void UAkRevPhysicsSimulation::EventGearChange(class UAkRevPhysicsSimulation* Simulation)
{
	static UFunction* uFnEventGearChange = nullptr;

	if (!uFnEventGearChange)
	{
		uFnEventGearChange = UFunction::FindFunction("Function AkAudio.AkRevPhysicsSimulation.EventGearChange");
	}

	UAkRevPhysicsSimulation_execEventGearChange_Params EventGearChange_Params;
	memset(&EventGearChange_Params, 0, sizeof(EventGearChange_Params));
	memcpy_s(&EventGearChange_Params.Simulation, sizeof(EventGearChange_Params.Simulation), &Simulation, sizeof(Simulation));

	this->ProcessEvent(uFnEventGearChange, &EventGearChange_Params, nullptr);
};

// Function AkAudio.AkSoundBanksInfo.Parse
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UAkSoundBanksInfo*       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Text                           (CPF_Parm | CPF_NeedCtorLink)

class UAkSoundBanksInfo* UAkSoundBanksInfo::Parse(class FString Text)
{
	static UFunction* uFnParse = nullptr;

	if (!uFnParse)
	{
		uFnParse = UFunction::FindFunction("Function AkAudio.AkSoundBanksInfo.Parse");
	}

	UAkSoundBanksInfo_execParse_Params Parse_Params;
	memset(&Parse_Params, 0, sizeof(Parse_Params));
	memcpy_s(&Parse_Params.Text, sizeof(Parse_Params.Text), &Text, sizeof(Text));

	uFnParse->FunctionFlags &= ~0x400;
	UAkSoundBanksInfo::StaticClass()->ProcessEvent(uFnParse, &Parse_Params, nullptr);
	uFnParse->FunctionFlags |= 0x400;

	return Parse_Params.ReturnValue;
};

// Function AkAudio.AkSoundBanksInfo.LoadForNativePlatform
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UAkSoundBanksInfo*       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UAkSoundBanksInfo* UAkSoundBanksInfo::LoadForNativePlatform()
{
	static UFunction* uFnLoadForNativePlatform = nullptr;

	if (!uFnLoadForNativePlatform)
	{
		uFnLoadForNativePlatform = UFunction::FindFunction("Function AkAudio.AkSoundBanksInfo.LoadForNativePlatform");
	}

	UAkSoundBanksInfo_execLoadForNativePlatform_Params LoadForNativePlatform_Params;
	memset(&LoadForNativePlatform_Params, 0, sizeof(LoadForNativePlatform_Params));

	uFnLoadForNativePlatform->FunctionFlags &= ~0x400;
	UAkSoundBanksInfo::StaticClass()->ProcessEvent(uFnLoadForNativePlatform, &LoadForNativePlatform_Params, nullptr);
	uFnLoadForNativePlatform->FunctionFlags |= 0x400;

	return LoadForNativePlatform_Params.ReturnValue;
};

// Function AkAudio.AkSoundSource.SetSubtitlesEnabled
// [0x04020803] (FUNC_Final | FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// bool                           bValue                         (CPF_Parm)

void UAkSoundSource::eventSetSubtitlesEnabled(bool bValue)
{
	static UFunction* uFnSetSubtitlesEnabled = nullptr;

	if (!uFnSetSubtitlesEnabled)
	{
		uFnSetSubtitlesEnabled = UFunction::FindFunction("Function AkAudio.AkSoundSource.SetSubtitlesEnabled");
	}

	UAkSoundSource_eventSetSubtitlesEnabled_Params SetSubtitlesEnabled_Params;
	memset(&SetSubtitlesEnabled_Params, 0, sizeof(SetSubtitlesEnabled_Params));
	SetSubtitlesEnabled_Params.bValue = bValue;

	this->ProcessEvent(uFnSetSubtitlesEnabled, &SetSubtitlesEnabled_Params, nullptr);
};

// Function AkAudio.AkSoundSource.SetAttenuationScaling
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// EAttenuationType               AttenuationType                (CPF_Parm)

void UAkSoundSource::SetAttenuationScaling(EAttenuationType AttenuationType)
{
	static UFunction* uFnSetAttenuationScaling = nullptr;

	if (!uFnSetAttenuationScaling)
	{
		uFnSetAttenuationScaling = UFunction::FindFunction("Function AkAudio.AkSoundSource.SetAttenuationScaling");
	}

	UAkSoundSource_execSetAttenuationScaling_Params SetAttenuationScaling_Params;
	memset(&SetAttenuationScaling_Params, 0, sizeof(SetAttenuationScaling_Params));
	memcpy_s(&SetAttenuationScaling_Params.AttenuationType, sizeof(SetAttenuationScaling_Params.AttenuationType), &AttenuationType, sizeof(AttenuationType));

	uFnSetAttenuationScaling->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetAttenuationScaling, &SetAttenuationScaling_Params, nullptr);
	uFnSetAttenuationScaling->FunctionFlags |= 0x400;
};

// Function AkAudio.AkSoundSource.ForceUpdatePosition
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:

void UAkSoundSource::ForceUpdatePosition()
{
	static UFunction* uFnForceUpdatePosition = nullptr;

	if (!uFnForceUpdatePosition)
	{
		uFnForceUpdatePosition = UFunction::FindFunction("Function AkAudio.AkSoundSource.ForceUpdatePosition");
	}

	UAkSoundSource_execForceUpdatePosition_Params ForceUpdatePosition_Params;
	memset(&ForceUpdatePosition_Params, 0, sizeof(ForceUpdatePosition_Params));

	uFnForceUpdatePosition->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnForceUpdatePosition, &ForceUpdatePosition_Params, nullptr);
	uFnForceUpdatePosition->FunctionFlags |= 0x400;
};

// Function AkAudio.AkSoundSource.RegisterReflectionEmitter
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// struct FName                   BusName                        (CPF_Parm)
// EBusEmitterType                BusType                        (CPF_Parm)

void UAkSoundSource::RegisterReflectionEmitter(struct FName BusName, EBusEmitterType BusType)
{
	static UFunction* uFnRegisterReflectionEmitter = nullptr;

	if (!uFnRegisterReflectionEmitter)
	{
		uFnRegisterReflectionEmitter = UFunction::FindFunction("Function AkAudio.AkSoundSource.RegisterReflectionEmitter");
	}

	UAkSoundSource_execRegisterReflectionEmitter_Params RegisterReflectionEmitter_Params;
	memset(&RegisterReflectionEmitter_Params, 0, sizeof(RegisterReflectionEmitter_Params));
	memcpy_s(&RegisterReflectionEmitter_Params.BusName, sizeof(RegisterReflectionEmitter_Params.BusName), &BusName, sizeof(BusName));
	memcpy_s(&RegisterReflectionEmitter_Params.BusType, sizeof(RegisterReflectionEmitter_Params.BusType), &BusType, sizeof(BusType));

	uFnRegisterReflectionEmitter->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRegisterReflectionEmitter, &RegisterReflectionEmitter_Params, nullptr);
	uFnRegisterReflectionEmitter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkSoundSource.IsPlayingAny
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UAkSoundSource::IsPlayingAny()
{
	static UFunction* uFnIsPlayingAny = nullptr;

	if (!uFnIsPlayingAny)
	{
		uFnIsPlayingAny = UFunction::FindFunction("Function AkAudio.AkSoundSource.IsPlayingAny");
	}

	UAkSoundSource_execIsPlayingAny_Params IsPlayingAny_Params;
	memset(&IsPlayingAny_Params, 0, sizeof(IsPlayingAny_Params));

	uFnIsPlayingAny->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsPlayingAny, &IsPlayingAny_Params, nullptr);
	uFnIsPlayingAny->FunctionFlags |= 0x400;

	return IsPlayingAny_Params.ReturnValue;
};

// Function AkAudio.AkSoundSource.IsPlaying
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UAkSoundCue*             Sound                          (CPF_Parm)

bool UAkSoundSource::IsPlaying(class UAkSoundCue* Sound)
{
	static UFunction* uFnIsPlaying = nullptr;

	if (!uFnIsPlaying)
	{
		uFnIsPlaying = UFunction::FindFunction("Function AkAudio.AkSoundSource.IsPlaying");
	}

	UAkSoundSource_execIsPlaying_Params IsPlaying_Params;
	memset(&IsPlaying_Params, 0, sizeof(IsPlaying_Params));
	memcpy_s(&IsPlaying_Params.Sound, sizeof(IsPlaying_Params.Sound), &Sound, sizeof(Sound));

	uFnIsPlaying->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsPlaying, &IsPlaying_Params, nullptr);
	uFnIsPlaying->FunctionFlags |= 0x400;

	return IsPlaying_Params.ReturnValue;
};

// Function AkAudio.AkSoundSource.Seek
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// class UAkSoundCue*             Sound                          (CPF_Parm)
// float                          SeekSeconds                    (CPF_Parm)

void UAkSoundSource::Seek(class UAkSoundCue* Sound, float SeekSeconds)
{
	static UFunction* uFnSeek = nullptr;

	if (!uFnSeek)
	{
		uFnSeek = UFunction::FindFunction("Function AkAudio.AkSoundSource.Seek");
	}

	UAkSoundSource_execSeek_Params Seek_Params;
	memset(&Seek_Params, 0, sizeof(Seek_Params));
	memcpy_s(&Seek_Params.Sound, sizeof(Seek_Params.Sound), &Sound, sizeof(Sound));
	memcpy_s(&Seek_Params.SeekSeconds, sizeof(Seek_Params.SeekSeconds), &SeekSeconds, sizeof(SeekSeconds));

	uFnSeek->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSeek, &Seek_Params, nullptr);
	uFnSeek->FunctionFlags |= 0x400;
};

// Function AkAudio.AkSoundSource.StopAll
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:

void UAkSoundSource::StopAll()
{
	static UFunction* uFnStopAll = nullptr;

	if (!uFnStopAll)
	{
		uFnStopAll = UFunction::FindFunction("Function AkAudio.AkSoundSource.StopAll");
	}

	UAkSoundSource_execStopAll_Params StopAll_Params;
	memset(&StopAll_Params, 0, sizeof(StopAll_Params));

	uFnStopAll->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStopAll, &StopAll_Params, nullptr);
	uFnStopAll->FunctionFlags |= 0x400;
};

// Function AkAudio.AkSoundSource.Stop
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkSoundSource::Stop(class UAkSoundCue* Sound)
{
	static UFunction* uFnStop = nullptr;

	if (!uFnStop)
	{
		uFnStop = UFunction::FindFunction("Function AkAudio.AkSoundSource.Stop");
	}

	UAkSoundSource_execStop_Params Stop_Params;
	memset(&Stop_Params, 0, sizeof(Stop_Params));
	memcpy_s(&Stop_Params.Sound, sizeof(Stop_Params.Sound), &Sound, sizeof(Sound));

	uFnStop->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStop, &Stop_Params, nullptr);
	uFnStop->FunctionFlags |= 0x400;
};

// Function AkAudio.AkSoundSource.Play
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_K2Call | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UAkSoundCue*             Sound                          (CPF_Parm)

int32_t UAkSoundSource::Play(class UAkSoundCue* Sound)
{
	static UFunction* uFnPlay = nullptr;

	if (!uFnPlay)
	{
		uFnPlay = UFunction::FindFunction("Function AkAudio.AkSoundSource.Play");
	}

	UAkSoundSource_execPlay_Params Play_Params;
	memset(&Play_Params, 0, sizeof(Play_Params));
	memcpy_s(&Play_Params.Sound, sizeof(Play_Params.Sound), &Sound, sizeof(Sound));

	uFnPlay->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnPlay, &Play_Params, nullptr);
	uFnPlay->FunctionFlags |= 0x400;

	return Play_Params.ReturnValue;
};

// Function AkAudio.AkSoundSource.EventDuration
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class UAkSoundSource*          Source                         (CPF_Parm | CPF_EditInline)
// int32_t                        PlayingID                      (CPF_Parm)
// float                          DurationMS                     (CPF_Parm)

void UAkSoundSource::EventDuration(class UAkSoundSource* Source, int32_t PlayingID, float DurationMS)
{
	static UFunction* uFnEventDuration = nullptr;

	if (!uFnEventDuration)
	{
		uFnEventDuration = UFunction::FindFunction("Function AkAudio.AkSoundSource.EventDuration");
	}

	UAkSoundSource_execEventDuration_Params EventDuration_Params;
	memset(&EventDuration_Params, 0, sizeof(EventDuration_Params));
	memcpy_s(&EventDuration_Params.Source, sizeof(EventDuration_Params.Source), &Source, sizeof(Source));
	memcpy_s(&EventDuration_Params.PlayingID, sizeof(EventDuration_Params.PlayingID), &PlayingID, sizeof(PlayingID));
	memcpy_s(&EventDuration_Params.DurationMS, sizeof(EventDuration_Params.DurationMS), &DurationMS, sizeof(DurationMS));

	this->ProcessEvent(uFnEventDuration, &EventDuration_Params, nullptr);
};

// Function AkAudio.AkSoundSource.EventMarker
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class UAkSoundSource*          Source                         (CPF_Parm | CPF_EditInline)
// int32_t                        PlayingID                      (CPF_Parm)
// class FString                  Marker                         (CPF_Parm | CPF_NeedCtorLink)

void UAkSoundSource::EventMarker(class UAkSoundSource* Source, int32_t PlayingID, class FString Marker)
{
	static UFunction* uFnEventMarker = nullptr;

	if (!uFnEventMarker)
	{
		uFnEventMarker = UFunction::FindFunction("Function AkAudio.AkSoundSource.EventMarker");
	}

	UAkSoundSource_execEventMarker_Params EventMarker_Params;
	memset(&EventMarker_Params, 0, sizeof(EventMarker_Params));
	memcpy_s(&EventMarker_Params.Source, sizeof(EventMarker_Params.Source), &Source, sizeof(Source));
	memcpy_s(&EventMarker_Params.PlayingID, sizeof(EventMarker_Params.PlayingID), &PlayingID, sizeof(PlayingID));
	memcpy_s(&EventMarker_Params.Marker, sizeof(EventMarker_Params.Marker), &Marker, sizeof(Marker));

	this->ProcessEvent(uFnEventMarker, &EventMarker_Params, nullptr);
};

// Function AkAudio.AkSoundSource.EventFinished
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class UAkSoundSource*          Source                         (CPF_Parm | CPF_EditInline)
// int32_t                        PlayingID                      (CPF_Parm)

void UAkSoundSource::EventFinished(class UAkSoundSource* Source, int32_t PlayingID)
{
	static UFunction* uFnEventFinished = nullptr;

	if (!uFnEventFinished)
	{
		uFnEventFinished = UFunction::FindFunction("Function AkAudio.AkSoundSource.EventFinished");
	}

	UAkSoundSource_execEventFinished_Params EventFinished_Params;
	memset(&EventFinished_Params, 0, sizeof(EventFinished_Params));
	memcpy_s(&EventFinished_Params.Source, sizeof(EventFinished_Params.Source), &Source, sizeof(Source));
	memcpy_s(&EventFinished_Params.PlayingID, sizeof(EventFinished_Params.PlayingID), &PlayingID, sizeof(PlayingID));

	this->ProcessEvent(uFnEventFinished, &EventFinished_Params, nullptr);
};

// Function AkAudio.SeqAct_AkPlayMusicWithCues.TriggerEvents
// [0x00040803] (FUNC_Final | FUNC_Defined | FUNC_Event | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class FString                  CueName                        (CPF_Parm | CPF_NeedCtorLink)

void USeqAct_AkPlayMusicWithCues::eventTriggerEvents(class FString CueName)
{
	static UFunction* uFnTriggerEvents = nullptr;

	if (!uFnTriggerEvents)
	{
		uFnTriggerEvents = UFunction::FindFunction("Function AkAudio.SeqAct_AkPlayMusicWithCues.TriggerEvents");
	}

	USeqAct_AkPlayMusicWithCues_eventTriggerEvents_Params TriggerEvents_Params;
	memset(&TriggerEvents_Params, 0, sizeof(TriggerEvents_Params));
	memcpy_s(&TriggerEvents_Params.CueName, sizeof(TriggerEvents_Params.CueName), &CueName, sizeof(CueName));

	this->ProcessEvent(uFnTriggerEvents, &TriggerEvents_Params, nullptr);
};

// Function AkAudio.SeqAct_AkPlaySound.ToggleSoundFor
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  A                              (CPF_Parm)
// bool                           bPlay                          (CPF_Parm)

void USeqAct_AkPlaySound::ToggleSoundFor(class AActor* A, bool bPlay)
{
	static UFunction* uFnToggleSoundFor = nullptr;

	if (!uFnToggleSoundFor)
	{
		uFnToggleSoundFor = UFunction::FindFunction("Function AkAudio.SeqAct_AkPlaySound.ToggleSoundFor");
	}

	USeqAct_AkPlaySound_execToggleSoundFor_Params ToggleSoundFor_Params;
	memset(&ToggleSoundFor_Params, 0, sizeof(ToggleSoundFor_Params));
	memcpy_s(&ToggleSoundFor_Params.A, sizeof(ToggleSoundFor_Params.A), &A, sizeof(A));
	ToggleSoundFor_Params.bPlay = bPlay;

	this->ProcessEvent(uFnToggleSoundFor, &ToggleSoundFor_Params, nullptr);
};

// Function AkAudio.SeqAct_AkPlaySound.ToggleSound
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bPlay                          (CPF_Parm)

void USeqAct_AkPlaySound::ToggleSound(bool bPlay)
{
	static UFunction* uFnToggleSound = nullptr;

	if (!uFnToggleSound)
	{
		uFnToggleSound = UFunction::FindFunction("Function AkAudio.SeqAct_AkPlaySound.ToggleSound");
	}

	USeqAct_AkPlaySound_execToggleSound_Params ToggleSound_Params;
	memset(&ToggleSound_Params, 0, sizeof(ToggleSound_Params));
	ToggleSound_Params.bPlay = bPlay;

	this->ProcessEvent(uFnToggleSound, &ToggleSound_Params, nullptr);
};

// Function AkAudio.SeqAct_AkPlaySound.Activated
// [0x400020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:

void USeqAct_AkPlaySound::eventActivated()
{
	static UFunction* uFnActivated = nullptr;

	if (!uFnActivated)
	{
		uFnActivated = UFunction::FindFunction("Function AkAudio.SeqAct_AkPlaySound.Activated");
	}

	USeqAct_AkPlaySound_eventActivated_Params Activated_Params;
	memset(&Activated_Params, 0, sizeof(Activated_Params));

	this->ProcessEvent(uFnActivated, &Activated_Params, nullptr);
};

// Function AkAudio.SeqAct_AkPostEvent.HandleSoundCueFinished
// [0x00040C01] (FUNC_Final | FUNC_Native | FUNC_Event | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class UAkSoundSource*          Source                         (CPF_Parm | CPF_EditInline)
// int32_t                        PlayingID                      (CPF_Parm)

void USeqAct_AkPostEvent::eventHandleSoundCueFinished(class UAkSoundSource* Source, int32_t PlayingID)
{
	static UFunction* uFnHandleSoundCueFinished = nullptr;

	if (!uFnHandleSoundCueFinished)
	{
		uFnHandleSoundCueFinished = UFunction::FindFunction("Function AkAudio.SeqAct_AkPostEvent.HandleSoundCueFinished");
	}

	USeqAct_AkPostEvent_eventHandleSoundCueFinished_Params HandleSoundCueFinished_Params;
	memset(&HandleSoundCueFinished_Params, 0, sizeof(HandleSoundCueFinished_Params));
	memcpy_s(&HandleSoundCueFinished_Params.Source, sizeof(HandleSoundCueFinished_Params.Source), &Source, sizeof(Source));
	memcpy_s(&HandleSoundCueFinished_Params.PlayingID, sizeof(HandleSoundCueFinished_Params.PlayingID), &PlayingID, sizeof(PlayingID));

	uFnHandleSoundCueFinished->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnHandleSoundCueFinished, &HandleSoundCueFinished_Params, nullptr);
	uFnHandleSoundCueFinished->FunctionFlags |= 0x400;
};

// Function AkAudio.AkAmbientSoundActor.OnToggle
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_Toggle*          Action                         (CPF_Parm)

void AAkAmbientSoundActor::OnToggle(class USeqAct_Toggle* Action)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function AkAudio.AkAmbientSoundActor.OnToggle");
	}

	AAkAmbientSoundActor_execOnToggle_Params OnToggle_Params;
	memset(&OnToggle_Params, 0, sizeof(OnToggle_Params));
	memcpy_s(&OnToggle_Params.Action, sizeof(OnToggle_Params.Action), &Action, sizeof(Action));

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
};

// Function AkAudio.SeqAct_AkPlaySoundAndSeek.ToggleSoundFor
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  A                              (CPF_Parm)
// bool                           bPlay                          (CPF_Parm)

void USeqAct_AkPlaySoundAndSeek::ToggleSoundFor(class AActor* A, bool bPlay)
{
	static UFunction* uFnToggleSoundFor = nullptr;

	if (!uFnToggleSoundFor)
	{
		uFnToggleSoundFor = UFunction::FindFunction("Function AkAudio.SeqAct_AkPlaySoundAndSeek.ToggleSoundFor");
	}

	USeqAct_AkPlaySoundAndSeek_execToggleSoundFor_Params ToggleSoundFor_Params;
	memset(&ToggleSoundFor_Params, 0, sizeof(ToggleSoundFor_Params));
	memcpy_s(&ToggleSoundFor_Params.A, sizeof(ToggleSoundFor_Params.A), &A, sizeof(A));
	ToggleSoundFor_Params.bPlay = bPlay;

	this->ProcessEvent(uFnToggleSoundFor, &ToggleSoundFor_Params, nullptr);
};

// Function AkAudio.SeqAct_AkPlaySoundAndSeek.ToggleSound
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bPlay                          (CPF_Parm)

void USeqAct_AkPlaySoundAndSeek::ToggleSound(bool bPlay)
{
	static UFunction* uFnToggleSound = nullptr;

	if (!uFnToggleSound)
	{
		uFnToggleSound = UFunction::FindFunction("Function AkAudio.SeqAct_AkPlaySoundAndSeek.ToggleSound");
	}

	USeqAct_AkPlaySoundAndSeek_execToggleSound_Params ToggleSound_Params;
	memset(&ToggleSound_Params, 0, sizeof(ToggleSound_Params));
	ToggleSound_Params.bPlay = bPlay;

	this->ProcessEvent(uFnToggleSound, &ToggleSound_Params, nullptr);
};

// Function AkAudio.SeqAct_AkPlaySoundAndSeek.Activated
// [0x400020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:

void USeqAct_AkPlaySoundAndSeek::eventActivated()
{
	static UFunction* uFnActivated = nullptr;

	if (!uFnActivated)
	{
		uFnActivated = UFunction::FindFunction("Function AkAudio.SeqAct_AkPlaySoundAndSeek.Activated");
	}

	USeqAct_AkPlaySoundAndSeek_eventActivated_Params Activated_Params;
	memset(&Activated_Params, 0, sizeof(Activated_Params));

	this->ProcessEvent(uFnActivated, &Activated_Params, nullptr);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
