/*
#############################################################################################
# Rocket League SDK (RLSDK) Season 20 (v2.61)
# Generated with CodeRedGenerator v1.1.5 on 11/05/2025 07:11PM
# ========================================================================================= #
# File: IpDrv_classes.hpp
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

#define CONST_PLAYER_MATCH                                0
#define CONST_RANKED_MATCH                                1
#define CONST_REC_MATCH                                   2
#define CONST_PRIVATE_MATCH                               3
#define CONST_RANKEDPROVIDERTAG                           "PlaylistsRanked"
#define CONST_UNRANKEDPROVIDERTAG                         "PlaylistsUnranked"
#define CONST_RECMODEPROVIDERTAG                          "PlaylistsRecMode"
#define CONST_PRIVATEPROVIDERTAG                          "PlaylistsPrivate"

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum IpDrv.AdHocDelegates.EAdHocDesiredState
enum class EAdHocDesiredState : uint8_t
{
	AHDS_None                                          = 0,
	AHDS_Initialized                                   = 1,
	AHDS_CreateAccessPoint                             = 2,
	AHDS_CreateStation                                 = 3,
	AHDS_ScanForAccessPoints                           = 4,
	AHDS_ConnectToChosenStation                        = 5,
	AHDS_DisconnectSpecifiedStation                    = 6,
	AHDS_DisconnectFromAccessPoint                     = 7,
	AHDS_AccessPointRejecting                          = 8,
	AHDS_Exit                                          = 9,
	AHDS_Max                                           = 10
};

// Enum IpDrv.AdHocDelegates.EAdHocCurrentState
enum class EAdHocCurrentState : uint8_t
{
	AHCS_None                                          = 0,
	AHCS_Initializing                                  = 1,
	AHCS_Initialized                                   = 2,
	AHCS_Station                                       = 3,
	AHCS_StationScanning                               = 4,
	AHCS_StationConnecting                             = 5,
	AHCS_StationConnected                              = 6,
	AHCS_StationDisconnected                           = 7,
	AHCS_StationClosing                                = 8,
	AHCS_AccessPointCreating                           = 9,
	AHCS_AccessPointCreated                            = 10,
	AHCS_AccessPointScanning                           = 11,
	AHCS_AccessPointRejecting                          = 12,
	AHCS_AccessPointClosing                            = 13,
	AHCS_Finalizing                                    = 14,
	AHCS_Error                                         = 15,
	AHCS_END                                           = 16
};

// Enum IpDrv.OnlineImageDownloaderWeb.EOnlineImageDownloadState
enum class EOnlineImageDownloadState : uint8_t
{
	PIDS_NotStarted                                    = 0,
	PIDS_Downloading                                   = 1,
	PIDS_Succeeded                                     = 2,
	PIDS_Failed                                        = 3,
	PIDS_END                                           = 4
};

// Enum IpDrv.InternetLink.ELinkMode
enum class ELinkMode : uint8_t
{
	MODE_Text                                          = 0,
	MODE_Line                                          = 1,
	MODE_Binary                                        = 2,
	MODE_END                                           = 3
};

// Enum IpDrv.InternetLink.EReceiveMode
enum class EReceiveMode : uint8_t
{
	RMODE_Manual                                       = 0,
	RMODE_Event                                        = 1,
	RMODE_END                                          = 2
};

// Enum IpDrv.InternetLink.ELineMode
enum class ELineMode : uint8_t
{
	LMODE_auto                                         = 0,
	LMODE_DOS                                          = 1,
	LMODE_UNIX                                         = 2,
	LMODE_MAC                                          = 3,
	LMODE_END                                          = 4
};

// Enum IpDrv.McpClashMobBase.McpChallengeFileStatus
enum class EMcpChallengeFileStatus : uint8_t
{
	MCFS_NotStarted                                    = 0,
	MCFS_Pending                                       = 1,
	MCFS_Success                                       = 2,
	MCFS_Failed                                        = 3,
	MCFS_END                                           = 4
};

// Enum IpDrv.OnlineTitleFileDownloadBase.EMcpFileCompressionType
enum class EMcpFileCompressionType : uint8_t
{
	MFCT_NONE                                          = 0,
	MFCT_ZLIB                                          = 1,
	MFCT_END                                           = 2
};

// Enum IpDrv.McpGroupsBase.EMcpGroupAccessLevel
enum class EMcpGroupAccessLevel : uint8_t
{
	MGAL_Owner                                         = 0,
	MGAL_Member                                        = 1,
	MGAL_Public                                        = 2,
	MGAL_END                                           = 3
};

// Enum IpDrv.McpGroupsBase.EMcpGroupAcceptState
enum class EMcpGroupAcceptState : uint8_t
{
	MGAS_Error                                         = 0,
	MGAS_Pending                                       = 1,
	MGAS_Accepted                                      = 2,
	MGAS_END                                           = 3
};

// Enum IpDrv.McpMessageBase.EMcpMessageCompressionType
enum class EMcpMessageCompressionType : uint8_t
{
	MMCT_NONE                                          = 0,
	MMCT_LZO                                           = 1,
	MMCT_ZLIB                                          = 2,
	MMCT_END                                           = 3
};

// Enum IpDrv.MeshBeacon.EMeshBeaconPacketType
enum class EMeshBeaconPacketType : uint8_t
{
	MB_Packet_UnknownType                              = 0,
	MB_Packet_ClientNewConnectionRequest               = 1,
	MB_Packet_ClientBeginBandwidthTest                 = 2,
	MB_Packet_ClientCreateNewSessionResponse           = 3,
	MB_Packet_HostNewConnectionResponse                = 4,
	MB_Packet_HostBandwidthTestRequest                 = 5,
	MB_Packet_HostCompletedBandwidthTest               = 6,
	MB_Packet_HostTravelRequest                        = 7,
	MB_Packet_HostCreateNewSessionRequest              = 8,
	MB_Packet_DummyData                                = 9,
	MB_Packet_Heartbeat                                = 10,
	MB_Packet_END                                      = 11
};

// Enum IpDrv.MeshBeacon.EMeshBeaconConnectionResult
enum class EMeshBeaconConnectionResult : uint8_t
{
	MB_ConnectionResult_Succeeded                      = 0,
	MB_ConnectionResult_Duplicate                      = 1,
	MB_ConnectionResult_Timeout                        = 2,
	MB_ConnectionResult_Error                          = 3,
	MB_ConnectionResult_END                            = 4
};

// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestState
enum class EMeshBeaconBandwidthTestState : uint8_t
{
	MB_BandwidthTestState_NotStarted                   = 0,
	MB_BandwidthTestState_RequestPending               = 1,
	MB_BandwidthTestState_StartPending                 = 2,
	MB_BandwidthTestState_InProgress                   = 3,
	MB_BandwidthTestState_Completed                    = 4,
	MB_BandwidthTestState_Incomplete                   = 5,
	MB_BandwidthTestState_Timeout                      = 6,
	MB_BandwidthTestState_Error                        = 7,
	MB_BandwidthTestState_END                          = 8
};

// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestResult
enum class EMeshBeaconBandwidthTestResult : uint8_t
{
	MB_BandwidthTestResult_Succeeded                   = 0,
	MB_BandwidthTestResult_Timeout                     = 1,
	MB_BandwidthTestResult_Error                       = 2,
	MB_BandwidthTestResult_END                         = 3
};

// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestType
enum class EMeshBeaconBandwidthTestType : uint8_t
{
	MB_BandwidthTestType_Upstream                      = 0,
	MB_BandwidthTestType_Downstream                    = 1,
	MB_BandwidthTestType_RoundtripLatency              = 2,
	MB_BandwidthTestType_END                           = 3
};

// Enum IpDrv.MeshBeaconClient.EMeshBeaconClientState
enum class EMeshBeaconClientState : uint8_t
{
	MBCS_None                                          = 0,
	MBCS_Connecting                                    = 1,
	MBCS_Connected                                     = 2,
	MBCS_ConnectionFailed                              = 3,
	MBCS_AwaitingResponse                              = 4,
	MBCS_Closed                                        = 5,
	MBCS_END                                           = 6
};

// Enum IpDrv.OnlineEventsInterfaceMcp.EEventUploadType
enum class EEventUploadType : uint8_t
{
	EUT_GenericStats                                   = 0,
	EUT_ProfileData                                    = 1,
	EUT_MatchmakingData                                = 2,
	EUT_PlaylistPopulation                             = 3,
	EUT_END                                            = 4
};

// Enum IpDrv.PartyBeacon.EReservationPacketType
enum class EReservationPacketType : uint8_t
{
	RPT_UnknownPacketType                              = 0,
	RPT_ClientReservationRequest                       = 1,
	RPT_ClientReservationUpdateRequest                 = 2,
	RPT_ClientCancellationRequest                      = 3,
	RPT_HostReservationResponse                        = 4,
	RPT_HostReservationCountUpdate                     = 5,
	RPT_HostTravelRequest                              = 6,
	RPT_HostIsReady                                    = 7,
	RPT_HostHasCancelled                               = 8,
	RPT_Heartbeat                                      = 9,
	RPT_END                                            = 10
};

// Enum IpDrv.PartyBeacon.EPartyReservationResult
enum class EPartyReservationResult : uint8_t
{
	PRR_GeneralError                                   = 0,
	PRR_PartyLimitReached                              = 1,
	PRR_IncorrectPlayerCount                           = 2,
	PRR_RequestTimedOut                                = 3,
	PRR_ReservationDuplicate                           = 4,
	PRR_ReservationNotFound                            = 5,
	PRR_ReservationAccepted                            = 6,
	PRR_ReservationDenied                              = 7,
	PRR_END                                            = 8
};

// Enum IpDrv.PartyBeaconClient.EPartyBeaconClientRequest
enum class EPartyBeaconClientRequest : uint8_t
{
	PBClientRequest_NewReservation                     = 0,
	PBClientRequest_UpdateReservation                  = 1,
	PBClientRequest_END                                = 2
};

// Enum IpDrv.PartyBeaconClient.EPartyBeaconClientState
enum class EPartyBeaconClientState : uint8_t
{
	PBCS_None                                          = 0,
	PBCS_Connecting                                    = 1,
	PBCS_Connected                                     = 2,
	PBCS_ConnectionFailed                              = 3,
	PBCS_AwaitingResponse                              = 4,
	PBCS_Closed                                        = 5,
	PBCS_END                                           = 6
};

// Enum IpDrv.PartyBeaconHost.EPartyBeaconHostState
enum class EPartyBeaconHostState : uint8_t
{
	PBHS_AllowReservations                             = 0,
	PBHS_DenyReservations                              = 1,
	PBHS_END                                           = 2
};

// Enum IpDrv.TcpLink.ELinkState
enum class ELinkState : uint8_t
{
	STATE_Initialized                                  = 0,
	STATE_Ready                                        = 1,
	STATE_Listening                                    = 2,
	STATE_Connecting                                   = 3,
	STATE_Connected                                    = 4,
	STATE_ListenClosePending                           = 5,
	STATE_ConnectClosePending                          = 6,
	STATE_ListenClosing                                = 7,
	STATE_ConnectClosing                               = 8,
	STATE_END                                          = 9
};

// Enum IpDrv.TitleFileDownloadCache.ETitleFileFileOp
enum class ETitleFileFileOp : uint8_t
{
	TitleFile_None                                     = 0,
	TitleFile_Save                                     = 1,
	TitleFile_Load                                     = 2,
	TitleFile_END                                      = 3
};

// Enum IpDrv.WebRequest.ERequestType
enum class ERequestType : uint8_t
{
	Request_GET                                        = 0,
	Request_POST                                       = 1,
	Request_END                                        = 2
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class IpDrv.AdHocDelegates
// 0x00D8 (0x0060 - 0x0138)
class UAdHocDelegates : public UObject
{
public:
	struct FScriptDelegate                             __EventAdHocOnNetworkChanged__Delegate;        // 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAdHocError__Delegate;                   // 0x0078 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAdHocInitialized__Delegate;             // 0x0090 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAccessPointCreated__Delegate;           // 0x00A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventBecomeStation__Delegate;                // 0x00C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventStationConnected__Delegate;             // 0x00D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventStationDisconnected__Delegate;          // 0x00F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAdHocFinalized__Delegate;               // 0x0108 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAdHocDestroyed__Delegate;               // 0x0120 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.AdHocDelegates");
		}

		return uClassPointer;
	};

	void EventAdHocDestroyed();
	void EventAdHocFinalized();
	void EventStationDisconnected();
	void EventStationConnected();
	void EventBecomeStation();
	void EventAccessPointCreated();
	void EventAdHocInitialized();
	void EventAdHocError(class UError* Error);
	void EventAdHocOnNetworkChanged(const class TArray<struct FAdHocAccessPointInfo>& Ahapis);
};

// Class IpDrv.AdHocErrors
// 0x0008 (0x0080 - 0x0088)
class UAdHocErrors : public UErrorList
{
public:
	class UErrorType*                                  AdHocError;                                    // 0x0080 (0x0008) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.AdHocErrors");
		}

		return uClassPointer;
	};

};

// Class IpDrv.AvatarDownload
// 0x0080 (0x0060 - 0x00E0)
class UAvatarDownload : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x0060 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      URL;                                           // 0x00A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	EAvatarSize                                        AvatarSize;                                    // 0x00B8 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x7];                            // 0x00B9 (0x0007) MISSED OFFSET
	class UTexture*                                    Texture;                                       // 0x00C0 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             Callbacks;                                     // 0x00C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.AvatarDownload");
		}

		return uClassPointer;
	};

};

// Class IpDrv.OnlineSubsystemCommonImpl
// 0x0048 (0x0378 - 0x03C0)
class UOnlineSubsystemCommonImpl : public UOnlineSubsystem
{
public:
	struct FPointer                                    VoiceEngine;                                   // 0x0378 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	int32_t                                            MaxLocalTalkers;                               // 0x0380 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxRemoteTalkers;                              // 0x0384 (0x0004) [0x0000000000004000] (CPF_Config)  
	uint32_t                                           bIsUsingSpeechRecognition : 1;                 // 0x0388 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	uint8_t                                          UnknownData00[0x4];                            // 0x038C (0x0004) MISSED OFFSET
	class UOnlineGameInterfaceImpl*                    GameInterfaceImpl;                             // 0x0390 (0x0008) [0x0000000000000000]               
	class UOnlineAuthInterfaceImpl*                    AuthInterfaceImpl;                             // 0x0398 (0x0008) [0x0000000000000000]               
	class UOnlinePurchaseInterfaceImpl*                PurchaseInterfaceImpl;                         // 0x03A0 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __OnSanitizeStringComplete__Delegate;          // 0x03A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineSubsystemCommonImpl");
		}

		return uClassPointer;
	};

	void GetRegisteredPlayers(const class FName& SessionName, class TArray<struct FUniqueNetId>& outOutRegisteredPlayers);
	bool IsPlayerInSession(const class FName& SessionName, const struct FUniqueNetId& PlayerID);
	class FString eventGetPlayerNicknameFromIndex(int32_t UserIndex);
	void OnSanitizeStringComplete(const struct FWordFilterResult& Result);
};

// Class IpDrv.AvatarDownloadComponent
// 0x0010 (0x0070 - 0x0080)
class UAvatarDownloadComponent : public UComponent
{
public:
	class UAvatarDownloadMap*                          AvatarDownloadCache;                           // 0x0070 (0x0008) [0x0000004004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline | CPF_PrivateWrite)
	class UOnlineImageDownloaderWeb*                   ImageDownloader;                               // 0x0078 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.AvatarDownloadComponent");
		}

		return uClassPointer;
	};

	void TriggerAvatarCallbacks(class UAvatarDownload* Avatar);
	void HandleOnlineImageDownloaded(const struct FOnlineImageDownload& ImageInfo);
	class UAvatarDownload* GetAvatar(const struct FUniqueNetId& PlayerID, EAvatarSize Size);
	void ClearPendingDownloads();
	void CleanupAvatars();
	void DownloadAvatar(const struct FUniqueNetId& PlayerID, EAvatarSize Size, const class FString& URL);
	void StoreNewAvatars(EAvatarSize Size, const struct FScriptDelegate& ReadOnlineAvatarCompleteDelegate, class TArray<struct FUniqueNetId>& outNewPlayerIDs);
	void ProcessOldRequests(EAvatarSize SizeType, const struct FScriptDelegate& ReadOnlineAvatarCompleteDelegate, class TArray<struct FUniqueNetId>& outInPlayerIDs, class TArray<struct FUniqueNetId>& outNewRequestIDs);
	bool TryAddAvatarTextureCallback(const struct FUniqueNetId& PlayerNetId, EAvatarSize Size, const struct FScriptDelegate& ReadOnlineAvatarCompleteDelegate);
};

// Class IpDrv.AvatarDownloadMap
// 0x00F0 (0x0070 - 0x0160)
class UAvatarDownloadMap : public UComponent
{
public:
	struct FMap_Mirror                                 AvatarMap;                                     // 0x0070 (0x0050) [0x0000000000001000] (CPF_Native)  
	struct FMap_Mirror                                 ImageMap;                                      // 0x00C0 (0x0050) [0x0000000000001000] (CPF_Native)  
	struct FMap_Mirror                                 AvatarsPendingImages;                          // 0x0110 (0x0050) [0x0000000000001000] (CPF_Native)  

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.AvatarDownloadMap");
		}

		return uClassPointer;
	};

	bool ContainsImage(const class FString& Key);
	bool ContainsAvatar(struct FAvatarKey& outKey);
	void OnAvatarReceivedImage(class UAvatarDownload* Avatar);
	void RemoveImage(const class FString& Key);
	void RemoveAvatar(struct FAvatarKey& outKey);
	void RemoveAllNetIDs(struct FUniqueNetId& outPlayerID);
	void ClearAvatarsPendingImages();
	void ClearImages();
	void ClearAvatars();
	void Clear();
	bool TryGetImage(const class FString& Key, class UTexture*& outOutValue);
	bool TryGetAvatar(struct FAvatarKey& outKey, class UAvatarDownload*& outOutValue);
	void GetAvatarsPendingImage(const class FString& Key, class TArray<class UAvatarDownload*>& outOutAvatars);
	class UTexture* GetImage(const class FString& Key);
	class UAvatarDownload* GetAvatar(struct FAvatarKey& outKey);
	void AddAvatarPendingImage(class UAvatarDownload* Avatar);
	void SetImage(const class FString& URL, class UTexture* Value);
	void SetAvatar(class UAvatarDownload* Value);
	int32_t CountAvatars();
	void AllValues(int32_t optionalStartIndex, int32_t optionalMaxValues, class UAvatarDownload*& outOutAvatar);
};

// Class IpDrv.ClientBeaconAddressResolver
// 0x000C (0x0060 - 0x006C)
class UClientBeaconAddressResolver : public UObject
{
public:
	int32_t                                            BeaconPort;                                    // 0x0060 (0x0004) [0x0000000000000000]               
	class FName                                        BeaconName;                                    // 0x0064 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.ClientBeaconAddressResolver");
		}

		return uClassPointer;
	};

};

// Class IpDrv.HTTPDownload
// 0x0140 (0x0AB0 - 0x0BF0)
class UHTTPDownload : public UDownload
{
public:
	class FString                                      ProxyServerHost;                               // 0x0AB0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	int32_t                                            ProxyServerPort;                               // 0x0AC0 (0x0004) [0x0000000000004000] (CPF_Config)  
	uint32_t                                           MaxRedirection : 1;                            // 0x0AC4 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	float                                              ConnectionTimeout;                             // 0x0AC8 (0x0004) [0x0000000000004000] (CPF_Config)  
	uint8_t                                          UnknownData00[0x124];                        // 0x0ACC (0x0124) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.HTTPDownload");
		}

		return uClassPointer;
	};

};

// Class IpDrv.HttpRequestCurl
// 0x0048 (0x0078 - 0x00C0)
class UHttpRequestCurl : public UHttpRequestInterface
{
public:
	struct FPointer                                    Request;                                       // 0x0078 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class FString                                      RequestVerb;                                   // 0x0080 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
	class FString                                      RequestURL;                                    // 0x0090 (0x0010) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class TArray<uint8_t>                              Payload;                                       // 0x00A0 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
	class TArray<class FString>                        AllowedRedirectURLs;                           // 0x00B0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.HttpRequestCurl");
		}

		return uClassPointer;
	};

	bool ProcessRequest();
	class UHttpRequestInterface* SetHeader(const class FString& HeaderName, const class FString& HeaderValue);
	class UHttpRequestInterface* SetContentAsString(const class FString& ContentString);
	class UHttpRequestInterface* SetContent(class TArray<uint8_t>& outContentPayload);
	class UHttpRequestInterface* SetURL(const class FString& URL);
	class UHttpRequestInterface* SetVerb(const class FString& Verb);
	class FString GetVerb();
	void GetContent(class TArray<uint8_t>& outContent);
	class FString GetURL();
	int32_t GetContentLength();
	class FString GetContentType();
	class FString GetURLParameter(const class FString& ParameterName);
	class TArray<class FString> GetHeaders();
	class FString GetHeader(const class FString& HeaderName);
};

// Class IpDrv.HttpResponseCurl
// 0x0018 (0x0060 - 0x0078)
class UHttpResponseCurl : public UHttpResponseInterface
{
public:
	struct FPointer                                    Response;                                      // 0x0060 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class TArray<uint8_t>                              Payload;                                       // 0x0068 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.HttpResponseCurl");
		}

		return uClassPointer;
	};

	int32_t GetResponseCode();
	class FString GetContentAsString();
	void GetContent(class TArray<uint8_t>& outContent);
	class FString GetURL();
	int32_t GetContentLength();
	class FString GetContentType();
	class FString GetURLParameter(const class FString& ParameterName);
	class TArray<class FString> GetHeaders();
	class FString GetHeader(const class FString& HeaderName);
};

// Class IpDrv.ImageDecoder
// 0x0030 (0x0060 - 0x0090)
class UImageDecoder : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class TArray<struct FDecodeImageRequest>           ActiveDecodeRequests;                          // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ImageDecodedDelegate__Delegate;              // 0x0078 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.ImageDecoder");
		}

		return uClassPointer;
	};

	void RequestDecodeImage(const class FString& RequestURL, EImageType ImageType, const struct FScriptDelegate& FinishedCallback, class TArray<uint8_t>& outImageData);
	void ImageDecodedDelegate(const class FString& RequestURL, const struct FImageLayout& Image);
};

// Class IpDrv.InternetLink
// 0x002C (0x0268 - 0x0294)
class AInternetLink : public AInfo
{
public:
	ELinkMode                                          LinkMode;                                      // 0x0268 (0x0001) [0x0000000000000000]               
	ELineMode                                          InLineMode;                                    // 0x0269 (0x0001) [0x0000000000000000]               
	ELineMode                                          OutLineMode;                                   // 0x026A (0x0001) [0x0000000000000000]               
	EReceiveMode                                       ReceiveMode;                                   // 0x026B (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x026C (0x0004) MISSED OFFSET
	struct FPointer                                    Socket;                                        // 0x0270 (0x0008) [0x0000000000000002] (CPF_Const)   
	int32_t                                            Port;                                          // 0x0278 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint8_t                                          UnknownData01[0x4];                            // 0x027C (0x0004) MISSED OFFSET
	struct FPointer                                    RemoteSocket;                                  // 0x0280 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FPointer                                    PrivateResolveInfo;                            // 0x0288 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            DataPending;                                   // 0x0290 (0x0004) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.InternetLink");
		}

		return uClassPointer;
	};

	void eventResolveFailed();
	void eventResolved(const struct FIpAddr& Addr);
	void GetLocalIP(struct FIpAddr& outArg);
	bool StringToIpAddr(const class FString& Str, struct FIpAddr& outAddr);
	class FString IpAddrToString(const struct FIpAddr& Arg);
	int32_t GetLastError();
	void Resolve(const class FString& Domain);
	bool ParseURL(const class FString& URL, class FString& outAddr, int32_t& outPortNum, class FString& outLevelName, class FString& outEntryName);
	bool IsDataPending();
};

// Class IpDrv.TcpLink
// 0x0044 (0x0294 - 0x02D8)
class ATcpLink : public AInternetLink
{
public:
	uint8_t                                          UnknownData00[0x4];                            // 0x0294 (0x0004) MISSED OFFSET
	ELinkState                                         LinkState;                                     // 0x0298 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData01[0x3];                            // 0x0299 (0x0003) MISSED OFFSET
	struct FIpAddr                                     RemoteAddr;                                    // 0x029C (0x0014) [0x0000000000000000]               
	class UClass*                                      AcceptClass;                                   // 0x02B0 (0x0008) [0x0000000000000000]               
	class TArray<uint8_t>                              SendFIFO;                                      // 0x02B8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      RecvBuf;                                       // 0x02C8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.TcpLink");
		}

		return uClassPointer;
	};

	void eventReceivedBinary(int32_t Count, uint8_t B[255]);
	void eventReceivedLine(const class FString& Line);
	void eventReceivedText(const class FString& Text);
	void eventClosed();
	void eventOpened();
	void eventAccepted();
	int32_t ReadBinary(int32_t Count, uint8_t& outB);
	int32_t ReadText(class FString& outStr);
	int32_t SendBinary(int32_t Count, uint8_t B[255]);
	int32_t SendText(const class FString& Str);
	bool IsConnected();
	bool Close();
	bool Open(const struct FIpAddr& Addr);
	bool Listen();
	int32_t BindPort(int32_t optionalPortNum, bool optionalBUseNextAvailable);
};

// Class IpDrv.McpServiceBase
// 0x0018 (0x0060 - 0x0078)
class UMcpServiceBase : public UObject
{
public:
	class FString                                      McpConfigClassName;                            // 0x0060 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class UMcpServiceConfig*                           McpConfig;                                     // 0x0070 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpServiceBase");
		}

		return uClassPointer;
	};

	class FString GetUserAuthURL(const class FString& McpId);
	class FString GetAppAccessURL();
	class FString GetBaseURL();
	void eventInit();
};

// Class IpDrv.MCPBase
// 0x0008 (0x0078 - 0x0080)
class UMCPBase : public UMcpServiceBase
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0078 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.MCPBase");
		}

		return uClassPointer;
	};

};

// Class IpDrv.OnlineEventsInterfaceMcp
// 0x0034 (0x0080 - 0x00B4)
class UOnlineEventsInterfaceMcp : public UMCPBase
{
public:
	class TArray<struct FEventUploadConfig>            EventUploadConfigs;                            // 0x0080 (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	class TArray<struct FPointer>                      MCPEventPostObjects;                           // 0x0090 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
	class TArray<EEventUploadType>                     DisabledUploadTypes;                           // 0x00A0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	uint32_t                                           bBinaryStats : 1;                              // 0x00B0 (0x0004) [0x0000000000004002] [0x00000001] (CPF_Const | CPF_Config)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineEventsInterfaceMcp");
		}

		return uClassPointer;
	};

	bool UploadMatchmakingStats(const struct FUniqueNetId& UniqueId, class UOnlineMatchmakingStats* MMStats);
	bool UpdatePlaylistPopulation(int32_t PlaylistId, int32_t NumPlayers);
	bool UploadGameplayEventsData(const struct FUniqueNetId& UniqueId, class TArray<uint8_t>& outPayload);
	bool UploadPlayerData(const struct FUniqueNetId& UniqueId, const class FString& PlayerNick, class UOnlineProfileSettings* ProfileSettings, class UOnlinePlayerStorage* PlayerStorage);
};

// Class IpDrv.OnlineNewsInterfaceMcp
// 0x0040 (0x0080 - 0x00C0)
class UOnlineNewsInterfaceMcp : public UMCPBase
{
public:
	class TArray<struct FNewsCacheEntry>               NewsItems;                                     // 0x0080 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ReadNewsDelegates;                             // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bNeedsTicking : 1;                             // 0x00A0 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint8_t                                          UnknownData00[0x4];                            // 0x00A4 (0x0004) MISSED OFFSET
	struct FScriptDelegate                             __OnReadNewsCompleted__Delegate;               // 0x00A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineNewsInterfaceMcp");
		}

		return uClassPointer;
	};

	class FString GetNews(uint8_t LocalUserNum, EOnlineNewsType NewsType);
	void ClearReadNewsCompletedDelegate(const struct FScriptDelegate& ReadGameNewsDelegate);
	void AddReadNewsCompletedDelegate(const struct FScriptDelegate& ReadNewsDelegate);
	void OnReadNewsCompleted(bool bWasSuccessful, EOnlineNewsType NewsType);
	bool ReadNews(uint8_t LocalUserNum, EOnlineNewsType NewsType);
};

// Class IpDrv.OnlineTitleFileDownloadBase
// 0x0098 (0x0080 - 0x0118)
class UOnlineTitleFileDownloadBase : public UMCPBase
{
public:
	class TArray<struct FScriptDelegate>               ReadTitleFileCompleteDelegates;                // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               RequestTitleFileListCompleteDelegates;         // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      BaseUrl;                                       // 0x00A0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      RequestFileListURL;                            // 0x00B0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      RequestFileURL;                                // 0x00C0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	float                                              Timeout;                                       // 0x00D0 (0x0004) [0x0000000000004000] (CPF_Config)  
	uint8_t                                          UnknownData00[0x4];                            // 0x00D4 (0x0004) MISSED OFFSET
	class TArray<struct FFileNameToURLMapping>         FilesToUrls;                                   // 0x00D8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;           // 0x00E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRequestTitleFileListComplete__Delegate;    // 0x0100 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineTitleFileDownloadBase");
		}

		return uClassPointer;
	};

	class FString GetUrlForFile(const class FString& Filename);
	void ClearRequestTitleFileListCompleteDelegate(const struct FScriptDelegate& RequestTitleFileListDelegate);
	void AddRequestTitleFileListCompleteDelegate(const struct FScriptDelegate& RequestTitleFileListDelegate);
	void OnRequestTitleFileListComplete(bool bWasSuccessful, const class TArray<class FString>& ResultStr);
	bool RequestTitleFileList();
	bool ClearDownloadedFile(const class FString& Filename);
	bool ClearDownloadedFiles();
	EOnlineEnumerationReadState GetTitleFileState(const class FString& Filename);
	bool GetTitleFileContents(const class FString& Filename, class TArray<uint8_t>& outFileContents);
	void ClearReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	void AddReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	bool ReadTitleFile(const class FString& FileToRead, EOnlineFileType optionalFileType);
	void OnReadTitleFileComplete(bool bWasSuccessful, const class FString& Filename);
};

// Class IpDrv.OnlineTitleFileDownloadMcp
// 0x0014 (0x0118 - 0x012C)
class UOnlineTitleFileDownloadMcp : public UOnlineTitleFileDownloadBase
{
public:
	class TArray<struct FTitleFileMcp>                 TitleFiles;                                    // 0x0118 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            DownloadCount;                                 // 0x0128 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineTitleFileDownloadMcp");
		}

		return uClassPointer;
	};

	bool ClearDownloadedFile(const class FString& Filename);
	bool ClearDownloadedFiles();
	EOnlineEnumerationReadState GetTitleFileState(const class FString& Filename);
	bool GetTitleFileContents(const class FString& Filename, class TArray<uint8_t>& outFileContents);
	bool ReadTitleFile(const class FString& FileToRead, EOnlineFileType optionalFileType);
};

// Class IpDrv.OnlineTitleFileDownloadWeb
// 0x0010 (0x0118 - 0x0128)
class UOnlineTitleFileDownloadWeb : public UOnlineTitleFileDownloadBase
{
public:
	class TArray<struct FTitleFileWeb>                 TitleFiles;                                    // 0x0118 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineTitleFileDownloadWeb");
		}

		return uClassPointer;
	};

	class FString GetUrlForFile(const class FString& Filename);
	void OnFileListReceived(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bDidSucceed);
	bool RequestTitleFileList();
	bool ClearDownloadedFile(const class FString& Filename);
	bool ClearDownloadedFiles();
	EOnlineEnumerationReadState GetTitleFileState(const class FString& Filename);
	bool GetTitleFileContents(const class FString& Filename, class TArray<uint8_t>& outFileContents);
	void TriggerDelegates(bool bSuccess, const class FString& FileRead);
	void OnFileDownloadComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bDidSucceed);
	bool ReadTitleFile(const class FString& FileToRead, EOnlineFileType optionalFileType);
	bool UncompressTitleFileContents(EMcpFileCompressionType FileCompressionType, class TArray<uint8_t>& outCompressedFileContents, class TArray<uint8_t>& outUncompressedFileContents);
};

// Class IpDrv.TitleFileDownloadCache
// 0x0060 (0x0080 - 0x00E0)
class UTitleFileDownloadCache : public UMCPBase
{
public:
	class TArray<struct FTitleFileCacheEntry>          TitleFiles;                                    // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               LoadCompleteDelegates;                         // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               SaveCompleteDelegates;                         // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoadTitleFileComplete__Delegate;           // 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnSaveTitleFileComplete__Delegate;           // 0x00C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.TitleFileDownloadCache");
		}

		return uClassPointer;
	};

	bool DeleteTitleFile(const class FString& Filename);
	bool DeleteTitleFiles(float MaxAgeSeconds);
	bool ClearCachedFile(const class FString& Filename);
	bool ClearCachedFiles();
	class FString GetTitleFileLogicalName(const class FString& Filename);
	class FString GetTitleFileHash(const class FString& Filename);
	EOnlineEnumerationReadState GetTitleFileState(const class FString& Filename);
	bool GetTitleFileContents(const class FString& Filename, class TArray<uint8_t>& outFileContents);
	void ClearSaveTitleFileCompleteDelegate(const struct FScriptDelegate& SaveCompleteDelegate);
	void AddSaveTitleFileCompleteDelegate(const struct FScriptDelegate& SaveCompleteDelegate);
	void OnSaveTitleFileComplete(bool bWasSuccessful, const class FString& Filename);
	bool SaveTitleFile(const class FString& Filename, const class FString& LogicalName, const class TArray<uint8_t>& FileContents);
	void ClearLoadTitleFileCompleteDelegate(const struct FScriptDelegate& LoadCompleteDelegate);
	void AddLoadTitleFileCompleteDelegate(const struct FScriptDelegate& LoadCompleteDelegate);
	void OnLoadTitleFileComplete(bool bWasSuccessful, const class FString& Filename);
	bool LoadTitleFile(const class FString& Filename);
};

// Class IpDrv.McpMessageBase
// 0x0098 (0x0078 - 0x0110)
class UMcpMessageBase : public UMcpServiceBase
{
public:
	class FString                                      McpMessageManagerClassName;                    // 0x0078 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	EMcpMessageCompressionType                         CompressionType;                               // 0x0088 (0x0001) [0x0000000000004000] (CPF_Config)  
	uint8_t                                          UnknownData00[0x7];                            // 0x0089 (0x0007) MISSED OFFSET
	class TArray<struct FMcpMessageContents>           MessageContentsList;                           // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FMcpMessageList>               MessageLists;                                  // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateMessageComplete__Delegate;           // 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteMessageComplete__Delegate;           // 0x00C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryMessagesComplete__Delegate;           // 0x00E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryMessageContentsComplete__Delegate;    // 0x00F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpMessageBase");
		}

		return uClassPointer;
	};

	bool CacheMessageContents(const class FString& MessageId, class TArray<uint8_t>& outMessageContents);
	void CacheMessage(const struct FMcpMessage& Message);
	bool GetMessageContentsW(const class FString& MessageId, class TArray<uint8_t>& outMessageContents);
	void OnQueryMessageContentsComplete(const class FString& MessageId, bool bWasSuccessful, const class FString& Error);
	void QueryMessageContents(const class FString& MessageId);
	void GetMessageListW(const class FString& ToUniqueUserId, struct FMcpMessageList& outMessageList);
	void OnQueryMessagesComplete(const class FString& UserId, bool bWasSuccessful, const class FString& Error);
	void QueryMessages(const class FString& ToUniqueUserId);
	void OnDeleteMessageComplete(const class FString& MessageId, bool bWasSuccessful, const class FString& Error);
	void DeleteMessage(const class FString& MessageId);
	void OnCreateMessageComplete(const struct FMcpMessage& Message, bool bWasSuccessful, const class FString& Error);
	void CreateMessage(const class FString& FromUniqueUserId, const class FString& FromFriendlyName, const class FString& MessageType, const class FString& PushMessage, const class FString& ValidUntil, class TArray<class FString>& outToUniqueUserIds, class TArray<uint8_t>& outMessageContents);
	static class UMcpMessageBase* CreateInstance();
};

// Class IpDrv.McpMessageManager
// 0x0078 (0x0110 - 0x0188)
class UMcpMessageManager : public UMcpMessageBase
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0110 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class FString                                      CreateMessageUrl;                              // 0x0118 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      DeleteMessageUrl;                              // 0x0128 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      QueryMessagesUrl;                              // 0x0138 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      QueryMessageContentsUrl;                       // 0x0148 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      DeleteAllMessagesUrl;                          // 0x0158 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<struct FMcpCompressMessageRequest>    CompressMessageRequests;                       // 0x0168 (0x0010) [0x0000000000001000] (CPF_Native)  
	class TArray<struct FMcpUncompressMessageRequest>  UncompressMessageRequests;                     // 0x0178 (0x0010) [0x0000000000001000] (CPF_Native)  

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpMessageManager");
		}

		return uClassPointer;
	};

	bool CacheMessageContents(const class FString& MessageId, class TArray<uint8_t>& outMessageContents);
	bool GetMessageByIdW(const class FString& MessageId, struct FMcpMessage& outMessage);
	void CacheMessage(const struct FMcpMessage& Message);
	bool GetMessageContentsW(const class FString& MessageId, class TArray<uint8_t>& outMessageContents);
	void OnQueryMessageContentsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void QueryMessageContents(const class FString& MessageId);
	void GetMessageListW(const class FString& ToUniqueUserId, struct FMcpMessageList& outMessageList);
	void OnQueryMessagesRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void QueryMessages(const class FString& ToUniqueUserId);
	void OnDeleteMessageRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void DeleteMessage(const class FString& MessageId);
	void OnCreateMessageRequestComplete(class UHttpRequestInterface* CreateMessageRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void CreateMessage(const class FString& FromUniqueUserId, const class FString& FromFriendlyName, const class FString& MessageType, const class FString& PushMessage, const class FString& ValidUntil, class TArray<class FString>& outToUniqueUserIds, class TArray<uint8_t>& outMessageContents);
	void eventFinishedAsyncUncompression(bool bWasSuccessful, const class FString& MessageId, class TArray<uint8_t>& outUncompressedMessageContents);
	bool StartAsyncUncompression(const class FString& MessageId, EMcpMessageCompressionType MessageCompressionType, class TArray<uint8_t>& outMessageContent);
	bool StartAsyncCompression(EMcpMessageCompressionType MessageCompressionType, class UHttpRequestInterface* Request, class TArray<uint8_t>& outMessageContent);
};

// Class IpDrv.McpUserCloudFileDownload
// 0x00F0 (0x0078 - 0x0168)
class UMcpUserCloudFileDownload : public UMcpServiceBase
{
public:
	class FString                                      EnumerateCloudFilesUrl;                        // 0x0078 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      ReadCloudFileUrl;                              // 0x0088 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      WriteCloudFileUrl;                             // 0x0098 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      DeleteCloudFileUrl;                            // 0x00A8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<struct FMcpUserCloudFilesEntry>       UserCloudFileRequests;                         // 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               EnumerateUserFilesCompleteDelegates;           // 0x00C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ReadUserFileCompleteDelegates;                 // 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               WriteUserFileCompleteDelegates;                // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               DeleteUserFileCompleteDelegates;               // 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnEnumerateUserFilesComplete__Delegate;      // 0x0108 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadUserFileComplete__Delegate;            // 0x0120 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWriteUserFileComplete__Delegate;           // 0x0138 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteUserFileComplete__Delegate;          // 0x0150 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpUserCloudFileDownload");
		}

		return uClassPointer;
	};

	void ClearAllDelegates();
	void ClearDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate);
	void AddDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate);
	void CallDeleteUserFileCompleteDelegates(bool bWasSuccessful, const class FString& UserId, const class FString& Filename);
	void OnDeleteUserFileComplete(bool bWasSuccessful, const class FString& UserId, const class FString& Filename);
	void OnHTTPRequestDeleteUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	bool DeleteUserFile(const class FString& UserId, const class FString& Filename, bool bShouldCloudDelete, bool bShouldLocallyDelete);
	void ClearWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate);
	void AddWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate);
	void CallWriteUserFileCompleteDelegates(bool bWasSuccessful, const class FString& UserId, const class FString& Filename);
	void OnWriteUserFileComplete(bool bWasSuccessful, const class FString& UserId, const class FString& Filename);
	void OnHTTPRequestWriteUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void GetUserFileIndexForRequest(class UHttpRequestInterface* Request, int32_t& outUserIdx, int32_t& outFileIdx);
	bool WriteUserFile(const class FString& UserId, const class FString& Filename, class TArray<uint8_t>& outFileContents);
	void ClearReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate);
	void AddReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate);
	void CallReadUserFileCompleteDelegates(bool bWasSuccessful, const class FString& UserId, const class FString& Filename);
	void OnReadUserFileComplete(bool bWasSuccessful, const class FString& UserId, const class FString& Filename);
	void OnHTTPRequestReadUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	bool ReadUserFile(const class FString& UserId, const class FString& Filename);
	void GetUserFileList(const class FString& UserId, class TArray<struct FEmsFile>& outUserFiles);
	void ClearEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate);
	void AddEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate);
	void CallEnumerateUserFileCompleteDelegates(bool bWasSuccessful, const class FString& UserId);
	void OnEnumerateUserFilesComplete(bool bWasSuccessful, const class FString& UserId);
	void OnHTTPRequestEnumerateUserFilesComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void EnumerateUserFiles(const class FString& UserId);
	bool ClearFile(const class FString& UserId, const class FString& Filename);
	bool ClearFiles(const class FString& UserId);
	bool GetFileContents(const class FString& UserId, const class FString& Filename, class TArray<uint8_t>& outFileContents);
};

// Class IpDrv.MeshBeacon
// 0x0048 (0x0060 - 0x00A8)
class UMeshBeacon : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	int32_t                                            MeshBeaconPort;                                // 0x0068 (0x0004) [0x0000000000004000] (CPF_Config)  
	uint8_t                                          UnknownData00[0x4];                            // 0x006C (0x0004) MISSED OFFSET
	struct FPointer                                    Socket;                                        // 0x0070 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	uint32_t                                           bIsInTick : 1;                                 // 0x0078 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bWantsDeferredDestroy : 1;                     // 0x0078 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           bShouldTick : 1;                               // 0x0078 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              HeartbeatTimeout;                              // 0x007C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ElapsedHeartbeatTime;                          // 0x0080 (0x0004) [0x0000000000000000]               
	class FName                                        BeaconName;                                    // 0x0084 (0x0008) [0x0000000000000000]               
	int32_t                                            SocketSendBufferSize;                          // 0x008C (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            SocketReceiveBufferSize;                       // 0x0090 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxBandwidthTestBufferSize;                    // 0x0094 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MinBandwidthTestBufferSize;                    // 0x0098 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              MaxBandwidthTestSendTime;                      // 0x009C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              MaxBandwidthTestReceiveTime;                   // 0x00A0 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxBandwidthHistoryEntries;                    // 0x00A4 (0x0004) [0x0000000000004000] (CPF_Config)  

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.MeshBeacon");
		}

		return uClassPointer;
	};

	void eventDestroyBeacon();
};

// Class IpDrv.MeshBeaconClient
// 0x0140 (0x00A8 - 0x01E8)
class UMeshBeaconClient : public UMeshBeacon
{
public:
	struct FOnlineGameSearchResult                     HostPendingRequest;                            // 0x00A8 (0x0010) [0x0000000000000002] (CPF_Const)   
	struct FClientConnectionRequest                    ClientPendingRequest;                          // 0x00B8 (0x0070) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FClientBandwidthTestData                    CurrentBandwidthTest;                          // 0x0128 (0x0014) [0x0000000000000000]               
	EMeshBeaconClientState                             ClientBeaconState;                             // 0x013C (0x0001) [0x0000000000000000]               
	EMeshBeaconPacketType                              ClientBeaconRequestType;                       // 0x013D (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x2];                            // 0x013E (0x0002) MISSED OFFSET
	float                                              ConnectionRequestTimeout;                      // 0x0140 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ConnectionRequestElapsedTime;                  // 0x0144 (0x0004) [0x0000000000000000]               
	class FString                                      ResolverClassName;                             // 0x0148 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class UClass*                                      ResolverClass;                                 // 0x0158 (0x0008) [0x0000000000000000]               
	class UClientBeaconAddressResolver*                Resolver;                                      // 0x0160 (0x0008) [0x0000000000000000]               
	uint32_t                                           bUsingRegisteredAddr : 1;                      // 0x0168 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint8_t                                          UnknownData01[0x4];                            // 0x016C (0x0004) MISSED OFFSET
	struct FScriptDelegate                             __OnConnectionRequestResult__Delegate;         // 0x0170 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedBandwidthTestRequest__Delegate;    // 0x0188 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedBandwidthTestResults__Delegate;    // 0x01A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnTravelRequestReceived__Delegate;           // 0x01B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateNewSessionRequestReceived__Delegate; // 0x01D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.MeshBeaconClient");
		}

		return uClassPointer;
	};

	bool SendHostNewGameSessionResponse(bool bSuccess, const class FName& SessionName, class UClass* SearchClass, uint8_t& outPlatformSpecificInfo);
	void OnCreateNewSessionRequestReceived(const class FName& SessionName, class UClass* SearchClass, class TArray<struct FPlayerMember>& outPlayers);
	void OnTravelRequestReceived(const class FName& SessionName, class UClass* SearchClass, uint8_t& outPlatformSpecificInfo);
	void OnReceivedBandwidthTestResults(EMeshBeaconBandwidthTestType TestType, EMeshBeaconBandwidthTestResult TestResult, struct FConnectionBandwidthStats& outBandwidthStats);
	void OnReceivedBandwidthTestRequest(EMeshBeaconBandwidthTestType TestType);
	void OnConnectionRequestResult(EMeshBeaconConnectionResult ConnectionResult);
	bool BeginBandwidthTest(EMeshBeaconBandwidthTestType TestType, int32_t TestBufferSize);
	bool RequestConnection(bool bRegisterSecureAddress, struct FOnlineGameSearchResult& outDesiredHost, struct FClientConnectionRequest& outClientRequest);
	void eventDestroyBeacon();
};

// Class IpDrv.MeshBeaconHost
// 0x00E8 (0x00A8 - 0x0190)
class UMeshBeaconHost : public UMeshBeacon
{
public:
	class TArray<struct FClientMeshBeaconConnection>   ClientConnections;                             // 0x00A8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FUniqueNetId>                  PendingPlayerConnections;                      // 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                OwningPlayerId;                                // 0x00C8 (0x0048) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint32_t                                           bAllowBandwidthTesting : 1;                    // 0x0110 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            ConnectionBacklog;                             // 0x0114 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FScriptDelegate                             __OnReceivedClientConnectionRequest__Delegate; // 0x0118 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnStartedBandwidthTest__Delegate;            // 0x0130 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFinishedBandwidthTest__Delegate;           // 0x0148 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAllPendingPlayersConnected__Delegate;      // 0x0160 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedClientCreateNewSessionResult__Delegate;// 0x0178 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.MeshBeaconHost");
		}

		return uClassPointer;
	};

	void OnReceivedClientCreateNewSessionResult(bool bSucceeded, const class FName& SessionName, class UClass* SearchClass, uint8_t& outPlatformSpecificInfo);
	bool RequestClientCreateNewSession(const struct FUniqueNetId& PlayerNetId, const class FName& SessionName, class UClass* SearchClass, class TArray<struct FPlayerMember>& outPlayers);
	void TellClientsToTravel(const class FName& SessionName, class UClass* SearchClass, uint8_t& outPlatformSpecificInfo);
	void OnAllPendingPlayersConnected();
	bool AllPlayersConnected(class TArray<struct FUniqueNetId>& outPlayers);
	int32_t GetConnectionIndexForPlayer(const struct FUniqueNetId& PlayerNetId);
	void SetPendingPlayerConnections(class TArray<struct FUniqueNetId>& outPlayers);
	void OnFinishedBandwidthTest(const struct FUniqueNetId& PlayerNetId, EMeshBeaconBandwidthTestType TestType, EMeshBeaconBandwidthTestResult TestResult, struct FConnectionBandwidthStats& outBandwidthStats);
	void OnStartedBandwidthTest(const struct FUniqueNetId& PlayerNetId, EMeshBeaconBandwidthTestType TestType);
	void OnReceivedClientConnectionRequest(struct FClientMeshBeaconConnection& outNewClientConnection);
	void AllowBandwidthTesting(bool bEnabled);
	void CancelPendingBandwidthTests();
	bool HasPendingBandwidthTest();
	void CancelInProgressBandwidthTests();
	bool HasInProgressBandwidthTest();
	bool RequestClientBandwidthTest(const struct FUniqueNetId& PlayerNetId, EMeshBeaconBandwidthTestType TestType, int32_t TestBufferSize);
	void eventDestroyBeacon();
	bool InitHostBeacon(const struct FUniqueNetId& InOwningPlayerId);
};

// Class IpDrv.OnlineAuthInterfaceImpl
// 0x0368 (0x0060 - 0x03C8)
class UOnlineAuthInterfaceImpl : public UObject
{
public:
	struct FPointer                                    VfTable_IOnlineAuthInterface;                  // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class TArray<struct FAuthCodeRequest>              AuthCodeRequests;                              // 0x0068 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            NextAuthCodeID;                                // 0x0078 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint8_t                                          UnknownData00[0x4];                            // 0x007C (0x0004) MISSED OFFSET
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                               // 0x0080 (0x0008) [0x0000000000000000]               
	uint32_t                                           bAuthReady : 1;                                // 0x0088 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint8_t                                          UnknownData01[0x4];                            // 0x008C (0x0004) MISSED OFFSET
	struct FSparseArray_Mirror                         ClientAuthSessions;                            // 0x0090 (0x0038) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FSparseArray_Mirror                         ServerAuthSessions;                            // 0x00C8 (0x0038) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FSparseArray_Mirror                         PeerAuthSessions;                              // 0x0100 (0x0038) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FSparseArray_Mirror                         LocalClientAuthSessions;                       // 0x0138 (0x0038) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FSparseArray_Mirror                         LocalServerAuthSessions;                       // 0x0170 (0x0038) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FSparseArray_Mirror                         LocalPeerAuthSessions;                         // 0x01A8 (0x0038) [0x0000000000001002] (CPF_Const | CPF_Native)
	class TArray<struct FScriptDelegate>               AuthReadyDelegates;                            // 0x01E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ClientAuthRequestDelegates;                    // 0x01F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ServerAuthRequestDelegates;                    // 0x0200 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ClientAuthResponseDelegates;                   // 0x0210 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ServerAuthResponseDelegates;                   // 0x0220 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ClientAuthCompleteDelegates;                   // 0x0230 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ServerAuthCompleteDelegates;                   // 0x0240 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ClientAuthEndSessionRequestDelegates;          // 0x0250 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ServerAuthRetryRequestDelegates;               // 0x0260 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ClientConnectionCloseDelegates;                // 0x0270 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ServerConnectionCloseDelegates;                // 0x0280 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAuthReady__Delegate;                       // 0x0290 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnClientAuthRequest__Delegate;               // 0x02A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnServerAuthRequest__Delegate;               // 0x02C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnClientAuthResponse__Delegate;              // 0x02D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnServerAuthResponse__Delegate;              // 0x02F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnClientAuthComplete__Delegate;              // 0x0308 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnServerAuthComplete__Delegate;              // 0x0320 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnClientAuthEndSessionRequest__Delegate;     // 0x0338 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnServerAuthRetryRequest__Delegate;          // 0x0350 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnClientConnectionClose__Delegate;           // 0x0368 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnServerConnectionClose__Delegate;           // 0x0380 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedAuthCode__Delegate;                // 0x0398 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAccountAuthorization__Delegate;            // 0x03B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineAuthInterfaceImpl");
		}

		return uClassPointer;
	};

	class UAsyncTask* RequestAccountAuthorization(const struct FUniqueNetId& PlayerID, const struct FScriptDelegate& Callback);
	void OnAccountAuthorization(const class FString& Token);
	void OnLoginChanged(bool bLoggedIn);
	bool RequestMtxCode(const struct FUniqueNetId& PlayerID, const struct FScriptDelegate& Callback);
	bool RequestAuthTicket(const struct FUniqueNetId& PlayerID, const struct FScriptDelegate& Callback);
	bool RequiresAuthTicket();
	void OnReceivedAuthCode(bool bSuccess, const class FString& Code);
	bool GetServerAddr(struct FIpAddr& outOutServerIP, int32_t& outOutServerPort);
	bool GetServerUniqueId(struct FUniqueNetId& outOutServerUID);
	bool FindLocalServerAuthSession(class UPlayer* ClientConnection, struct FLocalAuthSession& outOutSessionInfo);
	bool FindServerAuthSession(class UPlayer* ServerConnection, struct FAuthSession& outOutSessionInfo);
	bool FindLocalClientAuthSession(class UPlayer* ServerConnection, struct FLocalAuthSession& outOutSessionInfo);
	bool FindClientAuthSession(class UPlayer* ClientConnection, struct FAuthSession& outOutSessionInfo);
	void AllLocalServerAuthSessions(struct FLocalAuthSession& outOutSessionInfo);
	void AllServerAuthSessions(struct FAuthSession& outOutSessionInfo);
	void AllLocalClientAuthSessions(struct FLocalAuthSession& outOutSessionInfo);
	void AllClientAuthSessions(struct FAuthSession& outOutSessionInfo);
	void EndAllRemoteServerAuthSessions();
	void EndAllLocalServerAuthSessions();
	void EndRemoteServerAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP);
	void EndLocalServerAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP);
	bool VerifyServerAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int32_t AuthTicketUID);
	bool CreateServerAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int32_t ClientPort, int32_t& outOutAuthTicketUID);
	void EndAllRemoteClientAuthSessions();
	void EndAllLocalClientAuthSessions();
	void EndRemoteClientAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP);
	void EndLocalClientAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int32_t ServerPort);
	bool VerifyClientAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int32_t ClientPort, int32_t AuthTicketUID);
	bool CreateClientAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int32_t ServerPort, bool bSecure, int32_t& outOutAuthTicketUID);
	bool SendServerAuthRetryRequest();
	bool SendClientAuthEndSessionRequest(class UPlayer* ClientConnection);
	bool SendServerAuthResponse(class UPlayer* ClientConnection, int32_t AuthTicketUID);
	bool SendClientAuthResponse(int32_t AuthTicketUID);
	bool SendServerAuthRequest(const struct FUniqueNetId& ServerUID);
	bool SendClientAuthRequest(class UPlayer* ClientConnection, const struct FUniqueNetId& ClientUID);
	void ClearServerConnectionCloseDelegate(const struct FScriptDelegate& ServerConnectionCloseDelegate);
	void AddServerConnectionCloseDelegate(const struct FScriptDelegate& ServerConnectionCloseDelegate);
	void OnServerConnectionClose(class UPlayer* ServerConnection);
	void ClearClientConnectionCloseDelegate(const struct FScriptDelegate& ClientConnectionCloseDelegate);
	void AddClientConnectionCloseDelegate(const struct FScriptDelegate& ClientConnectionCloseDelegate);
	void OnClientConnectionClose(class UPlayer* ClientConnection);
	void ClearServerAuthRetryRequestDelegate(const struct FScriptDelegate& ServerAuthRetryRequestDelegate);
	void AddServerAuthRetryRequestDelegate(const struct FScriptDelegate& ServerAuthRetryRequestDelegate);
	void OnServerAuthRetryRequest(class UPlayer* ClientConnection);
	void ClearClientAuthEndSessionRequestDelegate(const struct FScriptDelegate& ClientAuthEndSessionRequestDelegate);
	void AddClientAuthEndSessionRequestDelegate(const struct FScriptDelegate& ClientAuthEndSessionRequestDelegate);
	void OnClientAuthEndSessionRequest(class UPlayer* ServerConnection);
	void ClearServerAuthCompleteDelegate(const struct FScriptDelegate& ServerAuthCompleteDelegate);
	void AddServerAuthCompleteDelegate(const struct FScriptDelegate& ServerAuthCompleteDelegate);
	void OnServerAuthComplete(bool bSuccess, const struct FUniqueNetId& ServerUID, class UPlayer* ServerConnection, const class FString& ExtraInfo);
	void ClearClientAuthCompleteDelegate(const struct FScriptDelegate& ClientAuthCompleteDelegate);
	void AddClientAuthCompleteDelegate(const struct FScriptDelegate& ClientAuthCompleteDelegate);
	void OnClientAuthComplete(bool bSuccess, const struct FUniqueNetId& ClientUID, class UPlayer* ClientConnection, const class FString& ExtraInfo);
	void ClearServerAuthResponseDelegate(const struct FScriptDelegate& ServerAuthResponseDelegate);
	void AddServerAuthResponseDelegate(const struct FScriptDelegate& ServerAuthResponseDelegate);
	void OnServerAuthResponse(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int32_t AuthTicketUID);
	void ClearClientAuthResponseDelegate(const struct FScriptDelegate& ClientAuthResponseDelegate);
	void AddClientAuthResponseDelegate(const struct FScriptDelegate& ClientAuthResponseDelegate);
	void OnClientAuthResponse(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int32_t AuthTicketUID);
	void ClearServerAuthRequestDelegate(const struct FScriptDelegate& ServerAuthRequestDelegate);
	void AddServerAuthRequestDelegate(const struct FScriptDelegate& ServerAuthRequestDelegate);
	void OnServerAuthRequest(class UPlayer* ClientConnection, const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int32_t ClientPort);
	void ClearClientAuthRequestDelegate(const struct FScriptDelegate& ClientAuthRequestDelegate);
	void AddClientAuthRequestDelegate(const struct FScriptDelegate& ClientAuthRequestDelegate);
	void OnClientAuthRequest(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int32_t ServerPort, bool bSecure);
	void ClearAuthReadyDelegate(const struct FScriptDelegate& AuthReadyDelegate);
	void AddAuthReadyDelegate(const struct FScriptDelegate& AuthReadyDelegate);
	void OnAuthReady();
	bool IsReady();
};

// Class IpDrv.OnlineFriendsInterfaceImpl
// 0x0020 (0x0060 - 0x0080)
class UOnlineFriendsInterfaceImpl : public UObject
{
public:
	struct FPointer                                    VfTable_IOnlineFriendsInterface;               // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FScriptDelegate                             __OnReceivedLinkedAccount__Delegate;           // 0x0068 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineFriendsInterfaceImpl");
		}

		return uClassPointer;
	};

	bool GetActivePlatformId(uint8_t LocalUserNum, const struct FUniqueNetId& AccountId, struct FUniqueNetId& outPlatformId);
	bool RequestLinkedAccounts(uint8_t LocalUserNum, const class TArray<struct FUniqueNetId>& AccountIds, const struct FScriptDelegate& Callback);
	void OnReceivedLinkedAccount(bool bSuccess, const class TArray<struct FLinkedAccountData>& LinkedAccountData);
};

// Class IpDrv.OnlineGameInterfaceImpl
// 0x02B8 (0x0060 - 0x0318)
class UOnlineGameInterfaceImpl : public UObject
{
public:
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                               // 0x0060 (0x0008) [0x0000000000000000]               
	class UOnlineGameSettings*                         GameSettings;                                  // 0x0068 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UOnlineGameSearch*                           GameSearch;                                    // 0x0070 (0x0008) [0x0000000000000002] (CPF_Const)   
	class TArray<struct FScriptDelegate>               CreateOnlineGameCompleteDelegates;             // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               UpdateOnlineGameCompleteDelegates;             // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               DestroyOnlineGameCompleteDelegates;            // 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               JoinOnlineGameCompleteDelegates;               // 0x00A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               MigrateOnlineGameCompleteDelegates;            // 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               JoinMigratedOnlineGameCompleteDelegates;       // 0x00C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               RecalculateSkillRatingCompleteDelegates;       // 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               StartOnlineGameCompleteDelegates;              // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               EndOnlineGameCompleteDelegates;                // 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               FindOnlineGamesCompleteDelegates;              // 0x0108 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               CancelFindOnlineGamesCompleteDelegates;        // 0x0118 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	ELanBeaconState                                    LanBeaconState;                                // 0x0128 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            LanNonce[8];                                   // 0x0129 (0x0008) [0x0000000000000002] (CPF_Const)   
	uint8_t                                          UnknownData00[0x3];                            // 0x0131 (0x0003) MISSED OFFSET
	int32_t                                            LanAnnouncePort;                               // 0x0134 (0x0004) [0x0000000000004002] (CPF_Const | CPF_Config)
	int32_t                                            LanGameUniqueId;                               // 0x0138 (0x0004) [0x0000000000004002] (CPF_Const | CPF_Config)
	int32_t                                            LanPacketPlatformMask;                         // 0x013C (0x0004) [0x0000000000004002] (CPF_Const | CPF_Config)
	float                                              LanQueryTimeLeft;                              // 0x0140 (0x0004) [0x0000000000000000]               
	float                                              LanQueryTimeout;                               // 0x0144 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FPointer                                    LanBeacon;                                     // 0x0148 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    SessionInfo;                                   // 0x0150 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class TArray<struct FScriptDelegate>               GameInviteAcceptedDelegates;                   // 0x0158 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFindOnlineGamesComplete__Delegate;         // 0x0168 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateOnlineGameComplete__Delegate;        // 0x0180 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUpdateOnlineGameComplete__Delegate;        // 0x0198 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDestroyOnlineGameComplete__Delegate;       // 0x01B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCancelFindOnlineGamesComplete__Delegate;   // 0x01C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnJoinOnlineGameComplete__Delegate;          // 0x01E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;          // 0x01F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;        // 0x0210 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnStartOnlineGameComplete__Delegate;         // 0x0228 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnEndOnlineGameComplete__Delegate;           // 0x0240 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnArbitrationRegistrationComplete__Delegate; // 0x0258 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;              // 0x0270 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRecalculateSkillRatingComplete__Delegate;  // 0x0288 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnMigrateOnlineGameComplete__Delegate;       // 0x02A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnJoinMigratedOnlineGameComplete__Delegate;  // 0x02B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQosStatusChanged__Delegate;                // 0x02D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventReportMatchmakingInfo__Delegate;        // 0x02E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGamePlayersChanged__Delegate;              // 0x0300 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineGameInterfaceImpl");
		}

		return uClassPointer;
	};

	void ClearGamePlayersChangedDelegate(const struct FScriptDelegate& GamePlayersChangedDelegate);
	void AddGamePlayersChangedDelegate(const struct FScriptDelegate& GamePlayersChangedDelegate);
	void OnGamePlayersChanged(const class FName& SessionName, const class TArray<struct FUniqueNetId>& Players);
	void SetFriendJoinLocation(const struct FUniqueNetId& JoinablePlayerID, const class FString& ServerAddress, ELobbyVisibility Visibility);
	void ClearReportMatchmakingInfoDelegate(const struct FScriptDelegate& OldDelegate);
	void AddReportMatchmakingInfoDelegate(const struct FScriptDelegate& NewDelegate);
	void EventReportMatchmakingInfo(const class FString& NewInfo);
	void ClearQosStatusChangedDelegate(const struct FScriptDelegate& QosStatusChangedDelegate);
	void AddQosStatusChangedDelegate(const struct FScriptDelegate& QosStatusChangedDelegate);
	void OnQosStatusChanged(int32_t NumComplete, int32_t NumTotal);
	bool BindPlatformSpecificSessionToSearch(uint8_t SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, uint8_t PlatformSpecificInfo[80]);
	bool ReadPlatformSpecificSessionInfoBySessionName(const class FName& SessionName, uint8_t& outPlatformSpecificInfo);
	bool ReadPlatformSpecificSessionInfo(struct FOnlineGameSearchResult& outDesiredGame, uint8_t& outPlatformSpecificInfo);
	bool QueryNonAdvertisedData(int32_t StartAt, int32_t NumberToQuery);
	void ClearJoinMigratedOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinMigratedOnlineGameCompleteDelegate);
	void AddJoinMigratedOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinMigratedOnlineGameCompleteDelegate);
	void OnJoinMigratedOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful);
	bool JoinMigratedOnlineGame(uint8_t PlayerNum, const class FName& SessionName, struct FOnlineGameSearchResult& outDesiredGame);
	void ClearMigrateOnlineGameCompleteDelegate(const struct FScriptDelegate& MigrateOnlineGameCompleteDelegate);
	void AddMigrateOnlineGameCompleteDelegate(const struct FScriptDelegate& MigrateOnlineGameCompleteDelegate);
	void OnMigrateOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful);
	bool MigrateOnlineGame(uint8_t HostingPlayerNum, const class FName& SessionName);
	void ClearRecalculateSkillRatingCompleteDelegate(const struct FScriptDelegate& RecalculateSkillRatingGameCompleteDelegate);
	void AddRecalculateSkillRatingCompleteDelegate(const struct FScriptDelegate& RecalculateSkillRatingCompleteDelegate);
	void OnRecalculateSkillRatingComplete(const class FName& SessionName, bool bWasSuccessful);
	bool RecalculateSkillRating(const class FName& SessionName, class TArray<struct FUniqueNetId>& outPlayers);
	bool AcceptGameInvite(uint8_t LocalUserNum, const class FName& SessionName);
	void ClearGameInviteAcceptedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate);
	void AddGameInviteAcceptedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate);
	void OnGameInviteAccepted(const class FString& ErrorString, struct FOnlineGameSearchResult& outInviteResult);
	class TArray<struct FOnlineArbitrationRegistrant> GetArbitratedPlayers(const class FName& SessionName);
	void ClearArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate);
	void AddArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate);
	void OnArbitrationRegistrationComplete(const class FName& SessionName, bool bWasSuccessful);
	bool RegisterForArbitration(const class FName& SessionName);
	void ClearEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate);
	void AddEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate);
	void OnEndOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful);
	bool EndOnlineGame(const class FName& SessionName);
	void ClearStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate);
	void AddStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate);
	void OnStartOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful);
	bool StartOnlineGame(const class FName& SessionName);
	void ClearUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void AddUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void OnUnregisterPlayerComplete(const class FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	bool UnregisterPlayers(const class FName& SessionName, class TArray<struct FUniqueNetId>& outPlayers);
	bool UnregisterPlayer(const class FName& SessionName, const struct FUniqueNetId& PlayerID);
	void ClearRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void AddRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void OnRegisterPlayerComplete(const class FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	bool RegisterPlayers(const class FName& SessionName, class TArray<struct FUniqueNetId>& outPlayers);
	bool RegisterPlayer(const class FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasInvited);
	bool GetResolvedConnectString(const class FName& SessionName, class FString& outConnectInfo);
	void ClearJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate);
	void AddJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate);
	void OnJoinOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful);
	bool JoinOnlineGame(uint8_t PlayerNum, const class FName& SessionName, struct FOnlineGameSearchResult& outDesiredGame);
	bool FreeSearchResults(class UOnlineGameSearch* Search);
	void ClearCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate);
	void AddCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate);
	void OnCancelFindOnlineGamesComplete(bool bWasSuccessful);
	bool CancelFindOnlineGames();
	void ClearFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate);
	void AddFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate);
	bool FindOnlineGames(uint8_t SearchingPlayerNum, class UOnlineGameSearch* SearchSettings);
	void ClearDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate);
	void AddDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate);
	void OnDestroyOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful);
	bool DestroyOnlineGame(const class FName& SessionName);
	void ClearUpdateOnlineGameCompleteDelegate(const struct FScriptDelegate& UpdateOnlineGameCompleteDelegate);
	void AddUpdateOnlineGameCompleteDelegate(const struct FScriptDelegate& UpdateOnlineGameCompleteDelegate);
	void OnUpdateOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful);
	bool UpdateOnlineGame(const class FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool optionalBShouldRefreshOnlineData);
	void ClearCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate);
	void AddCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate);
	void OnCreateOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful);
	bool CreateOnlineGame(uint8_t HostingPlayerNum, const class FName& SessionName, class UOnlineGameSettings* NewGameSettings);
	class UOnlineGameSearch* GetGameSearch();
	class UOnlineGameSettings* GetGameSettings(const class FName& SessionName);
	void OnFindOnlineGamesComplete(bool bWasSuccessful);
};

// Class IpDrv.OnlineImageDownloaderWeb
// 0x00B0 (0x0060 - 0x0110)
class UOnlineImageDownloaderWeb : public UObject
{
public:
	int32_t                                            MaxSimultaneousDownloads;                      // 0x0060 (0x0004) [0x0000000000004000] (CPF_Config)  
	uint8_t                                          UnknownData00[0x4];                            // 0x0064 (0x0004) MISSED OFFSET
	struct FMap_Mirror                                 Downloads;                                     // 0x0068 (0x0050) [0x0000000000001000] (CPF_Native)  
	class TArray<class FString>                        URLQueue;                                      // 0x00B8 (0x0010) [0x0000000000001000] (CPF_Native)  
	class UImageDecoder*                               Decoder;                                       // 0x00C8 (0x0008) [0x0000000000000000]               
	int32_t                                            PendingDownloadCount;                          // 0x00D0 (0x0004) [0x0000004000001000] (CPF_Native | CPF_PrivateWrite)
	int32_t                                            ActiveDownloadCount;                           // 0x00D4 (0x0004) [0x0000004000001000] (CPF_Native | CPF_PrivateWrite)
	int32_t                                            SucceededDownloadCount;                        // 0x00D8 (0x0004) [0x0000004000001000] (CPF_Native | CPF_PrivateWrite)
	int32_t                                            FailedDownloadCount;                           // 0x00DC (0x0004) [0x0000004000001000] (CPF_Native | CPF_PrivateWrite)
	struct FScriptDelegate                             __OnOnlineImageFinished__Delegate;             // 0x00E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventImageDecoded__Delegate;                 // 0x00F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineImageDownloaderWeb");
		}

		return uClassPointer;
	};

	static EImageType GetImageType(const class FString& ContentType);
	void QueueURLForDownload(const class FString& NewURL, const struct FScriptDelegate& InternalCallbackOnComplete, const struct FScriptDelegate& ExternalCallback, bool bSupportSRGB);
	void DebugDraw(class UCanvas* Canvas);
	void OnDownloadComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void DownloadNextImage();
	void RequestOnlineImages(const struct FScriptDelegate& FinishedCallback, bool optionalBSupportSRGB, class TArray<class FString>& outURLs);
	class UTexture* GetOnlineImageTexture(const class FString& URL);
	void ClearQueue();
	class FString Dequeue();
	void Enqueue(const class FString& URL);
	void ClearActiveDownloads();
	void ClearCompletedDownloads();
	void HandleImageDecoded_Native(const class FString& RequestedURL, struct FImageLayout& outDecodedImage);
	void HandleImageDecoded(const class FString& RequestedURL, struct FImageLayout& outDecodedImage);
	void RequeueFailedURL(const class FString& URL);
	void DownloadNextQueuedURL();
	void UpdateActiveDownloadFromResponse(const class FString& URL, class UHttpResponseInterface* Response, const struct FScriptDelegate& OnDecodedCallback);
	void MarkActiveDownloadFailed(const class FString& URL);
	void QueueURLForDownloadInternal(const class FString& NewURL, class UHttpRequestInterface* Request, class UTexture2DDynamic* TextureHolder, const struct FScriptDelegate& OnDecodedCallback);
	void AddCallbackToDownload(const class FString& URL, const struct FScriptDelegate& NewCallback);
	struct FOnlineImageDownload GetDownload(const class FString& URL);
	bool IsURLQueued(const class FString& URL);
	bool IsURLActive(const class FString& URL);
	bool DidURLFail(const class FString& URL);
	bool DidURLSucceed(const class FString& URL);
	bool IsURLTracked(const class FString& URL);
	void AllValues(int32_t optionalStartIndex, int32_t optionalMaxValues, struct FOnlineImageDownload& outOutImage);
	void ClearPendingDownloads();
	void ClearAllDownloads();
	void EventImageDecoded(const class FString& RequestURL, struct FImageLayout& outImage);
	void OnOnlineImageFinished(const struct FOnlineImageDownload& ImageInfo);
	void eventConstruct();
};

// Class IpDrv.OnlineLobbyInterfaceImpl
// 0x0260 (0x0060 - 0x02C0)
class UOnlineLobbyInterfaceImpl : public UObject
{
public:
	class TArray<struct FScriptDelegate>               CreateLobbyCompleteDelegates;                  // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               FindLobbiesCompleteDelegates;                  // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               JoinLobbyCompleteDelegates;                    // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               LobbySettingsUpdateDelegates;                  // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               LobbyMemberSettingsUpdateDelegates;            // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               LobbyMemberStatusUpdateDelegates;              // 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               LobbyReceiveMessageDelegates;                  // 0x00C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               LobbyReceiveBinaryDataDelegates;               // 0x00D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               LobbyJoinGameDelegates;                        // 0x00E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               LobbyInviteDelegates;                          // 0x00F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               LobbyErrorDelegates;                           // 0x0100 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               LobbyDestroyedDelegates;                       // 0x0110 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               LobbySessionCreatedDelegates;                  // 0x0120 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               HostStartPlayTogetherDelegates;                // 0x0130 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FActiveLobbyInfo>              ActiveLobbies;                                 // 0x0140 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FBasicLobbyInfo>               CachedFindLobbyResults;                        // 0x0150 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<uint8_t>                              CachedBinaryData;                              // 0x0160 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateLobbyComplete__Delegate;             // 0x0170 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFindLobbiesComplete__Delegate;             // 0x0188 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnJoinLobbyComplete__Delegate;               // 0x01A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbySettingsUpdate__Delegate;             // 0x01B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyMemberSettingsUpdate__Delegate;       // 0x01D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyMemberStatusUpdate__Delegate;         // 0x01E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyReceiveMessage__Delegate;             // 0x0200 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyReceiveBinaryData__Delegate;          // 0x0218 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyJoinGame__Delegate;                   // 0x0230 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyInvite__Delegate;                     // 0x0248 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyDestroyed__Delegate;                  // 0x0260 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbySessionCreated__Delegate;             // 0x0278 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyError__Delegate;                      // 0x0290 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnHostStartPlayTogether__Delegate;           // 0x02A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineLobbyInterfaceImpl");
		}

		return uClassPointer;
	};

	void ClearHostStartPlayTogetherDelegate(const struct FScriptDelegate& InDelegate);
	void AddHostStartPlayTogetherDelegate(const struct FScriptDelegate& InDelegate);
	void OnHostStartPlayTogether(uint8_t LocalUserNum);
	void ClearLobbyErrorDelegate(const struct FScriptDelegate& LobbyErrorDelegate);
	void AddLobbyErrorDelegate(const struct FScriptDelegate& LobbyErrorDelegate);
	void OnLobbyError(const class FString& Error);
	bool eventGetLobbyMembers(struct FUniqueLobbyId& outLobbyId, class TArray<struct FLobbyMember>& outMembers);
	void ClearLobbySessionCretedeDelegate(const struct FScriptDelegate& LobbySessionCreatedDelegate);
	void ClearLobbySessionCreatedDelegate(const struct FScriptDelegate& LobbySessionCreatedDelegate);
	void AddLobbySessionCreatedDelegate(const struct FScriptDelegate& LobbySessionCreatedDelegate);
	void eventTriggerLobbySessionCreatedDelegates();
	void OnLobbySessionCreated();
	int32_t eventGetLobbyIndex(struct FUniqueLobbyId& outLobbyId);
	void RemoveLocalPlayerFromSession(struct FUniqueNetId& outPartyMember);
	void AddLocalPartyMemberToSession(struct FUniqueNetId& outNewPartyMember);
	bool KickPlayer(ELobbyKickReason Reason, struct FUniqueLobbyId& outLobbyId, struct FUniqueNetId& outPlayerID);
	bool ShowInviteUI(uint8_t LocalUserNum, struct FUniqueLobbyId& outLobbyId);
	void eventTriggerLobbyDestroyedDelegates(int32_t LobbyIndex, ELobbyKickReason Reason);
	void ClearLobbyDestroyedDelegate(const struct FScriptDelegate& LobbyDestroyedDelegate);
	void AddLobbyDestroyedDelegate(const struct FScriptDelegate& LobbyDestroyedDelegate);
	void OnLobbyDestroyed(ELobbyKickReason Reason, struct FUniqueLobbyId& outLobbyId);
	void ClearLobbyInviteDelegate(const struct FScriptDelegate& LobbyInviteDelegate);
	void AddLobbyInviteDelegate(const struct FScriptDelegate& LobbyInviteDelegate);
	void OnLobbyInvite(bool bAccepted, struct FUniqueLobbyId& outLobbyId, struct FUniqueNetId& outFriendId);
	bool InviteToLobby(struct FUniqueLobbyId& outLobbyId, struct FUniqueNetId& outPlayerID);
	bool CanInviteToLobby(struct FUniqueLobbyId& outLobbyId, struct FUniqueNetId& outPlayerID);
	bool SetLobbyOwner(struct FUniqueLobbyId& outLobbyId, struct FUniqueNetId& outNewOwner);
	bool SetLobbyLock(bool bLocked, struct FUniqueLobbyId& outLobbyId);
	bool SetLobbyServer(const class FString& ServerIP, struct FUniqueLobbyId& outLobbyId, struct FUniqueNetId& outServerUID);
	bool RemoveLobbySetting(const class FString& Key, struct FUniqueLobbyId& outLobbyId);
	bool SetLobbySetting(const class FString& Key, const class FString& Value, struct FUniqueLobbyId& outLobbyId);
	bool GetLobbyAdmin(struct FUniqueLobbyId& outLobbyId, struct FUniqueNetId& outAdminId);
	void ClearLobbyJoinGameDelegate(const struct FScriptDelegate& LobbyJoinGameDelegate);
	void AddLobbyJoinGameDelegate(const struct FScriptDelegate& LobbyJoinGameDelegate);
	void eventTriggerLobbyJoinGameDelegates(int32_t LobbyIndex, const class FString& ServerIP, struct FUniqueNetId& outServerId);
	void OnLobbyJoinGame(const class FString& ServerIP, struct FActiveLobbyInfo& outLobbyInfo, struct FUniqueNetId& outServerId);
	void ClearLobbyReceiveBinaryDataDelegate(const struct FScriptDelegate& LobbyReceiveBinaryDataDelegate);
	void AddLobbyReceiveBinaryDataDelegate(const struct FScriptDelegate& LobbyReceiveBinaryDataDelegate);
	void eventTriggerLobbyReceiveBinaryDataDelegates(int32_t LobbyIndex, int32_t MemberIndex);
	void OnLobbyReceiveBinaryData(int32_t MemberIndex, struct FActiveLobbyInfo& outLobbyInfo, class TArray<uint8_t>& outData);
	bool SendLobbyBinaryData(struct FUniqueLobbyId& outLobbyId, class TArray<uint8_t>& outData);
	void ClearLobbyReceiveMessageDelegate(const struct FScriptDelegate& LobbyReceiveMessageDelegate);
	void AddLobbyReceiveMessageDelegate(const struct FScriptDelegate& LobbyReceiveMessageDelegate);
	void eventTriggerLobbyReceiveMessageDelegates(int32_t LobbyIndex, int32_t MemberIndex, const class FString& Type, const class FString& Message);
	void OnLobbyReceiveMessage(int32_t MemberIndex, const class FString& Type, const class FString& Message, struct FActiveLobbyInfo& outLobbyInfo);
	bool SendLobbyMessage(const class FString& Message, struct FUniqueLobbyId& outLobbyId);
	void ClearLobbyMemberStatusUpdateDelegate(const struct FScriptDelegate& LobbyMemberStatusUpdateDelegate);
	void AddLobbyMemberStatusUpdateDelegate(const struct FScriptDelegate& LobbyMemberStatusUpdateDelegate);
	void eventTriggerLobbyMemberStatusUpdateDelegates(int32_t LobbyIndex, int32_t MemberIndex, int32_t InstigatorIndex, const class FString& Status);
	void OnLobbyMemberStatusUpdate(int32_t MemberIndex, int32_t InstigatorIndex, const class FString& Status, struct FActiveLobbyInfo& outLobbyInfo);
	void ClearLobbyMemberSettingsUpdateDelegate(const struct FScriptDelegate& LobbyMemberSettingsUpdateDelegate);
	void AddLobbyMemberSettingsUpdateDelegate(const struct FScriptDelegate& LobbyMemberSettingsUpdateDelegate);
	void eventTriggerLobbyMemberSettingsUpdateDelegates(int32_t LobbyIndex, int32_t MemberIndex);
	void OnLobbyMemberSettingsUpdate(int32_t MemberIndex, struct FActiveLobbyInfo& outLobbyInfo);
	void ClearLobbySettingsUpdateDelegate(const struct FScriptDelegate& LobbySettingsUpdateDelegate);
	void AddLobbySettingsUpdateDelegate(const struct FScriptDelegate& LobbySettingsUpdateDelegate);
	void eventTriggerLobbySettingsUpdateDelegates(int32_t LobbyIndex);
	void OnLobbySettingsUpdate(struct FActiveLobbyInfo& outLobbyInfo);
	bool SetLobbyUserSetting(const class FString& Key, const class FString& Value, struct FUniqueLobbyId& outLobbyId);
	bool LeaveLobby(struct FUniqueLobbyId& outLobbyId);
	void ClearJoinLobbyCompleteDelegate(const struct FScriptDelegate& JoinLobbyCompleteDelegate);
	void AddJoinLobbyCompleteDelegate(const struct FScriptDelegate& JoinLobbyCompleteDelegate);
	void eventTriggerJoinLobbyCompleteDelegates(bool bWasSuccessful, const class FString& Error, struct FActiveLobbyInfo& outLobbyInfo, struct FUniqueLobbyId& outLobbyUID);
	void OnJoinLobbyComplete(bool bWasSuccessful, const class FString& Error, struct FActiveLobbyInfo& outLobbyInfo, struct FUniqueLobbyId& outLobbyUID);
	bool JoinLobby(int32_t LocalPlayerNum, struct FUniqueLobbyId& outLobbyId);
	void ClearFindLobbiesCompleteDelegate(const struct FScriptDelegate& FindLobbiesCompleteDelegate);
	void AddFindLobbiesCompleteDelegate(const struct FScriptDelegate& FindLobbiesCompleteDelegate);
	void eventTriggerFindLobbiesCompleteDelegates(bool bWasSuccessful);
	void OnFindLobbiesComplete(bool bWasSuccessful, class TArray<struct FBasicLobbyInfo>& outLobbyList);
	bool UpdateFoundLobbies(const struct FUniqueLobbyId& optionalLobbyId);
	bool FindLobbies(int32_t optionalMaxResults, const class TArray<struct FLobbyFilter>& optionalFilters, const class TArray<struct FLobbySortFilter>& optionalSortFilters, int32_t optionalMinSlots, ELobbyDistance optionalDistance);
	void ClearCreateLobbyCompleteDelegate(const struct FScriptDelegate& CreateLobbyCompleteDelegate);
	void AddCreateLobbyCompleteDelegate(const struct FScriptDelegate& CreateLobbyCompleteDelegate);
	void OnCreateLobbyComplete(bool bWasSuccessful, const class FString& Error, struct FUniqueLobbyId& outLobbyId);
	bool CreateLobby(int32_t LocalPlayerNum, int32_t MaxPlayers, ELobbyVisibility optionalType, const class TArray<struct FLobbyMetaData>& optionalInitialSettings);
};

// Class IpDrv.OnlinePersistentAuthInterfaceImpl
// 0x0058 (0x0060 - 0x00B8)
class UOnlinePersistentAuthInterfaceImpl : public UObject
{
public:
	struct FPointer                                    VfTable_IOnlinePersistentAuthInterface;        // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class TArray<struct FScriptDelegate>               RequestPinGrantCodeDelegates;                  // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               UnderageUserDetectedDelegates;                 // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReceievedPinGrantCode__Delegate;           // 0x0088 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnderageUserDetected__Delegate;            // 0x00A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlinePersistentAuthInterfaceImpl");
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
	void ClearUnderageUserDetectedDelegate(const struct FScriptDelegate& Callback);
	void AddUnderageUserDetectedDelegate(const struct FScriptDelegate& Callback);
	void OnUnderageUserDetected(uint8_t LocalUserNum, const class FString& ParentalConsentURL);
	void ClearRequestPinGrantCodeDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& Callback);
	void AddRequestPinGrantCodeDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& Callback);
	void OnReceievedPinGrantCode(EPinGrantResult Result, uint8_t LocalUserNum, const class FString& Code, const class FString& URL, int32_t SecondsUntilExpiration);
};

// Class IpDrv.OnlinePlaylistManager
// 0x00E8 (0x0060 - 0x0148)
class UOnlinePlaylistManager : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class TArray<struct FPlaylist>                     Playlists;                                     // 0x0068 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<class FString>                        PlaylistFileNames;                             // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FName>                          DatastoresToRefresh;                           // 0x0088 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	int32_t                                            DownloadCount;                                 // 0x0098 (0x0004) [0x0000000000000000]               
	int32_t                                            SuccessfulCount;                               // 0x009C (0x0004) [0x0000000000000000]               
	int32_t                                            VersionNumber;                                 // 0x00A0 (0x0004) [0x0000000000004000] (CPF_Config)  
	uint8_t                                          UnknownData00[0x4];                            // 0x00A4 (0x0004) MISSED OFFSET
	class TArray<struct FPlaylistPopulation>           PopulationData;                                // 0x00A8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	int32_t                                            WorldwideTotalPlayers;                         // 0x00B8 (0x0004) [0x0000000000000000]               
	int32_t                                            RegionTotalPlayers;                            // 0x00BC (0x0004) [0x0000000000000000]               
	class UOnlineTitleFileInterface*                   TitleFileInterface_Object;                     // 0x00C0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UOnlineTitleFileInterface*                   TitleFileInterface_Interface;                  // 0x00C8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class FString                                      PopulationFileName;                            // 0x00D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              NextPlaylistPopulationUpdateTime;              // 0x00E0 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              PlaylistPopulationUpdateInterval;              // 0x00E4 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MinPlaylistIdToReport;                         // 0x00E8 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            CurrentPlaylistId;                             // 0x00EC (0x0004) [0x0000000000002000] (CPF_Transient)
	class FName                                        EventsInterfaceName;                           // 0x00F0 (0x0008) [0x0000000000004000] (CPF_Config)  
	int32_t                                            DataCenterId;                                  // 0x00F8 (0x0004) [0x0000000000004000] (CPF_Config)  
	uint8_t                                          UnknownData01[0x4];                            // 0x00FC (0x0004) MISSED OFFSET
	class FString                                      DataCenterFileName;                            // 0x0100 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              LastPlaylistDownloadTime;                      // 0x0110 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              PlaylistRefreshInterval;                       // 0x0114 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FScriptDelegate                             __OnReadPlaylistComplete__Delegate;            // 0x0118 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlaylistPopulationDataUpdated__Delegate;   // 0x0130 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlinePlaylistManager");
		}

		return uClassPointer;
	};

	void ParseDataCenterId(class TArray<uint8_t>& outData);
	void OnReadDataCenterIdComplete(bool bWasSuccessful, const class FString& Filename);
	void ReadDataCenterId();
	void eventSendPlaylistPopulationUpdate(int32_t NumPlayers);
	void GetPopulationInfoFromPlaylist(int32_t PlaylistId, int32_t& outWorldwideTotal, int32_t& outRegionTotal);
	void ParsePlaylistPopulationData(class TArray<uint8_t>& outData);
	void OnPlaylistPopulationDataUpdated();
	void OnReadPlaylistPopulationComplete(bool bWasSuccessful, const class FString& Filename);
	void ReadPlaylistPopulation();
	void Reset();
	void GetContentIdsFromPlaylist(int32_t PlaylistId, class TArray<int32_t>& outContentIds);
	void GetMapCycleFromPlaylist(int32_t PlaylistId, class TArray<class FName>& outMapCycle);
	class FString GetUrlFromPlaylist(int32_t PlaylistId);
	int32_t GetMatchType(int32_t PlaylistId);
	bool IsPlaylistArbitrated(int32_t PlaylistId);
	void GetLoadBalanceIdFromPlaylist(int32_t PlaylistId, int32_t& outLoadBalanceId);
	void GetTeamInfoFromPlaylist(int32_t PlaylistId, int32_t& outTeamSize, int32_t& outTeamCount, int32_t& outMaxPartySize);
	bool PlaylistSupportsDedicatedServers(int32_t PlaylistId);
	bool HasAnyGameSettings(int32_t PlaylistId);
	class UOnlineGameSettings* GetGameSettings(int32_t PlaylistId, int32_t GameSettingsId);
	void FinalizePlaylistObjects();
	void OnReadTitleFileComplete(bool bWasSuccessful, const class FString& Filename);
	bool ShouldRefreshPlaylists();
	void DetermineFilesToDownload();
	void DownloadPlaylist();
	void OnReadPlaylistComplete(bool bWasSuccessful);
};

// Class IpDrv.OnlinePurchaseInterfaceImpl
// 0x0030 (0x0060 - 0x0090)
class UOnlinePurchaseInterfaceImpl : public UObject
{
public:
	struct FScriptDelegate                             __EventGetAppPriceInfoComplete__Delegate;      // 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnMicroTxnResponse__Delegate;                // 0x0078 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlinePurchaseInterfaceImpl");
		}

		return uClassPointer;
	};

	void ClearMicroTxnResponseDelegate(const struct FScriptDelegate& ResponseMicroTxnDelegate);
	void AddMicroTxnResponseDelegate(const struct FScriptDelegate& ResponseMicroTxnDelegate);
	void OnMicroTxnResponse(bool bAuthorized, uint64_t OrderId);
	class FString FormatCurrency(const class FString& Currency, int32_t Price);
	bool GetAppPriceInfo(const struct FScriptDelegate& Callback, struct FUniqueNetId& outPlayerID, class TArray<class FName>& outAppNames);
	void EventGetAppPriceInfoComplete(const class FName& AppName, const class FString& Price, const class FString& DiscountPrice, int32_t DiscountPercentage);
};

// Class IpDrv.PartyBeacon
// 0x0048 (0x0060 - 0x00A8)
class UPartyBeacon : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	int32_t                                            PartyBeaconPort;                               // 0x0068 (0x0004) [0x0000000000004000] (CPF_Config)  
	uint8_t                                          UnknownData00[0x4];                            // 0x006C (0x0004) MISSED OFFSET
	struct FPointer                                    Socket;                                        // 0x0070 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	uint32_t                                           bIsInTick : 1;                                 // 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bWantsDeferredDestroy : 1;                     // 0x0078 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bShouldTick : 1;                               // 0x0078 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              HeartbeatTimeout;                              // 0x007C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ElapsedHeartbeatTime;                          // 0x0080 (0x0004) [0x0000000000000000]               
	class FName                                        BeaconName;                                    // 0x0084 (0x0008) [0x0000000000000000]               
	uint8_t                                          UnknownData01[0x4];                            // 0x008C (0x0004) MISSED OFFSET
	struct FScriptDelegate                             __OnDestroyComplete__Delegate;                 // 0x0090 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.PartyBeacon");
		}

		return uClassPointer;
	};

	void OnDestroyComplete();
	void eventDestroyBeacon();
};

// Class IpDrv.PartyBeaconClient
// 0x0118 (0x00A8 - 0x01C0)
class UPartyBeaconClient : public UPartyBeacon
{
public:
	struct FOnlineGameSearchResult                     HostPendingRequest;                            // 0x00A8 (0x0010) [0x0000000000000002] (CPF_Const)   
	struct FPartyReservation                           PendingRequest;                                // 0x00B8 (0x0060) [0x0000000000400000] (CPF_NeedCtorLink)
	EPartyBeaconClientState                            ClientBeaconState;                             // 0x0118 (0x0001) [0x0000000000000000]               
	EPartyBeaconClientRequest                          ClientBeaconRequestType;                       // 0x0119 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x2];                            // 0x011A (0x0002) MISSED OFFSET
	float                                              ReservationRequestTimeout;                     // 0x011C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ReservationRequestElapsedTime;                 // 0x0120 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData01[0x4];                            // 0x0124 (0x0004) MISSED OFFSET
	class FString                                      ResolverClassName;                             // 0x0128 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class UClass*                                      ResolverClass;                                 // 0x0138 (0x0008) [0x0000000000000000]               
	class UClientBeaconAddressResolver*                Resolver;                                      // 0x0140 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __OnReservationRequestComplete__Delegate;      // 0x0148 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReservationCountUpdated__Delegate;         // 0x0160 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnTravelRequestReceived__Delegate;           // 0x0178 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnHostIsReady__Delegate;                     // 0x0190 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnHostHasCancelled__Delegate;                // 0x01A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.PartyBeaconClient");
		}

		return uClassPointer;
	};

	void eventDestroyBeacon();
	bool CancelReservation(const struct FUniqueNetId& CancellingPartyLeader);
	bool RequestReservationUpdate(const struct FUniqueNetId& RequestingPartyLeader, struct FOnlineGameSearchResult& outDesiredHost, class TArray<struct FPlayerReservation>& outPlayersToAdd);
	bool RequestReservation(const struct FUniqueNetId& RequestingPartyLeader, struct FOnlineGameSearchResult& outDesiredHost, class TArray<struct FPlayerReservation>& outPlayers);
	void OnHostHasCancelled();
	void OnHostIsReady();
	void OnTravelRequestReceived(const class FName& SessionName, class UClass* SearchClass, uint8_t PlatformSpecificInfo[80]);
	void OnReservationCountUpdated(int32_t ReservationRemaining);
	void OnReservationRequestComplete(EPartyReservationResult ReservationResult);
};

// Class IpDrv.PartyBeaconHost
// 0x0098 (0x00A8 - 0x0140)
class UPartyBeaconHost : public UPartyBeacon
{
public:
	class TArray<struct FClientBeaconConnection>       Clients;                                       // 0x00A8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	int32_t                                            NumTeams;                                      // 0x00B8 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            NumPlayersPerTeam;                             // 0x00BC (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            NumReservations;                               // 0x00C0 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            NumConsumedReservations;                       // 0x00C4 (0x0004) [0x0000000000000002] (CPF_Const)   
	class TArray<struct FPartyReservation>             Reservations;                                  // 0x00C8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FName                                        OnlineSessionName;                             // 0x00D8 (0x0008) [0x0000000000000000]               
	int32_t                                            ConnectionBacklog;                             // 0x00E0 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            ForceTeamNum;                                  // 0x00E4 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            ReservedHostTeamNum;                           // 0x00E8 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bBestFitTeamAssignment : 1;                    // 0x00EC (0x0004) [0x0000000000000000] [0x00000001] 
	EPartyBeaconHostState                              BeaconState;                                   // 0x00F0 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                          UnknownData00[0x7];                            // 0x00F1 (0x0007) MISSED OFFSET
	struct FScriptDelegate                             __OnReservationChange__Delegate;               // 0x00F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReservationsFull__Delegate;                // 0x0110 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnClientCancellationReceived__Delegate;      // 0x0128 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.PartyBeaconHost");
		}

		return uClassPointer;
	};

	int32_t GetMaxAvailableTeamSize();
	void GetPartyLeaders(class TArray<struct FUniqueNetId>& outPartyLeaders);
	void GetPlayers(class TArray<struct FUniqueNetId>& outPlayers);
	void AppendReservationSkillsToSearch(class UOnlineGameSearch* Search);
	void eventUnregisterParty(const struct FUniqueNetId& PartyLeader);
	void eventUnregisterPartyMembers();
	void eventRegisterPartyMembers();
	bool AreReservationsFull();
	void TellClientsHostHasCancelled();
	void TellClientsHostIsReady();
	void TellClientsToTravel(const class FName& SessionName, class UClass* SearchClass, uint8_t PlatformSpecificInfo[80]);
	void eventDestroyBeacon();
	void OnClientCancellationReceived(const struct FUniqueNetId& PartyLeader);
	void OnReservationsFull();
	void OnReservationChange();
	void HandlePlayerLogout(const struct FUniqueNetId& PlayerID, bool bMaintainParty);
	int32_t GetExistingReservation(struct FUniqueNetId& outPartyLeader);
	EPartyReservationResult UpdatePartyReservationEntry(const struct FUniqueNetId& PartyLeader, class TArray<struct FPlayerReservation>& outPlayerMembers);
	EPartyReservationResult AddPartyReservationEntry(const struct FUniqueNetId& PartyLeader, int32_t TeamNum, bool bIsHost, class TArray<struct FPlayerReservation>& outPlayerMembers);
	bool InitHostBeacon(int32_t InNumTeams, int32_t InNumPlayersPerTeam, int32_t InNumReservations, const class FName& InSessionName, int32_t optionalInForceTeamNum);
	void PauseReservationRequests(bool bPause);
};

// Class IpDrv.TargetUserChatPermChangedEvent
// 0x0094 (0x0060 - 0x00F4)
class UTargetUserChatPermChangedEvent : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x0060 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                TargetId;                                      // 0x00A8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bAllowed : 1;                                  // 0x00F0 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.TargetUserChatPermChangedEvent");
		}

		return uClassPointer;
	};

};

// Class IpDrv.TcpipConnection
// 0x0028 (0xB1F0 - 0xB218)
class UTcpipConnection : public UNetConnection
{
public:
	uint8_t                                          UnknownData00[0x28];                          // 0xB1F0 (0x0028) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.TcpipConnection");
		}

		return uClassPointer;
	};

};

// Class IpDrv.TcpNetDriver
// 0x0080 (0x0298 - 0x0318)
class UTcpNetDriver : public UNetDriver
{
public:
	uint8_t                                          UnknownData00[0x58];                          // 0x0298 (0x0058) MISSED OFFSET
	uint32_t                                           AllowPlayerPortUnreach : 1;                    // 0x02F0 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	uint32_t                                           LogPortUnreach : 1;                            // 0x02F4 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	uint8_t                                          UnknownData01[0x20];                          // 0x02F8 (0x0020) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.TcpNetDriver");
		}

		return uClassPointer;
	};

};

// Class IpDrv.WebRequest
// 0x0100 (0x0060 - 0x0160)
class UWebRequest : public UObject
{
public:
	class FString                                      RemoteAddr;                                    // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      URI;                                           // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Username;                                      // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Password;                                      // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            ContentLength;                                 // 0x00A0 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x00A4 (0x0004) MISSED OFFSET
	class FString                                      ContentType;                                   // 0x00A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	ERequestType                                       RequestType;                                   // 0x00B8 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData01[0x7];                            // 0x00B9 (0x0007) MISSED OFFSET
	struct FMap_Mirror                                 HeaderMap;                                     // 0x00C0 (0x0050) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FMap_Mirror                                 VariableMap;                                   // 0x0110 (0x0050) [0x0000000000001002] (CPF_Const | CPF_Native)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.WebRequest");
		}

		return uClassPointer;
	};

	int32_t GetHexDigit(const class FString& D);
	void DecodeFormData(const class FString& Data);
	void ProcessHeaderString(const class FString& S);
	void Dump();
	void GetVariables(class TArray<class FString>& outVarNames);
	class FString GetVariableNumber(const class FString& VariableName, int32_t Number, const class FString& optionalDefaultValue);
	int32_t GetVariableCount(const class FString& VariableName);
	class FString GetVariable(const class FString& VariableName, const class FString& optionalDefaultValue);
	void AddVariable(const class FString& VariableName, const class FString& Value);
	void GetHeaders(class TArray<class FString>& outHeaders);
	class FString GetHeader(const class FString& HeaderName, const class FString& optionalDefaultValue);
	void AddHeader(const class FString& HeaderName, const class FString& Value);
	static class FString EncodeBase64(const class FString& Decoded);
	static class FString DecodeBase64(const class FString& Encoded);
};

// Class IpDrv.WebResponse
// 0x008C (0x0060 - 0x00EC)
class UWebResponse : public UObject
{
public:
	class TArray<class FString>                        Headers;                                       // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FMap_Mirror                                 ReplacementMap;                                // 0x0070 (0x0050) [0x0000000000001002] (CPF_Const | CPF_Native)
	class FString                                      IncludePath;                                   // 0x00C0 (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	class FString                                      CharSet;                                       // 0x00D0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class AWebConnection*                              Connection;                                    // 0x00E0 (0x0008) [0x0000000000000000]               
	uint32_t                                           bSentText : 1;                                 // 0x00E8 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bSentResponse : 1;                             // 0x00E8 (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.WebResponse");
		}

		return uClassPointer;
	};

	bool SentResponse();
	bool SentText();
	void Redirect(const class FString& URL);
	void SendStandardHeaders(const class FString& optionalContentType, bool optionalBCache);
	void HTTPError(int32_t ErrorNum, const class FString& optionalData);
	void SendHeaders();
	void AddHeader(const class FString& Header, bool optionalBReplace);
	void HTTPHeader(const class FString& Header);
	void HttpResponse(const class FString& Header);
	void FailAuthentication(const class FString& Realm);
	bool SendCachedFile(const class FString& Filename, const class FString& optionalContentType);
	void eventSendBinary(int32_t Count, uint8_t B[255]);
	void eventSendText(const class FString& Text, bool optionalBNoCRLF);
	void Dump();
	class FString GetHTTPExpiration(int32_t optionalOffsetSeconds);
	class FString LoadParsedUHTM(const class FString& Filename);
	bool IncludeBinaryFile(const class FString& Filename);
	bool IncludeUHTM(const class FString& Filename);
	void ClearSubst();
	void Subst(const class FString& Variable, const class FString& Value, bool optionalBClear);
	bool FileExists(const class FString& Filename);
};

// Class IpDrv.OnlinePlaylistProvider
// 0x0030 (0x009C - 0x00CC)
class UOnlinePlaylistProvider : public UUIResourceDataProvider
{
public:
	uint8_t                                          UnknownData00[0x4];                            // 0x009C (0x0004) MISSED OFFSET
	int32_t                                            PlaylistId;                                    // 0x00A0 (0x0004) [0x0000000000004000] (CPF_Config)  
	uint8_t                                          UnknownData01[0x4];                            // 0x00A4 (0x0004) MISSED OFFSET
	class TArray<class FName>                          PlaylistGameTypeNames;                         // 0x00A8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      DisplayName;                                   // 0x00B8 (0x0010) [0x000000000040C002] (CPF_Const | CPF_Config | CPF_Localized | CPF_NeedCtorLink)
	int32_t                                            Priority;                                      // 0x00C8 (0x0004) [0x0000000000004000] (CPF_Config)  

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlinePlaylistProvider");
		}

		return uClassPointer;
	};

};

// Class IpDrv.UIDataStore_OnlinePlaylists
// 0x0060 (0x00A0 - 0x0100)
class UUIDataStore_OnlinePlaylists : public UUIDataStore
{
public:
	class FString                                      ProviderClassName;                             // 0x00A0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class UClass*                                      ProviderClass;                                 // 0x00B0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class TArray<class UUIResourceDataProvider*>       RankedDataProviders;                           // 0x00B8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<class UUIResourceDataProvider*>       UnrankedDataProviders;                         // 0x00C8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<class UUIResourceDataProvider*>       RecModeDataProviders;                          // 0x00D8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<class UUIResourceDataProvider*>       PrivateDataProviders;                          // 0x00E8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class UOnlinePlaylistManager*                      PlaylistMan;                                   // 0x00F8 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.UIDataStore_OnlinePlaylists");
		}

		return uClassPointer;
	};

	int32_t eventGetMatchTypeForPlaylistId(int32_t PlaylistId);
	static class UOnlinePlaylistProvider* GetOnlinePlaylistProvider(const class FName& ProviderTag, int32_t PlaylistId, int32_t& outProviderIndex);
	bool GetPlaylistProvider(const class FName& ProviderTag, int32_t ProviderIndex, class UUIResourceDataProvider*& outOut_Provider);
	bool GetResourceProviders(const class FName& ProviderTag, class TArray<class UUIResourceDataProvider*>& outOut_Providers);
	void eventInit();
};

// Class IpDrv.WebApplication
// 0x0020 (0x0060 - 0x0080)
class UWebApplication : public UObject
{
public:
	class AWorldInfo*                                  WorldInfo;                                     // 0x0060 (0x0008) [0x0000000000000000]               
	class AWebServer*                                  WebServer;                                     // 0x0068 (0x0008) [0x0000000000000000]               
	class FString                                      Path;                                          // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.WebApplication");
		}

		return uClassPointer;
	};

	void PostQuery(class UWebRequest* Request, class UWebResponse* Response);
	void Query(class UWebRequest* Request, class UWebResponse* Response);
	bool PreQuery(class UWebRequest* Request, class UWebResponse* Response);
	void CleanupApp();
	void Cleanup();
	void Init();
};

// Class IpDrv.WebServer
// 0x01D0 (0x02D8 - 0x04A8)
class AWebServer : public ATcpLink
{
public:
	class FString                                      ServerName;                                    // 0x02D8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      Applications[10];                              // 0x02E8 (0x00A0) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      ApplicationPaths[10];                          // 0x0388 (0x00A0) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	uint32_t                                           bEnabled : 1;                                  // 0x0428 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	int32_t                                            ListenPort;                                    // 0x042C (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxConnections;                                // 0x0430 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            DefaultApplication;                            // 0x0434 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            ExpirationSeconds;                             // 0x0438 (0x0004) [0x0000000000004000] (CPF_Config)  
	uint8_t                                          UnknownData00[0x4];                            // 0x043C (0x0004) MISSED OFFSET
	class FString                                      ServerURL;                                     // 0x0440 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UWebApplication*                             ApplicationObjects[10];                        // 0x0450 (0x0050) [0x0000000000000000]               
	int32_t                                            ConnectionCount;                               // 0x04A0 (0x0004) [0x0000000000000000]               
	int32_t                                            ConnID;                                        // 0x04A4 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.WebServer");
		}

		return uClassPointer;
	};

	class UWebApplication* GetApplication(const class FString& URI, class FString& outSubURI);
	void eventLostChild(class AActor* C);
	void eventGainedChild(class AActor* C);
	void eventDestroyed();
	void PostBeginPlay();
};

// Class IpDrv.HelloWeb
// 0x0000 (0x0080 - 0x0080)
class UHelloWeb : public UWebApplication
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.HelloWeb");
		}

		return uClassPointer;
	};

	void eventQuery(class UWebRequest* Request, class UWebResponse* Response);
	void Init();
};

// Class IpDrv.ImageServer
// 0x0000 (0x0080 - 0x0080)
class UImageServer : public UWebApplication
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.ImageServer");
		}

		return uClassPointer;
	};

	void eventQuery(class UWebRequest* Request, class UWebResponse* Response);
};

// Class IpDrv.McpServiceConfig
// 0x0040 (0x0060 - 0x00A0)
class UMcpServiceConfig : public UObject
{
public:
	class FString                                      Protocol;                                      // 0x0060 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      Domain;                                        // 0x0070 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      AppKey;                                        // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      AppSecret;                                     // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpServiceConfig");
		}

		return uClassPointer;
	};

	class FString GetUserAuthTicket(const class FString& McpId);
};

// Class IpDrv.McpClashMobBase
// 0x00A0 (0x0078 - 0x0118)
class UMcpClashMobBase : public UMcpServiceBase
{
public:
	class FString                                      McpClashMobClassName;                          // 0x0078 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryChallengeListComplete__Delegate;      // 0x0088 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDownloadChallengeFileComplete__Delegate;   // 0x00A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAcceptChallengeComplete__Delegate;         // 0x00B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryChallengeUserStatusComplete__Delegate;// 0x00D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUpdateChallengeUserProgressComplete__Delegate;// 0x00E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUpdateChallengeUserRewardComplete__Delegate;// 0x0100 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpClashMobBase");
		}

		return uClassPointer;
	};

	void UpdateChallengeUserReward(const class FString& UniqueChallengeId, const class FString& UniqueUserId, int32_t UserReward);
	void OnUpdateChallengeUserRewardComplete(bool bWasSuccessful, const class FString& UniqueChallengeId, const class FString& UniqueUserId, const class FString& Error);
	void UpdateChallengeUserProgress(const class FString& UniqueChallengeId, const class FString& UniqueUserId, bool bDidComplete, int32_t GoalProgress);
	void OnUpdateChallengeUserProgressComplete(bool bWasSuccessful, const class FString& UniqueChallengeId, const class FString& UniqueUserId, const class FString& Error);
	void GetChallengeUserStatus(const class FString& UniqueChallengeId, const class FString& UniqueUserId, struct FMcpClashMobChallengeUserStatus& outOutChallengeUserStatus);
	void QueryChallengeMultiUserStatus(const class FString& UniqueChallengeId, const class FString& UniqueUserId, class TArray<class FString>& outUserIdsToRead);
	void QueryChallengeUserStatus(const class FString& UniqueChallengeId, const class FString& UniqueUserId);
	void OnQueryChallengeUserStatusComplete(bool bWasSuccessful, const class FString& UniqueChallengeId, const class FString& UniqueUserId, const class FString& Error);
	void AcceptChallenge(const class FString& UniqueChallengeId, const class FString& UniqueUserId);
	void OnAcceptChallengeComplete(bool bWasSuccessful, const class FString& UniqueChallengeId, const class FString& UniqueUserId, const class FString& Error);
	void DeleteCachedChallengeFile(const class FString& UniqueChallengeId, const class FString& DLName);
	void ClearCachedChallengeFile(const class FString& UniqueChallengeId, const class FString& DLName);
	void GetChallengeFileContents(const class FString& UniqueChallengeId, const class FString& DLName, class TArray<uint8_t>& outOutFileContents);
	void DownloadChallengeFile(const class FString& UniqueChallengeId, const class FString& DLName);
	void GetChallengeFileList(const class FString& UniqueChallengeId, class TArray<struct FMcpClashMobChallengeFile>& outOutChallengeFiles);
	void OnDownloadChallengeFileComplete(bool bWasSuccessful, const class FString& UniqueChallengeId, const class FString& DLName, const class FString& Filename, const class FString& Error);
	void GetChallengeList(class TArray<struct FMcpClashMobChallengeEvent>& outOutChallengeEvents);
	void QueryChallengeList();
	void OnQueryChallengeListComplete(bool bWasSuccessful, const class FString& Error);
	static class UMcpClashMobBase* CreateInstance();
};

// Class IpDrv.McpClashMobFileDownload
// 0x0000 (0x0128 - 0x0128)
class UMcpClashMobFileDownload : public UOnlineTitleFileDownloadWeb
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpClashMobFileDownload");
		}

		return uClassPointer;
	};

	class FString GetUrlForFile(const class FString& Filename);
};

// Class IpDrv.McpClashMobManager
// 0x0150 (0x0118 - 0x0268)
class UMcpClashMobManager : public UMcpClashMobBase
{
public:
	class FString                                      ChallengeListUrl;                              // 0x0118 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      ChallengeStatusUrl;                            // 0x0128 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      ChallengeMultiStatusUrl;                       // 0x0138 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      AcceptChallengeUrl;                            // 0x0148 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      UpdateChallengeProgressUrl;                    // 0x0158 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      UpdateRewardProgressUrl;                       // 0x0168 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequestChallengeList;                      // 0x0178 (0x0008) [0x0000000000000000]               
	class TArray<struct FMcpChallengeUserRequest>      ChallengeUserRequests;                         // 0x0180 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FMcpClashMobChallengeEvent>    ChallengeEvents;                               // 0x0190 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FMcpClashMobChallengeUserStatus> ChallengeUserStatus;                           // 0x01A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FMcpClashMobChallengeUserStatus             TempChallengeUserStatus;                       // 0x01B0 (0x0090) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FMcpClashMobChallengeUserStatus> TempChallengeUserStatusArray;                  // 0x0240 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UOnlineTitleFileCacheInterface*              FileCache_Object;                              // 0x0250 (0x0008) [0x0000000000000000] 
	class UOnlineTitleFileCacheInterface*              FileCache_Interface;                           // 0x0258 (0x0008) [0x0000000000000000]               
	class UMcpClashMobFileDownload*                    FileDownloader;                                // 0x0260 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpClashMobManager");
		}

		return uClassPointer;
	};

	void OnUpdateChallengeUserRewardHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void UpdateChallengeUserReward(const class FString& UniqueChallengeId, const class FString& UniqueUserId, int32_t UserReward);
	void OnUpdateChallengeUserProgressHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void UpdateChallengeUserProgress(const class FString& UniqueChallengeId, const class FString& UniqueUserId, bool bDidComplete, int32_t GoalProgress);
	void GetChallengeUserStatus(const class FString& UniqueChallengeId, const class FString& UniqueUserId, struct FMcpClashMobChallengeUserStatus& outOutChallengeUserStatus);
	void OnQueryChallengeMultiStatusHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QueryChallengeMultiUserStatus(const class FString& UniqueChallengeId, const class FString& UniqueUserId, class TArray<class FString>& outUserIdsToRead);
	void OnQueryChallengeStatusHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QueryChallengeUserStatus(const class FString& UniqueChallengeId, const class FString& UniqueUserId);
	void OnAcceptChallengeHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void AcceptChallenge(const class FString& UniqueChallengeId, const class FString& UniqueUserId);
	void DeleteCachedChallengeFile(const class FString& UniqueChallengeId, const class FString& DLName);
	void ClearCachedChallengeFile(const class FString& UniqueChallengeId, const class FString& DLName);
	void GetChallengeFileContents(const class FString& UniqueChallengeId, const class FString& DLName, class TArray<uint8_t>& outOutFileContents);
	void OnDownloadMcpFileComplete(bool bWasSuccessful, const class FString& DLName);
	void OnLoadCachedFileComplete(bool bWasSuccessful, const class FString& DLName);
	void DownloadChallengeFile(const class FString& UniqueChallengeId, const class FString& DLName);
	void GetChallengeFileList(const class FString& UniqueChallengeId, class TArray<struct FMcpClashMobChallengeFile>& outOutChallengeFiles);
	void GetChallengeList(class TArray<struct FMcpClashMobChallengeEvent>& outOutChallengeEvents);
	void OnQueryChallengeListHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QueryChallengeList();
	void Init();
};

// Class IpDrv.McpGroupsBase
// 0x00F8 (0x0078 - 0x0170)
class UMcpGroupsBase : public UMcpServiceBase
{
public:
	class FString                                      McpGroupsManagerClassName;                     // 0x0078 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<struct FMcpGroupList>                 GroupLists;                                    // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateGroupComplete__Delegate;             // 0x0098 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteGroupComplete__Delegate;             // 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryGroupsComplete__Delegate;             // 0x00C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryGroupMembersComplete__Delegate;       // 0x00E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAddGroupMembersComplete__Delegate;         // 0x00F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRemoveGroupMembersComplete__Delegate;      // 0x0110 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteAllGroupsComplete__Delegate;         // 0x0128 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryGroupInvitesComplete__Delegate;       // 0x0140 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAcceptGroupInviteComplete__Delegate;       // 0x0158 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpGroupsBase");
		}

		return uClassPointer;
	};

	void OnAcceptGroupInviteComplete(const class FString& GroupId, bool bWasSuccessful, const class FString& Error);
	void AcceptGroupInvite(const class FString& UniqueUserId, const class FString& GroupId, bool bShouldAccept);
	void GetGroupInviteList(const class FString& UserId, struct FMcpGroupList& outInviteList);
	void OnQueryGroupInvitesComplete(bool bWasSuccessful, const class FString& Error);
	void QueryGroupInvites(const class FString& UniqueUserId);
	void OnDeleteAllGroupsComplete(const class FString& RequesterId, bool bWasSuccessful, const class FString& Error);
	void DeleteAllGroups(const class FString& OwnerId);
	void OnRemoveGroupMembersComplete(const class FString& GroupId, bool bWasSuccessful, const class FString& Error);
	void RemoveGroupMembers(const class FString& OwnerId, const class FString& GroupId, class TArray<class FString>& outMemberIds);
	void OnAddGroupMembersComplete(const class FString& GroupId, bool bWasSuccessful, const class FString& Error);
	void AddGroupMembers(const class FString& OwnerId, const class FString& GroupId, bool bRequiresAcceptance, class TArray<class FString>& outMemberIds);
	void GetGroupMembers(const class FString& GroupId, class TArray<struct FMcpGroupMember>& outGroupMembers);
	void OnQueryGroupMembersComplete(const class FString& GroupId, bool bWasSuccessful, const class FString& Error);
	void QueryGroupMembers(const class FString& UniqueUserId, const class FString& GroupId);
	void GetGroupList(const class FString& UserId, struct FMcpGroupList& outGroupList);
	void OnQueryGroupsComplete(const class FString& UserId, bool bWasSuccessful, const class FString& Error);
	void QueryGroups(const class FString& RequesterId);
	void OnDeleteGroupComplete(const class FString& GroupId, bool bWasSuccessful, const class FString& Error);
	void DeleteGroup(const class FString& UniqueUserId, const class FString& GroupId);
	void OnCreateGroupComplete(const struct FMcpGroup& Group, bool bWasSuccessful, const class FString& Error);
	void CreateGroup(const class FString& OwnerId, const class FString& GroupName);
	static class UMcpGroupsBase* CreateInstance();
};

// Class IpDrv.McpGroupsManager
// 0x00F0 (0x0170 - 0x0260)
class UMcpGroupsManager : public UMcpGroupsBase
{
public:
	class FString                                      CreateGroupUrl;                                // 0x0170 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      DeleteGroupUrl;                                // 0x0180 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      QueryGroupsUrl;                                // 0x0190 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      QueryGroupMembersUrl;                          // 0x01A0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      AddGroupMembersUrl;                            // 0x01B0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      RemoveGroupMembersUrl;                         // 0x01C0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      DeleteAllGroupsUrl;                            // 0x01D0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      AcceptGroupInviteUrl;                          // 0x01E0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      RejectGroupInviteUrl;                          // 0x01F0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryGroupsRequestComplete__Delegate;      // 0x0200 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryGroupMembersRequestComplete__Delegate;// 0x0218 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAddGroupMembersRequestComplete__Delegate;  // 0x0230 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAcceptGroupInviteRequestComplete__Delegate;// 0x0248 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpGroupsManager");
		}

		return uClassPointer;
	};

	void CacheGroupMember(const class FString& MemberId, const class FString& GroupId, EMcpGroupAcceptState AcceptState);
	void CacheGroup(const class FString& RequesterId, const struct FMcpGroup& Group);
	void OnAcceptGroupInviteRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void AcceptGroupInvite(const class FString& UniqueUserId, const class FString& GroupId, bool bShouldAccept);
	void OnDeleteAllGroupsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void DeleteAllGroups(const class FString& UniqueUserId);
	void OnRemoveGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void RemoveGroupMembers(const class FString& UniqueUserId, const class FString& GroupId, class TArray<class FString>& outMemberIds);
	void OnAddGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void AddGroupMembers(const class FString& UniqueUserId, const class FString& GroupId, bool bRequiresAcceptance, class TArray<class FString>& outMemberIds);
	void GetGroupMembers(const class FString& GroupId, class TArray<struct FMcpGroupMember>& outGroupMembers);
	void OnQueryGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void QueryGroupMembers(const class FString& UniqueUserId, const class FString& GroupId);
	void GetGroupList(const class FString& UserId, struct FMcpGroupList& outGroupList);
	void OnQueryGroupsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void QueryGroups(const class FString& RequesterId);
	void OnDeleteGroupRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void DeleteGroup(const class FString& UniqueUserId, const class FString& GroupId);
	void OnCreateGroupRequestComplete(class UHttpRequestInterface* CreateGroupRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void CreateGroup(const class FString& UniqueUserId, const class FString& GroupName);
};

// Class IpDrv.McpIdMappingBase
// 0x0040 (0x0078 - 0x00B8)
class UMcpIdMappingBase : public UMcpServiceBase
{
public:
	class FString                                      McpIdMappingClassName;                         // 0x0078 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAddMappingComplete__Delegate;              // 0x0088 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryMappingsComplete__Delegate;           // 0x00A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpIdMappingBase");
		}

		return uClassPointer;
	};

	void GetIdMappings(const class FString& ExternalType, class TArray<struct FMcpIdMapping>& outIDMappings);
	void OnQueryMappingsComplete(const class FString& ExternalType, bool bWasSuccessful, const class FString& Error);
	void QueryMappings(const class FString& ExternalType, class TArray<class FString>& outExternalIds);
	void OnAddMappingComplete(const class FString& McpId, const class FString& ExternalId, const class FString& ExternalType, bool bWasSuccessful, const class FString& Error);
	void AddMapping(const class FString& McpId, const class FString& ExternalId, const class FString& ExternalType);
	static class UMcpIdMappingBase* CreateInstance();
};

// Class IpDrv.McpIdMappingManager
// 0x0050 (0x00B8 - 0x0108)
class UMcpIdMappingManager : public UMcpIdMappingBase
{
public:
	class TArray<struct FMcpIdMapping>                 AccountMappings;                               // 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      AddMappingUrl;                                 // 0x00C8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      QueryMappingUrl;                               // 0x00D8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<struct FAddMappingRequest>            AddMappingRequests;                            // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FQueryMappingRequest>          QueryMappingRequests;                          // 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpIdMappingManager");
		}

		return uClassPointer;
	};

	void GetIdMappings(const class FString& ExternalType, class TArray<struct FMcpIdMapping>& outIDMappings);
	void OnQueryMappingsRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QueryMappings(const class FString& ExternalType, class TArray<class FString>& outExternalIds);
	void OnAddMappingRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void AddMapping(const class FString& McpId, const class FString& ExternalId, const class FString& ExternalType);
};

// Class IpDrv.McpManagedValueManagerBase
// 0x0070 (0x0078 - 0x00E8)
class UMcpManagedValueManagerBase : public UMcpServiceBase
{
public:
	class FString                                      McpManagedValueManagerClassName;               // 0x0078 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateSaveSlotComplete__Delegate;          // 0x0088 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadSaveSlotComplete__Delegate;            // 0x00A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUpdateValueComplete__Delegate;             // 0x00B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteValueComplete__Delegate;             // 0x00D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpManagedValueManagerBase");
		}

		return uClassPointer;
	};

	void OnDeleteValueComplete(const class FString& McpId, const class FString& SaveSlot, const class FName& ValueId, bool bWasSuccessful, const class FString& Error);
	void DeleteValue(const class FString& McpId, const class FString& SaveSlot, const class FName& ValueId);
	void OnUpdateValueComplete(const class FString& McpId, const class FString& SaveSlot, const class FName& ValueId, int32_t Value, bool bWasSuccessful, const class FString& Error);
	void UpdateValue(const class FString& McpId, const class FString& SaveSlot, const class FName& ValueId, int32_t Value);
	int32_t GetValue(const class FString& McpId, const class FString& SaveSlot, const class FName& ValueId);
	class TArray<struct FManagedValue> GetValues(const class FString& McpId, const class FString& SaveSlot);
	void OnReadSaveSlotComplete(const class FString& McpId, const class FString& SaveSlot, bool bWasSuccessful, const class FString& Error);
	void ReadSaveSlot(const class FString& McpId, const class FString& SaveSlot);
	void OnCreateSaveSlotComplete(const class FString& McpId, const class FString& SaveSlot, bool bWasSuccessful, const class FString& Error);
	void CreateSaveSlot(const class FString& McpId, const class FString& SaveSlot);
	static class UMcpManagedValueManagerBase* CreateInstance();
};

// Class IpDrv.McpManagedValueManager
// 0x0090 (0x00E8 - 0x0178)
class UMcpManagedValueManager : public UMcpManagedValueManagerBase
{
public:
	class FString                                      CreateSaveSlotUrl;                             // 0x00E8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      ReadSaveSlotUrl;                               // 0x00F8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      UpdateValueUrl;                                // 0x0108 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      DeleteValueUrl;                                // 0x0118 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<struct FManagedValueSaveSlot>         SaveSlots;                                     // 0x0128 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct UMcpManagedValueManager_FSaveSlotRequestState> CreateSaveSlotRequests;                        // 0x0138 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct UMcpManagedValueManager_FSaveSlotRequestState> ReadSaveSlotRequests;                          // 0x0148 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FValueRequestState>            UpdateValueRequests;                           // 0x0158 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FValueRequestState>            DeleteValueRequests;                           // 0x0168 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpManagedValueManager");
		}

		return uClassPointer;
	};

	void OnDeleteValueRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void DeleteValue(const class FString& McpId, const class FString& SaveSlot, const class FName& ValueId);
	void OnUpdateValueRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void UpdateValue(const class FString& McpId, const class FString& SaveSlot, const class FName& ValueId, int32_t Value);
	int32_t GetValue(const class FString& McpId, const class FString& SaveSlot, const class FName& ValueId);
	class TArray<struct FManagedValue> GetValues(const class FString& McpId, const class FString& SaveSlot);
	void OnReadSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void ReadSaveSlot(const class FString& McpId, const class FString& SaveSlot);
	void ParseValuesForSaveSlot(const class FString& McpId, const class FString& SaveSlot, const class FString& JsonPayload);
	int32_t FindSaveSlotIndex(const class FString& McpId, const class FString& SaveSlot);
	void OnCreateSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void CreateSaveSlot(const class FString& McpId, const class FString& SaveSlot);
};

// Class IpDrv.McpServerTimeBase
// 0x0028 (0x0078 - 0x00A0)
class UMcpServerTimeBase : public UMcpServiceBase
{
public:
	class FString                                      McpServerTimeClassName;                        // 0x0078 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryServerTimeComplete__Delegate;         // 0x0088 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpServerTimeBase");
		}

		return uClassPointer;
	};

	class FString GetLastServerTime();
	void OnQueryServerTimeComplete(bool bWasSuccessful, const class FString& DateTimeStr, const class FString& Error);
	void QueryServerTime();
	static class UMcpServerTimeBase* CreateInstance();
};

// Class IpDrv.McpServerTimeManager
// 0x0028 (0x00A0 - 0x00C8)
class UMcpServerTimeManager : public UMcpServerTimeBase
{
public:
	class FString                                      TimeStampUrl;                                  // 0x00A0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      LastTimeStamp;                                 // 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequestServerTime;                         // 0x00C0 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpServerTimeManager");
		}

		return uClassPointer;
	};

	class FString GetLastServerTime();
	void OnQueryServerTimeHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QueryServerTime();
};

// Class IpDrv.McpUserInventoryBase
// 0x0100 (0x0078 - 0x0178)
class UMcpUserInventoryBase : public UMcpServiceBase
{
public:
	class FString                                      McpUserInventoryClassName;                     // 0x0078 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateSaveSlotComplete__Delegate;          // 0x0088 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteSaveSlotComplete__Delegate;          // 0x00A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQuerySaveSlotListComplete__Delegate;       // 0x00B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryInventoryItemsComplete__Delegate;     // 0x00D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPurchaseItemComplete__Delegate;            // 0x00E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnSellItemComplete__Delegate;                // 0x0100 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnEarnItemComplete__Delegate;                // 0x0118 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnConsumeItemComplete__Delegate;             // 0x0130 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteItemComplete__Delegate;              // 0x0148 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRecordIapComplete__Delegate;               // 0x0160 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpUserInventoryBase");
		}

		return uClassPointer;
	};

	void OnRecordIapComplete(const class FString& McpId, const class FString& SaveSlotId, const class TArray<class FString>& UpdatedItemIds, bool bWasSuccessful, const class FString& Error);
	void RecordIap(const class FString& McpId, const class FString& SaveSlotId, const class FString& Receipt);
	void OnDeleteItemComplete(const class FString& McpId, const class FString& SaveSlotId, const class FString& InstanceItemId, bool bWasSuccessful, const class FString& Error);
	void DeleteItem(const class FString& McpId, const class FString& SaveSlotId, const class FString& InstanceItemId, int32_t StoreVersion);
	void OnConsumeItemComplete(const class FString& McpId, const class FString& SaveSlotId, const class FString& InstanceItemId, const class TArray<class FString>& UpdatedItemIds, bool bWasSuccessful, const class FString& Error);
	void ConsumeItem(const class FString& McpId, const class FString& SaveSlotId, const class FString& InstanceItemId, int32_t Quantity, int32_t StoreVersion);
	void OnEarnItemComplete(const class FString& McpId, const class FString& SaveSlotId, const class FString& GlobalItemId, const class TArray<class FString>& UpdatedItemIds, bool bWasSuccessful, const class FString& Error);
	void EarnItem(const class FString& McpId, const class FString& SaveSlotId, const class FString& GlobalItemId, int32_t Quantity, int32_t StoreVersion);
	void OnSellItemComplete(const class FString& McpId, const class FString& SaveSlotId, const class FString& InstanceItemId, const class TArray<class FString>& UpdatedItemIds, bool bWasSuccessful, const class FString& Error);
	void SellItem(const class FString& McpId, const class FString& SaveSlotId, const class FString& InstanceItemId, int32_t Quantity, int32_t StoreVersion, class TArray<struct FMcpInventoryItemContainer>& outExpectedResultItems);
	void OnPurchaseItemComplete(const class FString& McpId, const class FString& SaveSlotId, const class FString& GlobalItemId, const class TArray<class FString>& UpdatedItemIds, bool bWasSuccessful, const class FString& Error);
	void PurchaseItem(const class FString& McpId, const class FString& SaveSlotId, const class FString& GlobalItemId, const class TArray<class FString>& PurchaseItemIds, int32_t Quantity, int32_t StoreVersion, float Scalar);
	bool GetInventoryItem(const class FString& McpId, const class FString& SaveSlotId, const class FString& InstanceItemId, struct FMcpInventoryItem& outOutInventoryItem);
	void GetInventoryItems(const class FString& McpId, const class FString& SaveSlotId, class TArray<struct FMcpInventoryItem>& outOutInventoryItems);
	void OnQueryInventoryItemsComplete(const class FString& McpId, const class FString& SaveSlotId, bool bWasSuccessful, const class FString& Error);
	void QueryInventoryItems(const class FString& McpId, const class FString& SaveSlotId);
	void OnQuerySaveSlotListComplete(const class FString& McpId, bool bWasSuccessful, const class FString& Error);
	class TArray<class FString> GetSaveSlotList(const class FString& McpId);
	void QuerySaveSlotList(const class FString& McpId);
	void OnDeleteSaveSlotComplete(const class FString& McpId, const class FString& SaveSlotId, bool bWasSuccessful, const class FString& Error);
	void DeleteSaveSlot(const class FString& McpId, const class FString& SaveSlotId);
	void OnCreateSaveSlotComplete(const class FString& McpId, const class FString& SaveSlotId, bool bWasSuccessful, const class FString& Error);
	void CreateSaveSlot(const class FString& McpId, const class FString& SaveSlotId, const class FString& optionalParentSaveSlotId);
	static class UMcpUserInventoryBase* CreateInstance();
};

// Class IpDrv.McpUserInventoryManager
// 0x00F0 (0x0178 - 0x0268)
class UMcpUserInventoryManager : public UMcpUserInventoryBase
{
public:
	class FString                                      CreateSaveSlotUrl;                             // 0x0178 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      DeleteSaveSlotUrl;                             // 0x0188 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      ListSaveSlotUrl;                               // 0x0198 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      ListItemsUrl;                                  // 0x01A8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      PurchaseItemUrl;                               // 0x01B8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      SellItemUrl;                                   // 0x01C8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      EarnItemUrl;                                   // 0x01D8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      ConsumeItemUrl;                                // 0x01E8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      DeleteItemUrl;                                 // 0x01F8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      IapRecordUrl;                                  // 0x0208 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<struct FMcpInventorySaveSlot>         SaveSlots;                                     // 0x0218 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState> SaveSlotRequests;                              // 0x0228 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState> ListSaveSlotRequests;                          // 0x0238 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState> ListItemsRequests;                             // 0x0248 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FInventoryItemRequestState>    ItemRequests;                                  // 0x0258 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpUserInventoryManager");
		}

		return uClassPointer;
	};

	void OnRecordIapRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void RecordIap(const class FString& McpId, const class FString& SaveSlotId, const class FString& Receipt);
	void OnDeleteItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void DeleteItem(const class FString& McpId, const class FString& SaveSlotId, const class FString& InstanceItemId, int32_t StoreVersion);
	void OnConsumeItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void ConsumeItem(const class FString& McpId, const class FString& SaveSlotId, const class FString& InstanceItemId, int32_t Quantity, int32_t StoreVersion);
	void OnEarnItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void EarnItem(const class FString& McpId, const class FString& SaveSlotId, const class FString& GlobalItemId, int32_t Quantity, int32_t StoreVersion);
	void OnSellItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void SellItem(const class FString& McpId, const class FString& SaveSlotId, const class FString& InstanceItemId, int32_t Quantity, int32_t StoreVersion, class TArray<struct FMcpInventoryItemContainer>& outExpectedResultItems);
	void OnPurchaseItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void PurchaseItem(const class FString& McpId, const class FString& SaveSlotId, const class FString& GlobalItemId, const class TArray<class FString>& PurchaseItemIds, int32_t Quantity, int32_t StoreVersion, float Scalar);
	int32_t FindItemRequest(const class FString& McpId, const class FString& SaveSlotId, const class FString& ItemID, class TArray<struct FInventoryItemRequestState>& outInItemRequests);
	int32_t FindSaveSlotRequest(const class FString& McpId, const class FString& SaveSlotId, class TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState>& outInSaveSlotRequests);
	int32_t FindSaveSlotIndex(const class FString& McpId, const class FString& SaveSlotId);
	void ParseSaveSlotList(const class FString& McpId, const class FString& JsonPayload);
	class TArray<class FString> ParseInventoryForSaveSlot(const class FString& McpId, const class FString& SaveSlotId, const class FString& JsonPayload);
	bool GetInventoryItem(const class FString& McpId, const class FString& SaveSlotId, const class FString& InstanceItemId, struct FMcpInventoryItem& outOutInventoryItem);
	void GetInventoryItems(const class FString& McpId, const class FString& SaveSlotId, class TArray<struct FMcpInventoryItem>& outOutInventoryItems);
	void OnQueryInventoryItemsRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QueryInventoryItems(const class FString& McpId, const class FString& SaveSlotId);
	class TArray<class FString> GetSaveSlotList(const class FString& McpId);
	void OnQuerySaveSlotListRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QuerySaveSlotList(const class FString& McpId);
	void OnDeleteSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void DeleteSaveSlot(const class FString& McpId, const class FString& SaveSlotId);
	void OnCreateSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void CreateSaveSlot(const class FString& McpId, const class FString& SaveSlotId, const class FString& optionalParentSaveSlotId);
};

// Class IpDrv.McpUserManagerBase
// 0x0070 (0x0078 - 0x00E8)
class UMcpUserManagerBase : public UMcpServiceBase
{
public:
	class FString                                      McpUserManagerClassName;                       // 0x0078 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterUserComplete__Delegate;            // 0x0088 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAuthenticateUserComplete__Delegate;        // 0x00A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryUsersComplete__Delegate;              // 0x00B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteUserComplete__Delegate;              // 0x00D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpUserManagerBase");
		}

		return uClassPointer;
	};

	void OnDeleteUserComplete(bool bWasSuccessful, const class FString& Error);
	void DeleteUser(const class FString& McpId);
	bool GetUser(const class FString& McpId, struct FMcpUserStatus& outUser);
	void GetUsers(class TArray<struct FMcpUserStatus>& outUsers);
	void OnQueryUsersComplete(bool bWasSuccessful, const class FString& Error);
	void QueryUsers(class TArray<class FString>& outMcpIds);
	void QueryUser(const class FString& McpId, bool optionalBShouldUpdateLastActive);
	void OnAuthenticateUserComplete(const class FString& McpId, const class FString& Token, bool bWasSuccessful, const class FString& Error);
	void AuthenticateUserMcp(const class FString& McpId, const class FString& ClientSecret, const class FString& UDID);
	void AuthenticateUserFacebook(const class FString& FacebookId, const class FString& FacebookToken, const class FString& UDID);
	void OnRegisterUserComplete(const class FString& McpId, bool bWasSuccessful, const class FString& Error);
	void RegisterUserFacebook(const class FString& FacebookId, const class FString& FacebookAuthToken);
	void RegisterUserGenerated();
	static class UMcpUserManagerBase* CreateInstance();
};

// Class IpDrv.McpUserManager
// 0x00C0 (0x00E8 - 0x01A8)
class UMcpUserManager : public UMcpUserManagerBase
{
public:
	class TArray<struct FMcpUserStatus>                UserStatuses;                                  // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      RegisterUserMcpUrl;                            // 0x00F8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      RegisterUserFacebookUrl;                       // 0x0108 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      QueryUserUrl;                                  // 0x0118 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      QueryUsersUrl;                                 // 0x0128 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      DeleteUserUrl;                                 // 0x0138 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      FacebookAuthUrl;                               // 0x0148 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      McpAuthUrl;                                    // 0x0158 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<class UHttpRequestInterface*>         RegisterUserRequests;                          // 0x0168 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UHttpRequestInterface*>         QueryUsersRequests;                            // 0x0178 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FUserRequest>                  DeleteUserRequests;                            // 0x0188 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UHttpRequestInterface*>         AuthUserRequests;                              // 0x0198 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpUserManager");
		}

		return uClassPointer;
	};

	void OnDeleteUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void DeleteUser(const class FString& McpId);
	bool GetUser(const class FString& McpId, struct FMcpUserStatus& outUser);
	void GetUsers(class TArray<struct FMcpUserStatus>& outUsers);
	void OnQueryUsersRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void ParseUsers(const class FString& JsonPayload);
	void QueryUsers(class TArray<class FString>& outMcpIds);
	void OnQueryUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QueryUser(const class FString& McpId, bool optionalBShouldUpdateLastActive);
	void OnAuthenticateUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void AuthenticateUserMcp(const class FString& McpId, const class FString& ClientSecret, const class FString& UDID);
	void AuthenticateUserFacebook(const class FString& FacebookId, const class FString& FacebookToken, const class FString& UDID);
	void OnRegisterUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	int32_t ParseUser(const class FString& JsonPayload);
	void RegisterUserFacebook(const class FString& FacebookId, const class FString& FacebookAuthToken);
	void RegisterUserGenerated();
};

// Class IpDrv.WebConnection
// 0x0044 (0x02D8 - 0x031C)
class AWebConnection : public ATcpLink
{
public:
	class AWebServer*                                  WebServer;                                     // 0x02D8 (0x0008) [0x0000000000000000]               
	class FString                                      ReceivedData;                                  // 0x02E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UWebRequest*                                 Request;                                       // 0x02F0 (0x0008) [0x0000000000000000]               
	class UWebResponse*                                Response;                                      // 0x02F8 (0x0008) [0x0000000000000000]               
	class UWebApplication*                             Application;                                   // 0x0300 (0x0008) [0x0000000000000000]               
	uint32_t                                           bDelayCleanup : 1;                             // 0x0308 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            RawBytesExpecting;                             // 0x030C (0x0004) [0x0000000000000000]               
	int32_t                                            MaxValueLength;                                // 0x0310 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxLineLength;                                 // 0x0314 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            ConnID;                                        // 0x0318 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.WebConnection");
		}

		return uClassPointer;
	};

	bool IsHanging();
	void Cleanup();
	void CheckRawBytes();
	void EndOfHeaders();
	void CreateResponseObject();
	void ProcessPost(const class FString& S);
	void ProcessGet(const class FString& S);
	void ProcessHead(const class FString& S);
	void ReceivedLine(const class FString& S);
	void eventReceivedText(const class FString& Text);
	void eventTimer();
	void eventClosed();
	void eventAccepted();
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
