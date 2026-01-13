/*
#############################################################################################
# Rocket League SDK (RLSDK) Season 20 (v2.61)
# Generated with CodeRedGenerator v1.1.5 on 11/05/2025 07:11PM
# ========================================================================================= #
# File: OnlineSubsystemEOS_classes.hpp
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
// 0x0360 (0x03C0 - 0x0720)
class UOnlineSubsystemEOS : public UOnlineSubsystemCommonImpl
{
public:
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                            // 0x03C0 (0x0008) [0x0000000000000000]               
	class UOnlineGameInterfaceEOS*                     GameInterfaceEOS;                              // 0x03C8 (0x0008) [0x0000000000000000]               
	class UOnlineStatsInterfaceEOS*                    StatsInterfaceEOS;                             // 0x03D0 (0x0008) [0x0000000000000000]               
	class UOnlineAuthInterfaceEOS*                     AuthInterfaceEOS;                              // 0x03D8 (0x0008) [0x0000000000000000]               
	class UOnlinePersistentAuthInterfaceEOS*           PersistentAuthInterfaceEOS;                    // 0x03E0 (0x0008) [0x0000000000000000]               
	class UOnlineFriendsInterfaceEOS*                  FriendsInterfaceEOS;                           // 0x03E8 (0x0008) [0x0000000000000000]               
	class UOnlineUserCloudFileInterfaceEOS*            UserCloudFileInterfaceEOS;                     // 0x03F0 (0x0008) [0x0000000000000000]               
	class UOnlineVoiceInterfaceEOS*                    VoiceInterfaceEOS;                             // 0x03F8 (0x0008) [0x0000000000000000]               
	class UOnlineGameClipsInterfaceEOS*                GameClipsInterfaceEOS;                         // 0x0400 (0x0008) [0x0000000000000000]               
	class TArray<struct FScriptDelegate>               SpeechRecognitionCompleteDelegates;            // 0x0408 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPointer                                    AuthHandle;                                    // 0x0418 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    FriendsHandle;                                 // 0x0420 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    UserInfoHandle;                                // 0x0428 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    PresenceHandle;                                // 0x0430 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    ConnectHandle;                                 // 0x0438 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    SessionsHandle;                                // 0x0440 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    PDSHandle;                                     // 0x0448 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    StatsHandle;                                   // 0x0450 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    AchievementsHandle;                            // 0x0458 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    EcomHandle;                                    // 0x0460 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    UIHandle;                                      // 0x0468 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    RTCHandle;                                     // 0x0470 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    RTCAudioHandle;                                // 0x0478 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    RTCAdminHandle;                                // 0x0480 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    GameClipsHandle;                               // 0x0488 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    EULATrackingHandle;                            // 0x0490 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class TArray<class FName>                          UnlockedDLC;                                   // 0x0498 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               UnlockedDLCDelegates;                          // 0x04A8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ExternalUIChangeDelegates;                     // 0x04B8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnMicroTxnResponse__Delegate;                // 0x04C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventGetAppPriceInfoComplete__Delegate;      // 0x04E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerTalking__Delegate;                   // 0x04F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;             // 0x0510 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;         // 0x0528 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;    // 0x0540 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;        // 0x0558 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                // 0x0570 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                // 0x0588 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnControllerChange__Delegate;                // 0x05A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;          // 0x05B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;             // 0x05D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateOnlineAccountCompleted__Delegate;    // 0x05E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerTalkingStateChange__Delegate;        // 0x0600 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCloseKickPlayerDialog__Delegate;           // 0x0618 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCommerceDialogClosed__Delegate;            // 0x0630 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnErrorDialogClosed__Delegate;               // 0x0648 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnlockedDLCChange__Delegate;               // 0x0660 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnStorePurchaseCompleteDelegate__Delegate;   // 0x0678 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUserOrphaned__Delegate;                    // 0x0690 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUserRestored__Delegate;                    // 0x06A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerSigningOut__Delegate;                // 0x06C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventCryptoKeyCreated__Delegate;             // 0x06D8 (0x0018) [0x0001000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventTextMessageSigned__Delegate;            // 0x06F0 (0x0018) [0x0001000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventTextMessageValidated__Delegate;         // 0x0708 (0x0018) [0x0001000000400000] (CPF_NeedCtorLink)

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

	void EventTextMessageValidated(bool bMessageValid, int32_t RequestID);
	void EventTextMessageSigned(const class FString& Signature, int32_t RequestID);
	void EventCryptoKeyCreated(const class FString& EpicAccountId, const class FString& PublicKey);
	void ValidateTextMessage(int32_t RequestID, class FString& outMessage, class FString& outPublicKey, class FString& outSignature);
	void SignTextMessage(int32_t RequestID, class FString& outEpicAccountId, class FString& outMessage);
	void GenerateCryptoKeyForUser(class FString& outEpicAccountId);
	void ShowEOSVoiceAgreement(uint8_t LocalUserNum);
	void ShowEOSOverlay(uint8_t LocalUserNum);
	void ShowEOSOverlayReportVoice();
	void TickEOSPlatform(float DeltaTime);
	bool ManuallyTickEOSPlatform();
	class FString eventFormatCurrency(const class FString& Currency, int32_t Price);
	void ClearMicroTxnResponseDelegate(const struct FScriptDelegate& ResponseMicroTxnDelegate);
	void AddMicroTxnResponseDelegate(const struct FScriptDelegate& ResponseMicroTxnDelegate);
	bool GetAppPriceInfo(const struct FScriptDelegate& Callback, struct FUniqueNetId& outPlayerID, class TArray<class FName>& outAppNames);
	bool HandleBootMessage();
	bool GetOverlayEnabled();
	void ClearPlayerSigningOutDelegate(const struct FScriptDelegate& InDelegate);
	void AddPlayerSigningOutDelegate(const struct FScriptDelegate& InDelegate);
	void OnPlayerSigningOut(uint8_t LocalUserNum);
	bool RefreshNetworkErrorToggle();
	void ClearUserRestoredDelegate(const struct FScriptDelegate& UserRestoredDelegate);
	void AddUserRestoredDelegate(const struct FScriptDelegate& UserRestoredDelegate);
	void OnUserRestored(uint8_t ControllerId);
	void ClearUserOrphanedDelegate(const struct FScriptDelegate& UserOrphanedDelegate);
	void AddUserOrphanedDelegate(const struct FScriptDelegate& UserOrphanedDelegate);
	void OnUserOrphaned(uint8_t ControllerId);
	void OpenStoreForItemsAsync(uint8_t LocalUserNum, const class TArray<class FString>& Targets, const struct FScriptDelegate& OnStorePurchaseCompleteDelegate);
	void OnStorePurchaseCompleteDelegate();
	void OpenStoreForItems(uint8_t LocalUserNum, const class TArray<class FString>& Targets);
	void OpenStoreForDLC(uint8_t LocalUserNum, const class FName& DLC);
	void OpenErrorDialog(uint8_t LocalUserNum, EPS4ErrorDialog ErrorCode);
	void OpenPS4DisplayMode(uint8_t LocalUserNum, EPS4DisplayMode DisplayMode, const class TArray<class FString>& optionalTargets, int32_t optionalServiceLabel);
	void ResetControllerColor(int32_t ControllerId);
	void SetControllerColor(int32_t ControllerId, const struct FColor& NewColor);
	void InitializeTrophyAPI();
	bool AnyPlayerChatRestricted();
	void ClearUnlockedDLCChangeDelegate(const struct FScriptDelegate& InDelegate);
	void AddUnlockedDLCChangeDelegate(const struct FScriptDelegate& InDelegate);
	class TArray<class FName> GetUnlockedDLC();
	void OnUnlockedDLCChange();
	void UpdateSessionStatusFromPlayers(int32_t CurrentPlayerCount, int32_t numBotPlayers);
	void ClearErrorDialogClosedDelegate(const struct FScriptDelegate& InDelegate);
	void AddErrorDialogClosedDelegate(const struct FScriptDelegate& InDelegate);
	void OnErrorDialogClosed(int32_t LocalUserNum);
	void ClearCommerceDialogClosedDelegate(const struct FScriptDelegate& InDelegate);
	void AddCommerceDialogClosedDelegate(const struct FScriptDelegate& InDelegate);
	void OnCommerceDialogClosed();
	EOnlineServerConnectionStatus GetCurrentConnectionStatus();
	void ClearCloseKickPlayerDialogDelegate(const struct FScriptDelegate& InDelegate);
	void AddCloseKickPlayerDialogDelegate(const struct FScriptDelegate& InDelegate);
	void OnCloseKickPlayerDialog();
	void OnPlayerTalkingStateChange(const struct FUniqueNetId& Player, bool bIsTalking);
	bool SetVoiceReceiveVolume(float VoiceVolume);
	int32_t GetDLCPurchaseTime(const class FName& AppName);
	bool SaveKey(const class FString& ProductKey);
	bool GetLocalAccountNames(class TArray<class FString>& outAccounts);
	bool DeleteLocalAccount(const class FString& Username, const class FString& optionalPassword);
	bool RenameLocalAccount(const class FString& NewUserName, const class FString& OldUserName, const class FString& optionalPassword);
	bool CreateLocalAccount(const class FString& Username, const class FString& optionalPassword);
	void ClearCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& AccountCreateDelegate);
	void AddCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& AccountCreateDelegate);
	void OnCreateOnlineAccountCompleted(EOnlineAccountCreateStatus ErrorStatus);
	bool CreateOnlineAccount(const class FString& Username, const class FString& Password, const class FString& EmailAddress, const class FString& optionalProductKey);
	bool IsKeyValid();
	void ClearStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate);
	void AddStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate);
	void OnStorageDeviceChange();
	ENATType GetNATType();
	void ClearConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate);
	void AddConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate);
	void OnConnectionStatusChange(EOnlineServerConnectionStatus ConnectionStatus);
	bool IsControllerConnected(int32_t ControllerId);
	void ClearControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate);
	void AddControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate);
	void OnControllerChange(int32_t ControllerId, bool bIsConnected);
	void SetNetworkNotificationPosition(ENetworkNotificationPosition NewPos);
	ENetworkNotificationPosition GetNetworkNotificationPosition();
	void NotifyExternalUIChanged(bool bIsOpening);
	void ClearExternalUIChangeDelegate(const struct FScriptDelegate& InDelegate);
	void AddExternalUIChangeDelegate(const struct FScriptDelegate& InDelegate);
	void OnExternalUIChange(bool bIsOpening);
	void ClearLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate);
	void AddLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate);
	void OnLinkStatusChange(bool bIsConnected);
	bool HasLinkConnection();
	bool RegisterStatGuid(const struct FUniqueNetId& PlayerID, class FString& outClientStatGuid);
	class FString GetClientStatGuid();
	void ClearRegisterHostStatGuidCompleteDelegateDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate);
	void AddRegisterHostStatGuidCompleteDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate);
	void OnFlushOnlineStatsComplete(const class FName& SessionName, bool bWasSuccessful);
	void OnRegisterHostStatGuidComplete(bool bWasSuccessful);
	bool RegisterHostStatGuid(class FString& outHostStatGuid);
	class FString GetHostStatGuid();
	bool WriteOnlinePlayerScores(class TArray<struct FOnlinePlayerScore>& outPlayerScores);
	void FreeStats(class UOnlineStatsRead* StatsRead);
	void ClearReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate);
	void AddReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate);
	void OnReadOnlineStatsComplete(bool bWasSuccessful);
	bool ReadOnlineStatsByRankAroundPlayer(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead, int32_t optionalNumRows);
	bool ReadOnlineStatsByRank(class UOnlineStatsRead* StatsRead, int32_t optionalStartIndex, int32_t optionalNumToRead);
	bool ReadOnlineStatsForFriends(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead);
	bool ReadOnlineStats(class UOnlineStatsRead* StatsRead, class TArray<struct FUniqueNetId>& outPlayers);
	bool UnmuteAll(uint8_t LocalUserNum);
	bool MuteAll(uint8_t LocalUserNum, bool bAllowFriends);
	bool SetSpeechRecognitionObject(uint8_t LocalUserNum, class USpeechRecognition* SpeechRecogObj);
	bool SelectVocabulary(uint8_t LocalUserNum, int32_t VocabularyId);
	void ClearRecognitionCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& RecognitionDelegate);
	void AddRecognitionCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& RecognitionDelegate);
	void OnRecognitionComplete();
	bool GetRecognitionResults(uint8_t LocalUserNum, class TArray<struct FSpeechRecognizedWord>& outWords);
	bool StopSpeechRecognition(uint8_t LocalUserNum);
	bool StartSpeechRecognition(uint8_t LocalUserNum);
	void StopNetworkedVoice(uint8_t LocalUserNum);
	void StartNetworkedVoice(uint8_t LocalUserNum);
	void ClearPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate);
	void AddPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate);
	void OnPlayerTalking(const struct FUniqueNetId& Player);
	bool UnmuteRemoteTalker(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool MuteRemoteTalker(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool SetRemoteTalkerPriority(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID, int32_t Priority);
	bool IsHeadsetPresent(uint8_t LocalUserNum);
	bool IsRemotePlayerTalking(const struct FUniqueNetId& PlayerID);
	bool IsLocalPlayerTalking(uint8_t LocalUserNum);
	bool UnregisterRemoteTalker(const struct FUniqueNetId& PlayerID);
	bool RegisterRemoteTalker(const struct FUniqueNetId& PlayerID);
	bool UnregisterLocalTalker(uint8_t LocalUserNum);
	bool RegisterLocalTalker(uint8_t LocalUserNum);
	struct FUniqueNetId eventGetPlayerUniqueNetIdFromIndex(int32_t UserIndex);
	class FString eventGetPlayerNicknameFromIndex(int32_t UserIndex);
	bool eventInit();
	bool InitEOS(class FString& outSandboxId, class FString& outDeploymentId);
	void EventGetAppPriceInfoComplete(const class FName& AppName, const class FString& Price, const class FString& DiscountPrice, int32_t DiscountPercentage);
	void OnMicroTxnResponse(bool bAuthorized, uint64_t OrderId);
};

// Class OnlineSubsystemEOS.OnlineAuthInterfaceEOS
// 0x0008 (0x03C8 - 0x03D0)
class UOnlineAuthInterfaceEOS : public UOnlineAuthInterfaceImpl
{
public:
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                            // 0x03C8 (0x0008) [0x0000004000000000] (CPF_PrivateWrite)

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
	bool RequestAuthTicket(const struct FUniqueNetId& PlayerID, const struct FScriptDelegate& Callback);
	bool RequestMtxCode(const struct FUniqueNetId& PlayerID, const struct FScriptDelegate& Callback);
};

// Class OnlineSubsystemEOS.OnlineFriendsInterfaceEOS
// 0x0008 (0x0080 - 0x0088)
class UOnlineFriendsInterfaceEOS : public UOnlineFriendsInterfaceImpl
{
public:
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                            // 0x0080 (0x0008) [0x0000004000000000] (CPF_PrivateWrite)

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

	bool GetActivePlatformId(uint8_t LocalUserNum, const struct FUniqueNetId& AccountId, struct FUniqueNetId& outPlatformId);
	bool RequestLinkedAccounts(uint8_t LocalUserNum, const class TArray<struct FUniqueNetId>& AccountIds, const struct FScriptDelegate& Callback);
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

	void NotifyEventClipErrorOccurred(const struct FScriptDelegate& InCallback);
	void EventClipErrorOccurred(const class FString& InEpicAccountId, int32_t ClipId, class UErrorType* InErrorType);
	void NotifyEventGeneralErrorOccurred(const struct FScriptDelegate& InCallback);
	void EventGeneralErrorOccurred(class UErrorType* InErrorType);
	void NotifyEventMaskStatusChanged(const struct FScriptDelegate& InCallback);
	void EventMaskStatusChanged(uint64_t InMaskAreaHandle, const struct FGameClipsMaskArea& InMaskArea, EGameClipsMaskStatus InNewMaskStatus);
	void NotifyEventClipStatusChanged(const struct FScriptDelegate& InCallback);
	void EventClipStatusChanged(const class FString& InEpicAccountId, int32_t InClipId, EGameClipsClipStatus InNewClipStatus);
	void NotifyEventConnectionStatusChanged(const struct FScriptDelegate& InCallback);
	void EventConnectionStatusChanged(const class FString& InEpicAccountId, EGameClipsConnection InConnection, EGameClipsConnectionStatus InNewConnectionStatus);
	void NotifyEventRecordingChanged(const struct FScriptDelegate& InCallback);
	void EventRecordingChanged(EGameClipsRecording InNewRecording);
	void NotifyEventAvailabilityChanged(const struct FScriptDelegate& InCallback);
	void EventAvailabilityChanged(EGameClipsAvailability InNewAvailability);
	bool IsUploading();
	bool IsRecording();
	bool IsAvailable();
	float GetTimeUntilUnthrottled(const class FString& InEpicAccountId);
	bool IsClipUploadingLimitReached(const class FString& InEpicAccountId);
	void SetUserMaxClipUploadsPerMinute(int32_t InMaxClipUploadsPerMinute);
	bool IsAccountLinked(const class FString& InEpicAccountId);
	int32_t CreateClip(const class FString& InEpicAccountId, const class FString& InClipType);
	void DisableMaskArea(uint64_t InMaskAreaHandle);
	uint64_t EnableMaskArea(struct FGameClipsMaskArea& outInMaskArea);
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

	bool AcceptGameInvite(uint8_t LocalUserNum, const class FName& SessionName);
	bool FreeSearchResults(class UOnlineGameSearch* Search);
	bool UpdateOnlineGame(const class FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool optionalBShouldRefreshOnlineData);
};

// Class OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS
// 0x0008 (0x00B8 - 0x00C0)
class UOnlinePersistentAuthInterfaceEOS : public UOnlinePersistentAuthInterfaceImpl
{
public:
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                            // 0x00B8 (0x0008) [0x0000004000000000] (CPF_PrivateWrite)

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

	bool AuthWithNintendoAccountToken(uint8_t LocalUserNum, class FString& outNintendoAccountToken);
	uint64_t GetTimeUntilAuthExpiration(uint8_t LocalUserNum);
	class UDateTime* GetAuthExpirationTimestamp(uint8_t LocalUserNum);
	bool LaunchAccountPortal(uint8_t LocalUserNum);
	class FString GetClientSecret();
	class FString GetClientID();
	class FString GetClientCredentials();
	class FString GetContinuanceToken(uint8_t LocalUserNum);
	bool UseRefreshToken(uint8_t LocalUserNum, const class FString& RefreshToken);
	class FString GetRefreshToken(uint8_t LocalUserNum);
	bool RequestPinGrantCode(uint8_t LocalUserNum);
};

// Class OnlineSubsystemEOS.OnlinePlayerInterfaceEOS
// 0x0650 (0x0060 - 0x06B0)
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
	uint8_t                                          UnknownData00[0x4];                            // 0x00BC (0x0004) MISSED OFFSET
	class FString                                      ProfileDataDirectory;                          // 0x00C0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      ProfileDataExtension;                          // 0x00D0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ReadProfileSettingsDelegates;                  // 0x00E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               WriteProfileSettingsDelegates;                 // 0x00F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UOnlineProfileSettings*                      CachedProfile;                                 // 0x0100 (0x0008) [0x0000000000000000]               
	class TArray<struct FOnlineProfileSetting>         LastProfileSettings;                           // 0x0108 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ReadFriendsDelegates;                          // 0x0118 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	EOnlineEnumerationReadState                        FriendsReadState;                              // 0x0128 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData01[0x7];                            // 0x0129 (0x0007) MISSED OFFSET
	class TArray<struct FScriptDelegate>               FriendsChangeDelegates;                        // 0x0130 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               LoginFailedDelegates;                          // 0x0140 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               LoginCancelledDelegates;                       // 0x0150 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               LogoutCompletedDelegates;                      // 0x0160 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               MutingChangeDelegates;                         // 0x0170 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FOnlineStatusMappingEOS>       StatusMappings;                                // 0x0180 (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	class FString                                      DefaultStatus;                                 // 0x0190 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ReceivedGameInviteDelegates;                   // 0x01A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FOnlineFriendMessage>          CachedFriendMessages;                          // 0x01B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               JoinFriendGameCompleteDelegates;               // 0x01C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               AchievementDelegates;                          // 0x01D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               AchievementReadDelegates;                      // 0x01E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPointer                                    AchievementsHandle;                            // 0x01F0 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class TArray<struct FScriptDelegate>               LoginChangeDelegates;                          // 0x01F8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ReceivedPinGrantDelegates;                     // 0x0208 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               BlockListUpdatedDelegates;                     // 0x0218 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               PlayerBlockedDelegates;                        // 0x0228 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               PlayerUnblockedDelegates;                      // 0x0238 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
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
	struct FScriptDelegate                             __OnSanitizeStringComplete__Delegate;          // 0x0668 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EpicIDToPlatformIDCallback__Delegate;        // 0x0680 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendInviteAccepted__Delegate;            // 0x0698 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

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

	void AddFriendInviteAcceptedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& InviteAccepted);
	void OnFriendInviteAccepted(const struct FUniqueNetId& AcceptingPlayerId);
	bool ReadBlockList(uint8_t LocalUserNum);
	void GetBlockList(uint8_t LocalUserNum, class TArray<struct FOnlineFriend>& outOutBlockList);
	void AddPlayerUnblockedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& InDelegate);
	void AddPlayerBlockedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& InDelegate);
	void AddBlockListUpdatedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& InDelegate);
	void EpicIDToPlatformID(const struct FUniqueNetId& EpicAccountId, EOnlinePlatform TargetPlatform, const struct FScriptDelegate& Callback);
	void EpicIDToPlatformIDCallback(const struct FUniqueNetId& PlatformAccountId, const class FString& Error);
	struct FUniqueNetId GetEpicAccountId(const struct FUniqueNetId& PlatformId);
	bool ShowInviteUI(uint8_t LocalUserNum, const class FString& optionalInviteText);
	bool ShowGamerCardUI(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID);
	void SetRichPresence(uint8_t LocalUserNum, const class FString& PresenceString, const class FString& GameDataString);
	void GetFriendPresence(struct FOnlineFriend& outFriendData);
	bool RecordPlayersRecentlyMet(uint8_t LocalUserNum, const class FString& GameDescription, class TArray<struct FUniqueNetId>& outPlayers);
	bool WordFilterSanitizeString(const class FString& Comment, const struct FScriptDelegate& SanitizeDelegate, const struct FUniqueNetId& optionalPlayerID);
	void OnSanitizeStringComplete(const struct FWordFilterResult& Result);
	bool HideKeyboardUI(uint8_t LocalUserNum);
	class FString GetPlayerCountry(uint8_t LocalUserNum);
	void ClearAvatarChangeDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& AvatarDelegate);
	void AddAvatarChangeDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& AvatarDelegate);
	void ClearFriendPresenceChangeDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& PresenceDelegate);
	void eventAddFriendPresenceChangeDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& PresenceDelegate);
	void FriendPresenceChange(const struct FUniqueNetId& PlayerID);
	void OnAvatarChange(const struct FUniqueNetId& PlayerID);
	bool UnlockAchievement(uint8_t LocalUserNum, int32_t AchievementId, float optionalPercentComplete);
	bool ReadAchievements(uint8_t LocalUserNum, int32_t optionalTitleId, bool optionalBShouldReadText, bool optionalBShouldReadImages);
	EOnlineEnumerationReadState GetAchievements(uint8_t LocalUserNum, int32_t optionalTitleId, class TArray<struct FAchievementDetails>& outAchievements);
	void ClearReadAchievementsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& InDelegate);
	void ClearUnlockAchievementCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& InDelegate);
	void AddReadAchievementsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& InDelegate);
	void AddUnlockAchievementCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& InDelegate);
	void OnReadAchievementsComplete(int32_t TitleId);
	void OnUnlockAchievementComplete(bool bWasSuccessful);
	bool ShowControllerUI();
	class FString GetPlayerLanguage(uint8_t LocalUserNum);
	bool ShowPlayersUI(uint8_t LocalUserNum);
	void ClearProfileDataChangedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate);
	void AddProfileDataChangedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate);
	void OnProfileDataChanged();
	bool UnlockGamerPicture(uint8_t LocalUserNum, int32_t PictureId);
	bool IsDeviceValid(int32_t DeviceID);
	int32_t GetDeviceSelectionResults(uint8_t LocalUserNum, class FString& outDeviceName);
	void ClearDeviceSelectionDoneDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& DeviceDelegate);
	void AddDeviceSelectionDoneDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& DeviceDelegate);
	void OnDeviceSelectionComplete(bool bWasSuccessful);
	bool ShowDeviceSelectionUI(uint8_t LocalUserNum, int32_t SizeNeeded, bool optionalBForceShowUI);
	bool ShowCustomPlayersUI(uint8_t LocalUserNum, const class FString& Title, const class FString& Description, class TArray<struct FUniqueNetId>& outPlayers);
	bool IsUserSwitchActive();
	void SetKickPlayerDialogActive(bool Active);
	void SetKickPreviousUser(uint8_t LocalUserNum);
	bool ShowLoginUIForOrphanedUser(uint8_t LocalUserNum);
	class TArray<uint32_t> GetSyncedAchievements(uint8_t LocalUserNum);
	bool IsGuestLogin(uint8_t LocalUserNum);
	void RequestRestrictedFeatureMessaging(uint8_t LocalUserNum, EFeaturePrivilege RestrictedFeature);
	bool CanCommunicateVoice(uint8_t LocalUserNum, bool optionalBAttemptToResolve, const class FString& optionalReason, EFeaturePrivilegeLevel& outPrivilegeLevelHint);
	bool CanCommunicateVideo(uint8_t LocalUserNum, bool optionalBAttemptToResolve, const class FString& optionalReason, EFeaturePrivilegeLevel& outPrivilegeLevelHint);
	bool CanCommunicateText(uint8_t LocalUserNum, bool optionalBAttemptToResolve, const class FString& optionalReason, EFeaturePrivilegeLevel& outPrivilegeLevelHint);
	bool CanShareUserCreatedContent(uint8_t LocalUserNum, bool optionalBAttemptToResolve, const class FString& optionalReason, EFeaturePrivilegeLevel& outPrivilegeLevelHint);
	bool CanAccessPremiumVideoContent(uint8_t LocalUserNum, bool optionalBAttemptToResolve, const class FString& optionalReason, EFeaturePrivilegeLevel& outPrivilegeLevelHint);
	bool CanAccessPremiumContent(uint8_t LocalUserNum, bool optionalBAttemptToResolve, const class FString& optionalReason, EFeaturePrivilegeLevel& outPrivilegeLevelHint);
	bool CanUseCloudStorage(uint8_t LocalUserNum, bool optionalBAttemptToResolve, const class FString& optionalReason, EFeaturePrivilegeLevel& outPrivilegeLevelHint);
	bool CanRecordDVRClips(uint8_t LocalUserNum, bool optionalBAttemptToResolve, const class FString& optionalReason, EFeaturePrivilegeLevel& outPrivilegeLevelHint);
	bool CanBrowseInternet(uint8_t LocalUserNum, bool optionalBAttemptToResolve, const class FString& optionalReason, EFeaturePrivilegeLevel& outPrivilegeLevelHint);
	bool CanShareWithSocialNetwork(uint8_t LocalUserNum, bool optionalBAttemptToResolve, const class FString& optionalReason, EFeaturePrivilegeLevel& outPrivilegeLevelHint);
	bool CanShareKinectContent(uint8_t LocalUserNum, bool optionalBAttemptToResolve, const class FString& optionalReason, EFeaturePrivilegeLevel& outPrivilegeLevelHint);
	bool CanUploadFitnessData(uint8_t LocalUserNum, bool optionalBAttemptToResolve, const class FString& optionalReason, EFeaturePrivilegeLevel& outPrivilegeLevelHint);
	void SetPrimaryPlayerGamepadToLastInput();
	void ClearUserSwitchCompleteDelegate(const struct FScriptDelegate& UserSwitchCompleteDelegate);
	void AddUserSwitchCompleteDelegate(const struct FScriptDelegate& UserSwitchCompleteDelegate);
	void OnUserSwitchComplete(uint8_t LocalUserNum);
	void ClearLoginStatusChangeDelegate(const struct FScriptDelegate& InDelegate, uint8_t LocalUserNum);
	void AddLoginStatusChangeDelegate(const struct FScriptDelegate& InDelegate, uint8_t LocalUserNum);
	void OnLoginStatusChange(ELoginStatus NewStatus, const struct FUniqueNetId& NewId);
	bool GetPlayHistoryRegistrationKey(class TArray<uint8_t>& outKey);
	bool CheckParentalControlInfo(bool bShowUi);
	class TArray<class FName> GetActiveDiscDLC();
	void SetOnlineSubscriptionRequirement(bool bRequiresOnlineSubscription);
	int32_t GetControllerID(int32_t LocalPlayerNum);
	class TArray<class FName> GetConnectedControllerNames();
	void OnLocalPlayerRemoved(int32_t LocalPlayerNum);
	void UnregisterController(int32_t LocalPlayerNum);
	void RegisterController(int32_t LocalPlayerNum, int32_t optionalControllerId);
	bool CanRegisterController(int32_t LocalPlayerNum);
	bool ShowBindings(int32_t ControllerId);
	void SetControllerLayout(int32_t ControllerId, const class FName& LayoutName);
	void SetInputAPI(EInputAPI TargetAPI);
	void ClearInputAPIChangedDelegate(const struct FScriptDelegate& InputAPIChangedDelegate);
	void AddInputAPIChangedDelegate(const struct FScriptDelegate& InputAPIChangedDelegate);
	void OnInputAPIChanged(EInputAPI TargetAPI);
	void ClearUnregisteredControllerDelegate(const struct FScriptDelegate& UnregisteredControllerDelegate);
	void ClearRegisteredControllerDelegate(const struct FScriptDelegate& RegisteredControllerDelegate);
	void AddUnregisteredControllerDelegate(const struct FScriptDelegate& UnregisteredControllerDelegate);
	void AddRegisteredControllerDelegate(const struct FScriptDelegate& RegisteredControllerDelegate);
	void OnUnregisteredController(int32_t LocalPlayerNum);
	void OnRegisteredController(int32_t LocalPlayerNum, int32_t ControllerId);
	bool AddInGamePost(const class FString& InPostID, uint8_t LocalUserNum, const class TArray<class FString>& StringReplaceList);
	bool UpdateStat(uint8_t LocalUserNum, const class FName& StatName, int32_t Points);
	void ClearSaveDataNoSpaceDialogCompleteDelegate(const struct FScriptDelegate& DeviceDelegate);
	void AddSaveDataNoSpaceDialogCompleteDelegate(const struct FScriptDelegate& DeviceDelegate);
	void OnSaveDataNoSpaceDialogComplete(bool bContinueWithoutSave);
	bool RecordPlayersRecentlyMetKeys(uint8_t LocalUserNum, class TArray<struct FFriendHistoryKey>& outPlayerKeys);
	bool IsAchievementUnlocked(int32_t AchievementId);
	bool ShowContentMarketplaceUI(uint8_t LocalUserNum);
	bool ShowFriendsInviteUI(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool ShowAchievementsUI(uint8_t LocalUserNum);
	bool ShowMessagesUI(uint8_t LocalUserNum);
	bool ShowFeedbackUI(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID);
	void RemoveCanPlayOnlineChangedDelegate(const struct FScriptDelegate& Callback);
	void AddCanPlayOnlineChangedDelegate(const struct FScriptDelegate& Callback);
	void CanPlayOnlineChanged(uint8_t LocalUserNum);
	void ClearUserSignInCompleteDelegate(const struct FScriptDelegate& InDelegate);
	void AddUserSignInCompleteDelegate(const struct FScriptDelegate& InDelegate);
	void OnUserSignInComplete(uint8_t LocalUserNum);
	bool ShowCustomMessageUI(uint8_t LocalUserNum, const class FString& MessageTitle, const class FString& NonEditableMessage, const class FString& optionalEditableMessage, class TArray<struct FUniqueNetId>& outRecipients);
	void ClearCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId);
	class UOnlineProfileSettings* GetCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId);
	void ClearReadCrossTitleProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& InDelegate);
	void AddReadCrossTitleProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& InDelegate);
	void OnReadCrossTitleProfileSettingsComplete(uint8_t LocalUserNum, int32_t TitleId, bool bWasSuccessful);
	bool ReadCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId, class UOnlineProfileSettings* ProfileSettings);
	void ClearWritePlayerStorageCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& InDelegate);
	void AddWritePlayerStorageCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& InDelegate);
	void OnWritePlayerStorageComplete(uint8_t LocalUserNum, bool bWasSuccessful);
	bool WritePlayerStorage(uint8_t LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int32_t optionalDeviceID);
	void ClearReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& InDelegate);
	void AddReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& InDelegate);
	void OnReadPlayerStorageForNetIdComplete(const struct FUniqueNetId& NetId, bool bWasSuccessful);
	bool ReadPlayerStorageForNetId(uint8_t LocalUserNum, const struct FUniqueNetId& NetId, class UOnlinePlayerStorage* PlayerStorage);
	void ClearReadPlayerStorageCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& InDelegate);
	void AddReadPlayerStorageCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& InDelegate);
	void OnReadPlayerStorageComplete(uint8_t LocalUserNum, bool bWasSuccessful);
	bool ReadPlayerStorage(uint8_t LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int32_t optionalDeviceID);
	class UOnlinePlayerStorage* GetPlayerStorage(uint8_t LocalUserNum);
	void RequestNativePlatformAuthTicket(int32_t LocalUserNum, const struct FScriptDelegate& Callback);
	void OnRequestNativePlatformAuthTicketComplete(int32_t LocalUserNum, const class FString& PlatformAuthTicket);
	void eventLinkedAccount(int32_t LocalUserNum);
	void ConnectLogin(int32_t LocalUserNum);
	bool HasIncomingFriendInvite(uint8_t LocalUserNum, const struct FUniqueNetId& InviteFrom);
	bool SupportInGameLogin();
	bool HasFriendsFunctionality();
	bool DeleteMessage(uint8_t LocalUserNum, int32_t MessageIndex);
	void ClearFriendMessageReceivedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& MessageDelegate);
	void AddFriendMessageReceivedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& MessageDelegate);
	void OnFriendMessageReceived(uint8_t LocalUserNum, const struct FUniqueNetId& SendingPlayer, const class FString& SendingNick, const class FString& Message);
	void GetFriendMessages(uint8_t LocalUserNum, class TArray<struct FOnlineFriendMessage>& outFriendMessages);
	void ClearJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate);
	void AddJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate);
	void OnJoinFriendGameComplete(bool bWasSuccessful);
	bool JoinFriendGame(uint8_t LocalUserNum, const struct FUniqueNetId& Friend);
	void ClearReceivedGameInviteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate);
	void AddReceivedGameInviteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate);
	void OnReceivedGameInvite(uint8_t LocalUserNum, const class FString& InviterName);
	bool SendGameInviteToFriends(uint8_t LocalUserNum, const class TArray<struct FUniqueNetId>& Friends, const class FString& optionalText);
	bool SendGameInviteToFriend(uint8_t LocalUserNum, const struct FUniqueNetId& Friend, const class FString& optionalText);
	bool SendMessageToFriendW(uint8_t LocalUserNum, const struct FUniqueNetId& Friend, const class FString& Message);
	void ClearFriendInviteCanceledDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& InviteDelegate);
	void AddFriendInviteCanceledDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& InviteDelegate);
	void OnFriendInviteCanceled(uint8_t LocalUserNum, const struct FUniqueNetId& CanceledUserId);
	void ClearFriendInviteReceivedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& InviteDelegate);
	void AddFriendInviteReceivedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& InviteDelegate);
	void OnFriendInviteReceived(uint8_t LocalUserNum, const struct FUniqueNetId& RequestingPlayer, const class FString& RequestingNick, const class FString& Message);
	bool RemoveFriend(uint8_t LocalUserNum, const struct FUniqueNetId& FormerFriend);
	void ClearRemoveFriendCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& RemoveFriendDelegate);
	void AddRemoveFriendCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& RemoveFriendDelegate);
	void OnRemoveFriendComplete(bool bWasSuccessful, const struct FUniqueNetId& RemovedID);
	bool DenyFriendInvite(uint8_t LocalUserNum, const struct FUniqueNetId& RequestingPlayer);
	void ClearDenyFriendInviteCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void AddDenyFriendInviteCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void OnDenyFriendInviteComplete(const struct FUniqueNetId& FriendId, class UError* Error);
	bool AcceptFriendInvite(uint8_t LocalUserNum, const struct FUniqueNetId& RequestingPlayer);
	void ClearAcceptFriendInviteCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void AddAcceptFriendInviteCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void OnAcceptFriendInviteComplete(const struct FUniqueNetId& FriendId, class UError* Error);
	void ClearAddFriendByNameCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void AddAddFriendByNameCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void OnAddFriendByNameComplete(bool bWasSuccessful);
	bool AddFriendByName(uint8_t LocalUserNum, const class FString& FriendName, const class FString& optionalMessage);
	bool QueryUserByDisplayName(uint8_t LocalUserNum, const class FString& DisplayName);
	void ClearQueryUserByDisplayNameCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& QueryDelegate);
	void AddQueryUserByDisplayNameCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& QueryDelegate);
	void OnQueryUserByDisplayName(bool bWasSuccessful, const class FString& QueriedDisplayName, const struct FUniqueNetId& UserId);
	bool AddFriend(uint8_t LocalUserNum, const struct FUniqueNetId& NewFriend, const class FString& optionalMessage);
	void ClearAddFriendCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void AddAddFriendCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void OnAddFriendComplete(const struct FUniqueNetId& NewFriendId, class UError* Error);
	class FString GetKeyboardInputResults(uint8_t& outBWasCanceled);
	void ClearKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate);
	void AddKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate);
	void OnKeyboardInputComplete(bool bWasSuccessful);
	bool ShowKeyboardUI(uint8_t LocalUserNum, const class FString& TitleText, const class FString& DescriptionText, bool optionalBIsPassword, bool optionalBShouldValidate, const class FString& optionalDefaultText, int32_t optionalMaxResultLength);
	void SetOnlineStatus(uint8_t LocalUserNum, int32_t StatusId, class TArray<struct FLocalizedStringSetting>& outLocalizedStringSettings, class TArray<struct FSettingsProperty>& outProperties);
	EOnlineEnumerationReadState GetFriendsList(uint8_t LocalUserNum, int32_t optionalCount, int32_t optionalStartingAt, class TArray<struct FOnlineFriend>& outFriends);
	void ClearReadFriendsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate);
	void AddReadFriendsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate);
	void OnReadFriendsComplete(bool bWasSuccessful);
	bool ReadFriendsList(uint8_t LocalUserNum, int32_t optionalCount, int32_t optionalStartingAt);
	void ClearWriteProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate);
	void AddWriteProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate);
	void OnWriteProfileSettingsComplete(uint8_t LocalUserNum, bool bWasSuccessful);
	bool WriteProfileSettings(uint8_t LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	class UOnlineProfileSettings* GetProfileSettings(uint8_t LocalUserNum);
	void ClearReadProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void AddReadProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void OnReadProfileSettingsComplete(uint8_t LocalUserNum, bool bWasSuccessful);
	bool ReadProfileSettings(uint8_t LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	void ClearFriendsChangeDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& FriendsDelegate);
	void eventAddFriendsChangeDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& FriendsDelegate);
	void ClearMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate);
	void AddMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate);
	void ClearLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate);
	void AddLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate);
	void ClearLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate);
	void AddLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate);
	bool ShowFriendsUI(uint8_t LocalUserNum);
	bool IsMuted(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool AreAnyFriends(uint8_t LocalUserNum, class TArray<struct FFriendsQuery>& outQuery);
	bool IsFriend(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool CanShowPresenceInformation(uint8_t LocalUserNum, bool optionalBAttemptToResolve, const class FString& optionalReason, EFeaturePrivilegeLevel& outPrivilegeLevelHint);
	bool CanViewPlayerProfiles(uint8_t LocalUserNum, bool optionalBAttemptToResolve, const class FString& optionalReason, EFeaturePrivilegeLevel& outPrivilegeLevelHint);
	bool CanPurchaseContent(uint8_t LocalUserNum, bool optionalBAttemptToResolve, const class FString& optionalReason, EFeaturePrivilegeLevel& outPrivilegeLevelHint);
	bool CanDownloadUserContent(uint8_t LocalUserNum, bool optionalBAttemptToResolve, const class FString& optionalReason, EFeaturePrivilegeLevel& outPrivilegeLevelHint);
	EFeaturePrivilegeLevel CanCommunicate(uint8_t LocalUserNum, ECommunicationMethod CommMethod, bool optionalBAttemptToResolve);
	bool CanPlayOnline(uint8_t LocalUserNum, bool optionalBAttemptToResolve, const class FString& optionalReason, EFeaturePrivilegeLevel& outPrivilegeLevelHint);
	class FString GetPlayerNickname(uint8_t LocalUserNum);
	bool GetUniquePlayerId(uint8_t LocalUserNum, struct FUniqueNetId& outPlayerID);
	ELoginStatus GetLoginStatus(uint8_t LocalUserNum);
	void ClearLogoutCompletedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& LogoutDelegate);
	void AddLogoutCompletedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& LogoutDelegate);
	void OnLogoutCompleted(bool bWasSuccessful);
	bool Logout(uint8_t LocalUserNum);
	void ClearLoginFailedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate);
	void AddLoginFailedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate);
	void OnReceievedPinGrantCode(EPinGrantResult Result, uint8_t LocalUserNum, const class FString& Code, const class FString& URL, int32_t SecondsUntilExpiration);
	void OnLoginFailed(uint8_t LocalUserNum, EOnlineServerConnectionStatus ErrorCode);
	bool AutoLogin();
	bool Login(uint8_t LocalUserNum, const class FString& LoginName, const class FString& Password, bool optionalBWantsLocalOnly);
	bool ShowLoginUI(uint8_t LocalUserNum, bool optionalBShowOnlineOnly);
	void OnFriendsChange();
	void OnMutingChange();
	void OnLoginCancelled();
	void OnLoginChange(uint8_t LocalUserNum);
	void OnPlayerUnblocked(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID, class UError* Error);
	void OnPlayerBlocked(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID, class UError* Error);
	void OnBlockListUpdated(uint8_t LocalUserNum);
};

// Class OnlineSubsystemEOS.OnlineStatsInterfaceEOS
// 0x0068 (0x0060 - 0x00C8)
class UOnlineStatsInterfaceEOS : public UObject
{
public:
	struct FPointer                                    StatsHandle;                                   // 0x0060 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                            // 0x0068 (0x0008) [0x0000000000000000]               
	class TArray<struct FScriptDelegate>               ReadStatsDelegates;                            // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
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

	bool RegisterStatGuid(const struct FUniqueNetId& PlayerID, class FString& outClientStatGuid);
	class FString GetClientStatGuid();
	void ClearRegisterHostStatGuidCompleteDelegateDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate);
	void AddRegisterHostStatGuidCompleteDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate);
	void OnRegisterHostStatGuidComplete(bool bWasSuccessful);
	bool RegisterHostStatGuid(class FString& outHostStatGuid);
	class FString GetHostStatGuid();
	bool WriteOnlinePlayerScores(const class FName& SessionName, int32_t LeaderboardId, class TArray<struct FOnlinePlayerScore>& outPlayerScores);
	void ClearFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate);
	void AddFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate);
	void OnFlushOnlineStatsComplete(const class FName& SessionName, bool bWasSuccessful);
	bool FlushOnlineStats(const class FName& SessionName);
	bool WriteOnlineStats(const class FName& SessionName, const struct FUniqueNetId& Player, class UOnlineStatsWrite* StatsWrite);
	void FreeStats(class UOnlineStatsRead* StatsRead);
	void ClearReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate);
	void AddReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate);
	void OnReadOnlineStatsComplete(bool bWasSuccessful);
	bool ReadOnlineStatsByRankAroundPlayer(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead, int32_t optionalNumRows);
	bool ReadOnlineStatsByRank(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead, int32_t optionalStartIndex, int32_t optionalNumToRead);
	bool ReadOnlineStatsForFriends(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead);
	bool ReadOnlineStats(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead, class TArray<struct FUniqueNetId>& outPlayers);
};

// Class OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS
// 0x00B8 (0x0060 - 0x0118)
class UOnlineUserCloudFileInterfaceEOS : public UObject
{
public:
	struct FPointer                                    PDSHandle;                                     // 0x0060 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	int32_t                                            LastReadFileErrorCode;                         // 0x0068 (0x0004) [0x0000000000003000] (CPF_Native | CPF_Transient)
	uint8_t                                          UnknownData00[0x4];                            // 0x006C (0x0004) MISSED OFFSET
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                            // 0x0070 (0x0008) [0x0000000000000000]               
	class TArray<struct FScriptDelegate>               EnumerateUserFileCompleteDelegates;            // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ReadUserFileCompleteDelegates;                 // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               WriteUserFileCompleteDelegates;                // 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               DeleteUserFileCompleteDelegates;               // 0x00A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
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
	void ClearDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate);
	void AddDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate);
	bool DeleteUserFile(const class FString& UserId, const class FString& Filename, bool bShouldCloudDelete, bool bShouldLocallyDelete);
	void OnDeleteUserFileComplete(bool bWasSuccessful, const class FString& UserId, const class FString& Filename);
	void ClearWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate);
	void AddWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate);
	bool WriteUserFile(const class FString& UserId, const class FString& Filename, class TArray<uint8_t>& outFileContents);
	void OnWriteUserFileComplete(bool bWasSuccessful, const class FString& UserId, const class FString& Filename);
	void ClearReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate);
	void AddReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate);
	bool ReadUserFile(const class FString& UserId, const class FString& Filename);
	void OnReadUserFileComplete(bool bWasSuccessful, const class FString& UserId, const class FString& Filename);
	void GetUserFileList(const class FString& UserId, class TArray<struct FEmsFile>& outUserFiles);
	void ClearEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate);
	void AddEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate);
	void EnumerateUserFiles(const class FString& UserId);
	void OnEnumerateUserFilesComplete(bool bWasSuccessful, const class FString& UserId);
	bool ClearFile(const class FString& UserId, const class FString& Filename);
	bool ClearFiles(const class FString& UserId);
	bool GetFileContents(const class FString& UserId, const class FString& Filename, class TArray<uint8_t>& outFileContents);
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
	class TArray<struct FVoiceAudioDevice>             InputAudioDevices;                             // 0x0088 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink | CPF_PrivateWrite)
	class TArray<struct FVoiceAudioDevice>             OutputAudioDevices;                            // 0x0098 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink | CPF_PrivateWrite)
	struct FMap_Mirror                                 AccountsAcceptedVoiceModerationEULAMap;        // 0x00A8 (0x0050) [0x0000004000001000] (CPF_Native | CPF_PrivateWrite)
	class TArray<class FString>                        AccountsWithAgreementResponse;                 // 0x00F8 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink | CPF_PrivateWrite)
	struct FMap_Mirror                                 ProductUserIdToEpicUserIdMap;                  // 0x0108 (0x0050) [0x0000004000001000] (CPF_Native | CPF_PrivateWrite)
	struct FMap_Mirror                                 PendingEpicIdQueries;                          // 0x0158 (0x0050) [0x0000004000001000] (CPF_Native | CPF_PrivateWrite)
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
	void ClearRecognitionCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& RecognitionDelegate);
	void AddRecognitionCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& RecognitionDelegate);
	bool GetRecognitionResults(uint8_t LocalUserNum, class TArray<struct FSpeechRecognizedWord>& outWords);
	bool StopSpeechRecognition(uint8_t LocalUserNum);
	bool StartSpeechRecognition(uint8_t LocalUserNum);
	void StopNetworkedVoice(uint8_t LocalUserNum);
	void StartNetworkedVoice(uint8_t LocalUserNum);
	void ClearPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate);
	void AddPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate);
	bool UnmuteRemoteTalker(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID, bool optionalBIsSystemWide);
	bool MuteRemoteTalker(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID, bool optionalBIsSystemWide);
	bool SetRemoteTalkerPriority(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID, int32_t Priority);
	bool IsHeadsetPresent(uint8_t LocalUserNum);
	bool IsRemotePlayerTalking(const struct FUniqueNetId& PlayerID);
	bool IsLocalPlayerTalking(uint8_t LocalUserNum);
	bool UnregisterRemoteTalker(const struct FUniqueNetId& PlayerID);
	bool RegisterRemoteTalker(const struct FUniqueNetId& PlayerID);
	bool UnregisterLocalTalker(uint8_t LocalUserNum);
	bool RegisterLocalTalker(uint8_t LocalUserNum);
	void OnRecognitionComplete();
	void OnPlayerTalkingStateChange(const struct FUniqueNetId& Player, bool bIsTalking);
	void StopRecording(class FString& outEpicAccountId);
	void StartRecording(class FString& outEpicAccountId, class FString& outRoomName);
	bool HasPlayerRespondedToVoiceAgreement(class FString& outLocalEpicAccountId);
	EPlayerVoiceAgreementStatus GetVoiceAgreementStatusForPlayer(class FString& outLocalEpicAccountId);
	bool HasPlayerAcceptedVoiceAgreement(class FString& outLocalEpicAccountId);
	bool CheckAllPlayersAcceptedVoiceModerationAgreement();
	void eventSubscribeToLoginChanges();
	void OnLogout(class FString& outEpicAccountId);
	void OnLoginChange(uint8_t LocalUserNum);
	void SetPlayerBlockStatus(bool bBlocked, class FString& outLocalEpicAccountId, class FString& outTargetEpicAccountId, class FString& outRoomName);
	void SetPlayerMuteStatus(bool bMuted, class FString& outLocalEpicAccountId, class FString& outTargetEpicAccountId, class FString& outRoomName);
	EPlayerVoiceTransitionState GetUserState(class FString& outEpicAccountId);
	class FString GetCurrentRoomNameForUser(class FString& outEpicAccountId);
	bool LeaveVoiceRoom(class FString& outEpicAccountId, class FString& outRoomName);
	bool JoinVoiceRoom(class FString& outEpicAccountId, class FString& outRoomName, class FString& outClientBaseUrl, class FString& outJoinToken);
	bool SetAudioOutputDevice(float OutputVolume, class FString& outEpicAccountId, class FString& outDeviceID);
	bool SetAudioInputDevice(float InputVolume, class FString& outEpicAccountId, class FString& outDeviceID);
	void SetLocalPlayerRegisteredStatus(bool bRegister, class FString& outPlatformId);
	void CacheOutputAudioDevices();
	void CacheInputAudioDevices();
	void Init();
	void EventVoiceRecordingStatusChanged(bool bRecording);
	void EventPlayerVoiceAgreementStatusChanged(const class FString& EpicAccountId, bool bAccepted, bool bNewAgreement);
	void EventPlayerStatusChanged(const class FString& EpicAccountId, const class FString& RoomName, const struct FVoiceRoomMemberStatus& MemberStatus);
	void EventPlayerLeftVoiceRoom(const class FString& EpicAccountId, const class FString& RoomName);
	void EventPlayerJoinedVoiceRoom(const class FString& EpicAccountId, const class FString& RoomName);
	void EventRemovedFromVoiceRoom(const class FString& EpicAccountId, const class FString& RoomName, EVoiceResultCode RemovedResult);
	void EventJoinedVoiceRoom(const class FString& EpicAccountId, const class FString& RoomName, EVoiceResultCode JoinResult);
	void EventLeftVoiceRoom(const class FString& EpicAccountId, const class FString& RoomName, EVoiceResultCode LeaveResult);
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

	void __OnlinePlayerInterfaceEOS__LinkedAccount_0x1(int32_t instance, const class FString& PlatformAuthTicket);
};

// Class OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1
// 0x0020 (0x0060 - 0x0080)
class U__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1 : public UObject
{
public:
	int32_t                                            LocalUserNum;                                  // 0x0060 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0064 (0x0004) MISSED OFFSET
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

	void __OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1(bool bSuccess, const class FString& Code);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
