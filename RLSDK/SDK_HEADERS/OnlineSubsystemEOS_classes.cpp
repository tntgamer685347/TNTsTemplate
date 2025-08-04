/*
#############################################################################################
# RocketLeague (1.0.10897.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: OnlineSubsystemEOS_classes.cpp
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

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ShowEOSVoiceAgreement
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemEOS::ShowEOSVoiceAgreement(uint8_t LocalUserNum)
{
	static UFunction* uFnShowEOSVoiceAgreement = nullptr;

	if (!uFnShowEOSVoiceAgreement)
	{
		uFnShowEOSVoiceAgreement = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ShowEOSVoiceAgreement");
	}

	UOnlineSubsystemEOS_execShowEOSVoiceAgreement_Params ShowEOSVoiceAgreement_Params;
	memset(&ShowEOSVoiceAgreement_Params, 0, sizeof(ShowEOSVoiceAgreement_Params));
	memcpy_s(&ShowEOSVoiceAgreement_Params.LocalUserNum, sizeof(ShowEOSVoiceAgreement_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnShowEOSVoiceAgreement->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowEOSVoiceAgreement, &ShowEOSVoiceAgreement_Params, nullptr);
	uFnShowEOSVoiceAgreement->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ShowEOSOverlay
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemEOS::ShowEOSOverlay(uint8_t LocalUserNum)
{
	static UFunction* uFnShowEOSOverlay = nullptr;

	if (!uFnShowEOSOverlay)
	{
		uFnShowEOSOverlay = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ShowEOSOverlay");
	}

	UOnlineSubsystemEOS_execShowEOSOverlay_Params ShowEOSOverlay_Params;
	memset(&ShowEOSOverlay_Params, 0, sizeof(ShowEOSOverlay_Params));
	memcpy_s(&ShowEOSOverlay_Params.LocalUserNum, sizeof(ShowEOSOverlay_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnShowEOSOverlay->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowEOSOverlay, &ShowEOSOverlay_Params, nullptr);
	uFnShowEOSOverlay->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ShowEOSOverlayReportVoice
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemEOS::ShowEOSOverlayReportVoice()
{
	static UFunction* uFnShowEOSOverlayReportVoice = nullptr;

	if (!uFnShowEOSOverlayReportVoice)
	{
		uFnShowEOSOverlayReportVoice = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ShowEOSOverlayReportVoice");
	}

	UOnlineSubsystemEOS_execShowEOSOverlayReportVoice_Params ShowEOSOverlayReportVoice_Params;
	memset(&ShowEOSOverlayReportVoice_Params, 0, sizeof(ShowEOSOverlayReportVoice_Params));

	uFnShowEOSOverlayReportVoice->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowEOSOverlayReportVoice, &ShowEOSOverlayReportVoice_Params, nullptr);
	uFnShowEOSOverlayReportVoice->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.TickEOSPlatform
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void UOnlineSubsystemEOS::TickEOSPlatform(float DeltaTime)
{
	static UFunction* uFnTickEOSPlatform = nullptr;

	if (!uFnTickEOSPlatform)
	{
		uFnTickEOSPlatform = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.TickEOSPlatform");
	}

	UOnlineSubsystemEOS_execTickEOSPlatform_Params TickEOSPlatform_Params;
	memset(&TickEOSPlatform_Params, 0, sizeof(TickEOSPlatform_Params));
	memcpy_s(&TickEOSPlatform_Params.DeltaTime, sizeof(TickEOSPlatform_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	uFnTickEOSPlatform->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnTickEOSPlatform, &TickEOSPlatform_Params, nullptr);
	uFnTickEOSPlatform->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ManuallyTickEOSPlatform
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemEOS::ManuallyTickEOSPlatform()
{
	static UFunction* uFnManuallyTickEOSPlatform = nullptr;

	if (!uFnManuallyTickEOSPlatform)
	{
		uFnManuallyTickEOSPlatform = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ManuallyTickEOSPlatform");
	}

	UOnlineSubsystemEOS_execManuallyTickEOSPlatform_Params ManuallyTickEOSPlatform_Params;
	memset(&ManuallyTickEOSPlatform_Params, 0, sizeof(ManuallyTickEOSPlatform_Params));

	uFnManuallyTickEOSPlatform->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnManuallyTickEOSPlatform, &ManuallyTickEOSPlatform_Params, nullptr);
	uFnManuallyTickEOSPlatform->FunctionFlags |= 0x400;

	return ManuallyTickEOSPlatform_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.FormatCurrency
// [0x00020803] (FUNC_Final | FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Currency                       (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Price                          (CPF_Parm)

class FString UOnlineSubsystemEOS::eventFormatCurrency(class FString Currency, int32_t Price)
{
	static UFunction* uFnFormatCurrency = nullptr;

	if (!uFnFormatCurrency)
	{
		uFnFormatCurrency = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.FormatCurrency");
	}

	UOnlineSubsystemEOS_eventFormatCurrency_Params FormatCurrency_Params;
	memset(&FormatCurrency_Params, 0, sizeof(FormatCurrency_Params));
	memcpy_s(&FormatCurrency_Params.Currency, sizeof(FormatCurrency_Params.Currency), &Currency, sizeof(Currency));
	memcpy_s(&FormatCurrency_Params.Price, sizeof(FormatCurrency_Params.Price), &Price, sizeof(Price));

	this->ProcessEvent(uFnFormatCurrency, &FormatCurrency_Params, nullptr);

	return FormatCurrency_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearMicroTxnResponseDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ResponseMicroTxnDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearMicroTxnResponseDelegate(struct FScriptDelegate ResponseMicroTxnDelegate)
{
	static UFunction* uFnClearMicroTxnResponseDelegate = nullptr;

	if (!uFnClearMicroTxnResponseDelegate)
	{
		uFnClearMicroTxnResponseDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearMicroTxnResponseDelegate");
	}

	UOnlineSubsystemEOS_execClearMicroTxnResponseDelegate_Params ClearMicroTxnResponseDelegate_Params;
	memset(&ClearMicroTxnResponseDelegate_Params, 0, sizeof(ClearMicroTxnResponseDelegate_Params));
	memcpy_s(&ClearMicroTxnResponseDelegate_Params.ResponseMicroTxnDelegate, sizeof(ClearMicroTxnResponseDelegate_Params.ResponseMicroTxnDelegate), &ResponseMicroTxnDelegate, sizeof(ResponseMicroTxnDelegate));

	this->ProcessEvent(uFnClearMicroTxnResponseDelegate, &ClearMicroTxnResponseDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddMicroTxnResponseDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ResponseMicroTxnDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddMicroTxnResponseDelegate(struct FScriptDelegate ResponseMicroTxnDelegate)
{
	static UFunction* uFnAddMicroTxnResponseDelegate = nullptr;

	if (!uFnAddMicroTxnResponseDelegate)
	{
		uFnAddMicroTxnResponseDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddMicroTxnResponseDelegate");
	}

	UOnlineSubsystemEOS_execAddMicroTxnResponseDelegate_Params AddMicroTxnResponseDelegate_Params;
	memset(&AddMicroTxnResponseDelegate_Params, 0, sizeof(AddMicroTxnResponseDelegate_Params));
	memcpy_s(&AddMicroTxnResponseDelegate_Params.ResponseMicroTxnDelegate, sizeof(AddMicroTxnResponseDelegate_Params.ResponseMicroTxnDelegate), &ResponseMicroTxnDelegate, sizeof(ResponseMicroTxnDelegate));

	this->ProcessEvent(uFnAddMicroTxnResponseDelegate, &AddMicroTxnResponseDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetAppPriceInfo
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            PlayerID                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<struct FName>           AppNames                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::GetAppPriceInfo(struct FScriptDelegate Callback, struct FUniqueNetId& PlayerID, TArray<struct FName>& AppNames)
{
	static UFunction* uFnGetAppPriceInfo = nullptr;

	if (!uFnGetAppPriceInfo)
	{
		uFnGetAppPriceInfo = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetAppPriceInfo");
	}

	UOnlineSubsystemEOS_execGetAppPriceInfo_Params GetAppPriceInfo_Params;
	memset(&GetAppPriceInfo_Params, 0, sizeof(GetAppPriceInfo_Params));
	memcpy_s(&GetAppPriceInfo_Params.Callback, sizeof(GetAppPriceInfo_Params.Callback), &Callback, sizeof(Callback));
	memcpy_s(&GetAppPriceInfo_Params.PlayerID, sizeof(GetAppPriceInfo_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	memcpy_s(&GetAppPriceInfo_Params.AppNames, sizeof(GetAppPriceInfo_Params.AppNames), &AppNames, sizeof(AppNames));

	uFnGetAppPriceInfo->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetAppPriceInfo, &GetAppPriceInfo_Params, nullptr);
	uFnGetAppPriceInfo->FunctionFlags |= 0x400;

	memcpy_s(&PlayerID, sizeof(PlayerID), &GetAppPriceInfo_Params.PlayerID, sizeof(GetAppPriceInfo_Params.PlayerID));
	memcpy_s(&AppNames, sizeof(AppNames), &GetAppPriceInfo_Params.AppNames, sizeof(GetAppPriceInfo_Params.AppNames));

	return GetAppPriceInfo_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.HandleBootMessage
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemEOS::HandleBootMessage()
{
	static UFunction* uFnHandleBootMessage = nullptr;

	if (!uFnHandleBootMessage)
	{
		uFnHandleBootMessage = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.HandleBootMessage");
	}

	UOnlineSubsystemEOS_execHandleBootMessage_Params HandleBootMessage_Params;
	memset(&HandleBootMessage_Params, 0, sizeof(HandleBootMessage_Params));

	uFnHandleBootMessage->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnHandleBootMessage, &HandleBootMessage_Params, nullptr);
	uFnHandleBootMessage->FunctionFlags |= 0x400;

	return HandleBootMessage_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetOverlayEnabled
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemEOS::GetOverlayEnabled()
{
	static UFunction* uFnGetOverlayEnabled = nullptr;

	if (!uFnGetOverlayEnabled)
	{
		uFnGetOverlayEnabled = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetOverlayEnabled");
	}

	UOnlineSubsystemEOS_execGetOverlayEnabled_Params GetOverlayEnabled_Params;
	memset(&GetOverlayEnabled_Params, 0, sizeof(GetOverlayEnabled_Params));

	this->ProcessEvent(uFnGetOverlayEnabled, &GetOverlayEnabled_Params, nullptr);

	return GetOverlayEnabled_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearPlayerSigningOutDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearPlayerSigningOutDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearPlayerSigningOutDelegate = nullptr;

	if (!uFnClearPlayerSigningOutDelegate)
	{
		uFnClearPlayerSigningOutDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearPlayerSigningOutDelegate");
	}

	UOnlineSubsystemEOS_execClearPlayerSigningOutDelegate_Params ClearPlayerSigningOutDelegate_Params;
	memset(&ClearPlayerSigningOutDelegate_Params, 0, sizeof(ClearPlayerSigningOutDelegate_Params));
	memcpy_s(&ClearPlayerSigningOutDelegate_Params.InDelegate, sizeof(ClearPlayerSigningOutDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnClearPlayerSigningOutDelegate, &ClearPlayerSigningOutDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddPlayerSigningOutDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddPlayerSigningOutDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddPlayerSigningOutDelegate = nullptr;

	if (!uFnAddPlayerSigningOutDelegate)
	{
		uFnAddPlayerSigningOutDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddPlayerSigningOutDelegate");
	}

	UOnlineSubsystemEOS_execAddPlayerSigningOutDelegate_Params AddPlayerSigningOutDelegate_Params;
	memset(&AddPlayerSigningOutDelegate_Params, 0, sizeof(AddPlayerSigningOutDelegate_Params));
	memcpy_s(&AddPlayerSigningOutDelegate_Params.InDelegate, sizeof(AddPlayerSigningOutDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnAddPlayerSigningOutDelegate, &AddPlayerSigningOutDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnPlayerSigningOut
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemEOS::OnPlayerSigningOut(uint8_t LocalUserNum)
{
	static UFunction* uFnOnPlayerSigningOut = nullptr;

	if (!uFnOnPlayerSigningOut)
	{
		uFnOnPlayerSigningOut = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnPlayerSigningOut");
	}

	UOnlineSubsystemEOS_execOnPlayerSigningOut_Params OnPlayerSigningOut_Params;
	memset(&OnPlayerSigningOut_Params, 0, sizeof(OnPlayerSigningOut_Params));
	memcpy_s(&OnPlayerSigningOut_Params.LocalUserNum, sizeof(OnPlayerSigningOut_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnOnPlayerSigningOut, &OnPlayerSigningOut_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RefreshNetworkErrorToggle
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemEOS::RefreshNetworkErrorToggle()
{
	static UFunction* uFnRefreshNetworkErrorToggle = nullptr;

	if (!uFnRefreshNetworkErrorToggle)
	{
		uFnRefreshNetworkErrorToggle = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.RefreshNetworkErrorToggle");
	}

	UOnlineSubsystemEOS_execRefreshNetworkErrorToggle_Params RefreshNetworkErrorToggle_Params;
	memset(&RefreshNetworkErrorToggle_Params, 0, sizeof(RefreshNetworkErrorToggle_Params));

	this->ProcessEvent(uFnRefreshNetworkErrorToggle, &RefreshNetworkErrorToggle_Params, nullptr);

	return RefreshNetworkErrorToggle_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUserRestoredDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UserRestoredDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearUserRestoredDelegate(struct FScriptDelegate UserRestoredDelegate)
{
	static UFunction* uFnClearUserRestoredDelegate = nullptr;

	if (!uFnClearUserRestoredDelegate)
	{
		uFnClearUserRestoredDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUserRestoredDelegate");
	}

	UOnlineSubsystemEOS_execClearUserRestoredDelegate_Params ClearUserRestoredDelegate_Params;
	memset(&ClearUserRestoredDelegate_Params, 0, sizeof(ClearUserRestoredDelegate_Params));
	memcpy_s(&ClearUserRestoredDelegate_Params.UserRestoredDelegate, sizeof(ClearUserRestoredDelegate_Params.UserRestoredDelegate), &UserRestoredDelegate, sizeof(UserRestoredDelegate));

	this->ProcessEvent(uFnClearUserRestoredDelegate, &ClearUserRestoredDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUserRestoredDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UserRestoredDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddUserRestoredDelegate(struct FScriptDelegate UserRestoredDelegate)
{
	static UFunction* uFnAddUserRestoredDelegate = nullptr;

	if (!uFnAddUserRestoredDelegate)
	{
		uFnAddUserRestoredDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUserRestoredDelegate");
	}

	UOnlineSubsystemEOS_execAddUserRestoredDelegate_Params AddUserRestoredDelegate_Params;
	memset(&AddUserRestoredDelegate_Params, 0, sizeof(AddUserRestoredDelegate_Params));
	memcpy_s(&AddUserRestoredDelegate_Params.UserRestoredDelegate, sizeof(AddUserRestoredDelegate_Params.UserRestoredDelegate), &UserRestoredDelegate, sizeof(UserRestoredDelegate));

	this->ProcessEvent(uFnAddUserRestoredDelegate, &AddUserRestoredDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUserRestored
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        ControllerId                   (CPF_Parm)

void UOnlineSubsystemEOS::OnUserRestored(uint8_t ControllerId)
{
	static UFunction* uFnOnUserRestored = nullptr;

	if (!uFnOnUserRestored)
	{
		uFnOnUserRestored = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUserRestored");
	}

	UOnlineSubsystemEOS_execOnUserRestored_Params OnUserRestored_Params;
	memset(&OnUserRestored_Params, 0, sizeof(OnUserRestored_Params));
	memcpy_s(&OnUserRestored_Params.ControllerId, sizeof(OnUserRestored_Params.ControllerId), &ControllerId, sizeof(ControllerId));

	this->ProcessEvent(uFnOnUserRestored, &OnUserRestored_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUserOrphanedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UserOrphanedDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearUserOrphanedDelegate(struct FScriptDelegate UserOrphanedDelegate)
{
	static UFunction* uFnClearUserOrphanedDelegate = nullptr;

	if (!uFnClearUserOrphanedDelegate)
	{
		uFnClearUserOrphanedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUserOrphanedDelegate");
	}

	UOnlineSubsystemEOS_execClearUserOrphanedDelegate_Params ClearUserOrphanedDelegate_Params;
	memset(&ClearUserOrphanedDelegate_Params, 0, sizeof(ClearUserOrphanedDelegate_Params));
	memcpy_s(&ClearUserOrphanedDelegate_Params.UserOrphanedDelegate, sizeof(ClearUserOrphanedDelegate_Params.UserOrphanedDelegate), &UserOrphanedDelegate, sizeof(UserOrphanedDelegate));

	this->ProcessEvent(uFnClearUserOrphanedDelegate, &ClearUserOrphanedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUserOrphanedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UserOrphanedDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddUserOrphanedDelegate(struct FScriptDelegate UserOrphanedDelegate)
{
	static UFunction* uFnAddUserOrphanedDelegate = nullptr;

	if (!uFnAddUserOrphanedDelegate)
	{
		uFnAddUserOrphanedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUserOrphanedDelegate");
	}

	UOnlineSubsystemEOS_execAddUserOrphanedDelegate_Params AddUserOrphanedDelegate_Params;
	memset(&AddUserOrphanedDelegate_Params, 0, sizeof(AddUserOrphanedDelegate_Params));
	memcpy_s(&AddUserOrphanedDelegate_Params.UserOrphanedDelegate, sizeof(AddUserOrphanedDelegate_Params.UserOrphanedDelegate), &UserOrphanedDelegate, sizeof(UserOrphanedDelegate));

	this->ProcessEvent(uFnAddUserOrphanedDelegate, &AddUserOrphanedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUserOrphaned
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        ControllerId                   (CPF_Parm)

void UOnlineSubsystemEOS::OnUserOrphaned(uint8_t ControllerId)
{
	static UFunction* uFnOnUserOrphaned = nullptr;

	if (!uFnOnUserOrphaned)
	{
		uFnOnUserOrphaned = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUserOrphaned");
	}

	UOnlineSubsystemEOS_execOnUserOrphaned_Params OnUserOrphaned_Params;
	memset(&OnUserOrphaned_Params, 0, sizeof(OnUserOrphaned_Params));
	memcpy_s(&OnUserOrphaned_Params.ControllerId, sizeof(OnUserOrphaned_Params.ControllerId), &ControllerId, sizeof(ControllerId));

	this->ProcessEvent(uFnOnUserOrphaned, &OnUserOrphaned_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForItemsAsync
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<class FString>          Targets                        (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         OnStorePurchaseCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::OpenStoreForItemsAsync(uint8_t LocalUserNum, TArray<class FString> Targets, struct FScriptDelegate OnStorePurchaseCompleteDelegate)
{
	static UFunction* uFnOpenStoreForItemsAsync = nullptr;

	if (!uFnOpenStoreForItemsAsync)
	{
		uFnOpenStoreForItemsAsync = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForItemsAsync");
	}

	UOnlineSubsystemEOS_execOpenStoreForItemsAsync_Params OpenStoreForItemsAsync_Params;
	memset(&OpenStoreForItemsAsync_Params, 0, sizeof(OpenStoreForItemsAsync_Params));
	memcpy_s(&OpenStoreForItemsAsync_Params.LocalUserNum, sizeof(OpenStoreForItemsAsync_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OpenStoreForItemsAsync_Params.Targets, sizeof(OpenStoreForItemsAsync_Params.Targets), &Targets, sizeof(Targets));
	memcpy_s(&OpenStoreForItemsAsync_Params.OnStorePurchaseCompleteDelegate, sizeof(OpenStoreForItemsAsync_Params.OnStorePurchaseCompleteDelegate), &OnStorePurchaseCompleteDelegate, sizeof(OnStorePurchaseCompleteDelegate));

	this->ProcessEvent(uFnOpenStoreForItemsAsync, &OpenStoreForItemsAsync_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnStorePurchaseCompleteDelegate
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemEOS::OnStorePurchaseCompleteDelegate()
{
	static UFunction* uFnOnStorePurchaseCompleteDelegate = nullptr;

	if (!uFnOnStorePurchaseCompleteDelegate)
	{
		uFnOnStorePurchaseCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnStorePurchaseCompleteDelegate");
	}

	UOnlineSubsystemEOS_execOnStorePurchaseCompleteDelegate_Params OnStorePurchaseCompleteDelegate_Params;
	memset(&OnStorePurchaseCompleteDelegate_Params, 0, sizeof(OnStorePurchaseCompleteDelegate_Params));

	this->ProcessEvent(uFnOnStorePurchaseCompleteDelegate, &OnStorePurchaseCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForItems
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<class FString>          Targets                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::OpenStoreForItems(uint8_t LocalUserNum, TArray<class FString> Targets)
{
	static UFunction* uFnOpenStoreForItems = nullptr;

	if (!uFnOpenStoreForItems)
	{
		uFnOpenStoreForItems = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForItems");
	}

	UOnlineSubsystemEOS_execOpenStoreForItems_Params OpenStoreForItems_Params;
	memset(&OpenStoreForItems_Params, 0, sizeof(OpenStoreForItems_Params));
	memcpy_s(&OpenStoreForItems_Params.LocalUserNum, sizeof(OpenStoreForItems_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OpenStoreForItems_Params.Targets, sizeof(OpenStoreForItems_Params.Targets), &Targets, sizeof(Targets));

	uFnOpenStoreForItems->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnOpenStoreForItems, &OpenStoreForItems_Params, nullptr);
	uFnOpenStoreForItems->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForDLC
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FName                   DLC                            (CPF_Parm)

void UOnlineSubsystemEOS::OpenStoreForDLC(uint8_t LocalUserNum, struct FName DLC)
{
	static UFunction* uFnOpenStoreForDLC = nullptr;

	if (!uFnOpenStoreForDLC)
	{
		uFnOpenStoreForDLC = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForDLC");
	}

	UOnlineSubsystemEOS_execOpenStoreForDLC_Params OpenStoreForDLC_Params;
	memset(&OpenStoreForDLC_Params, 0, sizeof(OpenStoreForDLC_Params));
	memcpy_s(&OpenStoreForDLC_Params.LocalUserNum, sizeof(OpenStoreForDLC_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OpenStoreForDLC_Params.DLC, sizeof(OpenStoreForDLC_Params.DLC), &DLC, sizeof(DLC));

	this->ProcessEvent(uFnOpenStoreForDLC, &OpenStoreForDLC_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenErrorDialog
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// EPS4ErrorDialog                ErrorCode                      (CPF_Parm)

void UOnlineSubsystemEOS::OpenErrorDialog(uint8_t LocalUserNum, EPS4ErrorDialog ErrorCode)
{
	static UFunction* uFnOpenErrorDialog = nullptr;

	if (!uFnOpenErrorDialog)
	{
		uFnOpenErrorDialog = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenErrorDialog");
	}

	UOnlineSubsystemEOS_execOpenErrorDialog_Params OpenErrorDialog_Params;
	memset(&OpenErrorDialog_Params, 0, sizeof(OpenErrorDialog_Params));
	memcpy_s(&OpenErrorDialog_Params.LocalUserNum, sizeof(OpenErrorDialog_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OpenErrorDialog_Params.ErrorCode, sizeof(OpenErrorDialog_Params.ErrorCode), &ErrorCode, sizeof(ErrorCode));

	this->ProcessEvent(uFnOpenErrorDialog, &OpenErrorDialog_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenPS4DisplayMode
// [0x00024001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// EPS4DisplayMode                DisplayMode                    (CPF_Parm)
// TArray<class FString>          Targets                        (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// int32_t                        ServiceLabel                   (CPF_OptionalParm | CPF_Parm)

void UOnlineSubsystemEOS::OpenPS4DisplayMode(uint8_t LocalUserNum, EPS4DisplayMode DisplayMode, TArray<class FString> Targets, int32_t ServiceLabel)
{
	static UFunction* uFnOpenPS4DisplayMode = nullptr;

	if (!uFnOpenPS4DisplayMode)
	{
		uFnOpenPS4DisplayMode = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenPS4DisplayMode");
	}

	UOnlineSubsystemEOS_execOpenPS4DisplayMode_Params OpenPS4DisplayMode_Params;
	memset(&OpenPS4DisplayMode_Params, 0, sizeof(OpenPS4DisplayMode_Params));
	memcpy_s(&OpenPS4DisplayMode_Params.LocalUserNum, sizeof(OpenPS4DisplayMode_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OpenPS4DisplayMode_Params.DisplayMode, sizeof(OpenPS4DisplayMode_Params.DisplayMode), &DisplayMode, sizeof(DisplayMode));
	memcpy_s(&OpenPS4DisplayMode_Params.Targets, sizeof(OpenPS4DisplayMode_Params.Targets), &Targets, sizeof(Targets));
	memcpy_s(&OpenPS4DisplayMode_Params.ServiceLabel, sizeof(OpenPS4DisplayMode_Params.ServiceLabel), &ServiceLabel, sizeof(ServiceLabel));

	this->ProcessEvent(uFnOpenPS4DisplayMode, &OpenPS4DisplayMode_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ResetControllerColor
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ControllerId                   (CPF_Parm)

void UOnlineSubsystemEOS::ResetControllerColor(int32_t ControllerId)
{
	static UFunction* uFnResetControllerColor = nullptr;

	if (!uFnResetControllerColor)
	{
		uFnResetControllerColor = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ResetControllerColor");
	}

	UOnlineSubsystemEOS_execResetControllerColor_Params ResetControllerColor_Params;
	memset(&ResetControllerColor_Params, 0, sizeof(ResetControllerColor_Params));
	memcpy_s(&ResetControllerColor_Params.ControllerId, sizeof(ResetControllerColor_Params.ControllerId), &ControllerId, sizeof(ControllerId));

	this->ProcessEvent(uFnResetControllerColor, &ResetControllerColor_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetControllerColor
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ControllerId                   (CPF_Parm)
// struct FColor                  NewColor                       (CPF_Parm)

void UOnlineSubsystemEOS::SetControllerColor(int32_t ControllerId, struct FColor NewColor)
{
	static UFunction* uFnSetControllerColor = nullptr;

	if (!uFnSetControllerColor)
	{
		uFnSetControllerColor = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetControllerColor");
	}

	UOnlineSubsystemEOS_execSetControllerColor_Params SetControllerColor_Params;
	memset(&SetControllerColor_Params, 0, sizeof(SetControllerColor_Params));
	memcpy_s(&SetControllerColor_Params.ControllerId, sizeof(SetControllerColor_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	memcpy_s(&SetControllerColor_Params.NewColor, sizeof(SetControllerColor_Params.NewColor), &NewColor, sizeof(NewColor));

	this->ProcessEvent(uFnSetControllerColor, &SetControllerColor_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.InitializeTrophyAPI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemEOS::InitializeTrophyAPI()
{
	static UFunction* uFnInitializeTrophyAPI = nullptr;

	if (!uFnInitializeTrophyAPI)
	{
		uFnInitializeTrophyAPI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.InitializeTrophyAPI");
	}

	UOnlineSubsystemEOS_execInitializeTrophyAPI_Params InitializeTrophyAPI_Params;
	memset(&InitializeTrophyAPI_Params, 0, sizeof(InitializeTrophyAPI_Params));

	this->ProcessEvent(uFnInitializeTrophyAPI, &InitializeTrophyAPI_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AnyPlayerChatRestricted
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemEOS::AnyPlayerChatRestricted()
{
	static UFunction* uFnAnyPlayerChatRestricted = nullptr;

	if (!uFnAnyPlayerChatRestricted)
	{
		uFnAnyPlayerChatRestricted = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AnyPlayerChatRestricted");
	}

	UOnlineSubsystemEOS_execAnyPlayerChatRestricted_Params AnyPlayerChatRestricted_Params;
	memset(&AnyPlayerChatRestricted_Params, 0, sizeof(AnyPlayerChatRestricted_Params));

	this->ProcessEvent(uFnAnyPlayerChatRestricted, &AnyPlayerChatRestricted_Params, nullptr);

	return AnyPlayerChatRestricted_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUnlockedDLCChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearUnlockedDLCChangeDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearUnlockedDLCChangeDelegate = nullptr;

	if (!uFnClearUnlockedDLCChangeDelegate)
	{
		uFnClearUnlockedDLCChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUnlockedDLCChangeDelegate");
	}

	UOnlineSubsystemEOS_execClearUnlockedDLCChangeDelegate_Params ClearUnlockedDLCChangeDelegate_Params;
	memset(&ClearUnlockedDLCChangeDelegate_Params, 0, sizeof(ClearUnlockedDLCChangeDelegate_Params));
	memcpy_s(&ClearUnlockedDLCChangeDelegate_Params.InDelegate, sizeof(ClearUnlockedDLCChangeDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnClearUnlockedDLCChangeDelegate, &ClearUnlockedDLCChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUnlockedDLCChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddUnlockedDLCChangeDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddUnlockedDLCChangeDelegate = nullptr;

	if (!uFnAddUnlockedDLCChangeDelegate)
	{
		uFnAddUnlockedDLCChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUnlockedDLCChangeDelegate");
	}

	UOnlineSubsystemEOS_execAddUnlockedDLCChangeDelegate_Params AddUnlockedDLCChangeDelegate_Params;
	memset(&AddUnlockedDLCChangeDelegate_Params, 0, sizeof(AddUnlockedDLCChangeDelegate_Params));
	memcpy_s(&AddUnlockedDLCChangeDelegate_Params.InDelegate, sizeof(AddUnlockedDLCChangeDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnAddUnlockedDLCChangeDelegate, &AddUnlockedDLCChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetUnlockedDLC
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// TArray<struct FName>           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<struct FName> UOnlineSubsystemEOS::GetUnlockedDLC()
{
	static UFunction* uFnGetUnlockedDLC = nullptr;

	if (!uFnGetUnlockedDLC)
	{
		uFnGetUnlockedDLC = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetUnlockedDLC");
	}

	UOnlineSubsystemEOS_execGetUnlockedDLC_Params GetUnlockedDLC_Params;
	memset(&GetUnlockedDLC_Params, 0, sizeof(GetUnlockedDLC_Params));

	this->ProcessEvent(uFnGetUnlockedDLC, &GetUnlockedDLC_Params, nullptr);

	return GetUnlockedDLC_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUnlockedDLCChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemEOS::OnUnlockedDLCChange()
{
	static UFunction* uFnOnUnlockedDLCChange = nullptr;

	if (!uFnOnUnlockedDLCChange)
	{
		uFnOnUnlockedDLCChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUnlockedDLCChange");
	}

	UOnlineSubsystemEOS_execOnUnlockedDLCChange_Params OnUnlockedDLCChange_Params;
	memset(&OnUnlockedDLCChange_Params, 0, sizeof(OnUnlockedDLCChange_Params));

	this->ProcessEvent(uFnOnUnlockedDLCChange, &OnUnlockedDLCChange_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UpdateSessionStatusFromPlayers
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        CurrentPlayerCount             (CPF_Parm)
// int32_t                        numBotPlayers                  (CPF_Parm)

void UOnlineSubsystemEOS::UpdateSessionStatusFromPlayers(int32_t CurrentPlayerCount, int32_t numBotPlayers)
{
	static UFunction* uFnUpdateSessionStatusFromPlayers = nullptr;

	if (!uFnUpdateSessionStatusFromPlayers)
	{
		uFnUpdateSessionStatusFromPlayers = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.UpdateSessionStatusFromPlayers");
	}

	UOnlineSubsystemEOS_execUpdateSessionStatusFromPlayers_Params UpdateSessionStatusFromPlayers_Params;
	memset(&UpdateSessionStatusFromPlayers_Params, 0, sizeof(UpdateSessionStatusFromPlayers_Params));
	memcpy_s(&UpdateSessionStatusFromPlayers_Params.CurrentPlayerCount, sizeof(UpdateSessionStatusFromPlayers_Params.CurrentPlayerCount), &CurrentPlayerCount, sizeof(CurrentPlayerCount));
	memcpy_s(&UpdateSessionStatusFromPlayers_Params.numBotPlayers, sizeof(UpdateSessionStatusFromPlayers_Params.numBotPlayers), &numBotPlayers, sizeof(numBotPlayers));

	this->ProcessEvent(uFnUpdateSessionStatusFromPlayers, &UpdateSessionStatusFromPlayers_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearErrorDialogClosedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearErrorDialogClosedDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearErrorDialogClosedDelegate = nullptr;

	if (!uFnClearErrorDialogClosedDelegate)
	{
		uFnClearErrorDialogClosedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearErrorDialogClosedDelegate");
	}

	UOnlineSubsystemEOS_execClearErrorDialogClosedDelegate_Params ClearErrorDialogClosedDelegate_Params;
	memset(&ClearErrorDialogClosedDelegate_Params, 0, sizeof(ClearErrorDialogClosedDelegate_Params));
	memcpy_s(&ClearErrorDialogClosedDelegate_Params.InDelegate, sizeof(ClearErrorDialogClosedDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnClearErrorDialogClosedDelegate, &ClearErrorDialogClosedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddErrorDialogClosedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddErrorDialogClosedDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddErrorDialogClosedDelegate = nullptr;

	if (!uFnAddErrorDialogClosedDelegate)
	{
		uFnAddErrorDialogClosedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddErrorDialogClosedDelegate");
	}

	UOnlineSubsystemEOS_execAddErrorDialogClosedDelegate_Params AddErrorDialogClosedDelegate_Params;
	memset(&AddErrorDialogClosedDelegate_Params, 0, sizeof(AddErrorDialogClosedDelegate_Params));
	memcpy_s(&AddErrorDialogClosedDelegate_Params.InDelegate, sizeof(AddErrorDialogClosedDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnAddErrorDialogClosedDelegate, &AddErrorDialogClosedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnErrorDialogClosed
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemEOS::OnErrorDialogClosed(int32_t LocalUserNum)
{
	static UFunction* uFnOnErrorDialogClosed = nullptr;

	if (!uFnOnErrorDialogClosed)
	{
		uFnOnErrorDialogClosed = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnErrorDialogClosed");
	}

	UOnlineSubsystemEOS_execOnErrorDialogClosed_Params OnErrorDialogClosed_Params;
	memset(&OnErrorDialogClosed_Params, 0, sizeof(OnErrorDialogClosed_Params));
	memcpy_s(&OnErrorDialogClosed_Params.LocalUserNum, sizeof(OnErrorDialogClosed_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnOnErrorDialogClosed, &OnErrorDialogClosed_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCommerceDialogClosedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearCommerceDialogClosedDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearCommerceDialogClosedDelegate = nullptr;

	if (!uFnClearCommerceDialogClosedDelegate)
	{
		uFnClearCommerceDialogClosedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCommerceDialogClosedDelegate");
	}

	UOnlineSubsystemEOS_execClearCommerceDialogClosedDelegate_Params ClearCommerceDialogClosedDelegate_Params;
	memset(&ClearCommerceDialogClosedDelegate_Params, 0, sizeof(ClearCommerceDialogClosedDelegate_Params));
	memcpy_s(&ClearCommerceDialogClosedDelegate_Params.InDelegate, sizeof(ClearCommerceDialogClosedDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnClearCommerceDialogClosedDelegate, &ClearCommerceDialogClosedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCommerceDialogClosedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddCommerceDialogClosedDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddCommerceDialogClosedDelegate = nullptr;

	if (!uFnAddCommerceDialogClosedDelegate)
	{
		uFnAddCommerceDialogClosedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCommerceDialogClosedDelegate");
	}

	UOnlineSubsystemEOS_execAddCommerceDialogClosedDelegate_Params AddCommerceDialogClosedDelegate_Params;
	memset(&AddCommerceDialogClosedDelegate_Params, 0, sizeof(AddCommerceDialogClosedDelegate_Params));
	memcpy_s(&AddCommerceDialogClosedDelegate_Params.InDelegate, sizeof(AddCommerceDialogClosedDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnAddCommerceDialogClosedDelegate, &AddCommerceDialogClosedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCommerceDialogClosed
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemEOS::OnCommerceDialogClosed()
{
	static UFunction* uFnOnCommerceDialogClosed = nullptr;

	if (!uFnOnCommerceDialogClosed)
	{
		uFnOnCommerceDialogClosed = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCommerceDialogClosed");
	}

	UOnlineSubsystemEOS_execOnCommerceDialogClosed_Params OnCommerceDialogClosed_Params;
	memset(&OnCommerceDialogClosed_Params, 0, sizeof(OnCommerceDialogClosed_Params));

	this->ProcessEvent(uFnOnCommerceDialogClosed, &OnCommerceDialogClosed_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetCurrentConnectionStatus
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EOnlineServerConnectionStatus  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

EOnlineServerConnectionStatus UOnlineSubsystemEOS::GetCurrentConnectionStatus()
{
	static UFunction* uFnGetCurrentConnectionStatus = nullptr;

	if (!uFnGetCurrentConnectionStatus)
	{
		uFnGetCurrentConnectionStatus = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetCurrentConnectionStatus");
	}

	UOnlineSubsystemEOS_execGetCurrentConnectionStatus_Params GetCurrentConnectionStatus_Params;
	memset(&GetCurrentConnectionStatus_Params, 0, sizeof(GetCurrentConnectionStatus_Params));

	this->ProcessEvent(uFnGetCurrentConnectionStatus, &GetCurrentConnectionStatus_Params, nullptr);

	return GetCurrentConnectionStatus_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCloseKickPlayerDialogDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearCloseKickPlayerDialogDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearCloseKickPlayerDialogDelegate = nullptr;

	if (!uFnClearCloseKickPlayerDialogDelegate)
	{
		uFnClearCloseKickPlayerDialogDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCloseKickPlayerDialogDelegate");
	}

	UOnlineSubsystemEOS_execClearCloseKickPlayerDialogDelegate_Params ClearCloseKickPlayerDialogDelegate_Params;
	memset(&ClearCloseKickPlayerDialogDelegate_Params, 0, sizeof(ClearCloseKickPlayerDialogDelegate_Params));
	memcpy_s(&ClearCloseKickPlayerDialogDelegate_Params.InDelegate, sizeof(ClearCloseKickPlayerDialogDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnClearCloseKickPlayerDialogDelegate, &ClearCloseKickPlayerDialogDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCloseKickPlayerDialogDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddCloseKickPlayerDialogDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddCloseKickPlayerDialogDelegate = nullptr;

	if (!uFnAddCloseKickPlayerDialogDelegate)
	{
		uFnAddCloseKickPlayerDialogDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCloseKickPlayerDialogDelegate");
	}

	UOnlineSubsystemEOS_execAddCloseKickPlayerDialogDelegate_Params AddCloseKickPlayerDialogDelegate_Params;
	memset(&AddCloseKickPlayerDialogDelegate_Params, 0, sizeof(AddCloseKickPlayerDialogDelegate_Params));
	memcpy_s(&AddCloseKickPlayerDialogDelegate_Params.InDelegate, sizeof(AddCloseKickPlayerDialogDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnAddCloseKickPlayerDialogDelegate, &AddCloseKickPlayerDialogDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCloseKickPlayerDialog
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemEOS::OnCloseKickPlayerDialog()
{
	static UFunction* uFnOnCloseKickPlayerDialog = nullptr;

	if (!uFnOnCloseKickPlayerDialog)
	{
		uFnOnCloseKickPlayerDialog = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCloseKickPlayerDialog");
	}

	UOnlineSubsystemEOS_execOnCloseKickPlayerDialog_Params OnCloseKickPlayerDialog_Params;
	memset(&OnCloseKickPlayerDialog_Params, 0, sizeof(OnCloseKickPlayerDialog_Params));

	this->ProcessEvent(uFnOnCloseKickPlayerDialog, &OnCloseKickPlayerDialog_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnPlayerTalkingStateChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            Player                         (CPF_Parm | CPF_NeedCtorLink)
// bool                           bIsTalking                     (CPF_Parm)

void UOnlineSubsystemEOS::OnPlayerTalkingStateChange(struct FUniqueNetId Player, bool bIsTalking)
{
	static UFunction* uFnOnPlayerTalkingStateChange = nullptr;

	if (!uFnOnPlayerTalkingStateChange)
	{
		uFnOnPlayerTalkingStateChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnPlayerTalkingStateChange");
	}

	UOnlineSubsystemEOS_execOnPlayerTalkingStateChange_Params OnPlayerTalkingStateChange_Params;
	memset(&OnPlayerTalkingStateChange_Params, 0, sizeof(OnPlayerTalkingStateChange_Params));
	memcpy_s(&OnPlayerTalkingStateChange_Params.Player, sizeof(OnPlayerTalkingStateChange_Params.Player), &Player, sizeof(Player));
	OnPlayerTalkingStateChange_Params.bIsTalking = bIsTalking;

	this->ProcessEvent(uFnOnPlayerTalkingStateChange, &OnPlayerTalkingStateChange_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetVoiceReceiveVolume
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          VoiceVolume                    (CPF_Parm)

bool UOnlineSubsystemEOS::SetVoiceReceiveVolume(float VoiceVolume)
{
	static UFunction* uFnSetVoiceReceiveVolume = nullptr;

	if (!uFnSetVoiceReceiveVolume)
	{
		uFnSetVoiceReceiveVolume = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetVoiceReceiveVolume");
	}

	UOnlineSubsystemEOS_execSetVoiceReceiveVolume_Params SetVoiceReceiveVolume_Params;
	memset(&SetVoiceReceiveVolume_Params, 0, sizeof(SetVoiceReceiveVolume_Params));
	memcpy_s(&SetVoiceReceiveVolume_Params.VoiceVolume, sizeof(SetVoiceReceiveVolume_Params.VoiceVolume), &VoiceVolume, sizeof(VoiceVolume));

	this->ProcessEvent(uFnSetVoiceReceiveVolume, &SetVoiceReceiveVolume_Params, nullptr);

	return SetVoiceReceiveVolume_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetDLCPurchaseTime
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   AppName                        (CPF_Parm)

int32_t UOnlineSubsystemEOS::GetDLCPurchaseTime(struct FName AppName)
{
	static UFunction* uFnGetDLCPurchaseTime = nullptr;

	if (!uFnGetDLCPurchaseTime)
	{
		uFnGetDLCPurchaseTime = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetDLCPurchaseTime");
	}

	UOnlineSubsystemEOS_execGetDLCPurchaseTime_Params GetDLCPurchaseTime_Params;
	memset(&GetDLCPurchaseTime_Params, 0, sizeof(GetDLCPurchaseTime_Params));
	memcpy_s(&GetDLCPurchaseTime_Params.AppName, sizeof(GetDLCPurchaseTime_Params.AppName), &AppName, sizeof(AppName));

	this->ProcessEvent(uFnGetDLCPurchaseTime, &GetDLCPurchaseTime_Params, nullptr);

	return GetDLCPurchaseTime_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SaveKey
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  ProductKey                     (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::SaveKey(class FString ProductKey)
{
	static UFunction* uFnSaveKey = nullptr;

	if (!uFnSaveKey)
	{
		uFnSaveKey = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.SaveKey");
	}

	UOnlineSubsystemEOS_execSaveKey_Params SaveKey_Params;
	memset(&SaveKey_Params, 0, sizeof(SaveKey_Params));
	memcpy_s(&SaveKey_Params.ProductKey, sizeof(SaveKey_Params.ProductKey), &ProductKey, sizeof(ProductKey));

	this->ProcessEvent(uFnSaveKey, &SaveKey_Params, nullptr);

	return SaveKey_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetLocalAccountNames
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// TArray<class FString>          Accounts                       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::GetLocalAccountNames(TArray<class FString>& Accounts)
{
	static UFunction* uFnGetLocalAccountNames = nullptr;

	if (!uFnGetLocalAccountNames)
	{
		uFnGetLocalAccountNames = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetLocalAccountNames");
	}

	UOnlineSubsystemEOS_execGetLocalAccountNames_Params GetLocalAccountNames_Params;
	memset(&GetLocalAccountNames_Params, 0, sizeof(GetLocalAccountNames_Params));
	memcpy_s(&GetLocalAccountNames_Params.Accounts, sizeof(GetLocalAccountNames_Params.Accounts), &Accounts, sizeof(Accounts));

	this->ProcessEvent(uFnGetLocalAccountNames, &GetLocalAccountNames_Params, nullptr);

	memcpy_s(&Accounts, sizeof(Accounts), &GetLocalAccountNames_Params.Accounts, sizeof(GetLocalAccountNames_Params.Accounts));

	return GetLocalAccountNames_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.DeleteLocalAccount
// [0x00024001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Username                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Password                       (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::DeleteLocalAccount(class FString Username, class FString Password)
{
	static UFunction* uFnDeleteLocalAccount = nullptr;

	if (!uFnDeleteLocalAccount)
	{
		uFnDeleteLocalAccount = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.DeleteLocalAccount");
	}

	UOnlineSubsystemEOS_execDeleteLocalAccount_Params DeleteLocalAccount_Params;
	memset(&DeleteLocalAccount_Params, 0, sizeof(DeleteLocalAccount_Params));
	memcpy_s(&DeleteLocalAccount_Params.Username, sizeof(DeleteLocalAccount_Params.Username), &Username, sizeof(Username));
	memcpy_s(&DeleteLocalAccount_Params.Password, sizeof(DeleteLocalAccount_Params.Password), &Password, sizeof(Password));

	this->ProcessEvent(uFnDeleteLocalAccount, &DeleteLocalAccount_Params, nullptr);

	return DeleteLocalAccount_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RenameLocalAccount
// [0x00024001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  NewUserName                    (CPF_Parm | CPF_NeedCtorLink)
// class FString                  OldUserName                    (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Password                       (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::RenameLocalAccount(class FString NewUserName, class FString OldUserName, class FString Password)
{
	static UFunction* uFnRenameLocalAccount = nullptr;

	if (!uFnRenameLocalAccount)
	{
		uFnRenameLocalAccount = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.RenameLocalAccount");
	}

	UOnlineSubsystemEOS_execRenameLocalAccount_Params RenameLocalAccount_Params;
	memset(&RenameLocalAccount_Params, 0, sizeof(RenameLocalAccount_Params));
	memcpy_s(&RenameLocalAccount_Params.NewUserName, sizeof(RenameLocalAccount_Params.NewUserName), &NewUserName, sizeof(NewUserName));
	memcpy_s(&RenameLocalAccount_Params.OldUserName, sizeof(RenameLocalAccount_Params.OldUserName), &OldUserName, sizeof(OldUserName));
	memcpy_s(&RenameLocalAccount_Params.Password, sizeof(RenameLocalAccount_Params.Password), &Password, sizeof(Password));

	this->ProcessEvent(uFnRenameLocalAccount, &RenameLocalAccount_Params, nullptr);

	return RenameLocalAccount_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.CreateLocalAccount
// [0x00024001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Username                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Password                       (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::CreateLocalAccount(class FString Username, class FString Password)
{
	static UFunction* uFnCreateLocalAccount = nullptr;

	if (!uFnCreateLocalAccount)
	{
		uFnCreateLocalAccount = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.CreateLocalAccount");
	}

	UOnlineSubsystemEOS_execCreateLocalAccount_Params CreateLocalAccount_Params;
	memset(&CreateLocalAccount_Params, 0, sizeof(CreateLocalAccount_Params));
	memcpy_s(&CreateLocalAccount_Params.Username, sizeof(CreateLocalAccount_Params.Username), &Username, sizeof(Username));
	memcpy_s(&CreateLocalAccount_Params.Password, sizeof(CreateLocalAccount_Params.Password), &Password, sizeof(Password));

	this->ProcessEvent(uFnCreateLocalAccount, &CreateLocalAccount_Params, nullptr);

	return CreateLocalAccount_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCreateOnlineAccountCompletedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         AccountCreateDelegate          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearCreateOnlineAccountCompletedDelegate(struct FScriptDelegate AccountCreateDelegate)
{
	static UFunction* uFnClearCreateOnlineAccountCompletedDelegate = nullptr;

	if (!uFnClearCreateOnlineAccountCompletedDelegate)
	{
		uFnClearCreateOnlineAccountCompletedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCreateOnlineAccountCompletedDelegate");
	}

	UOnlineSubsystemEOS_execClearCreateOnlineAccountCompletedDelegate_Params ClearCreateOnlineAccountCompletedDelegate_Params;
	memset(&ClearCreateOnlineAccountCompletedDelegate_Params, 0, sizeof(ClearCreateOnlineAccountCompletedDelegate_Params));
	memcpy_s(&ClearCreateOnlineAccountCompletedDelegate_Params.AccountCreateDelegate, sizeof(ClearCreateOnlineAccountCompletedDelegate_Params.AccountCreateDelegate), &AccountCreateDelegate, sizeof(AccountCreateDelegate));

	this->ProcessEvent(uFnClearCreateOnlineAccountCompletedDelegate, &ClearCreateOnlineAccountCompletedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCreateOnlineAccountCompletedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         AccountCreateDelegate          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddCreateOnlineAccountCompletedDelegate(struct FScriptDelegate AccountCreateDelegate)
{
	static UFunction* uFnAddCreateOnlineAccountCompletedDelegate = nullptr;

	if (!uFnAddCreateOnlineAccountCompletedDelegate)
	{
		uFnAddCreateOnlineAccountCompletedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCreateOnlineAccountCompletedDelegate");
	}

	UOnlineSubsystemEOS_execAddCreateOnlineAccountCompletedDelegate_Params AddCreateOnlineAccountCompletedDelegate_Params;
	memset(&AddCreateOnlineAccountCompletedDelegate_Params, 0, sizeof(AddCreateOnlineAccountCompletedDelegate_Params));
	memcpy_s(&AddCreateOnlineAccountCompletedDelegate_Params.AccountCreateDelegate, sizeof(AddCreateOnlineAccountCompletedDelegate_Params.AccountCreateDelegate), &AccountCreateDelegate, sizeof(AccountCreateDelegate));

	this->ProcessEvent(uFnAddCreateOnlineAccountCompletedDelegate, &AddCreateOnlineAccountCompletedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCreateOnlineAccountCompleted
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// EOnlineAccountCreateStatus     ErrorStatus                    (CPF_Parm)

void UOnlineSubsystemEOS::OnCreateOnlineAccountCompleted(EOnlineAccountCreateStatus ErrorStatus)
{
	static UFunction* uFnOnCreateOnlineAccountCompleted = nullptr;

	if (!uFnOnCreateOnlineAccountCompleted)
	{
		uFnOnCreateOnlineAccountCompleted = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCreateOnlineAccountCompleted");
	}

	UOnlineSubsystemEOS_execOnCreateOnlineAccountCompleted_Params OnCreateOnlineAccountCompleted_Params;
	memset(&OnCreateOnlineAccountCompleted_Params, 0, sizeof(OnCreateOnlineAccountCompleted_Params));
	memcpy_s(&OnCreateOnlineAccountCompleted_Params.ErrorStatus, sizeof(OnCreateOnlineAccountCompleted_Params.ErrorStatus), &ErrorStatus, sizeof(ErrorStatus));

	this->ProcessEvent(uFnOnCreateOnlineAccountCompleted, &OnCreateOnlineAccountCompleted_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.CreateOnlineAccount
// [0x00024001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Username                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Password                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  EmailAddress                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ProductKey                     (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::CreateOnlineAccount(class FString Username, class FString Password, class FString EmailAddress, class FString ProductKey)
{
	static UFunction* uFnCreateOnlineAccount = nullptr;

	if (!uFnCreateOnlineAccount)
	{
		uFnCreateOnlineAccount = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.CreateOnlineAccount");
	}

	UOnlineSubsystemEOS_execCreateOnlineAccount_Params CreateOnlineAccount_Params;
	memset(&CreateOnlineAccount_Params, 0, sizeof(CreateOnlineAccount_Params));
	memcpy_s(&CreateOnlineAccount_Params.Username, sizeof(CreateOnlineAccount_Params.Username), &Username, sizeof(Username));
	memcpy_s(&CreateOnlineAccount_Params.Password, sizeof(CreateOnlineAccount_Params.Password), &Password, sizeof(Password));
	memcpy_s(&CreateOnlineAccount_Params.EmailAddress, sizeof(CreateOnlineAccount_Params.EmailAddress), &EmailAddress, sizeof(EmailAddress));
	memcpy_s(&CreateOnlineAccount_Params.ProductKey, sizeof(CreateOnlineAccount_Params.ProductKey), &ProductKey, sizeof(ProductKey));

	this->ProcessEvent(uFnCreateOnlineAccount, &CreateOnlineAccount_Params, nullptr);

	return CreateOnlineAccount_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsKeyValid
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemEOS::IsKeyValid()
{
	static UFunction* uFnIsKeyValid = nullptr;

	if (!uFnIsKeyValid)
	{
		uFnIsKeyValid = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsKeyValid");
	}

	UOnlineSubsystemEOS_execIsKeyValid_Params IsKeyValid_Params;
	memset(&IsKeyValid_Params, 0, sizeof(IsKeyValid_Params));

	this->ProcessEvent(uFnIsKeyValid, &IsKeyValid_Params, nullptr);

	return IsKeyValid_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearStorageDeviceChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearStorageDeviceChangeDelegate(struct FScriptDelegate StorageDeviceChangeDelegate)
{
	static UFunction* uFnClearStorageDeviceChangeDelegate = nullptr;

	if (!uFnClearStorageDeviceChangeDelegate)
	{
		uFnClearStorageDeviceChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearStorageDeviceChangeDelegate");
	}

	UOnlineSubsystemEOS_execClearStorageDeviceChangeDelegate_Params ClearStorageDeviceChangeDelegate_Params;
	memset(&ClearStorageDeviceChangeDelegate_Params, 0, sizeof(ClearStorageDeviceChangeDelegate_Params));
	memcpy_s(&ClearStorageDeviceChangeDelegate_Params.StorageDeviceChangeDelegate, sizeof(ClearStorageDeviceChangeDelegate_Params.StorageDeviceChangeDelegate), &StorageDeviceChangeDelegate, sizeof(StorageDeviceChangeDelegate));

	this->ProcessEvent(uFnClearStorageDeviceChangeDelegate, &ClearStorageDeviceChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddStorageDeviceChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddStorageDeviceChangeDelegate(struct FScriptDelegate StorageDeviceChangeDelegate)
{
	static UFunction* uFnAddStorageDeviceChangeDelegate = nullptr;

	if (!uFnAddStorageDeviceChangeDelegate)
	{
		uFnAddStorageDeviceChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddStorageDeviceChangeDelegate");
	}

	UOnlineSubsystemEOS_execAddStorageDeviceChangeDelegate_Params AddStorageDeviceChangeDelegate_Params;
	memset(&AddStorageDeviceChangeDelegate_Params, 0, sizeof(AddStorageDeviceChangeDelegate_Params));
	memcpy_s(&AddStorageDeviceChangeDelegate_Params.StorageDeviceChangeDelegate, sizeof(AddStorageDeviceChangeDelegate_Params.StorageDeviceChangeDelegate), &StorageDeviceChangeDelegate, sizeof(StorageDeviceChangeDelegate));

	this->ProcessEvent(uFnAddStorageDeviceChangeDelegate, &AddStorageDeviceChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnStorageDeviceChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemEOS::OnStorageDeviceChange()
{
	static UFunction* uFnOnStorageDeviceChange = nullptr;

	if (!uFnOnStorageDeviceChange)
	{
		uFnOnStorageDeviceChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnStorageDeviceChange");
	}

	UOnlineSubsystemEOS_execOnStorageDeviceChange_Params OnStorageDeviceChange_Params;
	memset(&OnStorageDeviceChange_Params, 0, sizeof(OnStorageDeviceChange_Params));

	this->ProcessEvent(uFnOnStorageDeviceChange, &OnStorageDeviceChange_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetNATType
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// ENATType                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

ENATType UOnlineSubsystemEOS::GetNATType()
{
	static UFunction* uFnGetNATType = nullptr;

	if (!uFnGetNATType)
	{
		uFnGetNATType = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetNATType");
	}

	UOnlineSubsystemEOS_execGetNATType_Params GetNATType_Params;
	memset(&GetNATType_Params, 0, sizeof(GetNATType_Params));

	this->ProcessEvent(uFnGetNATType, &GetNATType_Params, nullptr);

	return GetNATType_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearConnectionStatusChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ConnectionStatusDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearConnectionStatusChangeDelegate(struct FScriptDelegate ConnectionStatusDelegate)
{
	static UFunction* uFnClearConnectionStatusChangeDelegate = nullptr;

	if (!uFnClearConnectionStatusChangeDelegate)
	{
		uFnClearConnectionStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearConnectionStatusChangeDelegate");
	}

	UOnlineSubsystemEOS_execClearConnectionStatusChangeDelegate_Params ClearConnectionStatusChangeDelegate_Params;
	memset(&ClearConnectionStatusChangeDelegate_Params, 0, sizeof(ClearConnectionStatusChangeDelegate_Params));
	memcpy_s(&ClearConnectionStatusChangeDelegate_Params.ConnectionStatusDelegate, sizeof(ClearConnectionStatusChangeDelegate_Params.ConnectionStatusDelegate), &ConnectionStatusDelegate, sizeof(ConnectionStatusDelegate));

	this->ProcessEvent(uFnClearConnectionStatusChangeDelegate, &ClearConnectionStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddConnectionStatusChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ConnectionStatusDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddConnectionStatusChangeDelegate(struct FScriptDelegate ConnectionStatusDelegate)
{
	static UFunction* uFnAddConnectionStatusChangeDelegate = nullptr;

	if (!uFnAddConnectionStatusChangeDelegate)
	{
		uFnAddConnectionStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddConnectionStatusChangeDelegate");
	}

	UOnlineSubsystemEOS_execAddConnectionStatusChangeDelegate_Params AddConnectionStatusChangeDelegate_Params;
	memset(&AddConnectionStatusChangeDelegate_Params, 0, sizeof(AddConnectionStatusChangeDelegate_Params));
	memcpy_s(&AddConnectionStatusChangeDelegate_Params.ConnectionStatusDelegate, sizeof(AddConnectionStatusChangeDelegate_Params.ConnectionStatusDelegate), &ConnectionStatusDelegate, sizeof(ConnectionStatusDelegate));

	this->ProcessEvent(uFnAddConnectionStatusChangeDelegate, &AddConnectionStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnConnectionStatusChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// EOnlineServerConnectionStatus  ConnectionStatus               (CPF_Parm)

void UOnlineSubsystemEOS::OnConnectionStatusChange(EOnlineServerConnectionStatus ConnectionStatus)
{
	static UFunction* uFnOnConnectionStatusChange = nullptr;

	if (!uFnOnConnectionStatusChange)
	{
		uFnOnConnectionStatusChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnConnectionStatusChange");
	}

	UOnlineSubsystemEOS_execOnConnectionStatusChange_Params OnConnectionStatusChange_Params;
	memset(&OnConnectionStatusChange_Params, 0, sizeof(OnConnectionStatusChange_Params));
	memcpy_s(&OnConnectionStatusChange_Params.ConnectionStatus, sizeof(OnConnectionStatusChange_Params.ConnectionStatus), &ConnectionStatus, sizeof(ConnectionStatus));

	this->ProcessEvent(uFnOnConnectionStatusChange, &OnConnectionStatusChange_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsControllerConnected
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)

bool UOnlineSubsystemEOS::IsControllerConnected(int32_t ControllerId)
{
	static UFunction* uFnIsControllerConnected = nullptr;

	if (!uFnIsControllerConnected)
	{
		uFnIsControllerConnected = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsControllerConnected");
	}

	UOnlineSubsystemEOS_execIsControllerConnected_Params IsControllerConnected_Params;
	memset(&IsControllerConnected_Params, 0, sizeof(IsControllerConnected_Params));
	memcpy_s(&IsControllerConnected_Params.ControllerId, sizeof(IsControllerConnected_Params.ControllerId), &ControllerId, sizeof(ControllerId));

	this->ProcessEvent(uFnIsControllerConnected, &IsControllerConnected_Params, nullptr);

	return IsControllerConnected_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearControllerChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ControllerChangeDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearControllerChangeDelegate(struct FScriptDelegate ControllerChangeDelegate)
{
	static UFunction* uFnClearControllerChangeDelegate = nullptr;

	if (!uFnClearControllerChangeDelegate)
	{
		uFnClearControllerChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearControllerChangeDelegate");
	}

	UOnlineSubsystemEOS_execClearControllerChangeDelegate_Params ClearControllerChangeDelegate_Params;
	memset(&ClearControllerChangeDelegate_Params, 0, sizeof(ClearControllerChangeDelegate_Params));
	memcpy_s(&ClearControllerChangeDelegate_Params.ControllerChangeDelegate, sizeof(ClearControllerChangeDelegate_Params.ControllerChangeDelegate), &ControllerChangeDelegate, sizeof(ControllerChangeDelegate));

	this->ProcessEvent(uFnClearControllerChangeDelegate, &ClearControllerChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddControllerChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ControllerChangeDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddControllerChangeDelegate(struct FScriptDelegate ControllerChangeDelegate)
{
	static UFunction* uFnAddControllerChangeDelegate = nullptr;

	if (!uFnAddControllerChangeDelegate)
	{
		uFnAddControllerChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddControllerChangeDelegate");
	}

	UOnlineSubsystemEOS_execAddControllerChangeDelegate_Params AddControllerChangeDelegate_Params;
	memset(&AddControllerChangeDelegate_Params, 0, sizeof(AddControllerChangeDelegate_Params));
	memcpy_s(&AddControllerChangeDelegate_Params.ControllerChangeDelegate, sizeof(AddControllerChangeDelegate_Params.ControllerChangeDelegate), &ControllerChangeDelegate, sizeof(ControllerChangeDelegate));

	this->ProcessEvent(uFnAddControllerChangeDelegate, &AddControllerChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnControllerChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ControllerId                   (CPF_Parm)
// bool                           bIsConnected                   (CPF_Parm)

void UOnlineSubsystemEOS::OnControllerChange(int32_t ControllerId, bool bIsConnected)
{
	static UFunction* uFnOnControllerChange = nullptr;

	if (!uFnOnControllerChange)
	{
		uFnOnControllerChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnControllerChange");
	}

	UOnlineSubsystemEOS_execOnControllerChange_Params OnControllerChange_Params;
	memset(&OnControllerChange_Params, 0, sizeof(OnControllerChange_Params));
	memcpy_s(&OnControllerChange_Params.ControllerId, sizeof(OnControllerChange_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	OnControllerChange_Params.bIsConnected = bIsConnected;

	this->ProcessEvent(uFnOnControllerChange, &OnControllerChange_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetNetworkNotificationPosition
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// ENetworkNotificationPosition   NewPos                         (CPF_Parm)

void UOnlineSubsystemEOS::SetNetworkNotificationPosition(ENetworkNotificationPosition NewPos)
{
	static UFunction* uFnSetNetworkNotificationPosition = nullptr;

	if (!uFnSetNetworkNotificationPosition)
	{
		uFnSetNetworkNotificationPosition = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetNetworkNotificationPosition");
	}

	UOnlineSubsystemEOS_execSetNetworkNotificationPosition_Params SetNetworkNotificationPosition_Params;
	memset(&SetNetworkNotificationPosition_Params, 0, sizeof(SetNetworkNotificationPosition_Params));
	memcpy_s(&SetNetworkNotificationPosition_Params.NewPos, sizeof(SetNetworkNotificationPosition_Params.NewPos), &NewPos, sizeof(NewPos));

	this->ProcessEvent(uFnSetNetworkNotificationPosition, &SetNetworkNotificationPosition_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetNetworkNotificationPosition
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// ENetworkNotificationPosition   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

ENetworkNotificationPosition UOnlineSubsystemEOS::GetNetworkNotificationPosition()
{
	static UFunction* uFnGetNetworkNotificationPosition = nullptr;

	if (!uFnGetNetworkNotificationPosition)
	{
		uFnGetNetworkNotificationPosition = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetNetworkNotificationPosition");
	}

	UOnlineSubsystemEOS_execGetNetworkNotificationPosition_Params GetNetworkNotificationPosition_Params;
	memset(&GetNetworkNotificationPosition_Params, 0, sizeof(GetNetworkNotificationPosition_Params));

	this->ProcessEvent(uFnGetNetworkNotificationPosition, &GetNetworkNotificationPosition_Params, nullptr);

	return GetNetworkNotificationPosition_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.NotifyExternalUIChanged
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bIsOpening                     (CPF_Parm)

void UOnlineSubsystemEOS::NotifyExternalUIChanged(bool bIsOpening)
{
	static UFunction* uFnNotifyExternalUIChanged = nullptr;

	if (!uFnNotifyExternalUIChanged)
	{
		uFnNotifyExternalUIChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.NotifyExternalUIChanged");
	}

	UOnlineSubsystemEOS_execNotifyExternalUIChanged_Params NotifyExternalUIChanged_Params;
	memset(&NotifyExternalUIChanged_Params, 0, sizeof(NotifyExternalUIChanged_Params));
	NotifyExternalUIChanged_Params.bIsOpening = bIsOpening;

	uFnNotifyExternalUIChanged->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnNotifyExternalUIChanged, &NotifyExternalUIChanged_Params, nullptr);
	uFnNotifyExternalUIChanged->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearExternalUIChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearExternalUIChangeDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearExternalUIChangeDelegate = nullptr;

	if (!uFnClearExternalUIChangeDelegate)
	{
		uFnClearExternalUIChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearExternalUIChangeDelegate");
	}

	UOnlineSubsystemEOS_execClearExternalUIChangeDelegate_Params ClearExternalUIChangeDelegate_Params;
	memset(&ClearExternalUIChangeDelegate_Params, 0, sizeof(ClearExternalUIChangeDelegate_Params));
	memcpy_s(&ClearExternalUIChangeDelegate_Params.InDelegate, sizeof(ClearExternalUIChangeDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnClearExternalUIChangeDelegate, &ClearExternalUIChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddExternalUIChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddExternalUIChangeDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddExternalUIChangeDelegate = nullptr;

	if (!uFnAddExternalUIChangeDelegate)
	{
		uFnAddExternalUIChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddExternalUIChangeDelegate");
	}

	UOnlineSubsystemEOS_execAddExternalUIChangeDelegate_Params AddExternalUIChangeDelegate_Params;
	memset(&AddExternalUIChangeDelegate_Params, 0, sizeof(AddExternalUIChangeDelegate_Params));
	memcpy_s(&AddExternalUIChangeDelegate_Params.InDelegate, sizeof(AddExternalUIChangeDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnAddExternalUIChangeDelegate, &AddExternalUIChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnExternalUIChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bIsOpening                     (CPF_Parm)

void UOnlineSubsystemEOS::OnExternalUIChange(bool bIsOpening)
{
	static UFunction* uFnOnExternalUIChange = nullptr;

	if (!uFnOnExternalUIChange)
	{
		uFnOnExternalUIChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnExternalUIChange");
	}

	UOnlineSubsystemEOS_execOnExternalUIChange_Params OnExternalUIChange_Params;
	memset(&OnExternalUIChange_Params, 0, sizeof(OnExternalUIChange_Params));
	OnExternalUIChange_Params.bIsOpening = bIsOpening;

	this->ProcessEvent(uFnOnExternalUIChange, &OnExternalUIChange_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearLinkStatusChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LinkStatusDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearLinkStatusChangeDelegate(struct FScriptDelegate LinkStatusDelegate)
{
	static UFunction* uFnClearLinkStatusChangeDelegate = nullptr;

	if (!uFnClearLinkStatusChangeDelegate)
	{
		uFnClearLinkStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearLinkStatusChangeDelegate");
	}

	UOnlineSubsystemEOS_execClearLinkStatusChangeDelegate_Params ClearLinkStatusChangeDelegate_Params;
	memset(&ClearLinkStatusChangeDelegate_Params, 0, sizeof(ClearLinkStatusChangeDelegate_Params));
	memcpy_s(&ClearLinkStatusChangeDelegate_Params.LinkStatusDelegate, sizeof(ClearLinkStatusChangeDelegate_Params.LinkStatusDelegate), &LinkStatusDelegate, sizeof(LinkStatusDelegate));

	this->ProcessEvent(uFnClearLinkStatusChangeDelegate, &ClearLinkStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddLinkStatusChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LinkStatusDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddLinkStatusChangeDelegate(struct FScriptDelegate LinkStatusDelegate)
{
	static UFunction* uFnAddLinkStatusChangeDelegate = nullptr;

	if (!uFnAddLinkStatusChangeDelegate)
	{
		uFnAddLinkStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddLinkStatusChangeDelegate");
	}

	UOnlineSubsystemEOS_execAddLinkStatusChangeDelegate_Params AddLinkStatusChangeDelegate_Params;
	memset(&AddLinkStatusChangeDelegate_Params, 0, sizeof(AddLinkStatusChangeDelegate_Params));
	memcpy_s(&AddLinkStatusChangeDelegate_Params.LinkStatusDelegate, sizeof(AddLinkStatusChangeDelegate_Params.LinkStatusDelegate), &LinkStatusDelegate, sizeof(LinkStatusDelegate));

	this->ProcessEvent(uFnAddLinkStatusChangeDelegate, &AddLinkStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnLinkStatusChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bIsConnected                   (CPF_Parm)

void UOnlineSubsystemEOS::OnLinkStatusChange(bool bIsConnected)
{
	static UFunction* uFnOnLinkStatusChange = nullptr;

	if (!uFnOnLinkStatusChange)
	{
		uFnOnLinkStatusChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnLinkStatusChange");
	}

	UOnlineSubsystemEOS_execOnLinkStatusChange_Params OnLinkStatusChange_Params;
	memset(&OnLinkStatusChange_Params, 0, sizeof(OnLinkStatusChange_Params));
	OnLinkStatusChange_Params.bIsConnected = bIsConnected;

	this->ProcessEvent(uFnOnLinkStatusChange, &OnLinkStatusChange_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.HasLinkConnection
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemEOS::HasLinkConnection()
{
	static UFunction* uFnHasLinkConnection = nullptr;

	if (!uFnHasLinkConnection)
	{
		uFnHasLinkConnection = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.HasLinkConnection");
	}

	UOnlineSubsystemEOS_execHasLinkConnection_Params HasLinkConnection_Params;
	memset(&HasLinkConnection_Params, 0, sizeof(HasLinkConnection_Params));

	this->ProcessEvent(uFnHasLinkConnection, &HasLinkConnection_Params, nullptr);

	return HasLinkConnection_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterStatGuid
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ClientStatGuid                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::RegisterStatGuid(struct FUniqueNetId PlayerID, class FString& ClientStatGuid)
{
	static UFunction* uFnRegisterStatGuid = nullptr;

	if (!uFnRegisterStatGuid)
	{
		uFnRegisterStatGuid = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterStatGuid");
	}

	UOnlineSubsystemEOS_execRegisterStatGuid_Params RegisterStatGuid_Params;
	memset(&RegisterStatGuid_Params, 0, sizeof(RegisterStatGuid_Params));
	memcpy_s(&RegisterStatGuid_Params.PlayerID, sizeof(RegisterStatGuid_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	memcpy_s(&RegisterStatGuid_Params.ClientStatGuid, sizeof(RegisterStatGuid_Params.ClientStatGuid), &ClientStatGuid, sizeof(ClientStatGuid));

	this->ProcessEvent(uFnRegisterStatGuid, &RegisterStatGuid_Params, nullptr);

	memcpy_s(&ClientStatGuid, sizeof(ClientStatGuid), &RegisterStatGuid_Params.ClientStatGuid, sizeof(RegisterStatGuid_Params.ClientStatGuid));

	return RegisterStatGuid_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetClientStatGuid
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UOnlineSubsystemEOS::GetClientStatGuid()
{
	static UFunction* uFnGetClientStatGuid = nullptr;

	if (!uFnGetClientStatGuid)
	{
		uFnGetClientStatGuid = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetClientStatGuid");
	}

	UOnlineSubsystemEOS_execGetClientStatGuid_Params GetClientStatGuid_Params;
	memset(&GetClientStatGuid_Params, 0, sizeof(GetClientStatGuid_Params));

	this->ProcessEvent(uFnGetClientStatGuid, &GetClientStatGuid_Params, nullptr);

	return GetClientStatGuid_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearRegisterHostStatGuidCompleteDelegateDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate)
{
	static UFunction* uFnClearRegisterHostStatGuidCompleteDelegateDelegate = nullptr;

	if (!uFnClearRegisterHostStatGuidCompleteDelegateDelegate)
	{
		uFnClearRegisterHostStatGuidCompleteDelegateDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearRegisterHostStatGuidCompleteDelegateDelegate");
	}

	UOnlineSubsystemEOS_execClearRegisterHostStatGuidCompleteDelegateDelegate_Params ClearRegisterHostStatGuidCompleteDelegateDelegate_Params;
	memset(&ClearRegisterHostStatGuidCompleteDelegateDelegate_Params, 0, sizeof(ClearRegisterHostStatGuidCompleteDelegateDelegate_Params));
	memcpy_s(&ClearRegisterHostStatGuidCompleteDelegateDelegate_Params.RegisterHostStatGuidCompleteDelegate, sizeof(ClearRegisterHostStatGuidCompleteDelegateDelegate_Params.RegisterHostStatGuidCompleteDelegate), &RegisterHostStatGuidCompleteDelegate, sizeof(RegisterHostStatGuidCompleteDelegate));

	this->ProcessEvent(uFnClearRegisterHostStatGuidCompleteDelegateDelegate, &ClearRegisterHostStatGuidCompleteDelegateDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddRegisterHostStatGuidCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddRegisterHostStatGuidCompleteDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate)
{
	static UFunction* uFnAddRegisterHostStatGuidCompleteDelegate = nullptr;

	if (!uFnAddRegisterHostStatGuidCompleteDelegate)
	{
		uFnAddRegisterHostStatGuidCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddRegisterHostStatGuidCompleteDelegate");
	}

	UOnlineSubsystemEOS_execAddRegisterHostStatGuidCompleteDelegate_Params AddRegisterHostStatGuidCompleteDelegate_Params;
	memset(&AddRegisterHostStatGuidCompleteDelegate_Params, 0, sizeof(AddRegisterHostStatGuidCompleteDelegate_Params));
	memcpy_s(&AddRegisterHostStatGuidCompleteDelegate_Params.RegisterHostStatGuidCompleteDelegate, sizeof(AddRegisterHostStatGuidCompleteDelegate_Params.RegisterHostStatGuidCompleteDelegate), &RegisterHostStatGuidCompleteDelegate, sizeof(RegisterHostStatGuidCompleteDelegate));

	this->ProcessEvent(uFnAddRegisterHostStatGuidCompleteDelegate, &AddRegisterHostStatGuidCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnFlushOnlineStatsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FName                   SessionName                    (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemEOS::OnFlushOnlineStatsComplete(struct FName SessionName, bool bWasSuccessful)
{
	static UFunction* uFnOnFlushOnlineStatsComplete = nullptr;

	if (!uFnOnFlushOnlineStatsComplete)
	{
		uFnOnFlushOnlineStatsComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnFlushOnlineStatsComplete");
	}

	UOnlineSubsystemEOS_execOnFlushOnlineStatsComplete_Params OnFlushOnlineStatsComplete_Params;
	memset(&OnFlushOnlineStatsComplete_Params, 0, sizeof(OnFlushOnlineStatsComplete_Params));
	memcpy_s(&OnFlushOnlineStatsComplete_Params.SessionName, sizeof(OnFlushOnlineStatsComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	OnFlushOnlineStatsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnFlushOnlineStatsComplete, &OnFlushOnlineStatsComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnRegisterHostStatGuidComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemEOS::OnRegisterHostStatGuidComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnRegisterHostStatGuidComplete = nullptr;

	if (!uFnOnRegisterHostStatGuidComplete)
	{
		uFnOnRegisterHostStatGuidComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnRegisterHostStatGuidComplete");
	}

	UOnlineSubsystemEOS_execOnRegisterHostStatGuidComplete_Params OnRegisterHostStatGuidComplete_Params;
	memset(&OnRegisterHostStatGuidComplete_Params, 0, sizeof(OnRegisterHostStatGuidComplete_Params));
	OnRegisterHostStatGuidComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnRegisterHostStatGuidComplete, &OnRegisterHostStatGuidComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterHostStatGuid
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  HostStatGuid                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::RegisterHostStatGuid(class FString& HostStatGuid)
{
	static UFunction* uFnRegisterHostStatGuid = nullptr;

	if (!uFnRegisterHostStatGuid)
	{
		uFnRegisterHostStatGuid = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterHostStatGuid");
	}

	UOnlineSubsystemEOS_execRegisterHostStatGuid_Params RegisterHostStatGuid_Params;
	memset(&RegisterHostStatGuid_Params, 0, sizeof(RegisterHostStatGuid_Params));
	memcpy_s(&RegisterHostStatGuid_Params.HostStatGuid, sizeof(RegisterHostStatGuid_Params.HostStatGuid), &HostStatGuid, sizeof(HostStatGuid));

	this->ProcessEvent(uFnRegisterHostStatGuid, &RegisterHostStatGuid_Params, nullptr);

	memcpy_s(&HostStatGuid, sizeof(HostStatGuid), &RegisterHostStatGuid_Params.HostStatGuid, sizeof(RegisterHostStatGuid_Params.HostStatGuid));

	return RegisterHostStatGuid_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetHostStatGuid
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UOnlineSubsystemEOS::GetHostStatGuid()
{
	static UFunction* uFnGetHostStatGuid = nullptr;

	if (!uFnGetHostStatGuid)
	{
		uFnGetHostStatGuid = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetHostStatGuid");
	}

	UOnlineSubsystemEOS_execGetHostStatGuid_Params GetHostStatGuid_Params;
	memset(&GetHostStatGuid_Params, 0, sizeof(GetHostStatGuid_Params));

	this->ProcessEvent(uFnGetHostStatGuid, &GetHostStatGuid_Params, nullptr);

	return GetHostStatGuid_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.WriteOnlinePlayerScores
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// TArray<struct FOnlinePlayerScore> PlayerScores                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::WriteOnlinePlayerScores(TArray<struct FOnlinePlayerScore>& PlayerScores)
{
	static UFunction* uFnWriteOnlinePlayerScores = nullptr;

	if (!uFnWriteOnlinePlayerScores)
	{
		uFnWriteOnlinePlayerScores = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.WriteOnlinePlayerScores");
	}

	UOnlineSubsystemEOS_execWriteOnlinePlayerScores_Params WriteOnlinePlayerScores_Params;
	memset(&WriteOnlinePlayerScores_Params, 0, sizeof(WriteOnlinePlayerScores_Params));
	memcpy_s(&WriteOnlinePlayerScores_Params.PlayerScores, sizeof(WriteOnlinePlayerScores_Params.PlayerScores), &PlayerScores, sizeof(PlayerScores));

	this->ProcessEvent(uFnWriteOnlinePlayerScores, &WriteOnlinePlayerScores_Params, nullptr);

	memcpy_s(&PlayerScores, sizeof(PlayerScores), &WriteOnlinePlayerScores_Params.PlayerScores, sizeof(WriteOnlinePlayerScores_Params.PlayerScores));

	return WriteOnlinePlayerScores_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.FreeStats
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)

void UOnlineSubsystemEOS::FreeStats(class UOnlineStatsRead* StatsRead)
{
	static UFunction* uFnFreeStats = nullptr;

	if (!uFnFreeStats)
	{
		uFnFreeStats = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.FreeStats");
	}

	UOnlineSubsystemEOS_execFreeStats_Params FreeStats_Params;
	memset(&FreeStats_Params, 0, sizeof(FreeStats_Params));
	memcpy_s(&FreeStats_Params.StatsRead, sizeof(FreeStats_Params.StatsRead), &StatsRead, sizeof(StatsRead));

	this->ProcessEvent(uFnFreeStats, &FreeStats_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearReadOnlineStatsCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate)
{
	static UFunction* uFnClearReadOnlineStatsCompleteDelegate = nullptr;

	if (!uFnClearReadOnlineStatsCompleteDelegate)
	{
		uFnClearReadOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearReadOnlineStatsCompleteDelegate");
	}

	UOnlineSubsystemEOS_execClearReadOnlineStatsCompleteDelegate_Params ClearReadOnlineStatsCompleteDelegate_Params;
	memset(&ClearReadOnlineStatsCompleteDelegate_Params, 0, sizeof(ClearReadOnlineStatsCompleteDelegate_Params));
	memcpy_s(&ClearReadOnlineStatsCompleteDelegate_Params.ReadOnlineStatsCompleteDelegate, sizeof(ClearReadOnlineStatsCompleteDelegate_Params.ReadOnlineStatsCompleteDelegate), &ReadOnlineStatsCompleteDelegate, sizeof(ReadOnlineStatsCompleteDelegate));

	this->ProcessEvent(uFnClearReadOnlineStatsCompleteDelegate, &ClearReadOnlineStatsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddReadOnlineStatsCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate)
{
	static UFunction* uFnAddReadOnlineStatsCompleteDelegate = nullptr;

	if (!uFnAddReadOnlineStatsCompleteDelegate)
	{
		uFnAddReadOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddReadOnlineStatsCompleteDelegate");
	}

	UOnlineSubsystemEOS_execAddReadOnlineStatsCompleteDelegate_Params AddReadOnlineStatsCompleteDelegate_Params;
	memset(&AddReadOnlineStatsCompleteDelegate_Params, 0, sizeof(AddReadOnlineStatsCompleteDelegate_Params));
	memcpy_s(&AddReadOnlineStatsCompleteDelegate_Params.ReadOnlineStatsCompleteDelegate, sizeof(AddReadOnlineStatsCompleteDelegate_Params.ReadOnlineStatsCompleteDelegate), &ReadOnlineStatsCompleteDelegate, sizeof(ReadOnlineStatsCompleteDelegate));

	this->ProcessEvent(uFnAddReadOnlineStatsCompleteDelegate, &AddReadOnlineStatsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnReadOnlineStatsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemEOS::OnReadOnlineStatsComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnReadOnlineStatsComplete = nullptr;

	if (!uFnOnReadOnlineStatsComplete)
	{
		uFnOnReadOnlineStatsComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnReadOnlineStatsComplete");
	}

	UOnlineSubsystemEOS_execOnReadOnlineStatsComplete_Params OnReadOnlineStatsComplete_Params;
	memset(&OnReadOnlineStatsComplete_Params, 0, sizeof(OnReadOnlineStatsComplete_Params));
	OnReadOnlineStatsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadOnlineStatsComplete, &OnReadOnlineStatsComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsByRankAroundPlayer
// [0x00024001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// int32_t                        NumRows                        (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemEOS::ReadOnlineStatsByRankAroundPlayer(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead, int32_t NumRows)
{
	static UFunction* uFnReadOnlineStatsByRankAroundPlayer = nullptr;

	if (!uFnReadOnlineStatsByRankAroundPlayer)
	{
		uFnReadOnlineStatsByRankAroundPlayer = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsByRankAroundPlayer");
	}

	UOnlineSubsystemEOS_execReadOnlineStatsByRankAroundPlayer_Params ReadOnlineStatsByRankAroundPlayer_Params;
	memset(&ReadOnlineStatsByRankAroundPlayer_Params, 0, sizeof(ReadOnlineStatsByRankAroundPlayer_Params));
	memcpy_s(&ReadOnlineStatsByRankAroundPlayer_Params.LocalUserNum, sizeof(ReadOnlineStatsByRankAroundPlayer_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadOnlineStatsByRankAroundPlayer_Params.StatsRead, sizeof(ReadOnlineStatsByRankAroundPlayer_Params.StatsRead), &StatsRead, sizeof(StatsRead));
	memcpy_s(&ReadOnlineStatsByRankAroundPlayer_Params.NumRows, sizeof(ReadOnlineStatsByRankAroundPlayer_Params.NumRows), &NumRows, sizeof(NumRows));

	this->ProcessEvent(uFnReadOnlineStatsByRankAroundPlayer, &ReadOnlineStatsByRankAroundPlayer_Params, nullptr);

	return ReadOnlineStatsByRankAroundPlayer_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsByRank
// [0x00024001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// int32_t                        StartIndex                     (CPF_OptionalParm | CPF_Parm)
// int32_t                        NumToRead                      (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemEOS::ReadOnlineStatsByRank(class UOnlineStatsRead* StatsRead, int32_t StartIndex, int32_t NumToRead)
{
	static UFunction* uFnReadOnlineStatsByRank = nullptr;

	if (!uFnReadOnlineStatsByRank)
	{
		uFnReadOnlineStatsByRank = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsByRank");
	}

	UOnlineSubsystemEOS_execReadOnlineStatsByRank_Params ReadOnlineStatsByRank_Params;
	memset(&ReadOnlineStatsByRank_Params, 0, sizeof(ReadOnlineStatsByRank_Params));
	memcpy_s(&ReadOnlineStatsByRank_Params.StatsRead, sizeof(ReadOnlineStatsByRank_Params.StatsRead), &StatsRead, sizeof(StatsRead));
	memcpy_s(&ReadOnlineStatsByRank_Params.StartIndex, sizeof(ReadOnlineStatsByRank_Params.StartIndex), &StartIndex, sizeof(StartIndex));
	memcpy_s(&ReadOnlineStatsByRank_Params.NumToRead, sizeof(ReadOnlineStatsByRank_Params.NumToRead), &NumToRead, sizeof(NumToRead));

	this->ProcessEvent(uFnReadOnlineStatsByRank, &ReadOnlineStatsByRank_Params, nullptr);

	return ReadOnlineStatsByRank_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsForFriends
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)

bool UOnlineSubsystemEOS::ReadOnlineStatsForFriends(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead)
{
	static UFunction* uFnReadOnlineStatsForFriends = nullptr;

	if (!uFnReadOnlineStatsForFriends)
	{
		uFnReadOnlineStatsForFriends = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsForFriends");
	}

	UOnlineSubsystemEOS_execReadOnlineStatsForFriends_Params ReadOnlineStatsForFriends_Params;
	memset(&ReadOnlineStatsForFriends_Params, 0, sizeof(ReadOnlineStatsForFriends_Params));
	memcpy_s(&ReadOnlineStatsForFriends_Params.LocalUserNum, sizeof(ReadOnlineStatsForFriends_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadOnlineStatsForFriends_Params.StatsRead, sizeof(ReadOnlineStatsForFriends_Params.StatsRead), &StatsRead, sizeof(StatsRead));

	this->ProcessEvent(uFnReadOnlineStatsForFriends, &ReadOnlineStatsForFriends_Params, nullptr);

	return ReadOnlineStatsForFriends_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStats
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// TArray<struct FUniqueNetId>    Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::ReadOnlineStats(class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>& Players)
{
	static UFunction* uFnReadOnlineStats = nullptr;

	if (!uFnReadOnlineStats)
	{
		uFnReadOnlineStats = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStats");
	}

	UOnlineSubsystemEOS_execReadOnlineStats_Params ReadOnlineStats_Params;
	memset(&ReadOnlineStats_Params, 0, sizeof(ReadOnlineStats_Params));
	memcpy_s(&ReadOnlineStats_Params.StatsRead, sizeof(ReadOnlineStats_Params.StatsRead), &StatsRead, sizeof(StatsRead));
	memcpy_s(&ReadOnlineStats_Params.Players, sizeof(ReadOnlineStats_Params.Players), &Players, sizeof(Players));

	this->ProcessEvent(uFnReadOnlineStats, &ReadOnlineStats_Params, nullptr);

	memcpy_s(&Players, sizeof(Players), &ReadOnlineStats_Params.Players, sizeof(ReadOnlineStats_Params.Players));

	return ReadOnlineStats_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnmuteAll
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemEOS::UnmuteAll(uint8_t LocalUserNum)
{
	static UFunction* uFnUnmuteAll = nullptr;

	if (!uFnUnmuteAll)
	{
		uFnUnmuteAll = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnmuteAll");
	}

	UOnlineSubsystemEOS_execUnmuteAll_Params UnmuteAll_Params;
	memset(&UnmuteAll_Params, 0, sizeof(UnmuteAll_Params));
	memcpy_s(&UnmuteAll_Params.LocalUserNum, sizeof(UnmuteAll_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnUnmuteAll, &UnmuteAll_Params, nullptr);

	return UnmuteAll_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.MuteAll
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAllowFriends                  (CPF_Parm)

bool UOnlineSubsystemEOS::MuteAll(uint8_t LocalUserNum, bool bAllowFriends)
{
	static UFunction* uFnMuteAll = nullptr;

	if (!uFnMuteAll)
	{
		uFnMuteAll = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.MuteAll");
	}

	UOnlineSubsystemEOS_execMuteAll_Params MuteAll_Params;
	memset(&MuteAll_Params, 0, sizeof(MuteAll_Params));
	memcpy_s(&MuteAll_Params.LocalUserNum, sizeof(MuteAll_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	MuteAll_Params.bAllowFriends = bAllowFriends;

	this->ProcessEvent(uFnMuteAll, &MuteAll_Params, nullptr);

	return MuteAll_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetSpeechRecognitionObject
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class USpeechRecognition*      SpeechRecogObj                 (CPF_Parm)

bool UOnlineSubsystemEOS::SetSpeechRecognitionObject(uint8_t LocalUserNum, class USpeechRecognition* SpeechRecogObj)
{
	static UFunction* uFnSetSpeechRecognitionObject = nullptr;

	if (!uFnSetSpeechRecognitionObject)
	{
		uFnSetSpeechRecognitionObject = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetSpeechRecognitionObject");
	}

	UOnlineSubsystemEOS_execSetSpeechRecognitionObject_Params SetSpeechRecognitionObject_Params;
	memset(&SetSpeechRecognitionObject_Params, 0, sizeof(SetSpeechRecognitionObject_Params));
	memcpy_s(&SetSpeechRecognitionObject_Params.LocalUserNum, sizeof(SetSpeechRecognitionObject_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&SetSpeechRecognitionObject_Params.SpeechRecogObj, sizeof(SetSpeechRecognitionObject_Params.SpeechRecogObj), &SpeechRecogObj, sizeof(SpeechRecogObj));

	this->ProcessEvent(uFnSetSpeechRecognitionObject, &SetSpeechRecognitionObject_Params, nullptr);

	return SetSpeechRecognitionObject_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SelectVocabulary
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        VocabularyId                   (CPF_Parm)

bool UOnlineSubsystemEOS::SelectVocabulary(uint8_t LocalUserNum, int32_t VocabularyId)
{
	static UFunction* uFnSelectVocabulary = nullptr;

	if (!uFnSelectVocabulary)
	{
		uFnSelectVocabulary = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.SelectVocabulary");
	}

	UOnlineSubsystemEOS_execSelectVocabulary_Params SelectVocabulary_Params;
	memset(&SelectVocabulary_Params, 0, sizeof(SelectVocabulary_Params));
	memcpy_s(&SelectVocabulary_Params.LocalUserNum, sizeof(SelectVocabulary_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&SelectVocabulary_Params.VocabularyId, sizeof(SelectVocabulary_Params.VocabularyId), &VocabularyId, sizeof(VocabularyId));

	this->ProcessEvent(uFnSelectVocabulary, &SelectVocabulary_Params, nullptr);

	return SelectVocabulary_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearRecognitionCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RecognitionDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearRecognitionCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RecognitionDelegate)
{
	static UFunction* uFnClearRecognitionCompleteDelegate = nullptr;

	if (!uFnClearRecognitionCompleteDelegate)
	{
		uFnClearRecognitionCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearRecognitionCompleteDelegate");
	}

	UOnlineSubsystemEOS_execClearRecognitionCompleteDelegate_Params ClearRecognitionCompleteDelegate_Params;
	memset(&ClearRecognitionCompleteDelegate_Params, 0, sizeof(ClearRecognitionCompleteDelegate_Params));
	memcpy_s(&ClearRecognitionCompleteDelegate_Params.LocalUserNum, sizeof(ClearRecognitionCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearRecognitionCompleteDelegate_Params.RecognitionDelegate, sizeof(ClearRecognitionCompleteDelegate_Params.RecognitionDelegate), &RecognitionDelegate, sizeof(RecognitionDelegate));

	this->ProcessEvent(uFnClearRecognitionCompleteDelegate, &ClearRecognitionCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddRecognitionCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RecognitionDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddRecognitionCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RecognitionDelegate)
{
	static UFunction* uFnAddRecognitionCompleteDelegate = nullptr;

	if (!uFnAddRecognitionCompleteDelegate)
	{
		uFnAddRecognitionCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddRecognitionCompleteDelegate");
	}

	UOnlineSubsystemEOS_execAddRecognitionCompleteDelegate_Params AddRecognitionCompleteDelegate_Params;
	memset(&AddRecognitionCompleteDelegate_Params, 0, sizeof(AddRecognitionCompleteDelegate_Params));
	memcpy_s(&AddRecognitionCompleteDelegate_Params.LocalUserNum, sizeof(AddRecognitionCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddRecognitionCompleteDelegate_Params.RecognitionDelegate, sizeof(AddRecognitionCompleteDelegate_Params.RecognitionDelegate), &RecognitionDelegate, sizeof(RecognitionDelegate));

	this->ProcessEvent(uFnAddRecognitionCompleteDelegate, &AddRecognitionCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnRecognitionComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemEOS::OnRecognitionComplete()
{
	static UFunction* uFnOnRecognitionComplete = nullptr;

	if (!uFnOnRecognitionComplete)
	{
		uFnOnRecognitionComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnRecognitionComplete");
	}

	UOnlineSubsystemEOS_execOnRecognitionComplete_Params OnRecognitionComplete_Params;
	memset(&OnRecognitionComplete_Params, 0, sizeof(OnRecognitionComplete_Params));

	this->ProcessEvent(uFnOnRecognitionComplete, &OnRecognitionComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetRecognitionResults
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FSpeechRecognizedWord> Words                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::GetRecognitionResults(uint8_t LocalUserNum, TArray<struct FSpeechRecognizedWord>& Words)
{
	static UFunction* uFnGetRecognitionResults = nullptr;

	if (!uFnGetRecognitionResults)
	{
		uFnGetRecognitionResults = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetRecognitionResults");
	}

	UOnlineSubsystemEOS_execGetRecognitionResults_Params GetRecognitionResults_Params;
	memset(&GetRecognitionResults_Params, 0, sizeof(GetRecognitionResults_Params));
	memcpy_s(&GetRecognitionResults_Params.LocalUserNum, sizeof(GetRecognitionResults_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&GetRecognitionResults_Params.Words, sizeof(GetRecognitionResults_Params.Words), &Words, sizeof(Words));

	this->ProcessEvent(uFnGetRecognitionResults, &GetRecognitionResults_Params, nullptr);

	memcpy_s(&Words, sizeof(Words), &GetRecognitionResults_Params.Words, sizeof(GetRecognitionResults_Params.Words));

	return GetRecognitionResults_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.StopSpeechRecognition
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemEOS::StopSpeechRecognition(uint8_t LocalUserNum)
{
	static UFunction* uFnStopSpeechRecognition = nullptr;

	if (!uFnStopSpeechRecognition)
	{
		uFnStopSpeechRecognition = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.StopSpeechRecognition");
	}

	UOnlineSubsystemEOS_execStopSpeechRecognition_Params StopSpeechRecognition_Params;
	memset(&StopSpeechRecognition_Params, 0, sizeof(StopSpeechRecognition_Params));
	memcpy_s(&StopSpeechRecognition_Params.LocalUserNum, sizeof(StopSpeechRecognition_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnStopSpeechRecognition, &StopSpeechRecognition_Params, nullptr);

	return StopSpeechRecognition_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.StartSpeechRecognition
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemEOS::StartSpeechRecognition(uint8_t LocalUserNum)
{
	static UFunction* uFnStartSpeechRecognition = nullptr;

	if (!uFnStartSpeechRecognition)
	{
		uFnStartSpeechRecognition = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.StartSpeechRecognition");
	}

	UOnlineSubsystemEOS_execStartSpeechRecognition_Params StartSpeechRecognition_Params;
	memset(&StartSpeechRecognition_Params, 0, sizeof(StartSpeechRecognition_Params));
	memcpy_s(&StartSpeechRecognition_Params.LocalUserNum, sizeof(StartSpeechRecognition_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnStartSpeechRecognition, &StartSpeechRecognition_Params, nullptr);

	return StartSpeechRecognition_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.StopNetworkedVoice
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemEOS::StopNetworkedVoice(uint8_t LocalUserNum)
{
	static UFunction* uFnStopNetworkedVoice = nullptr;

	if (!uFnStopNetworkedVoice)
	{
		uFnStopNetworkedVoice = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.StopNetworkedVoice");
	}

	UOnlineSubsystemEOS_execStopNetworkedVoice_Params StopNetworkedVoice_Params;
	memset(&StopNetworkedVoice_Params, 0, sizeof(StopNetworkedVoice_Params));
	memcpy_s(&StopNetworkedVoice_Params.LocalUserNum, sizeof(StopNetworkedVoice_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnStopNetworkedVoice, &StopNetworkedVoice_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.StartNetworkedVoice
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemEOS::StartNetworkedVoice(uint8_t LocalUserNum)
{
	static UFunction* uFnStartNetworkedVoice = nullptr;

	if (!uFnStartNetworkedVoice)
	{
		uFnStartNetworkedVoice = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.StartNetworkedVoice");
	}

	UOnlineSubsystemEOS_execStartNetworkedVoice_Params StartNetworkedVoice_Params;
	memset(&StartNetworkedVoice_Params, 0, sizeof(StartNetworkedVoice_Params));
	memcpy_s(&StartNetworkedVoice_Params.LocalUserNum, sizeof(StartNetworkedVoice_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnStartNetworkedVoice, &StartNetworkedVoice_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearPlayerTalkingDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         TalkerDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate)
{
	static UFunction* uFnClearPlayerTalkingDelegate = nullptr;

	if (!uFnClearPlayerTalkingDelegate)
	{
		uFnClearPlayerTalkingDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearPlayerTalkingDelegate");
	}

	UOnlineSubsystemEOS_execClearPlayerTalkingDelegate_Params ClearPlayerTalkingDelegate_Params;
	memset(&ClearPlayerTalkingDelegate_Params, 0, sizeof(ClearPlayerTalkingDelegate_Params));
	memcpy_s(&ClearPlayerTalkingDelegate_Params.TalkerDelegate, sizeof(ClearPlayerTalkingDelegate_Params.TalkerDelegate), &TalkerDelegate, sizeof(TalkerDelegate));

	this->ProcessEvent(uFnClearPlayerTalkingDelegate, &ClearPlayerTalkingDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddPlayerTalkingDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         TalkerDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate)
{
	static UFunction* uFnAddPlayerTalkingDelegate = nullptr;

	if (!uFnAddPlayerTalkingDelegate)
	{
		uFnAddPlayerTalkingDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddPlayerTalkingDelegate");
	}

	UOnlineSubsystemEOS_execAddPlayerTalkingDelegate_Params AddPlayerTalkingDelegate_Params;
	memset(&AddPlayerTalkingDelegate_Params, 0, sizeof(AddPlayerTalkingDelegate_Params));
	memcpy_s(&AddPlayerTalkingDelegate_Params.TalkerDelegate, sizeof(AddPlayerTalkingDelegate_Params.TalkerDelegate), &TalkerDelegate, sizeof(TalkerDelegate));

	this->ProcessEvent(uFnAddPlayerTalkingDelegate, &AddPlayerTalkingDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnPlayerTalking
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            Player                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::OnPlayerTalking(struct FUniqueNetId Player)
{
	static UFunction* uFnOnPlayerTalking = nullptr;

	if (!uFnOnPlayerTalking)
	{
		uFnOnPlayerTalking = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnPlayerTalking");
	}

	UOnlineSubsystemEOS_execOnPlayerTalking_Params OnPlayerTalking_Params;
	memset(&OnPlayerTalking_Params, 0, sizeof(OnPlayerTalking_Params));
	memcpy_s(&OnPlayerTalking_Params.Player, sizeof(OnPlayerTalking_Params.Player), &Player, sizeof(Player));

	this->ProcessEvent(uFnOnPlayerTalking, &OnPlayerTalking_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnmuteRemoteTalker
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::UnmuteRemoteTalker(uint8_t LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnUnmuteRemoteTalker = nullptr;

	if (!uFnUnmuteRemoteTalker)
	{
		uFnUnmuteRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnmuteRemoteTalker");
	}

	UOnlineSubsystemEOS_execUnmuteRemoteTalker_Params UnmuteRemoteTalker_Params;
	memset(&UnmuteRemoteTalker_Params, 0, sizeof(UnmuteRemoteTalker_Params));
	memcpy_s(&UnmuteRemoteTalker_Params.LocalUserNum, sizeof(UnmuteRemoteTalker_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&UnmuteRemoteTalker_Params.PlayerID, sizeof(UnmuteRemoteTalker_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	this->ProcessEvent(uFnUnmuteRemoteTalker, &UnmuteRemoteTalker_Params, nullptr);

	return UnmuteRemoteTalker_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.MuteRemoteTalker
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::MuteRemoteTalker(uint8_t LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnMuteRemoteTalker = nullptr;

	if (!uFnMuteRemoteTalker)
	{
		uFnMuteRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.MuteRemoteTalker");
	}

	UOnlineSubsystemEOS_execMuteRemoteTalker_Params MuteRemoteTalker_Params;
	memset(&MuteRemoteTalker_Params, 0, sizeof(MuteRemoteTalker_Params));
	memcpy_s(&MuteRemoteTalker_Params.LocalUserNum, sizeof(MuteRemoteTalker_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&MuteRemoteTalker_Params.PlayerID, sizeof(MuteRemoteTalker_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	this->ProcessEvent(uFnMuteRemoteTalker, &MuteRemoteTalker_Params, nullptr);

	return MuteRemoteTalker_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetRemoteTalkerPriority
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Priority                       (CPF_Parm)

bool UOnlineSubsystemEOS::SetRemoteTalkerPriority(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, int32_t Priority)
{
	static UFunction* uFnSetRemoteTalkerPriority = nullptr;

	if (!uFnSetRemoteTalkerPriority)
	{
		uFnSetRemoteTalkerPriority = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetRemoteTalkerPriority");
	}

	UOnlineSubsystemEOS_execSetRemoteTalkerPriority_Params SetRemoteTalkerPriority_Params;
	memset(&SetRemoteTalkerPriority_Params, 0, sizeof(SetRemoteTalkerPriority_Params));
	memcpy_s(&SetRemoteTalkerPriority_Params.LocalUserNum, sizeof(SetRemoteTalkerPriority_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&SetRemoteTalkerPriority_Params.PlayerID, sizeof(SetRemoteTalkerPriority_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	memcpy_s(&SetRemoteTalkerPriority_Params.Priority, sizeof(SetRemoteTalkerPriority_Params.Priority), &Priority, sizeof(Priority));

	this->ProcessEvent(uFnSetRemoteTalkerPriority, &SetRemoteTalkerPriority_Params, nullptr);

	return SetRemoteTalkerPriority_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsHeadsetPresent
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemEOS::IsHeadsetPresent(uint8_t LocalUserNum)
{
	static UFunction* uFnIsHeadsetPresent = nullptr;

	if (!uFnIsHeadsetPresent)
	{
		uFnIsHeadsetPresent = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsHeadsetPresent");
	}

	UOnlineSubsystemEOS_execIsHeadsetPresent_Params IsHeadsetPresent_Params;
	memset(&IsHeadsetPresent_Params, 0, sizeof(IsHeadsetPresent_Params));
	memcpy_s(&IsHeadsetPresent_Params.LocalUserNum, sizeof(IsHeadsetPresent_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnIsHeadsetPresent, &IsHeadsetPresent_Params, nullptr);

	return IsHeadsetPresent_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsRemotePlayerTalking
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::IsRemotePlayerTalking(struct FUniqueNetId PlayerID)
{
	static UFunction* uFnIsRemotePlayerTalking = nullptr;

	if (!uFnIsRemotePlayerTalking)
	{
		uFnIsRemotePlayerTalking = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsRemotePlayerTalking");
	}

	UOnlineSubsystemEOS_execIsRemotePlayerTalking_Params IsRemotePlayerTalking_Params;
	memset(&IsRemotePlayerTalking_Params, 0, sizeof(IsRemotePlayerTalking_Params));
	memcpy_s(&IsRemotePlayerTalking_Params.PlayerID, sizeof(IsRemotePlayerTalking_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	this->ProcessEvent(uFnIsRemotePlayerTalking, &IsRemotePlayerTalking_Params, nullptr);

	return IsRemotePlayerTalking_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsLocalPlayerTalking
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemEOS::IsLocalPlayerTalking(uint8_t LocalUserNum)
{
	static UFunction* uFnIsLocalPlayerTalking = nullptr;

	if (!uFnIsLocalPlayerTalking)
	{
		uFnIsLocalPlayerTalking = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsLocalPlayerTalking");
	}

	UOnlineSubsystemEOS_execIsLocalPlayerTalking_Params IsLocalPlayerTalking_Params;
	memset(&IsLocalPlayerTalking_Params, 0, sizeof(IsLocalPlayerTalking_Params));
	memcpy_s(&IsLocalPlayerTalking_Params.LocalUserNum, sizeof(IsLocalPlayerTalking_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnIsLocalPlayerTalking, &IsLocalPlayerTalking_Params, nullptr);

	return IsLocalPlayerTalking_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnregisterRemoteTalker
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::UnregisterRemoteTalker(struct FUniqueNetId PlayerID)
{
	static UFunction* uFnUnregisterRemoteTalker = nullptr;

	if (!uFnUnregisterRemoteTalker)
	{
		uFnUnregisterRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnregisterRemoteTalker");
	}

	UOnlineSubsystemEOS_execUnregisterRemoteTalker_Params UnregisterRemoteTalker_Params;
	memset(&UnregisterRemoteTalker_Params, 0, sizeof(UnregisterRemoteTalker_Params));
	memcpy_s(&UnregisterRemoteTalker_Params.PlayerID, sizeof(UnregisterRemoteTalker_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	this->ProcessEvent(uFnUnregisterRemoteTalker, &UnregisterRemoteTalker_Params, nullptr);

	return UnregisterRemoteTalker_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterRemoteTalker
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::RegisterRemoteTalker(struct FUniqueNetId PlayerID)
{
	static UFunction* uFnRegisterRemoteTalker = nullptr;

	if (!uFnRegisterRemoteTalker)
	{
		uFnRegisterRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterRemoteTalker");
	}

	UOnlineSubsystemEOS_execRegisterRemoteTalker_Params RegisterRemoteTalker_Params;
	memset(&RegisterRemoteTalker_Params, 0, sizeof(RegisterRemoteTalker_Params));
	memcpy_s(&RegisterRemoteTalker_Params.PlayerID, sizeof(RegisterRemoteTalker_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	this->ProcessEvent(uFnRegisterRemoteTalker, &RegisterRemoteTalker_Params, nullptr);

	return RegisterRemoteTalker_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnregisterLocalTalker
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemEOS::UnregisterLocalTalker(uint8_t LocalUserNum)
{
	static UFunction* uFnUnregisterLocalTalker = nullptr;

	if (!uFnUnregisterLocalTalker)
	{
		uFnUnregisterLocalTalker = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnregisterLocalTalker");
	}

	UOnlineSubsystemEOS_execUnregisterLocalTalker_Params UnregisterLocalTalker_Params;
	memset(&UnregisterLocalTalker_Params, 0, sizeof(UnregisterLocalTalker_Params));
	memcpy_s(&UnregisterLocalTalker_Params.LocalUserNum, sizeof(UnregisterLocalTalker_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnUnregisterLocalTalker, &UnregisterLocalTalker_Params, nullptr);

	return UnregisterLocalTalker_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterLocalTalker
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemEOS::RegisterLocalTalker(uint8_t LocalUserNum)
{
	static UFunction* uFnRegisterLocalTalker = nullptr;

	if (!uFnRegisterLocalTalker)
	{
		uFnRegisterLocalTalker = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterLocalTalker");
	}

	UOnlineSubsystemEOS_execRegisterLocalTalker_Params RegisterLocalTalker_Params;
	memset(&RegisterLocalTalker_Params, 0, sizeof(RegisterLocalTalker_Params));
	memcpy_s(&RegisterLocalTalker_Params.LocalUserNum, sizeof(RegisterLocalTalker_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnRegisterLocalTalker, &RegisterLocalTalker_Params, nullptr);

	return RegisterLocalTalker_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetPlayerUniqueNetIdFromIndex
// [0x400820802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        UserIndex                      (CPF_Parm)

struct FUniqueNetId UOnlineSubsystemEOS::eventGetPlayerUniqueNetIdFromIndex(int32_t UserIndex)
{
	static UFunction* uFnGetPlayerUniqueNetIdFromIndex = nullptr;

	if (!uFnGetPlayerUniqueNetIdFromIndex)
	{
		uFnGetPlayerUniqueNetIdFromIndex = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetPlayerUniqueNetIdFromIndex");
	}

	UOnlineSubsystemEOS_eventGetPlayerUniqueNetIdFromIndex_Params GetPlayerUniqueNetIdFromIndex_Params;
	memset(&GetPlayerUniqueNetIdFromIndex_Params, 0, sizeof(GetPlayerUniqueNetIdFromIndex_Params));
	memcpy_s(&GetPlayerUniqueNetIdFromIndex_Params.UserIndex, sizeof(GetPlayerUniqueNetIdFromIndex_Params.UserIndex), &UserIndex, sizeof(UserIndex));

	this->ProcessEvent(uFnGetPlayerUniqueNetIdFromIndex, &GetPlayerUniqueNetIdFromIndex_Params, nullptr);

	return GetPlayerUniqueNetIdFromIndex_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetPlayerNicknameFromIndex
// [0x400020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        UserIndex                      (CPF_Parm)

class FString UOnlineSubsystemEOS::eventGetPlayerNicknameFromIndex(int32_t UserIndex)
{
	static UFunction* uFnGetPlayerNicknameFromIndex = nullptr;

	if (!uFnGetPlayerNicknameFromIndex)
	{
		uFnGetPlayerNicknameFromIndex = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetPlayerNicknameFromIndex");
	}

	UOnlineSubsystemEOS_eventGetPlayerNicknameFromIndex_Params GetPlayerNicknameFromIndex_Params;
	memset(&GetPlayerNicknameFromIndex_Params, 0, sizeof(GetPlayerNicknameFromIndex_Params));
	memcpy_s(&GetPlayerNicknameFromIndex_Params.UserIndex, sizeof(GetPlayerNicknameFromIndex_Params.UserIndex), &UserIndex, sizeof(UserIndex));

	this->ProcessEvent(uFnGetPlayerNicknameFromIndex, &GetPlayerNicknameFromIndex_Params, nullptr);

	return GetPlayerNicknameFromIndex_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.Init
// [0x400020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemEOS::eventInit()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.Init");
	}

	UOnlineSubsystemEOS_eventInit_Params Init_Params;
	memset(&Init_Params, 0, sizeof(Init_Params));

	uFnInit->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
	uFnInit->FunctionFlags |= 0x400;

	return Init_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.InitEOS
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  SandboxId                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  DeploymentId                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::InitEOS(class FString& SandboxId, class FString& DeploymentId)
{
	static UFunction* uFnInitEOS = nullptr;

	if (!uFnInitEOS)
	{
		uFnInitEOS = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.InitEOS");
	}

	UOnlineSubsystemEOS_execInitEOS_Params InitEOS_Params;
	memset(&InitEOS_Params, 0, sizeof(InitEOS_Params));
	memcpy_s(&InitEOS_Params.SandboxId, sizeof(InitEOS_Params.SandboxId), &SandboxId, sizeof(SandboxId));
	memcpy_s(&InitEOS_Params.DeploymentId, sizeof(InitEOS_Params.DeploymentId), &DeploymentId, sizeof(DeploymentId));

	uFnInitEOS->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnInitEOS, &InitEOS_Params, nullptr);
	uFnInitEOS->FunctionFlags |= 0x400;

	memcpy_s(&SandboxId, sizeof(SandboxId), &InitEOS_Params.SandboxId, sizeof(InitEOS_Params.SandboxId));
	memcpy_s(&DeploymentId, sizeof(DeploymentId), &InitEOS_Params.DeploymentId, sizeof(InitEOS_Params.DeploymentId));

	return InitEOS_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.EventGetAppPriceInfoComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FName                   AppName                        (CPF_Parm)
// class FString                  Price                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  DiscountPrice                  (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        DiscountPercentage             (CPF_Parm)

void UOnlineSubsystemEOS::EventGetAppPriceInfoComplete(struct FName AppName, class FString Price, class FString DiscountPrice, int32_t DiscountPercentage)
{
	static UFunction* uFnEventGetAppPriceInfoComplete = nullptr;

	if (!uFnEventGetAppPriceInfoComplete)
	{
		uFnEventGetAppPriceInfoComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.EventGetAppPriceInfoComplete");
	}

	UOnlineSubsystemEOS_execEventGetAppPriceInfoComplete_Params EventGetAppPriceInfoComplete_Params;
	memset(&EventGetAppPriceInfoComplete_Params, 0, sizeof(EventGetAppPriceInfoComplete_Params));
	memcpy_s(&EventGetAppPriceInfoComplete_Params.AppName, sizeof(EventGetAppPriceInfoComplete_Params.AppName), &AppName, sizeof(AppName));
	memcpy_s(&EventGetAppPriceInfoComplete_Params.Price, sizeof(EventGetAppPriceInfoComplete_Params.Price), &Price, sizeof(Price));
	memcpy_s(&EventGetAppPriceInfoComplete_Params.DiscountPrice, sizeof(EventGetAppPriceInfoComplete_Params.DiscountPrice), &DiscountPrice, sizeof(DiscountPrice));
	memcpy_s(&EventGetAppPriceInfoComplete_Params.DiscountPercentage, sizeof(EventGetAppPriceInfoComplete_Params.DiscountPercentage), &DiscountPercentage, sizeof(DiscountPercentage));

	this->ProcessEvent(uFnEventGetAppPriceInfoComplete, &EventGetAppPriceInfoComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnMicroTxnResponse
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bAuthorized                    (CPF_Parm)
// uint64_t                       OrderId                        (CPF_Parm)

void UOnlineSubsystemEOS::OnMicroTxnResponse(bool bAuthorized, uint64_t OrderId)
{
	static UFunction* uFnOnMicroTxnResponse = nullptr;

	if (!uFnOnMicroTxnResponse)
	{
		uFnOnMicroTxnResponse = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnMicroTxnResponse");
	}

	UOnlineSubsystemEOS_execOnMicroTxnResponse_Params OnMicroTxnResponse_Params;
	memset(&OnMicroTxnResponse_Params, 0, sizeof(OnMicroTxnResponse_Params));
	OnMicroTxnResponse_Params.bAuthorized = bAuthorized;
	OnMicroTxnResponse_Params.OrderId = OrderId;

	this->ProcessEvent(uFnOnMicroTxnResponse, &OnMicroTxnResponse_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequiresAuthTicket
// [0x400020002] (FUNC_Defined | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineAuthInterfaceEOS::RequiresAuthTicket()
{
	static UFunction* uFnRequiresAuthTicket = nullptr;

	if (!uFnRequiresAuthTicket)
	{
		uFnRequiresAuthTicket = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequiresAuthTicket");
	}

	UOnlineAuthInterfaceEOS_execRequiresAuthTicket_Params RequiresAuthTicket_Params;
	memset(&RequiresAuthTicket_Params, 0, sizeof(RequiresAuthTicket_Params));

	this->ProcessEvent(uFnRequiresAuthTicket, &RequiresAuthTicket_Params, nullptr);

	return RequiresAuthTicket_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequestAuthTicket
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceEOS::RequestAuthTicket(struct FUniqueNetId PlayerID, struct FScriptDelegate Callback)
{
	static UFunction* uFnRequestAuthTicket = nullptr;

	if (!uFnRequestAuthTicket)
	{
		uFnRequestAuthTicket = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequestAuthTicket");
	}

	UOnlineAuthInterfaceEOS_execRequestAuthTicket_Params RequestAuthTicket_Params;
	memset(&RequestAuthTicket_Params, 0, sizeof(RequestAuthTicket_Params));
	memcpy_s(&RequestAuthTicket_Params.PlayerID, sizeof(RequestAuthTicket_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	memcpy_s(&RequestAuthTicket_Params.Callback, sizeof(RequestAuthTicket_Params.Callback), &Callback, sizeof(Callback));

	uFnRequestAuthTicket->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRequestAuthTicket, &RequestAuthTicket_Params, nullptr);
	uFnRequestAuthTicket->FunctionFlags |= 0x400;

	return RequestAuthTicket_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequestMtxCode
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceEOS::RequestMtxCode(struct FUniqueNetId PlayerID, struct FScriptDelegate Callback)
{
	static UFunction* uFnRequestMtxCode = nullptr;

	if (!uFnRequestMtxCode)
	{
		uFnRequestMtxCode = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequestMtxCode");
	}

	UOnlineAuthInterfaceEOS_execRequestMtxCode_Params RequestMtxCode_Params;
	memset(&RequestMtxCode_Params, 0, sizeof(RequestMtxCode_Params));
	memcpy_s(&RequestMtxCode_Params.PlayerID, sizeof(RequestMtxCode_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	memcpy_s(&RequestMtxCode_Params.Callback, sizeof(RequestMtxCode_Params.Callback), &Callback, sizeof(Callback));

	uFnRequestMtxCode->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRequestMtxCode, &RequestMtxCode_Params, nullptr);
	uFnRequestMtxCode->FunctionFlags |= 0x400;

	return RequestMtxCode_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineFriendsInterfaceEOS.GetActivePlatformId
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            AccountId                      (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            PlatformId                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineFriendsInterfaceEOS::GetActivePlatformId(uint8_t LocalUserNum, struct FUniqueNetId AccountId, struct FUniqueNetId& PlatformId)
{
	static UFunction* uFnGetActivePlatformId = nullptr;

	if (!uFnGetActivePlatformId)
	{
		uFnGetActivePlatformId = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineFriendsInterfaceEOS.GetActivePlatformId");
	}

	UOnlineFriendsInterfaceEOS_execGetActivePlatformId_Params GetActivePlatformId_Params;
	memset(&GetActivePlatformId_Params, 0, sizeof(GetActivePlatformId_Params));
	memcpy_s(&GetActivePlatformId_Params.LocalUserNum, sizeof(GetActivePlatformId_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&GetActivePlatformId_Params.AccountId, sizeof(GetActivePlatformId_Params.AccountId), &AccountId, sizeof(AccountId));
	memcpy_s(&GetActivePlatformId_Params.PlatformId, sizeof(GetActivePlatformId_Params.PlatformId), &PlatformId, sizeof(PlatformId));

	uFnGetActivePlatformId->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetActivePlatformId, &GetActivePlatformId_Params, nullptr);
	uFnGetActivePlatformId->FunctionFlags |= 0x400;

	memcpy_s(&PlatformId, sizeof(PlatformId), &GetActivePlatformId_Params.PlatformId, sizeof(GetActivePlatformId_Params.PlatformId));

	return GetActivePlatformId_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineFriendsInterfaceEOS.RequestLinkedAccounts
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FUniqueNetId>    AccountIds                     (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineFriendsInterfaceEOS::RequestLinkedAccounts(uint8_t LocalUserNum, TArray<struct FUniqueNetId> AccountIds, struct FScriptDelegate Callback)
{
	static UFunction* uFnRequestLinkedAccounts = nullptr;

	if (!uFnRequestLinkedAccounts)
	{
		uFnRequestLinkedAccounts = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineFriendsInterfaceEOS.RequestLinkedAccounts");
	}

	UOnlineFriendsInterfaceEOS_execRequestLinkedAccounts_Params RequestLinkedAccounts_Params;
	memset(&RequestLinkedAccounts_Params, 0, sizeof(RequestLinkedAccounts_Params));
	memcpy_s(&RequestLinkedAccounts_Params.LocalUserNum, sizeof(RequestLinkedAccounts_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&RequestLinkedAccounts_Params.AccountIds, sizeof(RequestLinkedAccounts_Params.AccountIds), &AccountIds, sizeof(AccountIds));
	memcpy_s(&RequestLinkedAccounts_Params.Callback, sizeof(RequestLinkedAccounts_Params.Callback), &Callback, sizeof(Callback));

	uFnRequestLinkedAccounts->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRequestLinkedAccounts, &RequestLinkedAccounts_Params, nullptr);
	uFnRequestLinkedAccounts->FunctionFlags |= 0x400;

	return RequestLinkedAccounts_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventClipErrorOccurred
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InCallback                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameClipsInterfaceEOS::NotifyEventClipErrorOccurred(struct FScriptDelegate InCallback)
{
	static UFunction* uFnNotifyEventClipErrorOccurred = nullptr;

	if (!uFnNotifyEventClipErrorOccurred)
	{
		uFnNotifyEventClipErrorOccurred = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventClipErrorOccurred");
	}

	UOnlineGameClipsInterfaceEOS_execNotifyEventClipErrorOccurred_Params NotifyEventClipErrorOccurred_Params;
	memset(&NotifyEventClipErrorOccurred_Params, 0, sizeof(NotifyEventClipErrorOccurred_Params));
	memcpy_s(&NotifyEventClipErrorOccurred_Params.InCallback, sizeof(NotifyEventClipErrorOccurred_Params.InCallback), &InCallback, sizeof(InCallback));

	this->ProcessEvent(uFnNotifyEventClipErrorOccurred, &NotifyEventClipErrorOccurred_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventClipErrorOccurred
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FString                  InEpicAccountId                (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        ClipId                         (CPF_Parm)
// class UErrorType*              InErrorType                    (CPF_Parm)

void UOnlineGameClipsInterfaceEOS::EventClipErrorOccurred(class FString InEpicAccountId, int32_t ClipId, class UErrorType* InErrorType)
{
	static UFunction* uFnEventClipErrorOccurred = nullptr;

	if (!uFnEventClipErrorOccurred)
	{
		uFnEventClipErrorOccurred = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventClipErrorOccurred");
	}

	UOnlineGameClipsInterfaceEOS_execEventClipErrorOccurred_Params EventClipErrorOccurred_Params;
	memset(&EventClipErrorOccurred_Params, 0, sizeof(EventClipErrorOccurred_Params));
	memcpy_s(&EventClipErrorOccurred_Params.InEpicAccountId, sizeof(EventClipErrorOccurred_Params.InEpicAccountId), &InEpicAccountId, sizeof(InEpicAccountId));
	memcpy_s(&EventClipErrorOccurred_Params.ClipId, sizeof(EventClipErrorOccurred_Params.ClipId), &ClipId, sizeof(ClipId));
	memcpy_s(&EventClipErrorOccurred_Params.InErrorType, sizeof(EventClipErrorOccurred_Params.InErrorType), &InErrorType, sizeof(InErrorType));

	this->ProcessEvent(uFnEventClipErrorOccurred, &EventClipErrorOccurred_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventGeneralErrorOccurred
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InCallback                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameClipsInterfaceEOS::NotifyEventGeneralErrorOccurred(struct FScriptDelegate InCallback)
{
	static UFunction* uFnNotifyEventGeneralErrorOccurred = nullptr;

	if (!uFnNotifyEventGeneralErrorOccurred)
	{
		uFnNotifyEventGeneralErrorOccurred = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventGeneralErrorOccurred");
	}

	UOnlineGameClipsInterfaceEOS_execNotifyEventGeneralErrorOccurred_Params NotifyEventGeneralErrorOccurred_Params;
	memset(&NotifyEventGeneralErrorOccurred_Params, 0, sizeof(NotifyEventGeneralErrorOccurred_Params));
	memcpy_s(&NotifyEventGeneralErrorOccurred_Params.InCallback, sizeof(NotifyEventGeneralErrorOccurred_Params.InCallback), &InCallback, sizeof(InCallback));

	this->ProcessEvent(uFnNotifyEventGeneralErrorOccurred, &NotifyEventGeneralErrorOccurred_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventGeneralErrorOccurred
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class UErrorType*              InErrorType                    (CPF_Parm)

void UOnlineGameClipsInterfaceEOS::EventGeneralErrorOccurred(class UErrorType* InErrorType)
{
	static UFunction* uFnEventGeneralErrorOccurred = nullptr;

	if (!uFnEventGeneralErrorOccurred)
	{
		uFnEventGeneralErrorOccurred = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventGeneralErrorOccurred");
	}

	UOnlineGameClipsInterfaceEOS_execEventGeneralErrorOccurred_Params EventGeneralErrorOccurred_Params;
	memset(&EventGeneralErrorOccurred_Params, 0, sizeof(EventGeneralErrorOccurred_Params));
	memcpy_s(&EventGeneralErrorOccurred_Params.InErrorType, sizeof(EventGeneralErrorOccurred_Params.InErrorType), &InErrorType, sizeof(InErrorType));

	this->ProcessEvent(uFnEventGeneralErrorOccurred, &EventGeneralErrorOccurred_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventMaskStatusChanged
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InCallback                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameClipsInterfaceEOS::NotifyEventMaskStatusChanged(struct FScriptDelegate InCallback)
{
	static UFunction* uFnNotifyEventMaskStatusChanged = nullptr;

	if (!uFnNotifyEventMaskStatusChanged)
	{
		uFnNotifyEventMaskStatusChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventMaskStatusChanged");
	}

	UOnlineGameClipsInterfaceEOS_execNotifyEventMaskStatusChanged_Params NotifyEventMaskStatusChanged_Params;
	memset(&NotifyEventMaskStatusChanged_Params, 0, sizeof(NotifyEventMaskStatusChanged_Params));
	memcpy_s(&NotifyEventMaskStatusChanged_Params.InCallback, sizeof(NotifyEventMaskStatusChanged_Params.InCallback), &InCallback, sizeof(InCallback));

	this->ProcessEvent(uFnNotifyEventMaskStatusChanged, &NotifyEventMaskStatusChanged_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventMaskStatusChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint64_t                       InMaskAreaHandle               (CPF_Parm)
// struct FGameClipsMaskArea      InMaskArea                     (CPF_Const | CPF_Parm)
// EGameClipsMaskStatus           InNewMaskStatus                (CPF_Parm)

void UOnlineGameClipsInterfaceEOS::EventMaskStatusChanged(uint64_t InMaskAreaHandle, struct FGameClipsMaskArea InMaskArea, EGameClipsMaskStatus InNewMaskStatus)
{
	static UFunction* uFnEventMaskStatusChanged = nullptr;

	if (!uFnEventMaskStatusChanged)
	{
		uFnEventMaskStatusChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventMaskStatusChanged");
	}

	UOnlineGameClipsInterfaceEOS_execEventMaskStatusChanged_Params EventMaskStatusChanged_Params;
	memset(&EventMaskStatusChanged_Params, 0, sizeof(EventMaskStatusChanged_Params));
	EventMaskStatusChanged_Params.InMaskAreaHandle = InMaskAreaHandle;
	memcpy_s(&EventMaskStatusChanged_Params.InMaskArea, sizeof(EventMaskStatusChanged_Params.InMaskArea), &InMaskArea, sizeof(InMaskArea));
	memcpy_s(&EventMaskStatusChanged_Params.InNewMaskStatus, sizeof(EventMaskStatusChanged_Params.InNewMaskStatus), &InNewMaskStatus, sizeof(InNewMaskStatus));

	this->ProcessEvent(uFnEventMaskStatusChanged, &EventMaskStatusChanged_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventClipStatusChanged
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InCallback                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameClipsInterfaceEOS::NotifyEventClipStatusChanged(struct FScriptDelegate InCallback)
{
	static UFunction* uFnNotifyEventClipStatusChanged = nullptr;

	if (!uFnNotifyEventClipStatusChanged)
	{
		uFnNotifyEventClipStatusChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventClipStatusChanged");
	}

	UOnlineGameClipsInterfaceEOS_execNotifyEventClipStatusChanged_Params NotifyEventClipStatusChanged_Params;
	memset(&NotifyEventClipStatusChanged_Params, 0, sizeof(NotifyEventClipStatusChanged_Params));
	memcpy_s(&NotifyEventClipStatusChanged_Params.InCallback, sizeof(NotifyEventClipStatusChanged_Params.InCallback), &InCallback, sizeof(InCallback));

	this->ProcessEvent(uFnNotifyEventClipStatusChanged, &NotifyEventClipStatusChanged_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventClipStatusChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FString                  InEpicAccountId                (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        InClipId                       (CPF_Parm)
// EGameClipsClipStatus           InNewClipStatus                (CPF_Parm)

void UOnlineGameClipsInterfaceEOS::EventClipStatusChanged(class FString InEpicAccountId, int32_t InClipId, EGameClipsClipStatus InNewClipStatus)
{
	static UFunction* uFnEventClipStatusChanged = nullptr;

	if (!uFnEventClipStatusChanged)
	{
		uFnEventClipStatusChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventClipStatusChanged");
	}

	UOnlineGameClipsInterfaceEOS_execEventClipStatusChanged_Params EventClipStatusChanged_Params;
	memset(&EventClipStatusChanged_Params, 0, sizeof(EventClipStatusChanged_Params));
	memcpy_s(&EventClipStatusChanged_Params.InEpicAccountId, sizeof(EventClipStatusChanged_Params.InEpicAccountId), &InEpicAccountId, sizeof(InEpicAccountId));
	memcpy_s(&EventClipStatusChanged_Params.InClipId, sizeof(EventClipStatusChanged_Params.InClipId), &InClipId, sizeof(InClipId));
	memcpy_s(&EventClipStatusChanged_Params.InNewClipStatus, sizeof(EventClipStatusChanged_Params.InNewClipStatus), &InNewClipStatus, sizeof(InNewClipStatus));

	this->ProcessEvent(uFnEventClipStatusChanged, &EventClipStatusChanged_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventConnectionStatusChanged
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InCallback                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameClipsInterfaceEOS::NotifyEventConnectionStatusChanged(struct FScriptDelegate InCallback)
{
	static UFunction* uFnNotifyEventConnectionStatusChanged = nullptr;

	if (!uFnNotifyEventConnectionStatusChanged)
	{
		uFnNotifyEventConnectionStatusChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventConnectionStatusChanged");
	}

	UOnlineGameClipsInterfaceEOS_execNotifyEventConnectionStatusChanged_Params NotifyEventConnectionStatusChanged_Params;
	memset(&NotifyEventConnectionStatusChanged_Params, 0, sizeof(NotifyEventConnectionStatusChanged_Params));
	memcpy_s(&NotifyEventConnectionStatusChanged_Params.InCallback, sizeof(NotifyEventConnectionStatusChanged_Params.InCallback), &InCallback, sizeof(InCallback));

	this->ProcessEvent(uFnNotifyEventConnectionStatusChanged, &NotifyEventConnectionStatusChanged_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventConnectionStatusChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FString                  InEpicAccountId                (CPF_Parm | CPF_NeedCtorLink)
// EGameClipsConnection           InConnection                   (CPF_Parm)
// EGameClipsConnectionStatus     InNewConnectionStatus          (CPF_Parm)

void UOnlineGameClipsInterfaceEOS::EventConnectionStatusChanged(class FString InEpicAccountId, EGameClipsConnection InConnection, EGameClipsConnectionStatus InNewConnectionStatus)
{
	static UFunction* uFnEventConnectionStatusChanged = nullptr;

	if (!uFnEventConnectionStatusChanged)
	{
		uFnEventConnectionStatusChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventConnectionStatusChanged");
	}

	UOnlineGameClipsInterfaceEOS_execEventConnectionStatusChanged_Params EventConnectionStatusChanged_Params;
	memset(&EventConnectionStatusChanged_Params, 0, sizeof(EventConnectionStatusChanged_Params));
	memcpy_s(&EventConnectionStatusChanged_Params.InEpicAccountId, sizeof(EventConnectionStatusChanged_Params.InEpicAccountId), &InEpicAccountId, sizeof(InEpicAccountId));
	memcpy_s(&EventConnectionStatusChanged_Params.InConnection, sizeof(EventConnectionStatusChanged_Params.InConnection), &InConnection, sizeof(InConnection));
	memcpy_s(&EventConnectionStatusChanged_Params.InNewConnectionStatus, sizeof(EventConnectionStatusChanged_Params.InNewConnectionStatus), &InNewConnectionStatus, sizeof(InNewConnectionStatus));

	this->ProcessEvent(uFnEventConnectionStatusChanged, &EventConnectionStatusChanged_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventRecordingChanged
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InCallback                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameClipsInterfaceEOS::NotifyEventRecordingChanged(struct FScriptDelegate InCallback)
{
	static UFunction* uFnNotifyEventRecordingChanged = nullptr;

	if (!uFnNotifyEventRecordingChanged)
	{
		uFnNotifyEventRecordingChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventRecordingChanged");
	}

	UOnlineGameClipsInterfaceEOS_execNotifyEventRecordingChanged_Params NotifyEventRecordingChanged_Params;
	memset(&NotifyEventRecordingChanged_Params, 0, sizeof(NotifyEventRecordingChanged_Params));
	memcpy_s(&NotifyEventRecordingChanged_Params.InCallback, sizeof(NotifyEventRecordingChanged_Params.InCallback), &InCallback, sizeof(InCallback));

	this->ProcessEvent(uFnNotifyEventRecordingChanged, &NotifyEventRecordingChanged_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventRecordingChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// EGameClipsRecording            InNewRecording                 (CPF_Parm)

void UOnlineGameClipsInterfaceEOS::EventRecordingChanged(EGameClipsRecording InNewRecording)
{
	static UFunction* uFnEventRecordingChanged = nullptr;

	if (!uFnEventRecordingChanged)
	{
		uFnEventRecordingChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventRecordingChanged");
	}

	UOnlineGameClipsInterfaceEOS_execEventRecordingChanged_Params EventRecordingChanged_Params;
	memset(&EventRecordingChanged_Params, 0, sizeof(EventRecordingChanged_Params));
	memcpy_s(&EventRecordingChanged_Params.InNewRecording, sizeof(EventRecordingChanged_Params.InNewRecording), &InNewRecording, sizeof(InNewRecording));

	this->ProcessEvent(uFnEventRecordingChanged, &EventRecordingChanged_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventAvailabilityChanged
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InCallback                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameClipsInterfaceEOS::NotifyEventAvailabilityChanged(struct FScriptDelegate InCallback)
{
	static UFunction* uFnNotifyEventAvailabilityChanged = nullptr;

	if (!uFnNotifyEventAvailabilityChanged)
	{
		uFnNotifyEventAvailabilityChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventAvailabilityChanged");
	}

	UOnlineGameClipsInterfaceEOS_execNotifyEventAvailabilityChanged_Params NotifyEventAvailabilityChanged_Params;
	memset(&NotifyEventAvailabilityChanged_Params, 0, sizeof(NotifyEventAvailabilityChanged_Params));
	memcpy_s(&NotifyEventAvailabilityChanged_Params.InCallback, sizeof(NotifyEventAvailabilityChanged_Params.InCallback), &InCallback, sizeof(InCallback));

	this->ProcessEvent(uFnNotifyEventAvailabilityChanged, &NotifyEventAvailabilityChanged_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventAvailabilityChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// EGameClipsAvailability         InNewAvailability              (CPF_Parm)

void UOnlineGameClipsInterfaceEOS::EventAvailabilityChanged(EGameClipsAvailability InNewAvailability)
{
	static UFunction* uFnEventAvailabilityChanged = nullptr;

	if (!uFnEventAvailabilityChanged)
	{
		uFnEventAvailabilityChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventAvailabilityChanged");
	}

	UOnlineGameClipsInterfaceEOS_execEventAvailabilityChanged_Params EventAvailabilityChanged_Params;
	memset(&EventAvailabilityChanged_Params, 0, sizeof(EventAvailabilityChanged_Params));
	memcpy_s(&EventAvailabilityChanged_Params.InNewAvailability, sizeof(EventAvailabilityChanged_Params.InNewAvailability), &InNewAvailability, sizeof(InNewAvailability));

	this->ProcessEvent(uFnEventAvailabilityChanged, &EventAvailabilityChanged_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.IsUploading
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineGameClipsInterfaceEOS::IsUploading()
{
	static UFunction* uFnIsUploading = nullptr;

	if (!uFnIsUploading)
	{
		uFnIsUploading = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.IsUploading");
	}

	UOnlineGameClipsInterfaceEOS_execIsUploading_Params IsUploading_Params;
	memset(&IsUploading_Params, 0, sizeof(IsUploading_Params));

	uFnIsUploading->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsUploading, &IsUploading_Params, nullptr);
	uFnIsUploading->FunctionFlags |= 0x400;

	return IsUploading_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.IsRecording
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineGameClipsInterfaceEOS::IsRecording()
{
	static UFunction* uFnIsRecording = nullptr;

	if (!uFnIsRecording)
	{
		uFnIsRecording = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.IsRecording");
	}

	UOnlineGameClipsInterfaceEOS_execIsRecording_Params IsRecording_Params;
	memset(&IsRecording_Params, 0, sizeof(IsRecording_Params));

	uFnIsRecording->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsRecording, &IsRecording_Params, nullptr);
	uFnIsRecording->FunctionFlags |= 0x400;

	return IsRecording_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.IsAvailable
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineGameClipsInterfaceEOS::IsAvailable()
{
	static UFunction* uFnIsAvailable = nullptr;

	if (!uFnIsAvailable)
	{
		uFnIsAvailable = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.IsAvailable");
	}

	UOnlineGameClipsInterfaceEOS_execIsAvailable_Params IsAvailable_Params;
	memset(&IsAvailable_Params, 0, sizeof(IsAvailable_Params));

	uFnIsAvailable->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsAvailable, &IsAvailable_Params, nullptr);
	uFnIsAvailable->FunctionFlags |= 0x400;

	return IsAvailable_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.GetTimeUntilUnthrottled
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  InEpicAccountId                (CPF_Parm | CPF_NeedCtorLink)

float UOnlineGameClipsInterfaceEOS::GetTimeUntilUnthrottled(class FString InEpicAccountId)
{
	static UFunction* uFnGetTimeUntilUnthrottled = nullptr;

	if (!uFnGetTimeUntilUnthrottled)
	{
		uFnGetTimeUntilUnthrottled = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.GetTimeUntilUnthrottled");
	}

	UOnlineGameClipsInterfaceEOS_execGetTimeUntilUnthrottled_Params GetTimeUntilUnthrottled_Params;
	memset(&GetTimeUntilUnthrottled_Params, 0, sizeof(GetTimeUntilUnthrottled_Params));
	memcpy_s(&GetTimeUntilUnthrottled_Params.InEpicAccountId, sizeof(GetTimeUntilUnthrottled_Params.InEpicAccountId), &InEpicAccountId, sizeof(InEpicAccountId));

	uFnGetTimeUntilUnthrottled->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetTimeUntilUnthrottled, &GetTimeUntilUnthrottled_Params, nullptr);
	uFnGetTimeUntilUnthrottled->FunctionFlags |= 0x400;

	return GetTimeUntilUnthrottled_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.IsClipUploadingLimitReached
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  InEpicAccountId                (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineGameClipsInterfaceEOS::IsClipUploadingLimitReached(class FString InEpicAccountId)
{
	static UFunction* uFnIsClipUploadingLimitReached = nullptr;

	if (!uFnIsClipUploadingLimitReached)
	{
		uFnIsClipUploadingLimitReached = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.IsClipUploadingLimitReached");
	}

	UOnlineGameClipsInterfaceEOS_execIsClipUploadingLimitReached_Params IsClipUploadingLimitReached_Params;
	memset(&IsClipUploadingLimitReached_Params, 0, sizeof(IsClipUploadingLimitReached_Params));
	memcpy_s(&IsClipUploadingLimitReached_Params.InEpicAccountId, sizeof(IsClipUploadingLimitReached_Params.InEpicAccountId), &InEpicAccountId, sizeof(InEpicAccountId));

	uFnIsClipUploadingLimitReached->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsClipUploadingLimitReached, &IsClipUploadingLimitReached_Params, nullptr);
	uFnIsClipUploadingLimitReached->FunctionFlags |= 0x400;

	return IsClipUploadingLimitReached_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.SetUserMaxClipUploadsPerMinute
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        InMaxClipUploadsPerMinute      (CPF_Parm)

void UOnlineGameClipsInterfaceEOS::SetUserMaxClipUploadsPerMinute(int32_t InMaxClipUploadsPerMinute)
{
	static UFunction* uFnSetUserMaxClipUploadsPerMinute = nullptr;

	if (!uFnSetUserMaxClipUploadsPerMinute)
	{
		uFnSetUserMaxClipUploadsPerMinute = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.SetUserMaxClipUploadsPerMinute");
	}

	UOnlineGameClipsInterfaceEOS_execSetUserMaxClipUploadsPerMinute_Params SetUserMaxClipUploadsPerMinute_Params;
	memset(&SetUserMaxClipUploadsPerMinute_Params, 0, sizeof(SetUserMaxClipUploadsPerMinute_Params));
	memcpy_s(&SetUserMaxClipUploadsPerMinute_Params.InMaxClipUploadsPerMinute, sizeof(SetUserMaxClipUploadsPerMinute_Params.InMaxClipUploadsPerMinute), &InMaxClipUploadsPerMinute, sizeof(InMaxClipUploadsPerMinute));

	uFnSetUserMaxClipUploadsPerMinute->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetUserMaxClipUploadsPerMinute, &SetUserMaxClipUploadsPerMinute_Params, nullptr);
	uFnSetUserMaxClipUploadsPerMinute->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.IsAccountLinked
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  InEpicAccountId                (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineGameClipsInterfaceEOS::IsAccountLinked(class FString InEpicAccountId)
{
	static UFunction* uFnIsAccountLinked = nullptr;

	if (!uFnIsAccountLinked)
	{
		uFnIsAccountLinked = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.IsAccountLinked");
	}

	UOnlineGameClipsInterfaceEOS_execIsAccountLinked_Params IsAccountLinked_Params;
	memset(&IsAccountLinked_Params, 0, sizeof(IsAccountLinked_Params));
	memcpy_s(&IsAccountLinked_Params.InEpicAccountId, sizeof(IsAccountLinked_Params.InEpicAccountId), &InEpicAccountId, sizeof(InEpicAccountId));

	uFnIsAccountLinked->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsAccountLinked, &IsAccountLinked_Params, nullptr);
	uFnIsAccountLinked->FunctionFlags |= 0x400;

	return IsAccountLinked_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.CreateClip
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  InEpicAccountId                (CPF_Parm | CPF_NeedCtorLink)
// class FString                  InClipType                     (CPF_Parm | CPF_NeedCtorLink)

int32_t UOnlineGameClipsInterfaceEOS::CreateClip(class FString InEpicAccountId, class FString InClipType)
{
	static UFunction* uFnCreateClip = nullptr;

	if (!uFnCreateClip)
	{
		uFnCreateClip = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.CreateClip");
	}

	UOnlineGameClipsInterfaceEOS_execCreateClip_Params CreateClip_Params;
	memset(&CreateClip_Params, 0, sizeof(CreateClip_Params));
	memcpy_s(&CreateClip_Params.InEpicAccountId, sizeof(CreateClip_Params.InEpicAccountId), &InEpicAccountId, sizeof(InEpicAccountId));
	memcpy_s(&CreateClip_Params.InClipType, sizeof(CreateClip_Params.InClipType), &InClipType, sizeof(InClipType));

	uFnCreateClip->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCreateClip, &CreateClip_Params, nullptr);
	uFnCreateClip->FunctionFlags |= 0x400;

	return CreateClip_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.DisableMaskArea
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint64_t                       InMaskAreaHandle               (CPF_Parm)

void UOnlineGameClipsInterfaceEOS::DisableMaskArea(uint64_t InMaskAreaHandle)
{
	static UFunction* uFnDisableMaskArea = nullptr;

	if (!uFnDisableMaskArea)
	{
		uFnDisableMaskArea = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.DisableMaskArea");
	}

	UOnlineGameClipsInterfaceEOS_execDisableMaskArea_Params DisableMaskArea_Params;
	memset(&DisableMaskArea_Params, 0, sizeof(DisableMaskArea_Params));
	DisableMaskArea_Params.InMaskAreaHandle = InMaskAreaHandle;

	uFnDisableMaskArea->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDisableMaskArea, &DisableMaskArea_Params, nullptr);
	uFnDisableMaskArea->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EnableMaskArea
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FGameClipsMaskArea      InMaskArea                     (CPF_Parm | CPF_OutParm)

uint64_t UOnlineGameClipsInterfaceEOS::EnableMaskArea(struct FGameClipsMaskArea& InMaskArea)
{
	static UFunction* uFnEnableMaskArea = nullptr;

	if (!uFnEnableMaskArea)
	{
		uFnEnableMaskArea = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EnableMaskArea");
	}

	UOnlineGameClipsInterfaceEOS_execEnableMaskArea_Params EnableMaskArea_Params;
	memset(&EnableMaskArea_Params, 0, sizeof(EnableMaskArea_Params));
	memcpy_s(&EnableMaskArea_Params.InMaskArea, sizeof(EnableMaskArea_Params.InMaskArea), &InMaskArea, sizeof(InMaskArea));

	uFnEnableMaskArea->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnEnableMaskArea, &EnableMaskArea_Params, nullptr);
	uFnEnableMaskArea->FunctionFlags |= 0x400;

	memcpy_s(&InMaskArea, sizeof(InMaskArea), &EnableMaskArea_Params.InMaskArea, sizeof(EnableMaskArea_Params.InMaskArea));

	return EnableMaskArea_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.StopRecording
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlineGameClipsInterfaceEOS::StopRecording()
{
	static UFunction* uFnStopRecording = nullptr;

	if (!uFnStopRecording)
	{
		uFnStopRecording = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.StopRecording");
	}

	UOnlineGameClipsInterfaceEOS_execStopRecording_Params StopRecording_Params;
	memset(&StopRecording_Params, 0, sizeof(StopRecording_Params));

	uFnStopRecording->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStopRecording, &StopRecording_Params, nullptr);
	uFnStopRecording->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.StartRecording
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint64_t                       InClipDuration                 (CPF_Parm)

void UOnlineGameClipsInterfaceEOS::StartRecording(uint64_t InClipDuration)
{
	static UFunction* uFnStartRecording = nullptr;

	if (!uFnStartRecording)
	{
		uFnStartRecording = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.StartRecording");
	}

	UOnlineGameClipsInterfaceEOS_execStartRecording_Params StartRecording_Params;
	memset(&StartRecording_Params, 0, sizeof(StartRecording_Params));
	StartRecording_Params.InClipDuration = InClipDuration;

	uFnStartRecording->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStartRecording, &StartRecording_Params, nullptr);
	uFnStartRecording->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.AcceptGameInvite
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceEOS::AcceptGameInvite(uint8_t LocalUserNum, struct FName SessionName)
{
	static UFunction* uFnAcceptGameInvite = nullptr;

	if (!uFnAcceptGameInvite)
	{
		uFnAcceptGameInvite = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.AcceptGameInvite");
	}

	UOnlineGameInterfaceEOS_execAcceptGameInvite_Params AcceptGameInvite_Params;
	memset(&AcceptGameInvite_Params, 0, sizeof(AcceptGameInvite_Params));
	memcpy_s(&AcceptGameInvite_Params.LocalUserNum, sizeof(AcceptGameInvite_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AcceptGameInvite_Params.SessionName, sizeof(AcceptGameInvite_Params.SessionName), &SessionName, sizeof(SessionName));

	uFnAcceptGameInvite->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAcceptGameInvite, &AcceptGameInvite_Params, nullptr);
	uFnAcceptGameInvite->FunctionFlags |= 0x400;

	return AcceptGameInvite_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.FreeSearchResults
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UOnlineGameSearch*       Search                         (CPF_Parm)

bool UOnlineGameInterfaceEOS::FreeSearchResults(class UOnlineGameSearch* Search)
{
	static UFunction* uFnFreeSearchResults = nullptr;

	if (!uFnFreeSearchResults)
	{
		uFnFreeSearchResults = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.FreeSearchResults");
	}

	UOnlineGameInterfaceEOS_execFreeSearchResults_Params FreeSearchResults_Params;
	memset(&FreeSearchResults_Params, 0, sizeof(FreeSearchResults_Params));
	memcpy_s(&FreeSearchResults_Params.Search, sizeof(FreeSearchResults_Params.Search), &Search, sizeof(Search));

	uFnFreeSearchResults->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnFreeSearchResults, &FreeSearchResults_Params, nullptr);
	uFnFreeSearchResults->FunctionFlags |= 0x400;

	return FreeSearchResults_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.UpdateOnlineGame
// [0x400024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// class UOnlineGameSettings*     UpdatedGameSettings            (CPF_Parm)
// bool                           bShouldRefreshOnlineData       (CPF_OptionalParm | CPF_Parm)

bool UOnlineGameInterfaceEOS::UpdateOnlineGame(struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool bShouldRefreshOnlineData)
{
	static UFunction* uFnUpdateOnlineGame = nullptr;

	if (!uFnUpdateOnlineGame)
	{
		uFnUpdateOnlineGame = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.UpdateOnlineGame");
	}

	UOnlineGameInterfaceEOS_execUpdateOnlineGame_Params UpdateOnlineGame_Params;
	memset(&UpdateOnlineGame_Params, 0, sizeof(UpdateOnlineGame_Params));
	memcpy_s(&UpdateOnlineGame_Params.SessionName, sizeof(UpdateOnlineGame_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&UpdateOnlineGame_Params.UpdatedGameSettings, sizeof(UpdateOnlineGame_Params.UpdatedGameSettings), &UpdatedGameSettings, sizeof(UpdatedGameSettings));
	UpdateOnlineGame_Params.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	uFnUpdateOnlineGame->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUpdateOnlineGame, &UpdateOnlineGame_Params, nullptr);
	uFnUpdateOnlineGame->FunctionFlags |= 0x400;

	return UpdateOnlineGame_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.AuthWithNintendoAccountToken
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  NintendoAccountToken           (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePersistentAuthInterfaceEOS::AuthWithNintendoAccountToken(uint8_t LocalUserNum, class FString& NintendoAccountToken)
{
	static UFunction* uFnAuthWithNintendoAccountToken = nullptr;

	if (!uFnAuthWithNintendoAccountToken)
	{
		uFnAuthWithNintendoAccountToken = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.AuthWithNintendoAccountToken");
	}

	UOnlinePersistentAuthInterfaceEOS_execAuthWithNintendoAccountToken_Params AuthWithNintendoAccountToken_Params;
	memset(&AuthWithNintendoAccountToken_Params, 0, sizeof(AuthWithNintendoAccountToken_Params));
	memcpy_s(&AuthWithNintendoAccountToken_Params.LocalUserNum, sizeof(AuthWithNintendoAccountToken_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AuthWithNintendoAccountToken_Params.NintendoAccountToken, sizeof(AuthWithNintendoAccountToken_Params.NintendoAccountToken), &NintendoAccountToken, sizeof(NintendoAccountToken));

	uFnAuthWithNintendoAccountToken->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAuthWithNintendoAccountToken, &AuthWithNintendoAccountToken_Params, nullptr);
	uFnAuthWithNintendoAccountToken->FunctionFlags |= 0x400;

	memcpy_s(&NintendoAccountToken, sizeof(NintendoAccountToken), &AuthWithNintendoAccountToken_Params.NintendoAccountToken, sizeof(AuthWithNintendoAccountToken_Params.NintendoAccountToken));

	return AuthWithNintendoAccountToken_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetTimeUntilAuthExpiration
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

uint64_t UOnlinePersistentAuthInterfaceEOS::GetTimeUntilAuthExpiration(uint8_t LocalUserNum)
{
	static UFunction* uFnGetTimeUntilAuthExpiration = nullptr;

	if (!uFnGetTimeUntilAuthExpiration)
	{
		uFnGetTimeUntilAuthExpiration = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetTimeUntilAuthExpiration");
	}

	UOnlinePersistentAuthInterfaceEOS_execGetTimeUntilAuthExpiration_Params GetTimeUntilAuthExpiration_Params;
	memset(&GetTimeUntilAuthExpiration_Params, 0, sizeof(GetTimeUntilAuthExpiration_Params));
	memcpy_s(&GetTimeUntilAuthExpiration_Params.LocalUserNum, sizeof(GetTimeUntilAuthExpiration_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnGetTimeUntilAuthExpiration->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetTimeUntilAuthExpiration, &GetTimeUntilAuthExpiration_Params, nullptr);
	uFnGetTimeUntilAuthExpiration->FunctionFlags |= 0x400;

	return GetTimeUntilAuthExpiration_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetAuthExpirationTimestamp
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class UDateTime*               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class UDateTime* UOnlinePersistentAuthInterfaceEOS::GetAuthExpirationTimestamp(uint8_t LocalUserNum)
{
	static UFunction* uFnGetAuthExpirationTimestamp = nullptr;

	if (!uFnGetAuthExpirationTimestamp)
	{
		uFnGetAuthExpirationTimestamp = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetAuthExpirationTimestamp");
	}

	UOnlinePersistentAuthInterfaceEOS_execGetAuthExpirationTimestamp_Params GetAuthExpirationTimestamp_Params;
	memset(&GetAuthExpirationTimestamp_Params, 0, sizeof(GetAuthExpirationTimestamp_Params));
	memcpy_s(&GetAuthExpirationTimestamp_Params.LocalUserNum, sizeof(GetAuthExpirationTimestamp_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnGetAuthExpirationTimestamp->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetAuthExpirationTimestamp, &GetAuthExpirationTimestamp_Params, nullptr);
	uFnGetAuthExpirationTimestamp->FunctionFlags |= 0x400;

	return GetAuthExpirationTimestamp_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.LaunchAccountPortal
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlinePersistentAuthInterfaceEOS::LaunchAccountPortal(uint8_t LocalUserNum)
{
	static UFunction* uFnLaunchAccountPortal = nullptr;

	if (!uFnLaunchAccountPortal)
	{
		uFnLaunchAccountPortal = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.LaunchAccountPortal");
	}

	UOnlinePersistentAuthInterfaceEOS_execLaunchAccountPortal_Params LaunchAccountPortal_Params;
	memset(&LaunchAccountPortal_Params, 0, sizeof(LaunchAccountPortal_Params));
	memcpy_s(&LaunchAccountPortal_Params.LocalUserNum, sizeof(LaunchAccountPortal_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnLaunchAccountPortal->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnLaunchAccountPortal, &LaunchAccountPortal_Params, nullptr);
	uFnLaunchAccountPortal->FunctionFlags |= 0x400;

	return LaunchAccountPortal_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetClientSecret
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UOnlinePersistentAuthInterfaceEOS::GetClientSecret()
{
	static UFunction* uFnGetClientSecret = nullptr;

	if (!uFnGetClientSecret)
	{
		uFnGetClientSecret = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetClientSecret");
	}

	UOnlinePersistentAuthInterfaceEOS_execGetClientSecret_Params GetClientSecret_Params;
	memset(&GetClientSecret_Params, 0, sizeof(GetClientSecret_Params));

	uFnGetClientSecret->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetClientSecret, &GetClientSecret_Params, nullptr);
	uFnGetClientSecret->FunctionFlags |= 0x400;

	return GetClientSecret_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetClientID
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UOnlinePersistentAuthInterfaceEOS::GetClientID()
{
	static UFunction* uFnGetClientID = nullptr;

	if (!uFnGetClientID)
	{
		uFnGetClientID = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetClientID");
	}

	UOnlinePersistentAuthInterfaceEOS_execGetClientID_Params GetClientID_Params;
	memset(&GetClientID_Params, 0, sizeof(GetClientID_Params));

	uFnGetClientID->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetClientID, &GetClientID_Params, nullptr);
	uFnGetClientID->FunctionFlags |= 0x400;

	return GetClientID_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetClientCredentials
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UOnlinePersistentAuthInterfaceEOS::GetClientCredentials()
{
	static UFunction* uFnGetClientCredentials = nullptr;

	if (!uFnGetClientCredentials)
	{
		uFnGetClientCredentials = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetClientCredentials");
	}

	UOnlinePersistentAuthInterfaceEOS_execGetClientCredentials_Params GetClientCredentials_Params;
	memset(&GetClientCredentials_Params, 0, sizeof(GetClientCredentials_Params));

	uFnGetClientCredentials->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetClientCredentials, &GetClientCredentials_Params, nullptr);
	uFnGetClientCredentials->FunctionFlags |= 0x400;

	return GetClientCredentials_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetContinuanceToken
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class FString UOnlinePersistentAuthInterfaceEOS::GetContinuanceToken(uint8_t LocalUserNum)
{
	static UFunction* uFnGetContinuanceToken = nullptr;

	if (!uFnGetContinuanceToken)
	{
		uFnGetContinuanceToken = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetContinuanceToken");
	}

	UOnlinePersistentAuthInterfaceEOS_execGetContinuanceToken_Params GetContinuanceToken_Params;
	memset(&GetContinuanceToken_Params, 0, sizeof(GetContinuanceToken_Params));
	memcpy_s(&GetContinuanceToken_Params.LocalUserNum, sizeof(GetContinuanceToken_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnGetContinuanceToken->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetContinuanceToken, &GetContinuanceToken_Params, nullptr);
	uFnGetContinuanceToken->FunctionFlags |= 0x400;

	return GetContinuanceToken_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.UseRefreshToken
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  RefreshToken                   (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePersistentAuthInterfaceEOS::UseRefreshToken(uint8_t LocalUserNum, class FString RefreshToken)
{
	static UFunction* uFnUseRefreshToken = nullptr;

	if (!uFnUseRefreshToken)
	{
		uFnUseRefreshToken = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.UseRefreshToken");
	}

	UOnlinePersistentAuthInterfaceEOS_execUseRefreshToken_Params UseRefreshToken_Params;
	memset(&UseRefreshToken_Params, 0, sizeof(UseRefreshToken_Params));
	memcpy_s(&UseRefreshToken_Params.LocalUserNum, sizeof(UseRefreshToken_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&UseRefreshToken_Params.RefreshToken, sizeof(UseRefreshToken_Params.RefreshToken), &RefreshToken, sizeof(RefreshToken));

	uFnUseRefreshToken->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUseRefreshToken, &UseRefreshToken_Params, nullptr);
	uFnUseRefreshToken->FunctionFlags |= 0x400;

	return UseRefreshToken_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetRefreshToken
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class FString UOnlinePersistentAuthInterfaceEOS::GetRefreshToken(uint8_t LocalUserNum)
{
	static UFunction* uFnGetRefreshToken = nullptr;

	if (!uFnGetRefreshToken)
	{
		uFnGetRefreshToken = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetRefreshToken");
	}

	UOnlinePersistentAuthInterfaceEOS_execGetRefreshToken_Params GetRefreshToken_Params;
	memset(&GetRefreshToken_Params, 0, sizeof(GetRefreshToken_Params));
	memcpy_s(&GetRefreshToken_Params.LocalUserNum, sizeof(GetRefreshToken_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnGetRefreshToken->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetRefreshToken, &GetRefreshToken_Params, nullptr);
	uFnGetRefreshToken->FunctionFlags |= 0x400;

	return GetRefreshToken_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.RequestPinGrantCode
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlinePersistentAuthInterfaceEOS::RequestPinGrantCode(uint8_t LocalUserNum)
{
	static UFunction* uFnRequestPinGrantCode = nullptr;

	if (!uFnRequestPinGrantCode)
	{
		uFnRequestPinGrantCode = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.RequestPinGrantCode");
	}

	UOnlinePersistentAuthInterfaceEOS_execRequestPinGrantCode_Params RequestPinGrantCode_Params;
	memset(&RequestPinGrantCode_Params, 0, sizeof(RequestPinGrantCode_Params));
	memcpy_s(&RequestPinGrantCode_Params.LocalUserNum, sizeof(RequestPinGrantCode_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnRequestPinGrantCode->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRequestPinGrantCode, &RequestPinGrantCode_Params, nullptr);
	uFnRequestPinGrantCode->FunctionFlags |= 0x400;

	return RequestPinGrantCode_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendInviteAcceptedDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteAccepted                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddFriendInviteAcceptedDelegate(uint8_t LocalUserNum, struct FScriptDelegate InviteAccepted)
{
	static UFunction* uFnAddFriendInviteAcceptedDelegate = nullptr;

	if (!uFnAddFriendInviteAcceptedDelegate)
	{
		uFnAddFriendInviteAcceptedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendInviteAcceptedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddFriendInviteAcceptedDelegate_Params AddFriendInviteAcceptedDelegate_Params;
	memset(&AddFriendInviteAcceptedDelegate_Params, 0, sizeof(AddFriendInviteAcceptedDelegate_Params));
	memcpy_s(&AddFriendInviteAcceptedDelegate_Params.LocalUserNum, sizeof(AddFriendInviteAcceptedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddFriendInviteAcceptedDelegate_Params.InviteAccepted, sizeof(AddFriendInviteAcceptedDelegate_Params.InviteAccepted), &InviteAccepted, sizeof(InviteAccepted));

	this->ProcessEvent(uFnAddFriendInviteAcceptedDelegate, &AddFriendInviteAcceptedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendInviteAccepted
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            AcceptingPlayerId              (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnFriendInviteAccepted(struct FUniqueNetId AcceptingPlayerId)
{
	static UFunction* uFnOnFriendInviteAccepted = nullptr;

	if (!uFnOnFriendInviteAccepted)
	{
		uFnOnFriendInviteAccepted = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendInviteAccepted");
	}

	UOnlinePlayerInterfaceEOS_execOnFriendInviteAccepted_Params OnFriendInviteAccepted_Params;
	memset(&OnFriendInviteAccepted_Params, 0, sizeof(OnFriendInviteAccepted_Params));
	memcpy_s(&OnFriendInviteAccepted_Params.AcceptingPlayerId, sizeof(OnFriendInviteAccepted_Params.AcceptingPlayerId), &AcceptingPlayerId, sizeof(AcceptingPlayerId));

	this->ProcessEvent(uFnOnFriendInviteAccepted, &OnFriendInviteAccepted_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadBlockList
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ReadBlockList(uint8_t LocalUserNum)
{
	static UFunction* uFnReadBlockList = nullptr;

	if (!uFnReadBlockList)
	{
		uFnReadBlockList = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadBlockList");
	}

	UOnlinePlayerInterfaceEOS_execReadBlockList_Params ReadBlockList_Params;
	memset(&ReadBlockList_Params, 0, sizeof(ReadBlockList_Params));
	memcpy_s(&ReadBlockList_Params.LocalUserNum, sizeof(ReadBlockList_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnReadBlockList, &ReadBlockList_Params, nullptr);

	return ReadBlockList_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetBlockList
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FOnlineFriend>   OutBlockList                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::GetBlockList(uint8_t LocalUserNum, TArray<struct FOnlineFriend>& OutBlockList)
{
	static UFunction* uFnGetBlockList = nullptr;

	if (!uFnGetBlockList)
	{
		uFnGetBlockList = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetBlockList");
	}

	UOnlinePlayerInterfaceEOS_execGetBlockList_Params GetBlockList_Params;
	memset(&GetBlockList_Params, 0, sizeof(GetBlockList_Params));
	memcpy_s(&GetBlockList_Params.LocalUserNum, sizeof(GetBlockList_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&GetBlockList_Params.OutBlockList, sizeof(GetBlockList_Params.OutBlockList), &OutBlockList, sizeof(OutBlockList));

	uFnGetBlockList->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetBlockList, &GetBlockList_Params, nullptr);
	uFnGetBlockList->FunctionFlags |= 0x400;

	memcpy_s(&OutBlockList, sizeof(OutBlockList), &GetBlockList_Params.OutBlockList, sizeof(GetBlockList_Params.OutBlockList));
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddPlayerUnblockedDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddPlayerUnblockedDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddPlayerUnblockedDelegate = nullptr;

	if (!uFnAddPlayerUnblockedDelegate)
	{
		uFnAddPlayerUnblockedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddPlayerUnblockedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddPlayerUnblockedDelegate_Params AddPlayerUnblockedDelegate_Params;
	memset(&AddPlayerUnblockedDelegate_Params, 0, sizeof(AddPlayerUnblockedDelegate_Params));
	memcpy_s(&AddPlayerUnblockedDelegate_Params.LocalUserNum, sizeof(AddPlayerUnblockedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddPlayerUnblockedDelegate_Params.InDelegate, sizeof(AddPlayerUnblockedDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnAddPlayerUnblockedDelegate, &AddPlayerUnblockedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddPlayerBlockedDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddPlayerBlockedDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddPlayerBlockedDelegate = nullptr;

	if (!uFnAddPlayerBlockedDelegate)
	{
		uFnAddPlayerBlockedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddPlayerBlockedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddPlayerBlockedDelegate_Params AddPlayerBlockedDelegate_Params;
	memset(&AddPlayerBlockedDelegate_Params, 0, sizeof(AddPlayerBlockedDelegate_Params));
	memcpy_s(&AddPlayerBlockedDelegate_Params.LocalUserNum, sizeof(AddPlayerBlockedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddPlayerBlockedDelegate_Params.InDelegate, sizeof(AddPlayerBlockedDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnAddPlayerBlockedDelegate, &AddPlayerBlockedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddBlockListUpdatedDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddBlockListUpdatedDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddBlockListUpdatedDelegate = nullptr;

	if (!uFnAddBlockListUpdatedDelegate)
	{
		uFnAddBlockListUpdatedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddBlockListUpdatedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddBlockListUpdatedDelegate_Params AddBlockListUpdatedDelegate_Params;
	memset(&AddBlockListUpdatedDelegate_Params, 0, sizeof(AddBlockListUpdatedDelegate_Params));
	memcpy_s(&AddBlockListUpdatedDelegate_Params.LocalUserNum, sizeof(AddBlockListUpdatedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddBlockListUpdatedDelegate_Params.InDelegate, sizeof(AddBlockListUpdatedDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnAddBlockListUpdatedDelegate, &AddBlockListUpdatedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.EpicIDToPlatformID
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            EpicAccountId                  (CPF_Parm | CPF_NeedCtorLink)
// EOnlinePlatform                TargetPlatform                 (CPF_Parm)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::EpicIDToPlatformID(struct FUniqueNetId EpicAccountId, EOnlinePlatform TargetPlatform, struct FScriptDelegate Callback)
{
	static UFunction* uFnEpicIDToPlatformID = nullptr;

	if (!uFnEpicIDToPlatformID)
	{
		uFnEpicIDToPlatformID = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.EpicIDToPlatformID");
	}

	UOnlinePlayerInterfaceEOS_execEpicIDToPlatformID_Params EpicIDToPlatformID_Params;
	memset(&EpicIDToPlatformID_Params, 0, sizeof(EpicIDToPlatformID_Params));
	memcpy_s(&EpicIDToPlatformID_Params.EpicAccountId, sizeof(EpicIDToPlatformID_Params.EpicAccountId), &EpicAccountId, sizeof(EpicAccountId));
	memcpy_s(&EpicIDToPlatformID_Params.TargetPlatform, sizeof(EpicIDToPlatformID_Params.TargetPlatform), &TargetPlatform, sizeof(TargetPlatform));
	memcpy_s(&EpicIDToPlatformID_Params.Callback, sizeof(EpicIDToPlatformID_Params.Callback), &Callback, sizeof(Callback));

	uFnEpicIDToPlatformID->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnEpicIDToPlatformID, &EpicIDToPlatformID_Params, nullptr);
	uFnEpicIDToPlatformID->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.EpicIDToPlatformIDCallback
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            PlatformAccountId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::EpicIDToPlatformIDCallback(struct FUniqueNetId PlatformAccountId, class FString Error)
{
	static UFunction* uFnEpicIDToPlatformIDCallback = nullptr;

	if (!uFnEpicIDToPlatformIDCallback)
	{
		uFnEpicIDToPlatformIDCallback = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.EpicIDToPlatformIDCallback");
	}

	UOnlinePlayerInterfaceEOS_execEpicIDToPlatformIDCallback_Params EpicIDToPlatformIDCallback_Params;
	memset(&EpicIDToPlatformIDCallback_Params, 0, sizeof(EpicIDToPlatformIDCallback_Params));
	memcpy_s(&EpicIDToPlatformIDCallback_Params.PlatformAccountId, sizeof(EpicIDToPlatformIDCallback_Params.PlatformAccountId), &PlatformAccountId, sizeof(PlatformAccountId));
	memcpy_s(&EpicIDToPlatformIDCallback_Params.Error, sizeof(EpicIDToPlatformIDCallback_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnEpicIDToPlatformIDCallback, &EpicIDToPlatformIDCallback_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetEpicAccountId
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FUniqueNetId            PlatformId                     (CPF_Parm | CPF_NeedCtorLink)

struct FUniqueNetId UOnlinePlayerInterfaceEOS::GetEpicAccountId(struct FUniqueNetId PlatformId)
{
	static UFunction* uFnGetEpicAccountId = nullptr;

	if (!uFnGetEpicAccountId)
	{
		uFnGetEpicAccountId = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetEpicAccountId");
	}

	UOnlinePlayerInterfaceEOS_execGetEpicAccountId_Params GetEpicAccountId_Params;
	memset(&GetEpicAccountId_Params, 0, sizeof(GetEpicAccountId_Params));
	memcpy_s(&GetEpicAccountId_Params.PlatformId, sizeof(GetEpicAccountId_Params.PlatformId), &PlatformId, sizeof(PlatformId));

	uFnGetEpicAccountId->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetEpicAccountId, &GetEpicAccountId_Params, nullptr);
	uFnGetEpicAccountId->FunctionFlags |= 0x400;

	return GetEpicAccountId_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowInviteUI
// [0x00024001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  InviteText                     (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::ShowInviteUI(uint8_t LocalUserNum, class FString InviteText)
{
	static UFunction* uFnShowInviteUI = nullptr;

	if (!uFnShowInviteUI)
	{
		uFnShowInviteUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowInviteUI");
	}

	UOnlinePlayerInterfaceEOS_execShowInviteUI_Params ShowInviteUI_Params;
	memset(&ShowInviteUI_Params, 0, sizeof(ShowInviteUI_Params));
	memcpy_s(&ShowInviteUI_Params.LocalUserNum, sizeof(ShowInviteUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowInviteUI_Params.InviteText, sizeof(ShowInviteUI_Params.InviteText), &InviteText, sizeof(InviteText));

	this->ProcessEvent(uFnShowInviteUI, &ShowInviteUI_Params, nullptr);

	return ShowInviteUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowGamerCardUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::ShowGamerCardUI(uint8_t LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnShowGamerCardUI = nullptr;

	if (!uFnShowGamerCardUI)
	{
		uFnShowGamerCardUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowGamerCardUI");
	}

	UOnlinePlayerInterfaceEOS_execShowGamerCardUI_Params ShowGamerCardUI_Params;
	memset(&ShowGamerCardUI_Params, 0, sizeof(ShowGamerCardUI_Params));
	memcpy_s(&ShowGamerCardUI_Params.LocalUserNum, sizeof(ShowGamerCardUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowGamerCardUI_Params.PlayerID, sizeof(ShowGamerCardUI_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	this->ProcessEvent(uFnShowGamerCardUI, &ShowGamerCardUI_Params, nullptr);

	return ShowGamerCardUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetRichPresence
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  PresenceString                 (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GameDataString                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::SetRichPresence(uint8_t LocalUserNum, class FString PresenceString, class FString GameDataString)
{
	static UFunction* uFnSetRichPresence = nullptr;

	if (!uFnSetRichPresence)
	{
		uFnSetRichPresence = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetRichPresence");
	}

	UOnlinePlayerInterfaceEOS_execSetRichPresence_Params SetRichPresence_Params;
	memset(&SetRichPresence_Params, 0, sizeof(SetRichPresence_Params));
	memcpy_s(&SetRichPresence_Params.LocalUserNum, sizeof(SetRichPresence_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&SetRichPresence_Params.PresenceString, sizeof(SetRichPresence_Params.PresenceString), &PresenceString, sizeof(PresenceString));
	memcpy_s(&SetRichPresence_Params.GameDataString, sizeof(SetRichPresence_Params.GameDataString), &GameDataString, sizeof(GameDataString));

	uFnSetRichPresence->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetRichPresence, &SetRichPresence_Params, nullptr);
	uFnSetRichPresence->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendPresence
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FOnlineFriend           FriendData                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::GetFriendPresence(struct FOnlineFriend& FriendData)
{
	static UFunction* uFnGetFriendPresence = nullptr;

	if (!uFnGetFriendPresence)
	{
		uFnGetFriendPresence = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendPresence");
	}

	UOnlinePlayerInterfaceEOS_execGetFriendPresence_Params GetFriendPresence_Params;
	memset(&GetFriendPresence_Params, 0, sizeof(GetFriendPresence_Params));
	memcpy_s(&GetFriendPresence_Params.FriendData, sizeof(GetFriendPresence_Params.FriendData), &FriendData, sizeof(FriendData));

	uFnGetFriendPresence->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetFriendPresence, &GetFriendPresence_Params, nullptr);
	uFnGetFriendPresence->FunctionFlags |= 0x400;

	memcpy_s(&FriendData, sizeof(FriendData), &GetFriendPresence_Params.FriendData, sizeof(GetFriendPresence_Params.FriendData));
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RecordPlayersRecentlyMet
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  GameDescription                (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FUniqueNetId>    Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::RecordPlayersRecentlyMet(uint8_t LocalUserNum, class FString GameDescription, TArray<struct FUniqueNetId>& Players)
{
	static UFunction* uFnRecordPlayersRecentlyMet = nullptr;

	if (!uFnRecordPlayersRecentlyMet)
	{
		uFnRecordPlayersRecentlyMet = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RecordPlayersRecentlyMet");
	}

	UOnlinePlayerInterfaceEOS_execRecordPlayersRecentlyMet_Params RecordPlayersRecentlyMet_Params;
	memset(&RecordPlayersRecentlyMet_Params, 0, sizeof(RecordPlayersRecentlyMet_Params));
	memcpy_s(&RecordPlayersRecentlyMet_Params.LocalUserNum, sizeof(RecordPlayersRecentlyMet_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&RecordPlayersRecentlyMet_Params.GameDescription, sizeof(RecordPlayersRecentlyMet_Params.GameDescription), &GameDescription, sizeof(GameDescription));
	memcpy_s(&RecordPlayersRecentlyMet_Params.Players, sizeof(RecordPlayersRecentlyMet_Params.Players), &Players, sizeof(Players));

	this->ProcessEvent(uFnRecordPlayersRecentlyMet, &RecordPlayersRecentlyMet_Params, nullptr);

	memcpy_s(&Players, sizeof(Players), &RecordPlayersRecentlyMet_Params.Players, sizeof(RecordPlayersRecentlyMet_Params.Players));

	return RecordPlayersRecentlyMet_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WordFilterSanitizeString
// [0x00024001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Comment                        (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         SanitizeDelegate               (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            PlayerID                       (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::WordFilterSanitizeString(class FString Comment, struct FScriptDelegate SanitizeDelegate, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnWordFilterSanitizeString = nullptr;

	if (!uFnWordFilterSanitizeString)
	{
		uFnWordFilterSanitizeString = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WordFilterSanitizeString");
	}

	UOnlinePlayerInterfaceEOS_execWordFilterSanitizeString_Params WordFilterSanitizeString_Params;
	memset(&WordFilterSanitizeString_Params, 0, sizeof(WordFilterSanitizeString_Params));
	memcpy_s(&WordFilterSanitizeString_Params.Comment, sizeof(WordFilterSanitizeString_Params.Comment), &Comment, sizeof(Comment));
	memcpy_s(&WordFilterSanitizeString_Params.SanitizeDelegate, sizeof(WordFilterSanitizeString_Params.SanitizeDelegate), &SanitizeDelegate, sizeof(SanitizeDelegate));
	memcpy_s(&WordFilterSanitizeString_Params.PlayerID, sizeof(WordFilterSanitizeString_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	this->ProcessEvent(uFnWordFilterSanitizeString, &WordFilterSanitizeString_Params, nullptr);

	return WordFilterSanitizeString_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnSanitizeStringComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FWordFilterResult       Result                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnSanitizeStringComplete(struct FWordFilterResult Result)
{
	static UFunction* uFnOnSanitizeStringComplete = nullptr;

	if (!uFnOnSanitizeStringComplete)
	{
		uFnOnSanitizeStringComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnSanitizeStringComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnSanitizeStringComplete_Params OnSanitizeStringComplete_Params;
	memset(&OnSanitizeStringComplete_Params, 0, sizeof(OnSanitizeStringComplete_Params));
	memcpy_s(&OnSanitizeStringComplete_Params.Result, sizeof(OnSanitizeStringComplete_Params.Result), &Result, sizeof(Result));

	this->ProcessEvent(uFnOnSanitizeStringComplete, &OnSanitizeStringComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HideKeyboardUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::HideKeyboardUI(uint8_t LocalUserNum)
{
	static UFunction* uFnHideKeyboardUI = nullptr;

	if (!uFnHideKeyboardUI)
	{
		uFnHideKeyboardUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HideKeyboardUI");
	}

	UOnlinePlayerInterfaceEOS_execHideKeyboardUI_Params HideKeyboardUI_Params;
	memset(&HideKeyboardUI_Params, 0, sizeof(HideKeyboardUI_Params));
	memcpy_s(&HideKeyboardUI_Params.LocalUserNum, sizeof(HideKeyboardUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnHideKeyboardUI, &HideKeyboardUI_Params, nullptr);

	return HideKeyboardUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerCountryDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadPlayerCountryDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearReadPlayerCountryDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadPlayerCountryDelegate)
{
	static UFunction* uFnClearReadPlayerCountryDelegate = nullptr;

	if (!uFnClearReadPlayerCountryDelegate)
	{
		uFnClearReadPlayerCountryDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerCountryDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearReadPlayerCountryDelegate_Params ClearReadPlayerCountryDelegate_Params;
	memset(&ClearReadPlayerCountryDelegate_Params, 0, sizeof(ClearReadPlayerCountryDelegate_Params));
	memcpy_s(&ClearReadPlayerCountryDelegate_Params.LocalUserNum, sizeof(ClearReadPlayerCountryDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearReadPlayerCountryDelegate_Params.ReadPlayerCountryDelegate, sizeof(ClearReadPlayerCountryDelegate_Params.ReadPlayerCountryDelegate), &ReadPlayerCountryDelegate, sizeof(ReadPlayerCountryDelegate));

	this->ProcessEvent(uFnClearReadPlayerCountryDelegate, &ClearReadPlayerCountryDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerCountryDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadPlayerCountryDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddReadPlayerCountryDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadPlayerCountryDelegate)
{
	static UFunction* uFnAddReadPlayerCountryDelegate = nullptr;

	if (!uFnAddReadPlayerCountryDelegate)
	{
		uFnAddReadPlayerCountryDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerCountryDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddReadPlayerCountryDelegate_Params AddReadPlayerCountryDelegate_Params;
	memset(&AddReadPlayerCountryDelegate_Params, 0, sizeof(AddReadPlayerCountryDelegate_Params));
	memcpy_s(&AddReadPlayerCountryDelegate_Params.LocalUserNum, sizeof(AddReadPlayerCountryDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddReadPlayerCountryDelegate_Params.ReadPlayerCountryDelegate, sizeof(AddReadPlayerCountryDelegate_Params.ReadPlayerCountryDelegate), &ReadPlayerCountryDelegate, sizeof(ReadPlayerCountryDelegate));

	this->ProcessEvent(uFnAddReadPlayerCountryDelegate, &AddReadPlayerCountryDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnPlayerCountryRetrieved
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Country                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnPlayerCountryRetrieved(struct FUniqueNetId PlayerID, class FString Country)
{
	static UFunction* uFnOnPlayerCountryRetrieved = nullptr;

	if (!uFnOnPlayerCountryRetrieved)
	{
		uFnOnPlayerCountryRetrieved = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnPlayerCountryRetrieved");
	}

	UOnlinePlayerInterfaceEOS_execOnPlayerCountryRetrieved_Params OnPlayerCountryRetrieved_Params;
	memset(&OnPlayerCountryRetrieved_Params, 0, sizeof(OnPlayerCountryRetrieved_Params));
	memcpy_s(&OnPlayerCountryRetrieved_Params.PlayerID, sizeof(OnPlayerCountryRetrieved_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	memcpy_s(&OnPlayerCountryRetrieved_Params.Country, sizeof(OnPlayerCountryRetrieved_Params.Country), &Country, sizeof(Country));

	this->ProcessEvent(uFnOnPlayerCountryRetrieved, &OnPlayerCountryRetrieved_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerCountry
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::GetPlayerCountry(uint8_t LocalUserNum)
{
	static UFunction* uFnGetPlayerCountry = nullptr;

	if (!uFnGetPlayerCountry)
	{
		uFnGetPlayerCountry = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerCountry");
	}

	UOnlinePlayerInterfaceEOS_execGetPlayerCountry_Params GetPlayerCountry_Params;
	memset(&GetPlayerCountry_Params, 0, sizeof(GetPlayerCountry_Params));
	memcpy_s(&GetPlayerCountry_Params.LocalUserNum, sizeof(GetPlayerCountry_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnGetPlayerCountry, &GetPlayerCountry_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAvatarChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         AvatarDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearAvatarChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate AvatarDelegate)
{
	static UFunction* uFnClearAvatarChangeDelegate = nullptr;

	if (!uFnClearAvatarChangeDelegate)
	{
		uFnClearAvatarChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAvatarChangeDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearAvatarChangeDelegate_Params ClearAvatarChangeDelegate_Params;
	memset(&ClearAvatarChangeDelegate_Params, 0, sizeof(ClearAvatarChangeDelegate_Params));
	memcpy_s(&ClearAvatarChangeDelegate_Params.LocalUserNum, sizeof(ClearAvatarChangeDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearAvatarChangeDelegate_Params.AvatarDelegate, sizeof(ClearAvatarChangeDelegate_Params.AvatarDelegate), &AvatarDelegate, sizeof(AvatarDelegate));

	this->ProcessEvent(uFnClearAvatarChangeDelegate, &ClearAvatarChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAvatarChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         AvatarDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddAvatarChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate AvatarDelegate)
{
	static UFunction* uFnAddAvatarChangeDelegate = nullptr;

	if (!uFnAddAvatarChangeDelegate)
	{
		uFnAddAvatarChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAvatarChangeDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddAvatarChangeDelegate_Params AddAvatarChangeDelegate_Params;
	memset(&AddAvatarChangeDelegate_Params, 0, sizeof(AddAvatarChangeDelegate_Params));
	memcpy_s(&AddAvatarChangeDelegate_Params.LocalUserNum, sizeof(AddAvatarChangeDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddAvatarChangeDelegate_Params.AvatarDelegate, sizeof(AddAvatarChangeDelegate_Params.AvatarDelegate), &AvatarDelegate, sizeof(AvatarDelegate));

	this->ProcessEvent(uFnAddAvatarChangeDelegate, &AddAvatarChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendPresenceChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         PresenceDelegate               (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearFriendPresenceChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate PresenceDelegate)
{
	static UFunction* uFnClearFriendPresenceChangeDelegate = nullptr;

	if (!uFnClearFriendPresenceChangeDelegate)
	{
		uFnClearFriendPresenceChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendPresenceChangeDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearFriendPresenceChangeDelegate_Params ClearFriendPresenceChangeDelegate_Params;
	memset(&ClearFriendPresenceChangeDelegate_Params, 0, sizeof(ClearFriendPresenceChangeDelegate_Params));
	memcpy_s(&ClearFriendPresenceChangeDelegate_Params.LocalUserNum, sizeof(ClearFriendPresenceChangeDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearFriendPresenceChangeDelegate_Params.PresenceDelegate, sizeof(ClearFriendPresenceChangeDelegate_Params.PresenceDelegate), &PresenceDelegate, sizeof(PresenceDelegate));

	this->ProcessEvent(uFnClearFriendPresenceChangeDelegate, &ClearFriendPresenceChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendPresenceChangeDelegate
// [0x00020803] (FUNC_Final | FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         PresenceDelegate               (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::eventAddFriendPresenceChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate PresenceDelegate)
{
	static UFunction* uFnAddFriendPresenceChangeDelegate = nullptr;

	if (!uFnAddFriendPresenceChangeDelegate)
	{
		uFnAddFriendPresenceChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendPresenceChangeDelegate");
	}

	UOnlinePlayerInterfaceEOS_eventAddFriendPresenceChangeDelegate_Params AddFriendPresenceChangeDelegate_Params;
	memset(&AddFriendPresenceChangeDelegate_Params, 0, sizeof(AddFriendPresenceChangeDelegate_Params));
	memcpy_s(&AddFriendPresenceChangeDelegate_Params.LocalUserNum, sizeof(AddFriendPresenceChangeDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddFriendPresenceChangeDelegate_Params.PresenceDelegate, sizeof(AddFriendPresenceChangeDelegate_Params.PresenceDelegate), &PresenceDelegate, sizeof(PresenceDelegate));

	this->ProcessEvent(uFnAddFriendPresenceChangeDelegate, &AddFriendPresenceChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.FriendPresenceChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::FriendPresenceChange(struct FUniqueNetId PlayerID)
{
	static UFunction* uFnFriendPresenceChange = nullptr;

	if (!uFnFriendPresenceChange)
	{
		uFnFriendPresenceChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.FriendPresenceChange");
	}

	UOnlinePlayerInterfaceEOS_execFriendPresenceChange_Params FriendPresenceChange_Params;
	memset(&FriendPresenceChange_Params, 0, sizeof(FriendPresenceChange_Params));
	memcpy_s(&FriendPresenceChange_Params.PlayerID, sizeof(FriendPresenceChange_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	this->ProcessEvent(uFnFriendPresenceChange, &FriendPresenceChange_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAvatarChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnAvatarChange(struct FUniqueNetId PlayerID)
{
	static UFunction* uFnOnAvatarChange = nullptr;

	if (!uFnOnAvatarChange)
	{
		uFnOnAvatarChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAvatarChange");
	}

	UOnlinePlayerInterfaceEOS_execOnAvatarChange_Params OnAvatarChange_Params;
	memset(&OnAvatarChange_Params, 0, sizeof(OnAvatarChange_Params));
	memcpy_s(&OnAvatarChange_Params.PlayerID, sizeof(OnAvatarChange_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	this->ProcessEvent(uFnOnAvatarChange, &OnAvatarChange_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnlockAchievement
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        AchievementId                  (CPF_Parm)
// float                          PercentComplete                (CPF_OptionalParm | CPF_Parm)

bool UOnlinePlayerInterfaceEOS::UnlockAchievement(uint8_t LocalUserNum, int32_t AchievementId, float PercentComplete)
{
	static UFunction* uFnUnlockAchievement = nullptr;

	if (!uFnUnlockAchievement)
	{
		uFnUnlockAchievement = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnlockAchievement");
	}

	UOnlinePlayerInterfaceEOS_execUnlockAchievement_Params UnlockAchievement_Params;
	memset(&UnlockAchievement_Params, 0, sizeof(UnlockAchievement_Params));
	memcpy_s(&UnlockAchievement_Params.LocalUserNum, sizeof(UnlockAchievement_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&UnlockAchievement_Params.AchievementId, sizeof(UnlockAchievement_Params.AchievementId), &AchievementId, sizeof(AchievementId));
	memcpy_s(&UnlockAchievement_Params.PercentComplete, sizeof(UnlockAchievement_Params.PercentComplete), &PercentComplete, sizeof(PercentComplete));

	uFnUnlockAchievement->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUnlockAchievement, &UnlockAchievement_Params, nullptr);
	uFnUnlockAchievement->FunctionFlags |= 0x400;

	return UnlockAchievement_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadAchievements
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_OptionalParm | CPF_Parm)
// bool                           bShouldReadText                (CPF_OptionalParm | CPF_Parm)
// bool                           bShouldReadImages              (CPF_OptionalParm | CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ReadAchievements(uint8_t LocalUserNum, int32_t TitleId, bool bShouldReadText, bool bShouldReadImages)
{
	static UFunction* uFnReadAchievements = nullptr;

	if (!uFnReadAchievements)
	{
		uFnReadAchievements = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadAchievements");
	}

	UOnlinePlayerInterfaceEOS_execReadAchievements_Params ReadAchievements_Params;
	memset(&ReadAchievements_Params, 0, sizeof(ReadAchievements_Params));
	memcpy_s(&ReadAchievements_Params.LocalUserNum, sizeof(ReadAchievements_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadAchievements_Params.TitleId, sizeof(ReadAchievements_Params.TitleId), &TitleId, sizeof(TitleId));
	ReadAchievements_Params.bShouldReadText = bShouldReadText;
	ReadAchievements_Params.bShouldReadImages = bShouldReadImages;

	uFnReadAchievements->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadAchievements, &ReadAchievements_Params, nullptr);
	uFnReadAchievements->FunctionFlags |= 0x400;

	return ReadAchievements_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetAchievements
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// EOnlineEnumerationReadState    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_OptionalParm | CPF_Parm)
// TArray<struct FAchievementDetails> Achievements                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

EOnlineEnumerationReadState UOnlinePlayerInterfaceEOS::GetAchievements(uint8_t LocalUserNum, int32_t TitleId, TArray<struct FAchievementDetails>& Achievements)
{
	static UFunction* uFnGetAchievements = nullptr;

	if (!uFnGetAchievements)
	{
		uFnGetAchievements = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetAchievements");
	}

	UOnlinePlayerInterfaceEOS_execGetAchievements_Params GetAchievements_Params;
	memset(&GetAchievements_Params, 0, sizeof(GetAchievements_Params));
	memcpy_s(&GetAchievements_Params.LocalUserNum, sizeof(GetAchievements_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&GetAchievements_Params.TitleId, sizeof(GetAchievements_Params.TitleId), &TitleId, sizeof(TitleId));
	memcpy_s(&GetAchievements_Params.Achievements, sizeof(GetAchievements_Params.Achievements), &Achievements, sizeof(Achievements));

	uFnGetAchievements->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetAchievements, &GetAchievements_Params, nullptr);
	uFnGetAchievements->FunctionFlags |= 0x400;

	memcpy_s(&Achievements, sizeof(Achievements), &GetAchievements_Params.Achievements, sizeof(GetAchievements_Params.Achievements));

	return GetAchievements_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadAchievementsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearReadAchievementsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearReadAchievementsCompleteDelegate = nullptr;

	if (!uFnClearReadAchievementsCompleteDelegate)
	{
		uFnClearReadAchievementsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadAchievementsCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearReadAchievementsCompleteDelegate_Params ClearReadAchievementsCompleteDelegate_Params;
	memset(&ClearReadAchievementsCompleteDelegate_Params, 0, sizeof(ClearReadAchievementsCompleteDelegate_Params));
	memcpy_s(&ClearReadAchievementsCompleteDelegate_Params.LocalUserNum, sizeof(ClearReadAchievementsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearReadAchievementsCompleteDelegate_Params.InDelegate, sizeof(ClearReadAchievementsCompleteDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnClearReadAchievementsCompleteDelegate, &ClearReadAchievementsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUnlockAchievementCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearUnlockAchievementCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearUnlockAchievementCompleteDelegate = nullptr;

	if (!uFnClearUnlockAchievementCompleteDelegate)
	{
		uFnClearUnlockAchievementCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUnlockAchievementCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearUnlockAchievementCompleteDelegate_Params ClearUnlockAchievementCompleteDelegate_Params;
	memset(&ClearUnlockAchievementCompleteDelegate_Params, 0, sizeof(ClearUnlockAchievementCompleteDelegate_Params));
	memcpy_s(&ClearUnlockAchievementCompleteDelegate_Params.LocalUserNum, sizeof(ClearUnlockAchievementCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearUnlockAchievementCompleteDelegate_Params.InDelegate, sizeof(ClearUnlockAchievementCompleteDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnClearUnlockAchievementCompleteDelegate, &ClearUnlockAchievementCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadAchievementsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddReadAchievementsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddReadAchievementsCompleteDelegate = nullptr;

	if (!uFnAddReadAchievementsCompleteDelegate)
	{
		uFnAddReadAchievementsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadAchievementsCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddReadAchievementsCompleteDelegate_Params AddReadAchievementsCompleteDelegate_Params;
	memset(&AddReadAchievementsCompleteDelegate_Params, 0, sizeof(AddReadAchievementsCompleteDelegate_Params));
	memcpy_s(&AddReadAchievementsCompleteDelegate_Params.LocalUserNum, sizeof(AddReadAchievementsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddReadAchievementsCompleteDelegate_Params.InDelegate, sizeof(AddReadAchievementsCompleteDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnAddReadAchievementsCompleteDelegate, &AddReadAchievementsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUnlockAchievementCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddUnlockAchievementCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddUnlockAchievementCompleteDelegate = nullptr;

	if (!uFnAddUnlockAchievementCompleteDelegate)
	{
		uFnAddUnlockAchievementCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUnlockAchievementCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddUnlockAchievementCompleteDelegate_Params AddUnlockAchievementCompleteDelegate_Params;
	memset(&AddUnlockAchievementCompleteDelegate_Params, 0, sizeof(AddUnlockAchievementCompleteDelegate_Params));
	memcpy_s(&AddUnlockAchievementCompleteDelegate_Params.LocalUserNum, sizeof(AddUnlockAchievementCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddUnlockAchievementCompleteDelegate_Params.InDelegate, sizeof(AddUnlockAchievementCompleteDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnAddUnlockAchievementCompleteDelegate, &AddUnlockAchievementCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadAchievementsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        TitleId                        (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnReadAchievementsComplete(int32_t TitleId)
{
	static UFunction* uFnOnReadAchievementsComplete = nullptr;

	if (!uFnOnReadAchievementsComplete)
	{
		uFnOnReadAchievementsComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadAchievementsComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnReadAchievementsComplete_Params OnReadAchievementsComplete_Params;
	memset(&OnReadAchievementsComplete_Params, 0, sizeof(OnReadAchievementsComplete_Params));
	memcpy_s(&OnReadAchievementsComplete_Params.TitleId, sizeof(OnReadAchievementsComplete_Params.TitleId), &TitleId, sizeof(TitleId));

	this->ProcessEvent(uFnOnReadAchievementsComplete, &OnReadAchievementsComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUnlockAchievementComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnUnlockAchievementComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnUnlockAchievementComplete = nullptr;

	if (!uFnOnUnlockAchievementComplete)
	{
		uFnOnUnlockAchievementComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUnlockAchievementComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnUnlockAchievementComplete_Params OnUnlockAchievementComplete_Params;
	memset(&OnUnlockAchievementComplete_Params, 0, sizeof(OnUnlockAchievementComplete_Params));
	OnUnlockAchievementComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnUnlockAchievementComplete, &OnUnlockAchievementComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowControllerUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlinePlayerInterfaceEOS::ShowControllerUI()
{
	static UFunction* uFnShowControllerUI = nullptr;

	if (!uFnShowControllerUI)
	{
		uFnShowControllerUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowControllerUI");
	}

	UOnlinePlayerInterfaceEOS_execShowControllerUI_Params ShowControllerUI_Params;
	memset(&ShowControllerUI_Params, 0, sizeof(ShowControllerUI_Params));

	this->ProcessEvent(uFnShowControllerUI, &ShowControllerUI_Params, nullptr);

	return ShowControllerUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerLanguage
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class FString UOnlinePlayerInterfaceEOS::GetPlayerLanguage(uint8_t LocalUserNum)
{
	static UFunction* uFnGetPlayerLanguage = nullptr;

	if (!uFnGetPlayerLanguage)
	{
		uFnGetPlayerLanguage = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerLanguage");
	}

	UOnlinePlayerInterfaceEOS_execGetPlayerLanguage_Params GetPlayerLanguage_Params;
	memset(&GetPlayerLanguage_Params, 0, sizeof(GetPlayerLanguage_Params));
	memcpy_s(&GetPlayerLanguage_Params.LocalUserNum, sizeof(GetPlayerLanguage_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnGetPlayerLanguage, &GetPlayerLanguage_Params, nullptr);

	return GetPlayerLanguage_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowPlayersUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ShowPlayersUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowPlayersUI = nullptr;

	if (!uFnShowPlayersUI)
	{
		uFnShowPlayersUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowPlayersUI");
	}

	UOnlinePlayerInterfaceEOS_execShowPlayersUI_Params ShowPlayersUI_Params;
	memset(&ShowPlayersUI_Params, 0, sizeof(ShowPlayersUI_Params));
	memcpy_s(&ShowPlayersUI_Params.LocalUserNum, sizeof(ShowPlayersUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnShowPlayersUI, &ShowPlayersUI_Params, nullptr);

	return ShowPlayersUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearProfileDataChangedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ProfileDataChangedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearProfileDataChangedDelegate(uint8_t LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate)
{
	static UFunction* uFnClearProfileDataChangedDelegate = nullptr;

	if (!uFnClearProfileDataChangedDelegate)
	{
		uFnClearProfileDataChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearProfileDataChangedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearProfileDataChangedDelegate_Params ClearProfileDataChangedDelegate_Params;
	memset(&ClearProfileDataChangedDelegate_Params, 0, sizeof(ClearProfileDataChangedDelegate_Params));
	memcpy_s(&ClearProfileDataChangedDelegate_Params.LocalUserNum, sizeof(ClearProfileDataChangedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearProfileDataChangedDelegate_Params.ProfileDataChangedDelegate, sizeof(ClearProfileDataChangedDelegate_Params.ProfileDataChangedDelegate), &ProfileDataChangedDelegate, sizeof(ProfileDataChangedDelegate));

	this->ProcessEvent(uFnClearProfileDataChangedDelegate, &ClearProfileDataChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddProfileDataChangedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ProfileDataChangedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddProfileDataChangedDelegate(uint8_t LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate)
{
	static UFunction* uFnAddProfileDataChangedDelegate = nullptr;

	if (!uFnAddProfileDataChangedDelegate)
	{
		uFnAddProfileDataChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddProfileDataChangedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddProfileDataChangedDelegate_Params AddProfileDataChangedDelegate_Params;
	memset(&AddProfileDataChangedDelegate_Params, 0, sizeof(AddProfileDataChangedDelegate_Params));
	memcpy_s(&AddProfileDataChangedDelegate_Params.LocalUserNum, sizeof(AddProfileDataChangedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddProfileDataChangedDelegate_Params.ProfileDataChangedDelegate, sizeof(AddProfileDataChangedDelegate_Params.ProfileDataChangedDelegate), &ProfileDataChangedDelegate, sizeof(ProfileDataChangedDelegate));

	this->ProcessEvent(uFnAddProfileDataChangedDelegate, &AddProfileDataChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnProfileDataChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlinePlayerInterfaceEOS::OnProfileDataChanged()
{
	static UFunction* uFnOnProfileDataChanged = nullptr;

	if (!uFnOnProfileDataChanged)
	{
		uFnOnProfileDataChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnProfileDataChanged");
	}

	UOnlinePlayerInterfaceEOS_execOnProfileDataChanged_Params OnProfileDataChanged_Params;
	memset(&OnProfileDataChanged_Params, 0, sizeof(OnProfileDataChanged_Params));

	this->ProcessEvent(uFnOnProfileDataChanged, &OnProfileDataChanged_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnlockGamerPicture
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        PictureId                      (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::UnlockGamerPicture(uint8_t LocalUserNum, int32_t PictureId)
{
	static UFunction* uFnUnlockGamerPicture = nullptr;

	if (!uFnUnlockGamerPicture)
	{
		uFnUnlockGamerPicture = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnlockGamerPicture");
	}

	UOnlinePlayerInterfaceEOS_execUnlockGamerPicture_Params UnlockGamerPicture_Params;
	memset(&UnlockGamerPicture_Params, 0, sizeof(UnlockGamerPicture_Params));
	memcpy_s(&UnlockGamerPicture_Params.LocalUserNum, sizeof(UnlockGamerPicture_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&UnlockGamerPicture_Params.PictureId, sizeof(UnlockGamerPicture_Params.PictureId), &PictureId, sizeof(PictureId));

	this->ProcessEvent(uFnUnlockGamerPicture, &UnlockGamerPicture_Params, nullptr);

	return UnlockGamerPicture_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsDeviceValid
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        DeviceID                       (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::IsDeviceValid(int32_t DeviceID)
{
	static UFunction* uFnIsDeviceValid = nullptr;

	if (!uFnIsDeviceValid)
	{
		uFnIsDeviceValid = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsDeviceValid");
	}

	UOnlinePlayerInterfaceEOS_execIsDeviceValid_Params IsDeviceValid_Params;
	memset(&IsDeviceValid_Params, 0, sizeof(IsDeviceValid_Params));
	memcpy_s(&IsDeviceValid_Params.DeviceID, sizeof(IsDeviceValid_Params.DeviceID), &DeviceID, sizeof(DeviceID));

	this->ProcessEvent(uFnIsDeviceValid, &IsDeviceValid_Params, nullptr);

	return IsDeviceValid_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetDeviceSelectionResults
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  DeviceName                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

int32_t UOnlinePlayerInterfaceEOS::GetDeviceSelectionResults(uint8_t LocalUserNum, class FString& DeviceName)
{
	static UFunction* uFnGetDeviceSelectionResults = nullptr;

	if (!uFnGetDeviceSelectionResults)
	{
		uFnGetDeviceSelectionResults = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetDeviceSelectionResults");
	}

	UOnlinePlayerInterfaceEOS_execGetDeviceSelectionResults_Params GetDeviceSelectionResults_Params;
	memset(&GetDeviceSelectionResults_Params, 0, sizeof(GetDeviceSelectionResults_Params));
	memcpy_s(&GetDeviceSelectionResults_Params.LocalUserNum, sizeof(GetDeviceSelectionResults_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&GetDeviceSelectionResults_Params.DeviceName, sizeof(GetDeviceSelectionResults_Params.DeviceName), &DeviceName, sizeof(DeviceName));

	this->ProcessEvent(uFnGetDeviceSelectionResults, &GetDeviceSelectionResults_Params, nullptr);

	memcpy_s(&DeviceName, sizeof(DeviceName), &GetDeviceSelectionResults_Params.DeviceName, sizeof(GetDeviceSelectionResults_Params.DeviceName));

	return GetDeviceSelectionResults_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearDeviceSelectionDoneDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearDeviceSelectionDoneDelegate(uint8_t LocalUserNum, struct FScriptDelegate DeviceDelegate)
{
	static UFunction* uFnClearDeviceSelectionDoneDelegate = nullptr;

	if (!uFnClearDeviceSelectionDoneDelegate)
	{
		uFnClearDeviceSelectionDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearDeviceSelectionDoneDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearDeviceSelectionDoneDelegate_Params ClearDeviceSelectionDoneDelegate_Params;
	memset(&ClearDeviceSelectionDoneDelegate_Params, 0, sizeof(ClearDeviceSelectionDoneDelegate_Params));
	memcpy_s(&ClearDeviceSelectionDoneDelegate_Params.LocalUserNum, sizeof(ClearDeviceSelectionDoneDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearDeviceSelectionDoneDelegate_Params.DeviceDelegate, sizeof(ClearDeviceSelectionDoneDelegate_Params.DeviceDelegate), &DeviceDelegate, sizeof(DeviceDelegate));

	this->ProcessEvent(uFnClearDeviceSelectionDoneDelegate, &ClearDeviceSelectionDoneDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddDeviceSelectionDoneDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddDeviceSelectionDoneDelegate(uint8_t LocalUserNum, struct FScriptDelegate DeviceDelegate)
{
	static UFunction* uFnAddDeviceSelectionDoneDelegate = nullptr;

	if (!uFnAddDeviceSelectionDoneDelegate)
	{
		uFnAddDeviceSelectionDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddDeviceSelectionDoneDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddDeviceSelectionDoneDelegate_Params AddDeviceSelectionDoneDelegate_Params;
	memset(&AddDeviceSelectionDoneDelegate_Params, 0, sizeof(AddDeviceSelectionDoneDelegate_Params));
	memcpy_s(&AddDeviceSelectionDoneDelegate_Params.LocalUserNum, sizeof(AddDeviceSelectionDoneDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddDeviceSelectionDoneDelegate_Params.DeviceDelegate, sizeof(AddDeviceSelectionDoneDelegate_Params.DeviceDelegate), &DeviceDelegate, sizeof(DeviceDelegate));

	this->ProcessEvent(uFnAddDeviceSelectionDoneDelegate, &AddDeviceSelectionDoneDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnDeviceSelectionComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnDeviceSelectionComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnDeviceSelectionComplete = nullptr;

	if (!uFnOnDeviceSelectionComplete)
	{
		uFnOnDeviceSelectionComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnDeviceSelectionComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnDeviceSelectionComplete_Params OnDeviceSelectionComplete_Params;
	memset(&OnDeviceSelectionComplete_Params, 0, sizeof(OnDeviceSelectionComplete_Params));
	OnDeviceSelectionComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnDeviceSelectionComplete, &OnDeviceSelectionComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowDeviceSelectionUI
// [0x00024001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        SizeNeeded                     (CPF_Parm)
// bool                           bForceShowUI                   (CPF_OptionalParm | CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ShowDeviceSelectionUI(uint8_t LocalUserNum, int32_t SizeNeeded, bool bForceShowUI)
{
	static UFunction* uFnShowDeviceSelectionUI = nullptr;

	if (!uFnShowDeviceSelectionUI)
	{
		uFnShowDeviceSelectionUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowDeviceSelectionUI");
	}

	UOnlinePlayerInterfaceEOS_execShowDeviceSelectionUI_Params ShowDeviceSelectionUI_Params;
	memset(&ShowDeviceSelectionUI_Params, 0, sizeof(ShowDeviceSelectionUI_Params));
	memcpy_s(&ShowDeviceSelectionUI_Params.LocalUserNum, sizeof(ShowDeviceSelectionUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowDeviceSelectionUI_Params.SizeNeeded, sizeof(ShowDeviceSelectionUI_Params.SizeNeeded), &SizeNeeded, sizeof(SizeNeeded));
	ShowDeviceSelectionUI_Params.bForceShowUI = bForceShowUI;

	this->ProcessEvent(uFnShowDeviceSelectionUI, &ShowDeviceSelectionUI_Params, nullptr);

	return ShowDeviceSelectionUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowCustomPlayersUI
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  Title                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Description                    (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FUniqueNetId>    Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::ShowCustomPlayersUI(uint8_t LocalUserNum, class FString Title, class FString Description, TArray<struct FUniqueNetId>& Players)
{
	static UFunction* uFnShowCustomPlayersUI = nullptr;

	if (!uFnShowCustomPlayersUI)
	{
		uFnShowCustomPlayersUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowCustomPlayersUI");
	}

	UOnlinePlayerInterfaceEOS_execShowCustomPlayersUI_Params ShowCustomPlayersUI_Params;
	memset(&ShowCustomPlayersUI_Params, 0, sizeof(ShowCustomPlayersUI_Params));
	memcpy_s(&ShowCustomPlayersUI_Params.LocalUserNum, sizeof(ShowCustomPlayersUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowCustomPlayersUI_Params.Title, sizeof(ShowCustomPlayersUI_Params.Title), &Title, sizeof(Title));
	memcpy_s(&ShowCustomPlayersUI_Params.Description, sizeof(ShowCustomPlayersUI_Params.Description), &Description, sizeof(Description));
	memcpy_s(&ShowCustomPlayersUI_Params.Players, sizeof(ShowCustomPlayersUI_Params.Players), &Players, sizeof(Players));

	this->ProcessEvent(uFnShowCustomPlayersUI, &ShowCustomPlayersUI_Params, nullptr);

	memcpy_s(&Players, sizeof(Players), &ShowCustomPlayersUI_Params.Players, sizeof(ShowCustomPlayersUI_Params.Players));

	return ShowCustomPlayersUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsUserSwitchActive
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlinePlayerInterfaceEOS::IsUserSwitchActive()
{
	static UFunction* uFnIsUserSwitchActive = nullptr;

	if (!uFnIsUserSwitchActive)
	{
		uFnIsUserSwitchActive = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsUserSwitchActive");
	}

	UOnlinePlayerInterfaceEOS_execIsUserSwitchActive_Params IsUserSwitchActive_Params;
	memset(&IsUserSwitchActive_Params, 0, sizeof(IsUserSwitchActive_Params));

	this->ProcessEvent(uFnIsUserSwitchActive, &IsUserSwitchActive_Params, nullptr);

	return IsUserSwitchActive_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetKickPlayerDialogActive
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           Active                         (CPF_Parm)

void UOnlinePlayerInterfaceEOS::SetKickPlayerDialogActive(bool Active)
{
	static UFunction* uFnSetKickPlayerDialogActive = nullptr;

	if (!uFnSetKickPlayerDialogActive)
	{
		uFnSetKickPlayerDialogActive = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetKickPlayerDialogActive");
	}

	UOnlinePlayerInterfaceEOS_execSetKickPlayerDialogActive_Params SetKickPlayerDialogActive_Params;
	memset(&SetKickPlayerDialogActive_Params, 0, sizeof(SetKickPlayerDialogActive_Params));
	SetKickPlayerDialogActive_Params.Active = Active;

	this->ProcessEvent(uFnSetKickPlayerDialogActive, &SetKickPlayerDialogActive_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetKickPreviousUser
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::SetKickPreviousUser(uint8_t LocalUserNum)
{
	static UFunction* uFnSetKickPreviousUser = nullptr;

	if (!uFnSetKickPreviousUser)
	{
		uFnSetKickPreviousUser = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetKickPreviousUser");
	}

	UOnlinePlayerInterfaceEOS_execSetKickPreviousUser_Params SetKickPreviousUser_Params;
	memset(&SetKickPreviousUser_Params, 0, sizeof(SetKickPreviousUser_Params));
	memcpy_s(&SetKickPreviousUser_Params.LocalUserNum, sizeof(SetKickPreviousUser_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnSetKickPreviousUser, &SetKickPreviousUser_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowLoginUIForOrphanedUser
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ShowLoginUIForOrphanedUser(uint8_t LocalUserNum)
{
	static UFunction* uFnShowLoginUIForOrphanedUser = nullptr;

	if (!uFnShowLoginUIForOrphanedUser)
	{
		uFnShowLoginUIForOrphanedUser = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowLoginUIForOrphanedUser");
	}

	UOnlinePlayerInterfaceEOS_execShowLoginUIForOrphanedUser_Params ShowLoginUIForOrphanedUser_Params;
	memset(&ShowLoginUIForOrphanedUser_Params, 0, sizeof(ShowLoginUIForOrphanedUser_Params));
	memcpy_s(&ShowLoginUIForOrphanedUser_Params.LocalUserNum, sizeof(ShowLoginUIForOrphanedUser_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnShowLoginUIForOrphanedUser, &ShowLoginUIForOrphanedUser_Params, nullptr);

	return ShowLoginUIForOrphanedUser_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetSyncedAchievements
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// TArray<bool>                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

TArray<bool> UOnlinePlayerInterfaceEOS::GetSyncedAchievements(uint8_t LocalUserNum)
{
	static UFunction* uFnGetSyncedAchievements = nullptr;

	if (!uFnGetSyncedAchievements)
	{
		uFnGetSyncedAchievements = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetSyncedAchievements");
	}

	UOnlinePlayerInterfaceEOS_execGetSyncedAchievements_Params GetSyncedAchievements_Params;
	memset(&GetSyncedAchievements_Params, 0, sizeof(GetSyncedAchievements_Params));
	memcpy_s(&GetSyncedAchievements_Params.LocalUserNum, sizeof(GetSyncedAchievements_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnGetSyncedAchievements, &GetSyncedAchievements_Params, nullptr);

	return GetSyncedAchievements_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsGuestLogin
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::IsGuestLogin(uint8_t LocalUserNum)
{
	static UFunction* uFnIsGuestLogin = nullptr;

	if (!uFnIsGuestLogin)
	{
		uFnIsGuestLogin = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsGuestLogin");
	}

	UOnlinePlayerInterfaceEOS_execIsGuestLogin_Params IsGuestLogin_Params;
	memset(&IsGuestLogin_Params, 0, sizeof(IsGuestLogin_Params));
	memcpy_s(&IsGuestLogin_Params.LocalUserNum, sizeof(IsGuestLogin_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnIsGuestLogin, &IsGuestLogin_Params, nullptr);

	return IsGuestLogin_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RequestRestrictedFeatureMessaging
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// EFeaturePrivilege              RestrictedFeature              (CPF_Parm)

void UOnlinePlayerInterfaceEOS::RequestRestrictedFeatureMessaging(uint8_t LocalUserNum, EFeaturePrivilege RestrictedFeature)
{
	static UFunction* uFnRequestRestrictedFeatureMessaging = nullptr;

	if (!uFnRequestRestrictedFeatureMessaging)
	{
		uFnRequestRestrictedFeatureMessaging = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RequestRestrictedFeatureMessaging");
	}

	UOnlinePlayerInterfaceEOS_execRequestRestrictedFeatureMessaging_Params RequestRestrictedFeatureMessaging_Params;
	memset(&RequestRestrictedFeatureMessaging_Params, 0, sizeof(RequestRestrictedFeatureMessaging_Params));
	memcpy_s(&RequestRestrictedFeatureMessaging_Params.LocalUserNum, sizeof(RequestRestrictedFeatureMessaging_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&RequestRestrictedFeatureMessaging_Params.RestrictedFeature, sizeof(RequestRestrictedFeatureMessaging_Params.RestrictedFeature), &RestrictedFeature, sizeof(RestrictedFeature));

	this->ProcessEvent(uFnRequestRestrictedFeatureMessaging, &RequestRestrictedFeatureMessaging_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateVoice
// [0x00424001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanCommunicateVoice(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanCommunicateVoice = nullptr;

	if (!uFnCanCommunicateVoice)
	{
		uFnCanCommunicateVoice = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateVoice");
	}

	UOnlinePlayerInterfaceEOS_execCanCommunicateVoice_Params CanCommunicateVoice_Params;
	memset(&CanCommunicateVoice_Params, 0, sizeof(CanCommunicateVoice_Params));
	memcpy_s(&CanCommunicateVoice_Params.LocalUserNum, sizeof(CanCommunicateVoice_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanCommunicateVoice_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanCommunicateVoice_Params.Reason, sizeof(CanCommunicateVoice_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanCommunicateVoice_Params.PrivilegeLevelHint, sizeof(CanCommunicateVoice_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanCommunicateVoice, &CanCommunicateVoice_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanCommunicateVoice_Params.PrivilegeLevelHint, sizeof(CanCommunicateVoice_Params.PrivilegeLevelHint));

	return CanCommunicateVoice_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateVideo
// [0x00424001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanCommunicateVideo(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanCommunicateVideo = nullptr;

	if (!uFnCanCommunicateVideo)
	{
		uFnCanCommunicateVideo = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateVideo");
	}

	UOnlinePlayerInterfaceEOS_execCanCommunicateVideo_Params CanCommunicateVideo_Params;
	memset(&CanCommunicateVideo_Params, 0, sizeof(CanCommunicateVideo_Params));
	memcpy_s(&CanCommunicateVideo_Params.LocalUserNum, sizeof(CanCommunicateVideo_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanCommunicateVideo_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanCommunicateVideo_Params.Reason, sizeof(CanCommunicateVideo_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanCommunicateVideo_Params.PrivilegeLevelHint, sizeof(CanCommunicateVideo_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanCommunicateVideo, &CanCommunicateVideo_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanCommunicateVideo_Params.PrivilegeLevelHint, sizeof(CanCommunicateVideo_Params.PrivilegeLevelHint));

	return CanCommunicateVideo_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateText
// [0x00424001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanCommunicateText(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanCommunicateText = nullptr;

	if (!uFnCanCommunicateText)
	{
		uFnCanCommunicateText = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateText");
	}

	UOnlinePlayerInterfaceEOS_execCanCommunicateText_Params CanCommunicateText_Params;
	memset(&CanCommunicateText_Params, 0, sizeof(CanCommunicateText_Params));
	memcpy_s(&CanCommunicateText_Params.LocalUserNum, sizeof(CanCommunicateText_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanCommunicateText_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanCommunicateText_Params.Reason, sizeof(CanCommunicateText_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanCommunicateText_Params.PrivilegeLevelHint, sizeof(CanCommunicateText_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanCommunicateText, &CanCommunicateText_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanCommunicateText_Params.PrivilegeLevelHint, sizeof(CanCommunicateText_Params.PrivilegeLevelHint));

	return CanCommunicateText_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareUserCreatedContent
// [0x00424001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanShareUserCreatedContent(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanShareUserCreatedContent = nullptr;

	if (!uFnCanShareUserCreatedContent)
	{
		uFnCanShareUserCreatedContent = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareUserCreatedContent");
	}

	UOnlinePlayerInterfaceEOS_execCanShareUserCreatedContent_Params CanShareUserCreatedContent_Params;
	memset(&CanShareUserCreatedContent_Params, 0, sizeof(CanShareUserCreatedContent_Params));
	memcpy_s(&CanShareUserCreatedContent_Params.LocalUserNum, sizeof(CanShareUserCreatedContent_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanShareUserCreatedContent_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanShareUserCreatedContent_Params.Reason, sizeof(CanShareUserCreatedContent_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanShareUserCreatedContent_Params.PrivilegeLevelHint, sizeof(CanShareUserCreatedContent_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanShareUserCreatedContent, &CanShareUserCreatedContent_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanShareUserCreatedContent_Params.PrivilegeLevelHint, sizeof(CanShareUserCreatedContent_Params.PrivilegeLevelHint));

	return CanShareUserCreatedContent_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanAccessPremiumVideoContent
// [0x00424001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanAccessPremiumVideoContent(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanAccessPremiumVideoContent = nullptr;

	if (!uFnCanAccessPremiumVideoContent)
	{
		uFnCanAccessPremiumVideoContent = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanAccessPremiumVideoContent");
	}

	UOnlinePlayerInterfaceEOS_execCanAccessPremiumVideoContent_Params CanAccessPremiumVideoContent_Params;
	memset(&CanAccessPremiumVideoContent_Params, 0, sizeof(CanAccessPremiumVideoContent_Params));
	memcpy_s(&CanAccessPremiumVideoContent_Params.LocalUserNum, sizeof(CanAccessPremiumVideoContent_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanAccessPremiumVideoContent_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanAccessPremiumVideoContent_Params.Reason, sizeof(CanAccessPremiumVideoContent_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanAccessPremiumVideoContent_Params.PrivilegeLevelHint, sizeof(CanAccessPremiumVideoContent_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanAccessPremiumVideoContent, &CanAccessPremiumVideoContent_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanAccessPremiumVideoContent_Params.PrivilegeLevelHint, sizeof(CanAccessPremiumVideoContent_Params.PrivilegeLevelHint));

	return CanAccessPremiumVideoContent_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanAccessPremiumContent
// [0x00424001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanAccessPremiumContent(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanAccessPremiumContent = nullptr;

	if (!uFnCanAccessPremiumContent)
	{
		uFnCanAccessPremiumContent = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanAccessPremiumContent");
	}

	UOnlinePlayerInterfaceEOS_execCanAccessPremiumContent_Params CanAccessPremiumContent_Params;
	memset(&CanAccessPremiumContent_Params, 0, sizeof(CanAccessPremiumContent_Params));
	memcpy_s(&CanAccessPremiumContent_Params.LocalUserNum, sizeof(CanAccessPremiumContent_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanAccessPremiumContent_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanAccessPremiumContent_Params.Reason, sizeof(CanAccessPremiumContent_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanAccessPremiumContent_Params.PrivilegeLevelHint, sizeof(CanAccessPremiumContent_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanAccessPremiumContent, &CanAccessPremiumContent_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanAccessPremiumContent_Params.PrivilegeLevelHint, sizeof(CanAccessPremiumContent_Params.PrivilegeLevelHint));

	return CanAccessPremiumContent_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanUseCloudStorage
// [0x00424001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanUseCloudStorage(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanUseCloudStorage = nullptr;

	if (!uFnCanUseCloudStorage)
	{
		uFnCanUseCloudStorage = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanUseCloudStorage");
	}

	UOnlinePlayerInterfaceEOS_execCanUseCloudStorage_Params CanUseCloudStorage_Params;
	memset(&CanUseCloudStorage_Params, 0, sizeof(CanUseCloudStorage_Params));
	memcpy_s(&CanUseCloudStorage_Params.LocalUserNum, sizeof(CanUseCloudStorage_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanUseCloudStorage_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanUseCloudStorage_Params.Reason, sizeof(CanUseCloudStorage_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanUseCloudStorage_Params.PrivilegeLevelHint, sizeof(CanUseCloudStorage_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanUseCloudStorage, &CanUseCloudStorage_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanUseCloudStorage_Params.PrivilegeLevelHint, sizeof(CanUseCloudStorage_Params.PrivilegeLevelHint));

	return CanUseCloudStorage_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanRecordDVRClips
// [0x00424001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanRecordDVRClips(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanRecordDVRClips = nullptr;

	if (!uFnCanRecordDVRClips)
	{
		uFnCanRecordDVRClips = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanRecordDVRClips");
	}

	UOnlinePlayerInterfaceEOS_execCanRecordDVRClips_Params CanRecordDVRClips_Params;
	memset(&CanRecordDVRClips_Params, 0, sizeof(CanRecordDVRClips_Params));
	memcpy_s(&CanRecordDVRClips_Params.LocalUserNum, sizeof(CanRecordDVRClips_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanRecordDVRClips_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanRecordDVRClips_Params.Reason, sizeof(CanRecordDVRClips_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanRecordDVRClips_Params.PrivilegeLevelHint, sizeof(CanRecordDVRClips_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanRecordDVRClips, &CanRecordDVRClips_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanRecordDVRClips_Params.PrivilegeLevelHint, sizeof(CanRecordDVRClips_Params.PrivilegeLevelHint));

	return CanRecordDVRClips_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanBrowseInternet
// [0x00424001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanBrowseInternet(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanBrowseInternet = nullptr;

	if (!uFnCanBrowseInternet)
	{
		uFnCanBrowseInternet = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanBrowseInternet");
	}

	UOnlinePlayerInterfaceEOS_execCanBrowseInternet_Params CanBrowseInternet_Params;
	memset(&CanBrowseInternet_Params, 0, sizeof(CanBrowseInternet_Params));
	memcpy_s(&CanBrowseInternet_Params.LocalUserNum, sizeof(CanBrowseInternet_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanBrowseInternet_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanBrowseInternet_Params.Reason, sizeof(CanBrowseInternet_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanBrowseInternet_Params.PrivilegeLevelHint, sizeof(CanBrowseInternet_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanBrowseInternet, &CanBrowseInternet_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanBrowseInternet_Params.PrivilegeLevelHint, sizeof(CanBrowseInternet_Params.PrivilegeLevelHint));

	return CanBrowseInternet_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareWithSocialNetwork
// [0x00424001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanShareWithSocialNetwork(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanShareWithSocialNetwork = nullptr;

	if (!uFnCanShareWithSocialNetwork)
	{
		uFnCanShareWithSocialNetwork = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareWithSocialNetwork");
	}

	UOnlinePlayerInterfaceEOS_execCanShareWithSocialNetwork_Params CanShareWithSocialNetwork_Params;
	memset(&CanShareWithSocialNetwork_Params, 0, sizeof(CanShareWithSocialNetwork_Params));
	memcpy_s(&CanShareWithSocialNetwork_Params.LocalUserNum, sizeof(CanShareWithSocialNetwork_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanShareWithSocialNetwork_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanShareWithSocialNetwork_Params.Reason, sizeof(CanShareWithSocialNetwork_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanShareWithSocialNetwork_Params.PrivilegeLevelHint, sizeof(CanShareWithSocialNetwork_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanShareWithSocialNetwork, &CanShareWithSocialNetwork_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanShareWithSocialNetwork_Params.PrivilegeLevelHint, sizeof(CanShareWithSocialNetwork_Params.PrivilegeLevelHint));

	return CanShareWithSocialNetwork_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareKinectContent
// [0x00424001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanShareKinectContent(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanShareKinectContent = nullptr;

	if (!uFnCanShareKinectContent)
	{
		uFnCanShareKinectContent = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareKinectContent");
	}

	UOnlinePlayerInterfaceEOS_execCanShareKinectContent_Params CanShareKinectContent_Params;
	memset(&CanShareKinectContent_Params, 0, sizeof(CanShareKinectContent_Params));
	memcpy_s(&CanShareKinectContent_Params.LocalUserNum, sizeof(CanShareKinectContent_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanShareKinectContent_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanShareKinectContent_Params.Reason, sizeof(CanShareKinectContent_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanShareKinectContent_Params.PrivilegeLevelHint, sizeof(CanShareKinectContent_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanShareKinectContent, &CanShareKinectContent_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanShareKinectContent_Params.PrivilegeLevelHint, sizeof(CanShareKinectContent_Params.PrivilegeLevelHint));

	return CanShareKinectContent_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanUploadFitnessData
// [0x00424001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanUploadFitnessData(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanUploadFitnessData = nullptr;

	if (!uFnCanUploadFitnessData)
	{
		uFnCanUploadFitnessData = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanUploadFitnessData");
	}

	UOnlinePlayerInterfaceEOS_execCanUploadFitnessData_Params CanUploadFitnessData_Params;
	memset(&CanUploadFitnessData_Params, 0, sizeof(CanUploadFitnessData_Params));
	memcpy_s(&CanUploadFitnessData_Params.LocalUserNum, sizeof(CanUploadFitnessData_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanUploadFitnessData_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanUploadFitnessData_Params.Reason, sizeof(CanUploadFitnessData_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanUploadFitnessData_Params.PrivilegeLevelHint, sizeof(CanUploadFitnessData_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanUploadFitnessData, &CanUploadFitnessData_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanUploadFitnessData_Params.PrivilegeLevelHint, sizeof(CanUploadFitnessData_Params.PrivilegeLevelHint));

	return CanUploadFitnessData_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetPrimaryPlayerGamepadToLastInput
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlinePlayerInterfaceEOS::SetPrimaryPlayerGamepadToLastInput()
{
	static UFunction* uFnSetPrimaryPlayerGamepadToLastInput = nullptr;

	if (!uFnSetPrimaryPlayerGamepadToLastInput)
	{
		uFnSetPrimaryPlayerGamepadToLastInput = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetPrimaryPlayerGamepadToLastInput");
	}

	UOnlinePlayerInterfaceEOS_execSetPrimaryPlayerGamepadToLastInput_Params SetPrimaryPlayerGamepadToLastInput_Params;
	memset(&SetPrimaryPlayerGamepadToLastInput_Params, 0, sizeof(SetPrimaryPlayerGamepadToLastInput_Params));

	this->ProcessEvent(uFnSetPrimaryPlayerGamepadToLastInput, &SetPrimaryPlayerGamepadToLastInput_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUserSwitchCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UserSwitchCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearUserSwitchCompleteDelegate(struct FScriptDelegate UserSwitchCompleteDelegate)
{
	static UFunction* uFnClearUserSwitchCompleteDelegate = nullptr;

	if (!uFnClearUserSwitchCompleteDelegate)
	{
		uFnClearUserSwitchCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUserSwitchCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearUserSwitchCompleteDelegate_Params ClearUserSwitchCompleteDelegate_Params;
	memset(&ClearUserSwitchCompleteDelegate_Params, 0, sizeof(ClearUserSwitchCompleteDelegate_Params));
	memcpy_s(&ClearUserSwitchCompleteDelegate_Params.UserSwitchCompleteDelegate, sizeof(ClearUserSwitchCompleteDelegate_Params.UserSwitchCompleteDelegate), &UserSwitchCompleteDelegate, sizeof(UserSwitchCompleteDelegate));

	this->ProcessEvent(uFnClearUserSwitchCompleteDelegate, &ClearUserSwitchCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUserSwitchCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UserSwitchCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddUserSwitchCompleteDelegate(struct FScriptDelegate UserSwitchCompleteDelegate)
{
	static UFunction* uFnAddUserSwitchCompleteDelegate = nullptr;

	if (!uFnAddUserSwitchCompleteDelegate)
	{
		uFnAddUserSwitchCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUserSwitchCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddUserSwitchCompleteDelegate_Params AddUserSwitchCompleteDelegate_Params;
	memset(&AddUserSwitchCompleteDelegate_Params, 0, sizeof(AddUserSwitchCompleteDelegate_Params));
	memcpy_s(&AddUserSwitchCompleteDelegate_Params.UserSwitchCompleteDelegate, sizeof(AddUserSwitchCompleteDelegate_Params.UserSwitchCompleteDelegate), &UserSwitchCompleteDelegate, sizeof(UserSwitchCompleteDelegate));

	this->ProcessEvent(uFnAddUserSwitchCompleteDelegate, &AddUserSwitchCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUserSwitchComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnUserSwitchComplete(uint8_t LocalUserNum)
{
	static UFunction* uFnOnUserSwitchComplete = nullptr;

	if (!uFnOnUserSwitchComplete)
	{
		uFnOnUserSwitchComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUserSwitchComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnUserSwitchComplete_Params OnUserSwitchComplete_Params;
	memset(&OnUserSwitchComplete_Params, 0, sizeof(OnUserSwitchComplete_Params));
	memcpy_s(&OnUserSwitchComplete_Params.LocalUserNum, sizeof(OnUserSwitchComplete_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnOnUserSwitchComplete, &OnUserSwitchComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginStatusChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::ClearLoginStatusChangeDelegate(struct FScriptDelegate InDelegate, uint8_t LocalUserNum)
{
	static UFunction* uFnClearLoginStatusChangeDelegate = nullptr;

	if (!uFnClearLoginStatusChangeDelegate)
	{
		uFnClearLoginStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginStatusChangeDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearLoginStatusChangeDelegate_Params ClearLoginStatusChangeDelegate_Params;
	memset(&ClearLoginStatusChangeDelegate_Params, 0, sizeof(ClearLoginStatusChangeDelegate_Params));
	memcpy_s(&ClearLoginStatusChangeDelegate_Params.InDelegate, sizeof(ClearLoginStatusChangeDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));
	memcpy_s(&ClearLoginStatusChangeDelegate_Params.LocalUserNum, sizeof(ClearLoginStatusChangeDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnClearLoginStatusChangeDelegate, &ClearLoginStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginStatusChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::AddLoginStatusChangeDelegate(struct FScriptDelegate InDelegate, uint8_t LocalUserNum)
{
	static UFunction* uFnAddLoginStatusChangeDelegate = nullptr;

	if (!uFnAddLoginStatusChangeDelegate)
	{
		uFnAddLoginStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginStatusChangeDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddLoginStatusChangeDelegate_Params AddLoginStatusChangeDelegate_Params;
	memset(&AddLoginStatusChangeDelegate_Params, 0, sizeof(AddLoginStatusChangeDelegate_Params));
	memcpy_s(&AddLoginStatusChangeDelegate_Params.InDelegate, sizeof(AddLoginStatusChangeDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));
	memcpy_s(&AddLoginStatusChangeDelegate_Params.LocalUserNum, sizeof(AddLoginStatusChangeDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnAddLoginStatusChangeDelegate, &AddLoginStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginStatusChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// ELoginStatus                   NewStatus                      (CPF_Parm)
// struct FUniqueNetId            NewId                          (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnLoginStatusChange(ELoginStatus NewStatus, struct FUniqueNetId NewId)
{
	static UFunction* uFnOnLoginStatusChange = nullptr;

	if (!uFnOnLoginStatusChange)
	{
		uFnOnLoginStatusChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginStatusChange");
	}

	UOnlinePlayerInterfaceEOS_execOnLoginStatusChange_Params OnLoginStatusChange_Params;
	memset(&OnLoginStatusChange_Params, 0, sizeof(OnLoginStatusChange_Params));
	memcpy_s(&OnLoginStatusChange_Params.NewStatus, sizeof(OnLoginStatusChange_Params.NewStatus), &NewStatus, sizeof(NewStatus));
	memcpy_s(&OnLoginStatusChange_Params.NewId, sizeof(OnLoginStatusChange_Params.NewId), &NewId, sizeof(NewId));

	this->ProcessEvent(uFnOnLoginStatusChange, &OnLoginStatusChange_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayHistoryRegistrationKey
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// TArray<uint8_t>                Key                            (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::GetPlayHistoryRegistrationKey(TArray<uint8_t>& Key)
{
	static UFunction* uFnGetPlayHistoryRegistrationKey = nullptr;

	if (!uFnGetPlayHistoryRegistrationKey)
	{
		uFnGetPlayHistoryRegistrationKey = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayHistoryRegistrationKey");
	}

	UOnlinePlayerInterfaceEOS_execGetPlayHistoryRegistrationKey_Params GetPlayHistoryRegistrationKey_Params;
	memset(&GetPlayHistoryRegistrationKey_Params, 0, sizeof(GetPlayHistoryRegistrationKey_Params));
	memcpy_s(&GetPlayHistoryRegistrationKey_Params.Key, sizeof(GetPlayHistoryRegistrationKey_Params.Key), &Key, sizeof(Key));

	this->ProcessEvent(uFnGetPlayHistoryRegistrationKey, &GetPlayHistoryRegistrationKey_Params, nullptr);

	memcpy_s(&Key, sizeof(Key), &GetPlayHistoryRegistrationKey_Params.Key, sizeof(GetPlayHistoryRegistrationKey_Params.Key));

	return GetPlayHistoryRegistrationKey_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CheckParentalControlInfo
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// bool                           bShowUi                        (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::CheckParentalControlInfo(bool bShowUi)
{
	static UFunction* uFnCheckParentalControlInfo = nullptr;

	if (!uFnCheckParentalControlInfo)
	{
		uFnCheckParentalControlInfo = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CheckParentalControlInfo");
	}

	UOnlinePlayerInterfaceEOS_execCheckParentalControlInfo_Params CheckParentalControlInfo_Params;
	memset(&CheckParentalControlInfo_Params, 0, sizeof(CheckParentalControlInfo_Params));
	CheckParentalControlInfo_Params.bShowUi = bShowUi;

	this->ProcessEvent(uFnCheckParentalControlInfo, &CheckParentalControlInfo_Params, nullptr);

	return CheckParentalControlInfo_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetActiveDiscDLC
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// TArray<struct FName>           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<struct FName> UOnlinePlayerInterfaceEOS::GetActiveDiscDLC()
{
	static UFunction* uFnGetActiveDiscDLC = nullptr;

	if (!uFnGetActiveDiscDLC)
	{
		uFnGetActiveDiscDLC = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetActiveDiscDLC");
	}

	UOnlinePlayerInterfaceEOS_execGetActiveDiscDLC_Params GetActiveDiscDLC_Params;
	memset(&GetActiveDiscDLC_Params, 0, sizeof(GetActiveDiscDLC_Params));

	this->ProcessEvent(uFnGetActiveDiscDLC, &GetActiveDiscDLC_Params, nullptr);

	return GetActiveDiscDLC_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetOnlineSubscriptionRequirement
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bRequiresOnlineSubscription    (CPF_Parm)

void UOnlinePlayerInterfaceEOS::SetOnlineSubscriptionRequirement(bool bRequiresOnlineSubscription)
{
	static UFunction* uFnSetOnlineSubscriptionRequirement = nullptr;

	if (!uFnSetOnlineSubscriptionRequirement)
	{
		uFnSetOnlineSubscriptionRequirement = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetOnlineSubscriptionRequirement");
	}

	UOnlinePlayerInterfaceEOS_execSetOnlineSubscriptionRequirement_Params SetOnlineSubscriptionRequirement_Params;
	memset(&SetOnlineSubscriptionRequirement_Params, 0, sizeof(SetOnlineSubscriptionRequirement_Params));
	SetOnlineSubscriptionRequirement_Params.bRequiresOnlineSubscription = bRequiresOnlineSubscription;

	this->ProcessEvent(uFnSetOnlineSubscriptionRequirement, &SetOnlineSubscriptionRequirement_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetControllerID
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        LocalPlayerNum                 (CPF_Parm)

int32_t UOnlinePlayerInterfaceEOS::GetControllerID(int32_t LocalPlayerNum)
{
	static UFunction* uFnGetControllerID = nullptr;

	if (!uFnGetControllerID)
	{
		uFnGetControllerID = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetControllerID");
	}

	UOnlinePlayerInterfaceEOS_execGetControllerID_Params GetControllerID_Params;
	memset(&GetControllerID_Params, 0, sizeof(GetControllerID_Params));
	memcpy_s(&GetControllerID_Params.LocalPlayerNum, sizeof(GetControllerID_Params.LocalPlayerNum), &LocalPlayerNum, sizeof(LocalPlayerNum));

	this->ProcessEvent(uFnGetControllerID, &GetControllerID_Params, nullptr);

	return GetControllerID_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetConnectedControllerNames
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// TArray<struct FName>           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<struct FName> UOnlinePlayerInterfaceEOS::GetConnectedControllerNames()
{
	static UFunction* uFnGetConnectedControllerNames = nullptr;

	if (!uFnGetConnectedControllerNames)
	{
		uFnGetConnectedControllerNames = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetConnectedControllerNames");
	}

	UOnlinePlayerInterfaceEOS_execGetConnectedControllerNames_Params GetConnectedControllerNames_Params;
	memset(&GetConnectedControllerNames_Params, 0, sizeof(GetConnectedControllerNames_Params));

	this->ProcessEvent(uFnGetConnectedControllerNames, &GetConnectedControllerNames_Params, nullptr);

	return GetConnectedControllerNames_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLocalPlayerRemoved
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LocalPlayerNum                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnLocalPlayerRemoved(int32_t LocalPlayerNum)
{
	static UFunction* uFnOnLocalPlayerRemoved = nullptr;

	if (!uFnOnLocalPlayerRemoved)
	{
		uFnOnLocalPlayerRemoved = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLocalPlayerRemoved");
	}

	UOnlinePlayerInterfaceEOS_execOnLocalPlayerRemoved_Params OnLocalPlayerRemoved_Params;
	memset(&OnLocalPlayerRemoved_Params, 0, sizeof(OnLocalPlayerRemoved_Params));
	memcpy_s(&OnLocalPlayerRemoved_Params.LocalPlayerNum, sizeof(OnLocalPlayerRemoved_Params.LocalPlayerNum), &LocalPlayerNum, sizeof(LocalPlayerNum));

	this->ProcessEvent(uFnOnLocalPlayerRemoved, &OnLocalPlayerRemoved_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnregisterController
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LocalPlayerNum                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::UnregisterController(int32_t LocalPlayerNum)
{
	static UFunction* uFnUnregisterController = nullptr;

	if (!uFnUnregisterController)
	{
		uFnUnregisterController = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnregisterController");
	}

	UOnlinePlayerInterfaceEOS_execUnregisterController_Params UnregisterController_Params;
	memset(&UnregisterController_Params, 0, sizeof(UnregisterController_Params));
	memcpy_s(&UnregisterController_Params.LocalPlayerNum, sizeof(UnregisterController_Params.LocalPlayerNum), &LocalPlayerNum, sizeof(LocalPlayerNum));

	this->ProcessEvent(uFnUnregisterController, &UnregisterController_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RegisterController
// [0x00024001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LocalPlayerNum                 (CPF_Parm)
// int32_t                        ControllerId                   (CPF_OptionalParm | CPF_Parm)

void UOnlinePlayerInterfaceEOS::RegisterController(int32_t LocalPlayerNum, int32_t ControllerId)
{
	static UFunction* uFnRegisterController = nullptr;

	if (!uFnRegisterController)
	{
		uFnRegisterController = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RegisterController");
	}

	UOnlinePlayerInterfaceEOS_execRegisterController_Params RegisterController_Params;
	memset(&RegisterController_Params, 0, sizeof(RegisterController_Params));
	memcpy_s(&RegisterController_Params.LocalPlayerNum, sizeof(RegisterController_Params.LocalPlayerNum), &LocalPlayerNum, sizeof(LocalPlayerNum));
	memcpy_s(&RegisterController_Params.ControllerId, sizeof(RegisterController_Params.ControllerId), &ControllerId, sizeof(ControllerId));

	this->ProcessEvent(uFnRegisterController, &RegisterController_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanRegisterController
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        LocalPlayerNum                 (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::CanRegisterController(int32_t LocalPlayerNum)
{
	static UFunction* uFnCanRegisterController = nullptr;

	if (!uFnCanRegisterController)
	{
		uFnCanRegisterController = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanRegisterController");
	}

	UOnlinePlayerInterfaceEOS_execCanRegisterController_Params CanRegisterController_Params;
	memset(&CanRegisterController_Params, 0, sizeof(CanRegisterController_Params));
	memcpy_s(&CanRegisterController_Params.LocalPlayerNum, sizeof(CanRegisterController_Params.LocalPlayerNum), &LocalPlayerNum, sizeof(LocalPlayerNum));

	this->ProcessEvent(uFnCanRegisterController, &CanRegisterController_Params, nullptr);

	return CanRegisterController_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowBindings
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ShowBindings(int32_t ControllerId)
{
	static UFunction* uFnShowBindings = nullptr;

	if (!uFnShowBindings)
	{
		uFnShowBindings = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowBindings");
	}

	UOnlinePlayerInterfaceEOS_execShowBindings_Params ShowBindings_Params;
	memset(&ShowBindings_Params, 0, sizeof(ShowBindings_Params));
	memcpy_s(&ShowBindings_Params.ControllerId, sizeof(ShowBindings_Params.ControllerId), &ControllerId, sizeof(ControllerId));

	this->ProcessEvent(uFnShowBindings, &ShowBindings_Params, nullptr);

	return ShowBindings_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetControllerLayout
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ControllerId                   (CPF_Parm)
// struct FName                   LayoutName                     (CPF_Parm)

void UOnlinePlayerInterfaceEOS::SetControllerLayout(int32_t ControllerId, struct FName LayoutName)
{
	static UFunction* uFnSetControllerLayout = nullptr;

	if (!uFnSetControllerLayout)
	{
		uFnSetControllerLayout = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetControllerLayout");
	}

	UOnlinePlayerInterfaceEOS_execSetControllerLayout_Params SetControllerLayout_Params;
	memset(&SetControllerLayout_Params, 0, sizeof(SetControllerLayout_Params));
	memcpy_s(&SetControllerLayout_Params.ControllerId, sizeof(SetControllerLayout_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	memcpy_s(&SetControllerLayout_Params.LayoutName, sizeof(SetControllerLayout_Params.LayoutName), &LayoutName, sizeof(LayoutName));

	this->ProcessEvent(uFnSetControllerLayout, &SetControllerLayout_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetInputAPI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EInputAPI                      TargetAPI                      (CPF_Parm)

void UOnlinePlayerInterfaceEOS::SetInputAPI(EInputAPI TargetAPI)
{
	static UFunction* uFnSetInputAPI = nullptr;

	if (!uFnSetInputAPI)
	{
		uFnSetInputAPI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetInputAPI");
	}

	UOnlinePlayerInterfaceEOS_execSetInputAPI_Params SetInputAPI_Params;
	memset(&SetInputAPI_Params, 0, sizeof(SetInputAPI_Params));
	memcpy_s(&SetInputAPI_Params.TargetAPI, sizeof(SetInputAPI_Params.TargetAPI), &TargetAPI, sizeof(TargetAPI));

	this->ProcessEvent(uFnSetInputAPI, &SetInputAPI_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearInputAPIChangedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InputAPIChangedDelegate        (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearInputAPIChangedDelegate(struct FScriptDelegate InputAPIChangedDelegate)
{
	static UFunction* uFnClearInputAPIChangedDelegate = nullptr;

	if (!uFnClearInputAPIChangedDelegate)
	{
		uFnClearInputAPIChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearInputAPIChangedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearInputAPIChangedDelegate_Params ClearInputAPIChangedDelegate_Params;
	memset(&ClearInputAPIChangedDelegate_Params, 0, sizeof(ClearInputAPIChangedDelegate_Params));
	memcpy_s(&ClearInputAPIChangedDelegate_Params.InputAPIChangedDelegate, sizeof(ClearInputAPIChangedDelegate_Params.InputAPIChangedDelegate), &InputAPIChangedDelegate, sizeof(InputAPIChangedDelegate));

	this->ProcessEvent(uFnClearInputAPIChangedDelegate, &ClearInputAPIChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddInputAPIChangedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InputAPIChangedDelegate        (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddInputAPIChangedDelegate(struct FScriptDelegate InputAPIChangedDelegate)
{
	static UFunction* uFnAddInputAPIChangedDelegate = nullptr;

	if (!uFnAddInputAPIChangedDelegate)
	{
		uFnAddInputAPIChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddInputAPIChangedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddInputAPIChangedDelegate_Params AddInputAPIChangedDelegate_Params;
	memset(&AddInputAPIChangedDelegate_Params, 0, sizeof(AddInputAPIChangedDelegate_Params));
	memcpy_s(&AddInputAPIChangedDelegate_Params.InputAPIChangedDelegate, sizeof(AddInputAPIChangedDelegate_Params.InputAPIChangedDelegate), &InputAPIChangedDelegate, sizeof(InputAPIChangedDelegate));

	this->ProcessEvent(uFnAddInputAPIChangedDelegate, &AddInputAPIChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnInputAPIChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// EInputAPI                      TargetAPI                      (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnInputAPIChanged(EInputAPI TargetAPI)
{
	static UFunction* uFnOnInputAPIChanged = nullptr;

	if (!uFnOnInputAPIChanged)
	{
		uFnOnInputAPIChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnInputAPIChanged");
	}

	UOnlinePlayerInterfaceEOS_execOnInputAPIChanged_Params OnInputAPIChanged_Params;
	memset(&OnInputAPIChanged_Params, 0, sizeof(OnInputAPIChanged_Params));
	memcpy_s(&OnInputAPIChanged_Params.TargetAPI, sizeof(OnInputAPIChanged_Params.TargetAPI), &TargetAPI, sizeof(TargetAPI));

	this->ProcessEvent(uFnOnInputAPIChanged, &OnInputAPIChanged_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUnregisteredControllerDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UnregisteredControllerDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearUnregisteredControllerDelegate(struct FScriptDelegate UnregisteredControllerDelegate)
{
	static UFunction* uFnClearUnregisteredControllerDelegate = nullptr;

	if (!uFnClearUnregisteredControllerDelegate)
	{
		uFnClearUnregisteredControllerDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUnregisteredControllerDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearUnregisteredControllerDelegate_Params ClearUnregisteredControllerDelegate_Params;
	memset(&ClearUnregisteredControllerDelegate_Params, 0, sizeof(ClearUnregisteredControllerDelegate_Params));
	memcpy_s(&ClearUnregisteredControllerDelegate_Params.UnregisteredControllerDelegate, sizeof(ClearUnregisteredControllerDelegate_Params.UnregisteredControllerDelegate), &UnregisteredControllerDelegate, sizeof(UnregisteredControllerDelegate));

	this->ProcessEvent(uFnClearUnregisteredControllerDelegate, &ClearUnregisteredControllerDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearRegisteredControllerDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RegisteredControllerDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearRegisteredControllerDelegate(struct FScriptDelegate RegisteredControllerDelegate)
{
	static UFunction* uFnClearRegisteredControllerDelegate = nullptr;

	if (!uFnClearRegisteredControllerDelegate)
	{
		uFnClearRegisteredControllerDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearRegisteredControllerDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearRegisteredControllerDelegate_Params ClearRegisteredControllerDelegate_Params;
	memset(&ClearRegisteredControllerDelegate_Params, 0, sizeof(ClearRegisteredControllerDelegate_Params));
	memcpy_s(&ClearRegisteredControllerDelegate_Params.RegisteredControllerDelegate, sizeof(ClearRegisteredControllerDelegate_Params.RegisteredControllerDelegate), &RegisteredControllerDelegate, sizeof(RegisteredControllerDelegate));

	this->ProcessEvent(uFnClearRegisteredControllerDelegate, &ClearRegisteredControllerDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUnregisteredControllerDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UnregisteredControllerDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddUnregisteredControllerDelegate(struct FScriptDelegate UnregisteredControllerDelegate)
{
	static UFunction* uFnAddUnregisteredControllerDelegate = nullptr;

	if (!uFnAddUnregisteredControllerDelegate)
	{
		uFnAddUnregisteredControllerDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUnregisteredControllerDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddUnregisteredControllerDelegate_Params AddUnregisteredControllerDelegate_Params;
	memset(&AddUnregisteredControllerDelegate_Params, 0, sizeof(AddUnregisteredControllerDelegate_Params));
	memcpy_s(&AddUnregisteredControllerDelegate_Params.UnregisteredControllerDelegate, sizeof(AddUnregisteredControllerDelegate_Params.UnregisteredControllerDelegate), &UnregisteredControllerDelegate, sizeof(UnregisteredControllerDelegate));

	this->ProcessEvent(uFnAddUnregisteredControllerDelegate, &AddUnregisteredControllerDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddRegisteredControllerDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RegisteredControllerDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddRegisteredControllerDelegate(struct FScriptDelegate RegisteredControllerDelegate)
{
	static UFunction* uFnAddRegisteredControllerDelegate = nullptr;

	if (!uFnAddRegisteredControllerDelegate)
	{
		uFnAddRegisteredControllerDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddRegisteredControllerDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddRegisteredControllerDelegate_Params AddRegisteredControllerDelegate_Params;
	memset(&AddRegisteredControllerDelegate_Params, 0, sizeof(AddRegisteredControllerDelegate_Params));
	memcpy_s(&AddRegisteredControllerDelegate_Params.RegisteredControllerDelegate, sizeof(AddRegisteredControllerDelegate_Params.RegisteredControllerDelegate), &RegisteredControllerDelegate, sizeof(RegisteredControllerDelegate));

	this->ProcessEvent(uFnAddRegisteredControllerDelegate, &AddRegisteredControllerDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUnregisteredController
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LocalPlayerNum                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnUnregisteredController(int32_t LocalPlayerNum)
{
	static UFunction* uFnOnUnregisteredController = nullptr;

	if (!uFnOnUnregisteredController)
	{
		uFnOnUnregisteredController = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUnregisteredController");
	}

	UOnlinePlayerInterfaceEOS_execOnUnregisteredController_Params OnUnregisteredController_Params;
	memset(&OnUnregisteredController_Params, 0, sizeof(OnUnregisteredController_Params));
	memcpy_s(&OnUnregisteredController_Params.LocalPlayerNum, sizeof(OnUnregisteredController_Params.LocalPlayerNum), &LocalPlayerNum, sizeof(LocalPlayerNum));

	this->ProcessEvent(uFnOnUnregisteredController, &OnUnregisteredController_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRegisteredController
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LocalPlayerNum                 (CPF_Parm)
// int32_t                        ControllerId                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnRegisteredController(int32_t LocalPlayerNum, int32_t ControllerId)
{
	static UFunction* uFnOnRegisteredController = nullptr;

	if (!uFnOnRegisteredController)
	{
		uFnOnRegisteredController = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRegisteredController");
	}

	UOnlinePlayerInterfaceEOS_execOnRegisteredController_Params OnRegisteredController_Params;
	memset(&OnRegisteredController_Params, 0, sizeof(OnRegisteredController_Params));
	memcpy_s(&OnRegisteredController_Params.LocalPlayerNum, sizeof(OnRegisteredController_Params.LocalPlayerNum), &LocalPlayerNum, sizeof(LocalPlayerNum));
	memcpy_s(&OnRegisteredController_Params.ControllerId, sizeof(OnRegisteredController_Params.ControllerId), &ControllerId, sizeof(ControllerId));

	this->ProcessEvent(uFnOnRegisteredController, &OnRegisteredController_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddInGamePost
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  InPostID                       (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<class FString>          StringReplaceList              (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::AddInGamePost(class FString InPostID, uint8_t LocalUserNum, TArray<class FString> StringReplaceList)
{
	static UFunction* uFnAddInGamePost = nullptr;

	if (!uFnAddInGamePost)
	{
		uFnAddInGamePost = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddInGamePost");
	}

	UOnlinePlayerInterfaceEOS_execAddInGamePost_Params AddInGamePost_Params;
	memset(&AddInGamePost_Params, 0, sizeof(AddInGamePost_Params));
	memcpy_s(&AddInGamePost_Params.InPostID, sizeof(AddInGamePost_Params.InPostID), &InPostID, sizeof(InPostID));
	memcpy_s(&AddInGamePost_Params.LocalUserNum, sizeof(AddInGamePost_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddInGamePost_Params.StringReplaceList, sizeof(AddInGamePost_Params.StringReplaceList), &StringReplaceList, sizeof(StringReplaceList));

	this->ProcessEvent(uFnAddInGamePost, &AddInGamePost_Params, nullptr);

	return AddInGamePost_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UpdateStat
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FName                   StatName                       (CPF_Parm)
// int32_t                        Points                         (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::UpdateStat(uint8_t LocalUserNum, struct FName StatName, int32_t Points)
{
	static UFunction* uFnUpdateStat = nullptr;

	if (!uFnUpdateStat)
	{
		uFnUpdateStat = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UpdateStat");
	}

	UOnlinePlayerInterfaceEOS_execUpdateStat_Params UpdateStat_Params;
	memset(&UpdateStat_Params, 0, sizeof(UpdateStat_Params));
	memcpy_s(&UpdateStat_Params.LocalUserNum, sizeof(UpdateStat_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&UpdateStat_Params.StatName, sizeof(UpdateStat_Params.StatName), &StatName, sizeof(StatName));
	memcpy_s(&UpdateStat_Params.Points, sizeof(UpdateStat_Params.Points), &Points, sizeof(Points));

	this->ProcessEvent(uFnUpdateStat, &UpdateStat_Params, nullptr);

	return UpdateStat_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearSaveDataNoSpaceDialogCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearSaveDataNoSpaceDialogCompleteDelegate(struct FScriptDelegate DeviceDelegate)
{
	static UFunction* uFnClearSaveDataNoSpaceDialogCompleteDelegate = nullptr;

	if (!uFnClearSaveDataNoSpaceDialogCompleteDelegate)
	{
		uFnClearSaveDataNoSpaceDialogCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearSaveDataNoSpaceDialogCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearSaveDataNoSpaceDialogCompleteDelegate_Params ClearSaveDataNoSpaceDialogCompleteDelegate_Params;
	memset(&ClearSaveDataNoSpaceDialogCompleteDelegate_Params, 0, sizeof(ClearSaveDataNoSpaceDialogCompleteDelegate_Params));
	memcpy_s(&ClearSaveDataNoSpaceDialogCompleteDelegate_Params.DeviceDelegate, sizeof(ClearSaveDataNoSpaceDialogCompleteDelegate_Params.DeviceDelegate), &DeviceDelegate, sizeof(DeviceDelegate));

	this->ProcessEvent(uFnClearSaveDataNoSpaceDialogCompleteDelegate, &ClearSaveDataNoSpaceDialogCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddSaveDataNoSpaceDialogCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddSaveDataNoSpaceDialogCompleteDelegate(struct FScriptDelegate DeviceDelegate)
{
	static UFunction* uFnAddSaveDataNoSpaceDialogCompleteDelegate = nullptr;

	if (!uFnAddSaveDataNoSpaceDialogCompleteDelegate)
	{
		uFnAddSaveDataNoSpaceDialogCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddSaveDataNoSpaceDialogCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddSaveDataNoSpaceDialogCompleteDelegate_Params AddSaveDataNoSpaceDialogCompleteDelegate_Params;
	memset(&AddSaveDataNoSpaceDialogCompleteDelegate_Params, 0, sizeof(AddSaveDataNoSpaceDialogCompleteDelegate_Params));
	memcpy_s(&AddSaveDataNoSpaceDialogCompleteDelegate_Params.DeviceDelegate, sizeof(AddSaveDataNoSpaceDialogCompleteDelegate_Params.DeviceDelegate), &DeviceDelegate, sizeof(DeviceDelegate));

	this->ProcessEvent(uFnAddSaveDataNoSpaceDialogCompleteDelegate, &AddSaveDataNoSpaceDialogCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnSaveDataNoSpaceDialogComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bContinueWithoutSave           (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnSaveDataNoSpaceDialogComplete(bool bContinueWithoutSave)
{
	static UFunction* uFnOnSaveDataNoSpaceDialogComplete = nullptr;

	if (!uFnOnSaveDataNoSpaceDialogComplete)
	{
		uFnOnSaveDataNoSpaceDialogComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnSaveDataNoSpaceDialogComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnSaveDataNoSpaceDialogComplete_Params OnSaveDataNoSpaceDialogComplete_Params;
	memset(&OnSaveDataNoSpaceDialogComplete_Params, 0, sizeof(OnSaveDataNoSpaceDialogComplete_Params));
	OnSaveDataNoSpaceDialogComplete_Params.bContinueWithoutSave = bContinueWithoutSave;

	this->ProcessEvent(uFnOnSaveDataNoSpaceDialogComplete, &OnSaveDataNoSpaceDialogComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RecordPlayersRecentlyMetKeys
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FFriendHistoryKey> PlayerKeys                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::RecordPlayersRecentlyMetKeys(uint8_t LocalUserNum, TArray<struct FFriendHistoryKey>& PlayerKeys)
{
	static UFunction* uFnRecordPlayersRecentlyMetKeys = nullptr;

	if (!uFnRecordPlayersRecentlyMetKeys)
	{
		uFnRecordPlayersRecentlyMetKeys = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RecordPlayersRecentlyMetKeys");
	}

	UOnlinePlayerInterfaceEOS_execRecordPlayersRecentlyMetKeys_Params RecordPlayersRecentlyMetKeys_Params;
	memset(&RecordPlayersRecentlyMetKeys_Params, 0, sizeof(RecordPlayersRecentlyMetKeys_Params));
	memcpy_s(&RecordPlayersRecentlyMetKeys_Params.LocalUserNum, sizeof(RecordPlayersRecentlyMetKeys_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&RecordPlayersRecentlyMetKeys_Params.PlayerKeys, sizeof(RecordPlayersRecentlyMetKeys_Params.PlayerKeys), &PlayerKeys, sizeof(PlayerKeys));

	this->ProcessEvent(uFnRecordPlayersRecentlyMetKeys, &RecordPlayersRecentlyMetKeys_Params, nullptr);

	memcpy_s(&PlayerKeys, sizeof(PlayerKeys), &RecordPlayersRecentlyMetKeys_Params.PlayerKeys, sizeof(RecordPlayersRecentlyMetKeys_Params.PlayerKeys));

	return RecordPlayersRecentlyMetKeys_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsAchievementUnlocked
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        AchievementId                  (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::IsAchievementUnlocked(int32_t AchievementId)
{
	static UFunction* uFnIsAchievementUnlocked = nullptr;

	if (!uFnIsAchievementUnlocked)
	{
		uFnIsAchievementUnlocked = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsAchievementUnlocked");
	}

	UOnlinePlayerInterfaceEOS_execIsAchievementUnlocked_Params IsAchievementUnlocked_Params;
	memset(&IsAchievementUnlocked_Params, 0, sizeof(IsAchievementUnlocked_Params));
	memcpy_s(&IsAchievementUnlocked_Params.AchievementId, sizeof(IsAchievementUnlocked_Params.AchievementId), &AchievementId, sizeof(AchievementId));

	this->ProcessEvent(uFnIsAchievementUnlocked, &IsAchievementUnlocked_Params, nullptr);

	return IsAchievementUnlocked_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowContentMarketplaceUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ShowContentMarketplaceUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowContentMarketplaceUI = nullptr;

	if (!uFnShowContentMarketplaceUI)
	{
		uFnShowContentMarketplaceUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowContentMarketplaceUI");
	}

	UOnlinePlayerInterfaceEOS_execShowContentMarketplaceUI_Params ShowContentMarketplaceUI_Params;
	memset(&ShowContentMarketplaceUI_Params, 0, sizeof(ShowContentMarketplaceUI_Params));
	memcpy_s(&ShowContentMarketplaceUI_Params.LocalUserNum, sizeof(ShowContentMarketplaceUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnShowContentMarketplaceUI, &ShowContentMarketplaceUI_Params, nullptr);

	return ShowContentMarketplaceUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFriendsInviteUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::ShowFriendsInviteUI(uint8_t LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnShowFriendsInviteUI = nullptr;

	if (!uFnShowFriendsInviteUI)
	{
		uFnShowFriendsInviteUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFriendsInviteUI");
	}

	UOnlinePlayerInterfaceEOS_execShowFriendsInviteUI_Params ShowFriendsInviteUI_Params;
	memset(&ShowFriendsInviteUI_Params, 0, sizeof(ShowFriendsInviteUI_Params));
	memcpy_s(&ShowFriendsInviteUI_Params.LocalUserNum, sizeof(ShowFriendsInviteUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowFriendsInviteUI_Params.PlayerID, sizeof(ShowFriendsInviteUI_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	this->ProcessEvent(uFnShowFriendsInviteUI, &ShowFriendsInviteUI_Params, nullptr);

	return ShowFriendsInviteUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowAchievementsUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ShowAchievementsUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowAchievementsUI = nullptr;

	if (!uFnShowAchievementsUI)
	{
		uFnShowAchievementsUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowAchievementsUI");
	}

	UOnlinePlayerInterfaceEOS_execShowAchievementsUI_Params ShowAchievementsUI_Params;
	memset(&ShowAchievementsUI_Params, 0, sizeof(ShowAchievementsUI_Params));
	memcpy_s(&ShowAchievementsUI_Params.LocalUserNum, sizeof(ShowAchievementsUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnShowAchievementsUI, &ShowAchievementsUI_Params, nullptr);

	return ShowAchievementsUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowMessagesUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ShowMessagesUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowMessagesUI = nullptr;

	if (!uFnShowMessagesUI)
	{
		uFnShowMessagesUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowMessagesUI");
	}

	UOnlinePlayerInterfaceEOS_execShowMessagesUI_Params ShowMessagesUI_Params;
	memset(&ShowMessagesUI_Params, 0, sizeof(ShowMessagesUI_Params));
	memcpy_s(&ShowMessagesUI_Params.LocalUserNum, sizeof(ShowMessagesUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnShowMessagesUI, &ShowMessagesUI_Params, nullptr);

	return ShowMessagesUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFeedbackUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::ShowFeedbackUI(uint8_t LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnShowFeedbackUI = nullptr;

	if (!uFnShowFeedbackUI)
	{
		uFnShowFeedbackUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFeedbackUI");
	}

	UOnlinePlayerInterfaceEOS_execShowFeedbackUI_Params ShowFeedbackUI_Params;
	memset(&ShowFeedbackUI_Params, 0, sizeof(ShowFeedbackUI_Params));
	memcpy_s(&ShowFeedbackUI_Params.LocalUserNum, sizeof(ShowFeedbackUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowFeedbackUI_Params.PlayerID, sizeof(ShowFeedbackUI_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	this->ProcessEvent(uFnShowFeedbackUI, &ShowFeedbackUI_Params, nullptr);

	return ShowFeedbackUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RemoveCanPlayOnlineChangedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::RemoveCanPlayOnlineChangedDelegate(struct FScriptDelegate Callback)
{
	static UFunction* uFnRemoveCanPlayOnlineChangedDelegate = nullptr;

	if (!uFnRemoveCanPlayOnlineChangedDelegate)
	{
		uFnRemoveCanPlayOnlineChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RemoveCanPlayOnlineChangedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execRemoveCanPlayOnlineChangedDelegate_Params RemoveCanPlayOnlineChangedDelegate_Params;
	memset(&RemoveCanPlayOnlineChangedDelegate_Params, 0, sizeof(RemoveCanPlayOnlineChangedDelegate_Params));
	memcpy_s(&RemoveCanPlayOnlineChangedDelegate_Params.Callback, sizeof(RemoveCanPlayOnlineChangedDelegate_Params.Callback), &Callback, sizeof(Callback));

	this->ProcessEvent(uFnRemoveCanPlayOnlineChangedDelegate, &RemoveCanPlayOnlineChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddCanPlayOnlineChangedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddCanPlayOnlineChangedDelegate(struct FScriptDelegate Callback)
{
	static UFunction* uFnAddCanPlayOnlineChangedDelegate = nullptr;

	if (!uFnAddCanPlayOnlineChangedDelegate)
	{
		uFnAddCanPlayOnlineChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddCanPlayOnlineChangedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddCanPlayOnlineChangedDelegate_Params AddCanPlayOnlineChangedDelegate_Params;
	memset(&AddCanPlayOnlineChangedDelegate_Params, 0, sizeof(AddCanPlayOnlineChangedDelegate_Params));
	memcpy_s(&AddCanPlayOnlineChangedDelegate_Params.Callback, sizeof(AddCanPlayOnlineChangedDelegate_Params.Callback), &Callback, sizeof(Callback));

	this->ProcessEvent(uFnAddCanPlayOnlineChangedDelegate, &AddCanPlayOnlineChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPlayOnlineChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::CanPlayOnlineChanged(uint8_t LocalUserNum)
{
	static UFunction* uFnCanPlayOnlineChanged = nullptr;

	if (!uFnCanPlayOnlineChanged)
	{
		uFnCanPlayOnlineChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPlayOnlineChanged");
	}

	UOnlinePlayerInterfaceEOS_execCanPlayOnlineChanged_Params CanPlayOnlineChanged_Params;
	memset(&CanPlayOnlineChanged_Params, 0, sizeof(CanPlayOnlineChanged_Params));
	memcpy_s(&CanPlayOnlineChanged_Params.LocalUserNum, sizeof(CanPlayOnlineChanged_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnCanPlayOnlineChanged, &CanPlayOnlineChanged_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUserSignInCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearUserSignInCompleteDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearUserSignInCompleteDelegate = nullptr;

	if (!uFnClearUserSignInCompleteDelegate)
	{
		uFnClearUserSignInCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUserSignInCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearUserSignInCompleteDelegate_Params ClearUserSignInCompleteDelegate_Params;
	memset(&ClearUserSignInCompleteDelegate_Params, 0, sizeof(ClearUserSignInCompleteDelegate_Params));
	memcpy_s(&ClearUserSignInCompleteDelegate_Params.InDelegate, sizeof(ClearUserSignInCompleteDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnClearUserSignInCompleteDelegate, &ClearUserSignInCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUserSignInCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddUserSignInCompleteDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddUserSignInCompleteDelegate = nullptr;

	if (!uFnAddUserSignInCompleteDelegate)
	{
		uFnAddUserSignInCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUserSignInCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddUserSignInCompleteDelegate_Params AddUserSignInCompleteDelegate_Params;
	memset(&AddUserSignInCompleteDelegate_Params, 0, sizeof(AddUserSignInCompleteDelegate_Params));
	memcpy_s(&AddUserSignInCompleteDelegate_Params.InDelegate, sizeof(AddUserSignInCompleteDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnAddUserSignInCompleteDelegate, &AddUserSignInCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUserSignInComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnUserSignInComplete(uint8_t LocalUserNum)
{
	static UFunction* uFnOnUserSignInComplete = nullptr;

	if (!uFnOnUserSignInComplete)
	{
		uFnOnUserSignInComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUserSignInComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnUserSignInComplete_Params OnUserSignInComplete_Params;
	memset(&OnUserSignInComplete_Params, 0, sizeof(OnUserSignInComplete_Params));
	memcpy_s(&OnUserSignInComplete_Params.LocalUserNum, sizeof(OnUserSignInComplete_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnOnUserSignInComplete, &OnUserSignInComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowCustomMessageUI
// [0x00424001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  MessageTitle                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  NonEditableMessage             (CPF_Parm | CPF_NeedCtorLink)
// class FString                  EditableMessage                (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FUniqueNetId>    Recipients                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::ShowCustomMessageUI(uint8_t LocalUserNum, class FString MessageTitle, class FString NonEditableMessage, class FString EditableMessage, TArray<struct FUniqueNetId>& Recipients)
{
	static UFunction* uFnShowCustomMessageUI = nullptr;

	if (!uFnShowCustomMessageUI)
	{
		uFnShowCustomMessageUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowCustomMessageUI");
	}

	UOnlinePlayerInterfaceEOS_execShowCustomMessageUI_Params ShowCustomMessageUI_Params;
	memset(&ShowCustomMessageUI_Params, 0, sizeof(ShowCustomMessageUI_Params));
	memcpy_s(&ShowCustomMessageUI_Params.LocalUserNum, sizeof(ShowCustomMessageUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowCustomMessageUI_Params.MessageTitle, sizeof(ShowCustomMessageUI_Params.MessageTitle), &MessageTitle, sizeof(MessageTitle));
	memcpy_s(&ShowCustomMessageUI_Params.NonEditableMessage, sizeof(ShowCustomMessageUI_Params.NonEditableMessage), &NonEditableMessage, sizeof(NonEditableMessage));
	memcpy_s(&ShowCustomMessageUI_Params.EditableMessage, sizeof(ShowCustomMessageUI_Params.EditableMessage), &EditableMessage, sizeof(EditableMessage));
	memcpy_s(&ShowCustomMessageUI_Params.Recipients, sizeof(ShowCustomMessageUI_Params.Recipients), &Recipients, sizeof(Recipients));

	this->ProcessEvent(uFnShowCustomMessageUI, &ShowCustomMessageUI_Params, nullptr);

	memcpy_s(&Recipients, sizeof(Recipients), &ShowCustomMessageUI_Params.Recipients, sizeof(ShowCustomMessageUI_Params.Recipients));

	return ShowCustomMessageUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearCrossTitleProfileSettings
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_Parm)

void UOnlinePlayerInterfaceEOS::ClearCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId)
{
	static UFunction* uFnClearCrossTitleProfileSettings = nullptr;

	if (!uFnClearCrossTitleProfileSettings)
	{
		uFnClearCrossTitleProfileSettings = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearCrossTitleProfileSettings");
	}

	UOnlinePlayerInterfaceEOS_execClearCrossTitleProfileSettings_Params ClearCrossTitleProfileSettings_Params;
	memset(&ClearCrossTitleProfileSettings_Params, 0, sizeof(ClearCrossTitleProfileSettings_Params));
	memcpy_s(&ClearCrossTitleProfileSettings_Params.LocalUserNum, sizeof(ClearCrossTitleProfileSettings_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearCrossTitleProfileSettings_Params.TitleId, sizeof(ClearCrossTitleProfileSettings_Params.TitleId), &TitleId, sizeof(TitleId));

	this->ProcessEvent(uFnClearCrossTitleProfileSettings, &ClearCrossTitleProfileSettings_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetCrossTitleProfileSettings
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOnlineProfileSettings*  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_Parm)

class UOnlineProfileSettings* UOnlinePlayerInterfaceEOS::GetCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId)
{
	static UFunction* uFnGetCrossTitleProfileSettings = nullptr;

	if (!uFnGetCrossTitleProfileSettings)
	{
		uFnGetCrossTitleProfileSettings = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetCrossTitleProfileSettings");
	}

	UOnlinePlayerInterfaceEOS_execGetCrossTitleProfileSettings_Params GetCrossTitleProfileSettings_Params;
	memset(&GetCrossTitleProfileSettings_Params, 0, sizeof(GetCrossTitleProfileSettings_Params));
	memcpy_s(&GetCrossTitleProfileSettings_Params.LocalUserNum, sizeof(GetCrossTitleProfileSettings_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&GetCrossTitleProfileSettings_Params.TitleId, sizeof(GetCrossTitleProfileSettings_Params.TitleId), &TitleId, sizeof(TitleId));

	this->ProcessEvent(uFnGetCrossTitleProfileSettings, &GetCrossTitleProfileSettings_Params, nullptr);

	return GetCrossTitleProfileSettings_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearReadCrossTitleProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearReadCrossTitleProfileSettingsCompleteDelegate = nullptr;

	if (!uFnClearReadCrossTitleProfileSettingsCompleteDelegate)
	{
		uFnClearReadCrossTitleProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadCrossTitleProfileSettingsCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearReadCrossTitleProfileSettingsCompleteDelegate_Params ClearReadCrossTitleProfileSettingsCompleteDelegate_Params;
	memset(&ClearReadCrossTitleProfileSettingsCompleteDelegate_Params, 0, sizeof(ClearReadCrossTitleProfileSettingsCompleteDelegate_Params));
	memcpy_s(&ClearReadCrossTitleProfileSettingsCompleteDelegate_Params.LocalUserNum, sizeof(ClearReadCrossTitleProfileSettingsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearReadCrossTitleProfileSettingsCompleteDelegate_Params.InDelegate, sizeof(ClearReadCrossTitleProfileSettingsCompleteDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnClearReadCrossTitleProfileSettingsCompleteDelegate, &ClearReadCrossTitleProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddReadCrossTitleProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddReadCrossTitleProfileSettingsCompleteDelegate = nullptr;

	if (!uFnAddReadCrossTitleProfileSettingsCompleteDelegate)
	{
		uFnAddReadCrossTitleProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadCrossTitleProfileSettingsCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddReadCrossTitleProfileSettingsCompleteDelegate_Params AddReadCrossTitleProfileSettingsCompleteDelegate_Params;
	memset(&AddReadCrossTitleProfileSettingsCompleteDelegate_Params, 0, sizeof(AddReadCrossTitleProfileSettingsCompleteDelegate_Params));
	memcpy_s(&AddReadCrossTitleProfileSettingsCompleteDelegate_Params.LocalUserNum, sizeof(AddReadCrossTitleProfileSettingsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddReadCrossTitleProfileSettingsCompleteDelegate_Params.InDelegate, sizeof(AddReadCrossTitleProfileSettingsCompleteDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnAddReadCrossTitleProfileSettingsCompleteDelegate, &AddReadCrossTitleProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadCrossTitleProfileSettingsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnReadCrossTitleProfileSettingsComplete(uint8_t LocalUserNum, int32_t TitleId, bool bWasSuccessful)
{
	static UFunction* uFnOnReadCrossTitleProfileSettingsComplete = nullptr;

	if (!uFnOnReadCrossTitleProfileSettingsComplete)
	{
		uFnOnReadCrossTitleProfileSettingsComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadCrossTitleProfileSettingsComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnReadCrossTitleProfileSettingsComplete_Params OnReadCrossTitleProfileSettingsComplete_Params;
	memset(&OnReadCrossTitleProfileSettingsComplete_Params, 0, sizeof(OnReadCrossTitleProfileSettingsComplete_Params));
	memcpy_s(&OnReadCrossTitleProfileSettingsComplete_Params.LocalUserNum, sizeof(OnReadCrossTitleProfileSettingsComplete_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OnReadCrossTitleProfileSettingsComplete_Params.TitleId, sizeof(OnReadCrossTitleProfileSettingsComplete_Params.TitleId), &TitleId, sizeof(TitleId));
	OnReadCrossTitleProfileSettingsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadCrossTitleProfileSettingsComplete, &OnReadCrossTitleProfileSettingsComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadCrossTitleProfileSettings
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_Parm)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ReadCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId, class UOnlineProfileSettings* ProfileSettings)
{
	static UFunction* uFnReadCrossTitleProfileSettings = nullptr;

	if (!uFnReadCrossTitleProfileSettings)
	{
		uFnReadCrossTitleProfileSettings = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadCrossTitleProfileSettings");
	}

	UOnlinePlayerInterfaceEOS_execReadCrossTitleProfileSettings_Params ReadCrossTitleProfileSettings_Params;
	memset(&ReadCrossTitleProfileSettings_Params, 0, sizeof(ReadCrossTitleProfileSettings_Params));
	memcpy_s(&ReadCrossTitleProfileSettings_Params.LocalUserNum, sizeof(ReadCrossTitleProfileSettings_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadCrossTitleProfileSettings_Params.TitleId, sizeof(ReadCrossTitleProfileSettings_Params.TitleId), &TitleId, sizeof(TitleId));
	memcpy_s(&ReadCrossTitleProfileSettings_Params.ProfileSettings, sizeof(ReadCrossTitleProfileSettings_Params.ProfileSettings), &ProfileSettings, sizeof(ProfileSettings));

	this->ProcessEvent(uFnReadCrossTitleProfileSettings, &ReadCrossTitleProfileSettings_Params, nullptr);

	return ReadCrossTitleProfileSettings_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearWritePlayerStorageCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearWritePlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearWritePlayerStorageCompleteDelegate = nullptr;

	if (!uFnClearWritePlayerStorageCompleteDelegate)
	{
		uFnClearWritePlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearWritePlayerStorageCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearWritePlayerStorageCompleteDelegate_Params ClearWritePlayerStorageCompleteDelegate_Params;
	memset(&ClearWritePlayerStorageCompleteDelegate_Params, 0, sizeof(ClearWritePlayerStorageCompleteDelegate_Params));
	memcpy_s(&ClearWritePlayerStorageCompleteDelegate_Params.LocalUserNum, sizeof(ClearWritePlayerStorageCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearWritePlayerStorageCompleteDelegate_Params.InDelegate, sizeof(ClearWritePlayerStorageCompleteDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnClearWritePlayerStorageCompleteDelegate, &ClearWritePlayerStorageCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddWritePlayerStorageCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddWritePlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddWritePlayerStorageCompleteDelegate = nullptr;

	if (!uFnAddWritePlayerStorageCompleteDelegate)
	{
		uFnAddWritePlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddWritePlayerStorageCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddWritePlayerStorageCompleteDelegate_Params AddWritePlayerStorageCompleteDelegate_Params;
	memset(&AddWritePlayerStorageCompleteDelegate_Params, 0, sizeof(AddWritePlayerStorageCompleteDelegate_Params));
	memcpy_s(&AddWritePlayerStorageCompleteDelegate_Params.LocalUserNum, sizeof(AddWritePlayerStorageCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddWritePlayerStorageCompleteDelegate_Params.InDelegate, sizeof(AddWritePlayerStorageCompleteDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnAddWritePlayerStorageCompleteDelegate, &AddWritePlayerStorageCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnWritePlayerStorageComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnWritePlayerStorageComplete(uint8_t LocalUserNum, bool bWasSuccessful)
{
	static UFunction* uFnOnWritePlayerStorageComplete = nullptr;

	if (!uFnOnWritePlayerStorageComplete)
	{
		uFnOnWritePlayerStorageComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnWritePlayerStorageComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnWritePlayerStorageComplete_Params OnWritePlayerStorageComplete_Params;
	memset(&OnWritePlayerStorageComplete_Params, 0, sizeof(OnWritePlayerStorageComplete_Params));
	memcpy_s(&OnWritePlayerStorageComplete_Params.LocalUserNum, sizeof(OnWritePlayerStorageComplete_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	OnWritePlayerStorageComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnWritePlayerStorageComplete, &OnWritePlayerStorageComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WritePlayerStorage
// [0x00024001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)
// int32_t                        DeviceID                       (CPF_OptionalParm | CPF_Parm)

bool UOnlinePlayerInterfaceEOS::WritePlayerStorage(uint8_t LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int32_t DeviceID)
{
	static UFunction* uFnWritePlayerStorage = nullptr;

	if (!uFnWritePlayerStorage)
	{
		uFnWritePlayerStorage = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WritePlayerStorage");
	}

	UOnlinePlayerInterfaceEOS_execWritePlayerStorage_Params WritePlayerStorage_Params;
	memset(&WritePlayerStorage_Params, 0, sizeof(WritePlayerStorage_Params));
	memcpy_s(&WritePlayerStorage_Params.LocalUserNum, sizeof(WritePlayerStorage_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&WritePlayerStorage_Params.PlayerStorage, sizeof(WritePlayerStorage_Params.PlayerStorage), &PlayerStorage, sizeof(PlayerStorage));
	memcpy_s(&WritePlayerStorage_Params.DeviceID, sizeof(WritePlayerStorage_Params.DeviceID), &DeviceID, sizeof(DeviceID));

	this->ProcessEvent(uFnWritePlayerStorage, &WritePlayerStorage_Params, nullptr);

	return WritePlayerStorage_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            NetId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearReadPlayerStorageForNetIdCompleteDelegate(struct FUniqueNetId NetId, struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearReadPlayerStorageForNetIdCompleteDelegate = nullptr;

	if (!uFnClearReadPlayerStorageForNetIdCompleteDelegate)
	{
		uFnClearReadPlayerStorageForNetIdCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerStorageForNetIdCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearReadPlayerStorageForNetIdCompleteDelegate_Params ClearReadPlayerStorageForNetIdCompleteDelegate_Params;
	memset(&ClearReadPlayerStorageForNetIdCompleteDelegate_Params, 0, sizeof(ClearReadPlayerStorageForNetIdCompleteDelegate_Params));
	memcpy_s(&ClearReadPlayerStorageForNetIdCompleteDelegate_Params.NetId, sizeof(ClearReadPlayerStorageForNetIdCompleteDelegate_Params.NetId), &NetId, sizeof(NetId));
	memcpy_s(&ClearReadPlayerStorageForNetIdCompleteDelegate_Params.InDelegate, sizeof(ClearReadPlayerStorageForNetIdCompleteDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnClearReadPlayerStorageForNetIdCompleteDelegate, &ClearReadPlayerStorageForNetIdCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            NetId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddReadPlayerStorageForNetIdCompleteDelegate(struct FUniqueNetId NetId, struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddReadPlayerStorageForNetIdCompleteDelegate = nullptr;

	if (!uFnAddReadPlayerStorageForNetIdCompleteDelegate)
	{
		uFnAddReadPlayerStorageForNetIdCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerStorageForNetIdCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddReadPlayerStorageForNetIdCompleteDelegate_Params AddReadPlayerStorageForNetIdCompleteDelegate_Params;
	memset(&AddReadPlayerStorageForNetIdCompleteDelegate_Params, 0, sizeof(AddReadPlayerStorageForNetIdCompleteDelegate_Params));
	memcpy_s(&AddReadPlayerStorageForNetIdCompleteDelegate_Params.NetId, sizeof(AddReadPlayerStorageForNetIdCompleteDelegate_Params.NetId), &NetId, sizeof(NetId));
	memcpy_s(&AddReadPlayerStorageForNetIdCompleteDelegate_Params.InDelegate, sizeof(AddReadPlayerStorageForNetIdCompleteDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnAddReadPlayerStorageForNetIdCompleteDelegate, &AddReadPlayerStorageForNetIdCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadPlayerStorageForNetIdComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            NetId                          (CPF_Parm | CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnReadPlayerStorageForNetIdComplete(struct FUniqueNetId NetId, bool bWasSuccessful)
{
	static UFunction* uFnOnReadPlayerStorageForNetIdComplete = nullptr;

	if (!uFnOnReadPlayerStorageForNetIdComplete)
	{
		uFnOnReadPlayerStorageForNetIdComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadPlayerStorageForNetIdComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnReadPlayerStorageForNetIdComplete_Params OnReadPlayerStorageForNetIdComplete_Params;
	memset(&OnReadPlayerStorageForNetIdComplete_Params, 0, sizeof(OnReadPlayerStorageForNetIdComplete_Params));
	memcpy_s(&OnReadPlayerStorageForNetIdComplete_Params.NetId, sizeof(OnReadPlayerStorageForNetIdComplete_Params.NetId), &NetId, sizeof(NetId));
	OnReadPlayerStorageForNetIdComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadPlayerStorageForNetIdComplete, &OnReadPlayerStorageForNetIdComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadPlayerStorageForNetId
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            NetId                          (CPF_Parm | CPF_NeedCtorLink)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ReadPlayerStorageForNetId(uint8_t LocalUserNum, struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage)
{
	static UFunction* uFnReadPlayerStorageForNetId = nullptr;

	if (!uFnReadPlayerStorageForNetId)
	{
		uFnReadPlayerStorageForNetId = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadPlayerStorageForNetId");
	}

	UOnlinePlayerInterfaceEOS_execReadPlayerStorageForNetId_Params ReadPlayerStorageForNetId_Params;
	memset(&ReadPlayerStorageForNetId_Params, 0, sizeof(ReadPlayerStorageForNetId_Params));
	memcpy_s(&ReadPlayerStorageForNetId_Params.LocalUserNum, sizeof(ReadPlayerStorageForNetId_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadPlayerStorageForNetId_Params.NetId, sizeof(ReadPlayerStorageForNetId_Params.NetId), &NetId, sizeof(NetId));
	memcpy_s(&ReadPlayerStorageForNetId_Params.PlayerStorage, sizeof(ReadPlayerStorageForNetId_Params.PlayerStorage), &PlayerStorage, sizeof(PlayerStorage));

	this->ProcessEvent(uFnReadPlayerStorageForNetId, &ReadPlayerStorageForNetId_Params, nullptr);

	return ReadPlayerStorageForNetId_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerStorageCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearReadPlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearReadPlayerStorageCompleteDelegate = nullptr;

	if (!uFnClearReadPlayerStorageCompleteDelegate)
	{
		uFnClearReadPlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerStorageCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearReadPlayerStorageCompleteDelegate_Params ClearReadPlayerStorageCompleteDelegate_Params;
	memset(&ClearReadPlayerStorageCompleteDelegate_Params, 0, sizeof(ClearReadPlayerStorageCompleteDelegate_Params));
	memcpy_s(&ClearReadPlayerStorageCompleteDelegate_Params.LocalUserNum, sizeof(ClearReadPlayerStorageCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearReadPlayerStorageCompleteDelegate_Params.InDelegate, sizeof(ClearReadPlayerStorageCompleteDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnClearReadPlayerStorageCompleteDelegate, &ClearReadPlayerStorageCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerStorageCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddReadPlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddReadPlayerStorageCompleteDelegate = nullptr;

	if (!uFnAddReadPlayerStorageCompleteDelegate)
	{
		uFnAddReadPlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerStorageCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddReadPlayerStorageCompleteDelegate_Params AddReadPlayerStorageCompleteDelegate_Params;
	memset(&AddReadPlayerStorageCompleteDelegate_Params, 0, sizeof(AddReadPlayerStorageCompleteDelegate_Params));
	memcpy_s(&AddReadPlayerStorageCompleteDelegate_Params.LocalUserNum, sizeof(AddReadPlayerStorageCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddReadPlayerStorageCompleteDelegate_Params.InDelegate, sizeof(AddReadPlayerStorageCompleteDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnAddReadPlayerStorageCompleteDelegate, &AddReadPlayerStorageCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadPlayerStorageComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnReadPlayerStorageComplete(uint8_t LocalUserNum, bool bWasSuccessful)
{
	static UFunction* uFnOnReadPlayerStorageComplete = nullptr;

	if (!uFnOnReadPlayerStorageComplete)
	{
		uFnOnReadPlayerStorageComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadPlayerStorageComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnReadPlayerStorageComplete_Params OnReadPlayerStorageComplete_Params;
	memset(&OnReadPlayerStorageComplete_Params, 0, sizeof(OnReadPlayerStorageComplete_Params));
	memcpy_s(&OnReadPlayerStorageComplete_Params.LocalUserNum, sizeof(OnReadPlayerStorageComplete_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	OnReadPlayerStorageComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadPlayerStorageComplete, &OnReadPlayerStorageComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadPlayerStorage
// [0x00024001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)
// int32_t                        DeviceID                       (CPF_OptionalParm | CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ReadPlayerStorage(uint8_t LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int32_t DeviceID)
{
	static UFunction* uFnReadPlayerStorage = nullptr;

	if (!uFnReadPlayerStorage)
	{
		uFnReadPlayerStorage = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadPlayerStorage");
	}

	UOnlinePlayerInterfaceEOS_execReadPlayerStorage_Params ReadPlayerStorage_Params;
	memset(&ReadPlayerStorage_Params, 0, sizeof(ReadPlayerStorage_Params));
	memcpy_s(&ReadPlayerStorage_Params.LocalUserNum, sizeof(ReadPlayerStorage_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadPlayerStorage_Params.PlayerStorage, sizeof(ReadPlayerStorage_Params.PlayerStorage), &PlayerStorage, sizeof(PlayerStorage));
	memcpy_s(&ReadPlayerStorage_Params.DeviceID, sizeof(ReadPlayerStorage_Params.DeviceID), &DeviceID, sizeof(DeviceID));

	this->ProcessEvent(uFnReadPlayerStorage, &ReadPlayerStorage_Params, nullptr);

	return ReadPlayerStorage_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerStorage
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOnlinePlayerStorage*    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class UOnlinePlayerStorage* UOnlinePlayerInterfaceEOS::GetPlayerStorage(uint8_t LocalUserNum)
{
	static UFunction* uFnGetPlayerStorage = nullptr;

	if (!uFnGetPlayerStorage)
	{
		uFnGetPlayerStorage = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerStorage");
	}

	UOnlinePlayerInterfaceEOS_execGetPlayerStorage_Params GetPlayerStorage_Params;
	memset(&GetPlayerStorage_Params, 0, sizeof(GetPlayerStorage_Params));
	memcpy_s(&GetPlayerStorage_Params.LocalUserNum, sizeof(GetPlayerStorage_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnGetPlayerStorage, &GetPlayerStorage_Params, nullptr);

	return GetPlayerStorage_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RequestNativePlatformAuthTicket
// [0x00840003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::RequestNativePlatformAuthTicket(int32_t LocalUserNum, struct FScriptDelegate Callback)
{
	static UFunction* uFnRequestNativePlatformAuthTicket = nullptr;

	if (!uFnRequestNativePlatformAuthTicket)
	{
		uFnRequestNativePlatformAuthTicket = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RequestNativePlatformAuthTicket");
	}

	UOnlinePlayerInterfaceEOS_execRequestNativePlatformAuthTicket_Params RequestNativePlatformAuthTicket_Params;
	memset(&RequestNativePlatformAuthTicket_Params, 0, sizeof(RequestNativePlatformAuthTicket_Params));
	memcpy_s(&RequestNativePlatformAuthTicket_Params.LocalUserNum, sizeof(RequestNativePlatformAuthTicket_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&RequestNativePlatformAuthTicket_Params.Callback, sizeof(RequestNativePlatformAuthTicket_Params.Callback), &Callback, sizeof(Callback));

	this->ProcessEvent(uFnRequestNativePlatformAuthTicket, &RequestNativePlatformAuthTicket_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRequestNativePlatformAuthTicketComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LocalUserNum                   (CPF_Parm)
// class FString                  PlatformAuthTicket             (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnRequestNativePlatformAuthTicketComplete(int32_t LocalUserNum, class FString PlatformAuthTicket)
{
	static UFunction* uFnOnRequestNativePlatformAuthTicketComplete = nullptr;

	if (!uFnOnRequestNativePlatformAuthTicketComplete)
	{
		uFnOnRequestNativePlatformAuthTicketComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRequestNativePlatformAuthTicketComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnRequestNativePlatformAuthTicketComplete_Params OnRequestNativePlatformAuthTicketComplete_Params;
	memset(&OnRequestNativePlatformAuthTicketComplete_Params, 0, sizeof(OnRequestNativePlatformAuthTicketComplete_Params));
	memcpy_s(&OnRequestNativePlatformAuthTicketComplete_Params.LocalUserNum, sizeof(OnRequestNativePlatformAuthTicketComplete_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OnRequestNativePlatformAuthTicketComplete_Params.PlatformAuthTicket, sizeof(OnRequestNativePlatformAuthTicketComplete_Params.PlatformAuthTicket), &PlatformAuthTicket, sizeof(PlatformAuthTicket));

	this->ProcessEvent(uFnOnRequestNativePlatformAuthTicketComplete, &OnRequestNativePlatformAuthTicketComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.LinkedAccount
// [0x00040803] (FUNC_Final | FUNC_Defined | FUNC_Event | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::eventLinkedAccount(int32_t LocalUserNum)
{
	static UFunction* uFnLinkedAccount = nullptr;

	if (!uFnLinkedAccount)
	{
		uFnLinkedAccount = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.LinkedAccount");
	}

	UOnlinePlayerInterfaceEOS_eventLinkedAccount_Params LinkedAccount_Params;
	memset(&LinkedAccount_Params, 0, sizeof(LinkedAccount_Params));
	memcpy_s(&LinkedAccount_Params.LocalUserNum, sizeof(LinkedAccount_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnLinkedAccount, &LinkedAccount_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ConnectLogin
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::ConnectLogin(int32_t LocalUserNum)
{
	static UFunction* uFnConnectLogin = nullptr;

	if (!uFnConnectLogin)
	{
		uFnConnectLogin = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ConnectLogin");
	}

	UOnlinePlayerInterfaceEOS_execConnectLogin_Params ConnectLogin_Params;
	memset(&ConnectLogin_Params, 0, sizeof(ConnectLogin_Params));
	memcpy_s(&ConnectLogin_Params.LocalUserNum, sizeof(ConnectLogin_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnConnectLogin->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnConnectLogin, &ConnectLogin_Params, nullptr);
	uFnConnectLogin->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HasIncomingFriendInvite
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            InviteFrom                     (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::HasIncomingFriendInvite(uint8_t LocalUserNum, struct FUniqueNetId InviteFrom)
{
	static UFunction* uFnHasIncomingFriendInvite = nullptr;

	if (!uFnHasIncomingFriendInvite)
	{
		uFnHasIncomingFriendInvite = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HasIncomingFriendInvite");
	}

	UOnlinePlayerInterfaceEOS_execHasIncomingFriendInvite_Params HasIncomingFriendInvite_Params;
	memset(&HasIncomingFriendInvite_Params, 0, sizeof(HasIncomingFriendInvite_Params));
	memcpy_s(&HasIncomingFriendInvite_Params.LocalUserNum, sizeof(HasIncomingFriendInvite_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&HasIncomingFriendInvite_Params.InviteFrom, sizeof(HasIncomingFriendInvite_Params.InviteFrom), &InviteFrom, sizeof(InviteFrom));

	uFnHasIncomingFriendInvite->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnHasIncomingFriendInvite, &HasIncomingFriendInvite_Params, nullptr);
	uFnHasIncomingFriendInvite->FunctionFlags |= 0x400;

	return HasIncomingFriendInvite_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SupportInGameLogin
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlinePlayerInterfaceEOS::SupportInGameLogin()
{
	static UFunction* uFnSupportInGameLogin = nullptr;

	if (!uFnSupportInGameLogin)
	{
		uFnSupportInGameLogin = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SupportInGameLogin");
	}

	UOnlinePlayerInterfaceEOS_execSupportInGameLogin_Params SupportInGameLogin_Params;
	memset(&SupportInGameLogin_Params, 0, sizeof(SupportInGameLogin_Params));

	this->ProcessEvent(uFnSupportInGameLogin, &SupportInGameLogin_Params, nullptr);

	return SupportInGameLogin_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HasFriendsFunctionality
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlinePlayerInterfaceEOS::HasFriendsFunctionality()
{
	static UFunction* uFnHasFriendsFunctionality = nullptr;

	if (!uFnHasFriendsFunctionality)
	{
		uFnHasFriendsFunctionality = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HasFriendsFunctionality");
	}

	UOnlinePlayerInterfaceEOS_execHasFriendsFunctionality_Params HasFriendsFunctionality_Params;
	memset(&HasFriendsFunctionality_Params, 0, sizeof(HasFriendsFunctionality_Params));

	this->ProcessEvent(uFnHasFriendsFunctionality, &HasFriendsFunctionality_Params, nullptr);

	return HasFriendsFunctionality_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.DeleteMessage
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        MessageIndex                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::DeleteMessage(uint8_t LocalUserNum, int32_t MessageIndex)
{
	static UFunction* uFnDeleteMessage = nullptr;

	if (!uFnDeleteMessage)
	{
		uFnDeleteMessage = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.DeleteMessage");
	}

	UOnlinePlayerInterfaceEOS_execDeleteMessage_Params DeleteMessage_Params;
	memset(&DeleteMessage_Params, 0, sizeof(DeleteMessage_Params));
	memcpy_s(&DeleteMessage_Params.LocalUserNum, sizeof(DeleteMessage_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&DeleteMessage_Params.MessageIndex, sizeof(DeleteMessage_Params.MessageIndex), &MessageIndex, sizeof(MessageIndex));

	this->ProcessEvent(uFnDeleteMessage, &DeleteMessage_Params, nullptr);

	return DeleteMessage_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendMessageReceivedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         MessageDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearFriendMessageReceivedDelegate(uint8_t LocalUserNum, struct FScriptDelegate MessageDelegate)
{
	static UFunction* uFnClearFriendMessageReceivedDelegate = nullptr;

	if (!uFnClearFriendMessageReceivedDelegate)
	{
		uFnClearFriendMessageReceivedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendMessageReceivedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearFriendMessageReceivedDelegate_Params ClearFriendMessageReceivedDelegate_Params;
	memset(&ClearFriendMessageReceivedDelegate_Params, 0, sizeof(ClearFriendMessageReceivedDelegate_Params));
	memcpy_s(&ClearFriendMessageReceivedDelegate_Params.LocalUserNum, sizeof(ClearFriendMessageReceivedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearFriendMessageReceivedDelegate_Params.MessageDelegate, sizeof(ClearFriendMessageReceivedDelegate_Params.MessageDelegate), &MessageDelegate, sizeof(MessageDelegate));

	this->ProcessEvent(uFnClearFriendMessageReceivedDelegate, &ClearFriendMessageReceivedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendMessageReceivedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         MessageDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddFriendMessageReceivedDelegate(uint8_t LocalUserNum, struct FScriptDelegate MessageDelegate)
{
	static UFunction* uFnAddFriendMessageReceivedDelegate = nullptr;

	if (!uFnAddFriendMessageReceivedDelegate)
	{
		uFnAddFriendMessageReceivedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendMessageReceivedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddFriendMessageReceivedDelegate_Params AddFriendMessageReceivedDelegate_Params;
	memset(&AddFriendMessageReceivedDelegate_Params, 0, sizeof(AddFriendMessageReceivedDelegate_Params));
	memcpy_s(&AddFriendMessageReceivedDelegate_Params.LocalUserNum, sizeof(AddFriendMessageReceivedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddFriendMessageReceivedDelegate_Params.MessageDelegate, sizeof(AddFriendMessageReceivedDelegate_Params.MessageDelegate), &MessageDelegate, sizeof(MessageDelegate));

	this->ProcessEvent(uFnAddFriendMessageReceivedDelegate, &AddFriendMessageReceivedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendMessageReceived
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            SendingPlayer                  (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SendingNick                    (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnFriendMessageReceived(uint8_t LocalUserNum, struct FUniqueNetId SendingPlayer, class FString SendingNick, class FString Message)
{
	static UFunction* uFnOnFriendMessageReceived = nullptr;

	if (!uFnOnFriendMessageReceived)
	{
		uFnOnFriendMessageReceived = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendMessageReceived");
	}

	UOnlinePlayerInterfaceEOS_execOnFriendMessageReceived_Params OnFriendMessageReceived_Params;
	memset(&OnFriendMessageReceived_Params, 0, sizeof(OnFriendMessageReceived_Params));
	memcpy_s(&OnFriendMessageReceived_Params.LocalUserNum, sizeof(OnFriendMessageReceived_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OnFriendMessageReceived_Params.SendingPlayer, sizeof(OnFriendMessageReceived_Params.SendingPlayer), &SendingPlayer, sizeof(SendingPlayer));
	memcpy_s(&OnFriendMessageReceived_Params.SendingNick, sizeof(OnFriendMessageReceived_Params.SendingNick), &SendingNick, sizeof(SendingNick));
	memcpy_s(&OnFriendMessageReceived_Params.Message, sizeof(OnFriendMessageReceived_Params.Message), &Message, sizeof(Message));

	this->ProcessEvent(uFnOnFriendMessageReceived, &OnFriendMessageReceived_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendMessages
// [0x00420003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FOnlineFriendMessage> FriendMessages                 (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::GetFriendMessages(uint8_t LocalUserNum, TArray<struct FOnlineFriendMessage>& FriendMessages)
{
	static UFunction* uFnGetFriendMessages = nullptr;

	if (!uFnGetFriendMessages)
	{
		uFnGetFriendMessages = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendMessages");
	}

	UOnlinePlayerInterfaceEOS_execGetFriendMessages_Params GetFriendMessages_Params;
	memset(&GetFriendMessages_Params, 0, sizeof(GetFriendMessages_Params));
	memcpy_s(&GetFriendMessages_Params.LocalUserNum, sizeof(GetFriendMessages_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&GetFriendMessages_Params.FriendMessages, sizeof(GetFriendMessages_Params.FriendMessages), &FriendMessages, sizeof(FriendMessages));

	this->ProcessEvent(uFnGetFriendMessages, &GetFriendMessages_Params, nullptr);

	memcpy_s(&FriendMessages, sizeof(FriendMessages), &GetFriendMessages_Params.FriendMessages, sizeof(GetFriendMessages_Params.FriendMessages));
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearJoinFriendGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearJoinFriendGameCompleteDelegate(struct FScriptDelegate JoinFriendGameCompleteDelegate)
{
	static UFunction* uFnClearJoinFriendGameCompleteDelegate = nullptr;

	if (!uFnClearJoinFriendGameCompleteDelegate)
	{
		uFnClearJoinFriendGameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearJoinFriendGameCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearJoinFriendGameCompleteDelegate_Params ClearJoinFriendGameCompleteDelegate_Params;
	memset(&ClearJoinFriendGameCompleteDelegate_Params, 0, sizeof(ClearJoinFriendGameCompleteDelegate_Params));
	memcpy_s(&ClearJoinFriendGameCompleteDelegate_Params.JoinFriendGameCompleteDelegate, sizeof(ClearJoinFriendGameCompleteDelegate_Params.JoinFriendGameCompleteDelegate), &JoinFriendGameCompleteDelegate, sizeof(JoinFriendGameCompleteDelegate));

	this->ProcessEvent(uFnClearJoinFriendGameCompleteDelegate, &ClearJoinFriendGameCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddJoinFriendGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddJoinFriendGameCompleteDelegate(struct FScriptDelegate JoinFriendGameCompleteDelegate)
{
	static UFunction* uFnAddJoinFriendGameCompleteDelegate = nullptr;

	if (!uFnAddJoinFriendGameCompleteDelegate)
	{
		uFnAddJoinFriendGameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddJoinFriendGameCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddJoinFriendGameCompleteDelegate_Params AddJoinFriendGameCompleteDelegate_Params;
	memset(&AddJoinFriendGameCompleteDelegate_Params, 0, sizeof(AddJoinFriendGameCompleteDelegate_Params));
	memcpy_s(&AddJoinFriendGameCompleteDelegate_Params.JoinFriendGameCompleteDelegate, sizeof(AddJoinFriendGameCompleteDelegate_Params.JoinFriendGameCompleteDelegate), &JoinFriendGameCompleteDelegate, sizeof(JoinFriendGameCompleteDelegate));

	this->ProcessEvent(uFnAddJoinFriendGameCompleteDelegate, &AddJoinFriendGameCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnJoinFriendGameComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnJoinFriendGameComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnJoinFriendGameComplete = nullptr;

	if (!uFnOnJoinFriendGameComplete)
	{
		uFnOnJoinFriendGameComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnJoinFriendGameComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnJoinFriendGameComplete_Params OnJoinFriendGameComplete_Params;
	memset(&OnJoinFriendGameComplete_Params, 0, sizeof(OnJoinFriendGameComplete_Params));
	OnJoinFriendGameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnJoinFriendGameComplete, &OnJoinFriendGameComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.JoinFriendGame
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            Friend                         (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::JoinFriendGame(uint8_t LocalUserNum, struct FUniqueNetId Friend)
{
	static UFunction* uFnJoinFriendGame = nullptr;

	if (!uFnJoinFriendGame)
	{
		uFnJoinFriendGame = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.JoinFriendGame");
	}

	UOnlinePlayerInterfaceEOS_execJoinFriendGame_Params JoinFriendGame_Params;
	memset(&JoinFriendGame_Params, 0, sizeof(JoinFriendGame_Params));
	memcpy_s(&JoinFriendGame_Params.LocalUserNum, sizeof(JoinFriendGame_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&JoinFriendGame_Params.Friend, sizeof(JoinFriendGame_Params.Friend), &Friend, sizeof(Friend));

	this->ProcessEvent(uFnJoinFriendGame, &JoinFriendGame_Params, nullptr);

	return JoinFriendGame_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReceivedGameInviteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearReceivedGameInviteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate)
{
	static UFunction* uFnClearReceivedGameInviteDelegate = nullptr;

	if (!uFnClearReceivedGameInviteDelegate)
	{
		uFnClearReceivedGameInviteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReceivedGameInviteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearReceivedGameInviteDelegate_Params ClearReceivedGameInviteDelegate_Params;
	memset(&ClearReceivedGameInviteDelegate_Params, 0, sizeof(ClearReceivedGameInviteDelegate_Params));
	memcpy_s(&ClearReceivedGameInviteDelegate_Params.LocalUserNum, sizeof(ClearReceivedGameInviteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearReceivedGameInviteDelegate_Params.ReceivedGameInviteDelegate, sizeof(ClearReceivedGameInviteDelegate_Params.ReceivedGameInviteDelegate), &ReceivedGameInviteDelegate, sizeof(ReceivedGameInviteDelegate));

	this->ProcessEvent(uFnClearReceivedGameInviteDelegate, &ClearReceivedGameInviteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReceivedGameInviteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddReceivedGameInviteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate)
{
	static UFunction* uFnAddReceivedGameInviteDelegate = nullptr;

	if (!uFnAddReceivedGameInviteDelegate)
	{
		uFnAddReceivedGameInviteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReceivedGameInviteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddReceivedGameInviteDelegate_Params AddReceivedGameInviteDelegate_Params;
	memset(&AddReceivedGameInviteDelegate_Params, 0, sizeof(AddReceivedGameInviteDelegate_Params));
	memcpy_s(&AddReceivedGameInviteDelegate_Params.LocalUserNum, sizeof(AddReceivedGameInviteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddReceivedGameInviteDelegate_Params.ReceivedGameInviteDelegate, sizeof(AddReceivedGameInviteDelegate_Params.ReceivedGameInviteDelegate), &ReceivedGameInviteDelegate, sizeof(ReceivedGameInviteDelegate));

	this->ProcessEvent(uFnAddReceivedGameInviteDelegate, &AddReceivedGameInviteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReceivedGameInvite
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  InviterName                    (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnReceivedGameInvite(uint8_t LocalUserNum, class FString InviterName)
{
	static UFunction* uFnOnReceivedGameInvite = nullptr;

	if (!uFnOnReceivedGameInvite)
	{
		uFnOnReceivedGameInvite = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReceivedGameInvite");
	}

	UOnlinePlayerInterfaceEOS_execOnReceivedGameInvite_Params OnReceivedGameInvite_Params;
	memset(&OnReceivedGameInvite_Params, 0, sizeof(OnReceivedGameInvite_Params));
	memcpy_s(&OnReceivedGameInvite_Params.LocalUserNum, sizeof(OnReceivedGameInvite_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OnReceivedGameInvite_Params.InviterName, sizeof(OnReceivedGameInvite_Params.InviterName), &InviterName, sizeof(InviterName));

	this->ProcessEvent(uFnOnReceivedGameInvite, &OnReceivedGameInvite_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendGameInviteToFriends
// [0x00024001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FUniqueNetId>    Friends                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Text                           (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::SendGameInviteToFriends(uint8_t LocalUserNum, TArray<struct FUniqueNetId> Friends, class FString Text)
{
	static UFunction* uFnSendGameInviteToFriends = nullptr;

	if (!uFnSendGameInviteToFriends)
	{
		uFnSendGameInviteToFriends = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendGameInviteToFriends");
	}

	UOnlinePlayerInterfaceEOS_execSendGameInviteToFriends_Params SendGameInviteToFriends_Params;
	memset(&SendGameInviteToFriends_Params, 0, sizeof(SendGameInviteToFriends_Params));
	memcpy_s(&SendGameInviteToFriends_Params.LocalUserNum, sizeof(SendGameInviteToFriends_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&SendGameInviteToFriends_Params.Friends, sizeof(SendGameInviteToFriends_Params.Friends), &Friends, sizeof(Friends));
	memcpy_s(&SendGameInviteToFriends_Params.Text, sizeof(SendGameInviteToFriends_Params.Text), &Text, sizeof(Text));

	this->ProcessEvent(uFnSendGameInviteToFriends, &SendGameInviteToFriends_Params, nullptr);

	return SendGameInviteToFriends_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendGameInviteToFriend
// [0x00024001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            Friend                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Text                           (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::SendGameInviteToFriend(uint8_t LocalUserNum, struct FUniqueNetId Friend, class FString Text)
{
	static UFunction* uFnSendGameInviteToFriend = nullptr;

	if (!uFnSendGameInviteToFriend)
	{
		uFnSendGameInviteToFriend = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendGameInviteToFriend");
	}

	UOnlinePlayerInterfaceEOS_execSendGameInviteToFriend_Params SendGameInviteToFriend_Params;
	memset(&SendGameInviteToFriend_Params, 0, sizeof(SendGameInviteToFriend_Params));
	memcpy_s(&SendGameInviteToFriend_Params.LocalUserNum, sizeof(SendGameInviteToFriend_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&SendGameInviteToFriend_Params.Friend, sizeof(SendGameInviteToFriend_Params.Friend), &Friend, sizeof(Friend));
	memcpy_s(&SendGameInviteToFriend_Params.Text, sizeof(SendGameInviteToFriend_Params.Text), &Text, sizeof(Text));

	this->ProcessEvent(uFnSendGameInviteToFriend, &SendGameInviteToFriend_Params, nullptr);

	return SendGameInviteToFriend_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendMessageToFriend
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            Friend                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::SendMessageToFriendW(uint8_t LocalUserNum, struct FUniqueNetId Friend, class FString Message)
{
	static UFunction* uFnSendMessageToFriendW = nullptr;

	if (!uFnSendMessageToFriendW)
	{
		uFnSendMessageToFriendW = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendMessageToFriend");
	}

	UOnlinePlayerInterfaceEOS_execSendMessageToFriendW_Params SendMessageToFriendW_Params;
	memset(&SendMessageToFriendW_Params, 0, sizeof(SendMessageToFriendW_Params));
	memcpy_s(&SendMessageToFriendW_Params.LocalUserNum, sizeof(SendMessageToFriendW_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&SendMessageToFriendW_Params.Friend, sizeof(SendMessageToFriendW_Params.Friend), &Friend, sizeof(Friend));
	memcpy_s(&SendMessageToFriendW_Params.Message, sizeof(SendMessageToFriendW_Params.Message), &Message, sizeof(Message));

	this->ProcessEvent(uFnSendMessageToFriendW, &SendMessageToFriendW_Params, nullptr);

	return SendMessageToFriendW_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendInviteCanceledDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearFriendInviteCanceledDelegate(uint8_t LocalUserNum, struct FScriptDelegate InviteDelegate)
{
	static UFunction* uFnClearFriendInviteCanceledDelegate = nullptr;

	if (!uFnClearFriendInviteCanceledDelegate)
	{
		uFnClearFriendInviteCanceledDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendInviteCanceledDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearFriendInviteCanceledDelegate_Params ClearFriendInviteCanceledDelegate_Params;
	memset(&ClearFriendInviteCanceledDelegate_Params, 0, sizeof(ClearFriendInviteCanceledDelegate_Params));
	memcpy_s(&ClearFriendInviteCanceledDelegate_Params.LocalUserNum, sizeof(ClearFriendInviteCanceledDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearFriendInviteCanceledDelegate_Params.InviteDelegate, sizeof(ClearFriendInviteCanceledDelegate_Params.InviteDelegate), &InviteDelegate, sizeof(InviteDelegate));

	this->ProcessEvent(uFnClearFriendInviteCanceledDelegate, &ClearFriendInviteCanceledDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendInviteCanceledDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddFriendInviteCanceledDelegate(uint8_t LocalUserNum, struct FScriptDelegate InviteDelegate)
{
	static UFunction* uFnAddFriendInviteCanceledDelegate = nullptr;

	if (!uFnAddFriendInviteCanceledDelegate)
	{
		uFnAddFriendInviteCanceledDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendInviteCanceledDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddFriendInviteCanceledDelegate_Params AddFriendInviteCanceledDelegate_Params;
	memset(&AddFriendInviteCanceledDelegate_Params, 0, sizeof(AddFriendInviteCanceledDelegate_Params));
	memcpy_s(&AddFriendInviteCanceledDelegate_Params.LocalUserNum, sizeof(AddFriendInviteCanceledDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddFriendInviteCanceledDelegate_Params.InviteDelegate, sizeof(AddFriendInviteCanceledDelegate_Params.InviteDelegate), &InviteDelegate, sizeof(InviteDelegate));

	this->ProcessEvent(uFnAddFriendInviteCanceledDelegate, &AddFriendInviteCanceledDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendInviteCanceled
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            CanceledUserId                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnFriendInviteCanceled(uint8_t LocalUserNum, struct FUniqueNetId CanceledUserId)
{
	static UFunction* uFnOnFriendInviteCanceled = nullptr;

	if (!uFnOnFriendInviteCanceled)
	{
		uFnOnFriendInviteCanceled = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendInviteCanceled");
	}

	UOnlinePlayerInterfaceEOS_execOnFriendInviteCanceled_Params OnFriendInviteCanceled_Params;
	memset(&OnFriendInviteCanceled_Params, 0, sizeof(OnFriendInviteCanceled_Params));
	memcpy_s(&OnFriendInviteCanceled_Params.LocalUserNum, sizeof(OnFriendInviteCanceled_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OnFriendInviteCanceled_Params.CanceledUserId, sizeof(OnFriendInviteCanceled_Params.CanceledUserId), &CanceledUserId, sizeof(CanceledUserId));

	this->ProcessEvent(uFnOnFriendInviteCanceled, &OnFriendInviteCanceled_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendInviteReceivedDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearFriendInviteReceivedDelegate(uint8_t LocalUserNum, struct FScriptDelegate InviteDelegate)
{
	static UFunction* uFnClearFriendInviteReceivedDelegate = nullptr;

	if (!uFnClearFriendInviteReceivedDelegate)
	{
		uFnClearFriendInviteReceivedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendInviteReceivedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearFriendInviteReceivedDelegate_Params ClearFriendInviteReceivedDelegate_Params;
	memset(&ClearFriendInviteReceivedDelegate_Params, 0, sizeof(ClearFriendInviteReceivedDelegate_Params));
	memcpy_s(&ClearFriendInviteReceivedDelegate_Params.LocalUserNum, sizeof(ClearFriendInviteReceivedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearFriendInviteReceivedDelegate_Params.InviteDelegate, sizeof(ClearFriendInviteReceivedDelegate_Params.InviteDelegate), &InviteDelegate, sizeof(InviteDelegate));

	this->ProcessEvent(uFnClearFriendInviteReceivedDelegate, &ClearFriendInviteReceivedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendInviteReceivedDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddFriendInviteReceivedDelegate(uint8_t LocalUserNum, struct FScriptDelegate InviteDelegate)
{
	static UFunction* uFnAddFriendInviteReceivedDelegate = nullptr;

	if (!uFnAddFriendInviteReceivedDelegate)
	{
		uFnAddFriendInviteReceivedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendInviteReceivedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddFriendInviteReceivedDelegate_Params AddFriendInviteReceivedDelegate_Params;
	memset(&AddFriendInviteReceivedDelegate_Params, 0, sizeof(AddFriendInviteReceivedDelegate_Params));
	memcpy_s(&AddFriendInviteReceivedDelegate_Params.LocalUserNum, sizeof(AddFriendInviteReceivedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddFriendInviteReceivedDelegate_Params.InviteDelegate, sizeof(AddFriendInviteReceivedDelegate_Params.InviteDelegate), &InviteDelegate, sizeof(InviteDelegate));

	this->ProcessEvent(uFnAddFriendInviteReceivedDelegate, &AddFriendInviteReceivedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendInviteReceived
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            RequestingPlayer               (CPF_Parm | CPF_NeedCtorLink)
// class FString                  RequestingNick                 (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnFriendInviteReceived(uint8_t LocalUserNum, struct FUniqueNetId RequestingPlayer, class FString RequestingNick, class FString Message)
{
	static UFunction* uFnOnFriendInviteReceived = nullptr;

	if (!uFnOnFriendInviteReceived)
	{
		uFnOnFriendInviteReceived = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendInviteReceived");
	}

	UOnlinePlayerInterfaceEOS_execOnFriendInviteReceived_Params OnFriendInviteReceived_Params;
	memset(&OnFriendInviteReceived_Params, 0, sizeof(OnFriendInviteReceived_Params));
	memcpy_s(&OnFriendInviteReceived_Params.LocalUserNum, sizeof(OnFriendInviteReceived_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OnFriendInviteReceived_Params.RequestingPlayer, sizeof(OnFriendInviteReceived_Params.RequestingPlayer), &RequestingPlayer, sizeof(RequestingPlayer));
	memcpy_s(&OnFriendInviteReceived_Params.RequestingNick, sizeof(OnFriendInviteReceived_Params.RequestingNick), &RequestingNick, sizeof(RequestingNick));
	memcpy_s(&OnFriendInviteReceived_Params.Message, sizeof(OnFriendInviteReceived_Params.Message), &Message, sizeof(Message));

	this->ProcessEvent(uFnOnFriendInviteReceived, &OnFriendInviteReceived_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RemoveFriend
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            FormerFriend                   (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::RemoveFriend(uint8_t LocalUserNum, struct FUniqueNetId FormerFriend)
{
	static UFunction* uFnRemoveFriend = nullptr;

	if (!uFnRemoveFriend)
	{
		uFnRemoveFriend = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RemoveFriend");
	}

	UOnlinePlayerInterfaceEOS_execRemoveFriend_Params RemoveFriend_Params;
	memset(&RemoveFriend_Params, 0, sizeof(RemoveFriend_Params));
	memcpy_s(&RemoveFriend_Params.LocalUserNum, sizeof(RemoveFriend_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&RemoveFriend_Params.FormerFriend, sizeof(RemoveFriend_Params.FormerFriend), &FormerFriend, sizeof(FormerFriend));

	this->ProcessEvent(uFnRemoveFriend, &RemoveFriend_Params, nullptr);

	return RemoveFriend_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearRemoveFriendCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RemoveFriendDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearRemoveFriendCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RemoveFriendDelegate)
{
	static UFunction* uFnClearRemoveFriendCompleteDelegate = nullptr;

	if (!uFnClearRemoveFriendCompleteDelegate)
	{
		uFnClearRemoveFriendCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearRemoveFriendCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearRemoveFriendCompleteDelegate_Params ClearRemoveFriendCompleteDelegate_Params;
	memset(&ClearRemoveFriendCompleteDelegate_Params, 0, sizeof(ClearRemoveFriendCompleteDelegate_Params));
	memcpy_s(&ClearRemoveFriendCompleteDelegate_Params.LocalUserNum, sizeof(ClearRemoveFriendCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearRemoveFriendCompleteDelegate_Params.RemoveFriendDelegate, sizeof(ClearRemoveFriendCompleteDelegate_Params.RemoveFriendDelegate), &RemoveFriendDelegate, sizeof(RemoveFriendDelegate));

	this->ProcessEvent(uFnClearRemoveFriendCompleteDelegate, &ClearRemoveFriendCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddRemoveFriendCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RemoveFriendDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddRemoveFriendCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RemoveFriendDelegate)
{
	static UFunction* uFnAddRemoveFriendCompleteDelegate = nullptr;

	if (!uFnAddRemoveFriendCompleteDelegate)
	{
		uFnAddRemoveFriendCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddRemoveFriendCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddRemoveFriendCompleteDelegate_Params AddRemoveFriendCompleteDelegate_Params;
	memset(&AddRemoveFriendCompleteDelegate_Params, 0, sizeof(AddRemoveFriendCompleteDelegate_Params));
	memcpy_s(&AddRemoveFriendCompleteDelegate_Params.LocalUserNum, sizeof(AddRemoveFriendCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddRemoveFriendCompleteDelegate_Params.RemoveFriendDelegate, sizeof(AddRemoveFriendCompleteDelegate_Params.RemoveFriendDelegate), &RemoveFriendDelegate, sizeof(RemoveFriendDelegate));

	this->ProcessEvent(uFnAddRemoveFriendCompleteDelegate, &AddRemoveFriendCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRemoveFriendComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FUniqueNetId            RemovedID                      (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnRemoveFriendComplete(bool bWasSuccessful, struct FUniqueNetId RemovedID)
{
	static UFunction* uFnOnRemoveFriendComplete = nullptr;

	if (!uFnOnRemoveFriendComplete)
	{
		uFnOnRemoveFriendComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRemoveFriendComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnRemoveFriendComplete_Params OnRemoveFriendComplete_Params;
	memset(&OnRemoveFriendComplete_Params, 0, sizeof(OnRemoveFriendComplete_Params));
	OnRemoveFriendComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnRemoveFriendComplete_Params.RemovedID, sizeof(OnRemoveFriendComplete_Params.RemovedID), &RemovedID, sizeof(RemovedID));

	this->ProcessEvent(uFnOnRemoveFriendComplete, &OnRemoveFriendComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.DenyFriendInvite
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            RequestingPlayer               (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::DenyFriendInvite(uint8_t LocalUserNum, struct FUniqueNetId RequestingPlayer)
{
	static UFunction* uFnDenyFriendInvite = nullptr;

	if (!uFnDenyFriendInvite)
	{
		uFnDenyFriendInvite = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.DenyFriendInvite");
	}

	UOnlinePlayerInterfaceEOS_execDenyFriendInvite_Params DenyFriendInvite_Params;
	memset(&DenyFriendInvite_Params, 0, sizeof(DenyFriendInvite_Params));
	memcpy_s(&DenyFriendInvite_Params.LocalUserNum, sizeof(DenyFriendInvite_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&DenyFriendInvite_Params.RequestingPlayer, sizeof(DenyFriendInvite_Params.RequestingPlayer), &RequestingPlayer, sizeof(RequestingPlayer));

	this->ProcessEvent(uFnDenyFriendInvite, &DenyFriendInvite_Params, nullptr);

	return DenyFriendInvite_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearDenyFriendInviteCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearDenyFriendInviteCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnClearDenyFriendInviteCompleteDelegate = nullptr;

	if (!uFnClearDenyFriendInviteCompleteDelegate)
	{
		uFnClearDenyFriendInviteCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearDenyFriendInviteCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearDenyFriendInviteCompleteDelegate_Params ClearDenyFriendInviteCompleteDelegate_Params;
	memset(&ClearDenyFriendInviteCompleteDelegate_Params, 0, sizeof(ClearDenyFriendInviteCompleteDelegate_Params));
	memcpy_s(&ClearDenyFriendInviteCompleteDelegate_Params.LocalUserNum, sizeof(ClearDenyFriendInviteCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearDenyFriendInviteCompleteDelegate_Params.FriendDelegate, sizeof(ClearDenyFriendInviteCompleteDelegate_Params.FriendDelegate), &FriendDelegate, sizeof(FriendDelegate));

	this->ProcessEvent(uFnClearDenyFriendInviteCompleteDelegate, &ClearDenyFriendInviteCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddDenyFriendInviteCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddDenyFriendInviteCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnAddDenyFriendInviteCompleteDelegate = nullptr;

	if (!uFnAddDenyFriendInviteCompleteDelegate)
	{
		uFnAddDenyFriendInviteCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddDenyFriendInviteCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddDenyFriendInviteCompleteDelegate_Params AddDenyFriendInviteCompleteDelegate_Params;
	memset(&AddDenyFriendInviteCompleteDelegate_Params, 0, sizeof(AddDenyFriendInviteCompleteDelegate_Params));
	memcpy_s(&AddDenyFriendInviteCompleteDelegate_Params.LocalUserNum, sizeof(AddDenyFriendInviteCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddDenyFriendInviteCompleteDelegate_Params.FriendDelegate, sizeof(AddDenyFriendInviteCompleteDelegate_Params.FriendDelegate), &FriendDelegate, sizeof(FriendDelegate));

	this->ProcessEvent(uFnAddDenyFriendInviteCompleteDelegate, &AddDenyFriendInviteCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnDenyFriendInviteComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            FriendId                       (CPF_Parm | CPF_NeedCtorLink)
// class UError*                  Error                          (CPF_Const | CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnDenyFriendInviteComplete(struct FUniqueNetId FriendId, class UError* Error)
{
	static UFunction* uFnOnDenyFriendInviteComplete = nullptr;

	if (!uFnOnDenyFriendInviteComplete)
	{
		uFnOnDenyFriendInviteComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnDenyFriendInviteComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnDenyFriendInviteComplete_Params OnDenyFriendInviteComplete_Params;
	memset(&OnDenyFriendInviteComplete_Params, 0, sizeof(OnDenyFriendInviteComplete_Params));
	memcpy_s(&OnDenyFriendInviteComplete_Params.FriendId, sizeof(OnDenyFriendInviteComplete_Params.FriendId), &FriendId, sizeof(FriendId));
	memcpy_s(&OnDenyFriendInviteComplete_Params.Error, sizeof(OnDenyFriendInviteComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnDenyFriendInviteComplete, &OnDenyFriendInviteComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AcceptFriendInvite
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            RequestingPlayer               (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::AcceptFriendInvite(uint8_t LocalUserNum, struct FUniqueNetId RequestingPlayer)
{
	static UFunction* uFnAcceptFriendInvite = nullptr;

	if (!uFnAcceptFriendInvite)
	{
		uFnAcceptFriendInvite = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AcceptFriendInvite");
	}

	UOnlinePlayerInterfaceEOS_execAcceptFriendInvite_Params AcceptFriendInvite_Params;
	memset(&AcceptFriendInvite_Params, 0, sizeof(AcceptFriendInvite_Params));
	memcpy_s(&AcceptFriendInvite_Params.LocalUserNum, sizeof(AcceptFriendInvite_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AcceptFriendInvite_Params.RequestingPlayer, sizeof(AcceptFriendInvite_Params.RequestingPlayer), &RequestingPlayer, sizeof(RequestingPlayer));

	this->ProcessEvent(uFnAcceptFriendInvite, &AcceptFriendInvite_Params, nullptr);

	return AcceptFriendInvite_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAcceptFriendInviteCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearAcceptFriendInviteCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnClearAcceptFriendInviteCompleteDelegate = nullptr;

	if (!uFnClearAcceptFriendInviteCompleteDelegate)
	{
		uFnClearAcceptFriendInviteCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAcceptFriendInviteCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearAcceptFriendInviteCompleteDelegate_Params ClearAcceptFriendInviteCompleteDelegate_Params;
	memset(&ClearAcceptFriendInviteCompleteDelegate_Params, 0, sizeof(ClearAcceptFriendInviteCompleteDelegate_Params));
	memcpy_s(&ClearAcceptFriendInviteCompleteDelegate_Params.LocalUserNum, sizeof(ClearAcceptFriendInviteCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearAcceptFriendInviteCompleteDelegate_Params.FriendDelegate, sizeof(ClearAcceptFriendInviteCompleteDelegate_Params.FriendDelegate), &FriendDelegate, sizeof(FriendDelegate));

	this->ProcessEvent(uFnClearAcceptFriendInviteCompleteDelegate, &ClearAcceptFriendInviteCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAcceptFriendInviteCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddAcceptFriendInviteCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnAddAcceptFriendInviteCompleteDelegate = nullptr;

	if (!uFnAddAcceptFriendInviteCompleteDelegate)
	{
		uFnAddAcceptFriendInviteCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAcceptFriendInviteCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddAcceptFriendInviteCompleteDelegate_Params AddAcceptFriendInviteCompleteDelegate_Params;
	memset(&AddAcceptFriendInviteCompleteDelegate_Params, 0, sizeof(AddAcceptFriendInviteCompleteDelegate_Params));
	memcpy_s(&AddAcceptFriendInviteCompleteDelegate_Params.LocalUserNum, sizeof(AddAcceptFriendInviteCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddAcceptFriendInviteCompleteDelegate_Params.FriendDelegate, sizeof(AddAcceptFriendInviteCompleteDelegate_Params.FriendDelegate), &FriendDelegate, sizeof(FriendDelegate));

	this->ProcessEvent(uFnAddAcceptFriendInviteCompleteDelegate, &AddAcceptFriendInviteCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAcceptFriendInviteComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            FriendId                       (CPF_Parm | CPF_NeedCtorLink)
// class UError*                  Error                          (CPF_Const | CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnAcceptFriendInviteComplete(struct FUniqueNetId FriendId, class UError* Error)
{
	static UFunction* uFnOnAcceptFriendInviteComplete = nullptr;

	if (!uFnOnAcceptFriendInviteComplete)
	{
		uFnOnAcceptFriendInviteComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAcceptFriendInviteComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnAcceptFriendInviteComplete_Params OnAcceptFriendInviteComplete_Params;
	memset(&OnAcceptFriendInviteComplete_Params, 0, sizeof(OnAcceptFriendInviteComplete_Params));
	memcpy_s(&OnAcceptFriendInviteComplete_Params.FriendId, sizeof(OnAcceptFriendInviteComplete_Params.FriendId), &FriendId, sizeof(FriendId));
	memcpy_s(&OnAcceptFriendInviteComplete_Params.Error, sizeof(OnAcceptFriendInviteComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnAcceptFriendInviteComplete, &OnAcceptFriendInviteComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAddFriendByNameCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearAddFriendByNameCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnClearAddFriendByNameCompleteDelegate = nullptr;

	if (!uFnClearAddFriendByNameCompleteDelegate)
	{
		uFnClearAddFriendByNameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAddFriendByNameCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearAddFriendByNameCompleteDelegate_Params ClearAddFriendByNameCompleteDelegate_Params;
	memset(&ClearAddFriendByNameCompleteDelegate_Params, 0, sizeof(ClearAddFriendByNameCompleteDelegate_Params));
	memcpy_s(&ClearAddFriendByNameCompleteDelegate_Params.LocalUserNum, sizeof(ClearAddFriendByNameCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearAddFriendByNameCompleteDelegate_Params.FriendDelegate, sizeof(ClearAddFriendByNameCompleteDelegate_Params.FriendDelegate), &FriendDelegate, sizeof(FriendDelegate));

	this->ProcessEvent(uFnClearAddFriendByNameCompleteDelegate, &ClearAddFriendByNameCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAddFriendByNameCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddAddFriendByNameCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnAddAddFriendByNameCompleteDelegate = nullptr;

	if (!uFnAddAddFriendByNameCompleteDelegate)
	{
		uFnAddAddFriendByNameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAddFriendByNameCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddAddFriendByNameCompleteDelegate_Params AddAddFriendByNameCompleteDelegate_Params;
	memset(&AddAddFriendByNameCompleteDelegate_Params, 0, sizeof(AddAddFriendByNameCompleteDelegate_Params));
	memcpy_s(&AddAddFriendByNameCompleteDelegate_Params.LocalUserNum, sizeof(AddAddFriendByNameCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddAddFriendByNameCompleteDelegate_Params.FriendDelegate, sizeof(AddAddFriendByNameCompleteDelegate_Params.FriendDelegate), &FriendDelegate, sizeof(FriendDelegate));

	this->ProcessEvent(uFnAddAddFriendByNameCompleteDelegate, &AddAddFriendByNameCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAddFriendByNameComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnAddFriendByNameComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnAddFriendByNameComplete = nullptr;

	if (!uFnOnAddFriendByNameComplete)
	{
		uFnOnAddFriendByNameComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAddFriendByNameComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnAddFriendByNameComplete_Params OnAddFriendByNameComplete_Params;
	memset(&OnAddFriendByNameComplete_Params, 0, sizeof(OnAddFriendByNameComplete_Params));
	OnAddFriendByNameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnAddFriendByNameComplete, &OnAddFriendByNameComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendByName
// [0x00024001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  FriendName                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::AddFriendByName(uint8_t LocalUserNum, class FString FriendName, class FString Message)
{
	static UFunction* uFnAddFriendByName = nullptr;

	if (!uFnAddFriendByName)
	{
		uFnAddFriendByName = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendByName");
	}

	UOnlinePlayerInterfaceEOS_execAddFriendByName_Params AddFriendByName_Params;
	memset(&AddFriendByName_Params, 0, sizeof(AddFriendByName_Params));
	memcpy_s(&AddFriendByName_Params.LocalUserNum, sizeof(AddFriendByName_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddFriendByName_Params.FriendName, sizeof(AddFriendByName_Params.FriendName), &FriendName, sizeof(FriendName));
	memcpy_s(&AddFriendByName_Params.Message, sizeof(AddFriendByName_Params.Message), &Message, sizeof(Message));

	this->ProcessEvent(uFnAddFriendByName, &AddFriendByName_Params, nullptr);

	return AddFriendByName_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.QueryUserByDisplayName
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  DisplayName                    (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::QueryUserByDisplayName(uint8_t LocalUserNum, class FString DisplayName)
{
	static UFunction* uFnQueryUserByDisplayName = nullptr;

	if (!uFnQueryUserByDisplayName)
	{
		uFnQueryUserByDisplayName = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.QueryUserByDisplayName");
	}

	UOnlinePlayerInterfaceEOS_execQueryUserByDisplayName_Params QueryUserByDisplayName_Params;
	memset(&QueryUserByDisplayName_Params, 0, sizeof(QueryUserByDisplayName_Params));
	memcpy_s(&QueryUserByDisplayName_Params.LocalUserNum, sizeof(QueryUserByDisplayName_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&QueryUserByDisplayName_Params.DisplayName, sizeof(QueryUserByDisplayName_Params.DisplayName), &DisplayName, sizeof(DisplayName));

	uFnQueryUserByDisplayName->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnQueryUserByDisplayName, &QueryUserByDisplayName_Params, nullptr);
	uFnQueryUserByDisplayName->FunctionFlags |= 0x400;

	return QueryUserByDisplayName_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearQueryUserByDisplayNameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         QueryDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearQueryUserByDisplayNameCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate QueryDelegate)
{
	static UFunction* uFnClearQueryUserByDisplayNameCompleteDelegate = nullptr;

	if (!uFnClearQueryUserByDisplayNameCompleteDelegate)
	{
		uFnClearQueryUserByDisplayNameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearQueryUserByDisplayNameCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearQueryUserByDisplayNameCompleteDelegate_Params ClearQueryUserByDisplayNameCompleteDelegate_Params;
	memset(&ClearQueryUserByDisplayNameCompleteDelegate_Params, 0, sizeof(ClearQueryUserByDisplayNameCompleteDelegate_Params));
	memcpy_s(&ClearQueryUserByDisplayNameCompleteDelegate_Params.LocalUserNum, sizeof(ClearQueryUserByDisplayNameCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearQueryUserByDisplayNameCompleteDelegate_Params.QueryDelegate, sizeof(ClearQueryUserByDisplayNameCompleteDelegate_Params.QueryDelegate), &QueryDelegate, sizeof(QueryDelegate));

	this->ProcessEvent(uFnClearQueryUserByDisplayNameCompleteDelegate, &ClearQueryUserByDisplayNameCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddQueryUserByDisplayNameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         QueryDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddQueryUserByDisplayNameCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate QueryDelegate)
{
	static UFunction* uFnAddQueryUserByDisplayNameCompleteDelegate = nullptr;

	if (!uFnAddQueryUserByDisplayNameCompleteDelegate)
	{
		uFnAddQueryUserByDisplayNameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddQueryUserByDisplayNameCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddQueryUserByDisplayNameCompleteDelegate_Params AddQueryUserByDisplayNameCompleteDelegate_Params;
	memset(&AddQueryUserByDisplayNameCompleteDelegate_Params, 0, sizeof(AddQueryUserByDisplayNameCompleteDelegate_Params));
	memcpy_s(&AddQueryUserByDisplayNameCompleteDelegate_Params.LocalUserNum, sizeof(AddQueryUserByDisplayNameCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddQueryUserByDisplayNameCompleteDelegate_Params.QueryDelegate, sizeof(AddQueryUserByDisplayNameCompleteDelegate_Params.QueryDelegate), &QueryDelegate, sizeof(QueryDelegate));

	this->ProcessEvent(uFnAddQueryUserByDisplayNameCompleteDelegate, &AddQueryUserByDisplayNameCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnQueryUserByDisplayName
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)
// class FString                  QueriedDisplayName             (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            UserId                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnQueryUserByDisplayName(bool bWasSuccessful, class FString QueriedDisplayName, struct FUniqueNetId UserId)
{
	static UFunction* uFnOnQueryUserByDisplayName = nullptr;

	if (!uFnOnQueryUserByDisplayName)
	{
		uFnOnQueryUserByDisplayName = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnQueryUserByDisplayName");
	}

	UOnlinePlayerInterfaceEOS_execOnQueryUserByDisplayName_Params OnQueryUserByDisplayName_Params;
	memset(&OnQueryUserByDisplayName_Params, 0, sizeof(OnQueryUserByDisplayName_Params));
	OnQueryUserByDisplayName_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryUserByDisplayName_Params.QueriedDisplayName, sizeof(OnQueryUserByDisplayName_Params.QueriedDisplayName), &QueriedDisplayName, sizeof(QueriedDisplayName));
	memcpy_s(&OnQueryUserByDisplayName_Params.UserId, sizeof(OnQueryUserByDisplayName_Params.UserId), &UserId, sizeof(UserId));

	this->ProcessEvent(uFnOnQueryUserByDisplayName, &OnQueryUserByDisplayName_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriend
// [0x00024001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            NewFriend                      (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::AddFriend(uint8_t LocalUserNum, struct FUniqueNetId NewFriend, class FString Message)
{
	static UFunction* uFnAddFriend = nullptr;

	if (!uFnAddFriend)
	{
		uFnAddFriend = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriend");
	}

	UOnlinePlayerInterfaceEOS_execAddFriend_Params AddFriend_Params;
	memset(&AddFriend_Params, 0, sizeof(AddFriend_Params));
	memcpy_s(&AddFriend_Params.LocalUserNum, sizeof(AddFriend_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddFriend_Params.NewFriend, sizeof(AddFriend_Params.NewFriend), &NewFriend, sizeof(NewFriend));
	memcpy_s(&AddFriend_Params.Message, sizeof(AddFriend_Params.Message), &Message, sizeof(Message));

	this->ProcessEvent(uFnAddFriend, &AddFriend_Params, nullptr);

	return AddFriend_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAddFriendCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearAddFriendCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnClearAddFriendCompleteDelegate = nullptr;

	if (!uFnClearAddFriendCompleteDelegate)
	{
		uFnClearAddFriendCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAddFriendCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearAddFriendCompleteDelegate_Params ClearAddFriendCompleteDelegate_Params;
	memset(&ClearAddFriendCompleteDelegate_Params, 0, sizeof(ClearAddFriendCompleteDelegate_Params));
	memcpy_s(&ClearAddFriendCompleteDelegate_Params.LocalUserNum, sizeof(ClearAddFriendCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearAddFriendCompleteDelegate_Params.FriendDelegate, sizeof(ClearAddFriendCompleteDelegate_Params.FriendDelegate), &FriendDelegate, sizeof(FriendDelegate));

	this->ProcessEvent(uFnClearAddFriendCompleteDelegate, &ClearAddFriendCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAddFriendCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddAddFriendCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnAddAddFriendCompleteDelegate = nullptr;

	if (!uFnAddAddFriendCompleteDelegate)
	{
		uFnAddAddFriendCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAddFriendCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddAddFriendCompleteDelegate_Params AddAddFriendCompleteDelegate_Params;
	memset(&AddAddFriendCompleteDelegate_Params, 0, sizeof(AddAddFriendCompleteDelegate_Params));
	memcpy_s(&AddAddFriendCompleteDelegate_Params.LocalUserNum, sizeof(AddAddFriendCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddAddFriendCompleteDelegate_Params.FriendDelegate, sizeof(AddAddFriendCompleteDelegate_Params.FriendDelegate), &FriendDelegate, sizeof(FriendDelegate));

	this->ProcessEvent(uFnAddAddFriendCompleteDelegate, &AddAddFriendCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAddFriendComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            NewFriendId                    (CPF_Parm | CPF_NeedCtorLink)
// class UError*                  Error                          (CPF_Const | CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnAddFriendComplete(struct FUniqueNetId NewFriendId, class UError* Error)
{
	static UFunction* uFnOnAddFriendComplete = nullptr;

	if (!uFnOnAddFriendComplete)
	{
		uFnOnAddFriendComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAddFriendComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnAddFriendComplete_Params OnAddFriendComplete_Params;
	memset(&OnAddFriendComplete_Params, 0, sizeof(OnAddFriendComplete_Params));
	memcpy_s(&OnAddFriendComplete_Params.NewFriendId, sizeof(OnAddFriendComplete_Params.NewFriendId), &NewFriendId, sizeof(NewFriendId));
	memcpy_s(&OnAddFriendComplete_Params.Error, sizeof(OnAddFriendComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnAddFriendComplete, &OnAddFriendComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetKeyboardInputResults
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        bWasCanceled                   (CPF_Parm | CPF_OutParm)

class FString UOnlinePlayerInterfaceEOS::GetKeyboardInputResults(uint8_t& bWasCanceled)
{
	static UFunction* uFnGetKeyboardInputResults = nullptr;

	if (!uFnGetKeyboardInputResults)
	{
		uFnGetKeyboardInputResults = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetKeyboardInputResults");
	}

	UOnlinePlayerInterfaceEOS_execGetKeyboardInputResults_Params GetKeyboardInputResults_Params;
	memset(&GetKeyboardInputResults_Params, 0, sizeof(GetKeyboardInputResults_Params));
	memcpy_s(&GetKeyboardInputResults_Params.bWasCanceled, sizeof(GetKeyboardInputResults_Params.bWasCanceled), &bWasCanceled, sizeof(bWasCanceled));

	this->ProcessEvent(uFnGetKeyboardInputResults, &GetKeyboardInputResults_Params, nullptr);

	memcpy_s(&bWasCanceled, sizeof(bWasCanceled), &GetKeyboardInputResults_Params.bWasCanceled, sizeof(GetKeyboardInputResults_Params.bWasCanceled));

	return GetKeyboardInputResults_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearKeyboardInputDoneDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InputDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearKeyboardInputDoneDelegate(struct FScriptDelegate InputDelegate)
{
	static UFunction* uFnClearKeyboardInputDoneDelegate = nullptr;

	if (!uFnClearKeyboardInputDoneDelegate)
	{
		uFnClearKeyboardInputDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearKeyboardInputDoneDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearKeyboardInputDoneDelegate_Params ClearKeyboardInputDoneDelegate_Params;
	memset(&ClearKeyboardInputDoneDelegate_Params, 0, sizeof(ClearKeyboardInputDoneDelegate_Params));
	memcpy_s(&ClearKeyboardInputDoneDelegate_Params.InputDelegate, sizeof(ClearKeyboardInputDoneDelegate_Params.InputDelegate), &InputDelegate, sizeof(InputDelegate));

	this->ProcessEvent(uFnClearKeyboardInputDoneDelegate, &ClearKeyboardInputDoneDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddKeyboardInputDoneDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InputDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddKeyboardInputDoneDelegate(struct FScriptDelegate InputDelegate)
{
	static UFunction* uFnAddKeyboardInputDoneDelegate = nullptr;

	if (!uFnAddKeyboardInputDoneDelegate)
	{
		uFnAddKeyboardInputDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddKeyboardInputDoneDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddKeyboardInputDoneDelegate_Params AddKeyboardInputDoneDelegate_Params;
	memset(&AddKeyboardInputDoneDelegate_Params, 0, sizeof(AddKeyboardInputDoneDelegate_Params));
	memcpy_s(&AddKeyboardInputDoneDelegate_Params.InputDelegate, sizeof(AddKeyboardInputDoneDelegate_Params.InputDelegate), &InputDelegate, sizeof(InputDelegate));

	this->ProcessEvent(uFnAddKeyboardInputDoneDelegate, &AddKeyboardInputDoneDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnKeyboardInputComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnKeyboardInputComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnKeyboardInputComplete = nullptr;

	if (!uFnOnKeyboardInputComplete)
	{
		uFnOnKeyboardInputComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnKeyboardInputComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnKeyboardInputComplete_Params OnKeyboardInputComplete_Params;
	memset(&OnKeyboardInputComplete_Params, 0, sizeof(OnKeyboardInputComplete_Params));
	OnKeyboardInputComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnKeyboardInputComplete, &OnKeyboardInputComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowKeyboardUI
// [0x00024001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  TitleText                      (CPF_Parm | CPF_NeedCtorLink)
// class FString                  DescriptionText                (CPF_Parm | CPF_NeedCtorLink)
// bool                           bIsPassword                    (CPF_OptionalParm | CPF_Parm)
// bool                           bShouldValidate                (CPF_OptionalParm | CPF_Parm)
// class FString                  DefaultText                    (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// int32_t                        MaxResultLength                (CPF_OptionalParm | CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ShowKeyboardUI(uint8_t LocalUserNum, class FString TitleText, class FString DescriptionText, bool bIsPassword, bool bShouldValidate, class FString DefaultText, int32_t MaxResultLength)
{
	static UFunction* uFnShowKeyboardUI = nullptr;

	if (!uFnShowKeyboardUI)
	{
		uFnShowKeyboardUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowKeyboardUI");
	}

	UOnlinePlayerInterfaceEOS_execShowKeyboardUI_Params ShowKeyboardUI_Params;
	memset(&ShowKeyboardUI_Params, 0, sizeof(ShowKeyboardUI_Params));
	memcpy_s(&ShowKeyboardUI_Params.LocalUserNum, sizeof(ShowKeyboardUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowKeyboardUI_Params.TitleText, sizeof(ShowKeyboardUI_Params.TitleText), &TitleText, sizeof(TitleText));
	memcpy_s(&ShowKeyboardUI_Params.DescriptionText, sizeof(ShowKeyboardUI_Params.DescriptionText), &DescriptionText, sizeof(DescriptionText));
	ShowKeyboardUI_Params.bIsPassword = bIsPassword;
	ShowKeyboardUI_Params.bShouldValidate = bShouldValidate;
	memcpy_s(&ShowKeyboardUI_Params.DefaultText, sizeof(ShowKeyboardUI_Params.DefaultText), &DefaultText, sizeof(DefaultText));
	memcpy_s(&ShowKeyboardUI_Params.MaxResultLength, sizeof(ShowKeyboardUI_Params.MaxResultLength), &MaxResultLength, sizeof(MaxResultLength));

	this->ProcessEvent(uFnShowKeyboardUI, &ShowKeyboardUI_Params, nullptr);

	return ShowKeyboardUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetOnlineStatus
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        StatusId                       (CPF_Parm)
// TArray<struct FLocalizedStringSetting> LocalizedStringSettings        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<struct FSettingsProperty> Properties                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::SetOnlineStatus(uint8_t LocalUserNum, int32_t StatusId, TArray<struct FLocalizedStringSetting>& LocalizedStringSettings, TArray<struct FSettingsProperty>& Properties)
{
	static UFunction* uFnSetOnlineStatus = nullptr;

	if (!uFnSetOnlineStatus)
	{
		uFnSetOnlineStatus = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetOnlineStatus");
	}

	UOnlinePlayerInterfaceEOS_execSetOnlineStatus_Params SetOnlineStatus_Params;
	memset(&SetOnlineStatus_Params, 0, sizeof(SetOnlineStatus_Params));
	memcpy_s(&SetOnlineStatus_Params.LocalUserNum, sizeof(SetOnlineStatus_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&SetOnlineStatus_Params.StatusId, sizeof(SetOnlineStatus_Params.StatusId), &StatusId, sizeof(StatusId));
	memcpy_s(&SetOnlineStatus_Params.LocalizedStringSettings, sizeof(SetOnlineStatus_Params.LocalizedStringSettings), &LocalizedStringSettings, sizeof(LocalizedStringSettings));
	memcpy_s(&SetOnlineStatus_Params.Properties, sizeof(SetOnlineStatus_Params.Properties), &Properties, sizeof(Properties));

	uFnSetOnlineStatus->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetOnlineStatus, &SetOnlineStatus_Params, nullptr);
	uFnSetOnlineStatus->FunctionFlags |= 0x400;

	memcpy_s(&LocalizedStringSettings, sizeof(LocalizedStringSettings), &SetOnlineStatus_Params.LocalizedStringSettings, sizeof(SetOnlineStatus_Params.LocalizedStringSettings));
	memcpy_s(&Properties, sizeof(Properties), &SetOnlineStatus_Params.Properties, sizeof(SetOnlineStatus_Params.Properties));
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendsList
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// EOnlineEnumerationReadState    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        Count                          (CPF_OptionalParm | CPF_Parm)
// int32_t                        StartingAt                     (CPF_OptionalParm | CPF_Parm)
// TArray<struct FOnlineFriend>   Friends                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

EOnlineEnumerationReadState UOnlinePlayerInterfaceEOS::GetFriendsList(uint8_t LocalUserNum, int32_t Count, int32_t StartingAt, TArray<struct FOnlineFriend>& Friends)
{
	static UFunction* uFnGetFriendsList = nullptr;

	if (!uFnGetFriendsList)
	{
		uFnGetFriendsList = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendsList");
	}

	UOnlinePlayerInterfaceEOS_execGetFriendsList_Params GetFriendsList_Params;
	memset(&GetFriendsList_Params, 0, sizeof(GetFriendsList_Params));
	memcpy_s(&GetFriendsList_Params.LocalUserNum, sizeof(GetFriendsList_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&GetFriendsList_Params.Count, sizeof(GetFriendsList_Params.Count), &Count, sizeof(Count));
	memcpy_s(&GetFriendsList_Params.StartingAt, sizeof(GetFriendsList_Params.StartingAt), &StartingAt, sizeof(StartingAt));
	memcpy_s(&GetFriendsList_Params.Friends, sizeof(GetFriendsList_Params.Friends), &Friends, sizeof(Friends));

	uFnGetFriendsList->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetFriendsList, &GetFriendsList_Params, nullptr);
	uFnGetFriendsList->FunctionFlags |= 0x400;

	memcpy_s(&Friends, sizeof(Friends), &GetFriendsList_Params.Friends, sizeof(GetFriendsList_Params.Friends));

	return GetFriendsList_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadFriendsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearReadFriendsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate)
{
	static UFunction* uFnClearReadFriendsCompleteDelegate = nullptr;

	if (!uFnClearReadFriendsCompleteDelegate)
	{
		uFnClearReadFriendsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadFriendsCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearReadFriendsCompleteDelegate_Params ClearReadFriendsCompleteDelegate_Params;
	memset(&ClearReadFriendsCompleteDelegate_Params, 0, sizeof(ClearReadFriendsCompleteDelegate_Params));
	memcpy_s(&ClearReadFriendsCompleteDelegate_Params.LocalUserNum, sizeof(ClearReadFriendsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearReadFriendsCompleteDelegate_Params.ReadFriendsCompleteDelegate, sizeof(ClearReadFriendsCompleteDelegate_Params.ReadFriendsCompleteDelegate), &ReadFriendsCompleteDelegate, sizeof(ReadFriendsCompleteDelegate));

	this->ProcessEvent(uFnClearReadFriendsCompleteDelegate, &ClearReadFriendsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadFriendsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddReadFriendsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate)
{
	static UFunction* uFnAddReadFriendsCompleteDelegate = nullptr;

	if (!uFnAddReadFriendsCompleteDelegate)
	{
		uFnAddReadFriendsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadFriendsCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddReadFriendsCompleteDelegate_Params AddReadFriendsCompleteDelegate_Params;
	memset(&AddReadFriendsCompleteDelegate_Params, 0, sizeof(AddReadFriendsCompleteDelegate_Params));
	memcpy_s(&AddReadFriendsCompleteDelegate_Params.LocalUserNum, sizeof(AddReadFriendsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddReadFriendsCompleteDelegate_Params.ReadFriendsCompleteDelegate, sizeof(AddReadFriendsCompleteDelegate_Params.ReadFriendsCompleteDelegate), &ReadFriendsCompleteDelegate, sizeof(ReadFriendsCompleteDelegate));

	this->ProcessEvent(uFnAddReadFriendsCompleteDelegate, &AddReadFriendsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadFriendsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnReadFriendsComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnReadFriendsComplete = nullptr;

	if (!uFnOnReadFriendsComplete)
	{
		uFnOnReadFriendsComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadFriendsComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnReadFriendsComplete_Params OnReadFriendsComplete_Params;
	memset(&OnReadFriendsComplete_Params, 0, sizeof(OnReadFriendsComplete_Params));
	OnReadFriendsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadFriendsComplete, &OnReadFriendsComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadFriendsList
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        Count                          (CPF_OptionalParm | CPF_Parm)
// int32_t                        StartingAt                     (CPF_OptionalParm | CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ReadFriendsList(uint8_t LocalUserNum, int32_t Count, int32_t StartingAt)
{
	static UFunction* uFnReadFriendsList = nullptr;

	if (!uFnReadFriendsList)
	{
		uFnReadFriendsList = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadFriendsList");
	}

	UOnlinePlayerInterfaceEOS_execReadFriendsList_Params ReadFriendsList_Params;
	memset(&ReadFriendsList_Params, 0, sizeof(ReadFriendsList_Params));
	memcpy_s(&ReadFriendsList_Params.LocalUserNum, sizeof(ReadFriendsList_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadFriendsList_Params.Count, sizeof(ReadFriendsList_Params.Count), &Count, sizeof(Count));
	memcpy_s(&ReadFriendsList_Params.StartingAt, sizeof(ReadFriendsList_Params.StartingAt), &StartingAt, sizeof(StartingAt));

	uFnReadFriendsList->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadFriendsList, &ReadFriendsList_Params, nullptr);
	uFnReadFriendsList->FunctionFlags |= 0x400;

	return ReadFriendsList_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearWriteProfileSettingsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearWriteProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate)
{
	static UFunction* uFnClearWriteProfileSettingsCompleteDelegate = nullptr;

	if (!uFnClearWriteProfileSettingsCompleteDelegate)
	{
		uFnClearWriteProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearWriteProfileSettingsCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearWriteProfileSettingsCompleteDelegate_Params ClearWriteProfileSettingsCompleteDelegate_Params;
	memset(&ClearWriteProfileSettingsCompleteDelegate_Params, 0, sizeof(ClearWriteProfileSettingsCompleteDelegate_Params));
	memcpy_s(&ClearWriteProfileSettingsCompleteDelegate_Params.LocalUserNum, sizeof(ClearWriteProfileSettingsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearWriteProfileSettingsCompleteDelegate_Params.WriteProfileSettingsCompleteDelegate, sizeof(ClearWriteProfileSettingsCompleteDelegate_Params.WriteProfileSettingsCompleteDelegate), &WriteProfileSettingsCompleteDelegate, sizeof(WriteProfileSettingsCompleteDelegate));

	this->ProcessEvent(uFnClearWriteProfileSettingsCompleteDelegate, &ClearWriteProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddWriteProfileSettingsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddWriteProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate)
{
	static UFunction* uFnAddWriteProfileSettingsCompleteDelegate = nullptr;

	if (!uFnAddWriteProfileSettingsCompleteDelegate)
	{
		uFnAddWriteProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddWriteProfileSettingsCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddWriteProfileSettingsCompleteDelegate_Params AddWriteProfileSettingsCompleteDelegate_Params;
	memset(&AddWriteProfileSettingsCompleteDelegate_Params, 0, sizeof(AddWriteProfileSettingsCompleteDelegate_Params));
	memcpy_s(&AddWriteProfileSettingsCompleteDelegate_Params.LocalUserNum, sizeof(AddWriteProfileSettingsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddWriteProfileSettingsCompleteDelegate_Params.WriteProfileSettingsCompleteDelegate, sizeof(AddWriteProfileSettingsCompleteDelegate_Params.WriteProfileSettingsCompleteDelegate), &WriteProfileSettingsCompleteDelegate, sizeof(WriteProfileSettingsCompleteDelegate));

	this->ProcessEvent(uFnAddWriteProfileSettingsCompleteDelegate, &AddWriteProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnWriteProfileSettingsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnWriteProfileSettingsComplete(uint8_t LocalUserNum, bool bWasSuccessful)
{
	static UFunction* uFnOnWriteProfileSettingsComplete = nullptr;

	if (!uFnOnWriteProfileSettingsComplete)
	{
		uFnOnWriteProfileSettingsComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnWriteProfileSettingsComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnWriteProfileSettingsComplete_Params OnWriteProfileSettingsComplete_Params;
	memset(&OnWriteProfileSettingsComplete_Params, 0, sizeof(OnWriteProfileSettingsComplete_Params));
	memcpy_s(&OnWriteProfileSettingsComplete_Params.LocalUserNum, sizeof(OnWriteProfileSettingsComplete_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	OnWriteProfileSettingsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnWriteProfileSettingsComplete, &OnWriteProfileSettingsComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WriteProfileSettings
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::WriteProfileSettings(uint8_t LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static UFunction* uFnWriteProfileSettings = nullptr;

	if (!uFnWriteProfileSettings)
	{
		uFnWriteProfileSettings = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WriteProfileSettings");
	}

	UOnlinePlayerInterfaceEOS_execWriteProfileSettings_Params WriteProfileSettings_Params;
	memset(&WriteProfileSettings_Params, 0, sizeof(WriteProfileSettings_Params));
	memcpy_s(&WriteProfileSettings_Params.LocalUserNum, sizeof(WriteProfileSettings_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&WriteProfileSettings_Params.ProfileSettings, sizeof(WriteProfileSettings_Params.ProfileSettings), &ProfileSettings, sizeof(ProfileSettings));

	uFnWriteProfileSettings->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnWriteProfileSettings, &WriteProfileSettings_Params, nullptr);
	uFnWriteProfileSettings->FunctionFlags |= 0x400;

	return WriteProfileSettings_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetProfileSettings
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOnlineProfileSettings*  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class UOnlineProfileSettings* UOnlinePlayerInterfaceEOS::GetProfileSettings(uint8_t LocalUserNum)
{
	static UFunction* uFnGetProfileSettings = nullptr;

	if (!uFnGetProfileSettings)
	{
		uFnGetProfileSettings = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetProfileSettings");
	}

	UOnlinePlayerInterfaceEOS_execGetProfileSettings_Params GetProfileSettings_Params;
	memset(&GetProfileSettings_Params, 0, sizeof(GetProfileSettings_Params));
	memcpy_s(&GetProfileSettings_Params.LocalUserNum, sizeof(GetProfileSettings_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnGetProfileSettings, &GetProfileSettings_Params, nullptr);

	return GetProfileSettings_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadProfileSettingsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearReadProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate)
{
	static UFunction* uFnClearReadProfileSettingsCompleteDelegate = nullptr;

	if (!uFnClearReadProfileSettingsCompleteDelegate)
	{
		uFnClearReadProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadProfileSettingsCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearReadProfileSettingsCompleteDelegate_Params ClearReadProfileSettingsCompleteDelegate_Params;
	memset(&ClearReadProfileSettingsCompleteDelegate_Params, 0, sizeof(ClearReadProfileSettingsCompleteDelegate_Params));
	memcpy_s(&ClearReadProfileSettingsCompleteDelegate_Params.LocalUserNum, sizeof(ClearReadProfileSettingsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearReadProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate, sizeof(ClearReadProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate), &ReadProfileSettingsCompleteDelegate, sizeof(ReadProfileSettingsCompleteDelegate));

	this->ProcessEvent(uFnClearReadProfileSettingsCompleteDelegate, &ClearReadProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadProfileSettingsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddReadProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate)
{
	static UFunction* uFnAddReadProfileSettingsCompleteDelegate = nullptr;

	if (!uFnAddReadProfileSettingsCompleteDelegate)
	{
		uFnAddReadProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadProfileSettingsCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddReadProfileSettingsCompleteDelegate_Params AddReadProfileSettingsCompleteDelegate_Params;
	memset(&AddReadProfileSettingsCompleteDelegate_Params, 0, sizeof(AddReadProfileSettingsCompleteDelegate_Params));
	memcpy_s(&AddReadProfileSettingsCompleteDelegate_Params.LocalUserNum, sizeof(AddReadProfileSettingsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddReadProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate, sizeof(AddReadProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate), &ReadProfileSettingsCompleteDelegate, sizeof(ReadProfileSettingsCompleteDelegate));

	this->ProcessEvent(uFnAddReadProfileSettingsCompleteDelegate, &AddReadProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadProfileSettingsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnReadProfileSettingsComplete(uint8_t LocalUserNum, bool bWasSuccessful)
{
	static UFunction* uFnOnReadProfileSettingsComplete = nullptr;

	if (!uFnOnReadProfileSettingsComplete)
	{
		uFnOnReadProfileSettingsComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadProfileSettingsComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnReadProfileSettingsComplete_Params OnReadProfileSettingsComplete_Params;
	memset(&OnReadProfileSettingsComplete_Params, 0, sizeof(OnReadProfileSettingsComplete_Params));
	memcpy_s(&OnReadProfileSettingsComplete_Params.LocalUserNum, sizeof(OnReadProfileSettingsComplete_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	OnReadProfileSettingsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadProfileSettingsComplete, &OnReadProfileSettingsComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadProfileSettings
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ReadProfileSettings(uint8_t LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static UFunction* uFnReadProfileSettings = nullptr;

	if (!uFnReadProfileSettings)
	{
		uFnReadProfileSettings = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadProfileSettings");
	}

	UOnlinePlayerInterfaceEOS_execReadProfileSettings_Params ReadProfileSettings_Params;
	memset(&ReadProfileSettings_Params, 0, sizeof(ReadProfileSettings_Params));
	memcpy_s(&ReadProfileSettings_Params.LocalUserNum, sizeof(ReadProfileSettings_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadProfileSettings_Params.ProfileSettings, sizeof(ReadProfileSettings_Params.ProfileSettings), &ProfileSettings, sizeof(ProfileSettings));

	uFnReadProfileSettings->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadProfileSettings, &ReadProfileSettings_Params, nullptr);
	uFnReadProfileSettings->FunctionFlags |= 0x400;

	return ReadProfileSettings_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendsChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendsDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearFriendsChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendsDelegate)
{
	static UFunction* uFnClearFriendsChangeDelegate = nullptr;

	if (!uFnClearFriendsChangeDelegate)
	{
		uFnClearFriendsChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendsChangeDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearFriendsChangeDelegate_Params ClearFriendsChangeDelegate_Params;
	memset(&ClearFriendsChangeDelegate_Params, 0, sizeof(ClearFriendsChangeDelegate_Params));
	memcpy_s(&ClearFriendsChangeDelegate_Params.LocalUserNum, sizeof(ClearFriendsChangeDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearFriendsChangeDelegate_Params.FriendsDelegate, sizeof(ClearFriendsChangeDelegate_Params.FriendsDelegate), &FriendsDelegate, sizeof(FriendsDelegate));

	this->ProcessEvent(uFnClearFriendsChangeDelegate, &ClearFriendsChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendsChangeDelegate
// [0x00020803] (FUNC_Final | FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendsDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::eventAddFriendsChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendsDelegate)
{
	static UFunction* uFnAddFriendsChangeDelegate = nullptr;

	if (!uFnAddFriendsChangeDelegate)
	{
		uFnAddFriendsChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendsChangeDelegate");
	}

	UOnlinePlayerInterfaceEOS_eventAddFriendsChangeDelegate_Params AddFriendsChangeDelegate_Params;
	memset(&AddFriendsChangeDelegate_Params, 0, sizeof(AddFriendsChangeDelegate_Params));
	memcpy_s(&AddFriendsChangeDelegate_Params.LocalUserNum, sizeof(AddFriendsChangeDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddFriendsChangeDelegate_Params.FriendsDelegate, sizeof(AddFriendsChangeDelegate_Params.FriendsDelegate), &FriendsDelegate, sizeof(FriendsDelegate));

	this->ProcessEvent(uFnAddFriendsChangeDelegate, &AddFriendsChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearMutingChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         MutingDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearMutingChangeDelegate(struct FScriptDelegate MutingDelegate)
{
	static UFunction* uFnClearMutingChangeDelegate = nullptr;

	if (!uFnClearMutingChangeDelegate)
	{
		uFnClearMutingChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearMutingChangeDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearMutingChangeDelegate_Params ClearMutingChangeDelegate_Params;
	memset(&ClearMutingChangeDelegate_Params, 0, sizeof(ClearMutingChangeDelegate_Params));
	memcpy_s(&ClearMutingChangeDelegate_Params.MutingDelegate, sizeof(ClearMutingChangeDelegate_Params.MutingDelegate), &MutingDelegate, sizeof(MutingDelegate));

	this->ProcessEvent(uFnClearMutingChangeDelegate, &ClearMutingChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddMutingChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         MutingDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddMutingChangeDelegate(struct FScriptDelegate MutingDelegate)
{
	static UFunction* uFnAddMutingChangeDelegate = nullptr;

	if (!uFnAddMutingChangeDelegate)
	{
		uFnAddMutingChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddMutingChangeDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddMutingChangeDelegate_Params AddMutingChangeDelegate_Params;
	memset(&AddMutingChangeDelegate_Params, 0, sizeof(AddMutingChangeDelegate_Params));
	memcpy_s(&AddMutingChangeDelegate_Params.MutingDelegate, sizeof(AddMutingChangeDelegate_Params.MutingDelegate), &MutingDelegate, sizeof(MutingDelegate));

	this->ProcessEvent(uFnAddMutingChangeDelegate, &AddMutingChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginCancelledDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         CancelledDelegate              (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearLoginCancelledDelegate(struct FScriptDelegate CancelledDelegate)
{
	static UFunction* uFnClearLoginCancelledDelegate = nullptr;

	if (!uFnClearLoginCancelledDelegate)
	{
		uFnClearLoginCancelledDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginCancelledDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearLoginCancelledDelegate_Params ClearLoginCancelledDelegate_Params;
	memset(&ClearLoginCancelledDelegate_Params, 0, sizeof(ClearLoginCancelledDelegate_Params));
	memcpy_s(&ClearLoginCancelledDelegate_Params.CancelledDelegate, sizeof(ClearLoginCancelledDelegate_Params.CancelledDelegate), &CancelledDelegate, sizeof(CancelledDelegate));

	this->ProcessEvent(uFnClearLoginCancelledDelegate, &ClearLoginCancelledDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginCancelledDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         CancelledDelegate              (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddLoginCancelledDelegate(struct FScriptDelegate CancelledDelegate)
{
	static UFunction* uFnAddLoginCancelledDelegate = nullptr;

	if (!uFnAddLoginCancelledDelegate)
	{
		uFnAddLoginCancelledDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginCancelledDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddLoginCancelledDelegate_Params AddLoginCancelledDelegate_Params;
	memset(&AddLoginCancelledDelegate_Params, 0, sizeof(AddLoginCancelledDelegate_Params));
	memcpy_s(&AddLoginCancelledDelegate_Params.CancelledDelegate, sizeof(AddLoginCancelledDelegate_Params.CancelledDelegate), &CancelledDelegate, sizeof(CancelledDelegate));

	this->ProcessEvent(uFnAddLoginCancelledDelegate, &AddLoginCancelledDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginChangeDelegate
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LoginDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearLoginChangeDelegate(struct FScriptDelegate LoginDelegate)
{
	static UFunction* uFnClearLoginChangeDelegate = nullptr;

	if (!uFnClearLoginChangeDelegate)
	{
		uFnClearLoginChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginChangeDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearLoginChangeDelegate_Params ClearLoginChangeDelegate_Params;
	memset(&ClearLoginChangeDelegate_Params, 0, sizeof(ClearLoginChangeDelegate_Params));
	memcpy_s(&ClearLoginChangeDelegate_Params.LoginDelegate, sizeof(ClearLoginChangeDelegate_Params.LoginDelegate), &LoginDelegate, sizeof(LoginDelegate));

	uFnClearLoginChangeDelegate->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnClearLoginChangeDelegate, &ClearLoginChangeDelegate_Params, nullptr);
	uFnClearLoginChangeDelegate->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginChangeDelegate
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LoginDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddLoginChangeDelegate(struct FScriptDelegate LoginDelegate)
{
	static UFunction* uFnAddLoginChangeDelegate = nullptr;

	if (!uFnAddLoginChangeDelegate)
	{
		uFnAddLoginChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginChangeDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddLoginChangeDelegate_Params AddLoginChangeDelegate_Params;
	memset(&AddLoginChangeDelegate_Params, 0, sizeof(AddLoginChangeDelegate_Params));
	memcpy_s(&AddLoginChangeDelegate_Params.LoginDelegate, sizeof(AddLoginChangeDelegate_Params.LoginDelegate), &LoginDelegate, sizeof(LoginDelegate));

	uFnAddLoginChangeDelegate->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAddLoginChangeDelegate, &AddLoginChangeDelegate_Params, nullptr);
	uFnAddLoginChangeDelegate->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFriendsUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ShowFriendsUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowFriendsUI = nullptr;

	if (!uFnShowFriendsUI)
	{
		uFnShowFriendsUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFriendsUI");
	}

	UOnlinePlayerInterfaceEOS_execShowFriendsUI_Params ShowFriendsUI_Params;
	memset(&ShowFriendsUI_Params, 0, sizeof(ShowFriendsUI_Params));
	memcpy_s(&ShowFriendsUI_Params.LocalUserNum, sizeof(ShowFriendsUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnShowFriendsUI, &ShowFriendsUI_Params, nullptr);

	return ShowFriendsUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsMuted
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::IsMuted(uint8_t LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnIsMuted = nullptr;

	if (!uFnIsMuted)
	{
		uFnIsMuted = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsMuted");
	}

	UOnlinePlayerInterfaceEOS_execIsMuted_Params IsMuted_Params;
	memset(&IsMuted_Params, 0, sizeof(IsMuted_Params));
	memcpy_s(&IsMuted_Params.LocalUserNum, sizeof(IsMuted_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&IsMuted_Params.PlayerID, sizeof(IsMuted_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	this->ProcessEvent(uFnIsMuted, &IsMuted_Params, nullptr);

	return IsMuted_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AreAnyFriends
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FFriendsQuery>   Query                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::AreAnyFriends(uint8_t LocalUserNum, TArray<struct FFriendsQuery>& Query)
{
	static UFunction* uFnAreAnyFriends = nullptr;

	if (!uFnAreAnyFriends)
	{
		uFnAreAnyFriends = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AreAnyFriends");
	}

	UOnlinePlayerInterfaceEOS_execAreAnyFriends_Params AreAnyFriends_Params;
	memset(&AreAnyFriends_Params, 0, sizeof(AreAnyFriends_Params));
	memcpy_s(&AreAnyFriends_Params.LocalUserNum, sizeof(AreAnyFriends_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AreAnyFriends_Params.Query, sizeof(AreAnyFriends_Params.Query), &Query, sizeof(Query));

	uFnAreAnyFriends->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAreAnyFriends, &AreAnyFriends_Params, nullptr);
	uFnAreAnyFriends->FunctionFlags |= 0x400;

	memcpy_s(&Query, sizeof(Query), &AreAnyFriends_Params.Query, sizeof(AreAnyFriends_Params.Query));

	return AreAnyFriends_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsFriend
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::IsFriend(uint8_t LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnIsFriend = nullptr;

	if (!uFnIsFriend)
	{
		uFnIsFriend = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsFriend");
	}

	UOnlinePlayerInterfaceEOS_execIsFriend_Params IsFriend_Params;
	memset(&IsFriend_Params, 0, sizeof(IsFriend_Params));
	memcpy_s(&IsFriend_Params.LocalUserNum, sizeof(IsFriend_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&IsFriend_Params.PlayerID, sizeof(IsFriend_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	uFnIsFriend->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsFriend, &IsFriend_Params, nullptr);
	uFnIsFriend->FunctionFlags |= 0x400;

	return IsFriend_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShowPresenceInformation
// [0x00424003] (FUNC_Final | FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanShowPresenceInformation(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanShowPresenceInformation = nullptr;

	if (!uFnCanShowPresenceInformation)
	{
		uFnCanShowPresenceInformation = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShowPresenceInformation");
	}

	UOnlinePlayerInterfaceEOS_execCanShowPresenceInformation_Params CanShowPresenceInformation_Params;
	memset(&CanShowPresenceInformation_Params, 0, sizeof(CanShowPresenceInformation_Params));
	memcpy_s(&CanShowPresenceInformation_Params.LocalUserNum, sizeof(CanShowPresenceInformation_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanShowPresenceInformation_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanShowPresenceInformation_Params.Reason, sizeof(CanShowPresenceInformation_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanShowPresenceInformation_Params.PrivilegeLevelHint, sizeof(CanShowPresenceInformation_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanShowPresenceInformation, &CanShowPresenceInformation_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanShowPresenceInformation_Params.PrivilegeLevelHint, sizeof(CanShowPresenceInformation_Params.PrivilegeLevelHint));

	return CanShowPresenceInformation_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanViewPlayerProfiles
// [0x00424003] (FUNC_Final | FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanViewPlayerProfiles(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanViewPlayerProfiles = nullptr;

	if (!uFnCanViewPlayerProfiles)
	{
		uFnCanViewPlayerProfiles = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanViewPlayerProfiles");
	}

	UOnlinePlayerInterfaceEOS_execCanViewPlayerProfiles_Params CanViewPlayerProfiles_Params;
	memset(&CanViewPlayerProfiles_Params, 0, sizeof(CanViewPlayerProfiles_Params));
	memcpy_s(&CanViewPlayerProfiles_Params.LocalUserNum, sizeof(CanViewPlayerProfiles_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanViewPlayerProfiles_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanViewPlayerProfiles_Params.Reason, sizeof(CanViewPlayerProfiles_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanViewPlayerProfiles_Params.PrivilegeLevelHint, sizeof(CanViewPlayerProfiles_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanViewPlayerProfiles, &CanViewPlayerProfiles_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanViewPlayerProfiles_Params.PrivilegeLevelHint, sizeof(CanViewPlayerProfiles_Params.PrivilegeLevelHint));

	return CanViewPlayerProfiles_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPurchaseContent
// [0x00424003] (FUNC_Final | FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanPurchaseContent(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanPurchaseContent = nullptr;

	if (!uFnCanPurchaseContent)
	{
		uFnCanPurchaseContent = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPurchaseContent");
	}

	UOnlinePlayerInterfaceEOS_execCanPurchaseContent_Params CanPurchaseContent_Params;
	memset(&CanPurchaseContent_Params, 0, sizeof(CanPurchaseContent_Params));
	memcpy_s(&CanPurchaseContent_Params.LocalUserNum, sizeof(CanPurchaseContent_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanPurchaseContent_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanPurchaseContent_Params.Reason, sizeof(CanPurchaseContent_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanPurchaseContent_Params.PrivilegeLevelHint, sizeof(CanPurchaseContent_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanPurchaseContent, &CanPurchaseContent_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanPurchaseContent_Params.PrivilegeLevelHint, sizeof(CanPurchaseContent_Params.PrivilegeLevelHint));

	return CanPurchaseContent_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanDownloadUserContent
// [0x00424003] (FUNC_Final | FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanDownloadUserContent(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanDownloadUserContent = nullptr;

	if (!uFnCanDownloadUserContent)
	{
		uFnCanDownloadUserContent = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanDownloadUserContent");
	}

	UOnlinePlayerInterfaceEOS_execCanDownloadUserContent_Params CanDownloadUserContent_Params;
	memset(&CanDownloadUserContent_Params, 0, sizeof(CanDownloadUserContent_Params));
	memcpy_s(&CanDownloadUserContent_Params.LocalUserNum, sizeof(CanDownloadUserContent_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanDownloadUserContent_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanDownloadUserContent_Params.Reason, sizeof(CanDownloadUserContent_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanDownloadUserContent_Params.PrivilegeLevelHint, sizeof(CanDownloadUserContent_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanDownloadUserContent, &CanDownloadUserContent_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanDownloadUserContent_Params.PrivilegeLevelHint, sizeof(CanDownloadUserContent_Params.PrivilegeLevelHint));

	return CanDownloadUserContent_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicate
// [0x00024003] (FUNC_Final | FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EFeaturePrivilegeLevel         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// ECommunicationMethod           CommMethod                     (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)

EFeaturePrivilegeLevel UOnlinePlayerInterfaceEOS::CanCommunicate(uint8_t LocalUserNum, ECommunicationMethod CommMethod, bool bAttemptToResolve)
{
	static UFunction* uFnCanCommunicate = nullptr;

	if (!uFnCanCommunicate)
	{
		uFnCanCommunicate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicate");
	}

	UOnlinePlayerInterfaceEOS_execCanCommunicate_Params CanCommunicate_Params;
	memset(&CanCommunicate_Params, 0, sizeof(CanCommunicate_Params));
	memcpy_s(&CanCommunicate_Params.LocalUserNum, sizeof(CanCommunicate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&CanCommunicate_Params.CommMethod, sizeof(CanCommunicate_Params.CommMethod), &CommMethod, sizeof(CommMethod));
	CanCommunicate_Params.bAttemptToResolve = bAttemptToResolve;

	this->ProcessEvent(uFnCanCommunicate, &CanCommunicate_Params, nullptr);

	return CanCommunicate_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPlayOnline
// [0x00424003] (FUNC_Final | FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanPlayOnline(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanPlayOnline = nullptr;

	if (!uFnCanPlayOnline)
	{
		uFnCanPlayOnline = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPlayOnline");
	}

	UOnlinePlayerInterfaceEOS_execCanPlayOnline_Params CanPlayOnline_Params;
	memset(&CanPlayOnline_Params, 0, sizeof(CanPlayOnline_Params));
	memcpy_s(&CanPlayOnline_Params.LocalUserNum, sizeof(CanPlayOnline_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanPlayOnline_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanPlayOnline_Params.Reason, sizeof(CanPlayOnline_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanPlayOnline_Params.PrivilegeLevelHint, sizeof(CanPlayOnline_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanPlayOnline, &CanPlayOnline_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanPlayOnline_Params.PrivilegeLevelHint, sizeof(CanPlayOnline_Params.PrivilegeLevelHint));

	return CanPlayOnline_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerNickname
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class FString UOnlinePlayerInterfaceEOS::GetPlayerNickname(uint8_t LocalUserNum)
{
	static UFunction* uFnGetPlayerNickname = nullptr;

	if (!uFnGetPlayerNickname)
	{
		uFnGetPlayerNickname = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerNickname");
	}

	UOnlinePlayerInterfaceEOS_execGetPlayerNickname_Params GetPlayerNickname_Params;
	memset(&GetPlayerNickname_Params, 0, sizeof(GetPlayerNickname_Params));
	memcpy_s(&GetPlayerNickname_Params.LocalUserNum, sizeof(GetPlayerNickname_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnGetPlayerNickname->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetPlayerNickname, &GetPlayerNickname_Params, nullptr);
	uFnGetPlayerNickname->FunctionFlags |= 0x400;

	return GetPlayerNickname_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetUniquePlayerId
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::GetUniquePlayerId(uint8_t LocalUserNum, struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnGetUniquePlayerId = nullptr;

	if (!uFnGetUniquePlayerId)
	{
		uFnGetUniquePlayerId = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetUniquePlayerId");
	}

	UOnlinePlayerInterfaceEOS_execGetUniquePlayerId_Params GetUniquePlayerId_Params;
	memset(&GetUniquePlayerId_Params, 0, sizeof(GetUniquePlayerId_Params));
	memcpy_s(&GetUniquePlayerId_Params.LocalUserNum, sizeof(GetUniquePlayerId_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&GetUniquePlayerId_Params.PlayerID, sizeof(GetUniquePlayerId_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	uFnGetUniquePlayerId->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetUniquePlayerId, &GetUniquePlayerId_Params, nullptr);
	uFnGetUniquePlayerId->FunctionFlags |= 0x400;

	memcpy_s(&PlayerID, sizeof(PlayerID), &GetUniquePlayerId_Params.PlayerID, sizeof(GetUniquePlayerId_Params.PlayerID));

	return GetUniquePlayerId_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetLoginStatus
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// ELoginStatus                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

ELoginStatus UOnlinePlayerInterfaceEOS::GetLoginStatus(uint8_t LocalUserNum)
{
	static UFunction* uFnGetLoginStatus = nullptr;

	if (!uFnGetLoginStatus)
	{
		uFnGetLoginStatus = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetLoginStatus");
	}

	UOnlinePlayerInterfaceEOS_execGetLoginStatus_Params GetLoginStatus_Params;
	memset(&GetLoginStatus_Params, 0, sizeof(GetLoginStatus_Params));
	memcpy_s(&GetLoginStatus_Params.LocalUserNum, sizeof(GetLoginStatus_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnGetLoginStatus->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetLoginStatus, &GetLoginStatus_Params, nullptr);
	uFnGetLoginStatus->FunctionFlags |= 0x400;

	return GetLoginStatus_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLogoutCompletedDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LogoutDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearLogoutCompletedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LogoutDelegate)
{
	static UFunction* uFnClearLogoutCompletedDelegate = nullptr;

	if (!uFnClearLogoutCompletedDelegate)
	{
		uFnClearLogoutCompletedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLogoutCompletedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearLogoutCompletedDelegate_Params ClearLogoutCompletedDelegate_Params;
	memset(&ClearLogoutCompletedDelegate_Params, 0, sizeof(ClearLogoutCompletedDelegate_Params));
	memcpy_s(&ClearLogoutCompletedDelegate_Params.LocalUserNum, sizeof(ClearLogoutCompletedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearLogoutCompletedDelegate_Params.LogoutDelegate, sizeof(ClearLogoutCompletedDelegate_Params.LogoutDelegate), &LogoutDelegate, sizeof(LogoutDelegate));

	this->ProcessEvent(uFnClearLogoutCompletedDelegate, &ClearLogoutCompletedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLogoutCompletedDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LogoutDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddLogoutCompletedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LogoutDelegate)
{
	static UFunction* uFnAddLogoutCompletedDelegate = nullptr;

	if (!uFnAddLogoutCompletedDelegate)
	{
		uFnAddLogoutCompletedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLogoutCompletedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddLogoutCompletedDelegate_Params AddLogoutCompletedDelegate_Params;
	memset(&AddLogoutCompletedDelegate_Params, 0, sizeof(AddLogoutCompletedDelegate_Params));
	memcpy_s(&AddLogoutCompletedDelegate_Params.LocalUserNum, sizeof(AddLogoutCompletedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddLogoutCompletedDelegate_Params.LogoutDelegate, sizeof(AddLogoutCompletedDelegate_Params.LogoutDelegate), &LogoutDelegate, sizeof(LogoutDelegate));

	this->ProcessEvent(uFnAddLogoutCompletedDelegate, &AddLogoutCompletedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLogoutCompleted
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnLogoutCompleted(bool bWasSuccessful)
{
	static UFunction* uFnOnLogoutCompleted = nullptr;

	if (!uFnOnLogoutCompleted)
	{
		uFnOnLogoutCompleted = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLogoutCompleted");
	}

	UOnlinePlayerInterfaceEOS_execOnLogoutCompleted_Params OnLogoutCompleted_Params;
	memset(&OnLogoutCompleted_Params, 0, sizeof(OnLogoutCompleted_Params));
	OnLogoutCompleted_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnLogoutCompleted, &OnLogoutCompleted_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.Logout
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::Logout(uint8_t LocalUserNum)
{
	static UFunction* uFnLogout = nullptr;

	if (!uFnLogout)
	{
		uFnLogout = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.Logout");
	}

	UOnlinePlayerInterfaceEOS_execLogout_Params Logout_Params;
	memset(&Logout_Params, 0, sizeof(Logout_Params));
	memcpy_s(&Logout_Params.LocalUserNum, sizeof(Logout_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnLogout->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnLogout, &Logout_Params, nullptr);
	uFnLogout->FunctionFlags |= 0x400;

	return Logout_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginFailedDelegate
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LoginFailedDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearLoginFailedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LoginFailedDelegate)
{
	static UFunction* uFnClearLoginFailedDelegate = nullptr;

	if (!uFnClearLoginFailedDelegate)
	{
		uFnClearLoginFailedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginFailedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearLoginFailedDelegate_Params ClearLoginFailedDelegate_Params;
	memset(&ClearLoginFailedDelegate_Params, 0, sizeof(ClearLoginFailedDelegate_Params));
	memcpy_s(&ClearLoginFailedDelegate_Params.LocalUserNum, sizeof(ClearLoginFailedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearLoginFailedDelegate_Params.LoginFailedDelegate, sizeof(ClearLoginFailedDelegate_Params.LoginFailedDelegate), &LoginFailedDelegate, sizeof(LoginFailedDelegate));

	uFnClearLoginFailedDelegate->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnClearLoginFailedDelegate, &ClearLoginFailedDelegate_Params, nullptr);
	uFnClearLoginFailedDelegate->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginFailedDelegate
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LoginFailedDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddLoginFailedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LoginFailedDelegate)
{
	static UFunction* uFnAddLoginFailedDelegate = nullptr;

	if (!uFnAddLoginFailedDelegate)
	{
		uFnAddLoginFailedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginFailedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddLoginFailedDelegate_Params AddLoginFailedDelegate_Params;
	memset(&AddLoginFailedDelegate_Params, 0, sizeof(AddLoginFailedDelegate_Params));
	memcpy_s(&AddLoginFailedDelegate_Params.LocalUserNum, sizeof(AddLoginFailedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddLoginFailedDelegate_Params.LoginFailedDelegate, sizeof(AddLoginFailedDelegate_Params.LoginFailedDelegate), &LoginFailedDelegate, sizeof(LoginFailedDelegate));

	uFnAddLoginFailedDelegate->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAddLoginFailedDelegate, &AddLoginFailedDelegate_Params, nullptr);
	uFnAddLoginFailedDelegate->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReceievedPinGrantCode
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// EPinGrantResult                Result                         (CPF_Parm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  Code                           (CPF_Parm | CPF_NeedCtorLink)
// class FString                  URL                            (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        SecondsUntilExpiration         (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnReceievedPinGrantCode(EPinGrantResult Result, uint8_t LocalUserNum, class FString Code, class FString URL, int32_t SecondsUntilExpiration)
{
	static UFunction* uFnOnReceievedPinGrantCode = nullptr;

	if (!uFnOnReceievedPinGrantCode)
	{
		uFnOnReceievedPinGrantCode = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReceievedPinGrantCode");
	}

	UOnlinePlayerInterfaceEOS_execOnReceievedPinGrantCode_Params OnReceievedPinGrantCode_Params;
	memset(&OnReceievedPinGrantCode_Params, 0, sizeof(OnReceievedPinGrantCode_Params));
	memcpy_s(&OnReceievedPinGrantCode_Params.Result, sizeof(OnReceievedPinGrantCode_Params.Result), &Result, sizeof(Result));
	memcpy_s(&OnReceievedPinGrantCode_Params.LocalUserNum, sizeof(OnReceievedPinGrantCode_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OnReceievedPinGrantCode_Params.Code, sizeof(OnReceievedPinGrantCode_Params.Code), &Code, sizeof(Code));
	memcpy_s(&OnReceievedPinGrantCode_Params.URL, sizeof(OnReceievedPinGrantCode_Params.URL), &URL, sizeof(URL));
	memcpy_s(&OnReceievedPinGrantCode_Params.SecondsUntilExpiration, sizeof(OnReceievedPinGrantCode_Params.SecondsUntilExpiration), &SecondsUntilExpiration, sizeof(SecondsUntilExpiration));

	this->ProcessEvent(uFnOnReceievedPinGrantCode, &OnReceievedPinGrantCode_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginFailed
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// EOnlineServerConnectionStatus  ErrorCode                      (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnLoginFailed(uint8_t LocalUserNum, EOnlineServerConnectionStatus ErrorCode)
{
	static UFunction* uFnOnLoginFailed = nullptr;

	if (!uFnOnLoginFailed)
	{
		uFnOnLoginFailed = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginFailed");
	}

	UOnlinePlayerInterfaceEOS_execOnLoginFailed_Params OnLoginFailed_Params;
	memset(&OnLoginFailed_Params, 0, sizeof(OnLoginFailed_Params));
	memcpy_s(&OnLoginFailed_Params.LocalUserNum, sizeof(OnLoginFailed_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OnLoginFailed_Params.ErrorCode, sizeof(OnLoginFailed_Params.ErrorCode), &ErrorCode, sizeof(ErrorCode));

	this->ProcessEvent(uFnOnLoginFailed, &OnLoginFailed_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AutoLogin
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlinePlayerInterfaceEOS::AutoLogin()
{
	static UFunction* uFnAutoLogin = nullptr;

	if (!uFnAutoLogin)
	{
		uFnAutoLogin = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AutoLogin");
	}

	UOnlinePlayerInterfaceEOS_execAutoLogin_Params AutoLogin_Params;
	memset(&AutoLogin_Params, 0, sizeof(AutoLogin_Params));

	this->ProcessEvent(uFnAutoLogin, &AutoLogin_Params, nullptr);

	return AutoLogin_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.Login
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  LoginName                      (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Password                       (CPF_Parm | CPF_NeedCtorLink)
// bool                           bWantsLocalOnly                (CPF_OptionalParm | CPF_Parm)

bool UOnlinePlayerInterfaceEOS::Login(uint8_t LocalUserNum, class FString LoginName, class FString Password, bool bWantsLocalOnly)
{
	static UFunction* uFnLogin = nullptr;

	if (!uFnLogin)
	{
		uFnLogin = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.Login");
	}

	UOnlinePlayerInterfaceEOS_execLogin_Params Login_Params;
	memset(&Login_Params, 0, sizeof(Login_Params));
	memcpy_s(&Login_Params.LocalUserNum, sizeof(Login_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&Login_Params.LoginName, sizeof(Login_Params.LoginName), &LoginName, sizeof(LoginName));
	memcpy_s(&Login_Params.Password, sizeof(Login_Params.Password), &Password, sizeof(Password));
	Login_Params.bWantsLocalOnly = bWantsLocalOnly;

	uFnLogin->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnLogin, &Login_Params, nullptr);
	uFnLogin->FunctionFlags |= 0x400;

	return Login_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowLoginUI
// [0x00024001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bShowOnlineOnly                (CPF_OptionalParm | CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ShowLoginUI(uint8_t LocalUserNum, bool bShowOnlineOnly)
{
	static UFunction* uFnShowLoginUI = nullptr;

	if (!uFnShowLoginUI)
	{
		uFnShowLoginUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowLoginUI");
	}

	UOnlinePlayerInterfaceEOS_execShowLoginUI_Params ShowLoginUI_Params;
	memset(&ShowLoginUI_Params, 0, sizeof(ShowLoginUI_Params));
	memcpy_s(&ShowLoginUI_Params.LocalUserNum, sizeof(ShowLoginUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	ShowLoginUI_Params.bShowOnlineOnly = bShowOnlineOnly;

	this->ProcessEvent(uFnShowLoginUI, &ShowLoginUI_Params, nullptr);

	return ShowLoginUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendsChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlinePlayerInterfaceEOS::OnFriendsChange()
{
	static UFunction* uFnOnFriendsChange = nullptr;

	if (!uFnOnFriendsChange)
	{
		uFnOnFriendsChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendsChange");
	}

	UOnlinePlayerInterfaceEOS_execOnFriendsChange_Params OnFriendsChange_Params;
	memset(&OnFriendsChange_Params, 0, sizeof(OnFriendsChange_Params));

	this->ProcessEvent(uFnOnFriendsChange, &OnFriendsChange_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnMutingChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlinePlayerInterfaceEOS::OnMutingChange()
{
	static UFunction* uFnOnMutingChange = nullptr;

	if (!uFnOnMutingChange)
	{
		uFnOnMutingChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnMutingChange");
	}

	UOnlinePlayerInterfaceEOS_execOnMutingChange_Params OnMutingChange_Params;
	memset(&OnMutingChange_Params, 0, sizeof(OnMutingChange_Params));

	this->ProcessEvent(uFnOnMutingChange, &OnMutingChange_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginCancelled
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlinePlayerInterfaceEOS::OnLoginCancelled()
{
	static UFunction* uFnOnLoginCancelled = nullptr;

	if (!uFnOnLoginCancelled)
	{
		uFnOnLoginCancelled = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginCancelled");
	}

	UOnlinePlayerInterfaceEOS_execOnLoginCancelled_Params OnLoginCancelled_Params;
	memset(&OnLoginCancelled_Params, 0, sizeof(OnLoginCancelled_Params));

	this->ProcessEvent(uFnOnLoginCancelled, &OnLoginCancelled_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnLoginChange(uint8_t LocalUserNum)
{
	static UFunction* uFnOnLoginChange = nullptr;

	if (!uFnOnLoginChange)
	{
		uFnOnLoginChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginChange");
	}

	UOnlinePlayerInterfaceEOS_execOnLoginChange_Params OnLoginChange_Params;
	memset(&OnLoginChange_Params, 0, sizeof(OnLoginChange_Params));
	memcpy_s(&OnLoginChange_Params.LocalUserNum, sizeof(OnLoginChange_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnOnLoginChange, &OnLoginChange_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnPlayerUnblocked
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// class UError*                  Error                          (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnPlayerUnblocked(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, class UError* Error)
{
	static UFunction* uFnOnPlayerUnblocked = nullptr;

	if (!uFnOnPlayerUnblocked)
	{
		uFnOnPlayerUnblocked = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnPlayerUnblocked");
	}

	UOnlinePlayerInterfaceEOS_execOnPlayerUnblocked_Params OnPlayerUnblocked_Params;
	memset(&OnPlayerUnblocked_Params, 0, sizeof(OnPlayerUnblocked_Params));
	memcpy_s(&OnPlayerUnblocked_Params.LocalUserNum, sizeof(OnPlayerUnblocked_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OnPlayerUnblocked_Params.PlayerID, sizeof(OnPlayerUnblocked_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	memcpy_s(&OnPlayerUnblocked_Params.Error, sizeof(OnPlayerUnblocked_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnPlayerUnblocked, &OnPlayerUnblocked_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnPlayerBlocked
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// class UError*                  Error                          (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnPlayerBlocked(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, class UError* Error)
{
	static UFunction* uFnOnPlayerBlocked = nullptr;

	if (!uFnOnPlayerBlocked)
	{
		uFnOnPlayerBlocked = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnPlayerBlocked");
	}

	UOnlinePlayerInterfaceEOS_execOnPlayerBlocked_Params OnPlayerBlocked_Params;
	memset(&OnPlayerBlocked_Params, 0, sizeof(OnPlayerBlocked_Params));
	memcpy_s(&OnPlayerBlocked_Params.LocalUserNum, sizeof(OnPlayerBlocked_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OnPlayerBlocked_Params.PlayerID, sizeof(OnPlayerBlocked_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	memcpy_s(&OnPlayerBlocked_Params.Error, sizeof(OnPlayerBlocked_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnPlayerBlocked, &OnPlayerBlocked_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnBlockListUpdated
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnBlockListUpdated(uint8_t LocalUserNum)
{
	static UFunction* uFnOnBlockListUpdated = nullptr;

	if (!uFnOnBlockListUpdated)
	{
		uFnOnBlockListUpdated = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnBlockListUpdated");
	}

	UOnlinePlayerInterfaceEOS_execOnBlockListUpdated_Params OnBlockListUpdated_Params;
	memset(&OnBlockListUpdated_Params, 0, sizeof(OnBlockListUpdated_Params));
	memcpy_s(&OnBlockListUpdated_Params.LocalUserNum, sizeof(OnBlockListUpdated_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnOnBlockListUpdated, &OnBlockListUpdated_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.RegisterStatGuid
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ClientStatGuid                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineStatsInterfaceEOS::RegisterStatGuid(struct FUniqueNetId PlayerID, class FString& ClientStatGuid)
{
	static UFunction* uFnRegisterStatGuid = nullptr;

	if (!uFnRegisterStatGuid)
	{
		uFnRegisterStatGuid = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.RegisterStatGuid");
	}

	UOnlineStatsInterfaceEOS_execRegisterStatGuid_Params RegisterStatGuid_Params;
	memset(&RegisterStatGuid_Params, 0, sizeof(RegisterStatGuid_Params));
	memcpy_s(&RegisterStatGuid_Params.PlayerID, sizeof(RegisterStatGuid_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	memcpy_s(&RegisterStatGuid_Params.ClientStatGuid, sizeof(RegisterStatGuid_Params.ClientStatGuid), &ClientStatGuid, sizeof(ClientStatGuid));

	this->ProcessEvent(uFnRegisterStatGuid, &RegisterStatGuid_Params, nullptr);

	memcpy_s(&ClientStatGuid, sizeof(ClientStatGuid), &RegisterStatGuid_Params.ClientStatGuid, sizeof(RegisterStatGuid_Params.ClientStatGuid));

	return RegisterStatGuid_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.GetClientStatGuid
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UOnlineStatsInterfaceEOS::GetClientStatGuid()
{
	static UFunction* uFnGetClientStatGuid = nullptr;

	if (!uFnGetClientStatGuid)
	{
		uFnGetClientStatGuid = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.GetClientStatGuid");
	}

	UOnlineStatsInterfaceEOS_execGetClientStatGuid_Params GetClientStatGuid_Params;
	memset(&GetClientStatGuid_Params, 0, sizeof(GetClientStatGuid_Params));

	this->ProcessEvent(uFnGetClientStatGuid, &GetClientStatGuid_Params, nullptr);

	return GetClientStatGuid_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineStatsInterfaceEOS::ClearRegisterHostStatGuidCompleteDelegateDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate)
{
	static UFunction* uFnClearRegisterHostStatGuidCompleteDelegateDelegate = nullptr;

	if (!uFnClearRegisterHostStatGuidCompleteDelegateDelegate)
	{
		uFnClearRegisterHostStatGuidCompleteDelegateDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearRegisterHostStatGuidCompleteDelegateDelegate");
	}

	UOnlineStatsInterfaceEOS_execClearRegisterHostStatGuidCompleteDelegateDelegate_Params ClearRegisterHostStatGuidCompleteDelegateDelegate_Params;
	memset(&ClearRegisterHostStatGuidCompleteDelegateDelegate_Params, 0, sizeof(ClearRegisterHostStatGuidCompleteDelegateDelegate_Params));
	memcpy_s(&ClearRegisterHostStatGuidCompleteDelegateDelegate_Params.RegisterHostStatGuidCompleteDelegate, sizeof(ClearRegisterHostStatGuidCompleteDelegateDelegate_Params.RegisterHostStatGuidCompleteDelegate), &RegisterHostStatGuidCompleteDelegate, sizeof(RegisterHostStatGuidCompleteDelegate));

	this->ProcessEvent(uFnClearRegisterHostStatGuidCompleteDelegateDelegate, &ClearRegisterHostStatGuidCompleteDelegateDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddRegisterHostStatGuidCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineStatsInterfaceEOS::AddRegisterHostStatGuidCompleteDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate)
{
	static UFunction* uFnAddRegisterHostStatGuidCompleteDelegate = nullptr;

	if (!uFnAddRegisterHostStatGuidCompleteDelegate)
	{
		uFnAddRegisterHostStatGuidCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddRegisterHostStatGuidCompleteDelegate");
	}

	UOnlineStatsInterfaceEOS_execAddRegisterHostStatGuidCompleteDelegate_Params AddRegisterHostStatGuidCompleteDelegate_Params;
	memset(&AddRegisterHostStatGuidCompleteDelegate_Params, 0, sizeof(AddRegisterHostStatGuidCompleteDelegate_Params));
	memcpy_s(&AddRegisterHostStatGuidCompleteDelegate_Params.RegisterHostStatGuidCompleteDelegate, sizeof(AddRegisterHostStatGuidCompleteDelegate_Params.RegisterHostStatGuidCompleteDelegate), &RegisterHostStatGuidCompleteDelegate, sizeof(RegisterHostStatGuidCompleteDelegate));

	this->ProcessEvent(uFnAddRegisterHostStatGuidCompleteDelegate, &AddRegisterHostStatGuidCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnRegisterHostStatGuidComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineStatsInterfaceEOS::OnRegisterHostStatGuidComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnRegisterHostStatGuidComplete = nullptr;

	if (!uFnOnRegisterHostStatGuidComplete)
	{
		uFnOnRegisterHostStatGuidComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnRegisterHostStatGuidComplete");
	}

	UOnlineStatsInterfaceEOS_execOnRegisterHostStatGuidComplete_Params OnRegisterHostStatGuidComplete_Params;
	memset(&OnRegisterHostStatGuidComplete_Params, 0, sizeof(OnRegisterHostStatGuidComplete_Params));
	OnRegisterHostStatGuidComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnRegisterHostStatGuidComplete, &OnRegisterHostStatGuidComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.RegisterHostStatGuid
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  HostStatGuid                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineStatsInterfaceEOS::RegisterHostStatGuid(class FString& HostStatGuid)
{
	static UFunction* uFnRegisterHostStatGuid = nullptr;

	if (!uFnRegisterHostStatGuid)
	{
		uFnRegisterHostStatGuid = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.RegisterHostStatGuid");
	}

	UOnlineStatsInterfaceEOS_execRegisterHostStatGuid_Params RegisterHostStatGuid_Params;
	memset(&RegisterHostStatGuid_Params, 0, sizeof(RegisterHostStatGuid_Params));
	memcpy_s(&RegisterHostStatGuid_Params.HostStatGuid, sizeof(RegisterHostStatGuid_Params.HostStatGuid), &HostStatGuid, sizeof(HostStatGuid));

	this->ProcessEvent(uFnRegisterHostStatGuid, &RegisterHostStatGuid_Params, nullptr);

	memcpy_s(&HostStatGuid, sizeof(HostStatGuid), &RegisterHostStatGuid_Params.HostStatGuid, sizeof(RegisterHostStatGuid_Params.HostStatGuid));

	return RegisterHostStatGuid_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.GetHostStatGuid
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UOnlineStatsInterfaceEOS::GetHostStatGuid()
{
	static UFunction* uFnGetHostStatGuid = nullptr;

	if (!uFnGetHostStatGuid)
	{
		uFnGetHostStatGuid = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.GetHostStatGuid");
	}

	UOnlineStatsInterfaceEOS_execGetHostStatGuid_Params GetHostStatGuid_Params;
	memset(&GetHostStatGuid_Params, 0, sizeof(GetHostStatGuid_Params));

	this->ProcessEvent(uFnGetHostStatGuid, &GetHostStatGuid_Params, nullptr);

	return GetHostStatGuid_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.WriteOnlinePlayerScores
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// int32_t                        LeaderboardId                  (CPF_Parm)
// TArray<struct FOnlinePlayerScore> PlayerScores                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineStatsInterfaceEOS::WriteOnlinePlayerScores(struct FName SessionName, int32_t LeaderboardId, TArray<struct FOnlinePlayerScore>& PlayerScores)
{
	static UFunction* uFnWriteOnlinePlayerScores = nullptr;

	if (!uFnWriteOnlinePlayerScores)
	{
		uFnWriteOnlinePlayerScores = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.WriteOnlinePlayerScores");
	}

	UOnlineStatsInterfaceEOS_execWriteOnlinePlayerScores_Params WriteOnlinePlayerScores_Params;
	memset(&WriteOnlinePlayerScores_Params, 0, sizeof(WriteOnlinePlayerScores_Params));
	memcpy_s(&WriteOnlinePlayerScores_Params.SessionName, sizeof(WriteOnlinePlayerScores_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&WriteOnlinePlayerScores_Params.LeaderboardId, sizeof(WriteOnlinePlayerScores_Params.LeaderboardId), &LeaderboardId, sizeof(LeaderboardId));
	memcpy_s(&WriteOnlinePlayerScores_Params.PlayerScores, sizeof(WriteOnlinePlayerScores_Params.PlayerScores), &PlayerScores, sizeof(PlayerScores));

	this->ProcessEvent(uFnWriteOnlinePlayerScores, &WriteOnlinePlayerScores_Params, nullptr);

	memcpy_s(&PlayerScores, sizeof(PlayerScores), &WriteOnlinePlayerScores_Params.PlayerScores, sizeof(WriteOnlinePlayerScores_Params.PlayerScores));

	return WriteOnlinePlayerScores_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearFlushOnlineStatsCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineStatsInterfaceEOS::ClearFlushOnlineStatsCompleteDelegate(struct FScriptDelegate FlushOnlineStatsCompleteDelegate)
{
	static UFunction* uFnClearFlushOnlineStatsCompleteDelegate = nullptr;

	if (!uFnClearFlushOnlineStatsCompleteDelegate)
	{
		uFnClearFlushOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearFlushOnlineStatsCompleteDelegate");
	}

	UOnlineStatsInterfaceEOS_execClearFlushOnlineStatsCompleteDelegate_Params ClearFlushOnlineStatsCompleteDelegate_Params;
	memset(&ClearFlushOnlineStatsCompleteDelegate_Params, 0, sizeof(ClearFlushOnlineStatsCompleteDelegate_Params));
	memcpy_s(&ClearFlushOnlineStatsCompleteDelegate_Params.FlushOnlineStatsCompleteDelegate, sizeof(ClearFlushOnlineStatsCompleteDelegate_Params.FlushOnlineStatsCompleteDelegate), &FlushOnlineStatsCompleteDelegate, sizeof(FlushOnlineStatsCompleteDelegate));

	this->ProcessEvent(uFnClearFlushOnlineStatsCompleteDelegate, &ClearFlushOnlineStatsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddFlushOnlineStatsCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineStatsInterfaceEOS::AddFlushOnlineStatsCompleteDelegate(struct FScriptDelegate FlushOnlineStatsCompleteDelegate)
{
	static UFunction* uFnAddFlushOnlineStatsCompleteDelegate = nullptr;

	if (!uFnAddFlushOnlineStatsCompleteDelegate)
	{
		uFnAddFlushOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddFlushOnlineStatsCompleteDelegate");
	}

	UOnlineStatsInterfaceEOS_execAddFlushOnlineStatsCompleteDelegate_Params AddFlushOnlineStatsCompleteDelegate_Params;
	memset(&AddFlushOnlineStatsCompleteDelegate_Params, 0, sizeof(AddFlushOnlineStatsCompleteDelegate_Params));
	memcpy_s(&AddFlushOnlineStatsCompleteDelegate_Params.FlushOnlineStatsCompleteDelegate, sizeof(AddFlushOnlineStatsCompleteDelegate_Params.FlushOnlineStatsCompleteDelegate), &FlushOnlineStatsCompleteDelegate, sizeof(FlushOnlineStatsCompleteDelegate));

	this->ProcessEvent(uFnAddFlushOnlineStatsCompleteDelegate, &AddFlushOnlineStatsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnFlushOnlineStatsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FName                   SessionName                    (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineStatsInterfaceEOS::OnFlushOnlineStatsComplete(struct FName SessionName, bool bWasSuccessful)
{
	static UFunction* uFnOnFlushOnlineStatsComplete = nullptr;

	if (!uFnOnFlushOnlineStatsComplete)
	{
		uFnOnFlushOnlineStatsComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnFlushOnlineStatsComplete");
	}

	UOnlineStatsInterfaceEOS_execOnFlushOnlineStatsComplete_Params OnFlushOnlineStatsComplete_Params;
	memset(&OnFlushOnlineStatsComplete_Params, 0, sizeof(OnFlushOnlineStatsComplete_Params));
	memcpy_s(&OnFlushOnlineStatsComplete_Params.SessionName, sizeof(OnFlushOnlineStatsComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	OnFlushOnlineStatsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnFlushOnlineStatsComplete, &OnFlushOnlineStatsComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.FlushOnlineStats
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)

bool UOnlineStatsInterfaceEOS::FlushOnlineStats(struct FName SessionName)
{
	static UFunction* uFnFlushOnlineStats = nullptr;

	if (!uFnFlushOnlineStats)
	{
		uFnFlushOnlineStats = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.FlushOnlineStats");
	}

	UOnlineStatsInterfaceEOS_execFlushOnlineStats_Params FlushOnlineStats_Params;
	memset(&FlushOnlineStats_Params, 0, sizeof(FlushOnlineStats_Params));
	memcpy_s(&FlushOnlineStats_Params.SessionName, sizeof(FlushOnlineStats_Params.SessionName), &SessionName, sizeof(SessionName));

	this->ProcessEvent(uFnFlushOnlineStats, &FlushOnlineStats_Params, nullptr);

	return FlushOnlineStats_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.WriteOnlineStats
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            Player                         (CPF_Parm | CPF_NeedCtorLink)
// class UOnlineStatsWrite*       StatsWrite                     (CPF_Parm)

bool UOnlineStatsInterfaceEOS::WriteOnlineStats(struct FName SessionName, struct FUniqueNetId Player, class UOnlineStatsWrite* StatsWrite)
{
	static UFunction* uFnWriteOnlineStats = nullptr;

	if (!uFnWriteOnlineStats)
	{
		uFnWriteOnlineStats = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.WriteOnlineStats");
	}

	UOnlineStatsInterfaceEOS_execWriteOnlineStats_Params WriteOnlineStats_Params;
	memset(&WriteOnlineStats_Params, 0, sizeof(WriteOnlineStats_Params));
	memcpy_s(&WriteOnlineStats_Params.SessionName, sizeof(WriteOnlineStats_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&WriteOnlineStats_Params.Player, sizeof(WriteOnlineStats_Params.Player), &Player, sizeof(Player));
	memcpy_s(&WriteOnlineStats_Params.StatsWrite, sizeof(WriteOnlineStats_Params.StatsWrite), &StatsWrite, sizeof(StatsWrite));

	this->ProcessEvent(uFnWriteOnlineStats, &WriteOnlineStats_Params, nullptr);

	return WriteOnlineStats_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.FreeStats
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)

void UOnlineStatsInterfaceEOS::FreeStats(class UOnlineStatsRead* StatsRead)
{
	static UFunction* uFnFreeStats = nullptr;

	if (!uFnFreeStats)
	{
		uFnFreeStats = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.FreeStats");
	}

	UOnlineStatsInterfaceEOS_execFreeStats_Params FreeStats_Params;
	memset(&FreeStats_Params, 0, sizeof(FreeStats_Params));
	memcpy_s(&FreeStats_Params.StatsRead, sizeof(FreeStats_Params.StatsRead), &StatsRead, sizeof(StatsRead));

	this->ProcessEvent(uFnFreeStats, &FreeStats_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearReadOnlineStatsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineStatsInterfaceEOS::ClearReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate)
{
	static UFunction* uFnClearReadOnlineStatsCompleteDelegate = nullptr;

	if (!uFnClearReadOnlineStatsCompleteDelegate)
	{
		uFnClearReadOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearReadOnlineStatsCompleteDelegate");
	}

	UOnlineStatsInterfaceEOS_execClearReadOnlineStatsCompleteDelegate_Params ClearReadOnlineStatsCompleteDelegate_Params;
	memset(&ClearReadOnlineStatsCompleteDelegate_Params, 0, sizeof(ClearReadOnlineStatsCompleteDelegate_Params));
	memcpy_s(&ClearReadOnlineStatsCompleteDelegate_Params.ReadOnlineStatsCompleteDelegate, sizeof(ClearReadOnlineStatsCompleteDelegate_Params.ReadOnlineStatsCompleteDelegate), &ReadOnlineStatsCompleteDelegate, sizeof(ReadOnlineStatsCompleteDelegate));

	this->ProcessEvent(uFnClearReadOnlineStatsCompleteDelegate, &ClearReadOnlineStatsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddReadOnlineStatsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineStatsInterfaceEOS::AddReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate)
{
	static UFunction* uFnAddReadOnlineStatsCompleteDelegate = nullptr;

	if (!uFnAddReadOnlineStatsCompleteDelegate)
	{
		uFnAddReadOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddReadOnlineStatsCompleteDelegate");
	}

	UOnlineStatsInterfaceEOS_execAddReadOnlineStatsCompleteDelegate_Params AddReadOnlineStatsCompleteDelegate_Params;
	memset(&AddReadOnlineStatsCompleteDelegate_Params, 0, sizeof(AddReadOnlineStatsCompleteDelegate_Params));
	memcpy_s(&AddReadOnlineStatsCompleteDelegate_Params.ReadOnlineStatsCompleteDelegate, sizeof(AddReadOnlineStatsCompleteDelegate_Params.ReadOnlineStatsCompleteDelegate), &ReadOnlineStatsCompleteDelegate, sizeof(ReadOnlineStatsCompleteDelegate));

	this->ProcessEvent(uFnAddReadOnlineStatsCompleteDelegate, &AddReadOnlineStatsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnReadOnlineStatsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineStatsInterfaceEOS::OnReadOnlineStatsComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnReadOnlineStatsComplete = nullptr;

	if (!uFnOnReadOnlineStatsComplete)
	{
		uFnOnReadOnlineStatsComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnReadOnlineStatsComplete");
	}

	UOnlineStatsInterfaceEOS_execOnReadOnlineStatsComplete_Params OnReadOnlineStatsComplete_Params;
	memset(&OnReadOnlineStatsComplete_Params, 0, sizeof(OnReadOnlineStatsComplete_Params));
	OnReadOnlineStatsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadOnlineStatsComplete, &OnReadOnlineStatsComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsByRankAroundPlayer
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// int32_t                        NumRows                        (CPF_OptionalParm | CPF_Parm)

bool UOnlineStatsInterfaceEOS::ReadOnlineStatsByRankAroundPlayer(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead, int32_t NumRows)
{
	static UFunction* uFnReadOnlineStatsByRankAroundPlayer = nullptr;

	if (!uFnReadOnlineStatsByRankAroundPlayer)
	{
		uFnReadOnlineStatsByRankAroundPlayer = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsByRankAroundPlayer");
	}

	UOnlineStatsInterfaceEOS_execReadOnlineStatsByRankAroundPlayer_Params ReadOnlineStatsByRankAroundPlayer_Params;
	memset(&ReadOnlineStatsByRankAroundPlayer_Params, 0, sizeof(ReadOnlineStatsByRankAroundPlayer_Params));
	memcpy_s(&ReadOnlineStatsByRankAroundPlayer_Params.LocalUserNum, sizeof(ReadOnlineStatsByRankAroundPlayer_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadOnlineStatsByRankAroundPlayer_Params.StatsRead, sizeof(ReadOnlineStatsByRankAroundPlayer_Params.StatsRead), &StatsRead, sizeof(StatsRead));
	memcpy_s(&ReadOnlineStatsByRankAroundPlayer_Params.NumRows, sizeof(ReadOnlineStatsByRankAroundPlayer_Params.NumRows), &NumRows, sizeof(NumRows));

	uFnReadOnlineStatsByRankAroundPlayer->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadOnlineStatsByRankAroundPlayer, &ReadOnlineStatsByRankAroundPlayer_Params, nullptr);
	uFnReadOnlineStatsByRankAroundPlayer->FunctionFlags |= 0x400;

	return ReadOnlineStatsByRankAroundPlayer_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsByRank
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// int32_t                        StartIndex                     (CPF_OptionalParm | CPF_Parm)
// int32_t                        NumToRead                      (CPF_OptionalParm | CPF_Parm)

bool UOnlineStatsInterfaceEOS::ReadOnlineStatsByRank(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead, int32_t StartIndex, int32_t NumToRead)
{
	static UFunction* uFnReadOnlineStatsByRank = nullptr;

	if (!uFnReadOnlineStatsByRank)
	{
		uFnReadOnlineStatsByRank = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsByRank");
	}

	UOnlineStatsInterfaceEOS_execReadOnlineStatsByRank_Params ReadOnlineStatsByRank_Params;
	memset(&ReadOnlineStatsByRank_Params, 0, sizeof(ReadOnlineStatsByRank_Params));
	memcpy_s(&ReadOnlineStatsByRank_Params.LocalUserNum, sizeof(ReadOnlineStatsByRank_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadOnlineStatsByRank_Params.StatsRead, sizeof(ReadOnlineStatsByRank_Params.StatsRead), &StatsRead, sizeof(StatsRead));
	memcpy_s(&ReadOnlineStatsByRank_Params.StartIndex, sizeof(ReadOnlineStatsByRank_Params.StartIndex), &StartIndex, sizeof(StartIndex));
	memcpy_s(&ReadOnlineStatsByRank_Params.NumToRead, sizeof(ReadOnlineStatsByRank_Params.NumToRead), &NumToRead, sizeof(NumToRead));

	uFnReadOnlineStatsByRank->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadOnlineStatsByRank, &ReadOnlineStatsByRank_Params, nullptr);
	uFnReadOnlineStatsByRank->FunctionFlags |= 0x400;

	return ReadOnlineStatsByRank_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsForFriends
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)

bool UOnlineStatsInterfaceEOS::ReadOnlineStatsForFriends(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead)
{
	static UFunction* uFnReadOnlineStatsForFriends = nullptr;

	if (!uFnReadOnlineStatsForFriends)
	{
		uFnReadOnlineStatsForFriends = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsForFriends");
	}

	UOnlineStatsInterfaceEOS_execReadOnlineStatsForFriends_Params ReadOnlineStatsForFriends_Params;
	memset(&ReadOnlineStatsForFriends_Params, 0, sizeof(ReadOnlineStatsForFriends_Params));
	memcpy_s(&ReadOnlineStatsForFriends_Params.LocalUserNum, sizeof(ReadOnlineStatsForFriends_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadOnlineStatsForFriends_Params.StatsRead, sizeof(ReadOnlineStatsForFriends_Params.StatsRead), &StatsRead, sizeof(StatsRead));

	uFnReadOnlineStatsForFriends->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadOnlineStatsForFriends, &ReadOnlineStatsForFriends_Params, nullptr);
	uFnReadOnlineStatsForFriends->FunctionFlags |= 0x400;

	return ReadOnlineStatsForFriends_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStats
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// TArray<struct FUniqueNetId>    Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineStatsInterfaceEOS::ReadOnlineStats(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>& Players)
{
	static UFunction* uFnReadOnlineStats = nullptr;

	if (!uFnReadOnlineStats)
	{
		uFnReadOnlineStats = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStats");
	}

	UOnlineStatsInterfaceEOS_execReadOnlineStats_Params ReadOnlineStats_Params;
	memset(&ReadOnlineStats_Params, 0, sizeof(ReadOnlineStats_Params));
	memcpy_s(&ReadOnlineStats_Params.LocalUserNum, sizeof(ReadOnlineStats_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadOnlineStats_Params.StatsRead, sizeof(ReadOnlineStats_Params.StatsRead), &StatsRead, sizeof(StatsRead));
	memcpy_s(&ReadOnlineStats_Params.Players, sizeof(ReadOnlineStats_Params.Players), &Players, sizeof(Players));

	uFnReadOnlineStats->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadOnlineStats, &ReadOnlineStats_Params, nullptr);
	uFnReadOnlineStats->FunctionFlags |= 0x400;

	memcpy_s(&Players, sizeof(Players), &ReadOnlineStats_Params.Players, sizeof(ReadOnlineStats_Params.Players));

	return ReadOnlineStats_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearAllDelegates
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlineUserCloudFileInterfaceEOS::ClearAllDelegates()
{
	static UFunction* uFnClearAllDelegates = nullptr;

	if (!uFnClearAllDelegates)
	{
		uFnClearAllDelegates = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearAllDelegates");
	}

	UOnlineUserCloudFileInterfaceEOS_execClearAllDelegates_Params ClearAllDelegates_Params;
	memset(&ClearAllDelegates_Params, 0, sizeof(ClearAllDelegates_Params));

	this->ProcessEvent(uFnClearAllDelegates, &ClearAllDelegates_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearDeleteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::ClearDeleteUserFileCompleteDelegate(struct FScriptDelegate DeleteUserFileCompleteDelegate)
{
	static UFunction* uFnClearDeleteUserFileCompleteDelegate = nullptr;

	if (!uFnClearDeleteUserFileCompleteDelegate)
	{
		uFnClearDeleteUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearDeleteUserFileCompleteDelegate");
	}

	UOnlineUserCloudFileInterfaceEOS_execClearDeleteUserFileCompleteDelegate_Params ClearDeleteUserFileCompleteDelegate_Params;
	memset(&ClearDeleteUserFileCompleteDelegate_Params, 0, sizeof(ClearDeleteUserFileCompleteDelegate_Params));
	memcpy_s(&ClearDeleteUserFileCompleteDelegate_Params.DeleteUserFileCompleteDelegate, sizeof(ClearDeleteUserFileCompleteDelegate_Params.DeleteUserFileCompleteDelegate), &DeleteUserFileCompleteDelegate, sizeof(DeleteUserFileCompleteDelegate));

	this->ProcessEvent(uFnClearDeleteUserFileCompleteDelegate, &ClearDeleteUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddDeleteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::AddDeleteUserFileCompleteDelegate(struct FScriptDelegate DeleteUserFileCompleteDelegate)
{
	static UFunction* uFnAddDeleteUserFileCompleteDelegate = nullptr;

	if (!uFnAddDeleteUserFileCompleteDelegate)
	{
		uFnAddDeleteUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddDeleteUserFileCompleteDelegate");
	}

	UOnlineUserCloudFileInterfaceEOS_execAddDeleteUserFileCompleteDelegate_Params AddDeleteUserFileCompleteDelegate_Params;
	memset(&AddDeleteUserFileCompleteDelegate_Params, 0, sizeof(AddDeleteUserFileCompleteDelegate_Params));
	memcpy_s(&AddDeleteUserFileCompleteDelegate_Params.DeleteUserFileCompleteDelegate, sizeof(AddDeleteUserFileCompleteDelegate_Params.DeleteUserFileCompleteDelegate), &DeleteUserFileCompleteDelegate, sizeof(DeleteUserFileCompleteDelegate));

	this->ProcessEvent(uFnAddDeleteUserFileCompleteDelegate, &AddDeleteUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.DeleteUserFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// bool                           bShouldCloudDelete             (CPF_Parm)
// bool                           bShouldLocallyDelete           (CPF_Parm)

bool UOnlineUserCloudFileInterfaceEOS::DeleteUserFile(class FString UserId, class FString Filename, bool bShouldCloudDelete, bool bShouldLocallyDelete)
{
	static UFunction* uFnDeleteUserFile = nullptr;

	if (!uFnDeleteUserFile)
	{
		uFnDeleteUserFile = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.DeleteUserFile");
	}

	UOnlineUserCloudFileInterfaceEOS_execDeleteUserFile_Params DeleteUserFile_Params;
	memset(&DeleteUserFile_Params, 0, sizeof(DeleteUserFile_Params));
	memcpy_s(&DeleteUserFile_Params.UserId, sizeof(DeleteUserFile_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&DeleteUserFile_Params.Filename, sizeof(DeleteUserFile_Params.Filename), &Filename, sizeof(Filename));
	DeleteUserFile_Params.bShouldCloudDelete = bShouldCloudDelete;
	DeleteUserFile_Params.bShouldLocallyDelete = bShouldLocallyDelete;

	uFnDeleteUserFile->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDeleteUserFile, &DeleteUserFile_Params, nullptr);
	uFnDeleteUserFile->FunctionFlags |= 0x400;

	return DeleteUserFile_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnDeleteUserFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::OnDeleteUserFileComplete(bool bWasSuccessful, class FString UserId, class FString Filename)
{
	static UFunction* uFnOnDeleteUserFileComplete = nullptr;

	if (!uFnOnDeleteUserFileComplete)
	{
		uFnOnDeleteUserFileComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnDeleteUserFileComplete");
	}

	UOnlineUserCloudFileInterfaceEOS_execOnDeleteUserFileComplete_Params OnDeleteUserFileComplete_Params;
	memset(&OnDeleteUserFileComplete_Params, 0, sizeof(OnDeleteUserFileComplete_Params));
	OnDeleteUserFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteUserFileComplete_Params.UserId, sizeof(OnDeleteUserFileComplete_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnDeleteUserFileComplete_Params.Filename, sizeof(OnDeleteUserFileComplete_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnOnDeleteUserFileComplete, &OnDeleteUserFileComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearWriteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::ClearWriteUserFileCompleteDelegate(struct FScriptDelegate WriteUserFileCompleteDelegate)
{
	static UFunction* uFnClearWriteUserFileCompleteDelegate = nullptr;

	if (!uFnClearWriteUserFileCompleteDelegate)
	{
		uFnClearWriteUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearWriteUserFileCompleteDelegate");
	}

	UOnlineUserCloudFileInterfaceEOS_execClearWriteUserFileCompleteDelegate_Params ClearWriteUserFileCompleteDelegate_Params;
	memset(&ClearWriteUserFileCompleteDelegate_Params, 0, sizeof(ClearWriteUserFileCompleteDelegate_Params));
	memcpy_s(&ClearWriteUserFileCompleteDelegate_Params.WriteUserFileCompleteDelegate, sizeof(ClearWriteUserFileCompleteDelegate_Params.WriteUserFileCompleteDelegate), &WriteUserFileCompleteDelegate, sizeof(WriteUserFileCompleteDelegate));

	this->ProcessEvent(uFnClearWriteUserFileCompleteDelegate, &ClearWriteUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddWriteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::AddWriteUserFileCompleteDelegate(struct FScriptDelegate WriteUserFileCompleteDelegate)
{
	static UFunction* uFnAddWriteUserFileCompleteDelegate = nullptr;

	if (!uFnAddWriteUserFileCompleteDelegate)
	{
		uFnAddWriteUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddWriteUserFileCompleteDelegate");
	}

	UOnlineUserCloudFileInterfaceEOS_execAddWriteUserFileCompleteDelegate_Params AddWriteUserFileCompleteDelegate_Params;
	memset(&AddWriteUserFileCompleteDelegate_Params, 0, sizeof(AddWriteUserFileCompleteDelegate_Params));
	memcpy_s(&AddWriteUserFileCompleteDelegate_Params.WriteUserFileCompleteDelegate, sizeof(AddWriteUserFileCompleteDelegate_Params.WriteUserFileCompleteDelegate), &WriteUserFileCompleteDelegate, sizeof(WriteUserFileCompleteDelegate));

	this->ProcessEvent(uFnAddWriteUserFileCompleteDelegate, &AddWriteUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.WriteUserFile
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                FileContents                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineUserCloudFileInterfaceEOS::WriteUserFile(class FString UserId, class FString Filename, TArray<uint8_t>& FileContents)
{
	static UFunction* uFnWriteUserFile = nullptr;

	if (!uFnWriteUserFile)
	{
		uFnWriteUserFile = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.WriteUserFile");
	}

	UOnlineUserCloudFileInterfaceEOS_execWriteUserFile_Params WriteUserFile_Params;
	memset(&WriteUserFile_Params, 0, sizeof(WriteUserFile_Params));
	memcpy_s(&WriteUserFile_Params.UserId, sizeof(WriteUserFile_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&WriteUserFile_Params.Filename, sizeof(WriteUserFile_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&WriteUserFile_Params.FileContents, sizeof(WriteUserFile_Params.FileContents), &FileContents, sizeof(FileContents));

	uFnWriteUserFile->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnWriteUserFile, &WriteUserFile_Params, nullptr);
	uFnWriteUserFile->FunctionFlags |= 0x400;

	memcpy_s(&FileContents, sizeof(FileContents), &WriteUserFile_Params.FileContents, sizeof(WriteUserFile_Params.FileContents));

	return WriteUserFile_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnWriteUserFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::OnWriteUserFileComplete(bool bWasSuccessful, class FString UserId, class FString Filename)
{
	static UFunction* uFnOnWriteUserFileComplete = nullptr;

	if (!uFnOnWriteUserFileComplete)
	{
		uFnOnWriteUserFileComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnWriteUserFileComplete");
	}

	UOnlineUserCloudFileInterfaceEOS_execOnWriteUserFileComplete_Params OnWriteUserFileComplete_Params;
	memset(&OnWriteUserFileComplete_Params, 0, sizeof(OnWriteUserFileComplete_Params));
	OnWriteUserFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnWriteUserFileComplete_Params.UserId, sizeof(OnWriteUserFileComplete_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnWriteUserFileComplete_Params.Filename, sizeof(OnWriteUserFileComplete_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnOnWriteUserFileComplete, &OnWriteUserFileComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearReadUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::ClearReadUserFileCompleteDelegate(struct FScriptDelegate ReadUserFileCompleteDelegate)
{
	static UFunction* uFnClearReadUserFileCompleteDelegate = nullptr;

	if (!uFnClearReadUserFileCompleteDelegate)
	{
		uFnClearReadUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearReadUserFileCompleteDelegate");
	}

	UOnlineUserCloudFileInterfaceEOS_execClearReadUserFileCompleteDelegate_Params ClearReadUserFileCompleteDelegate_Params;
	memset(&ClearReadUserFileCompleteDelegate_Params, 0, sizeof(ClearReadUserFileCompleteDelegate_Params));
	memcpy_s(&ClearReadUserFileCompleteDelegate_Params.ReadUserFileCompleteDelegate, sizeof(ClearReadUserFileCompleteDelegate_Params.ReadUserFileCompleteDelegate), &ReadUserFileCompleteDelegate, sizeof(ReadUserFileCompleteDelegate));

	this->ProcessEvent(uFnClearReadUserFileCompleteDelegate, &ClearReadUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddReadUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::AddReadUserFileCompleteDelegate(struct FScriptDelegate ReadUserFileCompleteDelegate)
{
	static UFunction* uFnAddReadUserFileCompleteDelegate = nullptr;

	if (!uFnAddReadUserFileCompleteDelegate)
	{
		uFnAddReadUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddReadUserFileCompleteDelegate");
	}

	UOnlineUserCloudFileInterfaceEOS_execAddReadUserFileCompleteDelegate_Params AddReadUserFileCompleteDelegate_Params;
	memset(&AddReadUserFileCompleteDelegate_Params, 0, sizeof(AddReadUserFileCompleteDelegate_Params));
	memcpy_s(&AddReadUserFileCompleteDelegate_Params.ReadUserFileCompleteDelegate, sizeof(AddReadUserFileCompleteDelegate_Params.ReadUserFileCompleteDelegate), &ReadUserFileCompleteDelegate, sizeof(ReadUserFileCompleteDelegate));

	this->ProcessEvent(uFnAddReadUserFileCompleteDelegate, &AddReadUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ReadUserFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineUserCloudFileInterfaceEOS::ReadUserFile(class FString UserId, class FString Filename)
{
	static UFunction* uFnReadUserFile = nullptr;

	if (!uFnReadUserFile)
	{
		uFnReadUserFile = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ReadUserFile");
	}

	UOnlineUserCloudFileInterfaceEOS_execReadUserFile_Params ReadUserFile_Params;
	memset(&ReadUserFile_Params, 0, sizeof(ReadUserFile_Params));
	memcpy_s(&ReadUserFile_Params.UserId, sizeof(ReadUserFile_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&ReadUserFile_Params.Filename, sizeof(ReadUserFile_Params.Filename), &Filename, sizeof(Filename));

	uFnReadUserFile->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadUserFile, &ReadUserFile_Params, nullptr);
	uFnReadUserFile->FunctionFlags |= 0x400;

	return ReadUserFile_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnReadUserFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::OnReadUserFileComplete(bool bWasSuccessful, class FString UserId, class FString Filename)
{
	static UFunction* uFnOnReadUserFileComplete = nullptr;

	if (!uFnOnReadUserFileComplete)
	{
		uFnOnReadUserFileComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnReadUserFileComplete");
	}

	UOnlineUserCloudFileInterfaceEOS_execOnReadUserFileComplete_Params OnReadUserFileComplete_Params;
	memset(&OnReadUserFileComplete_Params, 0, sizeof(OnReadUserFileComplete_Params));
	OnReadUserFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadUserFileComplete_Params.UserId, sizeof(OnReadUserFileComplete_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnReadUserFileComplete_Params.Filename, sizeof(OnReadUserFileComplete_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnOnReadUserFileComplete, &OnReadUserFileComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.GetUserFileList
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FEmsFile>        UserFiles                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::GetUserFileList(class FString UserId, TArray<struct FEmsFile>& UserFiles)
{
	static UFunction* uFnGetUserFileList = nullptr;

	if (!uFnGetUserFileList)
	{
		uFnGetUserFileList = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.GetUserFileList");
	}

	UOnlineUserCloudFileInterfaceEOS_execGetUserFileList_Params GetUserFileList_Params;
	memset(&GetUserFileList_Params, 0, sizeof(GetUserFileList_Params));
	memcpy_s(&GetUserFileList_Params.UserId, sizeof(GetUserFileList_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&GetUserFileList_Params.UserFiles, sizeof(GetUserFileList_Params.UserFiles), &UserFiles, sizeof(UserFiles));

	uFnGetUserFileList->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetUserFileList, &GetUserFileList_Params, nullptr);
	uFnGetUserFileList->FunctionFlags |= 0x400;

	memcpy_s(&UserFiles, sizeof(UserFiles), &GetUserFileList_Params.UserFiles, sizeof(GetUserFileList_Params.UserFiles));
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearEnumerateUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::ClearEnumerateUserFileCompleteDelegate(struct FScriptDelegate EnumerateUserFileCompleteDelegate)
{
	static UFunction* uFnClearEnumerateUserFileCompleteDelegate = nullptr;

	if (!uFnClearEnumerateUserFileCompleteDelegate)
	{
		uFnClearEnumerateUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearEnumerateUserFileCompleteDelegate");
	}

	UOnlineUserCloudFileInterfaceEOS_execClearEnumerateUserFileCompleteDelegate_Params ClearEnumerateUserFileCompleteDelegate_Params;
	memset(&ClearEnumerateUserFileCompleteDelegate_Params, 0, sizeof(ClearEnumerateUserFileCompleteDelegate_Params));
	memcpy_s(&ClearEnumerateUserFileCompleteDelegate_Params.EnumerateUserFileCompleteDelegate, sizeof(ClearEnumerateUserFileCompleteDelegate_Params.EnumerateUserFileCompleteDelegate), &EnumerateUserFileCompleteDelegate, sizeof(EnumerateUserFileCompleteDelegate));

	this->ProcessEvent(uFnClearEnumerateUserFileCompleteDelegate, &ClearEnumerateUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddEnumerateUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::AddEnumerateUserFileCompleteDelegate(struct FScriptDelegate EnumerateUserFileCompleteDelegate)
{
	static UFunction* uFnAddEnumerateUserFileCompleteDelegate = nullptr;

	if (!uFnAddEnumerateUserFileCompleteDelegate)
	{
		uFnAddEnumerateUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddEnumerateUserFileCompleteDelegate");
	}

	UOnlineUserCloudFileInterfaceEOS_execAddEnumerateUserFileCompleteDelegate_Params AddEnumerateUserFileCompleteDelegate_Params;
	memset(&AddEnumerateUserFileCompleteDelegate_Params, 0, sizeof(AddEnumerateUserFileCompleteDelegate_Params));
	memcpy_s(&AddEnumerateUserFileCompleteDelegate_Params.EnumerateUserFileCompleteDelegate, sizeof(AddEnumerateUserFileCompleteDelegate_Params.EnumerateUserFileCompleteDelegate), &EnumerateUserFileCompleteDelegate, sizeof(EnumerateUserFileCompleteDelegate));

	this->ProcessEvent(uFnAddEnumerateUserFileCompleteDelegate, &AddEnumerateUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.EnumerateUserFiles
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::EnumerateUserFiles(class FString UserId)
{
	static UFunction* uFnEnumerateUserFiles = nullptr;

	if (!uFnEnumerateUserFiles)
	{
		uFnEnumerateUserFiles = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.EnumerateUserFiles");
	}

	UOnlineUserCloudFileInterfaceEOS_execEnumerateUserFiles_Params EnumerateUserFiles_Params;
	memset(&EnumerateUserFiles_Params, 0, sizeof(EnumerateUserFiles_Params));
	memcpy_s(&EnumerateUserFiles_Params.UserId, sizeof(EnumerateUserFiles_Params.UserId), &UserId, sizeof(UserId));

	uFnEnumerateUserFiles->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnEnumerateUserFiles, &EnumerateUserFiles_Params, nullptr);
	uFnEnumerateUserFiles->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnEnumerateUserFilesComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::OnEnumerateUserFilesComplete(bool bWasSuccessful, class FString UserId)
{
	static UFunction* uFnOnEnumerateUserFilesComplete = nullptr;

	if (!uFnOnEnumerateUserFilesComplete)
	{
		uFnOnEnumerateUserFilesComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnEnumerateUserFilesComplete");
	}

	UOnlineUserCloudFileInterfaceEOS_execOnEnumerateUserFilesComplete_Params OnEnumerateUserFilesComplete_Params;
	memset(&OnEnumerateUserFilesComplete_Params, 0, sizeof(OnEnumerateUserFilesComplete_Params));
	OnEnumerateUserFilesComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnEnumerateUserFilesComplete_Params.UserId, sizeof(OnEnumerateUserFilesComplete_Params.UserId), &UserId, sizeof(UserId));

	this->ProcessEvent(uFnOnEnumerateUserFilesComplete, &OnEnumerateUserFilesComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineUserCloudFileInterfaceEOS::ClearFile(class FString UserId, class FString Filename)
{
	static UFunction* uFnClearFile = nullptr;

	if (!uFnClearFile)
	{
		uFnClearFile = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearFile");
	}

	UOnlineUserCloudFileInterfaceEOS_execClearFile_Params ClearFile_Params;
	memset(&ClearFile_Params, 0, sizeof(ClearFile_Params));
	memcpy_s(&ClearFile_Params.UserId, sizeof(ClearFile_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&ClearFile_Params.Filename, sizeof(ClearFile_Params.Filename), &Filename, sizeof(Filename));

	uFnClearFile->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnClearFile, &ClearFile_Params, nullptr);
	uFnClearFile->FunctionFlags |= 0x400;

	return ClearFile_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearFiles
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineUserCloudFileInterfaceEOS::ClearFiles(class FString UserId)
{
	static UFunction* uFnClearFiles = nullptr;

	if (!uFnClearFiles)
	{
		uFnClearFiles = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearFiles");
	}

	UOnlineUserCloudFileInterfaceEOS_execClearFiles_Params ClearFiles_Params;
	memset(&ClearFiles_Params, 0, sizeof(ClearFiles_Params));
	memcpy_s(&ClearFiles_Params.UserId, sizeof(ClearFiles_Params.UserId), &UserId, sizeof(UserId));

	uFnClearFiles->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnClearFiles, &ClearFiles_Params, nullptr);
	uFnClearFiles->FunctionFlags |= 0x400;

	return ClearFiles_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.GetFileContents
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineUserCloudFileInterfaceEOS::GetFileContents(class FString UserId, class FString Filename, TArray<uint8_t>& FileContents)
{
	static UFunction* uFnGetFileContents = nullptr;

	if (!uFnGetFileContents)
	{
		uFnGetFileContents = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.GetFileContents");
	}

	UOnlineUserCloudFileInterfaceEOS_execGetFileContents_Params GetFileContents_Params;
	memset(&GetFileContents_Params, 0, sizeof(GetFileContents_Params));
	memcpy_s(&GetFileContents_Params.UserId, sizeof(GetFileContents_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&GetFileContents_Params.Filename, sizeof(GetFileContents_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&GetFileContents_Params.FileContents, sizeof(GetFileContents_Params.FileContents), &FileContents, sizeof(FileContents));

	uFnGetFileContents->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetFileContents, &GetFileContents_Params, nullptr);
	uFnGetFileContents->FunctionFlags |= 0x400;

	memcpy_s(&FileContents, sizeof(FileContents), &GetFileContents_Params.FileContents, sizeof(GetFileContents_Params.FileContents));

	return GetFileContents_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetVoiceReceiveVolume
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          VoiceVolume                    (CPF_Parm)

bool UOnlineVoiceInterfaceEOS::SetVoiceReceiveVolume(float VoiceVolume)
{
	static UFunction* uFnSetVoiceReceiveVolume = nullptr;

	if (!uFnSetVoiceReceiveVolume)
	{
		uFnSetVoiceReceiveVolume = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetVoiceReceiveVolume");
	}

	UOnlineVoiceInterfaceEOS_execSetVoiceReceiveVolume_Params SetVoiceReceiveVolume_Params;
	memset(&SetVoiceReceiveVolume_Params, 0, sizeof(SetVoiceReceiveVolume_Params));
	memcpy_s(&SetVoiceReceiveVolume_Params.VoiceVolume, sizeof(SetVoiceReceiveVolume_Params.VoiceVolume), &VoiceVolume, sizeof(VoiceVolume));

	this->ProcessEvent(uFnSetVoiceReceiveVolume, &SetVoiceReceiveVolume_Params, nullptr);

	return SetVoiceReceiveVolume_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.UnmuteAll
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineVoiceInterfaceEOS::UnmuteAll(uint8_t LocalUserNum)
{
	static UFunction* uFnUnmuteAll = nullptr;

	if (!uFnUnmuteAll)
	{
		uFnUnmuteAll = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.UnmuteAll");
	}

	UOnlineVoiceInterfaceEOS_execUnmuteAll_Params UnmuteAll_Params;
	memset(&UnmuteAll_Params, 0, sizeof(UnmuteAll_Params));
	memcpy_s(&UnmuteAll_Params.LocalUserNum, sizeof(UnmuteAll_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnUnmuteAll, &UnmuteAll_Params, nullptr);

	return UnmuteAll_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.MuteAll
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAllowFriends                  (CPF_Parm)

bool UOnlineVoiceInterfaceEOS::MuteAll(uint8_t LocalUserNum, bool bAllowFriends)
{
	static UFunction* uFnMuteAll = nullptr;

	if (!uFnMuteAll)
	{
		uFnMuteAll = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.MuteAll");
	}

	UOnlineVoiceInterfaceEOS_execMuteAll_Params MuteAll_Params;
	memset(&MuteAll_Params, 0, sizeof(MuteAll_Params));
	memcpy_s(&MuteAll_Params.LocalUserNum, sizeof(MuteAll_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	MuteAll_Params.bAllowFriends = bAllowFriends;

	this->ProcessEvent(uFnMuteAll, &MuteAll_Params, nullptr);

	return MuteAll_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetSpeechRecognitionObject
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class USpeechRecognition*      SpeechRecogObj                 (CPF_Parm)

bool UOnlineVoiceInterfaceEOS::SetSpeechRecognitionObject(uint8_t LocalUserNum, class USpeechRecognition* SpeechRecogObj)
{
	static UFunction* uFnSetSpeechRecognitionObject = nullptr;

	if (!uFnSetSpeechRecognitionObject)
	{
		uFnSetSpeechRecognitionObject = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetSpeechRecognitionObject");
	}

	UOnlineVoiceInterfaceEOS_execSetSpeechRecognitionObject_Params SetSpeechRecognitionObject_Params;
	memset(&SetSpeechRecognitionObject_Params, 0, sizeof(SetSpeechRecognitionObject_Params));
	memcpy_s(&SetSpeechRecognitionObject_Params.LocalUserNum, sizeof(SetSpeechRecognitionObject_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&SetSpeechRecognitionObject_Params.SpeechRecogObj, sizeof(SetSpeechRecognitionObject_Params.SpeechRecogObj), &SpeechRecogObj, sizeof(SpeechRecogObj));

	this->ProcessEvent(uFnSetSpeechRecognitionObject, &SetSpeechRecognitionObject_Params, nullptr);

	return SetSpeechRecognitionObject_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SelectVocabulary
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        VocabularyId                   (CPF_Parm)

bool UOnlineVoiceInterfaceEOS::SelectVocabulary(uint8_t LocalUserNum, int32_t VocabularyId)
{
	static UFunction* uFnSelectVocabulary = nullptr;

	if (!uFnSelectVocabulary)
	{
		uFnSelectVocabulary = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SelectVocabulary");
	}

	UOnlineVoiceInterfaceEOS_execSelectVocabulary_Params SelectVocabulary_Params;
	memset(&SelectVocabulary_Params, 0, sizeof(SelectVocabulary_Params));
	memcpy_s(&SelectVocabulary_Params.LocalUserNum, sizeof(SelectVocabulary_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&SelectVocabulary_Params.VocabularyId, sizeof(SelectVocabulary_Params.VocabularyId), &VocabularyId, sizeof(VocabularyId));

	this->ProcessEvent(uFnSelectVocabulary, &SelectVocabulary_Params, nullptr);

	return SelectVocabulary_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.ClearRecognitionCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RecognitionDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineVoiceInterfaceEOS::ClearRecognitionCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RecognitionDelegate)
{
	static UFunction* uFnClearRecognitionCompleteDelegate = nullptr;

	if (!uFnClearRecognitionCompleteDelegate)
	{
		uFnClearRecognitionCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.ClearRecognitionCompleteDelegate");
	}

	UOnlineVoiceInterfaceEOS_execClearRecognitionCompleteDelegate_Params ClearRecognitionCompleteDelegate_Params;
	memset(&ClearRecognitionCompleteDelegate_Params, 0, sizeof(ClearRecognitionCompleteDelegate_Params));
	memcpy_s(&ClearRecognitionCompleteDelegate_Params.LocalUserNum, sizeof(ClearRecognitionCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearRecognitionCompleteDelegate_Params.RecognitionDelegate, sizeof(ClearRecognitionCompleteDelegate_Params.RecognitionDelegate), &RecognitionDelegate, sizeof(RecognitionDelegate));

	this->ProcessEvent(uFnClearRecognitionCompleteDelegate, &ClearRecognitionCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.AddRecognitionCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RecognitionDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineVoiceInterfaceEOS::AddRecognitionCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RecognitionDelegate)
{
	static UFunction* uFnAddRecognitionCompleteDelegate = nullptr;

	if (!uFnAddRecognitionCompleteDelegate)
	{
		uFnAddRecognitionCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.AddRecognitionCompleteDelegate");
	}

	UOnlineVoiceInterfaceEOS_execAddRecognitionCompleteDelegate_Params AddRecognitionCompleteDelegate_Params;
	memset(&AddRecognitionCompleteDelegate_Params, 0, sizeof(AddRecognitionCompleteDelegate_Params));
	memcpy_s(&AddRecognitionCompleteDelegate_Params.LocalUserNum, sizeof(AddRecognitionCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddRecognitionCompleteDelegate_Params.RecognitionDelegate, sizeof(AddRecognitionCompleteDelegate_Params.RecognitionDelegate), &RecognitionDelegate, sizeof(RecognitionDelegate));

	this->ProcessEvent(uFnAddRecognitionCompleteDelegate, &AddRecognitionCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.GetRecognitionResults
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FSpeechRecognizedWord> Words                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineVoiceInterfaceEOS::GetRecognitionResults(uint8_t LocalUserNum, TArray<struct FSpeechRecognizedWord>& Words)
{
	static UFunction* uFnGetRecognitionResults = nullptr;

	if (!uFnGetRecognitionResults)
	{
		uFnGetRecognitionResults = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.GetRecognitionResults");
	}

	UOnlineVoiceInterfaceEOS_execGetRecognitionResults_Params GetRecognitionResults_Params;
	memset(&GetRecognitionResults_Params, 0, sizeof(GetRecognitionResults_Params));
	memcpy_s(&GetRecognitionResults_Params.LocalUserNum, sizeof(GetRecognitionResults_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&GetRecognitionResults_Params.Words, sizeof(GetRecognitionResults_Params.Words), &Words, sizeof(Words));

	this->ProcessEvent(uFnGetRecognitionResults, &GetRecognitionResults_Params, nullptr);

	memcpy_s(&Words, sizeof(Words), &GetRecognitionResults_Params.Words, sizeof(GetRecognitionResults_Params.Words));

	return GetRecognitionResults_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.StopSpeechRecognition
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineVoiceInterfaceEOS::StopSpeechRecognition(uint8_t LocalUserNum)
{
	static UFunction* uFnStopSpeechRecognition = nullptr;

	if (!uFnStopSpeechRecognition)
	{
		uFnStopSpeechRecognition = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.StopSpeechRecognition");
	}

	UOnlineVoiceInterfaceEOS_execStopSpeechRecognition_Params StopSpeechRecognition_Params;
	memset(&StopSpeechRecognition_Params, 0, sizeof(StopSpeechRecognition_Params));
	memcpy_s(&StopSpeechRecognition_Params.LocalUserNum, sizeof(StopSpeechRecognition_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnStopSpeechRecognition, &StopSpeechRecognition_Params, nullptr);

	return StopSpeechRecognition_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.StartSpeechRecognition
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineVoiceInterfaceEOS::StartSpeechRecognition(uint8_t LocalUserNum)
{
	static UFunction* uFnStartSpeechRecognition = nullptr;

	if (!uFnStartSpeechRecognition)
	{
		uFnStartSpeechRecognition = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.StartSpeechRecognition");
	}

	UOnlineVoiceInterfaceEOS_execStartSpeechRecognition_Params StartSpeechRecognition_Params;
	memset(&StartSpeechRecognition_Params, 0, sizeof(StartSpeechRecognition_Params));
	memcpy_s(&StartSpeechRecognition_Params.LocalUserNum, sizeof(StartSpeechRecognition_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnStartSpeechRecognition, &StartSpeechRecognition_Params, nullptr);

	return StartSpeechRecognition_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.StopNetworkedVoice
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineVoiceInterfaceEOS::StopNetworkedVoice(uint8_t LocalUserNum)
{
	static UFunction* uFnStopNetworkedVoice = nullptr;

	if (!uFnStopNetworkedVoice)
	{
		uFnStopNetworkedVoice = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.StopNetworkedVoice");
	}

	UOnlineVoiceInterfaceEOS_execStopNetworkedVoice_Params StopNetworkedVoice_Params;
	memset(&StopNetworkedVoice_Params, 0, sizeof(StopNetworkedVoice_Params));
	memcpy_s(&StopNetworkedVoice_Params.LocalUserNum, sizeof(StopNetworkedVoice_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnStopNetworkedVoice, &StopNetworkedVoice_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.StartNetworkedVoice
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineVoiceInterfaceEOS::StartNetworkedVoice(uint8_t LocalUserNum)
{
	static UFunction* uFnStartNetworkedVoice = nullptr;

	if (!uFnStartNetworkedVoice)
	{
		uFnStartNetworkedVoice = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.StartNetworkedVoice");
	}

	UOnlineVoiceInterfaceEOS_execStartNetworkedVoice_Params StartNetworkedVoice_Params;
	memset(&StartNetworkedVoice_Params, 0, sizeof(StartNetworkedVoice_Params));
	memcpy_s(&StartNetworkedVoice_Params.LocalUserNum, sizeof(StartNetworkedVoice_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnStartNetworkedVoice, &StartNetworkedVoice_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.ClearPlayerTalkingDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         TalkerDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineVoiceInterfaceEOS::ClearPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate)
{
	static UFunction* uFnClearPlayerTalkingDelegate = nullptr;

	if (!uFnClearPlayerTalkingDelegate)
	{
		uFnClearPlayerTalkingDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.ClearPlayerTalkingDelegate");
	}

	UOnlineVoiceInterfaceEOS_execClearPlayerTalkingDelegate_Params ClearPlayerTalkingDelegate_Params;
	memset(&ClearPlayerTalkingDelegate_Params, 0, sizeof(ClearPlayerTalkingDelegate_Params));
	memcpy_s(&ClearPlayerTalkingDelegate_Params.TalkerDelegate, sizeof(ClearPlayerTalkingDelegate_Params.TalkerDelegate), &TalkerDelegate, sizeof(TalkerDelegate));

	this->ProcessEvent(uFnClearPlayerTalkingDelegate, &ClearPlayerTalkingDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.AddPlayerTalkingDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         TalkerDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineVoiceInterfaceEOS::AddPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate)
{
	static UFunction* uFnAddPlayerTalkingDelegate = nullptr;

	if (!uFnAddPlayerTalkingDelegate)
	{
		uFnAddPlayerTalkingDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.AddPlayerTalkingDelegate");
	}

	UOnlineVoiceInterfaceEOS_execAddPlayerTalkingDelegate_Params AddPlayerTalkingDelegate_Params;
	memset(&AddPlayerTalkingDelegate_Params, 0, sizeof(AddPlayerTalkingDelegate_Params));
	memcpy_s(&AddPlayerTalkingDelegate_Params.TalkerDelegate, sizeof(AddPlayerTalkingDelegate_Params.TalkerDelegate), &TalkerDelegate, sizeof(TalkerDelegate));

	this->ProcessEvent(uFnAddPlayerTalkingDelegate, &AddPlayerTalkingDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.UnmuteRemoteTalker
// [0x00024001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// bool                           bIsSystemWide                  (CPF_OptionalParm | CPF_Parm)

bool UOnlineVoiceInterfaceEOS::UnmuteRemoteTalker(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, bool bIsSystemWide)
{
	static UFunction* uFnUnmuteRemoteTalker = nullptr;

	if (!uFnUnmuteRemoteTalker)
	{
		uFnUnmuteRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.UnmuteRemoteTalker");
	}

	UOnlineVoiceInterfaceEOS_execUnmuteRemoteTalker_Params UnmuteRemoteTalker_Params;
	memset(&UnmuteRemoteTalker_Params, 0, sizeof(UnmuteRemoteTalker_Params));
	memcpy_s(&UnmuteRemoteTalker_Params.LocalUserNum, sizeof(UnmuteRemoteTalker_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&UnmuteRemoteTalker_Params.PlayerID, sizeof(UnmuteRemoteTalker_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	UnmuteRemoteTalker_Params.bIsSystemWide = bIsSystemWide;

	this->ProcessEvent(uFnUnmuteRemoteTalker, &UnmuteRemoteTalker_Params, nullptr);

	return UnmuteRemoteTalker_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.MuteRemoteTalker
// [0x00024001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// bool                           bIsSystemWide                  (CPF_OptionalParm | CPF_Parm)

bool UOnlineVoiceInterfaceEOS::MuteRemoteTalker(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, bool bIsSystemWide)
{
	static UFunction* uFnMuteRemoteTalker = nullptr;

	if (!uFnMuteRemoteTalker)
	{
		uFnMuteRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.MuteRemoteTalker");
	}

	UOnlineVoiceInterfaceEOS_execMuteRemoteTalker_Params MuteRemoteTalker_Params;
	memset(&MuteRemoteTalker_Params, 0, sizeof(MuteRemoteTalker_Params));
	memcpy_s(&MuteRemoteTalker_Params.LocalUserNum, sizeof(MuteRemoteTalker_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&MuteRemoteTalker_Params.PlayerID, sizeof(MuteRemoteTalker_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	MuteRemoteTalker_Params.bIsSystemWide = bIsSystemWide;

	this->ProcessEvent(uFnMuteRemoteTalker, &MuteRemoteTalker_Params, nullptr);

	return MuteRemoteTalker_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetRemoteTalkerPriority
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Priority                       (CPF_Parm)

bool UOnlineVoiceInterfaceEOS::SetRemoteTalkerPriority(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, int32_t Priority)
{
	static UFunction* uFnSetRemoteTalkerPriority = nullptr;

	if (!uFnSetRemoteTalkerPriority)
	{
		uFnSetRemoteTalkerPriority = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetRemoteTalkerPriority");
	}

	UOnlineVoiceInterfaceEOS_execSetRemoteTalkerPriority_Params SetRemoteTalkerPriority_Params;
	memset(&SetRemoteTalkerPriority_Params, 0, sizeof(SetRemoteTalkerPriority_Params));
	memcpy_s(&SetRemoteTalkerPriority_Params.LocalUserNum, sizeof(SetRemoteTalkerPriority_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&SetRemoteTalkerPriority_Params.PlayerID, sizeof(SetRemoteTalkerPriority_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	memcpy_s(&SetRemoteTalkerPriority_Params.Priority, sizeof(SetRemoteTalkerPriority_Params.Priority), &Priority, sizeof(Priority));

	this->ProcessEvent(uFnSetRemoteTalkerPriority, &SetRemoteTalkerPriority_Params, nullptr);

	return SetRemoteTalkerPriority_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.IsHeadsetPresent
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineVoiceInterfaceEOS::IsHeadsetPresent(uint8_t LocalUserNum)
{
	static UFunction* uFnIsHeadsetPresent = nullptr;

	if (!uFnIsHeadsetPresent)
	{
		uFnIsHeadsetPresent = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.IsHeadsetPresent");
	}

	UOnlineVoiceInterfaceEOS_execIsHeadsetPresent_Params IsHeadsetPresent_Params;
	memset(&IsHeadsetPresent_Params, 0, sizeof(IsHeadsetPresent_Params));
	memcpy_s(&IsHeadsetPresent_Params.LocalUserNum, sizeof(IsHeadsetPresent_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnIsHeadsetPresent, &IsHeadsetPresent_Params, nullptr);

	return IsHeadsetPresent_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.IsRemotePlayerTalking
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineVoiceInterfaceEOS::IsRemotePlayerTalking(struct FUniqueNetId PlayerID)
{
	static UFunction* uFnIsRemotePlayerTalking = nullptr;

	if (!uFnIsRemotePlayerTalking)
	{
		uFnIsRemotePlayerTalking = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.IsRemotePlayerTalking");
	}

	UOnlineVoiceInterfaceEOS_execIsRemotePlayerTalking_Params IsRemotePlayerTalking_Params;
	memset(&IsRemotePlayerTalking_Params, 0, sizeof(IsRemotePlayerTalking_Params));
	memcpy_s(&IsRemotePlayerTalking_Params.PlayerID, sizeof(IsRemotePlayerTalking_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	this->ProcessEvent(uFnIsRemotePlayerTalking, &IsRemotePlayerTalking_Params, nullptr);

	return IsRemotePlayerTalking_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.IsLocalPlayerTalking
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineVoiceInterfaceEOS::IsLocalPlayerTalking(uint8_t LocalUserNum)
{
	static UFunction* uFnIsLocalPlayerTalking = nullptr;

	if (!uFnIsLocalPlayerTalking)
	{
		uFnIsLocalPlayerTalking = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.IsLocalPlayerTalking");
	}

	UOnlineVoiceInterfaceEOS_execIsLocalPlayerTalking_Params IsLocalPlayerTalking_Params;
	memset(&IsLocalPlayerTalking_Params, 0, sizeof(IsLocalPlayerTalking_Params));
	memcpy_s(&IsLocalPlayerTalking_Params.LocalUserNum, sizeof(IsLocalPlayerTalking_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnIsLocalPlayerTalking, &IsLocalPlayerTalking_Params, nullptr);

	return IsLocalPlayerTalking_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.UnregisterRemoteTalker
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineVoiceInterfaceEOS::UnregisterRemoteTalker(struct FUniqueNetId PlayerID)
{
	static UFunction* uFnUnregisterRemoteTalker = nullptr;

	if (!uFnUnregisterRemoteTalker)
	{
		uFnUnregisterRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.UnregisterRemoteTalker");
	}

	UOnlineVoiceInterfaceEOS_execUnregisterRemoteTalker_Params UnregisterRemoteTalker_Params;
	memset(&UnregisterRemoteTalker_Params, 0, sizeof(UnregisterRemoteTalker_Params));
	memcpy_s(&UnregisterRemoteTalker_Params.PlayerID, sizeof(UnregisterRemoteTalker_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	this->ProcessEvent(uFnUnregisterRemoteTalker, &UnregisterRemoteTalker_Params, nullptr);

	return UnregisterRemoteTalker_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.RegisterRemoteTalker
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineVoiceInterfaceEOS::RegisterRemoteTalker(struct FUniqueNetId PlayerID)
{
	static UFunction* uFnRegisterRemoteTalker = nullptr;

	if (!uFnRegisterRemoteTalker)
	{
		uFnRegisterRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.RegisterRemoteTalker");
	}

	UOnlineVoiceInterfaceEOS_execRegisterRemoteTalker_Params RegisterRemoteTalker_Params;
	memset(&RegisterRemoteTalker_Params, 0, sizeof(RegisterRemoteTalker_Params));
	memcpy_s(&RegisterRemoteTalker_Params.PlayerID, sizeof(RegisterRemoteTalker_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	this->ProcessEvent(uFnRegisterRemoteTalker, &RegisterRemoteTalker_Params, nullptr);

	return RegisterRemoteTalker_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.UnregisterLocalTalker
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineVoiceInterfaceEOS::UnregisterLocalTalker(uint8_t LocalUserNum)
{
	static UFunction* uFnUnregisterLocalTalker = nullptr;

	if (!uFnUnregisterLocalTalker)
	{
		uFnUnregisterLocalTalker = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.UnregisterLocalTalker");
	}

	UOnlineVoiceInterfaceEOS_execUnregisterLocalTalker_Params UnregisterLocalTalker_Params;
	memset(&UnregisterLocalTalker_Params, 0, sizeof(UnregisterLocalTalker_Params));
	memcpy_s(&UnregisterLocalTalker_Params.LocalUserNum, sizeof(UnregisterLocalTalker_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnUnregisterLocalTalker, &UnregisterLocalTalker_Params, nullptr);

	return UnregisterLocalTalker_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.RegisterLocalTalker
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineVoiceInterfaceEOS::RegisterLocalTalker(uint8_t LocalUserNum)
{
	static UFunction* uFnRegisterLocalTalker = nullptr;

	if (!uFnRegisterLocalTalker)
	{
		uFnRegisterLocalTalker = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.RegisterLocalTalker");
	}

	UOnlineVoiceInterfaceEOS_execRegisterLocalTalker_Params RegisterLocalTalker_Params;
	memset(&RegisterLocalTalker_Params, 0, sizeof(RegisterLocalTalker_Params));
	memcpy_s(&RegisterLocalTalker_Params.LocalUserNum, sizeof(RegisterLocalTalker_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnRegisterLocalTalker, &RegisterLocalTalker_Params, nullptr);

	return RegisterLocalTalker_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.OnRecognitionComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineVoiceInterfaceEOS::OnRecognitionComplete()
{
	static UFunction* uFnOnRecognitionComplete = nullptr;

	if (!uFnOnRecognitionComplete)
	{
		uFnOnRecognitionComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.OnRecognitionComplete");
	}

	UOnlineVoiceInterfaceEOS_execOnRecognitionComplete_Params OnRecognitionComplete_Params;
	memset(&OnRecognitionComplete_Params, 0, sizeof(OnRecognitionComplete_Params));

	this->ProcessEvent(uFnOnRecognitionComplete, &OnRecognitionComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.OnPlayerTalkingStateChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            Player                         (CPF_Parm | CPF_NeedCtorLink)
// bool                           bIsTalking                     (CPF_Parm)

void UOnlineVoiceInterfaceEOS::OnPlayerTalkingStateChange(struct FUniqueNetId Player, bool bIsTalking)
{
	static UFunction* uFnOnPlayerTalkingStateChange = nullptr;

	if (!uFnOnPlayerTalkingStateChange)
	{
		uFnOnPlayerTalkingStateChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.OnPlayerTalkingStateChange");
	}

	UOnlineVoiceInterfaceEOS_execOnPlayerTalkingStateChange_Params OnPlayerTalkingStateChange_Params;
	memset(&OnPlayerTalkingStateChange_Params, 0, sizeof(OnPlayerTalkingStateChange_Params));
	memcpy_s(&OnPlayerTalkingStateChange_Params.Player, sizeof(OnPlayerTalkingStateChange_Params.Player), &Player, sizeof(Player));
	OnPlayerTalkingStateChange_Params.bIsTalking = bIsTalking;

	this->ProcessEvent(uFnOnPlayerTalkingStateChange, &OnPlayerTalkingStateChange_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.StopRecording
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  EpicAccountId                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineVoiceInterfaceEOS::StopRecording(class FString& EpicAccountId)
{
	static UFunction* uFnStopRecording = nullptr;

	if (!uFnStopRecording)
	{
		uFnStopRecording = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.StopRecording");
	}

	UOnlineVoiceInterfaceEOS_execStopRecording_Params StopRecording_Params;
	memset(&StopRecording_Params, 0, sizeof(StopRecording_Params));
	memcpy_s(&StopRecording_Params.EpicAccountId, sizeof(StopRecording_Params.EpicAccountId), &EpicAccountId, sizeof(EpicAccountId));

	uFnStopRecording->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStopRecording, &StopRecording_Params, nullptr);
	uFnStopRecording->FunctionFlags |= 0x400;

	memcpy_s(&EpicAccountId, sizeof(EpicAccountId), &StopRecording_Params.EpicAccountId, sizeof(StopRecording_Params.EpicAccountId));
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.StartRecording
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  EpicAccountId                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  RoomName                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineVoiceInterfaceEOS::StartRecording(class FString& EpicAccountId, class FString& RoomName)
{
	static UFunction* uFnStartRecording = nullptr;

	if (!uFnStartRecording)
	{
		uFnStartRecording = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.StartRecording");
	}

	UOnlineVoiceInterfaceEOS_execStartRecording_Params StartRecording_Params;
	memset(&StartRecording_Params, 0, sizeof(StartRecording_Params));
	memcpy_s(&StartRecording_Params.EpicAccountId, sizeof(StartRecording_Params.EpicAccountId), &EpicAccountId, sizeof(EpicAccountId));
	memcpy_s(&StartRecording_Params.RoomName, sizeof(StartRecording_Params.RoomName), &RoomName, sizeof(RoomName));

	uFnStartRecording->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStartRecording, &StartRecording_Params, nullptr);
	uFnStartRecording->FunctionFlags |= 0x400;

	memcpy_s(&EpicAccountId, sizeof(EpicAccountId), &StartRecording_Params.EpicAccountId, sizeof(StartRecording_Params.EpicAccountId));
	memcpy_s(&RoomName, sizeof(RoomName), &StartRecording_Params.RoomName, sizeof(StartRecording_Params.RoomName));
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.HasPlayerRespondedToVoiceAgreement
// [0x00420003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  LocalEpicAccountId             (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineVoiceInterfaceEOS::HasPlayerRespondedToVoiceAgreement(class FString& LocalEpicAccountId)
{
	static UFunction* uFnHasPlayerRespondedToVoiceAgreement = nullptr;

	if (!uFnHasPlayerRespondedToVoiceAgreement)
	{
		uFnHasPlayerRespondedToVoiceAgreement = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.HasPlayerRespondedToVoiceAgreement");
	}

	UOnlineVoiceInterfaceEOS_execHasPlayerRespondedToVoiceAgreement_Params HasPlayerRespondedToVoiceAgreement_Params;
	memset(&HasPlayerRespondedToVoiceAgreement_Params, 0, sizeof(HasPlayerRespondedToVoiceAgreement_Params));
	memcpy_s(&HasPlayerRespondedToVoiceAgreement_Params.LocalEpicAccountId, sizeof(HasPlayerRespondedToVoiceAgreement_Params.LocalEpicAccountId), &LocalEpicAccountId, sizeof(LocalEpicAccountId));

	this->ProcessEvent(uFnHasPlayerRespondedToVoiceAgreement, &HasPlayerRespondedToVoiceAgreement_Params, nullptr);

	memcpy_s(&LocalEpicAccountId, sizeof(LocalEpicAccountId), &HasPlayerRespondedToVoiceAgreement_Params.LocalEpicAccountId, sizeof(HasPlayerRespondedToVoiceAgreement_Params.LocalEpicAccountId));

	return HasPlayerRespondedToVoiceAgreement_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.GetVoiceAgreementStatusForPlayer
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// EPlayerVoiceAgreementStatus    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  LocalEpicAccountId             (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

EPlayerVoiceAgreementStatus UOnlineVoiceInterfaceEOS::GetVoiceAgreementStatusForPlayer(class FString& LocalEpicAccountId)
{
	static UFunction* uFnGetVoiceAgreementStatusForPlayer = nullptr;

	if (!uFnGetVoiceAgreementStatusForPlayer)
	{
		uFnGetVoiceAgreementStatusForPlayer = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.GetVoiceAgreementStatusForPlayer");
	}

	UOnlineVoiceInterfaceEOS_execGetVoiceAgreementStatusForPlayer_Params GetVoiceAgreementStatusForPlayer_Params;
	memset(&GetVoiceAgreementStatusForPlayer_Params, 0, sizeof(GetVoiceAgreementStatusForPlayer_Params));
	memcpy_s(&GetVoiceAgreementStatusForPlayer_Params.LocalEpicAccountId, sizeof(GetVoiceAgreementStatusForPlayer_Params.LocalEpicAccountId), &LocalEpicAccountId, sizeof(LocalEpicAccountId));

	uFnGetVoiceAgreementStatusForPlayer->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetVoiceAgreementStatusForPlayer, &GetVoiceAgreementStatusForPlayer_Params, nullptr);
	uFnGetVoiceAgreementStatusForPlayer->FunctionFlags |= 0x400;

	memcpy_s(&LocalEpicAccountId, sizeof(LocalEpicAccountId), &GetVoiceAgreementStatusForPlayer_Params.LocalEpicAccountId, sizeof(GetVoiceAgreementStatusForPlayer_Params.LocalEpicAccountId));

	return GetVoiceAgreementStatusForPlayer_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.HasPlayerAcceptedVoiceAgreement
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  LocalEpicAccountId             (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineVoiceInterfaceEOS::HasPlayerAcceptedVoiceAgreement(class FString& LocalEpicAccountId)
{
	static UFunction* uFnHasPlayerAcceptedVoiceAgreement = nullptr;

	if (!uFnHasPlayerAcceptedVoiceAgreement)
	{
		uFnHasPlayerAcceptedVoiceAgreement = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.HasPlayerAcceptedVoiceAgreement");
	}

	UOnlineVoiceInterfaceEOS_execHasPlayerAcceptedVoiceAgreement_Params HasPlayerAcceptedVoiceAgreement_Params;
	memset(&HasPlayerAcceptedVoiceAgreement_Params, 0, sizeof(HasPlayerAcceptedVoiceAgreement_Params));
	memcpy_s(&HasPlayerAcceptedVoiceAgreement_Params.LocalEpicAccountId, sizeof(HasPlayerAcceptedVoiceAgreement_Params.LocalEpicAccountId), &LocalEpicAccountId, sizeof(LocalEpicAccountId));

	uFnHasPlayerAcceptedVoiceAgreement->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnHasPlayerAcceptedVoiceAgreement, &HasPlayerAcceptedVoiceAgreement_Params, nullptr);
	uFnHasPlayerAcceptedVoiceAgreement->FunctionFlags |= 0x400;

	memcpy_s(&LocalEpicAccountId, sizeof(LocalEpicAccountId), &HasPlayerAcceptedVoiceAgreement_Params.LocalEpicAccountId, sizeof(HasPlayerAcceptedVoiceAgreement_Params.LocalEpicAccountId));

	return HasPlayerAcceptedVoiceAgreement_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.CheckAllPlayersAcceptedVoiceModerationAgreement
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineVoiceInterfaceEOS::CheckAllPlayersAcceptedVoiceModerationAgreement()
{
	static UFunction* uFnCheckAllPlayersAcceptedVoiceModerationAgreement = nullptr;

	if (!uFnCheckAllPlayersAcceptedVoiceModerationAgreement)
	{
		uFnCheckAllPlayersAcceptedVoiceModerationAgreement = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.CheckAllPlayersAcceptedVoiceModerationAgreement");
	}

	UOnlineVoiceInterfaceEOS_execCheckAllPlayersAcceptedVoiceModerationAgreement_Params CheckAllPlayersAcceptedVoiceModerationAgreement_Params;
	memset(&CheckAllPlayersAcceptedVoiceModerationAgreement_Params, 0, sizeof(CheckAllPlayersAcceptedVoiceModerationAgreement_Params));

	uFnCheckAllPlayersAcceptedVoiceModerationAgreement->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCheckAllPlayersAcceptedVoiceModerationAgreement, &CheckAllPlayersAcceptedVoiceModerationAgreement_Params, nullptr);
	uFnCheckAllPlayersAcceptedVoiceModerationAgreement->FunctionFlags |= 0x400;

	return CheckAllPlayersAcceptedVoiceModerationAgreement_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SubscribeToLoginChanges
// [0x00040803] (FUNC_Final | FUNC_Defined | FUNC_Event | FUNC_Private | FUNC_AllFlags)
// Parameter Info:

void UOnlineVoiceInterfaceEOS::eventSubscribeToLoginChanges()
{
	static UFunction* uFnSubscribeToLoginChanges = nullptr;

	if (!uFnSubscribeToLoginChanges)
	{
		uFnSubscribeToLoginChanges = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SubscribeToLoginChanges");
	}

	UOnlineVoiceInterfaceEOS_eventSubscribeToLoginChanges_Params SubscribeToLoginChanges_Params;
	memset(&SubscribeToLoginChanges_Params, 0, sizeof(SubscribeToLoginChanges_Params));

	this->ProcessEvent(uFnSubscribeToLoginChanges, &SubscribeToLoginChanges_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.OnLogout
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  EpicAccountId                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineVoiceInterfaceEOS::OnLogout(class FString& EpicAccountId)
{
	static UFunction* uFnOnLogout = nullptr;

	if (!uFnOnLogout)
	{
		uFnOnLogout = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.OnLogout");
	}

	UOnlineVoiceInterfaceEOS_execOnLogout_Params OnLogout_Params;
	memset(&OnLogout_Params, 0, sizeof(OnLogout_Params));
	memcpy_s(&OnLogout_Params.EpicAccountId, sizeof(OnLogout_Params.EpicAccountId), &EpicAccountId, sizeof(EpicAccountId));

	uFnOnLogout->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnOnLogout, &OnLogout_Params, nullptr);
	uFnOnLogout->FunctionFlags |= 0x400;

	memcpy_s(&EpicAccountId, sizeof(EpicAccountId), &OnLogout_Params.EpicAccountId, sizeof(OnLogout_Params.EpicAccountId));
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.OnLoginChange
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineVoiceInterfaceEOS::OnLoginChange(uint8_t LocalUserNum)
{
	static UFunction* uFnOnLoginChange = nullptr;

	if (!uFnOnLoginChange)
	{
		uFnOnLoginChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.OnLoginChange");
	}

	UOnlineVoiceInterfaceEOS_execOnLoginChange_Params OnLoginChange_Params;
	memset(&OnLoginChange_Params, 0, sizeof(OnLoginChange_Params));
	memcpy_s(&OnLoginChange_Params.LocalUserNum, sizeof(OnLoginChange_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnOnLoginChange->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnOnLoginChange, &OnLoginChange_Params, nullptr);
	uFnOnLoginChange->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetPlayerBlockStatus
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           bBlocked                       (CPF_Const | CPF_Parm)
// class FString                  LocalEpicAccountId             (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  TargetEpicAccountId            (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  RoomName                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineVoiceInterfaceEOS::SetPlayerBlockStatus(bool bBlocked, class FString& LocalEpicAccountId, class FString& TargetEpicAccountId, class FString& RoomName)
{
	static UFunction* uFnSetPlayerBlockStatus = nullptr;

	if (!uFnSetPlayerBlockStatus)
	{
		uFnSetPlayerBlockStatus = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetPlayerBlockStatus");
	}

	UOnlineVoiceInterfaceEOS_execSetPlayerBlockStatus_Params SetPlayerBlockStatus_Params;
	memset(&SetPlayerBlockStatus_Params, 0, sizeof(SetPlayerBlockStatus_Params));
	SetPlayerBlockStatus_Params.bBlocked = bBlocked;
	memcpy_s(&SetPlayerBlockStatus_Params.LocalEpicAccountId, sizeof(SetPlayerBlockStatus_Params.LocalEpicAccountId), &LocalEpicAccountId, sizeof(LocalEpicAccountId));
	memcpy_s(&SetPlayerBlockStatus_Params.TargetEpicAccountId, sizeof(SetPlayerBlockStatus_Params.TargetEpicAccountId), &TargetEpicAccountId, sizeof(TargetEpicAccountId));
	memcpy_s(&SetPlayerBlockStatus_Params.RoomName, sizeof(SetPlayerBlockStatus_Params.RoomName), &RoomName, sizeof(RoomName));

	uFnSetPlayerBlockStatus->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetPlayerBlockStatus, &SetPlayerBlockStatus_Params, nullptr);
	uFnSetPlayerBlockStatus->FunctionFlags |= 0x400;

	memcpy_s(&LocalEpicAccountId, sizeof(LocalEpicAccountId), &SetPlayerBlockStatus_Params.LocalEpicAccountId, sizeof(SetPlayerBlockStatus_Params.LocalEpicAccountId));
	memcpy_s(&TargetEpicAccountId, sizeof(TargetEpicAccountId), &SetPlayerBlockStatus_Params.TargetEpicAccountId, sizeof(SetPlayerBlockStatus_Params.TargetEpicAccountId));
	memcpy_s(&RoomName, sizeof(RoomName), &SetPlayerBlockStatus_Params.RoomName, sizeof(SetPlayerBlockStatus_Params.RoomName));
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetPlayerMuteStatus
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           bMuted                         (CPF_Const | CPF_Parm)
// class FString                  LocalEpicAccountId             (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  TargetEpicAccountId            (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  RoomName                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineVoiceInterfaceEOS::SetPlayerMuteStatus(bool bMuted, class FString& LocalEpicAccountId, class FString& TargetEpicAccountId, class FString& RoomName)
{
	static UFunction* uFnSetPlayerMuteStatus = nullptr;

	if (!uFnSetPlayerMuteStatus)
	{
		uFnSetPlayerMuteStatus = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetPlayerMuteStatus");
	}

	UOnlineVoiceInterfaceEOS_execSetPlayerMuteStatus_Params SetPlayerMuteStatus_Params;
	memset(&SetPlayerMuteStatus_Params, 0, sizeof(SetPlayerMuteStatus_Params));
	SetPlayerMuteStatus_Params.bMuted = bMuted;
	memcpy_s(&SetPlayerMuteStatus_Params.LocalEpicAccountId, sizeof(SetPlayerMuteStatus_Params.LocalEpicAccountId), &LocalEpicAccountId, sizeof(LocalEpicAccountId));
	memcpy_s(&SetPlayerMuteStatus_Params.TargetEpicAccountId, sizeof(SetPlayerMuteStatus_Params.TargetEpicAccountId), &TargetEpicAccountId, sizeof(TargetEpicAccountId));
	memcpy_s(&SetPlayerMuteStatus_Params.RoomName, sizeof(SetPlayerMuteStatus_Params.RoomName), &RoomName, sizeof(RoomName));

	uFnSetPlayerMuteStatus->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetPlayerMuteStatus, &SetPlayerMuteStatus_Params, nullptr);
	uFnSetPlayerMuteStatus->FunctionFlags |= 0x400;

	memcpy_s(&LocalEpicAccountId, sizeof(LocalEpicAccountId), &SetPlayerMuteStatus_Params.LocalEpicAccountId, sizeof(SetPlayerMuteStatus_Params.LocalEpicAccountId));
	memcpy_s(&TargetEpicAccountId, sizeof(TargetEpicAccountId), &SetPlayerMuteStatus_Params.TargetEpicAccountId, sizeof(SetPlayerMuteStatus_Params.TargetEpicAccountId));
	memcpy_s(&RoomName, sizeof(RoomName), &SetPlayerMuteStatus_Params.RoomName, sizeof(SetPlayerMuteStatus_Params.RoomName));
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.GetUserState
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// EPlayerVoiceTransitionState    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  EpicAccountId                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

EPlayerVoiceTransitionState UOnlineVoiceInterfaceEOS::GetUserState(class FString& EpicAccountId)
{
	static UFunction* uFnGetUserState = nullptr;

	if (!uFnGetUserState)
	{
		uFnGetUserState = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.GetUserState");
	}

	UOnlineVoiceInterfaceEOS_execGetUserState_Params GetUserState_Params;
	memset(&GetUserState_Params, 0, sizeof(GetUserState_Params));
	memcpy_s(&GetUserState_Params.EpicAccountId, sizeof(GetUserState_Params.EpicAccountId), &EpicAccountId, sizeof(EpicAccountId));

	uFnGetUserState->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetUserState, &GetUserState_Params, nullptr);
	uFnGetUserState->FunctionFlags |= 0x400;

	memcpy_s(&EpicAccountId, sizeof(EpicAccountId), &GetUserState_Params.EpicAccountId, sizeof(GetUserState_Params.EpicAccountId));

	return GetUserState_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.GetCurrentRoomNameForUser
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  EpicAccountId                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

class FString UOnlineVoiceInterfaceEOS::GetCurrentRoomNameForUser(class FString& EpicAccountId)
{
	static UFunction* uFnGetCurrentRoomNameForUser = nullptr;

	if (!uFnGetCurrentRoomNameForUser)
	{
		uFnGetCurrentRoomNameForUser = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.GetCurrentRoomNameForUser");
	}

	UOnlineVoiceInterfaceEOS_execGetCurrentRoomNameForUser_Params GetCurrentRoomNameForUser_Params;
	memset(&GetCurrentRoomNameForUser_Params, 0, sizeof(GetCurrentRoomNameForUser_Params));
	memcpy_s(&GetCurrentRoomNameForUser_Params.EpicAccountId, sizeof(GetCurrentRoomNameForUser_Params.EpicAccountId), &EpicAccountId, sizeof(EpicAccountId));

	uFnGetCurrentRoomNameForUser->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetCurrentRoomNameForUser, &GetCurrentRoomNameForUser_Params, nullptr);
	uFnGetCurrentRoomNameForUser->FunctionFlags |= 0x400;

	memcpy_s(&EpicAccountId, sizeof(EpicAccountId), &GetCurrentRoomNameForUser_Params.EpicAccountId, sizeof(GetCurrentRoomNameForUser_Params.EpicAccountId));

	return GetCurrentRoomNameForUser_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.LeaveVoiceRoom
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  EpicAccountId                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  RoomName                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineVoiceInterfaceEOS::LeaveVoiceRoom(class FString& EpicAccountId, class FString& RoomName)
{
	static UFunction* uFnLeaveVoiceRoom = nullptr;

	if (!uFnLeaveVoiceRoom)
	{
		uFnLeaveVoiceRoom = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.LeaveVoiceRoom");
	}

	UOnlineVoiceInterfaceEOS_execLeaveVoiceRoom_Params LeaveVoiceRoom_Params;
	memset(&LeaveVoiceRoom_Params, 0, sizeof(LeaveVoiceRoom_Params));
	memcpy_s(&LeaveVoiceRoom_Params.EpicAccountId, sizeof(LeaveVoiceRoom_Params.EpicAccountId), &EpicAccountId, sizeof(EpicAccountId));
	memcpy_s(&LeaveVoiceRoom_Params.RoomName, sizeof(LeaveVoiceRoom_Params.RoomName), &RoomName, sizeof(RoomName));

	uFnLeaveVoiceRoom->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnLeaveVoiceRoom, &LeaveVoiceRoom_Params, nullptr);
	uFnLeaveVoiceRoom->FunctionFlags |= 0x400;

	memcpy_s(&EpicAccountId, sizeof(EpicAccountId), &LeaveVoiceRoom_Params.EpicAccountId, sizeof(LeaveVoiceRoom_Params.EpicAccountId));
	memcpy_s(&RoomName, sizeof(RoomName), &LeaveVoiceRoom_Params.RoomName, sizeof(LeaveVoiceRoom_Params.RoomName));

	return LeaveVoiceRoom_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.JoinVoiceRoom
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  EpicAccountId                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  RoomName                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  ClientBaseUrl                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  JoinToken                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineVoiceInterfaceEOS::JoinVoiceRoom(class FString& EpicAccountId, class FString& RoomName, class FString& ClientBaseUrl, class FString& JoinToken)
{
	static UFunction* uFnJoinVoiceRoom = nullptr;

	if (!uFnJoinVoiceRoom)
	{
		uFnJoinVoiceRoom = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.JoinVoiceRoom");
	}

	UOnlineVoiceInterfaceEOS_execJoinVoiceRoom_Params JoinVoiceRoom_Params;
	memset(&JoinVoiceRoom_Params, 0, sizeof(JoinVoiceRoom_Params));
	memcpy_s(&JoinVoiceRoom_Params.EpicAccountId, sizeof(JoinVoiceRoom_Params.EpicAccountId), &EpicAccountId, sizeof(EpicAccountId));
	memcpy_s(&JoinVoiceRoom_Params.RoomName, sizeof(JoinVoiceRoom_Params.RoomName), &RoomName, sizeof(RoomName));
	memcpy_s(&JoinVoiceRoom_Params.ClientBaseUrl, sizeof(JoinVoiceRoom_Params.ClientBaseUrl), &ClientBaseUrl, sizeof(ClientBaseUrl));
	memcpy_s(&JoinVoiceRoom_Params.JoinToken, sizeof(JoinVoiceRoom_Params.JoinToken), &JoinToken, sizeof(JoinToken));

	uFnJoinVoiceRoom->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnJoinVoiceRoom, &JoinVoiceRoom_Params, nullptr);
	uFnJoinVoiceRoom->FunctionFlags |= 0x400;

	memcpy_s(&EpicAccountId, sizeof(EpicAccountId), &JoinVoiceRoom_Params.EpicAccountId, sizeof(JoinVoiceRoom_Params.EpicAccountId));
	memcpy_s(&RoomName, sizeof(RoomName), &JoinVoiceRoom_Params.RoomName, sizeof(JoinVoiceRoom_Params.RoomName));
	memcpy_s(&ClientBaseUrl, sizeof(ClientBaseUrl), &JoinVoiceRoom_Params.ClientBaseUrl, sizeof(JoinVoiceRoom_Params.ClientBaseUrl));
	memcpy_s(&JoinToken, sizeof(JoinToken), &JoinVoiceRoom_Params.JoinToken, sizeof(JoinVoiceRoom_Params.JoinToken));

	return JoinVoiceRoom_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetAudioOutputDevice
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          OutputVolume                   (CPF_Parm)
// class FString                  EpicAccountId                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  DeviceID                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineVoiceInterfaceEOS::SetAudioOutputDevice(float OutputVolume, class FString& EpicAccountId, class FString& DeviceID)
{
	static UFunction* uFnSetAudioOutputDevice = nullptr;

	if (!uFnSetAudioOutputDevice)
	{
		uFnSetAudioOutputDevice = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetAudioOutputDevice");
	}

	UOnlineVoiceInterfaceEOS_execSetAudioOutputDevice_Params SetAudioOutputDevice_Params;
	memset(&SetAudioOutputDevice_Params, 0, sizeof(SetAudioOutputDevice_Params));
	memcpy_s(&SetAudioOutputDevice_Params.OutputVolume, sizeof(SetAudioOutputDevice_Params.OutputVolume), &OutputVolume, sizeof(OutputVolume));
	memcpy_s(&SetAudioOutputDevice_Params.EpicAccountId, sizeof(SetAudioOutputDevice_Params.EpicAccountId), &EpicAccountId, sizeof(EpicAccountId));
	memcpy_s(&SetAudioOutputDevice_Params.DeviceID, sizeof(SetAudioOutputDevice_Params.DeviceID), &DeviceID, sizeof(DeviceID));

	uFnSetAudioOutputDevice->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetAudioOutputDevice, &SetAudioOutputDevice_Params, nullptr);
	uFnSetAudioOutputDevice->FunctionFlags |= 0x400;

	memcpy_s(&EpicAccountId, sizeof(EpicAccountId), &SetAudioOutputDevice_Params.EpicAccountId, sizeof(SetAudioOutputDevice_Params.EpicAccountId));
	memcpy_s(&DeviceID, sizeof(DeviceID), &SetAudioOutputDevice_Params.DeviceID, sizeof(SetAudioOutputDevice_Params.DeviceID));

	return SetAudioOutputDevice_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetAudioInputDevice
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          InputVolume                    (CPF_Parm)
// class FString                  EpicAccountId                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  DeviceID                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineVoiceInterfaceEOS::SetAudioInputDevice(float InputVolume, class FString& EpicAccountId, class FString& DeviceID)
{
	static UFunction* uFnSetAudioInputDevice = nullptr;

	if (!uFnSetAudioInputDevice)
	{
		uFnSetAudioInputDevice = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetAudioInputDevice");
	}

	UOnlineVoiceInterfaceEOS_execSetAudioInputDevice_Params SetAudioInputDevice_Params;
	memset(&SetAudioInputDevice_Params, 0, sizeof(SetAudioInputDevice_Params));
	memcpy_s(&SetAudioInputDevice_Params.InputVolume, sizeof(SetAudioInputDevice_Params.InputVolume), &InputVolume, sizeof(InputVolume));
	memcpy_s(&SetAudioInputDevice_Params.EpicAccountId, sizeof(SetAudioInputDevice_Params.EpicAccountId), &EpicAccountId, sizeof(EpicAccountId));
	memcpy_s(&SetAudioInputDevice_Params.DeviceID, sizeof(SetAudioInputDevice_Params.DeviceID), &DeviceID, sizeof(DeviceID));

	uFnSetAudioInputDevice->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetAudioInputDevice, &SetAudioInputDevice_Params, nullptr);
	uFnSetAudioInputDevice->FunctionFlags |= 0x400;

	memcpy_s(&EpicAccountId, sizeof(EpicAccountId), &SetAudioInputDevice_Params.EpicAccountId, sizeof(SetAudioInputDevice_Params.EpicAccountId));
	memcpy_s(&DeviceID, sizeof(DeviceID), &SetAudioInputDevice_Params.DeviceID, sizeof(SetAudioInputDevice_Params.DeviceID));

	return SetAudioInputDevice_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetLocalPlayerRegisteredStatus
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           bRegister                      (CPF_Const | CPF_Parm)
// class FString                  PlatformId                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineVoiceInterfaceEOS::SetLocalPlayerRegisteredStatus(bool bRegister, class FString& PlatformId)
{
	static UFunction* uFnSetLocalPlayerRegisteredStatus = nullptr;

	if (!uFnSetLocalPlayerRegisteredStatus)
	{
		uFnSetLocalPlayerRegisteredStatus = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetLocalPlayerRegisteredStatus");
	}

	UOnlineVoiceInterfaceEOS_execSetLocalPlayerRegisteredStatus_Params SetLocalPlayerRegisteredStatus_Params;
	memset(&SetLocalPlayerRegisteredStatus_Params, 0, sizeof(SetLocalPlayerRegisteredStatus_Params));
	SetLocalPlayerRegisteredStatus_Params.bRegister = bRegister;
	memcpy_s(&SetLocalPlayerRegisteredStatus_Params.PlatformId, sizeof(SetLocalPlayerRegisteredStatus_Params.PlatformId), &PlatformId, sizeof(PlatformId));

	uFnSetLocalPlayerRegisteredStatus->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetLocalPlayerRegisteredStatus, &SetLocalPlayerRegisteredStatus_Params, nullptr);
	uFnSetLocalPlayerRegisteredStatus->FunctionFlags |= 0x400;

	memcpy_s(&PlatformId, sizeof(PlatformId), &SetLocalPlayerRegisteredStatus_Params.PlatformId, sizeof(SetLocalPlayerRegisteredStatus_Params.PlatformId));
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.CacheOutputAudioDevices
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter Info:

void UOnlineVoiceInterfaceEOS::CacheOutputAudioDevices()
{
	static UFunction* uFnCacheOutputAudioDevices = nullptr;

	if (!uFnCacheOutputAudioDevices)
	{
		uFnCacheOutputAudioDevices = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.CacheOutputAudioDevices");
	}

	UOnlineVoiceInterfaceEOS_execCacheOutputAudioDevices_Params CacheOutputAudioDevices_Params;
	memset(&CacheOutputAudioDevices_Params, 0, sizeof(CacheOutputAudioDevices_Params));

	uFnCacheOutputAudioDevices->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCacheOutputAudioDevices, &CacheOutputAudioDevices_Params, nullptr);
	uFnCacheOutputAudioDevices->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.CacheInputAudioDevices
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter Info:

void UOnlineVoiceInterfaceEOS::CacheInputAudioDevices()
{
	static UFunction* uFnCacheInputAudioDevices = nullptr;

	if (!uFnCacheInputAudioDevices)
	{
		uFnCacheInputAudioDevices = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.CacheInputAudioDevices");
	}

	UOnlineVoiceInterfaceEOS_execCacheInputAudioDevices_Params CacheInputAudioDevices_Params;
	memset(&CacheInputAudioDevices_Params, 0, sizeof(CacheInputAudioDevices_Params));

	uFnCacheInputAudioDevices->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCacheInputAudioDevices, &CacheInputAudioDevices_Params, nullptr);
	uFnCacheInputAudioDevices->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.Init
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlineVoiceInterfaceEOS::Init()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.Init");
	}

	UOnlineVoiceInterfaceEOS_execInit_Params Init_Params;
	memset(&Init_Params, 0, sizeof(Init_Params));

	uFnInit->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
	uFnInit->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventVoiceRecordingStatusChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bRecording                     (CPF_Parm)

void UOnlineVoiceInterfaceEOS::EventVoiceRecordingStatusChanged(bool bRecording)
{
	static UFunction* uFnEventVoiceRecordingStatusChanged = nullptr;

	if (!uFnEventVoiceRecordingStatusChanged)
	{
		uFnEventVoiceRecordingStatusChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventVoiceRecordingStatusChanged");
	}

	UOnlineVoiceInterfaceEOS_execEventVoiceRecordingStatusChanged_Params EventVoiceRecordingStatusChanged_Params;
	memset(&EventVoiceRecordingStatusChanged_Params, 0, sizeof(EventVoiceRecordingStatusChanged_Params));
	EventVoiceRecordingStatusChanged_Params.bRecording = bRecording;

	this->ProcessEvent(uFnEventVoiceRecordingStatusChanged, &EventVoiceRecordingStatusChanged_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventPlayerVoiceAgreementStatusChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FString                  EpicAccountId                  (CPF_Parm | CPF_NeedCtorLink)
// bool                           bAccepted                      (CPF_Parm)
// bool                           bNewAgreement                  (CPF_Parm)

void UOnlineVoiceInterfaceEOS::EventPlayerVoiceAgreementStatusChanged(class FString EpicAccountId, bool bAccepted, bool bNewAgreement)
{
	static UFunction* uFnEventPlayerVoiceAgreementStatusChanged = nullptr;

	if (!uFnEventPlayerVoiceAgreementStatusChanged)
	{
		uFnEventPlayerVoiceAgreementStatusChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventPlayerVoiceAgreementStatusChanged");
	}

	UOnlineVoiceInterfaceEOS_execEventPlayerVoiceAgreementStatusChanged_Params EventPlayerVoiceAgreementStatusChanged_Params;
	memset(&EventPlayerVoiceAgreementStatusChanged_Params, 0, sizeof(EventPlayerVoiceAgreementStatusChanged_Params));
	memcpy_s(&EventPlayerVoiceAgreementStatusChanged_Params.EpicAccountId, sizeof(EventPlayerVoiceAgreementStatusChanged_Params.EpicAccountId), &EpicAccountId, sizeof(EpicAccountId));
	EventPlayerVoiceAgreementStatusChanged_Params.bAccepted = bAccepted;
	EventPlayerVoiceAgreementStatusChanged_Params.bNewAgreement = bNewAgreement;

	this->ProcessEvent(uFnEventPlayerVoiceAgreementStatusChanged, &EventPlayerVoiceAgreementStatusChanged_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventPlayerStatusChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FString                  EpicAccountId                  (CPF_Parm | CPF_NeedCtorLink)
// class FString                  RoomName                       (CPF_Parm | CPF_NeedCtorLink)
// struct FVoiceRoomMemberStatus  MemberStatus                   (CPF_Parm)

void UOnlineVoiceInterfaceEOS::EventPlayerStatusChanged(class FString EpicAccountId, class FString RoomName, struct FVoiceRoomMemberStatus MemberStatus)
{
	static UFunction* uFnEventPlayerStatusChanged = nullptr;

	if (!uFnEventPlayerStatusChanged)
	{
		uFnEventPlayerStatusChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventPlayerStatusChanged");
	}

	UOnlineVoiceInterfaceEOS_execEventPlayerStatusChanged_Params EventPlayerStatusChanged_Params;
	memset(&EventPlayerStatusChanged_Params, 0, sizeof(EventPlayerStatusChanged_Params));
	memcpy_s(&EventPlayerStatusChanged_Params.EpicAccountId, sizeof(EventPlayerStatusChanged_Params.EpicAccountId), &EpicAccountId, sizeof(EpicAccountId));
	memcpy_s(&EventPlayerStatusChanged_Params.RoomName, sizeof(EventPlayerStatusChanged_Params.RoomName), &RoomName, sizeof(RoomName));
	memcpy_s(&EventPlayerStatusChanged_Params.MemberStatus, sizeof(EventPlayerStatusChanged_Params.MemberStatus), &MemberStatus, sizeof(MemberStatus));

	this->ProcessEvent(uFnEventPlayerStatusChanged, &EventPlayerStatusChanged_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventPlayerLeftVoiceRoom
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FString                  EpicAccountId                  (CPF_Parm | CPF_NeedCtorLink)
// class FString                  RoomName                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineVoiceInterfaceEOS::EventPlayerLeftVoiceRoom(class FString EpicAccountId, class FString RoomName)
{
	static UFunction* uFnEventPlayerLeftVoiceRoom = nullptr;

	if (!uFnEventPlayerLeftVoiceRoom)
	{
		uFnEventPlayerLeftVoiceRoom = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventPlayerLeftVoiceRoom");
	}

	UOnlineVoiceInterfaceEOS_execEventPlayerLeftVoiceRoom_Params EventPlayerLeftVoiceRoom_Params;
	memset(&EventPlayerLeftVoiceRoom_Params, 0, sizeof(EventPlayerLeftVoiceRoom_Params));
	memcpy_s(&EventPlayerLeftVoiceRoom_Params.EpicAccountId, sizeof(EventPlayerLeftVoiceRoom_Params.EpicAccountId), &EpicAccountId, sizeof(EpicAccountId));
	memcpy_s(&EventPlayerLeftVoiceRoom_Params.RoomName, sizeof(EventPlayerLeftVoiceRoom_Params.RoomName), &RoomName, sizeof(RoomName));

	this->ProcessEvent(uFnEventPlayerLeftVoiceRoom, &EventPlayerLeftVoiceRoom_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventPlayerJoinedVoiceRoom
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FString                  EpicAccountId                  (CPF_Parm | CPF_NeedCtorLink)
// class FString                  RoomName                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineVoiceInterfaceEOS::EventPlayerJoinedVoiceRoom(class FString EpicAccountId, class FString RoomName)
{
	static UFunction* uFnEventPlayerJoinedVoiceRoom = nullptr;

	if (!uFnEventPlayerJoinedVoiceRoom)
	{
		uFnEventPlayerJoinedVoiceRoom = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventPlayerJoinedVoiceRoom");
	}

	UOnlineVoiceInterfaceEOS_execEventPlayerJoinedVoiceRoom_Params EventPlayerJoinedVoiceRoom_Params;
	memset(&EventPlayerJoinedVoiceRoom_Params, 0, sizeof(EventPlayerJoinedVoiceRoom_Params));
	memcpy_s(&EventPlayerJoinedVoiceRoom_Params.EpicAccountId, sizeof(EventPlayerJoinedVoiceRoom_Params.EpicAccountId), &EpicAccountId, sizeof(EpicAccountId));
	memcpy_s(&EventPlayerJoinedVoiceRoom_Params.RoomName, sizeof(EventPlayerJoinedVoiceRoom_Params.RoomName), &RoomName, sizeof(RoomName));

	this->ProcessEvent(uFnEventPlayerJoinedVoiceRoom, &EventPlayerJoinedVoiceRoom_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventRemovedFromVoiceRoom
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FString                  EpicAccountId                  (CPF_Parm | CPF_NeedCtorLink)
// class FString                  RoomName                       (CPF_Parm | CPF_NeedCtorLink)
// EVoiceResultCode               RemovedResult                  (CPF_Parm)

void UOnlineVoiceInterfaceEOS::EventRemovedFromVoiceRoom(class FString EpicAccountId, class FString RoomName, EVoiceResultCode RemovedResult)
{
	static UFunction* uFnEventRemovedFromVoiceRoom = nullptr;

	if (!uFnEventRemovedFromVoiceRoom)
	{
		uFnEventRemovedFromVoiceRoom = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventRemovedFromVoiceRoom");
	}

	UOnlineVoiceInterfaceEOS_execEventRemovedFromVoiceRoom_Params EventRemovedFromVoiceRoom_Params;
	memset(&EventRemovedFromVoiceRoom_Params, 0, sizeof(EventRemovedFromVoiceRoom_Params));
	memcpy_s(&EventRemovedFromVoiceRoom_Params.EpicAccountId, sizeof(EventRemovedFromVoiceRoom_Params.EpicAccountId), &EpicAccountId, sizeof(EpicAccountId));
	memcpy_s(&EventRemovedFromVoiceRoom_Params.RoomName, sizeof(EventRemovedFromVoiceRoom_Params.RoomName), &RoomName, sizeof(RoomName));
	memcpy_s(&EventRemovedFromVoiceRoom_Params.RemovedResult, sizeof(EventRemovedFromVoiceRoom_Params.RemovedResult), &RemovedResult, sizeof(RemovedResult));

	this->ProcessEvent(uFnEventRemovedFromVoiceRoom, &EventRemovedFromVoiceRoom_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventJoinedVoiceRoom
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FString                  EpicAccountId                  (CPF_Parm | CPF_NeedCtorLink)
// class FString                  RoomName                       (CPF_Parm | CPF_NeedCtorLink)
// EVoiceResultCode               JoinResult                     (CPF_Parm)

void UOnlineVoiceInterfaceEOS::EventJoinedVoiceRoom(class FString EpicAccountId, class FString RoomName, EVoiceResultCode JoinResult)
{
	static UFunction* uFnEventJoinedVoiceRoom = nullptr;

	if (!uFnEventJoinedVoiceRoom)
	{
		uFnEventJoinedVoiceRoom = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventJoinedVoiceRoom");
	}

	UOnlineVoiceInterfaceEOS_execEventJoinedVoiceRoom_Params EventJoinedVoiceRoom_Params;
	memset(&EventJoinedVoiceRoom_Params, 0, sizeof(EventJoinedVoiceRoom_Params));
	memcpy_s(&EventJoinedVoiceRoom_Params.EpicAccountId, sizeof(EventJoinedVoiceRoom_Params.EpicAccountId), &EpicAccountId, sizeof(EpicAccountId));
	memcpy_s(&EventJoinedVoiceRoom_Params.RoomName, sizeof(EventJoinedVoiceRoom_Params.RoomName), &RoomName, sizeof(RoomName));
	memcpy_s(&EventJoinedVoiceRoom_Params.JoinResult, sizeof(EventJoinedVoiceRoom_Params.JoinResult), &JoinResult, sizeof(JoinResult));

	this->ProcessEvent(uFnEventJoinedVoiceRoom, &EventJoinedVoiceRoom_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventLeftVoiceRoom
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FString                  EpicAccountId                  (CPF_Parm | CPF_NeedCtorLink)
// class FString                  RoomName                       (CPF_Parm | CPF_NeedCtorLink)
// EVoiceResultCode               LeaveResult                    (CPF_Parm)

void UOnlineVoiceInterfaceEOS::EventLeftVoiceRoom(class FString EpicAccountId, class FString RoomName, EVoiceResultCode LeaveResult)
{
	static UFunction* uFnEventLeftVoiceRoom = nullptr;

	if (!uFnEventLeftVoiceRoom)
	{
		uFnEventLeftVoiceRoom = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventLeftVoiceRoom");
	}

	UOnlineVoiceInterfaceEOS_execEventLeftVoiceRoom_Params EventLeftVoiceRoom_Params;
	memset(&EventLeftVoiceRoom_Params, 0, sizeof(EventLeftVoiceRoom_Params));
	memcpy_s(&EventLeftVoiceRoom_Params.EpicAccountId, sizeof(EventLeftVoiceRoom_Params.EpicAccountId), &EpicAccountId, sizeof(EpicAccountId));
	memcpy_s(&EventLeftVoiceRoom_Params.RoomName, sizeof(EventLeftVoiceRoom_Params.RoomName), &RoomName, sizeof(RoomName));
	memcpy_s(&EventLeftVoiceRoom_Params.LeaveResult, sizeof(EventLeftVoiceRoom_Params.LeaveResult), &LeaveResult, sizeof(LeaveResult));

	this->ProcessEvent(uFnEventLeftVoiceRoom, &EventLeftVoiceRoom_Params, nullptr);
};

// Function OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__LinkedAccount_0x1.__OnlinePlayerInterfaceEOS__LinkedAccount_0x1
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        _                              (CPF_Parm)
// class FString                  PlatformAuthTicket             (CPF_Parm | CPF_NeedCtorLink)

void U__OnlinePlayerInterfaceEOS__LinkedAccount_0x1::__OnlinePlayerInterfaceEOS__LinkedAccount_0x1(int32_t _, class FString PlatformAuthTicket)
{
	static UFunction* uFn__OnlinePlayerInterfaceEOS__LinkedAccount_0x1 = nullptr;

	if (!uFn__OnlinePlayerInterfaceEOS__LinkedAccount_0x1)
	{
		uFn__OnlinePlayerInterfaceEOS__LinkedAccount_0x1 = UFunction::FindFunction("Function OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__LinkedAccount_0x1.__OnlinePlayerInterfaceEOS__LinkedAccount_0x1");
	}

	U__OnlinePlayerInterfaceEOS__LinkedAccount_0x1_exec__OnlinePlayerInterfaceEOS__LinkedAccount_0x1_Params __OnlinePlayerInterfaceEOS__LinkedAccount_0x1_Params;
	memset(&__OnlinePlayerInterfaceEOS__LinkedAccount_0x1_Params, 0, sizeof(__OnlinePlayerInterfaceEOS__LinkedAccount_0x1_Params));
	memcpy_s(&__OnlinePlayerInterfaceEOS__LinkedAccount_0x1_Params._, sizeof(__OnlinePlayerInterfaceEOS__LinkedAccount_0x1_Params._), &_, sizeof(_));
	memcpy_s(&__OnlinePlayerInterfaceEOS__LinkedAccount_0x1_Params.PlatformAuthTicket, sizeof(__OnlinePlayerInterfaceEOS__LinkedAccount_0x1_Params.PlatformAuthTicket), &PlatformAuthTicket, sizeof(PlatformAuthTicket));

	this->ProcessEvent(uFn__OnlinePlayerInterfaceEOS__LinkedAccount_0x1, &__OnlinePlayerInterfaceEOS__LinkedAccount_0x1_Params, nullptr);
};

// Function OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1.__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bSuccess                       (CPF_Parm)
// class FString                  Code                           (CPF_Parm | CPF_NeedCtorLink)

void U__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1::__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1(bool bSuccess, class FString Code)
{
	static UFunction* uFn__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1 = nullptr;

	if (!uFn__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1)
	{
		uFn__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1 = UFunction::FindFunction("Function OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1.__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1");
	}

	U__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1_exec__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1_Params __OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1_Params;
	memset(&__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1_Params, 0, sizeof(__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1_Params));
	__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1_Params.bSuccess = bSuccess;
	memcpy_s(&__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1_Params.Code, sizeof(__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1_Params.Code), &Code, sizeof(Code));

	this->ProcessEvent(uFn__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1, &__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1_Params, nullptr);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
