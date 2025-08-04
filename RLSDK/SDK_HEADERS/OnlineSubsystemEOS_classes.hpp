/*
#############################################################################################
# RocketLeague (1.0.10897.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: OnlineSubsystemEOS_classes.hpp
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
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EPlayerVoiceAgreementStatus
enum class EPlayerVoiceAgreementStatus : uint8_t
{
	PVAS_None                                          = 0,
	PVAS_NotResponded                                  = 1,
	PVAS_Accepted                                      = 2,
	PVAS_Declined                                      = 3,
	PVAS_END                                           = 4
};

// Enum OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EPlayerVoiceTransitionState
enum class EPlayerVoiceTransitionState : uint8_t
{
	PVTS_Idle                                          = 0,
	PVTS_Joining                                       = 1,
	PVTS_Leaving                                       = 2,
	PVTS_END                                           = 3
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class OnlineSubsystemEOS.AudioDevicesChangedEvent
// 0x0000 (0x0060 - 0x0060)
class UAudioDevicesChangedEvent : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.AudioDevicesChangedEvent");
		}

		return uClassPointer;
	};

};

// Class OnlineSubsystemEOS.EOSErrors
// 0x0078 (0x0080 - 0x00F8)
class UEOSErrors : public UErrorList
{
public:
	class UErrorType*                                  EpicUnknownError;                              // 0x0080 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  BlockedListNotFound;                           // 0x0088 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  AcceptFriendRequestFailed;                     // 0x0090 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  RejectFriendRequestFailed;                     // 0x0098 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  GameClipsActivationFailed;                     // 0x00A0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  GameClipsCleanAudioFailed;                     // 0x00A8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  GameClipsRecorderInitFailed;                   // 0x00B0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  GameClipsStartRecordingFailed;                 // 0x00B8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  GameClipsMaskAreaInvalid;                      // 0x00C0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  GameClipsStatusListenerFailed;                 // 0x00C8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  GameClipsUserStatusListenerFailed;             // 0x00D0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  GameClipsNotAvailable;                         // 0x00D8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  GameClipsFailedToUpload;                       // 0x00E0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  GameClipsCoolingDown;                          // 0x00E8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  GameClipsUploadLimitReached;                   // 0x00F0 (0x0008) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.EOSErrors");
		}

		return uClassPointer;
	};

};

// Class OnlineSubsystemEOS.OnlineSubsystemEOS
// 0x0318 (0x03D8 - 0x06F0)
class UOnlineSubsystemEOS : public UOnlineSubsystemCommonImpl
{
public:
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                            // 0x03D8 (0x0008) [0x0000000000000000]               
	class UOnlineGameInterfaceEOS*                     GameInterfaceEOS;                              // 0x03E0 (0x0008) [0x0000000000000000]               
	class UOnlineStatsInterfaceEOS*                    StatsInterfaceEOS;                             // 0x03E8 (0x0008) [0x0000000000000000]               
	class UOnlineAuthInterfaceEOS*                     AuthInterfaceEOS;                              // 0x03F0 (0x0008) [0x0000000000000000]               
	class UOnlinePersistentAuthInterfaceEOS*           PersistentAuthInterfaceEOS;                    // 0x03F8 (0x0008) [0x0000000000000000]               
	class UOnlineFriendsInterfaceEOS*                  FriendsInterfaceEOS;                           // 0x0400 (0x0008) [0x0000000000000000]               
	class UOnlineUserCloudFileInterfaceEOS*            UserCloudFileInterfaceEOS;                     // 0x0408 (0x0008) [0x0000000000000000]               
	class UOnlineVoiceInterfaceEOS*                    VoiceInterfaceEOS;                             // 0x0410 (0x0008) [0x0000000000000000]               
	class UOnlineGameClipsInterfaceEOS*                GameClipsInterfaceEOS;                         // 0x0418 (0x0008) [0x0000000000000000]               
	TArray<struct FScriptDelegate>                     SpeechRecognitionCompleteDelegates;            // 0x0420 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPointer                                    AuthHandle;                                    // 0x0430 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    FriendsHandle;                                 // 0x0438 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    UserInfoHandle;                                // 0x0440 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    PresenceHandle;                                // 0x0448 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    ConnectHandle;                                 // 0x0450 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    SessionsHandle;                                // 0x0458 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    PDSHandle;                                     // 0x0460 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    StatsHandle;                                   // 0x0468 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    AchievementsHandle;                            // 0x0470 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    EcomHandle;                                    // 0x0478 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    UIHandle;                                      // 0x0480 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    RTCHandle;                                     // 0x0488 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    RTCAudioHandle;                                // 0x0490 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    RTCAdminHandle;                                // 0x0498 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    GameClipsHandle;                               // 0x04A0 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    EULATrackingHandle;                            // 0x04A8 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	TArray<struct FName>                               UnlockedDLC;                                   // 0x04B0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     UnlockedDLCDelegates;                          // 0x04C0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ExternalUIChangeDelegates;                     // 0x04D0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnMicroTxnResponse__Delegate;                // 0x04E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventGetAppPriceInfoComplete__Delegate;      // 0x04F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerTalking__Delegate;                   // 0x0510 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;             // 0x0528 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;         // 0x0540 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;    // 0x0558 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;        // 0x0570 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                // 0x0588 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                // 0x05A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnControllerChange__Delegate;                // 0x05B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;          // 0x05D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;             // 0x05E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateOnlineAccountCompleted__Delegate;    // 0x0600 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerTalkingStateChange__Delegate;        // 0x0618 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCloseKickPlayerDialog__Delegate;           // 0x0630 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCommerceDialogClosed__Delegate;            // 0x0648 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnErrorDialogClosed__Delegate;               // 0x0660 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnlockedDLCChange__Delegate;               // 0x0678 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnStorePurchaseCompleteDelegate__Delegate;   // 0x0690 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUserOrphaned__Delegate;                    // 0x06A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUserRestored__Delegate;                    // 0x06C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerSigningOut__Delegate;                // 0x06D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.OnlineSubsystemEOS");
		}

		return uClassPointer;
	};

	void ShowEOSVoiceAgreement(uint8_t LocalUserNum);
	void ShowEOSOverlay(uint8_t LocalUserNum);
	void ShowEOSOverlayReportVoice();
	void TickEOSPlatform(float DeltaTime);
	bool ManuallyTickEOSPlatform();
	class FString eventFormatCurrency(class FString Currency, int32_t Price);
	void ClearMicroTxnResponseDelegate(struct FScriptDelegate ResponseMicroTxnDelegate);
	void AddMicroTxnResponseDelegate(struct FScriptDelegate ResponseMicroTxnDelegate);
	bool GetAppPriceInfo(struct FScriptDelegate Callback, struct FUniqueNetId& PlayerID, TArray<struct FName>& AppNames);
	bool HandleBootMessage();
	bool GetOverlayEnabled();
	void ClearPlayerSigningOutDelegate(struct FScriptDelegate InDelegate);
	void AddPlayerSigningOutDelegate(struct FScriptDelegate InDelegate);
	void OnPlayerSigningOut(uint8_t LocalUserNum);
	bool RefreshNetworkErrorToggle();
	void ClearUserRestoredDelegate(struct FScriptDelegate UserRestoredDelegate);
	void AddUserRestoredDelegate(struct FScriptDelegate UserRestoredDelegate);
	void OnUserRestored(uint8_t ControllerId);
	void ClearUserOrphanedDelegate(struct FScriptDelegate UserOrphanedDelegate);
	void AddUserOrphanedDelegate(struct FScriptDelegate UserOrphanedDelegate);
	void OnUserOrphaned(uint8_t ControllerId);
	void OpenStoreForItemsAsync(uint8_t LocalUserNum, TArray<class FString> Targets, struct FScriptDelegate OnStorePurchaseCompleteDelegate);
	void OnStorePurchaseCompleteDelegate();
	void OpenStoreForItems(uint8_t LocalUserNum, TArray<class FString> Targets);
	void OpenStoreForDLC(uint8_t LocalUserNum, struct FName DLC);
	void OpenErrorDialog(uint8_t LocalUserNum, EPS4ErrorDialog ErrorCode);
	void OpenPS4DisplayMode(uint8_t LocalUserNum, EPS4DisplayMode DisplayMode, TArray<class FString> optionalTargets, int32_t optionalServiceLabel);
	void ResetControllerColor(int32_t ControllerId);
	void SetControllerColor(int32_t ControllerId, struct FColor NewColor);
	void InitializeTrophyAPI();
	bool AnyPlayerChatRestricted();
	void ClearUnlockedDLCChangeDelegate(struct FScriptDelegate InDelegate);
	void AddUnlockedDLCChangeDelegate(struct FScriptDelegate InDelegate);
	TArray<struct FName> GetUnlockedDLC();
	void OnUnlockedDLCChange();
	void UpdateSessionStatusFromPlayers(int32_t CurrentPlayerCount, int32_t numBotPlayers);
	void ClearErrorDialogClosedDelegate(struct FScriptDelegate InDelegate);
	void AddErrorDialogClosedDelegate(struct FScriptDelegate InDelegate);
	void OnErrorDialogClosed(int32_t LocalUserNum);
	void ClearCommerceDialogClosedDelegate(struct FScriptDelegate InDelegate);
	void AddCommerceDialogClosedDelegate(struct FScriptDelegate InDelegate);
	void OnCommerceDialogClosed();
	EOnlineServerConnectionStatus GetCurrentConnectionStatus();
	void ClearCloseKickPlayerDialogDelegate(struct FScriptDelegate InDelegate);
	void AddCloseKickPlayerDialogDelegate(struct FScriptDelegate InDelegate);
	void OnCloseKickPlayerDialog();
	void OnPlayerTalkingStateChange(struct FUniqueNetId Player, bool bIsTalking);
	bool SetVoiceReceiveVolume(float VoiceVolume);
	int32_t GetDLCPurchaseTime(struct FName AppName);
	bool SaveKey(class FString ProductKey);
	bool GetLocalAccountNames(TArray<class FString>& Accounts);
	bool DeleteLocalAccount(class FString Username, class FString optionalPassword);
	bool RenameLocalAccount(class FString NewUserName, class FString OldUserName, class FString optionalPassword);
	bool CreateLocalAccount(class FString Username, class FString optionalPassword);
	void ClearCreateOnlineAccountCompletedDelegate(struct FScriptDelegate AccountCreateDelegate);
	void AddCreateOnlineAccountCompletedDelegate(struct FScriptDelegate AccountCreateDelegate);
	void OnCreateOnlineAccountCompleted(EOnlineAccountCreateStatus ErrorStatus);
	bool CreateOnlineAccount(class FString Username, class FString Password, class FString EmailAddress, class FString optionalProductKey);
	bool IsKeyValid();
	void ClearStorageDeviceChangeDelegate(struct FScriptDelegate StorageDeviceChangeDelegate);
	void AddStorageDeviceChangeDelegate(struct FScriptDelegate StorageDeviceChangeDelegate);
	void OnStorageDeviceChange();
	ENATType GetNATType();
	void ClearConnectionStatusChangeDelegate(struct FScriptDelegate ConnectionStatusDelegate);
	void AddConnectionStatusChangeDelegate(struct FScriptDelegate ConnectionStatusDelegate);
	void OnConnectionStatusChange(EOnlineServerConnectionStatus ConnectionStatus);
	bool IsControllerConnected(int32_t ControllerId);
	void ClearControllerChangeDelegate(struct FScriptDelegate ControllerChangeDelegate);
	void AddControllerChangeDelegate(struct FScriptDelegate ControllerChangeDelegate);
	void OnControllerChange(int32_t ControllerId, bool bIsConnected);
	void SetNetworkNotificationPosition(ENetworkNotificationPosition NewPos);
	ENetworkNotificationPosition GetNetworkNotificationPosition();
	void NotifyExternalUIChanged(bool bIsOpening);
	void ClearExternalUIChangeDelegate(struct FScriptDelegate InDelegate);
	void AddExternalUIChangeDelegate(struct FScriptDelegate InDelegate);
	void OnExternalUIChange(bool bIsOpening);
	void ClearLinkStatusChangeDelegate(struct FScriptDelegate LinkStatusDelegate);
	void AddLinkStatusChangeDelegate(struct FScriptDelegate LinkStatusDelegate);
	void OnLinkStatusChange(bool bIsConnected);
	bool HasLinkConnection();
	bool RegisterStatGuid(struct FUniqueNetId PlayerID, class FString& ClientStatGuid);
	class FString GetClientStatGuid();
	void ClearRegisterHostStatGuidCompleteDelegateDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate);
	void AddRegisterHostStatGuidCompleteDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate);
	void OnFlushOnlineStatsComplete(struct FName SessionName, bool bWasSuccessful);
	void OnRegisterHostStatGuidComplete(bool bWasSuccessful);
	bool RegisterHostStatGuid(class FString& HostStatGuid);
	class FString GetHostStatGuid();
	bool WriteOnlinePlayerScores(TArray<struct FOnlinePlayerScore>& PlayerScores);
	void FreeStats(class UOnlineStatsRead* StatsRead);
	void ClearReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate);
	void AddReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate);
	void OnReadOnlineStatsComplete(bool bWasSuccessful);
	bool ReadOnlineStatsByRankAroundPlayer(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead, int32_t optionalNumRows);
	bool ReadOnlineStatsByRank(class UOnlineStatsRead* StatsRead, int32_t optionalStartIndex, int32_t optionalNumToRead);
	bool ReadOnlineStatsForFriends(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead);
	bool ReadOnlineStats(class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>& Players);
	bool UnmuteAll(uint8_t LocalUserNum);
	bool MuteAll(uint8_t LocalUserNum, bool bAllowFriends);
	bool SetSpeechRecognitionObject(uint8_t LocalUserNum, class USpeechRecognition* SpeechRecogObj);
	bool SelectVocabulary(uint8_t LocalUserNum, int32_t VocabularyId);
	void ClearRecognitionCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RecognitionDelegate);
	void AddRecognitionCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RecognitionDelegate);
	void OnRecognitionComplete();
	bool GetRecognitionResults(uint8_t LocalUserNum, TArray<struct FSpeechRecognizedWord>& Words);
	bool StopSpeechRecognition(uint8_t LocalUserNum);
	bool StartSpeechRecognition(uint8_t LocalUserNum);
	void StopNetworkedVoice(uint8_t LocalUserNum);
	void StartNetworkedVoice(uint8_t LocalUserNum);
	void ClearPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate);
	void AddPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate);
	void OnPlayerTalking(struct FUniqueNetId Player);
	bool UnmuteRemoteTalker(uint8_t LocalUserNum, struct FUniqueNetId PlayerID);
	bool MuteRemoteTalker(uint8_t LocalUserNum, struct FUniqueNetId PlayerID);
	bool SetRemoteTalkerPriority(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, int32_t Priority);
	bool IsHeadsetPresent(uint8_t LocalUserNum);
	bool IsRemotePlayerTalking(struct FUniqueNetId PlayerID);
	bool IsLocalPlayerTalking(uint8_t LocalUserNum);
	bool UnregisterRemoteTalker(struct FUniqueNetId PlayerID);
	bool RegisterRemoteTalker(struct FUniqueNetId PlayerID);
	bool UnregisterLocalTalker(uint8_t LocalUserNum);
	bool RegisterLocalTalker(uint8_t LocalUserNum);
	struct FUniqueNetId eventGetPlayerUniqueNetIdFromIndex(int32_t UserIndex);
	class FString eventGetPlayerNicknameFromIndex(int32_t UserIndex);
	bool eventInit();
	bool InitEOS(class FString& SandboxId, class FString& DeploymentId);
	void EventGetAppPriceInfoComplete(struct FName AppName, class FString Price, class FString DiscountPrice, int32_t DiscountPercentage);
	void OnMicroTxnResponse(bool bAuthorized, uint64_t OrderId);
};

// Class OnlineSubsystemEOS.OnlineAuthInterfaceEOS
// 0x0008 (0x03C8 - 0x03D0)
class UOnlineAuthInterfaceEOS : public UOnlineAuthInterfaceImpl
{
public:
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                            // 0x03C8 (0x0008) [0x0000004000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.OnlineAuthInterfaceEOS");
		}

		return uClassPointer;
	};

	bool RequiresAuthTicket();
	bool RequestAuthTicket(struct FUniqueNetId PlayerID, struct FScriptDelegate Callback);
	bool RequestMtxCode(struct FUniqueNetId PlayerID, struct FScriptDelegate Callback);
};

// Class OnlineSubsystemEOS.OnlineFriendsInterfaceEOS
// 0x0008 (0x0080 - 0x0088)
class UOnlineFriendsInterfaceEOS : public UOnlineFriendsInterfaceImpl
{
public:
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                            // 0x0080 (0x0008) [0x0000004000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.OnlineFriendsInterfaceEOS");
		}

		return uClassPointer;
	};

	bool GetActivePlatformId(uint8_t LocalUserNum, struct FUniqueNetId AccountId, struct FUniqueNetId& PlatformId);
	bool RequestLinkedAccounts(uint8_t LocalUserNum, TArray<struct FUniqueNetId> AccountIds, struct FScriptDelegate Callback);
};

// Class OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS
// 0x00B0 (0x0060 - 0x0110)
class UOnlineGameClipsInterfaceEOS : public UObject
{
public:
	struct FPointer                                    GameClipsHandle;                               // 0x0060 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FScriptDelegate                             __EventAvailabilityChanged__Delegate;          // 0x0068 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventRecordingChanged__Delegate;             // 0x0080 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventConnectionStatusChanged__Delegate;      // 0x0098 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventClipStatusChanged__Delegate;            // 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventMaskStatusChanged__Delegate;            // 0x00C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventGeneralErrorOccurred__Delegate;         // 0x00E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventClipErrorOccurred__Delegate;            // 0x00F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS");
		}

		return uClassPointer;
	};

	void NotifyEventClipErrorOccurred(struct FScriptDelegate InCallback);
	void EventClipErrorOccurred(class FString InEpicAccountId, int32_t ClipId, class UErrorType* InErrorType);
	void NotifyEventGeneralErrorOccurred(struct FScriptDelegate InCallback);
	void EventGeneralErrorOccurred(class UErrorType* InErrorType);
	void NotifyEventMaskStatusChanged(struct FScriptDelegate InCallback);
	void EventMaskStatusChanged(uint64_t InMaskAreaHandle, struct FGameClipsMaskArea InMaskArea, EGameClipsMaskStatus InNewMaskStatus);
	void NotifyEventClipStatusChanged(struct FScriptDelegate InCallback);
	void EventClipStatusChanged(class FString InEpicAccountId, int32_t InClipId, EGameClipsClipStatus InNewClipStatus);
	void NotifyEventConnectionStatusChanged(struct FScriptDelegate InCallback);
	void EventConnectionStatusChanged(class FString InEpicAccountId, EGameClipsConnection InConnection, EGameClipsConnectionStatus InNewConnectionStatus);
	void NotifyEventRecordingChanged(struct FScriptDelegate InCallback);
	void EventRecordingChanged(EGameClipsRecording InNewRecording);
	void NotifyEventAvailabilityChanged(struct FScriptDelegate InCallback);
	void EventAvailabilityChanged(EGameClipsAvailability InNewAvailability);
	bool IsUploading();
	bool IsRecording();
	bool IsAvailable();
	float GetTimeUntilUnthrottled(class FString InEpicAccountId);
	bool IsClipUploadingLimitReached(class FString InEpicAccountId);
	void SetUserMaxClipUploadsPerMinute(int32_t InMaxClipUploadsPerMinute);
	bool IsAccountLinked(class FString InEpicAccountId);
	int32_t CreateClip(class FString InEpicAccountId, class FString InClipType);
	void DisableMaskArea(uint64_t InMaskAreaHandle);
	uint64_t EnableMaskArea(struct FGameClipsMaskArea& InMaskArea);
	void StopRecording();
	void StartRecording(uint64_t InClipDuration);
};

// Class OnlineSubsystemEOS.OnlineGameInterfaceEOS
// 0x001C (0x0318 - 0x0334)
class UOnlineGameInterfaceEOS : public UOnlineGameInterfaceImpl
{
public:
	struct FPointer                                    SessionsHandle;                                // 0x0318 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    CurrentSearchHandle;                           // 0x0320 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                            // 0x0328 (0x0008) [0x0000000000000000]               
	uint32_t                                           bGameSessionUpdateInProgress : 1;              // 0x0330 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.OnlineGameInterfaceEOS");
		}

		return uClassPointer;
	};

	bool AcceptGameInvite(uint8_t LocalUserNum, struct FName SessionName);
	bool FreeSearchResults(class UOnlineGameSearch* Search);
	bool UpdateOnlineGame(struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool optionalBShouldRefreshOnlineData);
};

// Class OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS
// 0x0008 (0x00B8 - 0x00C0)
class UOnlinePersistentAuthInterfaceEOS : public UOnlinePersistentAuthInterfaceImpl
{
public:
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                            // 0x00B8 (0x0008) [0x0000004000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS");
		}

		return uClassPointer;
	};

	bool AuthWithNintendoAccountToken(uint8_t LocalUserNum, class FString& NintendoAccountToken);
	uint64_t GetTimeUntilAuthExpiration(uint8_t LocalUserNum);
	class UDateTime* GetAuthExpirationTimestamp(uint8_t LocalUserNum);
	bool LaunchAccountPortal(uint8_t LocalUserNum);
	class FString GetClientSecret();
	class FString GetClientID();
	class FString GetClientCredentials();
	class FString GetContinuanceToken(uint8_t LocalUserNum);
	bool UseRefreshToken(uint8_t LocalUserNum, class FString RefreshToken);
	class FString GetRefreshToken(uint8_t LocalUserNum);
	bool RequestPinGrantCode(uint8_t LocalUserNum);
};

// Class OnlineSubsystemEOS.OnlinePlayerInterfaceEOS
// 0x0668 (0x0060 - 0x06C8)
class UOnlinePlayerInterfaceEOS : public UObject
{
public:
	struct FPointer                                    AuthHandle;                                    // 0x0060 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    FriendsHandle;                                 // 0x0068 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    UserInfoHandle;                                // 0x0070 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    PresenceHandle;                                // 0x0078 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    ConnectHandle;                                 // 0x0080 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    PDSHandle;                                     // 0x0088 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    EcomHandle;                                    // 0x0090 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                               // 0x0098 (0x0008) [0x0000000000000000]               
	class UOnlineGameInterfaceEOS*                     GameInterfaceEOS;                              // 0x00A0 (0x0008) [0x0000000000000000]               
	class UOnlinePersistentAuthInterfaceEOS*           PersistentAuthInterfaceEOS;                    // 0x00A8 (0x0008) [0x0000000000000000]               
	class UOnlineVoiceInterfaceEOS*                    VoiceInterfaceEOS;                             // 0x00B0 (0x0008) [0x0000000000000000]               
	int32_t                                            DefaultLocalUser;                              // 0x00B8 (0x0004) [0x0000000000000000]               
	class FString                                      ProfileDataDirectory;                          // 0x00C0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      ProfileDataExtension;                          // 0x00D0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadProfileSettingsDelegates;                  // 0x00E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteProfileSettingsDelegates;                 // 0x00F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UOnlineProfileSettings*                      CachedProfile;                                 // 0x0100 (0x0008) [0x0000000000000000]               
	TArray<struct FOnlineProfileSetting>               LastProfileSettings;                           // 0x0108 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadFriendsDelegates;                          // 0x0118 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	EOnlineEnumerationReadState                        FriendsReadState;                              // 0x0128 (0x0001) [0x0000000000000000]               
	TArray<struct FScriptDelegate>                     FriendsChangeDelegates;                        // 0x0130 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LoginFailedDelegates;                          // 0x0140 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LoginCancelledDelegates;                       // 0x0150 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LogoutCompletedDelegates;                      // 0x0160 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     MutingChangeDelegates;                         // 0x0170 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FOnlineStatusMappingEOS>             StatusMappings;                                // 0x0180 (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	class FString                                      DefaultStatus;                                 // 0x0190 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReceivedGameInviteDelegates;                   // 0x01A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FOnlineFriendMessage>                CachedFriendMessages;                          // 0x01B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     JoinFriendGameCompleteDelegates;               // 0x01C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     AchievementDelegates;                          // 0x01D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     AchievementReadDelegates;                      // 0x01E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPointer                                    AchievementsHandle;                            // 0x01F0 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	TArray<struct FScriptDelegate>                     LoginChangeDelegates;                          // 0x01F8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReceivedPinGrantDelegates;                     // 0x0208 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     BlockListUpdatedDelegates;                     // 0x0218 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     PlayerBlockedDelegates;                        // 0x0228 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     PlayerUnblockedDelegates;                      // 0x0238 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnBlockListUpdated__Delegate;                // 0x0248 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerBlocked__Delegate;                   // 0x0260 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerUnblocked__Delegate;                 // 0x0278 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginChange__Delegate;                     // 0x0290 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                  // 0x02A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnMutingChange__Delegate;                    // 0x02C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                   // 0x02D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                     // 0x02F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReceievedPinGrantCode__Delegate;           // 0x0308 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                 // 0x0320 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;     // 0x0338 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;    // 0x0350 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;             // 0x0368 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;           // 0x0380 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAddFriendComplete__Delegate;               // 0x0398 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryUserByDisplayName__Delegate;          // 0x03B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;         // 0x03C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAcceptFriendInviteComplete__Delegate;      // 0x03E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDenyFriendInviteComplete__Delegate;        // 0x03F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRemoveFriendComplete__Delegate;            // 0x0410 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;            // 0x0428 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendInviteCanceled__Delegate;            // 0x0440 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;              // 0x0458 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;          // 0x0470 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;           // 0x0488 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRequestNativePlatformAuthTicketComplete__Delegate;// 0x04A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;       // 0x04B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;// 0x04D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;      // 0x04E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadCrossTitleProfileSettingsComplete__Delegate;// 0x0500 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUserSignInComplete__Delegate;              // 0x0518 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __CanPlayOnlineChanged__Delegate;              // 0x0530 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnSaveDataNoSpaceDialogComplete__Delegate;   // 0x0548 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisteredController__Delegate;            // 0x0560 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnregisteredController__Delegate;          // 0x0578 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnInputAPIChanged__Delegate;                 // 0x0590 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;               // 0x05A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUserSwitchComplete__Delegate;              // 0x05C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeviceSelectionComplete__Delegate;         // 0x05D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnProfileDataChanged__Delegate;              // 0x05F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;       // 0x0608 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;        // 0x0620 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAvatarChange__Delegate;                    // 0x0638 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __FriendPresenceChange__Delegate;              // 0x0650 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerCountryRetrieved__Delegate;          // 0x0668 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnSanitizeStringComplete__Delegate;          // 0x0680 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EpicIDToPlatformIDCallback__Delegate;        // 0x0698 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendInviteAccepted__Delegate;            // 0x06B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.OnlinePlayerInterfaceEOS");
		}

		return uClassPointer;
	};

	void AddFriendInviteAcceptedDelegate(uint8_t LocalUserNum, struct FScriptDelegate InviteAccepted);
	void OnFriendInviteAccepted(struct FUniqueNetId AcceptingPlayerId);
	bool ReadBlockList(uint8_t LocalUserNum);
	void GetBlockList(uint8_t LocalUserNum, TArray<struct FOnlineFriend>& OutBlockList);
	void AddPlayerUnblockedDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate);
	void AddPlayerBlockedDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate);
	void AddBlockListUpdatedDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate);
	void EpicIDToPlatformID(struct FUniqueNetId EpicAccountId, EOnlinePlatform TargetPlatform, struct FScriptDelegate Callback);
	void EpicIDToPlatformIDCallback(struct FUniqueNetId PlatformAccountId, class FString Error);
	struct FUniqueNetId GetEpicAccountId(struct FUniqueNetId PlatformId);
	bool ShowInviteUI(uint8_t LocalUserNum, class FString optionalInviteText);
	bool ShowGamerCardUI(uint8_t LocalUserNum, struct FUniqueNetId PlayerID);
	void SetRichPresence(uint8_t LocalUserNum, class FString PresenceString, class FString GameDataString);
	void GetFriendPresence(struct FOnlineFriend& FriendData);
	bool RecordPlayersRecentlyMet(uint8_t LocalUserNum, class FString GameDescription, TArray<struct FUniqueNetId>& Players);
	bool WordFilterSanitizeString(class FString Comment, struct FScriptDelegate SanitizeDelegate, struct FUniqueNetId optionalPlayerID);
	void OnSanitizeStringComplete(struct FWordFilterResult Result);
	bool HideKeyboardUI(uint8_t LocalUserNum);
	void ClearReadPlayerCountryDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadPlayerCountryDelegate);
	void AddReadPlayerCountryDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadPlayerCountryDelegate);
	void OnPlayerCountryRetrieved(struct FUniqueNetId PlayerID, class FString Country);
	void GetPlayerCountry(uint8_t LocalUserNum);
	void ClearAvatarChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate AvatarDelegate);
	void AddAvatarChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate AvatarDelegate);
	void ClearFriendPresenceChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate PresenceDelegate);
	void eventAddFriendPresenceChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate PresenceDelegate);
	void FriendPresenceChange(struct FUniqueNetId PlayerID);
	void OnAvatarChange(struct FUniqueNetId PlayerID);
	bool UnlockAchievement(uint8_t LocalUserNum, int32_t AchievementId, float optionalPercentComplete);
	bool ReadAchievements(uint8_t LocalUserNum, int32_t optionalTitleId, bool optionalBShouldReadText, bool optionalBShouldReadImages);
	EOnlineEnumerationReadState GetAchievements(uint8_t LocalUserNum, int32_t optionalTitleId, TArray<struct FAchievementDetails>& Achievements);
	void ClearReadAchievementsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate);
	void ClearUnlockAchievementCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate);
	void AddReadAchievementsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate);
	void AddUnlockAchievementCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate);
	void OnReadAchievementsComplete(int32_t TitleId);
	void OnUnlockAchievementComplete(bool bWasSuccessful);
	bool ShowControllerUI();
	class FString GetPlayerLanguage(uint8_t LocalUserNum);
	bool ShowPlayersUI(uint8_t LocalUserNum);
	void ClearProfileDataChangedDelegate(uint8_t LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate);
	void AddProfileDataChangedDelegate(uint8_t LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate);
	void OnProfileDataChanged();
	bool UnlockGamerPicture(uint8_t LocalUserNum, int32_t PictureId);
	bool IsDeviceValid(int32_t DeviceID);
	int32_t GetDeviceSelectionResults(uint8_t LocalUserNum, class FString& DeviceName);
	void ClearDeviceSelectionDoneDelegate(uint8_t LocalUserNum, struct FScriptDelegate DeviceDelegate);
	void AddDeviceSelectionDoneDelegate(uint8_t LocalUserNum, struct FScriptDelegate DeviceDelegate);
	void OnDeviceSelectionComplete(bool bWasSuccessful);
	bool ShowDeviceSelectionUI(uint8_t LocalUserNum, int32_t SizeNeeded, bool optionalBForceShowUI);
	bool ShowCustomPlayersUI(uint8_t LocalUserNum, class FString Title, class FString Description, TArray<struct FUniqueNetId>& Players);
	bool IsUserSwitchActive();
	void SetKickPlayerDialogActive(bool Active);
	void SetKickPreviousUser(uint8_t LocalUserNum);
	bool ShowLoginUIForOrphanedUser(uint8_t LocalUserNum);
	TArray<bool> GetSyncedAchievements(uint8_t LocalUserNum);
	bool IsGuestLogin(uint8_t LocalUserNum);
	void RequestRestrictedFeatureMessaging(uint8_t LocalUserNum, EFeaturePrivilege RestrictedFeature);
	bool CanCommunicateVoice(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	bool CanCommunicateVideo(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	bool CanCommunicateText(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	bool CanShareUserCreatedContent(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	bool CanAccessPremiumVideoContent(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	bool CanAccessPremiumContent(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	bool CanUseCloudStorage(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	bool CanRecordDVRClips(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	bool CanBrowseInternet(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	bool CanShareWithSocialNetwork(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	bool CanShareKinectContent(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	bool CanUploadFitnessData(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	void SetPrimaryPlayerGamepadToLastInput();
	void ClearUserSwitchCompleteDelegate(struct FScriptDelegate UserSwitchCompleteDelegate);
	void AddUserSwitchCompleteDelegate(struct FScriptDelegate UserSwitchCompleteDelegate);
	void OnUserSwitchComplete(uint8_t LocalUserNum);
	void ClearLoginStatusChangeDelegate(struct FScriptDelegate InDelegate, uint8_t LocalUserNum);
	void AddLoginStatusChangeDelegate(struct FScriptDelegate InDelegate, uint8_t LocalUserNum);
	void OnLoginStatusChange(ELoginStatus NewStatus, struct FUniqueNetId NewId);
	bool GetPlayHistoryRegistrationKey(TArray<uint8_t>& Key);
	bool CheckParentalControlInfo(bool bShowUi);
	TArray<struct FName> GetActiveDiscDLC();
	void SetOnlineSubscriptionRequirement(bool bRequiresOnlineSubscription);
	int32_t GetControllerID(int32_t LocalPlayerNum);
	TArray<struct FName> GetConnectedControllerNames();
	void OnLocalPlayerRemoved(int32_t LocalPlayerNum);
	void UnregisterController(int32_t LocalPlayerNum);
	void RegisterController(int32_t LocalPlayerNum, int32_t optionalControllerId);
	bool CanRegisterController(int32_t LocalPlayerNum);
	bool ShowBindings(int32_t ControllerId);
	void SetControllerLayout(int32_t ControllerId, struct FName LayoutName);
	void SetInputAPI(EInputAPI TargetAPI);
	void ClearInputAPIChangedDelegate(struct FScriptDelegate InputAPIChangedDelegate);
	void AddInputAPIChangedDelegate(struct FScriptDelegate InputAPIChangedDelegate);
	void OnInputAPIChanged(EInputAPI TargetAPI);
	void ClearUnregisteredControllerDelegate(struct FScriptDelegate UnregisteredControllerDelegate);
	void ClearRegisteredControllerDelegate(struct FScriptDelegate RegisteredControllerDelegate);
	void AddUnregisteredControllerDelegate(struct FScriptDelegate UnregisteredControllerDelegate);
	void AddRegisteredControllerDelegate(struct FScriptDelegate RegisteredControllerDelegate);
	void OnUnregisteredController(int32_t LocalPlayerNum);
	void OnRegisteredController(int32_t LocalPlayerNum, int32_t ControllerId);
	bool AddInGamePost(class FString InPostID, uint8_t LocalUserNum, TArray<class FString> StringReplaceList);
	bool UpdateStat(uint8_t LocalUserNum, struct FName StatName, int32_t Points);
	void ClearSaveDataNoSpaceDialogCompleteDelegate(struct FScriptDelegate DeviceDelegate);
	void AddSaveDataNoSpaceDialogCompleteDelegate(struct FScriptDelegate DeviceDelegate);
	void OnSaveDataNoSpaceDialogComplete(bool bContinueWithoutSave);
	bool RecordPlayersRecentlyMetKeys(uint8_t LocalUserNum, TArray<struct FFriendHistoryKey>& PlayerKeys);
	bool IsAchievementUnlocked(int32_t AchievementId);
	bool ShowContentMarketplaceUI(uint8_t LocalUserNum);
	bool ShowFriendsInviteUI(uint8_t LocalUserNum, struct FUniqueNetId PlayerID);
	bool ShowAchievementsUI(uint8_t LocalUserNum);
	bool ShowMessagesUI(uint8_t LocalUserNum);
	bool ShowFeedbackUI(uint8_t LocalUserNum, struct FUniqueNetId PlayerID);
	void RemoveCanPlayOnlineChangedDelegate(struct FScriptDelegate Callback);
	void AddCanPlayOnlineChangedDelegate(struct FScriptDelegate Callback);
	void CanPlayOnlineChanged(uint8_t LocalUserNum);
	void ClearUserSignInCompleteDelegate(struct FScriptDelegate InDelegate);
	void AddUserSignInCompleteDelegate(struct FScriptDelegate InDelegate);
	void OnUserSignInComplete(uint8_t LocalUserNum);
	bool ShowCustomMessageUI(uint8_t LocalUserNum, class FString MessageTitle, class FString NonEditableMessage, class FString optionalEditableMessage, TArray<struct FUniqueNetId>& Recipients);
	void ClearCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId);
	class UOnlineProfileSettings* GetCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId);
	void ClearReadCrossTitleProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate);
	void AddReadCrossTitleProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate);
	void OnReadCrossTitleProfileSettingsComplete(uint8_t LocalUserNum, int32_t TitleId, bool bWasSuccessful);
	bool ReadCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId, class UOnlineProfileSettings* ProfileSettings);
	void ClearWritePlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate);
	void AddWritePlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate);
	void OnWritePlayerStorageComplete(uint8_t LocalUserNum, bool bWasSuccessful);
	bool WritePlayerStorage(uint8_t LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int32_t optionalDeviceID);
	void ClearReadPlayerStorageForNetIdCompleteDelegate(struct FUniqueNetId NetId, struct FScriptDelegate InDelegate);
	void AddReadPlayerStorageForNetIdCompleteDelegate(struct FUniqueNetId NetId, struct FScriptDelegate InDelegate);
	void OnReadPlayerStorageForNetIdComplete(struct FUniqueNetId NetId, bool bWasSuccessful);
	bool ReadPlayerStorageForNetId(uint8_t LocalUserNum, struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage);
	void ClearReadPlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate);
	void AddReadPlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate);
	void OnReadPlayerStorageComplete(uint8_t LocalUserNum, bool bWasSuccessful);
	bool ReadPlayerStorage(uint8_t LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int32_t optionalDeviceID);
	class UOnlinePlayerStorage* GetPlayerStorage(uint8_t LocalUserNum);
	void RequestNativePlatformAuthTicket(int32_t LocalUserNum, struct FScriptDelegate Callback);
	void OnRequestNativePlatformAuthTicketComplete(int32_t LocalUserNum, class FString PlatformAuthTicket);
	void eventLinkedAccount(int32_t LocalUserNum);
	void ConnectLogin(int32_t LocalUserNum);
	bool HasIncomingFriendInvite(uint8_t LocalUserNum, struct FUniqueNetId InviteFrom);
	bool SupportInGameLogin();
	bool HasFriendsFunctionality();
	bool DeleteMessage(uint8_t LocalUserNum, int32_t MessageIndex);
	void ClearFriendMessageReceivedDelegate(uint8_t LocalUserNum, struct FScriptDelegate MessageDelegate);
	void AddFriendMessageReceivedDelegate(uint8_t LocalUserNum, struct FScriptDelegate MessageDelegate);
	void OnFriendMessageReceived(uint8_t LocalUserNum, struct FUniqueNetId SendingPlayer, class FString SendingNick, class FString Message);
	void GetFriendMessages(uint8_t LocalUserNum, TArray<struct FOnlineFriendMessage>& FriendMessages);
	void ClearJoinFriendGameCompleteDelegate(struct FScriptDelegate JoinFriendGameCompleteDelegate);
	void AddJoinFriendGameCompleteDelegate(struct FScriptDelegate JoinFriendGameCompleteDelegate);
	void OnJoinFriendGameComplete(bool bWasSuccessful);
	bool JoinFriendGame(uint8_t LocalUserNum, struct FUniqueNetId Friend);
	void ClearReceivedGameInviteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate);
	void AddReceivedGameInviteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate);
	void OnReceivedGameInvite(uint8_t LocalUserNum, class FString InviterName);
	bool SendGameInviteToFriends(uint8_t LocalUserNum, TArray<struct FUniqueNetId> Friends, class FString optionalText);
	bool SendGameInviteToFriend(uint8_t LocalUserNum, struct FUniqueNetId Friend, class FString optionalText);
	bool SendMessageToFriendW(uint8_t LocalUserNum, struct FUniqueNetId Friend, class FString Message);
	void ClearFriendInviteCanceledDelegate(uint8_t LocalUserNum, struct FScriptDelegate InviteDelegate);
	void AddFriendInviteCanceledDelegate(uint8_t LocalUserNum, struct FScriptDelegate InviteDelegate);
	void OnFriendInviteCanceled(uint8_t LocalUserNum, struct FUniqueNetId CanceledUserId);
	void ClearFriendInviteReceivedDelegate(uint8_t LocalUserNum, struct FScriptDelegate InviteDelegate);
	void AddFriendInviteReceivedDelegate(uint8_t LocalUserNum, struct FScriptDelegate InviteDelegate);
	void OnFriendInviteReceived(uint8_t LocalUserNum, struct FUniqueNetId RequestingPlayer, class FString RequestingNick, class FString Message);
	bool RemoveFriend(uint8_t LocalUserNum, struct FUniqueNetId FormerFriend);
	void ClearRemoveFriendCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RemoveFriendDelegate);
	void AddRemoveFriendCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RemoveFriendDelegate);
	void OnRemoveFriendComplete(bool bWasSuccessful, struct FUniqueNetId RemovedID);
	bool DenyFriendInvite(uint8_t LocalUserNum, struct FUniqueNetId RequestingPlayer);
	void ClearDenyFriendInviteCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate);
	void AddDenyFriendInviteCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate);
	void OnDenyFriendInviteComplete(struct FUniqueNetId FriendId, class UError* Error);
	bool AcceptFriendInvite(uint8_t LocalUserNum, struct FUniqueNetId RequestingPlayer);
	void ClearAcceptFriendInviteCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate);
	void AddAcceptFriendInviteCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate);
	void OnAcceptFriendInviteComplete(struct FUniqueNetId FriendId, class UError* Error);
	void ClearAddFriendByNameCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate);
	void AddAddFriendByNameCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate);
	void OnAddFriendByNameComplete(bool bWasSuccessful);
	bool AddFriendByName(uint8_t LocalUserNum, class FString FriendName, class FString optionalMessage);
	bool QueryUserByDisplayName(uint8_t LocalUserNum, class FString DisplayName);
	void ClearQueryUserByDisplayNameCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate QueryDelegate);
	void AddQueryUserByDisplayNameCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate QueryDelegate);
	void OnQueryUserByDisplayName(bool bWasSuccessful, class FString QueriedDisplayName, struct FUniqueNetId UserId);
	bool AddFriend(uint8_t LocalUserNum, struct FUniqueNetId NewFriend, class FString optionalMessage);
	void ClearAddFriendCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate);
	void AddAddFriendCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate);
	void OnAddFriendComplete(struct FUniqueNetId NewFriendId, class UError* Error);
	class FString GetKeyboardInputResults(uint8_t& bWasCanceled);
	void ClearKeyboardInputDoneDelegate(struct FScriptDelegate InputDelegate);
	void AddKeyboardInputDoneDelegate(struct FScriptDelegate InputDelegate);
	void OnKeyboardInputComplete(bool bWasSuccessful);
	bool ShowKeyboardUI(uint8_t LocalUserNum, class FString TitleText, class FString DescriptionText, bool optionalBIsPassword, bool optionalBShouldValidate, class FString optionalDefaultText, int32_t optionalMaxResultLength);
	void SetOnlineStatus(uint8_t LocalUserNum, int32_t StatusId, TArray<struct FLocalizedStringSetting>& LocalizedStringSettings, TArray<struct FSettingsProperty>& Properties);
	EOnlineEnumerationReadState GetFriendsList(uint8_t LocalUserNum, int32_t optionalCount, int32_t optionalStartingAt, TArray<struct FOnlineFriend>& Friends);
	void ClearReadFriendsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate);
	void AddReadFriendsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate);
	void OnReadFriendsComplete(bool bWasSuccessful);
	bool ReadFriendsList(uint8_t LocalUserNum, int32_t optionalCount, int32_t optionalStartingAt);
	void ClearWriteProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate);
	void AddWriteProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate);
	void OnWriteProfileSettingsComplete(uint8_t LocalUserNum, bool bWasSuccessful);
	bool WriteProfileSettings(uint8_t LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	class UOnlineProfileSettings* GetProfileSettings(uint8_t LocalUserNum);
	void ClearReadProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate);
	void AddReadProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate);
	void OnReadProfileSettingsComplete(uint8_t LocalUserNum, bool bWasSuccessful);
	bool ReadProfileSettings(uint8_t LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	void ClearFriendsChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendsDelegate);
	void eventAddFriendsChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendsDelegate);
	void ClearMutingChangeDelegate(struct FScriptDelegate MutingDelegate);
	void AddMutingChangeDelegate(struct FScriptDelegate MutingDelegate);
	void ClearLoginCancelledDelegate(struct FScriptDelegate CancelledDelegate);
	void AddLoginCancelledDelegate(struct FScriptDelegate CancelledDelegate);
	void ClearLoginChangeDelegate(struct FScriptDelegate LoginDelegate);
	void AddLoginChangeDelegate(struct FScriptDelegate LoginDelegate);
	bool ShowFriendsUI(uint8_t LocalUserNum);
	bool IsMuted(uint8_t LocalUserNum, struct FUniqueNetId PlayerID);
	bool AreAnyFriends(uint8_t LocalUserNum, TArray<struct FFriendsQuery>& Query);
	bool IsFriend(uint8_t LocalUserNum, struct FUniqueNetId PlayerID);
	bool CanShowPresenceInformation(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	bool CanViewPlayerProfiles(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	bool CanPurchaseContent(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	bool CanDownloadUserContent(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	EFeaturePrivilegeLevel CanCommunicate(uint8_t LocalUserNum, ECommunicationMethod CommMethod, bool optionalBAttemptToResolve);
	bool CanPlayOnline(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	class FString GetPlayerNickname(uint8_t LocalUserNum);
	bool GetUniquePlayerId(uint8_t LocalUserNum, struct FUniqueNetId& PlayerID);
	ELoginStatus GetLoginStatus(uint8_t LocalUserNum);
	void ClearLogoutCompletedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LogoutDelegate);
	void AddLogoutCompletedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LogoutDelegate);
	void OnLogoutCompleted(bool bWasSuccessful);
	bool Logout(uint8_t LocalUserNum);
	void ClearLoginFailedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LoginFailedDelegate);
	void AddLoginFailedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LoginFailedDelegate);
	void OnReceievedPinGrantCode(EPinGrantResult Result, uint8_t LocalUserNum, class FString Code, class FString URL, int32_t SecondsUntilExpiration);
	void OnLoginFailed(uint8_t LocalUserNum, EOnlineServerConnectionStatus ErrorCode);
	bool AutoLogin();
	bool Login(uint8_t LocalUserNum, class FString LoginName, class FString Password, bool optionalBWantsLocalOnly);
	bool ShowLoginUI(uint8_t LocalUserNum, bool optionalBShowOnlineOnly);
	void OnFriendsChange();
	void OnMutingChange();
	void OnLoginCancelled();
	void OnLoginChange(uint8_t LocalUserNum);
	void OnPlayerUnblocked(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, class UError* Error);
	void OnPlayerBlocked(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, class UError* Error);
	void OnBlockListUpdated(uint8_t LocalUserNum);
};

// Class OnlineSubsystemEOS.OnlineStatsInterfaceEOS
// 0x0068 (0x0060 - 0x00C8)
class UOnlineStatsInterfaceEOS : public UObject
{
public:
	struct FPointer                                    StatsHandle;                                   // 0x0060 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                            // 0x0068 (0x0008) [0x0000000000000000]               
	TArray<struct FScriptDelegate>                     ReadStatsDelegates;                            // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;         // 0x0080 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;        // 0x0098 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;    // 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.OnlineStatsInterfaceEOS");
		}

		return uClassPointer;
	};

	bool RegisterStatGuid(struct FUniqueNetId PlayerID, class FString& ClientStatGuid);
	class FString GetClientStatGuid();
	void ClearRegisterHostStatGuidCompleteDelegateDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate);
	void AddRegisterHostStatGuidCompleteDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate);
	void OnRegisterHostStatGuidComplete(bool bWasSuccessful);
	bool RegisterHostStatGuid(class FString& HostStatGuid);
	class FString GetHostStatGuid();
	bool WriteOnlinePlayerScores(struct FName SessionName, int32_t LeaderboardId, TArray<struct FOnlinePlayerScore>& PlayerScores);
	void ClearFlushOnlineStatsCompleteDelegate(struct FScriptDelegate FlushOnlineStatsCompleteDelegate);
	void AddFlushOnlineStatsCompleteDelegate(struct FScriptDelegate FlushOnlineStatsCompleteDelegate);
	void OnFlushOnlineStatsComplete(struct FName SessionName, bool bWasSuccessful);
	bool FlushOnlineStats(struct FName SessionName);
	bool WriteOnlineStats(struct FName SessionName, struct FUniqueNetId Player, class UOnlineStatsWrite* StatsWrite);
	void FreeStats(class UOnlineStatsRead* StatsRead);
	void ClearReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate);
	void AddReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate);
	void OnReadOnlineStatsComplete(bool bWasSuccessful);
	bool ReadOnlineStatsByRankAroundPlayer(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead, int32_t optionalNumRows);
	bool ReadOnlineStatsByRank(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead, int32_t optionalStartIndex, int32_t optionalNumToRead);
	bool ReadOnlineStatsForFriends(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead);
	bool ReadOnlineStats(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>& Players);
};

// Class OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS
// 0x00B8 (0x0060 - 0x0118)
class UOnlineUserCloudFileInterfaceEOS : public UObject
{
public:
	struct FPointer                                    PDSHandle;                                     // 0x0060 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	int32_t                                            LastReadFileErrorCode;                         // 0x0068 (0x0004) [0x0000000000003000] (CPF_Native | CPF_Transient)
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                            // 0x0070 (0x0008) [0x0000000000000000]               
	TArray<struct FScriptDelegate>                     EnumerateUserFileCompleteDelegates;            // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadUserFileCompleteDelegates;                 // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteUserFileCompleteDelegates;                // 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     DeleteUserFileCompleteDelegates;               // 0x00A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnEnumerateUserFilesComplete__Delegate;      // 0x00B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadUserFileComplete__Delegate;            // 0x00D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWriteUserFileComplete__Delegate;           // 0x00E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteUserFileComplete__Delegate;          // 0x0100 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS");
		}

		return uClassPointer;
	};

	void ClearAllDelegates();
	void ClearDeleteUserFileCompleteDelegate(struct FScriptDelegate DeleteUserFileCompleteDelegate);
	void AddDeleteUserFileCompleteDelegate(struct FScriptDelegate DeleteUserFileCompleteDelegate);
	bool DeleteUserFile(class FString UserId, class FString Filename, bool bShouldCloudDelete, bool bShouldLocallyDelete);
	void OnDeleteUserFileComplete(bool bWasSuccessful, class FString UserId, class FString Filename);
	void ClearWriteUserFileCompleteDelegate(struct FScriptDelegate WriteUserFileCompleteDelegate);
	void AddWriteUserFileCompleteDelegate(struct FScriptDelegate WriteUserFileCompleteDelegate);
	bool WriteUserFile(class FString UserId, class FString Filename, TArray<uint8_t>& FileContents);
	void OnWriteUserFileComplete(bool bWasSuccessful, class FString UserId, class FString Filename);
	void ClearReadUserFileCompleteDelegate(struct FScriptDelegate ReadUserFileCompleteDelegate);
	void AddReadUserFileCompleteDelegate(struct FScriptDelegate ReadUserFileCompleteDelegate);
	bool ReadUserFile(class FString UserId, class FString Filename);
	void OnReadUserFileComplete(bool bWasSuccessful, class FString UserId, class FString Filename);
	void GetUserFileList(class FString UserId, TArray<struct FEmsFile>& UserFiles);
	void ClearEnumerateUserFileCompleteDelegate(struct FScriptDelegate EnumerateUserFileCompleteDelegate);
	void AddEnumerateUserFileCompleteDelegate(struct FScriptDelegate EnumerateUserFileCompleteDelegate);
	void EnumerateUserFiles(class FString UserId);
	void OnEnumerateUserFilesComplete(bool bWasSuccessful, class FString UserId);
	bool ClearFile(class FString UserId, class FString Filename);
	bool ClearFiles(class FString UserId);
	bool GetFileContents(class FString UserId, class FString Filename, TArray<uint8_t>& FileContents);
};

// Class OnlineSubsystemEOS.OnlineVoiceInterfaceEOS
// 0x0238 (0x0060 - 0x0298)
class UOnlineVoiceInterfaceEOS : public UObject
{
public:
	struct FPointer                                    RTCHandle;                                     // 0x0060 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    RTCAudioHandle;                                // 0x0068 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    RTCAdminHandle;                                // 0x0070 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    EULATrackingHandle;                            // 0x0078 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                            // 0x0080 (0x0008) [0x0000000000000000]               
	TArray<struct FVoiceAudioDevice>                   InputAudioDevices;                             // 0x0088 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	TArray<struct FVoiceAudioDevice>                   OutputAudioDevices;                            // 0x0098 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	struct FMap_Mirror                                 AccountsAcceptedVoiceModerationEULAMap;        // 0x00A8 (0x0050) [0x0000004000001000] (CPF_Native)  
	TArray<class FString>                              AccountsWithAgreementResponse;                 // 0x00F8 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	struct FMap_Mirror                                 ProductUserIdToEpicUserIdMap;                  // 0x0108 (0x0050) [0x0000004000001000] (CPF_Native)  
	struct FMap_Mirror                                 PendingEpicIdQueries;                          // 0x0158 (0x0050) [0x0000004000001000] (CPF_Native)  
	struct FScriptDelegate                             __EventLeftVoiceRoom__Delegate;                // 0x01A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventJoinedVoiceRoom__Delegate;              // 0x01C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventRemovedFromVoiceRoom__Delegate;         // 0x01D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerJoinedVoiceRoom__Delegate;        // 0x01F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerLeftVoiceRoom__Delegate;          // 0x0208 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerStatusChanged__Delegate;          // 0x0220 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerVoiceAgreementStatusChanged__Delegate;// 0x0238 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventVoiceRecordingStatusChanged__Delegate;  // 0x0250 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerTalkingStateChange__Delegate;        // 0x0268 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;             // 0x0280 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.OnlineVoiceInterfaceEOS");
		}

		return uClassPointer;
	};

	bool SetVoiceReceiveVolume(float VoiceVolume);
	bool UnmuteAll(uint8_t LocalUserNum);
	bool MuteAll(uint8_t LocalUserNum, bool bAllowFriends);
	bool SetSpeechRecognitionObject(uint8_t LocalUserNum, class USpeechRecognition* SpeechRecogObj);
	bool SelectVocabulary(uint8_t LocalUserNum, int32_t VocabularyId);
	void ClearRecognitionCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RecognitionDelegate);
	void AddRecognitionCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RecognitionDelegate);
	bool GetRecognitionResults(uint8_t LocalUserNum, TArray<struct FSpeechRecognizedWord>& Words);
	bool StopSpeechRecognition(uint8_t LocalUserNum);
	bool StartSpeechRecognition(uint8_t LocalUserNum);
	void StopNetworkedVoice(uint8_t LocalUserNum);
	void StartNetworkedVoice(uint8_t LocalUserNum);
	void ClearPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate);
	void AddPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate);
	bool UnmuteRemoteTalker(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, bool optionalBIsSystemWide);
	bool MuteRemoteTalker(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, bool optionalBIsSystemWide);
	bool SetRemoteTalkerPriority(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, int32_t Priority);
	bool IsHeadsetPresent(uint8_t LocalUserNum);
	bool IsRemotePlayerTalking(struct FUniqueNetId PlayerID);
	bool IsLocalPlayerTalking(uint8_t LocalUserNum);
	bool UnregisterRemoteTalker(struct FUniqueNetId PlayerID);
	bool RegisterRemoteTalker(struct FUniqueNetId PlayerID);
	bool UnregisterLocalTalker(uint8_t LocalUserNum);
	bool RegisterLocalTalker(uint8_t LocalUserNum);
	void OnRecognitionComplete();
	void OnPlayerTalkingStateChange(struct FUniqueNetId Player, bool bIsTalking);
	void StopRecording(class FString& EpicAccountId);
	void StartRecording(class FString& EpicAccountId, class FString& RoomName);
	bool HasPlayerRespondedToVoiceAgreement(class FString& LocalEpicAccountId);
	EPlayerVoiceAgreementStatus GetVoiceAgreementStatusForPlayer(class FString& LocalEpicAccountId);
	bool HasPlayerAcceptedVoiceAgreement(class FString& LocalEpicAccountId);
	bool CheckAllPlayersAcceptedVoiceModerationAgreement();
	void eventSubscribeToLoginChanges();
	void OnLogout(class FString& EpicAccountId);
	void OnLoginChange(uint8_t LocalUserNum);
	void SetPlayerBlockStatus(bool bBlocked, class FString& LocalEpicAccountId, class FString& TargetEpicAccountId, class FString& RoomName);
	void SetPlayerMuteStatus(bool bMuted, class FString& LocalEpicAccountId, class FString& TargetEpicAccountId, class FString& RoomName);
	EPlayerVoiceTransitionState GetUserState(class FString& EpicAccountId);
	class FString GetCurrentRoomNameForUser(class FString& EpicAccountId);
	bool LeaveVoiceRoom(class FString& EpicAccountId, class FString& RoomName);
	bool JoinVoiceRoom(class FString& EpicAccountId, class FString& RoomName, class FString& ClientBaseUrl, class FString& JoinToken);
	bool SetAudioOutputDevice(float OutputVolume, class FString& EpicAccountId, class FString& DeviceID);
	bool SetAudioInputDevice(float InputVolume, class FString& EpicAccountId, class FString& DeviceID);
	void SetLocalPlayerRegisteredStatus(bool bRegister, class FString& PlatformId);
	void CacheOutputAudioDevices();
	void CacheInputAudioDevices();
	void Init();
	void EventVoiceRecordingStatusChanged(bool bRecording);
	void EventPlayerVoiceAgreementStatusChanged(class FString EpicAccountId, bool bAccepted, bool bNewAgreement);
	void EventPlayerStatusChanged(class FString EpicAccountId, class FString RoomName, struct FVoiceRoomMemberStatus MemberStatus);
	void EventPlayerLeftVoiceRoom(class FString EpicAccountId, class FString RoomName);
	void EventPlayerJoinedVoiceRoom(class FString EpicAccountId, class FString RoomName);
	void EventRemovedFromVoiceRoom(class FString EpicAccountId, class FString RoomName, EVoiceResultCode RemovedResult);
	void EventJoinedVoiceRoom(class FString EpicAccountId, class FString RoomName, EVoiceResultCode JoinResult);
	void EventLeftVoiceRoom(class FString EpicAccountId, class FString RoomName, EVoiceResultCode LeaveResult);
};

// Class OnlineSubsystemEOS.VideoRecorderEOS
// 0x0008 (0x0060 - 0x0068)
class UVideoRecorderEOS : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.VideoRecorderEOS");
		}

		return uClassPointer;
	};

};

// Class OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__LinkedAccount_0x1
// 0x0004 (0x0060 - 0x0064)
class U__OnlinePlayerInterfaceEOS__LinkedAccount_0x1 : public UObject
{
public:
	int32_t                                            LocalUserNum;                                  // 0x0060 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__LinkedAccount_0x1");
		}

		return uClassPointer;
	};

	void __OnlinePlayerInterfaceEOS__LinkedAccount_0x1(int32_t _, class FString PlatformAuthTicket);
};

// Class OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1
// 0x0020 (0x0060 - 0x0080)
class U__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1 : public UObject
{
public:
	int32_t                                            LocalUserNum;                                  // 0x0060 (0x0004) [0x0000000000000000]               
	struct FScriptDelegate                             Callback;                                      // 0x0068 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1");
		}

		return uClassPointer;
	};

	void __OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1(bool bSuccess, class FString Code);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
