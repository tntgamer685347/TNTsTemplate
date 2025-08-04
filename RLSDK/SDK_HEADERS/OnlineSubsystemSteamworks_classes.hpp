/*
#############################################################################################
# RocketLeague (1.0.10897.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_classes.hpp
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

// Enum OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ESteamMatchmakingType
enum class ESteamMatchmakingType : uint8_t
{
	SMT_Invalid                                        = 0,
	SMT_LAN                                            = 1,
	SMT_Internet                                       = 2,
	SMT_END                                            = 3
};

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardSortType
enum class ELeaderboardSortType : uint8_t
{
	LST_Ascending                                      = 0,
	LST_Descending                                     = 1,
	LST_END                                            = 2
};

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardRequestType
enum class ELeaderboardRequestType : uint8_t
{
	LRT_Global                                         = 0,
	LRT_Player                                         = 1,
	LRT_Friends                                        = 2,
	LRT_END                                            = 3
};

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardFormat
enum class ELeaderboardFormat : uint8_t
{
	LF_Number                                          = 0,
	LF_Seconds                                         = 1,
	LF_Milliseconds                                    = 2,
	LF_END                                             = 3
};

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardUpdateType
enum class ELeaderboardUpdateType : uint8_t
{
	LUT_KeepBest                                       = 0,
	LUT_Force                                          = 1,
	LUT_END                                            = 2
};

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EMuteType
enum class EMuteType : uint8_t
{
	MUTE_None                                          = 0,
	MUTE_AllButFriends                                 = 1,
	MUTE_All                                           = 2,
	MUTE_END                                           = 3
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks
// 0x0018 (0x03C8 - 0x03E0)
class UOnlineAuthInterfaceSteamworks : public UOnlineAuthInterfaceImpl
{
public:
	TArray<uint8_t>                                    EncryptedTicket;                               // 0x03C8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint64_t                                           EncryptedTicketHandle;                         // 0x03D8 (0x0008) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks");
		}

		return uClassPointer;
	};

	bool RequestAuthTicket(struct FUniqueNetId PlayerID, struct FScriptDelegate Callback);
	bool RequiresAuthTicket();
	bool GetServerAddr(struct FIpAddr& OutServerIP, int32_t& OutServerPort);
	bool GetServerUniqueId(struct FUniqueNetId& OutServerUID);
	bool VerifyServerAuthSession(struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int32_t AuthTicketUID);
	bool CreateServerAuthSession(struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int32_t ClientPort, int32_t& OutAuthTicketUID);
	bool VerifyClientAuthSession(struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int32_t ClientPort, int32_t AuthTicketUID);
	bool CreateClientAuthSession(struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int32_t ServerPort, bool bSecure, int32_t& OutAuthTicketUID);
	bool SendServerAuthRequest(struct FUniqueNetId ServerUID);
	bool SendClientAuthRequest(class UPlayer* ClientConnection, struct FUniqueNetId ClientUID);
};

// Class OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks
// 0x0138 (0x0060 - 0x0198)
class UOnlineCommunityContentInterfaceSteamworks : public UObject
{
public:
	class UOnlineSubsystemSteamworks*                  OwningSubsystem;                               // 0x0060 (0x0008) [0x0000000000000000]               
	struct FWorkshopItemData                           WorkshopItem;                                  // 0x0068 (0x00A0) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDownloadedWorkshopData__Delegate;          // 0x0108 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadContentListComplete__Delegate;         // 0x0120 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadFriendsContentListComplete__Delegate;  // 0x0138 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUploadContentComplete__Delegate;           // 0x0150 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDownloadContentComplete__Delegate;         // 0x0168 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGetContentPayloadComplete__Delegate;       // 0x0180 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks");
		}

		return uClassPointer;
	};

	void UpdateWorkshopItemUploadProgress();
	void DownloadAllWorkshopData(struct FScriptDelegate Callback);
	void CreateWorkshopItem();
	void RateContent(uint8_t PlayerNum, int32_t NewRating, struct FCommunityContentFile& FileToRate);
	void ClearGetContentPayloadCompleteDelegate(struct FScriptDelegate GetContentPayloadCompleteDelegate);
	void AddGetContentPayloadCompleteDelegate(struct FScriptDelegate GetContentPayloadCompleteDelegate);
	void OnGetContentPayloadComplete(bool bWasSuccessful, struct FCommunityContentFile FileDownloaded, TArray<uint8_t>& Payload);
	bool GetContentPayload(uint8_t PlayerNum, struct FCommunityContentFile& FileDownloaded);
	void ClearDownloadContentCompleteDelegate(struct FScriptDelegate DownloadContentCompleteDelegate);
	void AddDownloadContentCompleteDelegate(struct FScriptDelegate DownloadContentCompleteDelegate);
	void OnDownloadContentComplete(bool bWasSuccessful, struct FCommunityContentFile FileDownloaded, TArray<uint8_t> Payload);
	bool DownloadContent(uint8_t PlayerNum, struct FCommunityContentFile& FileToDownload);
	void ClearUploadContentCompleteDelegate(struct FScriptDelegate UploadContentCompleteDelegate);
	void AddUploadContentCompleteDelegate(struct FScriptDelegate UploadContentCompleteDelegate);
	void OnUploadContentComplete(bool bWasSuccessful, struct FCommunityContentFile UploadedFile);
	bool UploadContent(uint8_t PlayerNum, TArray<uint8_t>& Payload, struct FCommunityContentMetadata& MetaData);
	bool GetFriendsContentList(uint8_t PlayerNum, struct FOnlineFriend& Friend, TArray<struct FCommunityContentFile>& ContentFiles);
	void ClearReadFriendsContentListCompleteDelegate(struct FScriptDelegate ReadFriendsContentListCompleteDelegate);
	void AddReadFriendsContentListCompleteDelegate(struct FScriptDelegate ReadFriendsContentListCompleteDelegate);
	void OnReadFriendsContentListComplete(bool bWasSuccessful);
	bool ReadFriendsContentList(uint8_t PlayerNum, int32_t optionalStartAt, int32_t optionalNumToRead, TArray<struct FOnlineFriend>& Friends);
	bool GetContentList(uint8_t PlayerNum, TArray<struct FCommunityContentFile>& ContentFiles);
	void ClearReadContentListCompleteDelegate(struct FScriptDelegate ReadContentListCompleteDelegate);
	void AddReadContentListCompleteDelegate(struct FScriptDelegate ReadContentListCompleteDelegate);
	void OnReadContentListComplete(bool bWasSuccessful, TArray<struct FCommunityContentFile> ContentFiles);
	bool ReadContentList(uint8_t PlayerNum, struct FUniqueNetId NetId, class FString optionalPath, int32_t optionalStartAt, int32_t optionalNumToRead);
	void Exit();
	bool Init();
	void OnDownloadedWorkshopData(bool bSuccess, TArray<struct FDownloadedWorkshopData>& Items);
};

// Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks
// 0x0190 (0x0318 - 0x04A8)
class UOnlineGameInterfaceSteamworks : public UOnlineGameInterfaceImpl
{
public:
	struct FMatchmakingQueryState                      ServerBrowserSearchQuery;                      // 0x0318 (0x0078) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FMatchmakingQueryState                      InviteSearchQuery;                             // 0x0390 (0x0078) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	float                                              ServerBrowserTimeout;                          // 0x0408 (0x0004) [0x0000000000000000]               
	float                                              InviteTimeout;                                 // 0x040C (0x0004) [0x0000000000000000]               
	struct FUniqueNetId                                InviteServerUID;                               // 0x0410 (0x0048) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class UOnlineGameSearch*                           InviteGameSearch;                              // 0x0458 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      InviteLocationUrl;                             // 0x0460 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     RegisterPlayerCompleteDelegates;               // 0x0470 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     UnregisterPlayerCompleteDelegates;             // 0x0480 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bFilterEngineBuild : 1;                        // 0x0490 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray<struct FFilterKeyToSteamKeyMapping>         FilterKeyToSteamKeyMap;                        // 0x0498 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks");
		}

		return uClassPointer;
	};

	void PrintDebugInfoNative(class UDebugDrawer* Drawer);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool QueryNonAdvertisedData(int32_t StartAt, int32_t NumberToQuery);
	void ClearUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate);
	void AddUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate);
	void OnUnregisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, bool bWasSuccessful);
	bool UnregisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID);
	void ClearRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate);
	void AddRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate);
	void OnRegisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, bool bWasSuccessful);
	bool RegisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID, bool bWasInvited);
	bool AcceptGameInvite(uint8_t LocalUserNum, struct FName SessionName);
	void OnGameInviteAccepted(class FString ErrorString, struct FOnlineGameSearchResult& InviteResult);
	bool UpdateOnlineGame(struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool optionalBShouldRefreshOnlineData);
};

// Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet
// 0x0020 (0x0318 - 0x0338)
class UOnlineGameInterfaceSteamworks_PsyNet : public UOnlineGameInterfaceImpl
{
public:
	TArray<struct FScriptDelegate>                     RegisterPlayerCompleteDelegates;               // 0x0318 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     UnregisterPlayerCompleteDelegates;             // 0x0328 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet");
		}

		return uClassPointer;
	};

	void ClearUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate);
	void AddUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate);
	void OnUnregisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, bool bWasSuccessful);
	bool UnregisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID);
	void ClearRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate);
	void AddRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate);
	void OnRegisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, bool bWasSuccessful);
	bool RegisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID, bool bWasInvited);
	bool QueryNonAdvertisedData(int32_t StartAt, int32_t NumberToQuery);
	bool AcceptGameInvite(uint8_t LocalUserNum, struct FName SessionName);
	bool UpdateOnlineGame(struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool optionalBShouldRefreshOnlineData);
	void SetFriendJoinLocation(struct FUniqueNetId JoinablePlayerID, class FString ServerAddress, ELobbyVisibility Visibility);
};

// Class OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks
// 0x0050 (0x02C0 - 0x0310)
class UOnlineLobbyInterfaceSteamworks : public UOnlineLobbyInterfaceImpl
{
public:
	TArray<struct FLobbyMetaData>                      CreateLobbySettings;                           // 0x02C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueLobbyId                              PendingCreateLobbyResult;                      // 0x02D0 (0x0010) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bLobbySearchInProgress : 1;                    // 0x02E0 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	TArray<class FString>                              LobbyMemberKeys;                               // 0x02E8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyKicked__Delegate;                     // 0x02F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks");
		}

		return uClassPointer;
	};

	bool KickPlayer(ELobbyKickReason Reason, struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID);
	bool GetLobbyFromCommandline(bool optionalBMarkAsJoined, struct FUniqueLobbyId& LobbyId);
	bool ShowInviteUI(uint8_t LocalUserNum, struct FUniqueLobbyId& LobbyId);
	bool InviteToLobby(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID);
	bool CanInviteToLobby(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID);
	bool SetLobbyOwner(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& NewOwner);
	bool SetLobbyLock(bool bLocked, struct FUniqueLobbyId& LobbyId);
	bool SetLobbyType(ELobbyVisibility Type, struct FUniqueLobbyId& LobbyId);
	bool SetLobbyServer(class FString ServerIP, struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& ServerUID);
	bool RemoveLobbySetting(class FString Key, struct FUniqueLobbyId& LobbyId);
	bool SetLobbySetting(class FString Key, class FString Value, struct FUniqueLobbyId& LobbyId);
	bool GetLobbyAdmin(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& AdminId);
	void OnLobbyKicked(int32_t AdminIndex, struct FActiveLobbyInfo& Lobby);
	bool SendLobbyBinaryData(struct FUniqueLobbyId& LobbyId, TArray<uint8_t>& Data);
	bool SetLobbyUserSetting(class FString Key, class FString Value, struct FUniqueLobbyId& LobbyId);
	bool LeaveLobby(struct FUniqueLobbyId& LobbyId);
	bool JoinLobby(int32_t LocalPlayerNum, struct FUniqueLobbyId& LobbyId);
	bool UpdateFoundLobbies(struct FUniqueLobbyId optionalLobbyId);
	bool FindLobbies(int32_t optionalMaxResults, TArray<struct FLobbyFilter> optionalFilters, TArray<struct FLobbySortFilter> optionalSortFilters, int32_t optionalMinSlots, ELobbyDistance optionalDistance);
	bool CreateLobby(int32_t LocalPlayerNum, int32_t MaxPlayers, ELobbyVisibility optionalType, TArray<struct FLobbyMetaData> optionalInitialSettings);
};

// Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks
// 0x0C58 (0x03D8 - 0x1030)
class UOnlineSubsystemSteamworks : public UOnlineSubsystemCommonImpl
{
public:
	struct FPointer                                    Discord;                                       // 0x03D8 (0x0008) [0x0000000000001000] (CPF_Native)  
	TArray<struct FName>                               UnlockedDLC;                                   // 0x03E0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     UnlockedDLCDelegates;                          // 0x03F0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	uint32_t                                           bStoringAchievement : 1;                       // 0x0400 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bClientStatsStorePending : 1;                  // 0x0400 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bGSStatsStoresSuccess : 1;                     // 0x0400 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bNeedsKeyboardTicking : 1;                     // 0x0400 (0x0004) [0x0000000000000002] [0x00000008] (CPF_Const)
	uint32_t                                           bLastHasConnection : 1;                        // 0x0400 (0x0004) [0x0000000000000002] [0x00000010] (CPF_Const)
	uint32_t                                           bIsStatsSessionOk : 1;                         // 0x0400 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bHasSteamworksAccount : 1;                     // 0x0400 (0x0004) [0x0000000000004002] [0x00000040] (CPF_Const | CPF_Config)
	uint32_t                                           bShouldUseMcp : 1;                             // 0x0400 (0x0004) [0x0000000000004002] [0x00000080] (CPF_Const | CPF_Config)
	uint32_t                                           bShowIPCCount : 1;                             // 0x0400 (0x0004) [0x0000000000004002] [0x00000100] (CPF_Const | CPF_Config)
	uint32_t                                           bInterceptFriendMessages : 1;                  // 0x0400 (0x0004) [0x0000000000004000] [0x00000200] (CPF_Config)
	int32_t                                            TotalGSStatsStoresPending;                     // 0x0404 (0x0004) [0x0000000000000000]               
	EOnlineEnumerationReadState                        UserStatsReceivedState;                        // 0x0408 (0x0001) [0x0000000000000000]               
	ELoginStatus                                       LoggedInStatus;                                // 0x0409 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            KeyboardInputWasCanceled;                      // 0x040A (0x0001) [0x0000000000000000]               
	uint8_t                                            bWasKeyboardInputCanceled;                     // 0x040B (0x0001) [0x0000000000000002] (CPF_Const)   
	ENetworkNotificationPosition                       CurrentNotificationPosition;                   // 0x040C (0x0001) [0x0000000000004000] (CPF_Config)  
	class UOnlineGameInterfaceSteamworks*              CachedGameInt;                                 // 0x0410 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      LocalProfileName;                              // 0x0418 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      LoggedInPlayerName;                            // 0x0428 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FUniqueNetId                                LoggedInPlayerId;                              // 0x0438 (0x0048) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	int32_t                                            LoggedInPlayerNum;                             // 0x0480 (0x0004) [0x0000000000000002] (CPF_Const)   
	class FString                                      LoggedInCountry;                               // 0x0488 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<int32_t>                                    AvatarSizes;                                   // 0x0498 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteProfileSettingsDelegates;                 // 0x04A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UOnlineProfileSettings*                      CachedProfile;                                 // 0x04B8 (0x0008) [0x0000000000000000]               
	TArray<struct FScriptDelegate>                     LocalPlayerStorageReadDelegates;               // 0x04C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LocalPlayerStorageWriteDelegates;              // 0x04D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     RemotePlayerStorageReadDelegates;              // 0x04E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     SpeechRecognitionCompleteDelegates;            // 0x04F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadFriendsDelegates;                          // 0x0500 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendsChangeDelegates;                        // 0x0510 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     MutingChangeDelegates;                         // 0x0520 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LoginChangeDelegates;                          // 0x0530 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LoginFailedDelegates;                          // 0x0540 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     TalkingDelegates;                              // 0x0550 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadOnlineStatsCompleteDelegates;              // 0x0560 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     FlushOnlineStatsDelegates;                     // 0x0570 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ConnectionStatusChangeDelegates;               // 0x0580 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LinkStatusDelegates;                           // 0x0590 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadTitleFileCompleteDelegates;                // 0x05A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     AchievementDelegates;                          // 0x05B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     AchievementReadDelegates;                      // 0x05C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     EnumerateUserFilesCompleteDelegates;           // 0x05D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadUserFileCompleteDelegates;                 // 0x05E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteUserFileCompleteDelegates;                // 0x05F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     DeleteUserFileCompleteDelegates;               // 0x0600 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     SharedFileReadCompleteDelegates;               // 0x0610 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     SharedFileWriteCompleteDelegates;              // 0x0620 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ExternalUIChangeDelegates;                     // 0x0630 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     KeyboardInputCompleteDelegates;                // 0x0640 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class FString                                      KeyboardInputResults;                          // 0x0650 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FLocalTalkerSteam                           CurrentLocalTalker;                            // 0x0660 (0x0058) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              LastLocalTalkerNotificationTime;               // 0x06B8 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              MaxTalkerNotificationTime;                     // 0x06BC (0x0004) [0x0000000000000002] (CPF_Const)   
	TArray<struct FUniqueNetId>                        PendingRequestUserInformation;                 // 0x06C0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FRemoteTalker>                       RemoteTalkers;                                 // 0x06D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            AppID;                                         // 0x06E0 (0x0004) [0x0000000000000002] (CPF_Const)   
	class UOnlineStatsRead*                            CurrentStatsRead;                              // 0x06E8 (0x0008) [0x0000000000000002] (CPF_Const)   
	TArray<struct FPendingPlayerStats>                 PendingStats;                                  // 0x06F0 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      KeyboardResultsString;                         // 0x0700 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     KeyboardInputDelegates;                        // 0x0710 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendInviteReceivedDelegates;                 // 0x0720 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendMessageReceivedDelegates;                // 0x0730 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     AddFriendByNameCompleteDelegates;              // 0x0740 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FProfileSettingsCache                       ProfileCache;                                  // 0x0750 (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
	class UOnlinePlayerStorage*                        PlayerStorageCache;                            // 0x0788 (0x0008) [0x0000000000000000]               
	class FString                                      CachedFriendMessage;                           // 0x0790 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FDeviceIdCache                              DeviceCache;                                   // 0x07A0 (0x0030) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              LocationUrlsForInvites;                        // 0x07D0 (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	class FString                                      LocationUrl;                                   // 0x07E0 (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReceivedGameInviteDelegates;                   // 0x07F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     JoinFriendGameCompleteDelegates;               // 0x0800 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     GetNumberOfCurrentPlayersCompleteDelegates;    // 0x0810 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     RegisterHostStatGuidCompleteDelegates;         // 0x0820 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FOnlineFriendMessage>                CachedFriendMessages;                          // 0x0830 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FOnlineStatusMapping>                StatusMappings;                                // 0x0840 (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	class FString                                      DefaultStatus;                                 // 0x0850 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      GameInviteMessage;                             // 0x0860 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FControllerConnectionState                  ControllerStates[0x4];                         // 0x0870 (0x0020) [0x0000000000000000]               
	float                                              ConnectionPresenceTimeInterval;                // 0x0890 (0x0004) [0x0000000000000000]               
	float                                              ConnectionPresenceElapsedTime;                 // 0x0894 (0x0004) [0x0000000000000002] (CPF_Const)   
	class FString                                      EncryptedProductKey;                           // 0x0898 (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	TArray<struct FUniqueNetId>                        MuteList;                                      // 0x08A8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FSteamUserCloud>                     UserCloudFiles;                                // 0x08B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FSteamUserCloudMetadata>             UserCloudMetadata;                             // 0x08C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FTitleFile>                          SharedFileCache;                               // 0x08D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FQueuedAvatarRequest>                QueuedAvatarRequests;                          // 0x08E8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FAchievementMappingInfo>             AchievementMappings;                           // 0x08F8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FAchievementProgressStat>            PendingAchievementProgress;                    // 0x0908 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FLeaderboardTemplate>                LeaderboardList;                               // 0x0918 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FDeferredLeaderboardRead>            DeferredLeaderboardReads;                      // 0x0928 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FDeferredLeaderboardWrite>           DeferredLeaderboardWrites;                     // 0x0938 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FDeferredLeaderboardWrite>           PendingLeaderboardStats;                       // 0x0948 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FViewIdToLeaderboardName>            LeaderboardNameMappings;                       // 0x0958 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<int32_t>                                    GameServerStatsMappings;                       // 0x0968 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class UOnlinePurchaseInterfaceSteamworks*          CachedPurchaseInt;                             // 0x0978 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UOnlineAuthInterfaceSteamworks*              CachedAuthInt;                                 // 0x0980 (0x0008) [0x0000000000000002] (CPF_Const)   
	TArray<struct FIpAddr>                             PendingRedirects;                              // 0x0988 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class UOnlineLobbyInterfaceSteamworks*             LobbyInterfaceImpl;                            // 0x0998 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __CanPlayOnlineChanged__Delegate;              // 0x09A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUserSwitchComplete__Delegate;              // 0x09B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUserSignInComplete__Delegate;              // 0x09D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginChange__Delegate;                     // 0x09E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                  // 0x0A00 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnMutingChange__Delegate;                    // 0x0A18 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                   // 0x0A30 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendInviteAccepted__Delegate;            // 0x0A48 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __FriendPresenceChange__Delegate;              // 0x0A60 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAvatarChange__Delegate;                    // 0x0A78 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                     // 0x0A90 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                 // 0x0AA8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;               // 0x0AC0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;     // 0x0AD8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;    // 0x0AF0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;       // 0x0B08 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;// 0x0B20 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;      // 0x0B38 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;             // 0x0B50 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerTalkingStateChange__Delegate;        // 0x0B68 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;             // 0x0B80 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;         // 0x0B98 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;        // 0x0BB0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                // 0x0BC8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                // 0x0BE0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnControllerChange__Delegate;                // 0x0BF8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUserOrphaned__Delegate;                    // 0x0C10 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUserRestored__Delegate;                    // 0x0C28 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;          // 0x0C40 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;             // 0x0C58 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;           // 0x0C70 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;           // 0x0C88 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAddFriendComplete__Delegate;               // 0x0CA0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryUserByDisplayName__Delegate;          // 0x0CB8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;         // 0x0CD0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRemoveFriendComplete__Delegate;            // 0x0CE8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAcceptFriendInviteComplete__Delegate;      // 0x0D00 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDenyFriendInviteComplete__Delegate;        // 0x0D18 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;            // 0x0D30 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendInviteCanceled__Delegate;            // 0x0D48 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;              // 0x0D60 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;          // 0x0D78 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;           // 0x0D90 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;    // 0x0DA8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeviceSelectionComplete__Delegate;         // 0x0DC0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;       // 0x0DD8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnProfileDataChanged__Delegate;              // 0x0DF0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;        // 0x0E08 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGetNumberOfCurrentPlayersComplete__Delegate;// 0x0E20 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadCrossTitleProfileSettingsComplete__Delegate;// 0x0E38 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnEnumerateUserFilesComplete__Delegate;      // 0x0E50 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadUserFileComplete__Delegate;            // 0x0E68 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWriteUserFileComplete__Delegate;           // 0x0E80 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteUserFileComplete__Delegate;          // 0x0E98 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadSharedFileComplete__Delegate;          // 0x0EB0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWriteSharedFileComplete__Delegate;         // 0x0EC8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnStorePurchaseCompleteDelegate__Delegate;   // 0x0EE0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnlockedDLCChange__Delegate;               // 0x0EF8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnSaveDataNoSpaceDialogComplete__Delegate;   // 0x0F10 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCommerceDialogClosed__Delegate;            // 0x0F28 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCloseKickPlayerDialog__Delegate;           // 0x0F40 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnErrorDialogClosed__Delegate;               // 0x0F58 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisteredController__Delegate;            // 0x0F70 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnregisteredController__Delegate;          // 0x0F88 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnInputAPIChanged__Delegate;                 // 0x0FA0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerSigningOut__Delegate;                // 0x0FB8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EpicIDToPlatformIDCallback__Delegate;        // 0x0FD0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnBlockListUpdated__Delegate;                // 0x0FE8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerBlocked__Delegate;                   // 0x1000 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerUnblocked__Delegate;                 // 0x1018 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks");
		}

		return uClassPointer;
	};

	bool ReadBlockList(uint8_t LocalUserNum);
	void GetBlockList(uint8_t LocalUserNum, TArray<struct FOnlineFriend>& OutBlockList);
	void AddPlayerUnblockedDelegate(uint8_t LocalUserNum, struct FScriptDelegate Delegate);
	void OnPlayerUnblocked(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, class UError* Error);
	void AddPlayerBlockedDelegate(uint8_t LocalUserNum, struct FScriptDelegate Delegate);
	void OnPlayerBlocked(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, class UError* Error);
	void AddBlockListUpdatedDelegate(uint8_t LocalUserNum, struct FScriptDelegate Delegate);
	void OnBlockListUpdated(uint8_t LocalUserNum);
	void EpicIDToPlatformID(struct FUniqueNetId EpicAccountId, EOnlinePlatform TargetPlatform, struct FScriptDelegate Callback);
	void EpicIDToPlatformIDCallback(struct FUniqueNetId PlatformAccountId, class FString Error);
	struct FUniqueNetId GetEpicAccountId(struct FUniqueNetId PlatformId);
	void ClearPlayerSigningOutDelegate(struct FScriptDelegate InDelegate);
	void AddPlayerSigningOutDelegate(struct FScriptDelegate InDelegate);
	void OnPlayerSigningOut(uint8_t LocalUserNum);
	bool RefreshNetworkErrorToggle();
	bool TriggerScreenshot();
	void OnControllerConnectionStatusChanged(int32_t LocalPlayerNum, bool bConnected);
	void OnControllerInputAPIChanged(int32_t LocalPlayerNum, EInputAPI InputAPI);
	EInputPlatformType GetControllerPlatform(int32_t LocalPlayerNum);
	int32_t GetControllerID(int32_t LocalPlayerNum);
	TArray<struct FName> GetConnectedControllerNames();
	void OnLocalPlayerRemoved(int32_t LocalPlayerNum);
	void UnregisterController(int32_t LocalPlayerNum);
	void RegisterController(int32_t LocalPlayerNum, int32_t optionalControllerId);
	bool CanRegisterController(int32_t LocalPlayerNum);
	bool ShowBindings(int32_t ControllerId);
	void SetControllerLayout(int32_t ControllerId, struct FName LayoutName);
	void SetInputAPI(EInputAPI TargetAPI);
	TArray<struct FName> GetActiveDiscDLC();
	void SetOnlineSubscriptionRequirement(bool bRequiresOnlineSubscription);
	void HandleGamepadConnectionStatusChanged(class UGameViewportClient* GVC, int32_t LocalPlayerNum, bool bConnected);
	void HandleGamepadInputAPIChanged(class UGameViewportClient* GVC, int32_t LocalPlayerNum, EInputAPI InputAPI);
	void ClearInputAPIChangedDelegate(struct FScriptDelegate InputAPIChangedDelegate);
	void AddInputAPIChangedDelegate(struct FScriptDelegate InputAPIChangedDelegate);
	void ClearUnregisteredControllerDelegate(struct FScriptDelegate UnregisteredControllerDelegate);
	void ClearRegisteredControllerDelegate(struct FScriptDelegate RegisteredControllerDelegate);
	void AddUnregisteredControllerDelegate(struct FScriptDelegate UnregisteredControllerDelegate);
	void AddRegisteredControllerDelegate(struct FScriptDelegate RegisteredControllerDelegate);
	void OnInputAPIChanged(EInputAPI TargetAPI);
	void OnUnregisteredController(int32_t LocalPlayerNum);
	void OnRegisteredController(int32_t LocalPlayerNum, int32_t ControllerId);
	bool HasIncomingFriendInvite(uint8_t LocalUserNum, struct FUniqueNetId InviteFrom);
	bool HasFriendsFunctionality();
	bool CanSendOfflinePartyInvite(struct FUniqueNetId PlayerID);
	bool CheckParentalControlInfo(bool bShowUi);
	bool RecordPlayersRecentlyMetKeys(uint8_t LocalUserNum, TArray<struct FFriendHistoryKey>& PlayerKeys);
	bool GetPlayHistoryRegistrationKey(TArray<uint8_t>& Key);
	bool IsOriginalAppOwner();
	void UpdateSessionStatusFromPlayers(int32_t CurrentPlayerCount, int32_t numBotPlayers);
	bool IsAchievementUnlocked(uint8_t LocalUserNum, int32_t AchievementId);
	void UpdateGameProgress(uint8_t LocalPlayerNum, float Progress);
	void FinishOnlineGameSession(class FString ServerId);
	void StartOnlineGameSession(class FString ServerId);
	void ClearSystemUserControllerPairingChangedDelegate(struct FScriptDelegate PairingChangeDelegate);
	void AddSystemUserControllerPairingChangedDelegate(struct FScriptDelegate PairingChangeDelegate);
	void OnSystemUserControllerPairingChanged(int32_t NewLocalUserNum, int32_t PreviousLocalUserNum);
	void ClearAccountPickerInput();
	void LookForAccountPickerInput();
	void AddPlayerToSession(uint8_t ControllerId);
	void ClearPrimaryPlayer();
	void RemoveUserAssociation(uint8_t ControllerId);
	void MapEnd();
	void MapStart();
	void OnlineMatchEnd();
	void OnlineMatchStart(class FString MapName);
	void SetSessionDifficultyLevel(int32_t DifficultyLevel);
	void SetSessionGameplayModeName(struct FName GameplayModeName);
	void SetSessionGameplayMode(int32_t GameplayMode);
	TArray<bool> GetSyncedAchievements(uint8_t LocalUserNum);
	void SetPlayedWith(struct FUniqueNetId PlayerNetId);
	bool HandleBootMessage();
	void ClearErrorDialogClosedDelegate(struct FScriptDelegate InDelegate);
	void AddErrorDialogClosedDelegate(struct FScriptDelegate InDelegate);
	void OnErrorDialogClosed(int32_t LocalUserNum);
	void ClearCloseKickPlayerDialogDelegate(struct FScriptDelegate InDelegate);
	void AddCloseKickPlayerDialogDelegate(struct FScriptDelegate InDelegate);
	void OnCloseKickPlayerDialog();
	void ClearCommerceDialogClosedDelegate(struct FScriptDelegate InDelegate);
	void AddCommerceDialogClosedDelegate(struct FScriptDelegate InDelegate);
	void OnCommerceDialogClosed();
	bool WordFilterSanitizeString(class FString Comment, struct FScriptDelegate SanitizeDelegate, struct FUniqueNetId optionalPlayerID);
	void RemoveCanPlayOnlineChangedDelegate(struct FScriptDelegate Callback);
	void AddCanPlayOnlineChangedDelegate(struct FScriptDelegate Callback);
	bool RecordPlayersRecentlyMet(uint8_t LocalUserNum, class FString GameDescription, TArray<struct FUniqueNetId>& Players);
	void ClearSaveDataNoSpaceDialogCompleteDelegate(struct FScriptDelegate DeviceDelegate);
	void AddSaveDataNoSpaceDialogCompleteDelegate(struct FScriptDelegate DeviceDelegate);
	void OnSaveDataNoSpaceDialogComplete(bool bContinueWithoutSave);
	void ClearUnlockedDLCChangeDelegate(struct FScriptDelegate InDelegate);
	void AddUnlockedDLCChangeDelegate(struct FScriptDelegate InDelegate);
	TArray<struct FName> GetUnlockedDLC();
	void OnUnlockedDLCChange();
	bool GetOverlayEnabled();
	int32_t GetDLCPurchaseTime(struct FName AppName);
	void HandleGetUserInfoComplete(struct FName NewCurrency, class FString NewCountry);
	void GetPlayerCountry(uint8_t LocalUserNum);
	class FString GetPlayerLanguage(uint8_t LocalUserNum);
	void ClearReadPlayerCountryDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadPlayerCountryDelegate);
	void AddReadPlayerCountryDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadPlayerCountryDelegate);
	bool AnyPlayerChatRestricted();
	void InitializeTrophyAPI();
	void OpenStoreForItems(uint8_t LocalUserNum, TArray<class FString> Targets);
	void OpenStoreForDLC(uint8_t LocalUserNum, struct FName DLC);
	void OpenStoreForItemsAsync(uint8_t LocalUserNum, TArray<class FString> Targets, struct FScriptDelegate OnStorePurchaseCompleteDelegate);
	void OnStorePurchaseCompleteDelegate();
	void OpenErrorDialog(uint8_t LocalUserNum, EPS4ErrorDialog ErrorCode);
	void OpenPS4DisplayMode(uint8_t LocalUserNum, EPS4DisplayMode DisplayMode, TArray<class FString> optionalTargets, int32_t optionalServiceLabel);
	void ResetControllerColor(int32_t ControllerId);
	void SetControllerColor(int32_t ControllerId, struct FColor NewColor);
	bool AddInGamePost(class FString InPostID, uint8_t LocalUserNum, TArray<class FString> StringReplaceList);
	bool IsEnabled();
	void SetRichPresence(uint8_t LocalUserNum, class FString PresenceString, class FString GameDataString);
	void ClearAllDelegates();
	void ClearWriteSharedFileCompleteDelegate(struct FScriptDelegate WriteSharedFileCompleteDelegate);
	void AddWriteSharedFileCompleteDelegate(struct FScriptDelegate WriteSharedFileCompleteDelegate);
	bool WriteSharedFile(class FString UserId, class FString Filename, TArray<uint8_t>& Contents);
	void OnWriteSharedFileComplete(bool bWasSuccessful, class FString UserId, class FString Filename, class FString SharedHandle);
	void ClearReadSharedFileCompleteDelegate(struct FScriptDelegate ReadSharedFileCompleteDelegate);
	void AddReadSharedFileCompleteDelegate(struct FScriptDelegate ReadSharedFileCompleteDelegate);
	bool ReadSharedFile(class FString SharedHandle);
	void OnReadSharedFileComplete(bool bWasSuccessful, class FString SharedHandle);
	bool ClearSharedFile(class FString SharedHandle);
	bool ClearSharedFiles();
	bool GetSharedFileContents(class FString SharedHandle, TArray<uint8_t>& FileContents);
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
	bool WriteUserFileInternal(class FString UserId, class FString Filename, TArray<uint8_t>& FileContents);
	bool SetVoiceReceiveVolume(float VoiceVolume);
	bool GetFriendJoinURL(struct FUniqueNetId FriendUID, class FString& ServerURL, class FString& ServerUID);
	bool GetCommandlineJoinURL(bool bMarkAsJoined, class FString& ServerURL, class FString& ServerUID);
	bool Int64ToUniqueNetId(class FString UIDString, struct FUniqueNetId& OutUID);
	class FString UniqueNetIdToInt64(struct FUniqueNetId& Uid);
	void NotifyVOIPPlaybackFinished(class UAudioComponent* VOIPAudioComponent);
	void OnVOIPPlaybackFinished(class UAudioComponent* AC);
	bool ShowProfileUI(uint8_t LocalUserNum, class FString optionalSubURL, struct FUniqueNetId optionalPlayerUID);
	class FString UniqueNetIdToPlayerName(struct FUniqueNetId& Uid);
	bool DisplayAchievementProgress(int32_t AchievementId, int32_t ProgressCount, int32_t MaxProgress);
	bool CreateLeaderboard(class FString LeaderboardName, ELeaderboardSortType SortType, ELeaderboardFormat DisplayFormat);
	bool ResetStats(bool bResetAchievements);
	bool ShowCustomMessageUI(uint8_t LocalUserNum, class FString MessageTitle, class FString NonEditableMessage, class FString optionalEditableMessage, TArray<struct FUniqueNetId>& Recipients);
	void ClearCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId);
	class UOnlineProfileSettings* GetCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId);
	void ClearReadCrossTitleProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate);
	void AddReadCrossTitleProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate);
	void OnReadCrossTitleProfileSettingsComplete(uint8_t LocalUserNum, int32_t TitleId, bool bWasSuccessful);
	bool ReadCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId, class UOnlineProfileSettings* ProfileSettings);
	void GetSteamClanData(TArray<struct FSteamPlayerClanData>& Results);
	void ClearGetNumberOfCurrentPlayersCompleteDelegate(struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate);
	void AddGetNumberOfCurrentPlayersCompleteDelegate(struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate);
	void OnGetNumberOfCurrentPlayersComplete(int32_t TotalPlayers);
	bool GetNumberOfCurrentPlayers();
	void ReadOnlineAvatars(EAvatarSize Size, struct FScriptDelegate ReadOnlineAvatarCompleteDelegate, TArray<struct FUniqueNetId>& PlayerNetIds);
	bool ShowCustomPlayersUI(uint8_t LocalUserNum, class FString Title, class FString Description, TArray<struct FUniqueNetId>& Players);
	EOnlineEnumerationReadState GetAchievements(uint8_t LocalUserNum, int32_t optionalTitleId, TArray<struct FAchievementDetails>& Achievements);
	void ClearReadAchievementsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate);
	void AddReadAchievementsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate);
	void OnReadAchievementsComplete(int32_t TitleId);
	bool ReadAchievements(uint8_t LocalUserNum, int32_t optionalTitleId, bool optionalBShouldReadText, bool optionalBShouldReadImages);
	bool ShowPlayersUI(uint8_t LocalUserNum);
	bool ShowFriendsInviteUI(uint8_t LocalUserNum, struct FUniqueNetId PlayerID);
	bool ShowFriendsUI(uint8_t LocalUserNum);
	void ClearProfileDataChangedDelegate(uint8_t LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate);
	void AddProfileDataChangedDelegate(uint8_t LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate);
	void OnProfileDataChanged();
	bool UnlockGamerPicture(uint8_t LocalUserNum, int32_t PictureId);
	void ClearUnlockAchievementCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate);
	void AddUnlockAchievementCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate);
	void OnUnlockAchievementComplete(bool bWasSuccessful);
	bool UnlockAchievement(uint8_t LocalUserNum, int32_t AchievementId, float optionalPercentComplete);
	bool UpdateStat(uint8_t LocalUserNum, struct FName StatName, int32_t Points);
	bool IsDeviceValid(int32_t DeviceID, int32_t optionalSizeNeeded);
	int32_t GetDeviceSelectionResults(uint8_t LocalUserNum, class FString& DeviceName);
	void ClearDeviceSelectionDoneDelegate(uint8_t LocalUserNum, struct FScriptDelegate DeviceDelegate);
	void AddDeviceSelectionDoneDelegate(uint8_t LocalUserNum, struct FScriptDelegate DeviceDelegate);
	void OnDeviceSelectionComplete(bool bWasSuccessful);
	bool ShowDeviceSelectionUI(uint8_t LocalUserNum, int32_t SizeNeeded, bool optionalBManageStorage);
	bool ShowContentMarketplaceUI(uint8_t LocalUserNum, int32_t optionalCategoryMask, int32_t optionalOfferId);
	bool ShowInviteUI(uint8_t LocalUserNum, class FString optionalInviteText);
	bool ShowAchievementsUI(uint8_t LocalUserNum);
	bool ShowMessagesUI(uint8_t LocalUserNum);
	bool ShowGamerCardUI(uint8_t LocalUserNum, struct FUniqueNetId optionalUniqueId, class FString optionalPlayerName);
	bool ShowFeedbackUI(uint8_t LocalUserNum, struct FUniqueNetId PlayerID);
	bool DeleteMessage(uint8_t LocalUserNum, int32_t MessageIndex);
	bool UnmuteAll(uint8_t LocalUserNum);
	bool MuteAll(uint8_t LocalUserNum, bool bAllowFriends);
	bool RegisterStatGuid(struct FUniqueNetId PlayerID, class FString& ClientStatGuid);
	class FString GetClientStatGuid();
	void ClearRegisterHostStatGuidCompleteDelegateDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate);
	void AddRegisterHostStatGuidCompleteDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate);
	void OnRegisterHostStatGuidComplete(bool bWasSuccessful);
	bool RegisterHostStatGuid(class FString& HostStatGuid);
	class FString GetHostStatGuid();
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
	bool DenyFriendInvite(uint8_t LocalUserNum, struct FUniqueNetId RequestingPlayer);
	void ClearDenyFriendInviteCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate);
	void AddDenyFriendInviteCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate);
	void OnDenyFriendInviteComplete(struct FUniqueNetId FriendId, class UError* Error);
	bool AcceptFriendInvite(uint8_t LocalUserNum, struct FUniqueNetId RequestingPlayer);
	void ClearAcceptFriendInviteCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate);
	void AddAcceptFriendInviteCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate);
	void OnAcceptFriendInviteComplete(struct FUniqueNetId FriendId, class UError* Error);
	bool RemoveFriend(uint8_t LocalUserNum, struct FUniqueNetId FormerFriend);
	void ClearRemoveFriendCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RemoveFriendDelegate);
	void AddRemoveFriendCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RemoveFriendDelegate);
	void OnRemoveFriendComplete(bool bWasSuccessful, struct FUniqueNetId RemovedID);
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
	bool HideKeyboardUI(uint8_t LocalUserNum);
	bool ShowKeyboardUI(uint8_t LocalUserNum, class FString TitleText, class FString DescriptionText, bool optionalBIsPassword, bool optionalBShouldValidate, class FString optionalDefaultText, int32_t optionalMaxResultLength);
	void SetOnlineStatus(uint8_t LocalUserNum, int32_t StatusId, TArray<struct FLocalizedStringSetting>& LocalizedStringSettings, TArray<struct FSettingsProperty>& Properties);
	EOnlineEnumerationReadState GetTitleFileState(class FString Filename);
	bool GetTitleFileContents(class FString Filename, TArray<uint8_t>& FileContents);
	void ClearReadTitleFileCompleteDelegate(struct FScriptDelegate ReadTitleFileCompleteDelegate);
	void AddReadTitleFileCompleteDelegate(struct FScriptDelegate ReadTitleFileCompleteDelegate);
	bool ReadTitleFile(class FString FileToRead);
	void OnReadTitleFileComplete(bool bWasSuccessful, class FString Filename);
	void ClearStorageDeviceChangeDelegate(struct FScriptDelegate StorageDeviceChangeDelegate);
	void AddStorageDeviceChangeDelegate(struct FScriptDelegate StorageDeviceChangeDelegate);
	void OnStorageDeviceChange();
	ENATType GetNATType();
	void ClearConnectionStatusChangeDelegate(struct FScriptDelegate ConnectionStatusDelegate);
	void AddConnectionStatusChangeDelegate(struct FScriptDelegate ConnectionStatusDelegate);
	void OnConnectionStatusChange(EOnlineServerConnectionStatus ConnectionStatus);
	EOnlineServerConnectionStatus GetCurrentConnectionStatus();
	bool IsControllerConnected(int32_t ControllerId);
	void ClearUserRestoredDelegate(struct FScriptDelegate UserRestoredDelegate);
	void AddUserRestoredDelegate(struct FScriptDelegate UserRestoredDelegate);
	void OnUserRestored(uint8_t ControllerId);
	void ClearUserOrphanedDelegate(struct FScriptDelegate UserOrphanedDelegate);
	void AddUserOrphanedDelegate(struct FScriptDelegate UserOrphanedDelegate);
	void OnUserOrphaned(uint8_t ControllerId);
	void ClearControllerChangeDelegate(struct FScriptDelegate ControllerChangeDelegate);
	void AddControllerChangeDelegate(struct FScriptDelegate ControllerChangeDelegate);
	void OnControllerChange(int32_t ControllerId, bool bIsConnected);
	void SetNetworkNotificationPosition(ENetworkNotificationPosition NewPos);
	ENetworkNotificationPosition GetNetworkNotificationPosition();
	void ClearExternalUIChangeDelegate(struct FScriptDelegate ExternalUIDelegate);
	void AddExternalUIChangeDelegate(struct FScriptDelegate ExternalUIDelegate);
	void OnExternalUIChange(bool bIsOpening);
	void ClearLinkStatusChangeDelegate(struct FScriptDelegate LinkStatusDelegate);
	void AddLinkStatusChangeDelegate(struct FScriptDelegate LinkStatusDelegate);
	void OnLinkStatusChange(bool bIsConnected);
	bool HasLinkConnection();
	class FString eventGetPlayerNicknameFromIndex(int32_t UserIndex);
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
	void OnPlayerTalkingStateChange(struct FUniqueNetId Player, bool bIsTalking);
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
	EOnlineEnumerationReadState GetFriendsList(uint8_t LocalUserNum, int32_t optionalCount, int32_t optionalStartingAt, TArray<struct FOnlineFriend>& Friends);
	void ClearReadFriendsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate);
	void AddReadFriendsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate);
	void OnReadFriendsComplete(bool bWasSuccessful);
	bool ReadFriendsList(uint8_t LocalUserNum, int32_t optionalCount, int32_t optionalStartingAt);
	void ClearWritePlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate);
	void AddWritePlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate);
	void OnWritePlayerStorageComplete(uint8_t LocalUserNum, bool bWasSuccessful);
	bool WritePlayerStorage(uint8_t LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int32_t optionalDeviceID);
	class UOnlinePlayerStorage* GetPlayerStorage(uint8_t LocalUserNum);
	void ClearReadPlayerStorageForNetIdCompleteDelegate(struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate);
	void AddReadPlayerStorageForNetIdCompleteDelegate(struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate);
	void OnReadPlayerStorageForNetIdComplete(struct FUniqueNetId NetId, bool bWasSuccessful);
	bool ReadPlayerStorageForNetId(uint8_t LocalUserNum, struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage);
	void ClearReadPlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate);
	void AddReadPlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate);
	void OnReadPlayerStorageComplete(uint8_t LocalUserNum, bool bWasSuccessful);
	bool ReadPlayerStorage(uint8_t LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int32_t optionalDeviceID);
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
	void ClearAvatarChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate AvatarDelegate);
	void AddAvatarChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate AvatarDelegate);
	void GetFriendPresence(struct FOnlineFriend& FriendData);
	void ClearFriendPresenceChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate PresenceDelegate);
	void AddFriendPresenceChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate PresenceDelegate);
	void AddFriendsChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendsDelegate);
	void ClearMutingChangeDelegate(struct FScriptDelegate MutingDelegate);
	void AddMutingChangeDelegate(struct FScriptDelegate MutingDelegate);
	void ClearLoginCancelledDelegate(struct FScriptDelegate CancelledDelegate);
	void AddLoginCancelledDelegate(struct FScriptDelegate CancelledDelegate);
	void ClearLoginStatusChangeDelegate(struct FScriptDelegate LoginStatusDelegate, uint8_t LocalUserNum);
	void AddLoginStatusChangeDelegate(struct FScriptDelegate LoginStatusDelegate, uint8_t LocalUserNum);
	void OnLoginStatusChange(ELoginStatus NewStatus, struct FUniqueNetId NewId);
	void ClearLoginChangeDelegate(struct FScriptDelegate LoginDelegate);
	void AddLoginChangeDelegate(struct FScriptDelegate LoginDelegate);
	void ClearUserSignInCompleteDelegate(struct FScriptDelegate UserSignInCompleteDelegate);
	void AddUserSignInCompleteDelegate(struct FScriptDelegate UserSignInCompleteDelegate);
	void ClearUserSwitchCompleteDelegate(struct FScriptDelegate UserSwitchCompleteDelegate);
	void AddUserSwitchCompleteDelegate(struct FScriptDelegate UserSwitchCompleteDelegate);
	void SetPrimaryPlayerGamepadToLastInput();
	bool IsMuted(uint8_t LocalUserNum, struct FUniqueNetId PlayerID);
	bool AreAnyFriends(uint8_t LocalUserNum, TArray<struct FFriendsQuery>& Query);
	bool IsFriend(uint8_t LocalUserNum, struct FUniqueNetId PlayerID);
	void RequestRestrictedFeatureMessaging(uint8_t LocalUserNum, EFeaturePrivilege RestrictedFeature);
	bool CanUploadFitnessData(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	bool CanShareKinectContent(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	bool CanShareWithSocialNetwork(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	bool CanBrowseInternet(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	bool CanAccessPremiumVideoContent(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	bool CanAccessPremiumContent(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	bool CanUseCloudStorage(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	bool CanRecordDVRClips(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	bool CanShowPresenceInformation(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	bool CanViewPlayerProfiles(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	bool CanPurchaseContent(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	bool CanDownloadUserContent(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	bool CanShareUserCreatedContent(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	bool CanCommunicateVoice(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	bool CanCommunicateVideo(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	bool CanCommunicateText(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	EFeaturePrivilegeLevel CanCommunicate(uint8_t LocalUserNum, ECommunicationMethod CommMethod, bool optionalBAttemptToResolve);
	bool CanPlayOnline(uint8_t LocalUserNum, bool optionalBAttemptToResolve, class FString optionalReason, EFeaturePrivilegeLevel& PrivilegeLevelHint);
	class FString GetPlayerNickname(uint8_t LocalUserNum);
	bool GetUniquePlayerId(uint8_t LocalUserNum, struct FUniqueNetId& PlayerID);
	bool IsGuestLogin(uint8_t LocalUserNum);
	ELoginStatus GetLoginStatus(uint8_t LocalUserNum);
	void ClearLogoutCompletedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LogoutDelegate);
	void AddLogoutCompletedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LogoutDelegate);
	void OnLogoutCompleted(bool bWasSuccessful);
	bool Logout(uint8_t LocalUserNum);
	void ClearLoginFailedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LoginFailedDelegate);
	void AddLoginFailedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LoginFailedDelegate);
	void OnLoginFailed(uint8_t LocalUserNum, EOnlineServerConnectionStatus ErrorCode);
	bool AutoLogin();
	bool Login(uint8_t LocalUserNum, class FString LoginName, class FString Password, bool optionalBWantsLocalOnly);
	void SetKickPlayerDialogActive(bool Active);
	bool IsUserSwitchActive();
	void SetKickPreviousUser(uint8_t LocalUserNum);
	bool SupportInGameLogin();
	bool ShowControllerUI();
	bool ShowLoginUIForOrphanedUser(uint8_t LocalUserNum);
	bool ShowLoginUI(uint8_t LocalUserNum, bool optionalBShowOnlineOnly);
	void OnAvatarChange(struct FUniqueNetId PlayerID);
	void FriendPresenceChange(struct FUniqueNetId PlayerID);
	void AddFriendInviteAcceptedDelegate(uint8_t LocalUserNum, struct FScriptDelegate InviteAccepted);
	void OnFriendInviteAccepted(struct FUniqueNetId AcceptingPlayerId);
	void OnFriendsChange();
	void OnMutingChange();
	void OnLoginCancelled();
	void OnLoginChange(uint8_t LocalUserNum);
	void OnUserSignInComplete(uint8_t LocalUserNum);
	void OnUserSwitchComplete(uint8_t LocalUserNum);
	void eventExit();
	bool eventPostInit();
	bool eventInit();
	void CanPlayOnlineChanged(uint8_t LocalUserNum);
};

// Class OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks
// 0x0020 (0x0090 - 0x00B0)
class UOnlinePurchaseInterfaceSteamworks : public UOnlinePurchaseInterfaceImpl
{
public:
	TArray<struct FAppPriceInfoRequest>                AppPriceInfoRequests;                          // 0x0090 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     MicroTxnResponseDelegates;                     // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks");
		}

		return uClassPointer;
	};

	void ClearMicroTxnResponseDelegate(struct FScriptDelegate ResponseMicroTxnDelegate);
	void AddMicroTxnResponseDelegate(struct FScriptDelegate ResponseMicroTxnDelegate);
	class FString FormatCurrency(class FString Currency, int32_t Price);
	void HandleGetAppPriceInfoComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bDidSucceed);
	bool GetAppPriceInfo(struct FScriptDelegate Callback, struct FUniqueNetId& PlayerID, TArray<struct FName>& AppNames);
	bool AppIdToName(class FString AppID, bool optionalBOptional, struct FName& AppName);
	bool AppNameToId(struct FName AppName, bool optionalBOptional, class FString& AppID);
};

// Class OnlineSubsystemSteamworks.SteamWorkshopCommandlet
// 0x000C (0x00B4 - 0x00C0)
class USteamWorkshopCommandlet : public UCommandlet
{
public:
	class UOnlineSubsystemCommonImpl*                  OnlineSub;                                     // 0x00B8 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemSteamworks.SteamWorkshopCommandlet");
		}

		return uClassPointer;
	};

	bool eventInit();
};

// Class OnlineSubsystemSteamworks.SteamWorkshopEngine
// 0x0004 (0x0B48 - 0x0B4C)
class USteamWorkshopEngine : public UGameEngine
{
public:
	uint32_t                                           bHasFinsihed : 1;                              // 0x0B48 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemSteamworks.SteamWorkshopEngine");
		}

		return uClassPointer;
	};

};

// Class OnlineSubsystemSteamworks.IpNetDriverSteamworks
// 0x0018 (0x02D8 - 0x02F0)
class UIpNetDriverSteamworks : public UTcpNetDriver
{
public:
	uint32_t                                           bSteamSocketsOnly : 1;                         // 0x02D8 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	uint8_t                                           UnknownData00[0x14];                           // 0x02DC (0x0014) FINAL PADDING

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemSteamworks.IpNetDriverSteamworks");
		}

		return uClassPointer;
	};

};

// Class OnlineSubsystemSteamworks.IpNetConnectionSteamworks
// 0x0000 (0xB218 - 0xB218)
class UIpNetConnectionSteamworks : public UTcpipConnection
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemSteamworks.IpNetConnectionSteamworks");
		}

		return uClassPointer;
	};

};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
