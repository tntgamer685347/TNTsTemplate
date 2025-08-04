/*
#############################################################################################
# RocketLeague (1.0.10897.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: OnlineSubsystemEOS_parameters.hpp
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

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ShowEOSVoiceAgreement
// [0x00020401] 
struct UOnlineSubsystemEOS_execShowEOSVoiceAgreement_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ShowEOSOverlay
// [0x00020401] 
struct UOnlineSubsystemEOS_execShowEOSOverlay_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ShowEOSOverlayReportVoice
// [0x00020401] 
struct UOnlineSubsystemEOS_execShowEOSOverlayReportVoice_Params
{
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.TickEOSPlatform
// [0x00020401] 
struct UOnlineSubsystemEOS_execTickEOSPlatform_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ManuallyTickEOSPlatform
// [0x00020401] 
struct UOnlineSubsystemEOS_execManuallyTickEOSPlatform_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.FormatCurrency
// [0x00020803] 
struct UOnlineSubsystemEOS_eventFormatCurrency_Params
{
	class FString                                      Currency;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Price;                                            		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0018 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// class FString                                      formattedPrice;                                   		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      tempPrice;                                        		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      currencySymbol;                                   		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<class FString>                              priceArray;                                       		// 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0068 (0x0004) [0x0000000000000000]               
	// int32_t                                            decimals;                                         		// 0x006C (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearMicroTxnResponseDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execClearMicroTxnResponseDelegate_Params
{
	struct FScriptDelegate                             ResponseMicroTxnDelegate;                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddMicroTxnResponseDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execAddMicroTxnResponseDelegate_Params
{
	struct FScriptDelegate                             ResponseMicroTxnDelegate;                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetAppPriceInfo
// [0x00420401] 
struct UOnlineSubsystemEOS_execGetAppPriceInfo_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	TArray<struct FName>                               AppNames;                                         		// 0x0048 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                         		// 0x0058 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0070 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.HandleBootMessage
// [0x00020401] 
struct UOnlineSubsystemEOS_execHandleBootMessage_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetOverlayEnabled
// [0x00020003] 
struct UOnlineSubsystemEOS_execGetOverlayEnabled_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearPlayerSigningOutDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execClearPlayerSigningOutDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddPlayerSigningOutDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execAddPlayerSigningOutDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnPlayerSigningOut
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnPlayerSigningOut_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RefreshNetworkErrorToggle
// [0x00020001] 
struct UOnlineSubsystemEOS_execRefreshNetworkErrorToggle_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUserRestoredDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execClearUserRestoredDelegate_Params
{
	struct FScriptDelegate                             UserRestoredDelegate;                             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUserRestoredDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execAddUserRestoredDelegate_Params
{
	struct FScriptDelegate                             UserRestoredDelegate;                             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUserRestored
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnUserRestored_Params
{
	uint8_t                                            ControllerId;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUserOrphanedDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execClearUserOrphanedDelegate_Params
{
	struct FScriptDelegate                             UserOrphanedDelegate;                             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUserOrphanedDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execAddUserOrphanedDelegate_Params
{
	struct FScriptDelegate                             UserOrphanedDelegate;                             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUserOrphaned
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnUserOrphaned_Params
{
	uint8_t                                            ControllerId;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForItemsAsync
// [0x00020001] 
struct UOnlineSubsystemEOS_execOpenStoreForItemsAsync_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<class FString>                              Targets;                                          		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             OnStorePurchaseCompleteDelegate;                  		// 0x0018 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnStorePurchaseCompleteDelegate
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnStorePurchaseCompleteDelegate_Params
{
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForItems
// [0x00020401] 
struct UOnlineSubsystemEOS_execOpenStoreForItems_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<class FString>                              Targets;                                          		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForDLC
// [0x00020001] 
struct UOnlineSubsystemEOS_execOpenStoreForDLC_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       DLC;                                              		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenErrorDialog
// [0x00020001] 
struct UOnlineSubsystemEOS_execOpenErrorDialog_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            ErrorCode;                                        		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenPS4DisplayMode
// [0x00024001] 
struct UOnlineSubsystemEOS_execOpenPS4DisplayMode_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            DisplayMode;                                      		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<class FString>                              Targets;                                          		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ServiceLabel;                                     		// 0x0018 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ResetControllerColor
// [0x00020001] 
struct UOnlineSubsystemEOS_execResetControllerColor_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetControllerColor
// [0x00020001] 
struct UOnlineSubsystemEOS_execSetControllerColor_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FColor                                      NewColor;                                         		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.InitializeTrophyAPI
// [0x00020001] 
struct UOnlineSubsystemEOS_execInitializeTrophyAPI_Params
{
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AnyPlayerChatRestricted
// [0x00020001] 
struct UOnlineSubsystemEOS_execAnyPlayerChatRestricted_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUnlockedDLCChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemEOS_execClearUnlockedDLCChangeDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUnlockedDLCChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemEOS_execAddUnlockedDLCChangeDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetUnlockedDLC
// [0x00020003] 
struct UOnlineSubsystemEOS_execGetUnlockedDLC_Params
{
	TArray<struct FName>                               ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUnlockedDLCChange
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnUnlockedDLCChange_Params
{
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UpdateSessionStatusFromPlayers
// [0x00020001] 
struct UOnlineSubsystemEOS_execUpdateSessionStatusFromPlayers_Params
{
	int32_t                                            CurrentPlayerCount;                               		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            numBotPlayers;                                    		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearErrorDialogClosedDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execClearErrorDialogClosedDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddErrorDialogClosedDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execAddErrorDialogClosedDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnErrorDialogClosed
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnErrorDialogClosed_Params
{
	int32_t                                            LocalUserNum;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCommerceDialogClosedDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execClearCommerceDialogClosedDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCommerceDialogClosedDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execAddCommerceDialogClosedDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCommerceDialogClosed
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnCommerceDialogClosed_Params
{
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetCurrentConnectionStatus
// [0x00020003] 
struct UOnlineSubsystemEOS_execGetCurrentConnectionStatus_Params
{
	EOnlineServerConnectionStatus                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCloseKickPlayerDialogDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execClearCloseKickPlayerDialogDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCloseKickPlayerDialogDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execAddCloseKickPlayerDialogDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCloseKickPlayerDialog
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnCloseKickPlayerDialog_Params
{
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnPlayerTalkingStateChange
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnPlayerTalkingStateChange_Params
{
	struct FUniqueNetId                                Player;                                           		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bIsTalking : 1;                                   		// 0x0048 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetVoiceReceiveVolume
// [0x00020001] 
struct UOnlineSubsystemEOS_execSetVoiceReceiveVolume_Params
{
	float                                              VoiceVolume;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetDLCPurchaseTime
// [0x00020003] 
struct UOnlineSubsystemEOS_execGetDLCPurchaseTime_Params
{
	struct FName                                       AppName;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SaveKey
// [0x00020001] 
struct UOnlineSubsystemEOS_execSaveKey_Params
{
	class FString                                      ProductKey;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetLocalAccountNames
// [0x00420001] 
struct UOnlineSubsystemEOS_execGetLocalAccountNames_Params
{
	TArray<class FString>                              Accounts;                                         		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.DeleteLocalAccount
// [0x00024001] 
struct UOnlineSubsystemEOS_execDeleteLocalAccount_Params
{
	class FString                                      Username;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Password;                                         		// 0x0010 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RenameLocalAccount
// [0x00024001] 
struct UOnlineSubsystemEOS_execRenameLocalAccount_Params
{
	class FString                                      NewUserName;                                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      OldUserName;                                      		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Password;                                         		// 0x0020 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.CreateLocalAccount
// [0x00024001] 
struct UOnlineSubsystemEOS_execCreateLocalAccount_Params
{
	class FString                                      Username;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Password;                                         		// 0x0010 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCreateOnlineAccountCompletedDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execClearCreateOnlineAccountCompletedDelegate_Params
{
	struct FScriptDelegate                             AccountCreateDelegate;                            		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCreateOnlineAccountCompletedDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execAddCreateOnlineAccountCompletedDelegate_Params
{
	struct FScriptDelegate                             AccountCreateDelegate;                            		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCreateOnlineAccountCompleted
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnCreateOnlineAccountCompleted_Params
{
	uint8_t                                            ErrorStatus;                                      		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.CreateOnlineAccount
// [0x00024001] 
struct UOnlineSubsystemEOS_execCreateOnlineAccount_Params
{
	class FString                                      Username;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Password;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      EmailAddress;                                     		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ProductKey;                                       		// 0x0030 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0040 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsKeyValid
// [0x00020003] 
struct UOnlineSubsystemEOS_execIsKeyValid_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearStorageDeviceChangeDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execClearStorageDeviceChangeDelegate_Params
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddStorageDeviceChangeDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execAddStorageDeviceChangeDelegate_Params
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnStorageDeviceChange
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnStorageDeviceChange_Params
{
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetNATType
// [0x00020003] 
struct UOnlineSubsystemEOS_execGetNATType_Params
{
	ENATType                                           ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearConnectionStatusChangeDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execClearConnectionStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddConnectionStatusChangeDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execAddConnectionStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnConnectionStatusChange
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnConnectionStatusChange_Params
{
	uint8_t                                            ConnectionStatus;                                 		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsControllerConnected
// [0x00020003] 
struct UOnlineSubsystemEOS_execIsControllerConnected_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearControllerChangeDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execClearControllerChangeDelegate_Params
{
	struct FScriptDelegate                             ControllerChangeDelegate;                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddControllerChangeDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execAddControllerChangeDelegate_Params
{
	struct FScriptDelegate                             ControllerChangeDelegate;                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnControllerChange
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnControllerChange_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bIsConnected : 1;                                 		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetNetworkNotificationPosition
// [0x00020001] 
struct UOnlineSubsystemEOS_execSetNetworkNotificationPosition_Params
{
	uint8_t                                            NewPos;                                           		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetNetworkNotificationPosition
// [0x00020001] 
struct UOnlineSubsystemEOS_execGetNetworkNotificationPosition_Params
{
	ENetworkNotificationPosition                       ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.NotifyExternalUIChanged
// [0x00020401] 
struct UOnlineSubsystemEOS_execNotifyExternalUIChanged_Params
{
	uint32_t                                           bIsOpening : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearExternalUIChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemEOS_execClearExternalUIChangeDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddExternalUIChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemEOS_execAddExternalUIChangeDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnExternalUIChange
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnExternalUIChange_Params
{
	uint32_t                                           bIsOpening : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearLinkStatusChangeDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execClearLinkStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LinkStatusDelegate;                               		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddLinkStatusChangeDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execAddLinkStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LinkStatusDelegate;                               		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnLinkStatusChange
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnLinkStatusChange_Params
{
	uint32_t                                           bIsConnected : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.HasLinkConnection
// [0x00020003] 
struct UOnlineSubsystemEOS_execHasLinkConnection_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterStatGuid
// [0x00420001] 
struct UOnlineSubsystemEOS_execRegisterStatGuid_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ClientStatGuid;                                   		// 0x0048 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetClientStatGuid
// [0x00020001] 
struct UOnlineSubsystemEOS_execGetClientStatGuid_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execClearRegisterHostStatGuidCompleteDelegateDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddRegisterHostStatGuidCompleteDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execAddRegisterHostStatGuidCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnFlushOnlineStatsComplete
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnFlushOnlineStatsComplete_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnRegisterHostStatGuidComplete
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnRegisterHostStatGuidComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterHostStatGuid
// [0x00420001] 
struct UOnlineSubsystemEOS_execRegisterHostStatGuid_Params
{
	class FString                                      HostStatGuid;                                     		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetHostStatGuid
// [0x00020001] 
struct UOnlineSubsystemEOS_execGetHostStatGuid_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.WriteOnlinePlayerScores
// [0x00420001] 
struct UOnlineSubsystemEOS_execWriteOnlinePlayerScores_Params
{
	TArray<struct FOnlinePlayerScore>                  PlayerScores;                                     		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.FreeStats
// [0x00020001] 
struct UOnlineSubsystemEOS_execFreeStats_Params
{
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearReadOnlineStatsCompleteDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execClearReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                  		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddReadOnlineStatsCompleteDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execAddReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                  		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnReadOnlineStatsComplete
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnReadOnlineStatsComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsByRankAroundPlayer
// [0x00024001] 
struct UOnlineSubsystemEOS_execReadOnlineStatsByRankAroundPlayer_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            NumRows;                                          		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsByRank
// [0x00024001] 
struct UOnlineSubsystemEOS_execReadOnlineStatsByRank_Params
{
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            StartIndex;                                       		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            NumToRead;                                        		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsForFriends
// [0x00020001] 
struct UOnlineSubsystemEOS_execReadOnlineStatsForFriends_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStats
// [0x00420001] 
struct UOnlineSubsystemEOS_execReadOnlineStats_Params
{
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnmuteAll
// [0x00020001] 
struct UOnlineSubsystemEOS_execUnmuteAll_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.MuteAll
// [0x00020001] 
struct UOnlineSubsystemEOS_execMuteAll_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bAllowFriends : 1;                                		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetSpeechRecognitionObject
// [0x00020001] 
struct UOnlineSubsystemEOS_execSetSpeechRecognitionObject_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class USpeechRecognition*                          SpeechRecogObj;                                   		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SelectVocabulary
// [0x00020001] 
struct UOnlineSubsystemEOS_execSelectVocabulary_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            VocabularyId;                                     		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearRecognitionCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemEOS_execClearRecognitionCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             RecognitionDelegate;                              		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddRecognitionCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemEOS_execAddRecognitionCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             RecognitionDelegate;                              		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnRecognitionComplete
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnRecognitionComplete_Params
{
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetRecognitionResults
// [0x00420001] 
struct UOnlineSubsystemEOS_execGetRecognitionResults_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FSpeechRecognizedWord>               Words;                                            		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.StopSpeechRecognition
// [0x00020001] 
struct UOnlineSubsystemEOS_execStopSpeechRecognition_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.StartSpeechRecognition
// [0x00020001] 
struct UOnlineSubsystemEOS_execStartSpeechRecognition_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.StopNetworkedVoice
// [0x00020001] 
struct UOnlineSubsystemEOS_execStopNetworkedVoice_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.StartNetworkedVoice
// [0x00020001] 
struct UOnlineSubsystemEOS_execStartNetworkedVoice_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearPlayerTalkingDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execClearPlayerTalkingDelegate_Params
{
	struct FScriptDelegate                             TalkerDelegate;                                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddPlayerTalkingDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execAddPlayerTalkingDelegate_Params
{
	struct FScriptDelegate                             TalkerDelegate;                                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnPlayerTalking
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnPlayerTalking_Params
{
	struct FUniqueNetId                                Player;                                           		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnmuteRemoteTalker
// [0x00020001] 
struct UOnlineSubsystemEOS_execUnmuteRemoteTalker_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.MuteRemoteTalker
// [0x00020001] 
struct UOnlineSubsystemEOS_execMuteRemoteTalker_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetRemoteTalkerPriority
// [0x00020001] 
struct UOnlineSubsystemEOS_execSetRemoteTalkerPriority_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Priority;                                         		// 0x0050 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0054 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsHeadsetPresent
// [0x00020001] 
struct UOnlineSubsystemEOS_execIsHeadsetPresent_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsRemotePlayerTalking
// [0x00020001] 
struct UOnlineSubsystemEOS_execIsRemotePlayerTalking_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsLocalPlayerTalking
// [0x00020001] 
struct UOnlineSubsystemEOS_execIsLocalPlayerTalking_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnregisterRemoteTalker
// [0x00020001] 
struct UOnlineSubsystemEOS_execUnregisterRemoteTalker_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterRemoteTalker
// [0x00020001] 
struct UOnlineSubsystemEOS_execRegisterRemoteTalker_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnregisterLocalTalker
// [0x00020001] 
struct UOnlineSubsystemEOS_execUnregisterLocalTalker_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterLocalTalker
// [0x00020001] 
struct UOnlineSubsystemEOS_execRegisterLocalTalker_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetPlayerUniqueNetIdFromIndex
// [0x400820802] 
struct UOnlineSubsystemEOS_eventGetPlayerUniqueNetIdFromIndex_Params
{
	int32_t                                            UserIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                ReturnValue;                                      		// 0x0008 (0x0048) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// struct FUniqueNetId                                PlayerID;                                         		// 0x0050 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetPlayerNicknameFromIndex
// [0x400020802] 
struct UOnlineSubsystemEOS_eventGetPlayerNicknameFromIndex_Params
{
	int32_t                                            UserIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.Init
// [0x400020C00] 
struct UOnlineSubsystemEOS_eventInit_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.InitEOS
// [0x00420401] 
struct UOnlineSubsystemEOS_execInitEOS_Params
{
	class FString                                      SandboxId;                                        		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      DeploymentId;                                     		// 0x0010 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.EventGetAppPriceInfoComplete
// [0x00120001] 
struct UOnlineSubsystemEOS_execEventGetAppPriceInfoComplete_Params
{
	struct FName                                       AppName;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Price;                                            		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      DiscountPrice;                                    		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            DiscountPercentage;                               		// 0x0028 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnMicroTxnResponse
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnMicroTxnResponse_Params
{
	uint32_t                                           bAuthorized : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint64_t                                           OrderId;                                          		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequiresAuthTicket
// [0x400020002] 
struct UOnlineAuthInterfaceEOS_execRequiresAuthTicket_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequestAuthTicket
// [0x400020400] 
struct UOnlineAuthInterfaceEOS_execRequestAuthTicket_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                         		// 0x0048 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0060 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequestMtxCode
// [0x400020400] 
struct UOnlineAuthInterfaceEOS_execRequestMtxCode_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                         		// 0x0048 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0060 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineFriendsInterfaceEOS.GetActivePlatformId
// [0x400420400] 
struct UOnlineFriendsInterfaceEOS_execGetActivePlatformId_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                AccountId;                                        		// 0x0008 (0x0048) [0x0000000000400082] (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
	struct FUniqueNetId                                PlatformId;                                       		// 0x0050 (0x0048) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0098 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineFriendsInterfaceEOS.RequestLinkedAccounts
// [0x400020400] 
struct UOnlineFriendsInterfaceEOS_execRequestLinkedAccounts_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        AccountIds;                                       		// 0x0008 (0x0010) [0x0000000000400082] (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                         		// 0x0018 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventClipErrorOccurred
// [0x00020002] 
struct UOnlineGameClipsInterfaceEOS_execNotifyEventClipErrorOccurred_Params
{
	struct FScriptDelegate                             InCallback;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventClipErrorOccurred
// [0x00120001] 
struct UOnlineGameClipsInterfaceEOS_execEventClipErrorOccurred_Params
{
	class FString                                      InEpicAccountId;                                  		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ClipId;                                           		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UErrorType*                                  InErrorType;                                      		// 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventGeneralErrorOccurred
// [0x00020002] 
struct UOnlineGameClipsInterfaceEOS_execNotifyEventGeneralErrorOccurred_Params
{
	struct FScriptDelegate                             InCallback;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventGeneralErrorOccurred
// [0x00120001] 
struct UOnlineGameClipsInterfaceEOS_execEventGeneralErrorOccurred_Params
{
	class UErrorType*                                  InErrorType;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventMaskStatusChanged
// [0x00020003] 
struct UOnlineGameClipsInterfaceEOS_execNotifyEventMaskStatusChanged_Params
{
	struct FScriptDelegate                             InCallback;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventMaskStatusChanged
// [0x00120001] 
struct UOnlineGameClipsInterfaceEOS_execEventMaskStatusChanged_Params
{
	uint64_t                                           InMaskAreaHandle;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FGameClipsMaskArea                          InMaskArea;                                       		// 0x0008 (0x0018) [0x0000000000000082] (CPF_Const | CPF_Parm)
	uint8_t                                            InNewMaskStatus;                                  		// 0x0020 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventClipStatusChanged
// [0x00020003] 
struct UOnlineGameClipsInterfaceEOS_execNotifyEventClipStatusChanged_Params
{
	struct FScriptDelegate                             InCallback;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventClipStatusChanged
// [0x00120001] 
struct UOnlineGameClipsInterfaceEOS_execEventClipStatusChanged_Params
{
	class FString                                      InEpicAccountId;                                  		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            InClipId;                                         		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InNewClipStatus;                                  		// 0x0014 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventConnectionStatusChanged
// [0x00020003] 
struct UOnlineGameClipsInterfaceEOS_execNotifyEventConnectionStatusChanged_Params
{
	struct FScriptDelegate                             InCallback;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventConnectionStatusChanged
// [0x00120001] 
struct UOnlineGameClipsInterfaceEOS_execEventConnectionStatusChanged_Params
{
	class FString                                      InEpicAccountId;                                  		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            InConnection;                                     		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InNewConnectionStatus;                            		// 0x0011 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventRecordingChanged
// [0x00020003] 
struct UOnlineGameClipsInterfaceEOS_execNotifyEventRecordingChanged_Params
{
	struct FScriptDelegate                             InCallback;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventRecordingChanged
// [0x00120001] 
struct UOnlineGameClipsInterfaceEOS_execEventRecordingChanged_Params
{
	uint8_t                                            InNewRecording;                                   		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventAvailabilityChanged
// [0x00020003] 
struct UOnlineGameClipsInterfaceEOS_execNotifyEventAvailabilityChanged_Params
{
	struct FScriptDelegate                             InCallback;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventAvailabilityChanged
// [0x00120001] 
struct UOnlineGameClipsInterfaceEOS_execEventAvailabilityChanged_Params
{
	uint8_t                                            InNewAvailability;                                		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.IsUploading
// [0x00020401] 
struct UOnlineGameClipsInterfaceEOS_execIsUploading_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.IsRecording
// [0x00020401] 
struct UOnlineGameClipsInterfaceEOS_execIsRecording_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.IsAvailable
// [0x00020401] 
struct UOnlineGameClipsInterfaceEOS_execIsAvailable_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.GetTimeUntilUnthrottled
// [0x00020401] 
struct UOnlineGameClipsInterfaceEOS_execGetTimeUntilUnthrottled_Params
{
	class FString                                      InEpicAccountId;                                  		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.IsClipUploadingLimitReached
// [0x00020401] 
struct UOnlineGameClipsInterfaceEOS_execIsClipUploadingLimitReached_Params
{
	class FString                                      InEpicAccountId;                                  		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.SetUserMaxClipUploadsPerMinute
// [0x00020401] 
struct UOnlineGameClipsInterfaceEOS_execSetUserMaxClipUploadsPerMinute_Params
{
	int32_t                                            InMaxClipUploadsPerMinute;                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.IsAccountLinked
// [0x00020401] 
struct UOnlineGameClipsInterfaceEOS_execIsAccountLinked_Params
{
	class FString                                      InEpicAccountId;                                  		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.CreateClip
// [0x00020401] 
struct UOnlineGameClipsInterfaceEOS_execCreateClip_Params
{
	class FString                                      InEpicAccountId;                                  		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      InClipType;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.DisableMaskArea
// [0x00020401] 
struct UOnlineGameClipsInterfaceEOS_execDisableMaskArea_Params
{
	uint64_t                                           InMaskAreaHandle;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EnableMaskArea
// [0x00420401] 
struct UOnlineGameClipsInterfaceEOS_execEnableMaskArea_Params
{
	struct FGameClipsMaskArea                          InMaskArea;                                       		// 0x0000 (0x0018) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint64_t                                           ReturnValue;                                      		// 0x0018 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.StopRecording
// [0x00020401] 
struct UOnlineGameClipsInterfaceEOS_execStopRecording_Params
{
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.StartRecording
// [0x00020401] 
struct UOnlineGameClipsInterfaceEOS_execStartRecording_Params
{
	uint64_t                                           InClipDuration;                                   		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.AcceptGameInvite
// [0x400020400] 
struct UOnlineGameInterfaceEOS_execAcceptGameInvite_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.FreeSearchResults
// [0x400020400] 
struct UOnlineGameInterfaceEOS_execFreeSearchResults_Params
{
	class UOnlineGameSearch*                           Search;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.UpdateOnlineGame
// [0x400024400] 
struct UOnlineGameInterfaceEOS_execUpdateOnlineGame_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UOnlineGameSettings*                         UpdatedGameSettings;                              		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bShouldRefreshOnlineData : 1;                     		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.AuthWithNintendoAccountToken
// [0x400420400] 
struct UOnlinePersistentAuthInterfaceEOS_execAuthWithNintendoAccountToken_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      NintendoAccountToken;                             		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetTimeUntilAuthExpiration
// [0x400020400] 
struct UOnlinePersistentAuthInterfaceEOS_execGetTimeUntilAuthExpiration_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint64_t                                           ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetAuthExpirationTimestamp
// [0x400020400] 
struct UOnlinePersistentAuthInterfaceEOS_execGetAuthExpirationTimestamp_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UDateTime*                                   ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.LaunchAccountPortal
// [0x400020400] 
struct UOnlinePersistentAuthInterfaceEOS_execLaunchAccountPortal_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetClientSecret
// [0x400020400] 
struct UOnlinePersistentAuthInterfaceEOS_execGetClientSecret_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetClientID
// [0x400020400] 
struct UOnlinePersistentAuthInterfaceEOS_execGetClientID_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetClientCredentials
// [0x400020400] 
struct UOnlinePersistentAuthInterfaceEOS_execGetClientCredentials_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetContinuanceToken
// [0x400020400] 
struct UOnlinePersistentAuthInterfaceEOS_execGetContinuanceToken_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.UseRefreshToken
// [0x400020400] 
struct UOnlinePersistentAuthInterfaceEOS_execUseRefreshToken_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      RefreshToken;                                     		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetRefreshToken
// [0x400020400] 
struct UOnlinePersistentAuthInterfaceEOS_execGetRefreshToken_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.RequestPinGrantCode
// [0x400020400] 
struct UOnlinePersistentAuthInterfaceEOS_execRequestPinGrantCode_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendInviteAcceptedDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddFriendInviteAcceptedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InviteAccepted;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendInviteAccepted
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnFriendInviteAccepted_Params
{
	struct FUniqueNetId                                AcceptingPlayerId;                                		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadBlockList
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execReadBlockList_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetBlockList
// [0x00420401] 
struct UOnlinePlayerInterfaceEOS_execGetBlockList_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FOnlineFriend>                       OutBlockList;                                     		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddPlayerUnblockedDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddPlayerUnblockedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InDelegate;                                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddPlayerBlockedDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddPlayerBlockedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InDelegate;                                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddBlockListUpdatedDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddBlockListUpdatedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InDelegate;                                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.EpicIDToPlatformID
// [0x00020401] 
struct UOnlinePlayerInterfaceEOS_execEpicIDToPlatformID_Params
{
	struct FUniqueNetId                                EpicAccountId;                                    		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            TargetPlatform;                                   		// 0x0048 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             Callback;                                         		// 0x0050 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.EpicIDToPlatformIDCallback
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execEpicIDToPlatformIDCallback_Params
{
	struct FUniqueNetId                                PlatformAccountId;                                		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Error;                                            		// 0x0048 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetEpicAccountId
// [0x00020401] 
struct UOnlinePlayerInterfaceEOS_execGetEpicAccountId_Params
{
	struct FUniqueNetId                                PlatformId;                                       		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FUniqueNetId                                ReturnValue;                                      		// 0x0048 (0x0048) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowInviteUI
// [0x00024001] 
struct UOnlinePlayerInterfaceEOS_execShowInviteUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      InviteText;                                       		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowGamerCardUI
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execShowGamerCardUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetRichPresence
// [0x00020401] 
struct UOnlinePlayerInterfaceEOS_execSetRichPresence_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      PresenceString;                                   		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GameDataString;                                   		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendPresence
// [0x00420401] 
struct UOnlinePlayerInterfaceEOS_execGetFriendPresence_Params
{
	struct FOnlineFriend                               FriendData;                                       		// 0x0000 (0x0118) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RecordPlayersRecentlyMet
// [0x00420001] 
struct UOnlinePlayerInterfaceEOS_execRecordPlayersRecentlyMet_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      GameDescription;                                  		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WordFilterSanitizeString
// [0x00024001] 
struct UOnlinePlayerInterfaceEOS_execWordFilterSanitizeString_Params
{
	class FString                                      Comment;                                          		// 0x0000 (0x0010) [0x0000000000400082] (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             SanitizeDelegate;                                 		// 0x0010 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                         		// 0x0028 (0x0048) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0070 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnSanitizeStringComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnSanitizeStringComplete_Params
{
	struct FWordFilterResult                           Result;                                           		// 0x0000 (0x0038) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HideKeyboardUI
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execHideKeyboardUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerCountryDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearReadPlayerCountryDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadPlayerCountryDelegate;                        		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerCountryDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddReadPlayerCountryDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadPlayerCountryDelegate;                        		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnPlayerCountryRetrieved
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnPlayerCountryRetrieved_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Country;                                          		// 0x0048 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerCountry
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execGetPlayerCountry_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAvatarChangeDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearAvatarChangeDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             AvatarDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAvatarChangeDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddAvatarChangeDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             AvatarDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendPresenceChangeDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearFriendPresenceChangeDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             PresenceDelegate;                                 		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendPresenceChangeDelegate
// [0x00020803] 
struct UOnlinePlayerInterfaceEOS_eventAddFriendPresenceChangeDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             PresenceDelegate;                                 		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.FriendPresenceChange
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execFriendPresenceChange_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAvatarChange
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnAvatarChange_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnlockAchievement
// [0x00024401] 
struct UOnlinePlayerInterfaceEOS_execUnlockAchievement_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              PercentComplete;                                  		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadAchievements
// [0x00024401] 
struct UOnlinePlayerInterfaceEOS_execReadAchievements_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bShouldReadText : 1;                              		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bShouldReadImages : 1;                            		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetAchievements
// [0x00424401] 
struct UOnlinePlayerInterfaceEOS_execGetAchievements_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FAchievementDetails>                 Achievements;                                     		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            TitleId;                                          		// 0x0018 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	EOnlineEnumerationReadState                        ReturnValue;                                      		// 0x001C (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadAchievementsCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearReadAchievementsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InDelegate;                                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUnlockAchievementCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearUnlockAchievementCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InDelegate;                                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadAchievementsCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddReadAchievementsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InDelegate;                                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUnlockAchievementCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddUnlockAchievementCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InDelegate;                                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadAchievementsComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnReadAchievementsComplete_Params
{
	int32_t                                            TitleId;                                          		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUnlockAchievementComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnUnlockAchievementComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowControllerUI
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execShowControllerUI_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerLanguage
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execGetPlayerLanguage_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowPlayersUI
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execShowPlayersUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearProfileDataChangedDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearProfileDataChangedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ProfileDataChangedDelegate;                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddProfileDataChangedDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddProfileDataChangedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ProfileDataChangedDelegate;                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnProfileDataChanged
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnProfileDataChanged_Params
{
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnlockGamerPicture
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execUnlockGamerPicture_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            PictureId;                                        		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsDeviceValid
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execIsDeviceValid_Params
{
	int32_t                                            DeviceID;                                         		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetDeviceSelectionResults
// [0x00420001] 
struct UOnlinePlayerInterfaceEOS_execGetDeviceSelectionResults_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      DeviceName;                                       		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearDeviceSelectionDoneDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearDeviceSelectionDoneDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             DeviceDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddDeviceSelectionDoneDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddDeviceSelectionDoneDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             DeviceDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnDeviceSelectionComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnDeviceSelectionComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowDeviceSelectionUI
// [0x00024001] 
struct UOnlinePlayerInterfaceEOS_execShowDeviceSelectionUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            SizeNeeded;                                       		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bForceShowUI : 1;                                 		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowCustomPlayersUI
// [0x00420001] 
struct UOnlinePlayerInterfaceEOS_execShowCustomPlayersUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      Title;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Description;                                      		// 0x0028 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0038 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsUserSwitchActive
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execIsUserSwitchActive_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetKickPlayerDialogActive
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execSetKickPlayerDialogActive_Params
{
	uint32_t                                           Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetKickPreviousUser
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execSetKickPreviousUser_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowLoginUIForOrphanedUser
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execShowLoginUIForOrphanedUser_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetSyncedAchievements
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execGetSyncedAchievements_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<bool>                                       ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsGuestLogin
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execIsGuestLogin_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RequestRestrictedFeatureMessaging
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execRequestRestrictedFeatureMessaging_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            RestrictedFeature;                                		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateVoice
// [0x00424001] 
struct UOnlinePlayerInterfaceEOS_execCanCommunicateVoice_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateVideo
// [0x00424001] 
struct UOnlinePlayerInterfaceEOS_execCanCommunicateVideo_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateText
// [0x00424001] 
struct UOnlinePlayerInterfaceEOS_execCanCommunicateText_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareUserCreatedContent
// [0x00424001] 
struct UOnlinePlayerInterfaceEOS_execCanShareUserCreatedContent_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanAccessPremiumVideoContent
// [0x00424001] 
struct UOnlinePlayerInterfaceEOS_execCanAccessPremiumVideoContent_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanAccessPremiumContent
// [0x00424001] 
struct UOnlinePlayerInterfaceEOS_execCanAccessPremiumContent_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanUseCloudStorage
// [0x00424001] 
struct UOnlinePlayerInterfaceEOS_execCanUseCloudStorage_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanRecordDVRClips
// [0x00424001] 
struct UOnlinePlayerInterfaceEOS_execCanRecordDVRClips_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanBrowseInternet
// [0x00424001] 
struct UOnlinePlayerInterfaceEOS_execCanBrowseInternet_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareWithSocialNetwork
// [0x00424001] 
struct UOnlinePlayerInterfaceEOS_execCanShareWithSocialNetwork_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareKinectContent
// [0x00424001] 
struct UOnlinePlayerInterfaceEOS_execCanShareKinectContent_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanUploadFitnessData
// [0x00424001] 
struct UOnlinePlayerInterfaceEOS_execCanUploadFitnessData_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetPrimaryPlayerGamepadToLastInput
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execSetPrimaryPlayerGamepadToLastInput_Params
{
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUserSwitchCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearUserSwitchCompleteDelegate_Params
{
	struct FScriptDelegate                             UserSwitchCompleteDelegate;                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUserSwitchCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddUserSwitchCompleteDelegate_Params
{
	struct FScriptDelegate                             UserSwitchCompleteDelegate;                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUserSwitchComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnUserSwitchComplete_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginStatusChangeDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearLoginStatusChangeDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            LocalUserNum;                                     		// 0x0018 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginStatusChangeDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddLoginStatusChangeDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            LocalUserNum;                                     		// 0x0018 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginStatusChange
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnLoginStatusChange_Params
{
	uint8_t                                            NewStatus;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                NewId;                                            		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayHistoryRegistrationKey
// [0x00420001] 
struct UOnlinePlayerInterfaceEOS_execGetPlayHistoryRegistrationKey_Params
{
	TArray<uint8_t>                                    Key;                                              		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CheckParentalControlInfo
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execCheckParentalControlInfo_Params
{
	uint32_t                                           bShowUi : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetActiveDiscDLC
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execGetActiveDiscDLC_Params
{
	TArray<struct FName>                               ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetOnlineSubscriptionRequirement
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execSetOnlineSubscriptionRequirement_Params
{
	uint32_t                                           bRequiresOnlineSubscription : 1;                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetControllerID
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execGetControllerID_Params
{
	int32_t                                            LocalPlayerNum;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetConnectedControllerNames
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execGetConnectedControllerNames_Params
{
	TArray<struct FName>                               ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLocalPlayerRemoved
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execOnLocalPlayerRemoved_Params
{
	int32_t                                            LocalPlayerNum;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnregisterController
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execUnregisterController_Params
{
	int32_t                                            LocalPlayerNum;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RegisterController
// [0x00024001] 
struct UOnlinePlayerInterfaceEOS_execRegisterController_Params
{
	int32_t                                            LocalPlayerNum;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ControllerId;                                     		// 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanRegisterController
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execCanRegisterController_Params
{
	int32_t                                            LocalPlayerNum;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowBindings
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execShowBindings_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetControllerLayout
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execSetControllerLayout_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       LayoutName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetInputAPI
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execSetInputAPI_Params
{
	uint8_t                                            TargetAPI;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearInputAPIChangedDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearInputAPIChangedDelegate_Params
{
	struct FScriptDelegate                             InputAPIChangedDelegate;                          		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddInputAPIChangedDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddInputAPIChangedDelegate_Params
{
	struct FScriptDelegate                             InputAPIChangedDelegate;                          		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnInputAPIChanged
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnInputAPIChanged_Params
{
	uint8_t                                            TargetAPI;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUnregisteredControllerDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearUnregisteredControllerDelegate_Params
{
	struct FScriptDelegate                             UnregisteredControllerDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearRegisteredControllerDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearRegisteredControllerDelegate_Params
{
	struct FScriptDelegate                             RegisteredControllerDelegate;                     		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUnregisteredControllerDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddUnregisteredControllerDelegate_Params
{
	struct FScriptDelegate                             UnregisteredControllerDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddRegisteredControllerDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddRegisteredControllerDelegate_Params
{
	struct FScriptDelegate                             RegisteredControllerDelegate;                     		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUnregisteredController
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnUnregisteredController_Params
{
	int32_t                                            LocalPlayerNum;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRegisteredController
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnRegisteredController_Params
{
	int32_t                                            LocalPlayerNum;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ControllerId;                                     		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddInGamePost
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddInGamePost_Params
{
	class FString                                      InPostID;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            LocalUserNum;                                     		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<class FString>                              StringReplaceList;                                		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UpdateStat
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execUpdateStat_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       StatName;                                         		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Points;                                           		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearSaveDataNoSpaceDialogCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearSaveDataNoSpaceDialogCompleteDelegate_Params
{
	struct FScriptDelegate                             DeviceDelegate;                                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddSaveDataNoSpaceDialogCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddSaveDataNoSpaceDialogCompleteDelegate_Params
{
	struct FScriptDelegate                             DeviceDelegate;                                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnSaveDataNoSpaceDialogComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnSaveDataNoSpaceDialogComplete_Params
{
	uint32_t                                           bContinueWithoutSave : 1;                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RecordPlayersRecentlyMetKeys
// [0x00420001] 
struct UOnlinePlayerInterfaceEOS_execRecordPlayersRecentlyMetKeys_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FFriendHistoryKey>                   PlayerKeys;                                       		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsAchievementUnlocked
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execIsAchievementUnlocked_Params
{
	int32_t                                            AchievementId;                                    		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowContentMarketplaceUI
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execShowContentMarketplaceUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFriendsInviteUI
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execShowFriendsInviteUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowAchievementsUI
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execShowAchievementsUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowMessagesUI
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execShowMessagesUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFeedbackUI
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execShowFeedbackUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RemoveCanPlayOnlineChangedDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execRemoveCanPlayOnlineChangedDelegate_Params
{
	struct FScriptDelegate                             Callback;                                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddCanPlayOnlineChangedDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddCanPlayOnlineChangedDelegate_Params
{
	struct FScriptDelegate                             Callback;                                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPlayOnlineChanged
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execCanPlayOnlineChanged_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUserSignInCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearUserSignInCompleteDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUserSignInCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddUserSignInCompleteDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUserSignInComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnUserSignInComplete_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowCustomMessageUI
// [0x00424001] 
struct UOnlinePlayerInterfaceEOS_execShowCustomMessageUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        Recipients;                                       		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      MessageTitle;                                     		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      NonEditableMessage;                               		// 0x0028 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      EditableMessage;                                  		// 0x0038 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearCrossTitleProfileSettings
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearCrossTitleProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetCrossTitleProfileSettings
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execGetCrossTitleProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UOnlineProfileSettings*                      ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearReadCrossTitleProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InDelegate;                                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddReadCrossTitleProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InDelegate;                                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadCrossTitleProfileSettingsComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnReadCrossTitleProfileSettingsComplete_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadCrossTitleProfileSettings
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execReadCrossTitleProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearWritePlayerStorageCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearWritePlayerStorageCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InDelegate;                                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddWritePlayerStorageCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddWritePlayerStorageCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InDelegate;                                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnWritePlayerStorageComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnWritePlayerStorageComplete_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WritePlayerStorage
// [0x00024001] 
struct UOnlinePlayerInterfaceEOS_execWritePlayerStorage_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            DeviceID;                                         		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearReadPlayerStorageForNetIdCompleteDelegate_Params
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             InDelegate;                                       		// 0x0048 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddReadPlayerStorageForNetIdCompleteDelegate_Params
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             InDelegate;                                       		// 0x0048 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadPlayerStorageForNetIdComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnReadPlayerStorageForNetIdComplete_Params
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0048 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadPlayerStorageForNetId
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execReadPlayerStorageForNetId_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                NetId;                                            		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0050 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerStorageCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearReadPlayerStorageCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InDelegate;                                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerStorageCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddReadPlayerStorageCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InDelegate;                                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadPlayerStorageComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnReadPlayerStorageComplete_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadPlayerStorage
// [0x00024001] 
struct UOnlinePlayerInterfaceEOS_execReadPlayerStorage_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            DeviceID;                                         		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerStorage
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execGetPlayerStorage_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlinePlayerStorage*                        ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RequestNativePlatformAuthTicket
// [0x00840003] 
struct UOnlinePlayerInterfaceEOS_execRequestNativePlatformAuthTicket_Params
{
	int32_t                                            LocalUserNum;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             Callback;                                         		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UOnlineSubsystem*                            NativeOnlineSubsystem;                            		// 0x0020 (0x0008) [0x0000000000000000]               
	// struct FUniqueNetId                                PlayerID;                                         		// 0x0028 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	// class U__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1* _0x1;                                             		// 0x0070 (0x0008) [0x0000000000000000]               
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRequestNativePlatformAuthTicketComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnRequestNativePlatformAuthTicketComplete_Params
{
	int32_t                                            LocalUserNum;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      PlatformAuthTicket;                               		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.LinkedAccount
// [0x00040803] 
struct UOnlinePlayerInterfaceEOS_eventLinkedAccount_Params
{
	int32_t                                            LocalUserNum;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class U__OnlinePlayerInterfaceEOS__LinkedAccount_0x1* _0x1;                                             		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ConnectLogin
// [0x00040401] 
struct UOnlinePlayerInterfaceEOS_execConnectLogin_Params
{
	int32_t                                            LocalUserNum;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HasIncomingFriendInvite
// [0x00020401] 
struct UOnlinePlayerInterfaceEOS_execHasIncomingFriendInvite_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                InviteFrom;                                       		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SupportInGameLogin
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execSupportInGameLogin_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HasFriendsFunctionality
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execHasFriendsFunctionality_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.DeleteMessage
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execDeleteMessage_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            MessageIndex;                                     		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendMessageReceivedDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearFriendMessageReceivedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             MessageDelegate;                                  		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendMessageReceivedDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddFriendMessageReceivedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             MessageDelegate;                                  		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendMessageReceived
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnFriendMessageReceived_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                SendingPlayer;                                    		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SendingNick;                                      		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0060 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendMessages
// [0x00420003] 
struct UOnlinePlayerInterfaceEOS_execGetFriendMessages_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FOnlineFriendMessage>                FriendMessages;                                   		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearJoinFriendGameCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearJoinFriendGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddJoinFriendGameCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddJoinFriendGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnJoinFriendGameComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnJoinFriendGameComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.JoinFriendGame
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execJoinFriendGame_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                Friend;                                           		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReceivedGameInviteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearReceivedGameInviteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReceivedGameInviteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddReceivedGameInviteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReceivedGameInvite
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnReceivedGameInvite_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      InviterName;                                      		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendGameInviteToFriends
// [0x00024001] 
struct UOnlinePlayerInterfaceEOS_execSendGameInviteToFriends_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        Friends;                                          		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Text;                                             		// 0x0018 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendGameInviteToFriend
// [0x00024001] 
struct UOnlinePlayerInterfaceEOS_execSendGameInviteToFriend_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                Friend;                                           		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Text;                                             		// 0x0050 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0060 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendMessageToFriend
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execSendMessageToFriendW_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                Friend;                                           		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0060 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendInviteCanceledDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearFriendInviteCanceledDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InviteDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendInviteCanceledDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddFriendInviteCanceledDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InviteDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendInviteCanceled
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnFriendInviteCanceled_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                CanceledUserId;                                   		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendInviteReceivedDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearFriendInviteReceivedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InviteDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendInviteReceivedDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddFriendInviteReceivedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InviteDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendInviteReceived
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnFriendInviteReceived_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      RequestingNick;                                   		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0060 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RemoveFriend
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execRemoveFriend_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                FormerFriend;                                     		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearRemoveFriendCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearRemoveFriendCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             RemoveFriendDelegate;                             		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddRemoveFriendCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddRemoveFriendCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             RemoveFriendDelegate;                             		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRemoveFriendComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnRemoveFriendComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FUniqueNetId                                RemovedID;                                        		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.DenyFriendInvite
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execDenyFriendInvite_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearDenyFriendInviteCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearDenyFriendInviteCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddDenyFriendInviteCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddDenyFriendInviteCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnDenyFriendInviteComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnDenyFriendInviteComplete_Params
{
	struct FUniqueNetId                                FriendId;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UError*                                      Error;                                            		// 0x0048 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AcceptFriendInvite
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAcceptFriendInvite_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAcceptFriendInviteCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearAcceptFriendInviteCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAcceptFriendInviteCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddAcceptFriendInviteCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAcceptFriendInviteComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnAcceptFriendInviteComplete_Params
{
	struct FUniqueNetId                                FriendId;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UError*                                      Error;                                            		// 0x0048 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAddFriendByNameCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearAddFriendByNameCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAddFriendByNameCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddAddFriendByNameCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAddFriendByNameComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnAddFriendByNameComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendByName
// [0x00024001] 
struct UOnlinePlayerInterfaceEOS_execAddFriendByName_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      FriendName;                                       		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0018 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.QueryUserByDisplayName
// [0x00020401] 
struct UOnlinePlayerInterfaceEOS_execQueryUserByDisplayName_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      DisplayName;                                      		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearQueryUserByDisplayNameCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearQueryUserByDisplayNameCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             QueryDelegate;                                    		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddQueryUserByDisplayNameCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddQueryUserByDisplayNameCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             QueryDelegate;                                    		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnQueryUserByDisplayName
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnQueryUserByDisplayName_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      QueriedDisplayName;                               		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FUniqueNetId                                UserId;                                           		// 0x0018 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriend
// [0x00024001] 
struct UOnlinePlayerInterfaceEOS_execAddFriend_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                NewFriend;                                        		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0050 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0060 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAddFriendCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearAddFriendCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAddFriendCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddAddFriendCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAddFriendComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnAddFriendComplete_Params
{
	struct FUniqueNetId                                NewFriendId;                                      		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UError*                                      Error;                                            		// 0x0048 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetKeyboardInputResults
// [0x00420001] 
struct UOnlinePlayerInterfaceEOS_execGetKeyboardInputResults_Params
{
	uint8_t                                            bWasCanceled;                                     		// 0x0000 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearKeyboardInputDoneDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearKeyboardInputDoneDelegate_Params
{
	struct FScriptDelegate                             InputDelegate;                                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddKeyboardInputDoneDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddKeyboardInputDoneDelegate_Params
{
	struct FScriptDelegate                             InputDelegate;                                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnKeyboardInputComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnKeyboardInputComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowKeyboardUI
// [0x00024001] 
struct UOnlinePlayerInterfaceEOS_execShowKeyboardUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      TitleText;                                        		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      DescriptionText;                                  		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bIsPassword : 1;                                  		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bShouldValidate : 1;                              		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      DefaultText;                                      		// 0x0030 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            MaxResultLength;                                  		// 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0044 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetOnlineStatus
// [0x00420401] 
struct UOnlinePlayerInterfaceEOS_execSetOnlineStatus_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            StatusId;                                         		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FLocalizedStringSetting>             LocalizedStringSettings;                          		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	TArray<struct FSettingsProperty>                   Properties;                                       		// 0x0018 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendsList
// [0x00424401] 
struct UOnlinePlayerInterfaceEOS_execGetFriendsList_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FOnlineFriend>                       Friends;                                          		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            Count;                                            		// 0x0018 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            StartingAt;                                       		// 0x001C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	EOnlineEnumerationReadState                        ReturnValue;                                      		// 0x0020 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadFriendsCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearReadFriendsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                      		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadFriendsCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddReadFriendsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                      		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadFriendsComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnReadFriendsComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadFriendsList
// [0x00024401] 
struct UOnlinePlayerInterfaceEOS_execReadFriendsList_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Count;                                            		// 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            StartingAt;                                       		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearWriteProfileSettingsCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearWriteProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddWriteProfileSettingsCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddWriteProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnWriteProfileSettingsComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnWriteProfileSettingsComplete_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WriteProfileSettings
// [0x00020401] 
struct UOnlinePlayerInterfaceEOS_execWriteProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetProfileSettings
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execGetProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineProfileSettings*                      ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadProfileSettingsCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearReadProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadProfileSettingsCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddReadProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadProfileSettingsComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnReadProfileSettingsComplete_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadProfileSettings
// [0x00020401] 
struct UOnlinePlayerInterfaceEOS_execReadProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendsChangeDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearFriendsChangeDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendsDelegate;                                  		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendsChangeDelegate
// [0x00020803] 
struct UOnlinePlayerInterfaceEOS_eventAddFriendsChangeDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendsDelegate;                                  		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearMutingChangeDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearMutingChangeDelegate_Params
{
	struct FScriptDelegate                             MutingDelegate;                                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddMutingChangeDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddMutingChangeDelegate_Params
{
	struct FScriptDelegate                             MutingDelegate;                                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginCancelledDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearLoginCancelledDelegate_Params
{
	struct FScriptDelegate                             CancelledDelegate;                                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginCancelledDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddLoginCancelledDelegate_Params
{
	struct FScriptDelegate                             CancelledDelegate;                                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginChangeDelegate
// [0x00020401] 
struct UOnlinePlayerInterfaceEOS_execClearLoginChangeDelegate_Params
{
	struct FScriptDelegate                             LoginDelegate;                                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginChangeDelegate
// [0x00020401] 
struct UOnlinePlayerInterfaceEOS_execAddLoginChangeDelegate_Params
{
	struct FScriptDelegate                             LoginDelegate;                                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFriendsUI
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execShowFriendsUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsMuted
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execIsMuted_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AreAnyFriends
// [0x00420401] 
struct UOnlinePlayerInterfaceEOS_execAreAnyFriends_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FFriendsQuery>                       Query;                                            		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsFriend
// [0x00020401] 
struct UOnlinePlayerInterfaceEOS_execIsFriend_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShowPresenceInformation
// [0x00424003] 
struct UOnlinePlayerInterfaceEOS_execCanShowPresenceInformation_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanViewPlayerProfiles
// [0x00424003] 
struct UOnlinePlayerInterfaceEOS_execCanViewPlayerProfiles_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPurchaseContent
// [0x00424003] 
struct UOnlinePlayerInterfaceEOS_execCanPurchaseContent_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanDownloadUserContent
// [0x00424003] 
struct UOnlinePlayerInterfaceEOS_execCanDownloadUserContent_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicate
// [0x00024003] 
struct UOnlinePlayerInterfaceEOS_execCanCommunicate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            CommMethod;                                       		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	EFeaturePrivilegeLevel                             ReturnValue;                                      		// 0x0008 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPlayOnline
// [0x00424003] 
struct UOnlinePlayerInterfaceEOS_execCanPlayOnline_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerNickname
// [0x00020401] 
struct UOnlinePlayerInterfaceEOS_execGetPlayerNickname_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetUniquePlayerId
// [0x00420401] 
struct UOnlinePlayerInterfaceEOS_execGetUniquePlayerId_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetLoginStatus
// [0x00020401] 
struct UOnlinePlayerInterfaceEOS_execGetLoginStatus_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	ELoginStatus                                       ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLogoutCompletedDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearLogoutCompletedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             LogoutDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLogoutCompletedDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddLogoutCompletedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             LogoutDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLogoutCompleted
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnLogoutCompleted_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.Logout
// [0x00020401] 
struct UOnlinePlayerInterfaceEOS_execLogout_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginFailedDelegate
// [0x00020401] 
struct UOnlinePlayerInterfaceEOS_execClearLoginFailedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             LoginFailedDelegate;                              		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginFailedDelegate
// [0x00020401] 
struct UOnlinePlayerInterfaceEOS_execAddLoginFailedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             LoginFailedDelegate;                              		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReceievedPinGrantCode
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnReceievedPinGrantCode_Params
{
	uint8_t                                            Result;                                           		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            LocalUserNum;                                     		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Code;                                             		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      URL;                                              		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            SecondsUntilExpiration;                           		// 0x0028 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginFailed
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnLoginFailed_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            ErrorCode;                                        		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AutoLogin
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAutoLogin_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.Login
// [0x00024401] 
struct UOnlinePlayerInterfaceEOS_execLogin_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      LoginName;                                        		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Password;                                         		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWantsLocalOnly : 1;                              		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowLoginUI
// [0x00024001] 
struct UOnlinePlayerInterfaceEOS_execShowLoginUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bShowOnlineOnly : 1;                              		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendsChange
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnFriendsChange_Params
{
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnMutingChange
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnMutingChange_Params
{
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginCancelled
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnLoginCancelled_Params
{
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginChange
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnLoginChange_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnPlayerUnblocked
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnPlayerUnblocked_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UError*                                      Error;                                            		// 0x0050 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnPlayerBlocked
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnPlayerBlocked_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UError*                                      Error;                                            		// 0x0050 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnBlockListUpdated
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnBlockListUpdated_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.RegisterStatGuid
// [0x00420001] 
struct UOnlineStatsInterfaceEOS_execRegisterStatGuid_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ClientStatGuid;                                   		// 0x0048 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.GetClientStatGuid
// [0x00020001] 
struct UOnlineStatsInterfaceEOS_execGetClientStatGuid_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020001] 
struct UOnlineStatsInterfaceEOS_execClearRegisterHostStatGuidCompleteDelegateDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddRegisterHostStatGuidCompleteDelegate
// [0x00020001] 
struct UOnlineStatsInterfaceEOS_execAddRegisterHostStatGuidCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnRegisterHostStatGuidComplete
// [0x00120001] 
struct UOnlineStatsInterfaceEOS_execOnRegisterHostStatGuidComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.RegisterHostStatGuid
// [0x00420001] 
struct UOnlineStatsInterfaceEOS_execRegisterHostStatGuid_Params
{
	class FString                                      HostStatGuid;                                     		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.GetHostStatGuid
// [0x00020001] 
struct UOnlineStatsInterfaceEOS_execGetHostStatGuid_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.WriteOnlinePlayerScores
// [0x00420001] 
struct UOnlineStatsInterfaceEOS_execWriteOnlinePlayerScores_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            LeaderboardId;                                    		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FOnlinePlayerScore>                  PlayerScores;                                     		// 0x0010 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearFlushOnlineStatsCompleteDelegate
// [0x00020001] 
struct UOnlineStatsInterfaceEOS_execClearFlushOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                 		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddFlushOnlineStatsCompleteDelegate
// [0x00020001] 
struct UOnlineStatsInterfaceEOS_execAddFlushOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                 		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnFlushOnlineStatsComplete
// [0x00120001] 
struct UOnlineStatsInterfaceEOS_execOnFlushOnlineStatsComplete_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.FlushOnlineStats
// [0x00020001] 
struct UOnlineStatsInterfaceEOS_execFlushOnlineStats_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.WriteOnlineStats
// [0x00020001] 
struct UOnlineStatsInterfaceEOS_execWriteOnlineStats_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                Player;                                           		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UOnlineStatsWrite*                           StatsWrite;                                       		// 0x0050 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.FreeStats
// [0x00020001] 
struct UOnlineStatsInterfaceEOS_execFreeStats_Params
{
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearReadOnlineStatsCompleteDelegate
// [0x00020003] 
struct UOnlineStatsInterfaceEOS_execClearReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                  		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddReadOnlineStatsCompleteDelegate
// [0x00020003] 
struct UOnlineStatsInterfaceEOS_execAddReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                  		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnReadOnlineStatsComplete
// [0x00120001] 
struct UOnlineStatsInterfaceEOS_execOnReadOnlineStatsComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsByRankAroundPlayer
// [0x00024401] 
struct UOnlineStatsInterfaceEOS_execReadOnlineStatsByRankAroundPlayer_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            NumRows;                                          		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsByRank
// [0x00024401] 
struct UOnlineStatsInterfaceEOS_execReadOnlineStatsByRank_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            StartIndex;                                       		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            NumToRead;                                        		// 0x0014 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsForFriends
// [0x00020401] 
struct UOnlineStatsInterfaceEOS_execReadOnlineStatsForFriends_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStats
// [0x00420401] 
struct UOnlineStatsInterfaceEOS_execReadOnlineStats_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearAllDelegates
// [0x00020003] 
struct UOnlineUserCloudFileInterfaceEOS_execClearAllDelegates_Params
{
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearDeleteUserFileCompleteDelegate
// [0x00020003] 
struct UOnlineUserCloudFileInterfaceEOS_execClearDeleteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             DeleteUserFileCompleteDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddDeleteUserFileCompleteDelegate
// [0x00020003] 
struct UOnlineUserCloudFileInterfaceEOS_execAddDeleteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             DeleteUserFileCompleteDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.DeleteUserFile
// [0x00020401] 
struct UOnlineUserCloudFileInterfaceEOS_execDeleteUserFile_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bShouldCloudDelete : 1;                           		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bShouldLocallyDelete : 1;                         		// 0x0024 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnDeleteUserFileComplete
// [0x00120001] 
struct UOnlineUserCloudFileInterfaceEOS_execOnDeleteUserFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearWriteUserFileCompleteDelegate
// [0x00020003] 
struct UOnlineUserCloudFileInterfaceEOS_execClearWriteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteUserFileCompleteDelegate;                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddWriteUserFileCompleteDelegate
// [0x00020003] 
struct UOnlineUserCloudFileInterfaceEOS_execAddWriteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteUserFileCompleteDelegate;                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.WriteUserFile
// [0x00420401] 
struct UOnlineUserCloudFileInterfaceEOS_execWriteUserFile_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    FileContents;                                     		// 0x0020 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnWriteUserFileComplete
// [0x00120001] 
struct UOnlineUserCloudFileInterfaceEOS_execOnWriteUserFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearReadUserFileCompleteDelegate
// [0x00020003] 
struct UOnlineUserCloudFileInterfaceEOS_execClearReadUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadUserFileCompleteDelegate;                     		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddReadUserFileCompleteDelegate
// [0x00020003] 
struct UOnlineUserCloudFileInterfaceEOS_execAddReadUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadUserFileCompleteDelegate;                     		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ReadUserFile
// [0x00020401] 
struct UOnlineUserCloudFileInterfaceEOS_execReadUserFile_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnReadUserFileComplete
// [0x00120001] 
struct UOnlineUserCloudFileInterfaceEOS_execOnReadUserFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.GetUserFileList
// [0x00420401] 
struct UOnlineUserCloudFileInterfaceEOS_execGetUserFileList_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FEmsFile>                            UserFiles;                                        		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearEnumerateUserFileCompleteDelegate
// [0x00020003] 
struct UOnlineUserCloudFileInterfaceEOS_execClearEnumerateUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             EnumerateUserFileCompleteDelegate;                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddEnumerateUserFileCompleteDelegate
// [0x00020003] 
struct UOnlineUserCloudFileInterfaceEOS_execAddEnumerateUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             EnumerateUserFileCompleteDelegate;                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.EnumerateUserFiles
// [0x00020401] 
struct UOnlineUserCloudFileInterfaceEOS_execEnumerateUserFiles_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnEnumerateUserFilesComplete
// [0x00120001] 
struct UOnlineUserCloudFileInterfaceEOS_execOnEnumerateUserFilesComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearFile
// [0x00020401] 
struct UOnlineUserCloudFileInterfaceEOS_execClearFile_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearFiles
// [0x00020401] 
struct UOnlineUserCloudFileInterfaceEOS_execClearFiles_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.GetFileContents
// [0x00420401] 
struct UOnlineUserCloudFileInterfaceEOS_execGetFileContents_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    FileContents;                                     		// 0x0020 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetVoiceReceiveVolume
// [0x00020001] 
struct UOnlineVoiceInterfaceEOS_execSetVoiceReceiveVolume_Params
{
	float                                              VoiceVolume;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.UnmuteAll
// [0x00020001] 
struct UOnlineVoiceInterfaceEOS_execUnmuteAll_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.MuteAll
// [0x00020001] 
struct UOnlineVoiceInterfaceEOS_execMuteAll_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bAllowFriends : 1;                                		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetSpeechRecognitionObject
// [0x00020001] 
struct UOnlineVoiceInterfaceEOS_execSetSpeechRecognitionObject_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class USpeechRecognition*                          SpeechRecogObj;                                   		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SelectVocabulary
// [0x00020001] 
struct UOnlineVoiceInterfaceEOS_execSelectVocabulary_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            VocabularyId;                                     		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.ClearRecognitionCompleteDelegate
// [0x00020001] 
struct UOnlineVoiceInterfaceEOS_execClearRecognitionCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             RecognitionDelegate;                              		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.AddRecognitionCompleteDelegate
// [0x00020001] 
struct UOnlineVoiceInterfaceEOS_execAddRecognitionCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             RecognitionDelegate;                              		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.GetRecognitionResults
// [0x00420001] 
struct UOnlineVoiceInterfaceEOS_execGetRecognitionResults_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FSpeechRecognizedWord>               Words;                                            		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.StopSpeechRecognition
// [0x00020001] 
struct UOnlineVoiceInterfaceEOS_execStopSpeechRecognition_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.StartSpeechRecognition
// [0x00020001] 
struct UOnlineVoiceInterfaceEOS_execStartSpeechRecognition_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.StopNetworkedVoice
// [0x00020001] 
struct UOnlineVoiceInterfaceEOS_execStopNetworkedVoice_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.StartNetworkedVoice
// [0x00020001] 
struct UOnlineVoiceInterfaceEOS_execStartNetworkedVoice_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.ClearPlayerTalkingDelegate
// [0x00020001] 
struct UOnlineVoiceInterfaceEOS_execClearPlayerTalkingDelegate_Params
{
	struct FScriptDelegate                             TalkerDelegate;                                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.AddPlayerTalkingDelegate
// [0x00020001] 
struct UOnlineVoiceInterfaceEOS_execAddPlayerTalkingDelegate_Params
{
	struct FScriptDelegate                             TalkerDelegate;                                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.UnmuteRemoteTalker
// [0x00024001] 
struct UOnlineVoiceInterfaceEOS_execUnmuteRemoteTalker_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bIsSystemWide : 1;                                		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0054 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.MuteRemoteTalker
// [0x00024001] 
struct UOnlineVoiceInterfaceEOS_execMuteRemoteTalker_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bIsSystemWide : 1;                                		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0054 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetRemoteTalkerPriority
// [0x00020001] 
struct UOnlineVoiceInterfaceEOS_execSetRemoteTalkerPriority_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Priority;                                         		// 0x0050 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0054 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.IsHeadsetPresent
// [0x00020001] 
struct UOnlineVoiceInterfaceEOS_execIsHeadsetPresent_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.IsRemotePlayerTalking
// [0x00020001] 
struct UOnlineVoiceInterfaceEOS_execIsRemotePlayerTalking_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.IsLocalPlayerTalking
// [0x00020001] 
struct UOnlineVoiceInterfaceEOS_execIsLocalPlayerTalking_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.UnregisterRemoteTalker
// [0x00020001] 
struct UOnlineVoiceInterfaceEOS_execUnregisterRemoteTalker_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.RegisterRemoteTalker
// [0x00020001] 
struct UOnlineVoiceInterfaceEOS_execRegisterRemoteTalker_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.UnregisterLocalTalker
// [0x00020001] 
struct UOnlineVoiceInterfaceEOS_execUnregisterLocalTalker_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.RegisterLocalTalker
// [0x00020001] 
struct UOnlineVoiceInterfaceEOS_execRegisterLocalTalker_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.OnRecognitionComplete
// [0x00120001] 
struct UOnlineVoiceInterfaceEOS_execOnRecognitionComplete_Params
{
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.OnPlayerTalkingStateChange
// [0x00120001] 
struct UOnlineVoiceInterfaceEOS_execOnPlayerTalkingStateChange_Params
{
	struct FUniqueNetId                                Player;                                           		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bIsTalking : 1;                                   		// 0x0048 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.StopRecording
// [0x00420401] 
struct UOnlineVoiceInterfaceEOS_execStopRecording_Params
{
	class FString                                      EpicAccountId;                                    		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.StartRecording
// [0x00420401] 
struct UOnlineVoiceInterfaceEOS_execStartRecording_Params
{
	class FString                                      EpicAccountId;                                    		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      RoomName;                                         		// 0x0010 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.HasPlayerRespondedToVoiceAgreement
// [0x00420003] 
struct UOnlineVoiceInterfaceEOS_execHasPlayerRespondedToVoiceAgreement_Params
{
	class FString                                      LocalEpicAccountId;                               		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.GetVoiceAgreementStatusForPlayer
// [0x00420401] 
struct UOnlineVoiceInterfaceEOS_execGetVoiceAgreementStatusForPlayer_Params
{
	class FString                                      LocalEpicAccountId;                               		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	EPlayerVoiceAgreementStatus                        ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.HasPlayerAcceptedVoiceAgreement
// [0x00420401] 
struct UOnlineVoiceInterfaceEOS_execHasPlayerAcceptedVoiceAgreement_Params
{
	class FString                                      LocalEpicAccountId;                               		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.CheckAllPlayersAcceptedVoiceModerationAgreement
// [0x00020401] 
struct UOnlineVoiceInterfaceEOS_execCheckAllPlayersAcceptedVoiceModerationAgreement_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SubscribeToLoginChanges
// [0x00040803] 
struct UOnlineVoiceInterfaceEOS_eventSubscribeToLoginChanges_Params
{
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.OnLogout
// [0x00420401] 
struct UOnlineVoiceInterfaceEOS_execOnLogout_Params
{
	class FString                                      EpicAccountId;                                    		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.OnLoginChange
// [0x00020401] 
struct UOnlineVoiceInterfaceEOS_execOnLoginChange_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetPlayerBlockStatus
// [0x00420401] 
struct UOnlineVoiceInterfaceEOS_execSetPlayerBlockStatus_Params
{
	class FString                                      LocalEpicAccountId;                               		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      TargetEpicAccountId;                              		// 0x0010 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      RoomName;                                         		// 0x0020 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           bBlocked : 1;                                     		// 0x0030 (0x0004) [0x0000000000000082] [0x00000001] (CPF_Const | CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetPlayerMuteStatus
// [0x00420401] 
struct UOnlineVoiceInterfaceEOS_execSetPlayerMuteStatus_Params
{
	class FString                                      LocalEpicAccountId;                               		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      TargetEpicAccountId;                              		// 0x0010 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      RoomName;                                         		// 0x0020 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           bMuted : 1;                                       		// 0x0030 (0x0004) [0x0000000000000082] [0x00000001] (CPF_Const | CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.GetUserState
// [0x00420401] 
struct UOnlineVoiceInterfaceEOS_execGetUserState_Params
{
	class FString                                      EpicAccountId;                                    		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	EPlayerVoiceTransitionState                        ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.GetCurrentRoomNameForUser
// [0x00420401] 
struct UOnlineVoiceInterfaceEOS_execGetCurrentRoomNameForUser_Params
{
	class FString                                      EpicAccountId;                                    		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.LeaveVoiceRoom
// [0x00420401] 
struct UOnlineVoiceInterfaceEOS_execLeaveVoiceRoom_Params
{
	class FString                                      EpicAccountId;                                    		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      RoomName;                                         		// 0x0010 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.JoinVoiceRoom
// [0x00420401] 
struct UOnlineVoiceInterfaceEOS_execJoinVoiceRoom_Params
{
	class FString                                      EpicAccountId;                                    		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      RoomName;                                         		// 0x0010 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      ClientBaseUrl;                                    		// 0x0020 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      JoinToken;                                        		// 0x0030 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0040 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetAudioOutputDevice
// [0x00420401] 
struct UOnlineVoiceInterfaceEOS_execSetAudioOutputDevice_Params
{
	class FString                                      EpicAccountId;                                    		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      DeviceID;                                         		// 0x0010 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	float                                              OutputVolume;                                     		// 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetAudioInputDevice
// [0x00420401] 
struct UOnlineVoiceInterfaceEOS_execSetAudioInputDevice_Params
{
	class FString                                      EpicAccountId;                                    		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      DeviceID;                                         		// 0x0010 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	float                                              InputVolume;                                      		// 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetLocalPlayerRegisteredStatus
// [0x00420401] 
struct UOnlineVoiceInterfaceEOS_execSetLocalPlayerRegisteredStatus_Params
{
	class FString                                      PlatformId;                                       		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           bRegister : 1;                                    		// 0x0010 (0x0004) [0x0000000000000082] [0x00000001] (CPF_Const | CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.CacheOutputAudioDevices
// [0x00040401] 
struct UOnlineVoiceInterfaceEOS_execCacheOutputAudioDevices_Params
{
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.CacheInputAudioDevices
// [0x00040401] 
struct UOnlineVoiceInterfaceEOS_execCacheInputAudioDevices_Params
{
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.Init
// [0x00020401] 
struct UOnlineVoiceInterfaceEOS_execInit_Params
{
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventVoiceRecordingStatusChanged
// [0x00120001] 
struct UOnlineVoiceInterfaceEOS_execEventVoiceRecordingStatusChanged_Params
{
	uint32_t                                           bRecording : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventPlayerVoiceAgreementStatusChanged
// [0x00120001] 
struct UOnlineVoiceInterfaceEOS_execEventPlayerVoiceAgreementStatusChanged_Params
{
	class FString                                      EpicAccountId;                                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bAccepted : 1;                                    		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bNewAgreement : 1;                                		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventPlayerStatusChanged
// [0x00120001] 
struct UOnlineVoiceInterfaceEOS_execEventPlayerStatusChanged_Params
{
	class FString                                      EpicAccountId;                                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      RoomName;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FVoiceRoomMemberStatus                      MemberStatus;                                     		// 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventPlayerLeftVoiceRoom
// [0x00120001] 
struct UOnlineVoiceInterfaceEOS_execEventPlayerLeftVoiceRoom_Params
{
	class FString                                      EpicAccountId;                                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      RoomName;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventPlayerJoinedVoiceRoom
// [0x00120001] 
struct UOnlineVoiceInterfaceEOS_execEventPlayerJoinedVoiceRoom_Params
{
	class FString                                      EpicAccountId;                                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      RoomName;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventRemovedFromVoiceRoom
// [0x00120001] 
struct UOnlineVoiceInterfaceEOS_execEventRemovedFromVoiceRoom_Params
{
	class FString                                      EpicAccountId;                                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      RoomName;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            RemovedResult;                                    		// 0x0020 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventJoinedVoiceRoom
// [0x00120001] 
struct UOnlineVoiceInterfaceEOS_execEventJoinedVoiceRoom_Params
{
	class FString                                      EpicAccountId;                                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      RoomName;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            JoinResult;                                       		// 0x0020 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventLeftVoiceRoom
// [0x00120001] 
struct UOnlineVoiceInterfaceEOS_execEventLeftVoiceRoom_Params
{
	class FString                                      EpicAccountId;                                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      RoomName;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            LeaveResult;                                      		// 0x0020 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__LinkedAccount_0x1.__OnlinePlayerInterfaceEOS__LinkedAccount_0x1
// [0x00020003] 
struct U__OnlinePlayerInterfaceEOS__LinkedAccount_0x1_exec__OnlinePlayerInterfaceEOS__LinkedAccount_0x1_Params
{
	int32_t                                            _;                                                		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      PlatformAuthTicket;                               		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1.__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1
// [0x00020003] 
struct U__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1_exec__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1_Params
{
	uint32_t                                           bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Code;                                             		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
