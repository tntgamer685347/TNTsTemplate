/*
#############################################################################################
# RocketLeague (1.0.10897.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: IpDrv_parameters.hpp
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

// Function IpDrv.AdHocDelegates.EventAdHocDestroyed
// [0x00120001] 
struct UAdHocDelegates_execEventAdHocDestroyed_Params
{
};

// Function IpDrv.AdHocDelegates.EventAdHocFinalized
// [0x00120001] 
struct UAdHocDelegates_execEventAdHocFinalized_Params
{
};

// Function IpDrv.AdHocDelegates.EventStationDisconnected
// [0x00120001] 
struct UAdHocDelegates_execEventStationDisconnected_Params
{
};

// Function IpDrv.AdHocDelegates.EventStationConnected
// [0x00120001] 
struct UAdHocDelegates_execEventStationConnected_Params
{
};

// Function IpDrv.AdHocDelegates.EventBecomeStation
// [0x00120001] 
struct UAdHocDelegates_execEventBecomeStation_Params
{
};

// Function IpDrv.AdHocDelegates.EventAccessPointCreated
// [0x00120001] 
struct UAdHocDelegates_execEventAccessPointCreated_Params
{
};

// Function IpDrv.AdHocDelegates.EventAdHocInitialized
// [0x00120001] 
struct UAdHocDelegates_execEventAdHocInitialized_Params
{
};

// Function IpDrv.AdHocDelegates.EventAdHocError
// [0x00120001] 
struct UAdHocDelegates_execEventAdHocError_Params
{
	class UError*                                      Error;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.AdHocDelegates.EventAdHocOnNetworkChanged
// [0x00120001] 
struct UAdHocDelegates_execEventAdHocOnNetworkChanged_Params
{
	TArray<struct FAdHocAccessPointInfo>               Ahapis;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers
// [0x00420002] 
struct UOnlineSubsystemCommonImpl_execGetRegisteredPlayers_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        OutRegisteredPlayers;                             		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                            Idx;                                              		// 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                            PlayerIdx;                                        		// 0x001C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession
// [0x00020400] 
struct UOnlineSubsystemCommonImpl_execIsPlayerInSession_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex
// [0x00020800] 
struct UOnlineSubsystemCommonImpl_eventGetPlayerNicknameFromIndex_Params
{
	int32_t                                            UserIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineSubsystemCommonImpl.OnPlayerCountryRetrieved
// [0x00120000] 
struct UOnlineSubsystemCommonImpl_execOnPlayerCountryRetrieved_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Country;                                          		// 0x0048 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineSubsystemCommonImpl.OnSanitizeStringComplete
// [0x00120001] 
struct UOnlineSubsystemCommonImpl_execOnSanitizeStringComplete_Params
{
	struct FWordFilterResult                           Result;                                           		// 0x0000 (0x0038) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.AvatarDownloadComponent.TriggerAvatarCallbacks
// [0x00040003] 
struct UAvatarDownloadComponent_execTriggerAvatarCallbacks_Params
{
	class UAvatarDownload*                             Avatar;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.AvatarDownloadComponent.HandleOnlineImageDownloaded
// [0x00040003] 
struct UAvatarDownloadComponent_execHandleOnlineImageDownloaded_Params
{
	struct FOnlineImageDownload                        ImageInfo;                                        		// 0x0000 (0x0040) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// TArray<class UAvatarDownload*>                     AvatarsWaitingOnThisImage;                        		// 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UAvatarDownload*                             Avatar;                                           		// 0x0050 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.AvatarDownloadComponent.GetAvatar
// [0x00840003] 
struct UAvatarDownloadComponent_execGetAvatar_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            Size;                                             		// 0x0048 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UAvatarDownload*                             ReturnValue;                                      		// 0x0050 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// struct FAvatarKey                                  Key;                                              		// 0x0058 (0x0050) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.AvatarDownloadComponent.ClearPendingDownloads
// [0x00020003] 
struct UAvatarDownloadComponent_execClearPendingDownloads_Params
{
};

// Function IpDrv.AvatarDownloadComponent.CleanupAvatars
// [0x00020003] 
struct UAvatarDownloadComponent_execCleanupAvatars_Params
{
	// class UAvatarDownload*                             Avatar;                                           		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.AvatarDownloadComponent.DownloadAvatar
// [0x00020003] 
struct UAvatarDownloadComponent_execDownloadAvatar_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            Size;                                             		// 0x0048 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      URL;                                              		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// TArray<class FString>                              URLs;                                             		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UAvatarDownload*                             Avatar;                                           		// 0x0070 (0x0008) [0x0000000000000000]               
	// class UTexture*                                    DownloadedTexture;                                		// 0x0078 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.AvatarDownloadComponent.StoreNewAvatars
// [0x00420401] 
struct UAvatarDownloadComponent_execStoreNewAvatars_Params
{
	TArray<struct FUniqueNetId>                        NewPlayerIDs;                                     		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint8_t                                            Size;                                             		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadOnlineAvatarCompleteDelegate;                 		// 0x0018 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.AvatarDownloadComponent.ProcessOldRequests
// [0x00420401] 
struct UAvatarDownloadComponent_execProcessOldRequests_Params
{
	TArray<struct FUniqueNetId>                        InPlayerIDs;                                      		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint8_t                                            SizeType;                                         		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadOnlineAvatarCompleteDelegate;                 		// 0x0018 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FUniqueNetId>                        NewRequestIDs;                                    		// 0x0030 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.AvatarDownloadComponent.TryAddAvatarTextureCallback
// [0x00020401] 
struct UAvatarDownloadComponent_execTryAddAvatarTextureCallback_Params
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0048) [0x0000000000400082] (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            Size;                                             		// 0x0048 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadOnlineAvatarCompleteDelegate;                 		// 0x0050 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0068 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.AvatarDownloadMap.ContainsImage
// [0x00020401] 
struct UAvatarDownloadMap_execContainsImage_Params
{
	class FString                                      Key;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.AvatarDownloadMap.ContainsAvatar
// [0x00420401] 
struct UAvatarDownloadMap_execContainsAvatar_Params
{
	struct FAvatarKey                                  Key;                                              		// 0x0000 (0x0050) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.AvatarDownloadMap.OnAvatarReceivedImage
// [0x00020401] 
struct UAvatarDownloadMap_execOnAvatarReceivedImage_Params
{
	class UAvatarDownload*                             Avatar;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.AvatarDownloadMap.RemoveImage
// [0x00020401] 
struct UAvatarDownloadMap_execRemoveImage_Params
{
	class FString                                      Key;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.AvatarDownloadMap.RemoveAvatar
// [0x00420401] 
struct UAvatarDownloadMap_execRemoveAvatar_Params
{
	struct FAvatarKey                                  Key;                                              		// 0x0000 (0x0050) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.AvatarDownloadMap.RemoveAllNetIDs
// [0x00420401] 
struct UAvatarDownloadMap_execRemoveAllNetIDs_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.AvatarDownloadMap.ClearAvatarsPendingImages
// [0x00020401] 
struct UAvatarDownloadMap_execClearAvatarsPendingImages_Params
{
};

// Function IpDrv.AvatarDownloadMap.ClearImages
// [0x00020401] 
struct UAvatarDownloadMap_execClearImages_Params
{
};

// Function IpDrv.AvatarDownloadMap.ClearAvatars
// [0x00020401] 
struct UAvatarDownloadMap_execClearAvatars_Params
{
};

// Function IpDrv.AvatarDownloadMap.Clear
// [0x00020401] 
struct UAvatarDownloadMap_execClear_Params
{
};

// Function IpDrv.AvatarDownloadMap.TryGetImage
// [0x00420401] 
struct UAvatarDownloadMap_execTryGetImage_Params
{
	class FString                                      Key;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UTexture*                                    OutValue;                                         		// 0x0010 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.AvatarDownloadMap.TryGetAvatar
// [0x00420401] 
struct UAvatarDownloadMap_execTryGetAvatar_Params
{
	struct FAvatarKey                                  Key;                                              		// 0x0000 (0x0050) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class UAvatarDownload*                             OutValue;                                         		// 0x0050 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.AvatarDownloadMap.GetAvatarsPendingImage
// [0x00420401] 
struct UAvatarDownloadMap_execGetAvatarsPendingImage_Params
{
	class FString                                      Key;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<class UAvatarDownload*>                     OutAvatars;                                       		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.AvatarDownloadMap.GetImage
// [0x00020401] 
struct UAvatarDownloadMap_execGetImage_Params
{
	class FString                                      Key;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UTexture*                                    ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.AvatarDownloadMap.GetAvatar
// [0x00420401] 
struct UAvatarDownloadMap_execGetAvatar_Params
{
	struct FAvatarKey                                  Key;                                              		// 0x0000 (0x0050) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class UAvatarDownload*                             ReturnValue;                                      		// 0x0050 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.AvatarDownloadMap.AddAvatarPendingImage
// [0x00020401] 
struct UAvatarDownloadMap_execAddAvatarPendingImage_Params
{
	class UAvatarDownload*                             Avatar;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.AvatarDownloadMap.SetImage
// [0x00020401] 
struct UAvatarDownloadMap_execSetImage_Params
{
	class FString                                      URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UTexture*                                    Value;                                            		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.AvatarDownloadMap.SetAvatar
// [0x00020401] 
struct UAvatarDownloadMap_execSetAvatar_Params
{
	class UAvatarDownload*                             Value;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.AvatarDownloadMap.CountAvatars
// [0x00020401] 
struct UAvatarDownloadMap_execCountAvatars_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.AvatarDownloadMap.AllValues
// [0x00424405] 
struct UAvatarDownloadMap_execAllValues_Params
{
	class UAvatarDownload*                             OutAvatar;                                        		// 0x0000 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            StartIndex;                                       		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            MaxValues;                                        		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function IpDrv.HttpRequestCurl.ProcessRequest
// [0x400020400] 
struct UHttpRequestCurl_execProcessRequest_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.HttpRequestCurl.SetHeader
// [0x400020400] 
struct UHttpRequestCurl_execSetHeader_Params
{
	class FString                                      HeaderName;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      HeaderValue;                                      		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UHttpRequestInterface*                       ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.HttpRequestCurl.SetContentAsString
// [0x400020400] 
struct UHttpRequestCurl_execSetContentAsString_Params
{
	class FString                                      ContentString;                                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UHttpRequestInterface*                       ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.HttpRequestCurl.SetContent
// [0x400420400] 
struct UHttpRequestCurl_execSetContent_Params
{
	TArray<uint8_t>                                    ContentPayload;                                   		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class UHttpRequestInterface*                       ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.HttpRequestCurl.SetURL
// [0x400020400] 
struct UHttpRequestCurl_execSetURL_Params
{
	class FString                                      URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UHttpRequestInterface*                       ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.HttpRequestCurl.SetVerb
// [0x400020400] 
struct UHttpRequestCurl_execSetVerb_Params
{
	class FString                                      Verb;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UHttpRequestInterface*                       ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.HttpRequestCurl.GetVerb
// [0x400020400] 
struct UHttpRequestCurl_execGetVerb_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.HttpRequestCurl.GetContent
// [0x400420400] 
struct UHttpRequestCurl_execGetContent_Params
{
	TArray<uint8_t>                                    Content;                                          		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.HttpRequestCurl.GetURL
// [0x400020400] 
struct UHttpRequestCurl_execGetURL_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.HttpRequestCurl.GetContentLength
// [0x400020400] 
struct UHttpRequestCurl_execGetContentLength_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.HttpRequestCurl.GetContentType
// [0x400020400] 
struct UHttpRequestCurl_execGetContentType_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.HttpRequestCurl.GetURLParameter
// [0x400020400] 
struct UHttpRequestCurl_execGetURLParameter_Params
{
	class FString                                      ParameterName;                                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.HttpRequestCurl.GetHeaders
// [0x400020400] 
struct UHttpRequestCurl_execGetHeaders_Params
{
	TArray<class FString>                              ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.HttpRequestCurl.GetHeader
// [0x400020400] 
struct UHttpRequestCurl_execGetHeader_Params
{
	class FString                                      HeaderName;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.HttpResponseCurl.GetResponseCode
// [0x400020400] 
struct UHttpResponseCurl_execGetResponseCode_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.HttpResponseCurl.GetContentAsString
// [0x400020400] 
struct UHttpResponseCurl_execGetContentAsString_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.HttpResponseCurl.GetContent
// [0x400420400] 
struct UHttpResponseCurl_execGetContent_Params
{
	TArray<uint8_t>                                    Content;                                          		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.HttpResponseCurl.GetURL
// [0x400020400] 
struct UHttpResponseCurl_execGetURL_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.HttpResponseCurl.GetContentLength
// [0x400020400] 
struct UHttpResponseCurl_execGetContentLength_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.HttpResponseCurl.GetContentType
// [0x400020400] 
struct UHttpResponseCurl_execGetContentType_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.HttpResponseCurl.GetURLParameter
// [0x400020400] 
struct UHttpResponseCurl_execGetURLParameter_Params
{
	class FString                                      ParameterName;                                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.HttpResponseCurl.GetHeaders
// [0x400020400] 
struct UHttpResponseCurl_execGetHeaders_Params
{
	TArray<class FString>                              ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.HttpResponseCurl.GetHeader
// [0x400020400] 
struct UHttpResponseCurl_execGetHeader_Params
{
	class FString                                      HeaderName;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.ImageDecoder.RequestDecodeImage
// [0x00420401] 
struct UImageDecoder_execRequestDecodeImage_Params
{
	class FString                                      RequestURL;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            ImageType;                                        		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FinishedCallback;                                 		// 0x0018 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    ImageData;                                        		// 0x0030 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.ImageDecoder.ImageDecodedDelegate
// [0x00120001] 
struct UImageDecoder_execImageDecodedDelegate_Params
{
	class FString                                      RequestURL;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FImageLayout                                Image;                                            		// 0x0010 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.InternetLink.ResolveFailed
// [0x00020801] 
struct AInternetLink_eventResolveFailed_Params
{
};

// Function IpDrv.InternetLink.Resolved
// [0x00020801] 
struct AInternetLink_eventResolved_Params
{
	struct FIpAddr                                     Addr;                                             		// 0x0000 (0x0014) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.InternetLink.GetLocalIP
// [0x00420401] 
struct AInternetLink_execGetLocalIP_Params
{
	struct FIpAddr                                     Arg;                                              		// 0x0000 (0x0014) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function IpDrv.InternetLink.StringToIpAddr
// [0x00420401] 
struct AInternetLink_execStringToIpAddr_Params
{
	class FString                                      Str;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     Addr;                                             		// 0x0010 (0x0014) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.InternetLink.IpAddrToString
// [0x00020401] 
struct AInternetLink_execIpAddrToString_Params
{
	struct FIpAddr                                     Arg;                                              		// 0x0000 (0x0014) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0018 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.InternetLink.GetLastError
// [0x00020401] 
struct AInternetLink_execGetLastError_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.InternetLink.Resolve
// [0x00020401] 
struct AInternetLink_execResolve_Params
{
	class FString                                      Domain;                                           		// 0x0000 (0x0010) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
};

// Function IpDrv.InternetLink.ParseURL
// [0x00420401] 
struct AInternetLink_execParseURL_Params
{
	class FString                                      URL;                                              		// 0x0000 (0x0010) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	class FString                                      Addr;                                             		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            PortNum;                                          		// 0x0020 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class FString                                      LevelName;                                        		// 0x0028 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      EntryName;                                        		// 0x0038 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.InternetLink.IsDataPending
// [0x00020401] 
struct AInternetLink_execIsDataPending_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.ReceivedBinary
// [0x00020801] 
struct ATcpLink_eventReceivedBinary_Params
{
	int32_t                                            Count;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            B[0xFF];                                          		// 0x0004 (0x00FF) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.TcpLink.ReceivedLine
// [0x00020800] 
struct ATcpLink_eventReceivedLine_Params
{
	class FString                                      Line;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.TcpLink.ReceivedText
// [0x00020800] 
struct ATcpLink_eventReceivedText_Params
{
	class FString                                      Text;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.TcpLink.Closed
// [0x00020800] 
struct ATcpLink_eventClosed_Params
{
};

// Function IpDrv.TcpLink.Opened
// [0x00020801] 
struct ATcpLink_eventOpened_Params
{
};

// Function IpDrv.TcpLink.Accepted
// [0x00020800] 
struct ATcpLink_eventAccepted_Params
{
};

// Function IpDrv.TcpLink.ReadBinary
// [0x00420401] 
struct ATcpLink_execReadBinary_Params
{
	int32_t                                            Count;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            B[0xFF];                                          		// 0x0004 (0x00FF) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            ReturnValue;                                      		// 0x0104 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.ReadText
// [0x00420401] 
struct ATcpLink_execReadText_Params
{
	class FString                                      Str;                                              		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.SendBinary
// [0x00020401] 
struct ATcpLink_execSendBinary_Params
{
	int32_t                                            Count;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            B[0xFF];                                          		// 0x0004 (0x00FF) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0104 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.SendText
// [0x00020401] 
struct ATcpLink_execSendText_Params
{
	class FString                                      Str;                                              		// 0x0000 (0x0010) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.IsConnected
// [0x00020401] 
struct ATcpLink_execIsConnected_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.Close
// [0x00020401] 
struct ATcpLink_execClose_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.Open
// [0x00020401] 
struct ATcpLink_execOpen_Params
{
	struct FIpAddr                                     Addr;                                             		// 0x0000 (0x0014) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.Listen
// [0x00020401] 
struct ATcpLink_execListen_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.BindPort
// [0x00024401] 
struct ATcpLink_execBindPort_Params
{
	int32_t                                            PortNum;                                          		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bUseNextAvailable : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.McpServiceBase.GetUserAuthURL
// [0x00020003] 
struct UMcpServiceBase_execGetUserAuthURL_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// class FString                                      AuthTicket;                                       		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpServiceBase.GetAppAccessURL
// [0x00020003] 
struct UMcpServiceBase_execGetAppAccessURL_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpServiceBase.GetBaseURL
// [0x00020003] 
struct UMcpServiceBase_execGetBaseURL_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpServiceBase.Init
// [0x00020802] 
struct UMcpServiceBase_eventInit_Params
{
	// class UClass*                                      McpConfigClass;                                   		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadMatchmakingStats
// [0x00020401] 
struct UOnlineEventsInterfaceMcp_execUploadMatchmakingStats_Params
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UOnlineMatchmakingStats*                     MMStats;                                          		// 0x0048 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineEventsInterfaceMcp.UpdatePlaylistPopulation
// [0x00020401] 
struct UOnlineEventsInterfaceMcp_execUpdatePlaylistPopulation_Params
{
	int32_t                                            PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            NumPlayers;                                       		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadGameplayEventsData
// [0x00420401] 
struct UOnlineEventsInterfaceMcp_execUploadGameplayEventsData_Params
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    Payload;                                          		// 0x0048 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadPlayerData
// [0x00020401] 
struct UOnlineEventsInterfaceMcp_execUploadPlayerData_Params
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      PlayerNick;                                       		// 0x0048 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0058 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0060 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0068 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineNewsInterfaceMcp.GetNews
// [0x00020003] 
struct UOnlineNewsInterfaceMcp_execGetNews_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            NewsType;                                         		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// int32_t                                            NewsIndex;                                        		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineNewsInterfaceMcp.ClearReadNewsCompletedDelegate
// [0x00020003] 
struct UOnlineNewsInterfaceMcp_execClearReadNewsCompletedDelegate_Params
{
	struct FScriptDelegate                             ReadGameNewsDelegate;                             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineNewsInterfaceMcp.AddReadNewsCompletedDelegate
// [0x00020003] 
struct UOnlineNewsInterfaceMcp_execAddReadNewsCompletedDelegate_Params
{
	struct FScriptDelegate                             ReadNewsDelegate;                                 		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineNewsInterfaceMcp.OnReadNewsCompleted
// [0x00120001] 
struct UOnlineNewsInterfaceMcp_execOnReadNewsCompleted_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint8_t                                            NewsType;                                         		// 0x0004 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineNewsInterfaceMcp.ReadNews
// [0x00020401] 
struct UOnlineNewsInterfaceMcp_execReadNews_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            NewsType;                                         		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadBase.GetUrlForFile
// [0x00020400] 
struct UOnlineTitleFileDownloadBase_execGetUrlForFile_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearRequestTitleFileListCompleteDelegate
// [0x00020003] 
struct UOnlineTitleFileDownloadBase_execClearRequestTitleFileListCompleteDelegate_Params
{
	struct FScriptDelegate                             RequestTitleFileListDelegate;                     		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineTitleFileDownloadBase.AddRequestTitleFileListCompleteDelegate
// [0x00020003] 
struct UOnlineTitleFileDownloadBase_execAddRequestTitleFileListCompleteDelegate_Params
{
	struct FScriptDelegate                             RequestTitleFileListDelegate;                     		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadBase.OnRequestTitleFileListComplete
// [0x00120001] 
struct UOnlineTitleFileDownloadBase_execOnRequestTitleFileListComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	TArray<class FString>                              ResultStr;                                        		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadBase.RequestTitleFileList
// [0x00020000] 
struct UOnlineTitleFileDownloadBase_execRequestTitleFileList_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFile
// [0x00020000] 
struct UOnlineTitleFileDownloadBase_execClearDownloadedFile_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFiles
// [0x00020000] 
struct UOnlineTitleFileDownloadBase_execClearDownloadedFiles_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileState
// [0x00020000] 
struct UOnlineTitleFileDownloadBase_execGetTitleFileState_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	EOnlineEnumerationReadState                        ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileContents
// [0x00420000] 
struct UOnlineTitleFileDownloadBase_execGetTitleFileContents_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    FileContents;                                     		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearReadTitleFileCompleteDelegate
// [0x00020003] 
struct UOnlineTitleFileDownloadBase_execClearReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineTitleFileDownloadBase.AddReadTitleFileCompleteDelegate
// [0x00020003] 
struct UOnlineTitleFileDownloadBase_execAddReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadBase.ReadTitleFile
// [0x00024000] 
struct UOnlineTitleFileDownloadBase_execReadTitleFile_Params
{
	class FString                                      FileToRead;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            FileType;                                         		// 0x0010 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadBase.OnReadTitleFileComplete
// [0x00120001] 
struct UOnlineTitleFileDownloadBase_execOnReadTitleFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFile
// [0x400020400] 
struct UOnlineTitleFileDownloadMcp_execClearDownloadedFile_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFiles
// [0x400020400] 
struct UOnlineTitleFileDownloadMcp_execClearDownloadedFiles_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileState
// [0x400020002] 
struct UOnlineTitleFileDownloadMcp_execGetTitleFileState_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	EOnlineEnumerationReadState                        ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            FileIndex;                                        		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileContents
// [0x400420400] 
struct UOnlineTitleFileDownloadMcp_execGetTitleFileContents_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    FileContents;                                     		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ReadTitleFile
// [0x400024400] 
struct UOnlineTitleFileDownloadMcp_execReadTitleFile_Params
{
	class FString                                      FileToRead;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            FileType;                                         		// 0x0010 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.GetUrlForFile
// [0x400020002] 
struct UOnlineTitleFileDownloadWeb_execGetUrlForFile_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// class FString                                      URL;                                              		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.OnFileListReceived
// [0x00020003] 
struct UOnlineTitleFileDownloadWeb_execOnFileListReceived_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bDidSucceed : 1;                                  		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// struct FScriptDelegate                             RequestTitleFileListDelegate;                     		// 0x0018 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<class FString>                              ResponseArr;                                      		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                           bSuccess : 1;                                     		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineTitleFileDownloadWeb.RequestTitleFileList
// [0x400020002] 
struct UOnlineTitleFileDownloadWeb_execRequestTitleFileList_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UHttpRequestInterface*                       HTTPRequest;                                      		// 0x0008 (0x0008) [0x0000000000000000]               
	// class FString                                      URL;                                              		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                           Success : 1;                                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFile
// [0x400020400] 
struct UOnlineTitleFileDownloadWeb_execClearDownloadedFile_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFiles
// [0x400020400] 
struct UOnlineTitleFileDownloadWeb_execClearDownloadedFiles_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileState
// [0x400020002] 
struct UOnlineTitleFileDownloadWeb_execGetTitleFileState_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	EOnlineEnumerationReadState                        ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            FileIndex;                                        		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileContents
// [0x400420400] 
struct UOnlineTitleFileDownloadWeb_execGetTitleFileContents_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    FileContents;                                     		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.TriggerDelegates
// [0x00040401] 
struct UOnlineTitleFileDownloadWeb_execTriggerDelegates_Params
{
	uint32_t                                           bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      FileRead;                                         		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.OnFileDownloadComplete
// [0x00040003] 
struct UOnlineTitleFileDownloadWeb_execOnFileDownloadComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bDidSucceed : 1;                                  		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// uint32_t                                           bSuccess : 1;                                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                            FileIndex;                                        		// 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                            Idx;                                              		// 0x001C (0x0004) [0x0000000000000000]               
	// class FString                                      Filename;                                         		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<uint8_t>                                    BinaryData;                                       		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      FileCompressionTypeString;                        		// 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.ReadTitleFile
// [0x400024002] 
struct UOnlineTitleFileDownloadWeb_execReadTitleFile_Params
{
	class FString                                      FileToRead;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            FileType;                                         		// 0x0010 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            FileIndex;                                        		// 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                            Idx;                                              		// 0x001C (0x0004) [0x0000000000000000]               
	// class FString                                      URL;                                              		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.UncompressTitleFileContents
// [0x00420401] 
struct UOnlineTitleFileDownloadWeb_execUncompressTitleFileContents_Params
{
	uint8_t                                            FileCompressionType;                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<uint8_t>                                    CompressedFileContents;                           		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    UncompressedFileContents;                         		// 0x0018 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.DeleteTitleFile
// [0x00020401] 
struct UTitleFileDownloadCache_execDeleteTitleFile_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.DeleteTitleFiles
// [0x00020401] 
struct UTitleFileDownloadCache_execDeleteTitleFiles_Params
{
	float                                              MaxAgeSeconds;                                    		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.ClearCachedFile
// [0x00020401] 
struct UTitleFileDownloadCache_execClearCachedFile_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.ClearCachedFiles
// [0x00020401] 
struct UTitleFileDownloadCache_execClearCachedFiles_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileLogicalName
// [0x00020401] 
struct UTitleFileDownloadCache_execGetTitleFileLogicalName_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileHash
// [0x00020401] 
struct UTitleFileDownloadCache_execGetTitleFileHash_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileState
// [0x00020401] 
struct UTitleFileDownloadCache_execGetTitleFileState_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	EOnlineEnumerationReadState                        ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileContents
// [0x00420401] 
struct UTitleFileDownloadCache_execGetTitleFileContents_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    FileContents;                                     		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.ClearSaveTitleFileCompleteDelegate
// [0x00020003] 
struct UTitleFileDownloadCache_execClearSaveTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             SaveCompleteDelegate;                             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.TitleFileDownloadCache.AddSaveTitleFileCompleteDelegate
// [0x00020003] 
struct UTitleFileDownloadCache_execAddSaveTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             SaveCompleteDelegate;                             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.OnSaveTitleFileComplete
// [0x00120001] 
struct UTitleFileDownloadCache_execOnSaveTitleFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.SaveTitleFile
// [0x00020401] 
struct UTitleFileDownloadCache_execSaveTitleFile_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      LogicalName;                                      		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    FileContents;                                     		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.ClearLoadTitleFileCompleteDelegate
// [0x00020003] 
struct UTitleFileDownloadCache_execClearLoadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             LoadCompleteDelegate;                             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.TitleFileDownloadCache.AddLoadTitleFileCompleteDelegate
// [0x00020003] 
struct UTitleFileDownloadCache_execAddLoadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             LoadCompleteDelegate;                             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.OnLoadTitleFileComplete
// [0x00120001] 
struct UTitleFileDownloadCache_execOnLoadTitleFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.LoadTitleFile
// [0x00020401] 
struct UTitleFileDownloadCache_execLoadTitleFile_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.McpMessageBase.CacheMessageContents
// [0x00420000] 
struct UMcpMessageBase_execCacheMessageContents_Params
{
	TArray<uint8_t>                                    MessageContents;                                  		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      MessageId;                                        		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.McpMessageBase.CacheMessage
// [0x00020000] 
struct UMcpMessageBase_execCacheMessage_Params
{
	struct FMcpMessage                                 Message;                                          		// 0x0000 (0x0068) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.GetMessageContents
// [0x00420000] 
struct UMcpMessageBase_execGetMessageContents_Params
{
	class FString                                      MessageId;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    MessageContents;                                  		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.McpMessageBase.OnQueryMessageContentsComplete
// [0x00120001] 
struct UMcpMessageBase_execOnQueryMessageContentsComplete_Params
{
	class FString                                      MessageId;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.QueryMessageContents
// [0x00020000] 
struct UMcpMessageBase_execQueryMessageContents_Params
{
	class FString                                      MessageId;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.GetMessageList
// [0x00420000] 
struct UMcpMessageBase_execGetMessageList_Params
{
	class FString                                      ToUniqueUserId;                                   		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpMessageList                             MessageList;                                      		// 0x0010 (0x0020) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.OnQueryMessagesComplete
// [0x00120001] 
struct UMcpMessageBase_execOnQueryMessagesComplete_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.QueryMessages
// [0x00020000] 
struct UMcpMessageBase_execQueryMessages_Params
{
	class FString                                      ToUniqueUserId;                                   		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.OnDeleteMessageComplete
// [0x00120001] 
struct UMcpMessageBase_execOnDeleteMessageComplete_Params
{
	class FString                                      MessageId;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.DeleteMessage
// [0x00020000] 
struct UMcpMessageBase_execDeleteMessage_Params
{
	class FString                                      MessageId;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.OnCreateMessageComplete
// [0x00120001] 
struct UMcpMessageBase_execOnCreateMessageComplete_Params
{
	struct FMcpMessage                                 Message;                                          		// 0x0000 (0x0068) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0068 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0070 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.CreateMessage
// [0x00420000] 
struct UMcpMessageBase_execCreateMessage_Params
{
	TArray<class FString>                              ToUniqueUserIds;                                  		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      FromUniqueUserId;                                 		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      FromFriendlyName;                                 		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      MessageType;                                      		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      PushMessage;                                      		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ValidUntil;                                       		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    MessageContents;                                  		// 0x0060 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.CreateInstance
// [0x00022003] 
struct UMcpMessageBase_execCreateInstance_Params
{
	class UMcpMessageBase*                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UClass*                                      McpMessageBaseClass;                              		// 0x0008 (0x0008) [0x0000000000000000]               
	// class UMcpMessageBase*                             NewInstance;                                      		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpMessageManager.CacheMessageContents
// [0x400420002] 
struct UMcpMessageManager_execCacheMessageContents_Params
{
	TArray<uint8_t>                                    MessageContents;                                  		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      MessageId;                                        		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            MessageContentsIndex;                             		// 0x0024 (0x0004) [0x0000000000000000]               
	// uint32_t                                           bWasSuccessful : 1;                               		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpMessageManager.GetMessageById
// [0x00420003] 
struct UMcpMessageManager_execGetMessageById_Params
{
	class FString                                      MessageId;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpMessage                                 Message;                                          		// 0x0010 (0x0068) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0078 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            MessageListsSize;                                 		// 0x007C (0x0004) [0x0000000000000000]               
	// int32_t                                            MessageListsItr;                                  		// 0x0080 (0x0004) [0x0000000000000000]               
	// int32_t                                            MessageItr;                                       		// 0x0084 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpMessageManager.CacheMessage
// [0x400820002] 
struct UMcpMessageManager_execCacheMessage_Params
{
	struct FMcpMessage                                 Message;                                          		// 0x0000 (0x0068) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            AddAt;                                            		// 0x0068 (0x0004) [0x0000000000000000]               
	// int32_t                                            MessageIndex;                                     		// 0x006C (0x0004) [0x0000000000000000]               
	// int32_t                                            MessageListIndex;                                 		// 0x0070 (0x0004) [0x0000000000000000]               
	// struct FMcpMessageList                             UserMessageList;                                  		// 0x0078 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                           bWasFound : 1;                                    		// 0x0098 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpMessageManager.GetMessageContents
// [0x400420002] 
struct UMcpMessageManager_execGetMessageContents_Params
{
	class FString                                      MessageId;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    MessageContents;                                  		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasSuccessful : 1;                               		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                            MessageContentsIndex;                             		// 0x0028 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpMessageManager.OnQueryMessageContentsRequestComplete
// [0x00840003] 
struct UMcpMessageManager_execOnQueryMessageContentsRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]               
	// TArray<uint8_t>                                    MessageContents;                                  		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      MessageId;                                        		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FMcpMessage                                 Message;                                          		// 0x0038 (0x0068) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageManager.QueryMessageContents
// [0x400020002] 
struct UMcpMessageManager_execQueryMessageContents_Params
{
	class FString                                      MessageId;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                      URL;                                              		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       QueryMessageContentsRequest;                      		// 0x0020 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpMessageManager.GetMessageList
// [0x400420002] 
struct UMcpMessageManager_execGetMessageList_Params
{
	class FString                                      ToUniqueUserId;                                   		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpMessageList                             MessageList;                                      		// 0x0010 (0x0020) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                            MessageListIndex;                                 		// 0x0030 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpMessageManager.OnQueryMessagesRequestComplete
// [0x00840003] 
struct UMcpMessageManager_execOnQueryMessagesRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]               
	// class FString                                      Error;                                            		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      JsonString;                                       		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UJsonObject*                                 ParsedJson;                                       		// 0x0038 (0x0008) [0x0000000000000000]               
	// int32_t                                            JsonIndex;                                        		// 0x0040 (0x0004) [0x0000000000000000]               
	// struct FMcpMessage                                 Message;                                          		// 0x0048 (0x0068) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      MessageCompressionTypeString;                     		// 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageManager.QueryMessages
// [0x400020002] 
struct UMcpMessageManager_execQueryMessages_Params
{
	class FString                                      ToUniqueUserId;                                   		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                      URL;                                              		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       QueryMessagesRequest;                             		// 0x0020 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpMessageManager.OnDeleteMessageRequestComplete
// [0x00020003] 
struct UMcpMessageManager_execOnDeleteMessageRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]               
	// class FString                                      Content;                                          		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      MessageId;                                        		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageManager.DeleteMessage
// [0x400020002] 
struct UMcpMessageManager_execDeleteMessage_Params
{
	class FString                                      MessageId;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                      URL;                                              		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       DeleteMessageRequest;                             		// 0x0020 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpMessageManager.OnCreateMessageRequestComplete
// [0x00820003] 
struct UMcpMessageManager_execOnCreateMessageRequestComplete_Params
{
	class UHttpRequestInterface*                       CreateMessageRequest;                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]               
	// class FString                                      Content;                                          		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FMcpMessage                                 CreatedMessage;                                   		// 0x0028 (0x0068) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageManager.CreateMessage
// [0x400C20002] 
struct UMcpMessageManager_execCreateMessage_Params
{
	TArray<class FString>                              ToUniqueUserIds;                                  		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      FromUniqueUserId;                                 		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      FromFriendlyName;                                 		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      MessageType;                                      		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      PushMessage;                                      		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ValidUntil;                                       		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    MessageContents;                                  		// 0x0060 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// class FString                                      URL;                                              		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       CreateMessageRequest;                             		// 0x0080 (0x0008) [0x0000000000000000]               
	// struct FMcpMessage                                 Message;                                          		// 0x0088 (0x0068) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      ToUniqueUserIdsStr;                               		// 0x00F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            Idx;                                              		// 0x0100 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpMessageManager.FinishedAsyncUncompression
// [0x00420803] 
struct UMcpMessageManager_eventFinishedAsyncUncompression_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	TArray<uint8_t>                                    UncompressedMessageContents;                      		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      MessageId;                                        		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageManager.StartAsyncUncompression
// [0x00420401] 
struct UMcpMessageManager_execStartAsyncUncompression_Params
{
	class FString                                      MessageId;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            MessageCompressionType;                           		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<uint8_t>                                    MessageContent;                                   		// 0x0018 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.McpMessageManager.StartAsyncCompression
// [0x00420401] 
struct UMcpMessageManager_execStartAsyncCompression_Params
{
	uint8_t                                            MessageCompressionType;                           		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<uint8_t>                                    MessageContent;                                   		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class UHttpRequestInterface*                       Request;                                          		// 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.McpUserCloudFileDownload.ClearAllDelegates
// [0x00020003] 
struct UMcpUserCloudFileDownload_execClearAllDelegates_Params
{
};

// Function IpDrv.McpUserCloudFileDownload.ClearDeleteUserFileCompleteDelegate
// [0x00020003] 
struct UMcpUserCloudFileDownload_execClearDeleteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             DeleteUserFileCompleteDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserCloudFileDownload.AddDeleteUserFileCompleteDelegate
// [0x00020003] 
struct UMcpUserCloudFileDownload_execAddDeleteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             DeleteUserFileCompleteDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.CallDeleteUserFileCompleteDelegates
// [0x00040003] 
struct UMcpUserCloudFileDownload_execCallDeleteUserFileCompleteDelegates_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            Index;                                            		// 0x0028 (0x0004) [0x0000000000000000]               
	// struct FScriptDelegate                             CallDelegate;                                     		// 0x0030 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnDeleteUserFileComplete
// [0x00120001] 
struct UMcpUserCloudFileDownload_execOnDeleteUserFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestDeleteUserFileComplete
// [0x00040003] 
struct UMcpUserCloudFileDownload_execOnHTTPRequestDeleteUserFileComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            EntryIdx;                                         		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            FileIdx;                                          		// 0x0018 (0x0004) [0x0000000000000000]               
	// class FString                                      Filename;                                         		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      UserId;                                           		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                           bResult : 1;                                      		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserCloudFileDownload.DeleteUserFile
// [0x00020003] 
struct UMcpUserCloudFileDownload_execDeleteUserFile_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bShouldCloudDelete : 1;                           		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bShouldLocallyDelete : 1;                         		// 0x0024 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            EntryIdx;                                         		// 0x002C (0x0004) [0x0000000000000000]               
	// int32_t                                            FileIdx;                                          		// 0x0030 (0x0004) [0x0000000000000000]               
	// class FString                                      URL;                                              		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                           bPending : 1;                                     		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserCloudFileDownload.ClearWriteUserFileCompleteDelegate
// [0x00020003] 
struct UMcpUserCloudFileDownload_execClearWriteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteUserFileCompleteDelegate;                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserCloudFileDownload.AddWriteUserFileCompleteDelegate
// [0x00020003] 
struct UMcpUserCloudFileDownload_execAddWriteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteUserFileCompleteDelegate;                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.CallWriteUserFileCompleteDelegates
// [0x00040003] 
struct UMcpUserCloudFileDownload_execCallWriteUserFileCompleteDelegates_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            Index;                                            		// 0x0028 (0x0004) [0x0000000000000000]               
	// struct FScriptDelegate                             CallDelegate;                                     		// 0x0030 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnWriteUserFileComplete
// [0x00120001] 
struct UMcpUserCloudFileDownload_execOnWriteUserFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestWriteUserFileComplete
// [0x00040003] 
struct UMcpUserCloudFileDownload_execOnHTTPRequestWriteUserFileComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            EntryIdx;                                         		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            FileIdx;                                          		// 0x0018 (0x0004) [0x0000000000000000]               
	// class FString                                      Filename;                                         		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      UserId;                                           		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                           bResult : 1;                                      		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserCloudFileDownload.GetUserFileIndexForRequest
// [0x00440003] 
struct UMcpUserCloudFileDownload_execGetUserFileIndexForRequest_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            UserIdx;                                          		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            FileIdx;                                          		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function IpDrv.McpUserCloudFileDownload.WriteUserFile
// [0x00420003] 
struct UMcpUserCloudFileDownload_execWriteUserFile_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    FileContents;                                     		// 0x0020 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            EntryIdx;                                         		// 0x0034 (0x0004) [0x0000000000000000]               
	// int32_t                                            FileIdx;                                          		// 0x0038 (0x0004) [0x0000000000000000]               
	// class FString                                      URL;                                              		// 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                           bPending : 1;                                     		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserCloudFileDownload.ClearReadUserFileCompleteDelegate
// [0x00020003] 
struct UMcpUserCloudFileDownload_execClearReadUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadUserFileCompleteDelegate;                     		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserCloudFileDownload.AddReadUserFileCompleteDelegate
// [0x00020003] 
struct UMcpUserCloudFileDownload_execAddReadUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadUserFileCompleteDelegate;                     		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.CallReadUserFileCompleteDelegates
// [0x00040003] 
struct UMcpUserCloudFileDownload_execCallReadUserFileCompleteDelegates_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            Index;                                            		// 0x0028 (0x0004) [0x0000000000000000]               
	// struct FScriptDelegate                             CallDelegate;                                     		// 0x0030 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnReadUserFileComplete
// [0x00120001] 
struct UMcpUserCloudFileDownload_execOnReadUserFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestReadUserFileComplete
// [0x00040003] 
struct UMcpUserCloudFileDownload_execOnHTTPRequestReadUserFileComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            EntryIdx;                                         		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            FileIdx;                                          		// 0x0018 (0x0004) [0x0000000000000000]               
	// class FString                                      Filename;                                         		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      UserId;                                           		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                           bResult : 1;                                      		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	// TArray<uint8_t>                                    FileContents;                                     		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.ReadUserFile
// [0x00020003] 
struct UMcpUserCloudFileDownload_execReadUserFile_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            EntryIdx;                                         		// 0x0024 (0x0004) [0x0000000000000000]               
	// int32_t                                            FileIdx;                                          		// 0x0028 (0x0004) [0x0000000000000000]               
	// class FString                                      URL;                                              		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                           bPending : 1;                                     		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserCloudFileDownload.GetUserFileList
// [0x00420003] 
struct UMcpUserCloudFileDownload_execGetUserFileList_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FEmsFile>                            UserFiles;                                        		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                            EntryIdx;                                         		// 0x0020 (0x0004) [0x0000000000000000]               
	// int32_t                                            FileIdx;                                          		// 0x0024 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserCloudFileDownload.ClearEnumerateUserFileCompleteDelegate
// [0x00020003] 
struct UMcpUserCloudFileDownload_execClearEnumerateUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             EnumerateUserFileCompleteDelegate;                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserCloudFileDownload.AddEnumerateUserFileCompleteDelegate
// [0x00020003] 
struct UMcpUserCloudFileDownload_execAddEnumerateUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             EnumerateUserFileCompleteDelegate;                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.CallEnumerateUserFileCompleteDelegates
// [0x00040003] 
struct UMcpUserCloudFileDownload_execCallEnumerateUserFileCompleteDelegates_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            Index;                                            		// 0x0018 (0x0004) [0x0000000000000000]               
	// struct FScriptDelegate                             CallDelegate;                                     		// 0x0020 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnEnumerateUserFilesComplete
// [0x00120001] 
struct UMcpUserCloudFileDownload_execOnEnumerateUserFilesComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestEnumerateUserFilesComplete
// [0x00040003] 
struct UMcpUserCloudFileDownload_execOnHTTPRequestEnumerateUserFilesComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            EntryIdx;                                         		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            JsonIdx;                                          		// 0x0018 (0x0004) [0x0000000000000000]               
	// class FString                                      JsonString;                                       		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      UserId;                                           		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UJsonObject*                                 ParsedJson;                                       		// 0x0040 (0x0008) [0x0000000000000000]               
	// uint32_t                                           bResult : 1;                                      		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserCloudFileDownload.EnumerateUserFiles
// [0x00020003] 
struct UMcpUserCloudFileDownload_execEnumerateUserFiles_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            EntryIdx;                                         		// 0x0010 (0x0004) [0x0000000000000000]               
	// class FString                                      URL;                                              		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                           bPending : 1;                                     		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserCloudFileDownload.ClearFile
// [0x00020003] 
struct UMcpUserCloudFileDownload_execClearFile_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bResult : 1;                                      		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                            EntryIdx;                                         		// 0x0028 (0x0004) [0x0000000000000000]               
	// int32_t                                            FileIdx;                                          		// 0x002C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserCloudFileDownload.ClearFiles
// [0x00020003] 
struct UMcpUserCloudFileDownload_execClearFiles_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bResult : 1;                                      		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                            EntryIdx;                                         		// 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                            FileIdx;                                          		// 0x001C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserCloudFileDownload.GetFileContents
// [0x00420003] 
struct UMcpUserCloudFileDownload_execGetFileContents_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    FileContents;                                     		// 0x0020 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bResult : 1;                                      		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                            EntryIdx;                                         		// 0x0038 (0x0004) [0x0000000000000000]               
	// int32_t                                            FileIdx;                                          		// 0x003C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.MeshBeacon.DestroyBeacon
// [0x00020C00] 
struct UMeshBeacon_eventDestroyBeacon_Params
{
};

// Function IpDrv.MeshBeaconClient.SendHostNewGameSessionResponse
// [0x00420401] 
struct UMeshBeaconClient_execSendHostNewGameSessionResponse_Params
{
	uint32_t                                           bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      SearchClass;                                      		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            PlatformSpecificInfo[0x50];                       		// 0x0018 (0x0050) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0068 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconClient.OnCreateNewSessionRequestReceived
// [0x00520001] 
struct UMeshBeaconClient_execOnCreateNewSessionRequestReceived_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      SearchClass;                                      		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FPlayerMember>                       Players;                                          		// 0x0010 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.MeshBeaconClient.OnTravelRequestReceived
// [0x00520001] 
struct UMeshBeaconClient_execOnTravelRequestReceived_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      SearchClass;                                      		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            PlatformSpecificInfo[0x50];                       		// 0x0010 (0x0050) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestResults
// [0x00520001] 
struct UMeshBeaconClient_execOnReceivedBandwidthTestResults_Params
{
	uint8_t                                            TestType;                                         		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            TestResult;                                       		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FConnectionBandwidthStats                   BandwidthStats;                                   		// 0x0004 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestRequest
// [0x00120001] 
struct UMeshBeaconClient_execOnReceivedBandwidthTestRequest_Params
{
	uint8_t                                            TestType;                                         		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.MeshBeaconClient.OnConnectionRequestResult
// [0x00120001] 
struct UMeshBeaconClient_execOnConnectionRequestResult_Params
{
	uint8_t                                            ConnectionResult;                                 		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.MeshBeaconClient.BeginBandwidthTest
// [0x00020401] 
struct UMeshBeaconClient_execBeginBandwidthTest_Params
{
	uint8_t                                            TestType;                                         		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            TestBufferSize;                                   		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconClient.RequestConnection
// [0x00420401] 
struct UMeshBeaconClient_execRequestConnection_Params
{
	struct FOnlineGameSearchResult                     DesiredHost;                                      		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FClientConnectionRequest                    ClientRequest;                                    		// 0x0010 (0x0070) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           bRegisterSecureAddress : 1;                       		// 0x0080 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0084 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconClient.DestroyBeacon
// [0x400020C00] 
struct UMeshBeaconClient_eventDestroyBeacon_Params
{
};

// Function IpDrv.MeshBeaconHost.OnReceivedClientCreateNewSessionResult
// [0x00520001] 
struct UMeshBeaconHost_execOnReceivedClientCreateNewSessionResult_Params
{
	uint32_t                                           bSucceeded : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      SearchClass;                                      		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            PlatformSpecificInfo[0x50];                       		// 0x0018 (0x0050) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function IpDrv.MeshBeaconHost.RequestClientCreateNewSession
// [0x00420401] 
struct UMeshBeaconHost_execRequestClientCreateNewSession_Params
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FName                                       SessionName;                                      		// 0x0048 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      SearchClass;                                      		// 0x0050 (0x0008) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FPlayerMember>                       Players;                                          		// 0x0058 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0068 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconHost.TellClientsToTravel
// [0x00420401] 
struct UMeshBeaconHost_execTellClientsToTravel_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      SearchClass;                                      		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            PlatformSpecificInfo[0x50];                       		// 0x0010 (0x0050) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function IpDrv.MeshBeaconHost.OnAllPendingPlayersConnected
// [0x00120001] 
struct UMeshBeaconHost_execOnAllPendingPlayersConnected_Params
{
};

// Function IpDrv.MeshBeaconHost.AllPlayersConnected
// [0x00420401] 
struct UMeshBeaconHost_execAllPlayersConnected_Params
{
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconHost.GetConnectionIndexForPlayer
// [0x00020401] 
struct UMeshBeaconHost_execGetConnectionIndexForPlayer_Params
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0048 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconHost.SetPendingPlayerConnections
// [0x00420003] 
struct UMeshBeaconHost_execSetPendingPlayerConnections_Params
{
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.MeshBeaconHost.OnFinishedBandwidthTest
// [0x00520001] 
struct UMeshBeaconHost_execOnFinishedBandwidthTest_Params
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            TestType;                                         		// 0x0048 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            TestResult;                                       		// 0x0049 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FConnectionBandwidthStats                   BandwidthStats;                                   		// 0x004C (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function IpDrv.MeshBeaconHost.OnStartedBandwidthTest
// [0x00120001] 
struct UMeshBeaconHost_execOnStartedBandwidthTest_Params
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            TestType;                                         		// 0x0048 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.MeshBeaconHost.OnReceivedClientConnectionRequest
// [0x00520001] 
struct UMeshBeaconHost_execOnReceivedClientConnectionRequest_Params
{
	struct FClientMeshBeaconConnection                 NewClientConnection;                              		// 0x0000 (0x00B8) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.MeshBeaconHost.AllowBandwidthTesting
// [0x00020003] 
struct UMeshBeaconHost_execAllowBandwidthTesting_Params
{
	uint32_t                                           bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.MeshBeaconHost.CancelPendingBandwidthTests
// [0x00020401] 
struct UMeshBeaconHost_execCancelPendingBandwidthTests_Params
{
};

// Function IpDrv.MeshBeaconHost.HasPendingBandwidthTest
// [0x00020401] 
struct UMeshBeaconHost_execHasPendingBandwidthTest_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconHost.CancelInProgressBandwidthTests
// [0x00020401] 
struct UMeshBeaconHost_execCancelInProgressBandwidthTests_Params
{
};

// Function IpDrv.MeshBeaconHost.HasInProgressBandwidthTest
// [0x00020401] 
struct UMeshBeaconHost_execHasInProgressBandwidthTest_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconHost.RequestClientBandwidthTest
// [0x00020401] 
struct UMeshBeaconHost_execRequestClientBandwidthTest_Params
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            TestType;                                         		// 0x0048 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            TestBufferSize;                                   		// 0x004C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconHost.DestroyBeacon
// [0x400020C00] 
struct UMeshBeaconHost_eventDestroyBeacon_Params
{
};

// Function IpDrv.MeshBeaconHost.InitHostBeacon
// [0x00020401] 
struct UMeshBeaconHost_execInitHostBeacon_Params
{
	struct FUniqueNetId                                InOwningPlayerId;                                 		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.RequestAccountAuthorization
// [0x00020000] 
struct UOnlineAuthInterfaceImpl_execRequestAccountAuthorization_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                         		// 0x0048 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UAsyncTask*                                  ReturnValue;                                      		// 0x0060 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnAccountAuthorization
// [0x00120001] 
struct UOnlineAuthInterfaceImpl_execOnAccountAuthorization_Params
{
	class FString                                      Token;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnLoginChanged
// [0x00020000] 
struct UOnlineAuthInterfaceImpl_execOnLoginChanged_Params
{
	uint32_t                                           bLoggedIn : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.RequestMtxCode
// [0x00020000] 
struct UOnlineAuthInterfaceImpl_execRequestMtxCode_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                         		// 0x0048 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0060 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.RequestAuthTicket
// [0x00020000] 
struct UOnlineAuthInterfaceImpl_execRequestAuthTicket_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                         		// 0x0048 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0060 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.RequiresAuthTicket
// [0x00020000] 
struct UOnlineAuthInterfaceImpl_execRequiresAuthTicket_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnReceivedAuthCode
// [0x00120001] 
struct UOnlineAuthInterfaceImpl_execOnReceivedAuthCode_Params
{
	uint32_t                                           bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Code;                                             		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.GetServerAddr
// [0x00420000] 
struct UOnlineAuthInterfaceImpl_execGetServerAddr_Params
{
	struct FIpAddr                                     OutServerIP;                                      		// 0x0000 (0x0014) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            OutServerPort;                                    		// 0x0014 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.GetServerUniqueId
// [0x00420000] 
struct UOnlineAuthInterfaceImpl_execGetServerUniqueId_Params
{
	struct FUniqueNetId                                OutServerUID;                                     		// 0x0000 (0x0048) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalServerAuthSession
// [0x00420401] 
struct UOnlineAuthInterfaceImpl_execFindLocalServerAuthSession_Params
{
	class UPlayer*                                     ClientConnection;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FLocalAuthSession                           OutSessionInfo;                                   		// 0x0008 (0x0068) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0070 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindServerAuthSession
// [0x00420401] 
struct UOnlineAuthInterfaceImpl_execFindServerAuthSession_Params
{
	class UPlayer*                                     ServerConnection;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FAuthSession                                OutSessionInfo;                                   		// 0x0008 (0x0068) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0070 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalClientAuthSession
// [0x00420401] 
struct UOnlineAuthInterfaceImpl_execFindLocalClientAuthSession_Params
{
	class UPlayer*                                     ServerConnection;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FLocalAuthSession                           OutSessionInfo;                                   		// 0x0008 (0x0068) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0070 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindClientAuthSession
// [0x00420401] 
struct UOnlineAuthInterfaceImpl_execFindClientAuthSession_Params
{
	class UPlayer*                                     ClientConnection;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FAuthSession                                OutSessionInfo;                                   		// 0x0008 (0x0068) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0070 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllLocalServerAuthSessions
// [0x00420405] 
struct UOnlineAuthInterfaceImpl_execAllLocalServerAuthSessions_Params
{
	struct FLocalAuthSession                           OutSessionInfo;                                   		// 0x0000 (0x0068) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllServerAuthSessions
// [0x00420405] 
struct UOnlineAuthInterfaceImpl_execAllServerAuthSessions_Params
{
	struct FAuthSession                                OutSessionInfo;                                   		// 0x0000 (0x0068) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllLocalClientAuthSessions
// [0x00420405] 
struct UOnlineAuthInterfaceImpl_execAllLocalClientAuthSessions_Params
{
	struct FLocalAuthSession                           OutSessionInfo;                                   		// 0x0000 (0x0068) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllClientAuthSessions
// [0x00420405] 
struct UOnlineAuthInterfaceImpl_execAllClientAuthSessions_Params
{
	struct FAuthSession                                OutSessionInfo;                                   		// 0x0000 (0x0068) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteServerAuthSessions
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execEndAllRemoteServerAuthSessions_Params
{
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalServerAuthSessions
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execEndAllLocalServerAuthSessions_Params
{
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteServerAuthSession
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execEndRemoteServerAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                        		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     ServerIP;                                         		// 0x0048 (0x0014) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndLocalServerAuthSession
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execEndLocalServerAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                        		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     ClientIP;                                         		// 0x0048 (0x0014) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.VerifyServerAuthSession
// [0x00020000] 
struct UOnlineAuthInterfaceImpl_execVerifyServerAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                        		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     ServerIP;                                         		// 0x0048 (0x0014) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            AuthTicketUID;                                    		// 0x005C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0060 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.CreateServerAuthSession
// [0x00420000] 
struct UOnlineAuthInterfaceImpl_execCreateServerAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                        		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     ClientIP;                                         		// 0x0048 (0x0014) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ClientPort;                                       		// 0x005C (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            OutAuthTicketUID;                                 		// 0x0060 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0064 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteClientAuthSessions
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execEndAllRemoteClientAuthSessions_Params
{
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalClientAuthSessions
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execEndAllLocalClientAuthSessions_Params
{
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteClientAuthSession
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execEndRemoteClientAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                        		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     ClientIP;                                         		// 0x0048 (0x0014) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndLocalClientAuthSession
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execEndLocalClientAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                        		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     ServerIP;                                         		// 0x0048 (0x0014) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ServerPort;                                       		// 0x005C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.VerifyClientAuthSession
// [0x00020000] 
struct UOnlineAuthInterfaceImpl_execVerifyClientAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                        		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     ClientIP;                                         		// 0x0048 (0x0014) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ClientPort;                                       		// 0x005C (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            AuthTicketUID;                                    		// 0x0060 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0064 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.CreateClientAuthSession
// [0x00420000] 
struct UOnlineAuthInterfaceImpl_execCreateClientAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                        		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     ServerIP;                                         		// 0x0048 (0x0014) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ServerPort;                                       		// 0x005C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bSecure : 1;                                      		// 0x0060 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	int32_t                                            OutAuthTicketUID;                                 		// 0x0064 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0068 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRetryRequest
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execSendServerAuthRetryRequest_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthEndSessionRequest
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execSendClientAuthEndSessionRequest_Params
{
	class UPlayer*                                     ClientConnection;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthResponse
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execSendServerAuthResponse_Params
{
	class UPlayer*                                     ClientConnection;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            AuthTicketUID;                                    		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthResponse
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execSendClientAuthResponse_Params
{
	int32_t                                            AuthTicketUID;                                    		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRequest
// [0x00020000] 
struct UOnlineAuthInterfaceImpl_execSendServerAuthRequest_Params
{
	struct FUniqueNetId                                ServerUID;                                        		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthRequest
// [0x00020000] 
struct UOnlineAuthInterfaceImpl_execSendClientAuthRequest_Params
{
	class UPlayer*                                     ClientConnection;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                ClientUID;                                        		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerConnectionCloseDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearServerConnectionCloseDelegate_Params
{
	struct FScriptDelegate                             ServerConnectionCloseDelegate;                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerConnectionCloseDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddServerConnectionCloseDelegate_Params
{
	struct FScriptDelegate                             ServerConnectionCloseDelegate;                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerConnectionClose
// [0x00120001] 
struct UOnlineAuthInterfaceImpl_execOnServerConnectionClose_Params
{
	class UPlayer*                                     ServerConnection;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientConnectionCloseDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearClientConnectionCloseDelegate_Params
{
	struct FScriptDelegate                             ClientConnectionCloseDelegate;                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientConnectionCloseDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddClientConnectionCloseDelegate_Params
{
	struct FScriptDelegate                             ClientConnectionCloseDelegate;                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientConnectionClose
// [0x00120001] 
struct UOnlineAuthInterfaceImpl_execOnClientConnectionClose_Params
{
	class UPlayer*                                     ClientConnection;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRetryRequestDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearServerAuthRetryRequestDelegate_Params
{
	struct FScriptDelegate                             ServerAuthRetryRequestDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRetryRequestDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddServerAuthRetryRequestDelegate_Params
{
	struct FScriptDelegate                             ServerAuthRetryRequestDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRetryRequest
// [0x00120001] 
struct UOnlineAuthInterfaceImpl_execOnServerAuthRetryRequest_Params
{
	class UPlayer*                                     ClientConnection;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthEndSessionRequestDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearClientAuthEndSessionRequestDelegate_Params
{
	struct FScriptDelegate                             ClientAuthEndSessionRequestDelegate;              		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthEndSessionRequestDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddClientAuthEndSessionRequestDelegate_Params
{
	struct FScriptDelegate                             ClientAuthEndSessionRequestDelegate;              		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthEndSessionRequest
// [0x00120001] 
struct UOnlineAuthInterfaceImpl_execOnClientAuthEndSessionRequest_Params
{
	class UPlayer*                                     ServerConnection;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthCompleteDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearServerAuthCompleteDelegate_Params
{
	struct FScriptDelegate                             ServerAuthCompleteDelegate;                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthCompleteDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddServerAuthCompleteDelegate_Params
{
	struct FScriptDelegate                             ServerAuthCompleteDelegate;                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthComplete
// [0x00120001] 
struct UOnlineAuthInterfaceImpl_execOnServerAuthComplete_Params
{
	uint32_t                                           bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FUniqueNetId                                ServerUID;                                        		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UPlayer*                                     ServerConnection;                                 		// 0x0050 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ExtraInfo;                                        		// 0x0058 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthCompleteDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearClientAuthCompleteDelegate_Params
{
	struct FScriptDelegate                             ClientAuthCompleteDelegate;                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthCompleteDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddClientAuthCompleteDelegate_Params
{
	struct FScriptDelegate                             ClientAuthCompleteDelegate;                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthComplete
// [0x00120001] 
struct UOnlineAuthInterfaceImpl_execOnClientAuthComplete_Params
{
	uint32_t                                           bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FUniqueNetId                                ClientUID;                                        		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UPlayer*                                     ClientConnection;                                 		// 0x0050 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ExtraInfo;                                        		// 0x0058 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthResponseDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearServerAuthResponseDelegate_Params
{
	struct FScriptDelegate                             ServerAuthResponseDelegate;                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthResponseDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddServerAuthResponseDelegate_Params
{
	struct FScriptDelegate                             ServerAuthResponseDelegate;                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthResponse
// [0x00120001] 
struct UOnlineAuthInterfaceImpl_execOnServerAuthResponse_Params
{
	struct FUniqueNetId                                ServerUID;                                        		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     ServerIP;                                         		// 0x0048 (0x0014) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            AuthTicketUID;                                    		// 0x005C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthResponseDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearClientAuthResponseDelegate_Params
{
	struct FScriptDelegate                             ClientAuthResponseDelegate;                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthResponseDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddClientAuthResponseDelegate_Params
{
	struct FScriptDelegate                             ClientAuthResponseDelegate;                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthResponse
// [0x00120001] 
struct UOnlineAuthInterfaceImpl_execOnClientAuthResponse_Params
{
	struct FUniqueNetId                                ClientUID;                                        		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     ClientIP;                                         		// 0x0048 (0x0014) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            AuthTicketUID;                                    		// 0x005C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRequestDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearServerAuthRequestDelegate_Params
{
	struct FScriptDelegate                             ServerAuthRequestDelegate;                        		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRequestDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddServerAuthRequestDelegate_Params
{
	struct FScriptDelegate                             ServerAuthRequestDelegate;                        		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRequest
// [0x00120001] 
struct UOnlineAuthInterfaceImpl_execOnServerAuthRequest_Params
{
	class UPlayer*                                     ClientConnection;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                ClientUID;                                        		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     ClientIP;                                         		// 0x0050 (0x0014) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ClientPort;                                       		// 0x0064 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthRequestDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearClientAuthRequestDelegate_Params
{
	struct FScriptDelegate                             ClientAuthRequestDelegate;                        		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthRequestDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddClientAuthRequestDelegate_Params
{
	struct FScriptDelegate                             ClientAuthRequestDelegate;                        		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthRequest
// [0x00120001] 
struct UOnlineAuthInterfaceImpl_execOnClientAuthRequest_Params
{
	struct FUniqueNetId                                ServerUID;                                        		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     ServerIP;                                         		// 0x0048 (0x0014) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ServerPort;                                       		// 0x005C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bSecure : 1;                                      		// 0x0060 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthReadyDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearAuthReadyDelegate_Params
{
	struct FScriptDelegate                             AuthReadyDelegate;                                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthReadyDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddAuthReadyDelegate_Params
{
	struct FScriptDelegate                             AuthReadyDelegate;                                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnAuthReady
// [0x00120001] 
struct UOnlineAuthInterfaceImpl_execOnAuthReady_Params
{
};

// Function IpDrv.OnlineAuthInterfaceImpl.IsReady
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execIsReady_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineFriendsInterfaceImpl.GetActivePlatformId
// [0x00420000] 
struct UOnlineFriendsInterfaceImpl_execGetActivePlatformId_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                AccountId;                                        		// 0x0008 (0x0048) [0x0000000000400082] (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
	struct FUniqueNetId                                PlatformId;                                       		// 0x0050 (0x0048) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0098 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineFriendsInterfaceImpl.RequestLinkedAccounts
// [0x00020000] 
struct UOnlineFriendsInterfaceImpl_execRequestLinkedAccounts_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        AccountIds;                                       		// 0x0008 (0x0010) [0x0000000000400082] (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                         		// 0x0018 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineFriendsInterfaceImpl.OnReceivedLinkedAccount
// [0x00120001] 
struct UOnlineFriendsInterfaceImpl_execOnReceivedLinkedAccount_Params
{
	uint32_t                                           bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	TArray<struct FLinkedAccountData>                  LinkedAccountData;                                		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGamePlayersChangedDelegate
// [0x00020001] 
struct UOnlineGameInterfaceImpl_execClearGamePlayersChangedDelegate_Params
{
	struct FScriptDelegate                             GamePlayersChangedDelegate;                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGamePlayersChangedDelegate
// [0x00020001] 
struct UOnlineGameInterfaceImpl_execAddGamePlayersChangedDelegate_Params
{
	struct FScriptDelegate                             GamePlayersChangedDelegate;                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGamePlayersChanged
// [0x00120001] 
struct UOnlineGameInterfaceImpl_execOnGamePlayersChanged_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.SetFriendJoinLocation
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execSetFriendJoinLocation_Params
{
	struct FUniqueNetId                                JoinablePlayerID;                                 		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ServerAddress;                                    		// 0x0048 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            Visibility;                                       		// 0x0058 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearReportMatchmakingInfoDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execClearReportMatchmakingInfoDelegate_Params
{
	struct FScriptDelegate                             OldDelegate;                                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddReportMatchmakingInfoDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execAddReportMatchmakingInfoDelegate_Params
{
	struct FScriptDelegate                             NewDelegate;                                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.EventReportMatchmakingInfo
// [0x00120001] 
struct UOnlineGameInterfaceImpl_execEventReportMatchmakingInfo_Params
{
	class FString                                      NewInfo;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearQosStatusChangedDelegate
// [0x00020001] 
struct UOnlineGameInterfaceImpl_execClearQosStatusChangedDelegate_Params
{
	struct FScriptDelegate                             QosStatusChangedDelegate;                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddQosStatusChangedDelegate
// [0x00020001] 
struct UOnlineGameInterfaceImpl_execAddQosStatusChangedDelegate_Params
{
	struct FScriptDelegate                             QosStatusChangedDelegate;                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnQosStatusChanged
// [0x00120001] 
struct UOnlineGameInterfaceImpl_execOnQosStatusChanged_Params
{
	int32_t                                            NumComplete;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            NumTotal;                                         		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineGameInterfaceImpl.BindPlatformSpecificSessionToSearch
// [0x00020400] 
struct UOnlineGameInterfaceImpl_execBindPlatformSpecificSessionToSearch_Params
{
	uint8_t                                            SearchingPlayerNum;                               		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineGameSearch*                           SearchSettings;                                   		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            PlatformSpecificInfo[0x50];                       		// 0x0010 (0x0050) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0060 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfoBySessionName
// [0x00420000] 
struct UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfoBySessionName_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            PlatformSpecificInfo[0x50];                       		// 0x0008 (0x0050) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfo
// [0x00420400] 
struct UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfo_Params
{
	struct FOnlineGameSearchResult                     DesiredGame;                                      		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint8_t                                            PlatformSpecificInfo[0x50];                       		// 0x0010 (0x0050) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0060 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.QueryNonAdvertisedData
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execQueryNonAdvertisedData_Params
{
	int32_t                                            StartAt;                                          		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            NumberToQuery;                                    		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinMigratedOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execClearJoinMigratedOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinMigratedOnlineGameCompleteDelegate;           		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinMigratedOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execAddJoinMigratedOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinMigratedOnlineGameCompleteDelegate;           		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinMigratedOnlineGameComplete
// [0x00120001] 
struct UOnlineGameInterfaceImpl_execOnJoinMigratedOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinMigratedOnlineGame
// [0x00420000] 
struct UOnlineGameInterfaceImpl_execJoinMigratedOnlineGame_Params
{
	uint8_t                                            PlayerNum;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FOnlineGameSearchResult                     DesiredGame;                                      		// 0x0010 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearMigrateOnlineGameCompleteDelegate
// [0x00020001] 
struct UOnlineGameInterfaceImpl_execClearMigrateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             MigrateOnlineGameCompleteDelegate;                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddMigrateOnlineGameCompleteDelegate
// [0x00020001] 
struct UOnlineGameInterfaceImpl_execAddMigrateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             MigrateOnlineGameCompleteDelegate;                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnMigrateOnlineGameComplete
// [0x00120001] 
struct UOnlineGameInterfaceImpl_execOnMigrateOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.MigrateOnlineGame
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execMigrateOnlineGame_Params
{
	uint8_t                                            HostingPlayerNum;                                 		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearRecalculateSkillRatingCompleteDelegate
// [0x00020001] 
struct UOnlineGameInterfaceImpl_execClearRecalculateSkillRatingCompleteDelegate_Params
{
	struct FScriptDelegate                             RecalculateSkillRatingGameCompleteDelegate;       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddRecalculateSkillRatingCompleteDelegate
// [0x00020001] 
struct UOnlineGameInterfaceImpl_execAddRecalculateSkillRatingCompleteDelegate_Params
{
	struct FScriptDelegate                             RecalculateSkillRatingCompleteDelegate;           		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRecalculateSkillRatingComplete
// [0x00120001] 
struct UOnlineGameInterfaceImpl_execOnRecalculateSkillRatingComplete_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.RecalculateSkillRating
// [0x00420001] 
struct UOnlineGameInterfaceImpl_execRecalculateSkillRating_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.AcceptGameInvite
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAcceptGameInvite_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteAcceptedDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execClearGameInviteAcceptedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteAcceptedDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execAddGameInviteAcceptedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted
// [0x00520000] 
struct UOnlineGameInterfaceImpl_execOnGameInviteAccepted_Params
{
	struct FOnlineGameSearchResult                     InviteResult;                                     		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class FString                                      ErrorString;                                      		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.GetArbitratedPlayers
// [0x00020001] 
struct UOnlineGameInterfaceImpl_execGetArbitratedPlayers_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FOnlineArbitrationRegistrant>        ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearArbitrationRegistrationCompleteDelegate
// [0x00020001] 
struct UOnlineGameInterfaceImpl_execClearArbitrationRegistrationCompleteDelegate_Params
{
	struct FScriptDelegate                             ArbitrationRegistrationCompleteDelegate;          		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddArbitrationRegistrationCompleteDelegate
// [0x00020001] 
struct UOnlineGameInterfaceImpl_execAddArbitrationRegistrationCompleteDelegate_Params
{
	struct FScriptDelegate                             ArbitrationRegistrationCompleteDelegate;          		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnArbitrationRegistrationComplete
// [0x00120001] 
struct UOnlineGameInterfaceImpl_execOnArbitrationRegistrationComplete_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterForArbitration
// [0x00020001] 
struct UOnlineGameInterfaceImpl_execRegisterForArbitration_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearEndOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execClearEndOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             EndOnlineGameCompleteDelegate;                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddEndOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execAddEndOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             EndOnlineGameCompleteDelegate;                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete
// [0x00120001] 
struct UOnlineGameInterfaceImpl_execOnEndOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.EndOnlineGame
// [0x00020401] 
struct UOnlineGameInterfaceImpl_execEndOnlineGame_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearStartOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execClearStartOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             StartOnlineGameCompleteDelegate;                  		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddStartOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execAddStartOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             StartOnlineGameCompleteDelegate;                  		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete
// [0x00120001] 
struct UOnlineGameInterfaceImpl_execOnStartOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.StartOnlineGame
// [0x00020401] 
struct UOnlineGameInterfaceImpl_execStartOnlineGame_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUnregisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                 		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUnregisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                 		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnUnregisterPlayerComplete_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0050 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayers
// [0x00420001] 
struct UOnlineGameInterfaceImpl_execUnregisterPlayers_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayer
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execUnregisterPlayer_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearRegisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddRegisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnRegisterPlayerComplete_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0050 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayers
// [0x00420001] 
struct UOnlineGameInterfaceImpl_execRegisterPlayers_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayer
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execRegisterPlayer_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasInvited : 1;                                  		// 0x0050 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0054 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.GetResolvedConnectString
// [0x00420400] 
struct UOnlineGameInterfaceImpl_execGetResolvedConnectString_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ConnectInfo;                                      		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execClearJoinOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinOnlineGameCompleteDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execAddJoinOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinOnlineGameCompleteDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete
// [0x00120001] 
struct UOnlineGameInterfaceImpl_execOnJoinOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGame
// [0x00420400] 
struct UOnlineGameInterfaceImpl_execJoinOnlineGame_Params
{
	uint8_t                                            PlayerNum;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FOnlineGameSearchResult                     DesiredGame;                                      		// 0x0010 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.FreeSearchResults
// [0x00020400] 
struct UOnlineGameInterfaceImpl_execFreeSearchResults_Params
{
	class UOnlineGameSearch*                           Search;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCancelFindOnlineGamesCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execClearCancelFindOnlineGamesCompleteDelegate_Params
{
	struct FScriptDelegate                             CancelFindOnlineGamesCompleteDelegate;            		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCancelFindOnlineGamesCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execAddCancelFindOnlineGamesCompleteDelegate_Params
{
	struct FScriptDelegate                             CancelFindOnlineGamesCompleteDelegate;            		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete
// [0x00120001] 
struct UOnlineGameInterfaceImpl_execOnCancelFindOnlineGamesComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.CancelFindOnlineGames
// [0x00020401] 
struct UOnlineGameInterfaceImpl_execCancelFindOnlineGames_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearFindOnlineGamesCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execClearFindOnlineGamesCompleteDelegate_Params
{
	struct FScriptDelegate                             FindOnlineGamesCompleteDelegate;                  		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddFindOnlineGamesCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execAddFindOnlineGamesCompleteDelegate_Params
{
	struct FScriptDelegate                             FindOnlineGamesCompleteDelegate;                  		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.FindOnlineGames
// [0x00020400] 
struct UOnlineGameInterfaceImpl_execFindOnlineGames_Params
{
	uint8_t                                            SearchingPlayerNum;                               		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineGameSearch*                           SearchSettings;                                   		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearDestroyOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execClearDestroyOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             DestroyOnlineGameCompleteDelegate;                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddDestroyOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execAddDestroyOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             DestroyOnlineGameCompleteDelegate;                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete
// [0x00120001] 
struct UOnlineGameInterfaceImpl_execOnDestroyOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.DestroyOnlineGame
// [0x00020400] 
struct UOnlineGameInterfaceImpl_execDestroyOnlineGame_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUpdateOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execClearUpdateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             UpdateOnlineGameCompleteDelegate;                 		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUpdateOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execAddUpdateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             UpdateOnlineGameCompleteDelegate;                 		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete
// [0x00120001] 
struct UOnlineGameInterfaceImpl_execOnUpdateOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.UpdateOnlineGame
// [0x00024000] 
struct UOnlineGameInterfaceImpl_execUpdateOnlineGame_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UOnlineGameSettings*                         UpdatedGameSettings;                              		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bShouldRefreshOnlineData : 1;                     		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCreateOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execClearCreateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             CreateOnlineGameCompleteDelegate;                 		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCreateOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execAddCreateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             CreateOnlineGameCompleteDelegate;                 		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete
// [0x00120001] 
struct UOnlineGameInterfaceImpl_execOnCreateOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineGame
// [0x00020400] 
struct UOnlineGameInterfaceImpl_execCreateOnlineGame_Params
{
	uint8_t                                            HostingPlayerNum;                                 		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UOnlineGameSettings*                         NewGameSettings;                                  		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSearch
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execGetGameSearch_Params
{
	class UOnlineGameSearch*                           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSettings
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execGetGameSettings_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UOnlineGameSettings*                         ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete
// [0x00120001] 
struct UOnlineGameInterfaceImpl_execOnFindOnlineGamesComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineImageDownloaderWeb.GetImageType
// [0x00022401] 
struct UOnlineImageDownloaderWeb_execGetImageType_Params
{
	class FString                                      ContentType;                                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	EImageType                                         ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineImageDownloaderWeb.QueueURLForDownload
// [0x00040003] 
struct UOnlineImageDownloaderWeb_execQueueURLForDownload_Params
{
	class FString                                      NewURL;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             InternalCallbackOnComplete;                       		// 0x0010 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             ExternalCallback;                                 		// 0x0028 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bSupportSRGB : 1;                                 		// 0x0040 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class UHttpRequestInterface*                       Request;                                          		// 0x0048 (0x0008) [0x0000000000000000]               
	// class UTexture2DDynamic*                           TextureHolder;                                    		// 0x0050 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.OnlineImageDownloaderWeb.DebugDraw
// [0x00820003] 
struct UOnlineImageDownloaderWeb_execDebugDraw_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// float                                              PosX;                                             		// 0x0008 (0x0004) [0x0000000000000000]               
	// float                                              PosY;                                             		// 0x000C (0x0004) [0x0000000000000000]               
	// struct FOnlineImageDownload                        ImageItr;                                         		// 0x0010 (0x0040) [0x0010000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineImageDownloaderWeb.OnDownloadComplete
// [0x00040003] 
struct UOnlineImageDownloaderWeb_execOnDownloadComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bDidSucceed : 1;                                  		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineImageDownloaderWeb.DownloadNextImage
// [0x00040003] 
struct UOnlineImageDownloaderWeb_execDownloadNextImage_Params
{
};

// Function IpDrv.OnlineImageDownloaderWeb.RequestOnlineImages
// [0x00424002] 
struct UOnlineImageDownloaderWeb_execRequestOnlineImages_Params
{
	TArray<class FString>                              URLs;                                             		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FScriptDelegate                             FinishedCallback;                                 		// 0x0010 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bSupportSRGB : 1;                                 		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	// class FString                                      URL;                                              		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineImageDownloaderWeb.GetOnlineImageTexture
// [0x00020003] 
struct UOnlineImageDownloaderWeb_execGetOnlineImageTexture_Params
{
	class FString                                      URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UTexture*                                    ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearQueue
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execClearQueue_Params
{
};

// Function IpDrv.OnlineImageDownloaderWeb.Dequeue
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execDequeue_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineImageDownloaderWeb.Enqueue
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execEnqueue_Params
{
	class FString                                      URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearActiveDownloads
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execClearActiveDownloads_Params
{
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearCompletedDownloads
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execClearCompletedDownloads_Params
{
};

// Function IpDrv.OnlineImageDownloaderWeb.HandleImageDecoded_Native
// [0x00440401] 
struct UOnlineImageDownloaderWeb_execHandleImageDecoded_Native_Params
{
	class FString                                      RequestedURL;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FImageLayout                                DecodedImage;                                     		// 0x0010 (0x0018) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineImageDownloaderWeb.HandleImageDecoded
// [0x00440003] 
struct UOnlineImageDownloaderWeb_execHandleImageDecoded_Params
{
	class FString                                      RequestedURL;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FImageLayout                                DecodedImage;                                     		// 0x0010 (0x0018) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineImageDownloaderWeb.RequeueFailedURL
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execRequeueFailedURL_Params
{
	class FString                                      URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineImageDownloaderWeb.DownloadNextQueuedURL
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execDownloadNextQueuedURL_Params
{
};

// Function IpDrv.OnlineImageDownloaderWeb.UpdateActiveDownloadFromResponse
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execUpdateActiveDownloadFromResponse_Params
{
	class FString                                      URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UHttpResponseInterface*                      Response;                                         		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             OnDecodedCallback;                                		// 0x0018 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineImageDownloaderWeb.MarkActiveDownloadFailed
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execMarkActiveDownloadFailed_Params
{
	class FString                                      URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineImageDownloaderWeb.QueueURLForDownloadInternal
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execQueueURLForDownloadInternal_Params
{
	class FString                                      NewURL;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UHttpRequestInterface*                       Request;                                          		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UTexture2DDynamic*                           TextureHolder;                                    		// 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             OnDecodedCallback;                                		// 0x0020 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineImageDownloaderWeb.AddCallbackToDownload
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execAddCallbackToDownload_Params
{
	class FString                                      URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             NewCallback;                                      		// 0x0010 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineImageDownloaderWeb.GetDownload
// [0x00020401] 
struct UOnlineImageDownloaderWeb_execGetDownload_Params
{
	class FString                                      URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FOnlineImageDownload                        ReturnValue;                                      		// 0x0010 (0x0040) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineImageDownloaderWeb.IsURLQueued
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execIsURLQueued_Params
{
	class FString                                      URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineImageDownloaderWeb.IsURLActive
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execIsURLActive_Params
{
	class FString                                      URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineImageDownloaderWeb.DidURLFail
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execDidURLFail_Params
{
	class FString                                      URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineImageDownloaderWeb.DidURLSucceed
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execDidURLSucceed_Params
{
	class FString                                      URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineImageDownloaderWeb.IsURLTracked
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execIsURLTracked_Params
{
	class FString                                      URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineImageDownloaderWeb.AllValues
// [0x00444405] 
struct UOnlineImageDownloaderWeb_execAllValues_Params
{
	struct FOnlineImageDownload                        OutImage;                                         		// 0x0000 (0x0040) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            StartIndex;                                       		// 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            MaxValues;                                        		// 0x0044 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearPendingDownloads
// [0x00020401] 
struct UOnlineImageDownloaderWeb_execClearPendingDownloads_Params
{
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearAllDownloads
// [0x00020401] 
struct UOnlineImageDownloaderWeb_execClearAllDownloads_Params
{
};

// Function IpDrv.OnlineImageDownloaderWeb.EventImageDecoded
// [0x00540001] 
struct UOnlineImageDownloaderWeb_execEventImageDecoded_Params
{
	class FString                                      RequestURL;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FImageLayout                                Image;                                            		// 0x0010 (0x0018) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineImageDownloaderWeb.OnOnlineImageFinished
// [0x00180001] 
struct UOnlineImageDownloaderWeb_execOnOnlineImageFinished_Params
{
	struct FOnlineImageDownload                        ImageInfo;                                        		// 0x0000 (0x0040) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineImageDownloaderWeb.Construct
// [0x400020802] 
struct UOnlineImageDownloaderWeb_eventConstruct_Params
{
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearHostStartPlayTogetherDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execClearHostStartPlayTogetherDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddHostStartPlayTogetherDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execAddHostStartPlayTogetherDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnHostStartPlayTogether
// [0x00120001] 
struct UOnlineLobbyInterfaceImpl_execOnHostStartPlayTogether_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyErrorDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execClearLobbyErrorDelegate_Params
{
	struct FScriptDelegate                             LobbyErrorDelegate;                               		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyErrorDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execAddLobbyErrorDelegate_Params
{
	struct FScriptDelegate                             LobbyErrorDelegate;                               		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyError
// [0x00120001] 
struct UOnlineLobbyInterfaceImpl_execOnLobbyError_Params
{
	class FString                                      Error;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.GetLobbyMembers
// [0x00420803] 
struct UOnlineLobbyInterfaceImpl_eventGetLobbyMembers_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	TArray<struct FLobbyMember>                        Members;                                          		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            I;                                                		// 0x0024 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbySessionCretedeDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execClearLobbySessionCretedeDelegate_Params
{
	struct FScriptDelegate                             LobbySessionCreatedDelegate;                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbySessionCreatedDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execClearLobbySessionCreatedDelegate_Params
{
	struct FScriptDelegate                             LobbySessionCreatedDelegate;                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbySessionCreatedDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execAddLobbySessionCreatedDelegate_Params
{
	struct FScriptDelegate                             LobbySessionCreatedDelegate;                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbySessionCreatedDelegates
// [0x00020803] 
struct UOnlineLobbyInterfaceImpl_eventTriggerLobbySessionCreatedDelegates_Params
{
	// TArray<struct FScriptDelegate>                     DelList;                                          		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FScriptDelegate                             CurDel;                                           		// 0x0010 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbySessionCreated
// [0x00120001] 
struct UOnlineLobbyInterfaceImpl_execOnLobbySessionCreated_Params
{
};

// Function IpDrv.OnlineLobbyInterfaceImpl.GetLobbyIndex
// [0x00420803] 
struct UOnlineLobbyInterfaceImpl_eventGetLobbyIndex_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	int32_t                                            ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.RemoveLocalPlayerFromSession
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execRemoveLocalPlayerFromSession_Params
{
	struct FUniqueNetId                                PartyMember;                                      		// 0x0000 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLocalPartyMemberToSession
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execAddLocalPartyMemberToSession_Params
{
	struct FUniqueNetId                                NewPartyMember;                                   		// 0x0000 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.KickPlayer
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execKickPlayer_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FUniqueNetId                                PlayerID;                                         		// 0x0010 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint8_t                                            Reason;                                           		// 0x0058 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x005C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ShowInviteUI
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execShowInviteUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000082] (CPF_Const | CPF_Parm)
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0008 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyDestroyedDelegates
// [0x00020803] 
struct UOnlineLobbyInterfaceImpl_eventTriggerLobbyDestroyedDelegates_Params
{
	int32_t                                            LobbyIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            Reason;                                           		// 0x0004 (0x0001) [0x0000000000000080] (CPF_Parm)    
	// TArray<struct FScriptDelegate>                     DelList;                                          		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FScriptDelegate                             CurDel;                                           		// 0x0018 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyDestroyedDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execClearLobbyDestroyedDelegate_Params
{
	struct FScriptDelegate                             LobbyDestroyedDelegate;                           		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyDestroyedDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execAddLobbyDestroyedDelegate_Params
{
	struct FScriptDelegate                             LobbyDestroyedDelegate;                           		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyDestroyed
// [0x00520001] 
struct UOnlineLobbyInterfaceImpl_execOnLobbyDestroyed_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint8_t                                            Reason;                                           		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyInviteDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execClearLobbyInviteDelegate_Params
{
	struct FScriptDelegate                             LobbyInviteDelegate;                              		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyInviteDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execAddLobbyInviteDelegate_Params
{
	struct FScriptDelegate                             LobbyInviteDelegate;                              		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyInvite
// [0x00520001] 
struct UOnlineLobbyInterfaceImpl_execOnLobbyInvite_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FUniqueNetId                                FriendId;                                         		// 0x0010 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           bAccepted : 1;                                    		// 0x0058 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.InviteToLobby
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execInviteToLobby_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FUniqueNetId                                PlayerID;                                         		// 0x0010 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.CanInviteToLobby
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execCanInviteToLobby_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FUniqueNetId                                PlayerID;                                         		// 0x0010 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyOwner
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execSetLobbyOwner_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FUniqueNetId                                NewOwner;                                         		// 0x0010 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyLock
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execSetLobbyLock_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint32_t                                           bLocked : 1;                                      		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyServer
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execSetLobbyServer_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FUniqueNetId                                ServerUID;                                        		// 0x0010 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      ServerIP;                                         		// 0x0058 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0068 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.RemoveLobbySetting
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execRemoveLobbySetting_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class FString                                      Key;                                              		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbySetting
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execSetLobbySetting_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class FString                                      Key;                                              		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Value;                                            		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.GetLobbyAdmin
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execGetLobbyAdmin_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FUniqueNetId                                AdminId;                                          		// 0x0010 (0x0048) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyJoinGameDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execClearLobbyJoinGameDelegate_Params
{
	struct FScriptDelegate                             LobbyJoinGameDelegate;                            		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyJoinGameDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execAddLobbyJoinGameDelegate_Params
{
	struct FScriptDelegate                             LobbyJoinGameDelegate;                            		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyJoinGameDelegates
// [0x00420803] 
struct UOnlineLobbyInterfaceImpl_eventTriggerLobbyJoinGameDelegates_Params
{
	int32_t                                            LobbyIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                ServerId;                                         		// 0x0008 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      ServerIP;                                         		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// TArray<struct FScriptDelegate>                     DelList;                                          		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FScriptDelegate                             CurDel;                                           		// 0x0070 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyJoinGame
// [0x00520001] 
struct UOnlineLobbyInterfaceImpl_execOnLobbyJoinGame_Params
{
	struct FActiveLobbyInfo                            LobbyInfo;                                        		// 0x0000 (0x0030) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FUniqueNetId                                ServerId;                                         		// 0x0030 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      ServerIP;                                         		// 0x0078 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyReceiveBinaryDataDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execClearLobbyReceiveBinaryDataDelegate_Params
{
	struct FScriptDelegate                             LobbyReceiveBinaryDataDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyReceiveBinaryDataDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execAddLobbyReceiveBinaryDataDelegate_Params
{
	struct FScriptDelegate                             LobbyReceiveBinaryDataDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyReceiveBinaryDataDelegates
// [0x00020803] 
struct UOnlineLobbyInterfaceImpl_eventTriggerLobbyReceiveBinaryDataDelegates_Params
{
	int32_t                                            LobbyIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            MemberIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// TArray<struct FScriptDelegate>                     DelList;                                          		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FScriptDelegate                             CurDel;                                           		// 0x0018 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyReceiveBinaryData
// [0x00520001] 
struct UOnlineLobbyInterfaceImpl_execOnLobbyReceiveBinaryData_Params
{
	struct FActiveLobbyInfo                            LobbyInfo;                                        		// 0x0000 (0x0030) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            MemberIndex;                                      		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
	TArray<uint8_t>                                    Data;                                             		// 0x0038 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SendLobbyBinaryData
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execSendLobbyBinaryData_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	TArray<uint8_t>                                    Data;                                             		// 0x0010 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyReceiveMessageDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execClearLobbyReceiveMessageDelegate_Params
{
	struct FScriptDelegate                             LobbyReceiveMessageDelegate;                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyReceiveMessageDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execAddLobbyReceiveMessageDelegate_Params
{
	struct FScriptDelegate                             LobbyReceiveMessageDelegate;                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyReceiveMessageDelegates
// [0x00020803] 
struct UOnlineLobbyInterfaceImpl_eventTriggerLobbyReceiveMessageDelegates_Params
{
	int32_t                                            LobbyIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            MemberIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Type;                                             		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// TArray<struct FScriptDelegate>                     DelList;                                          		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FScriptDelegate                             CurDel;                                           		// 0x0038 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyReceiveMessage
// [0x00520001] 
struct UOnlineLobbyInterfaceImpl_execOnLobbyReceiveMessage_Params
{
	struct FActiveLobbyInfo                            LobbyInfo;                                        		// 0x0000 (0x0030) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            MemberIndex;                                      		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Type;                                             		// 0x0038 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0048 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SendLobbyMessage
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execSendLobbyMessage_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class FString                                      Message;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyMemberStatusUpdateDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execClearLobbyMemberStatusUpdateDelegate_Params
{
	struct FScriptDelegate                             LobbyMemberStatusUpdateDelegate;                  		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyMemberStatusUpdateDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execAddLobbyMemberStatusUpdateDelegate_Params
{
	struct FScriptDelegate                             LobbyMemberStatusUpdateDelegate;                  		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyMemberStatusUpdateDelegates
// [0x00020803] 
struct UOnlineLobbyInterfaceImpl_eventTriggerLobbyMemberStatusUpdateDelegates_Params
{
	int32_t                                            LobbyIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            MemberIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            InstigatorIndex;                                  		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Status;                                           		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// TArray<struct FScriptDelegate>                     DelList;                                          		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FScriptDelegate                             CurDel;                                           		// 0x0030 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyMemberStatusUpdate
// [0x00520001] 
struct UOnlineLobbyInterfaceImpl_execOnLobbyMemberStatusUpdate_Params
{
	struct FActiveLobbyInfo                            LobbyInfo;                                        		// 0x0000 (0x0030) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            MemberIndex;                                      		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            InstigatorIndex;                                  		// 0x0034 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Status;                                           		// 0x0038 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyMemberSettingsUpdateDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execClearLobbyMemberSettingsUpdateDelegate_Params
{
	struct FScriptDelegate                             LobbyMemberSettingsUpdateDelegate;                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyMemberSettingsUpdateDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execAddLobbyMemberSettingsUpdateDelegate_Params
{
	struct FScriptDelegate                             LobbyMemberSettingsUpdateDelegate;                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyMemberSettingsUpdateDelegates
// [0x00020803] 
struct UOnlineLobbyInterfaceImpl_eventTriggerLobbyMemberSettingsUpdateDelegates_Params
{
	int32_t                                            LobbyIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            MemberIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// TArray<struct FScriptDelegate>                     DelList;                                          		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FScriptDelegate                             CurDel;                                           		// 0x0018 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyMemberSettingsUpdate
// [0x00520001] 
struct UOnlineLobbyInterfaceImpl_execOnLobbyMemberSettingsUpdate_Params
{
	struct FActiveLobbyInfo                            LobbyInfo;                                        		// 0x0000 (0x0030) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            MemberIndex;                                      		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbySettingsUpdateDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execClearLobbySettingsUpdateDelegate_Params
{
	struct FScriptDelegate                             LobbySettingsUpdateDelegate;                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbySettingsUpdateDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execAddLobbySettingsUpdateDelegate_Params
{
	struct FScriptDelegate                             LobbySettingsUpdateDelegate;                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbySettingsUpdateDelegates
// [0x00020803] 
struct UOnlineLobbyInterfaceImpl_eventTriggerLobbySettingsUpdateDelegates_Params
{
	int32_t                                            LobbyIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// TArray<struct FScriptDelegate>                     DelList;                                          		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FScriptDelegate                             CurDel;                                           		// 0x0018 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbySettingsUpdate
// [0x00520001] 
struct UOnlineLobbyInterfaceImpl_execOnLobbySettingsUpdate_Params
{
	struct FActiveLobbyInfo                            LobbyInfo;                                        		// 0x0000 (0x0030) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyUserSetting
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execSetLobbyUserSetting_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class FString                                      Key;                                              		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Value;                                            		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.LeaveLobby
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execLeaveLobby_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearJoinLobbyCompleteDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execClearJoinLobbyCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinLobbyCompleteDelegate;                        		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddJoinLobbyCompleteDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execAddJoinLobbyCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinLobbyCompleteDelegate;                        		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerJoinLobbyCompleteDelegates
// [0x00420803] 
struct UOnlineLobbyInterfaceImpl_eventTriggerJoinLobbyCompleteDelegates_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FActiveLobbyInfo                            LobbyInfo;                                        		// 0x0008 (0x0030) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FUniqueLobbyId                              LobbyUID;                                         		// 0x0038 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class FString                                      Error;                                            		// 0x0048 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// TArray<struct FScriptDelegate>                     DelList;                                          		// 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FScriptDelegate                             CurDel;                                           		// 0x0068 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnJoinLobbyComplete
// [0x00520001] 
struct UOnlineLobbyInterfaceImpl_execOnJoinLobbyComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FActiveLobbyInfo                            LobbyInfo;                                        		// 0x0008 (0x0030) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FUniqueLobbyId                              LobbyUID;                                         		// 0x0038 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class FString                                      Error;                                            		// 0x0048 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.JoinLobby
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execJoinLobby_Params
{
	int32_t                                            LocalPlayerNum;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0008 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearFindLobbiesCompleteDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execClearFindLobbiesCompleteDelegate_Params
{
	struct FScriptDelegate                             FindLobbiesCompleteDelegate;                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddFindLobbiesCompleteDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execAddFindLobbiesCompleteDelegate_Params
{
	struct FScriptDelegate                             FindLobbiesCompleteDelegate;                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerFindLobbiesCompleteDelegates
// [0x00020803] 
struct UOnlineLobbyInterfaceImpl_eventTriggerFindLobbiesCompleteDelegates_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// TArray<struct FScriptDelegate>                     DelList;                                          		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FScriptDelegate                             CurDel;                                           		// 0x0018 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnFindLobbiesComplete
// [0x00520001] 
struct UOnlineLobbyInterfaceImpl_execOnFindLobbiesComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	TArray<struct FBasicLobbyInfo>                     LobbyList;                                        		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.UpdateFoundLobbies
// [0x00024000] 
struct UOnlineLobbyInterfaceImpl_execUpdateFoundLobbies_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.FindLobbies
// [0x00024000] 
struct UOnlineLobbyInterfaceImpl_execFindLobbies_Params
{
	int32_t                                            MaxResults;                                       		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	TArray<struct FLobbyFilter>                        Filters;                                          		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FLobbySortFilter>                    SortFilters;                                      		// 0x0018 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            MinSlots;                                         		// 0x0028 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            Distance;                                         		// 0x002C (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearCreateLobbyCompleteDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execClearCreateLobbyCompleteDelegate_Params
{
	struct FScriptDelegate                             CreateLobbyCompleteDelegate;                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddCreateLobbyCompleteDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execAddCreateLobbyCompleteDelegate_Params
{
	struct FScriptDelegate                             CreateLobbyCompleteDelegate;                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnCreateLobbyComplete
// [0x00520001] 
struct UOnlineLobbyInterfaceImpl_execOnCreateLobbyComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0008 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class FString                                      Error;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.CreateLobby
// [0x00024000] 
struct UOnlineLobbyInterfaceImpl_execCreateLobby_Params
{
	int32_t                                            LocalPlayerNum;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            MaxPlayers;                                       		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            Type;                                             		// 0x0008 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	TArray<struct FLobbyMetaData>                      InitialSettings;                                  		// 0x0010 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.AuthWithNintendoAccountToken
// [0x00420000] 
struct UOnlinePersistentAuthInterfaceImpl_execAuthWithNintendoAccountToken_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      NintendoAccountToken;                             		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetTimeUntilAuthExpiration
// [0x00020000] 
struct UOnlinePersistentAuthInterfaceImpl_execGetTimeUntilAuthExpiration_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint64_t                                           ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetAuthExpirationTimestamp
// [0x00020000] 
struct UOnlinePersistentAuthInterfaceImpl_execGetAuthExpirationTimestamp_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UDateTime*                                   ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.LaunchAccountPortal
// [0x00020000] 
struct UOnlinePersistentAuthInterfaceImpl_execLaunchAccountPortal_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetClientSecret
// [0x00020000] 
struct UOnlinePersistentAuthInterfaceImpl_execGetClientSecret_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetClientID
// [0x00020000] 
struct UOnlinePersistentAuthInterfaceImpl_execGetClientID_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetClientCredentials
// [0x00020000] 
struct UOnlinePersistentAuthInterfaceImpl_execGetClientCredentials_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetContinuanceToken
// [0x00020000] 
struct UOnlinePersistentAuthInterfaceImpl_execGetContinuanceToken_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.UseRefreshToken
// [0x00020000] 
struct UOnlinePersistentAuthInterfaceImpl_execUseRefreshToken_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      RefreshToken;                                     		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetRefreshToken
// [0x00020000] 
struct UOnlinePersistentAuthInterfaceImpl_execGetRefreshToken_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.RequestPinGrantCode
// [0x00020000] 
struct UOnlinePersistentAuthInterfaceImpl_execRequestPinGrantCode_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.ClearUnderageUserDetectedDelegate
// [0x00020003] 
struct UOnlinePersistentAuthInterfaceImpl_execClearUnderageUserDetectedDelegate_Params
{
	struct FScriptDelegate                             Callback;                                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.AddUnderageUserDetectedDelegate
// [0x00020003] 
struct UOnlinePersistentAuthInterfaceImpl_execAddUnderageUserDetectedDelegate_Params
{
	struct FScriptDelegate                             Callback;                                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.OnUnderageUserDetected
// [0x00120001] 
struct UOnlinePersistentAuthInterfaceImpl_execOnUnderageUserDetected_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ParentalConsentURL;                               		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.ClearRequestPinGrantCodeDelegate
// [0x00020003] 
struct UOnlinePersistentAuthInterfaceImpl_execClearRequestPinGrantCodeDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             Callback;                                         		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.AddRequestPinGrantCodeDelegate
// [0x00020003] 
struct UOnlinePersistentAuthInterfaceImpl_execAddRequestPinGrantCodeDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             Callback;                                         		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.OnReceievedPinGrantCode
// [0x00120001] 
struct UOnlinePersistentAuthInterfaceImpl_execOnReceievedPinGrantCode_Params
{
	uint8_t                                            Result;                                           		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            LocalUserNum;                                     		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Code;                                             		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      URL;                                              		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            SecondsUntilExpiration;                           		// 0x0028 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlinePlaylistManager.ParseDataCenterId
// [0x00420401] 
struct UOnlinePlaylistManager_execParseDataCenterId_Params
{
	TArray<uint8_t>                                    Data;                                             		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePlaylistManager.OnReadDataCenterIdComplete
// [0x00020003] 
struct UOnlinePlaylistManager_execOnReadDataCenterIdComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// TArray<uint8_t>                                    FileData;                                         		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePlaylistManager.ReadDataCenterId
// [0x00020003] 
struct UOnlinePlaylistManager_execReadDataCenterId_Params
{
	// class UOnlineSubsystem*                            OnlineSub;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.SendPlaylistPopulationUpdate
// [0x00020803] 
struct UOnlinePlaylistManager_eventSendPlaylistPopulationUpdate_Params
{
	int32_t                                            NumPlayers;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class UOnlineEventsInterface*                      EventsInterface;                                  		// 0x0008 (0x0010) [0x0000000000000000]               
	// class UOnlineSubsystem*                            OnlineSub;                                        		// 0x0018 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.GetPopulationInfoFromPlaylist
// [0x00420003] 
struct UOnlinePlaylistManager_execGetPopulationInfoFromPlaylist_Params
{
	int32_t                                            PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            WorldwideTotal;                                   		// 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            RegionTotal;                                      		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	// int32_t                                            PlaylistIndex;                                    		// 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.ParsePlaylistPopulationData
// [0x00420401] 
struct UOnlinePlaylistManager_execParsePlaylistPopulationData_Params
{
	TArray<uint8_t>                                    Data;                                             		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePlaylistManager.OnPlaylistPopulationDataUpdated
// [0x00120001] 
struct UOnlinePlaylistManager_execOnPlaylistPopulationDataUpdated_Params
{
};

// Function IpDrv.OnlinePlaylistManager.OnReadPlaylistPopulationComplete
// [0x00020003] 
struct UOnlinePlaylistManager_execOnReadPlaylistPopulationComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// TArray<uint8_t>                                    FileData;                                         		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePlaylistManager.ReadPlaylistPopulation
// [0x00020003] 
struct UOnlinePlaylistManager_execReadPlaylistPopulation_Params
{
	// class UOnlineSubsystem*                            OnlineSub;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.Reset
// [0x00020003] 
struct UOnlinePlaylistManager_execReset_Params
{
	// class UOnlineSubsystem*                            OnlineSub;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.GetContentIdsFromPlaylist
// [0x00420003] 
struct UOnlinePlaylistManager_execGetContentIdsFromPlaylist_Params
{
	int32_t                                            PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	TArray<int32_t>                                    ContentIds;                                       		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                            PlaylistIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.GetMapCycleFromPlaylist
// [0x00420003] 
struct UOnlinePlaylistManager_execGetMapCycleFromPlaylist_Params
{
	int32_t                                            PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FName>                               MapCycle;                                         		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                            PlaylistIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.GetUrlFromPlaylist
// [0x00020003] 
struct UOnlinePlaylistManager_execGetUrlFromPlaylist_Params
{
	int32_t                                            PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// int32_t                                            PlaylistIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.GetMatchType
// [0x00020003] 
struct UOnlinePlaylistManager_execGetMatchType_Params
{
	int32_t                                            PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            PlaylistIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.IsPlaylistArbitrated
// [0x00020003] 
struct UOnlinePlaylistManager_execIsPlaylistArbitrated_Params
{
	int32_t                                            PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            PlaylistIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.GetLoadBalanceIdFromPlaylist
// [0x00420003] 
struct UOnlinePlaylistManager_execGetLoadBalanceIdFromPlaylist_Params
{
	int32_t                                            PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            LoadBalanceId;                                    		// 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	// int32_t                                            PlaylistIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.GetTeamInfoFromPlaylist
// [0x00420003] 
struct UOnlinePlaylistManager_execGetTeamInfoFromPlaylist_Params
{
	int32_t                                            PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            TeamSize;                                         		// 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            TeamCount;                                        		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            MaxPartySize;                                     		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	// int32_t                                            PlaylistIndex;                                    		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.PlaylistSupportsDedicatedServers
// [0x00020003] 
struct UOnlinePlaylistManager_execPlaylistSupportsDedicatedServers_Params
{
	int32_t                                            PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            PlaylistIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.HasAnyGameSettings
// [0x00020003] 
struct UOnlinePlaylistManager_execHasAnyGameSettings_Params
{
	int32_t                                            PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            PlaylistIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]               
	// int32_t                                            GameIndex;                                        		// 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.GetGameSettings
// [0x00020003] 
struct UOnlinePlaylistManager_execGetGameSettings_Params
{
	int32_t                                            PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            GameSettingsId;                                   		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UOnlineGameSettings*                         ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            PlaylistIndex;                                    		// 0x0010 (0x0004) [0x0000000000000000]               
	// int32_t                                            GameIndex;                                        		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.FinalizePlaylistObjects
// [0x00020401] 
struct UOnlinePlaylistManager_execFinalizePlaylistObjects_Params
{
};

// Function IpDrv.OnlinePlaylistManager.OnReadTitleFileComplete
// [0x00020003] 
struct UOnlinePlaylistManager_execOnReadTitleFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UOnlineSubsystem*                            OnlineSub;                                        		// 0x0018 (0x0008) [0x0000000000000000]               
	// int32_t                                            FileIndex;                                        		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.ShouldRefreshPlaylists
// [0x00020401] 
struct UOnlinePlaylistManager_execShouldRefreshPlaylists_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlinePlaylistManager.DetermineFilesToDownload
// [0x00020401] 
struct UOnlinePlaylistManager_execDetermineFilesToDownload_Params
{
};

// Function IpDrv.OnlinePlaylistManager.DownloadPlaylist
// [0x00020003] 
struct UOnlinePlaylistManager_execDownloadPlaylist_Params
{
	// class UOnlineSubsystem*                            OnlineSub;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
	// int32_t                                            FileIndex;                                        		// 0x0008 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.OnReadPlaylistComplete
// [0x00120001] 
struct UOnlinePlaylistManager_execOnReadPlaylistComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.ClearMicroTxnResponseDelegate
// [0x00020000] 
struct UOnlinePurchaseInterfaceImpl_execClearMicroTxnResponseDelegate_Params
{
	struct FScriptDelegate                             ResponseMicroTxnDelegate;                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.AddMicroTxnResponseDelegate
// [0x00020000] 
struct UOnlinePurchaseInterfaceImpl_execAddMicroTxnResponseDelegate_Params
{
	struct FScriptDelegate                             ResponseMicroTxnDelegate;                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.OnMicroTxnResponse
// [0x00120001] 
struct UOnlinePurchaseInterfaceImpl_execOnMicroTxnResponse_Params
{
	uint32_t                                           bAuthorized : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint64_t                                           OrderId;                                          		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.FormatCurrency
// [0x00020002] 
struct UOnlinePurchaseInterfaceImpl_execFormatCurrency_Params
{
	class FString                                      Currency;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Price;                                            		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0018 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.GetAppPriceInfo
// [0x00420000] 
struct UOnlinePurchaseInterfaceImpl_execGetAppPriceInfo_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	TArray<struct FName>                               AppNames;                                         		// 0x0048 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                         		// 0x0058 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0070 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.EventGetAppPriceInfoComplete
// [0x00120001] 
struct UOnlinePurchaseInterfaceImpl_execEventGetAppPriceInfoComplete_Params
{
	struct FName                                       AppName;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Price;                                            		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      DiscountPrice;                                    		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            DiscountPercentage;                               		// 0x0028 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.PartyBeacon.OnDestroyComplete
// [0x00120001] 
struct UPartyBeacon_execOnDestroyComplete_Params
{
};

// Function IpDrv.PartyBeacon.DestroyBeacon
// [0x00020C00] 
struct UPartyBeacon_eventDestroyBeacon_Params
{
};

// Function IpDrv.PartyBeaconClient.DestroyBeacon
// [0x400020C00] 
struct UPartyBeaconClient_eventDestroyBeacon_Params
{
};

// Function IpDrv.PartyBeaconClient.CancelReservation
// [0x00020401] 
struct UPartyBeaconClient_execCancelReservation_Params
{
	struct FUniqueNetId                                CancellingPartyLeader;                            		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconClient.RequestReservationUpdate
// [0x00420401] 
struct UPartyBeaconClient_execRequestReservationUpdate_Params
{
	struct FOnlineGameSearchResult                     DesiredHost;                                      		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FUniqueNetId                                RequestingPartyLeader;                            		// 0x0010 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FPlayerReservation>                  PlayersToAdd;                                     		// 0x0058 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0068 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconClient.RequestReservation
// [0x00420401] 
struct UPartyBeaconClient_execRequestReservation_Params
{
	struct FOnlineGameSearchResult                     DesiredHost;                                      		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FUniqueNetId                                RequestingPartyLeader;                            		// 0x0010 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FPlayerReservation>                  Players;                                          		// 0x0058 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0068 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconClient.OnHostHasCancelled
// [0x00120001] 
struct UPartyBeaconClient_execOnHostHasCancelled_Params
{
};

// Function IpDrv.PartyBeaconClient.OnHostIsReady
// [0x00120001] 
struct UPartyBeaconClient_execOnHostIsReady_Params
{
};

// Function IpDrv.PartyBeaconClient.OnTravelRequestReceived
// [0x00120001] 
struct UPartyBeaconClient_execOnTravelRequestReceived_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      SearchClass;                                      		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            PlatformSpecificInfo[0x50];                       		// 0x0010 (0x0050) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.PartyBeaconClient.OnReservationCountUpdated
// [0x00120001] 
struct UPartyBeaconClient_execOnReservationCountUpdated_Params
{
	int32_t                                            ReservationRemaining;                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.PartyBeaconClient.OnReservationRequestComplete
// [0x00120001] 
struct UPartyBeaconClient_execOnReservationRequestComplete_Params
{
	uint8_t                                            ReservationResult;                                		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.PartyBeaconHost.GetMaxAvailableTeamSize
// [0x00020401] 
struct UPartyBeaconHost_execGetMaxAvailableTeamSize_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconHost.GetPartyLeaders
// [0x00420003] 
struct UPartyBeaconHost_execGetPartyLeaders_Params
{
	TArray<struct FUniqueNetId>                        PartyLeaders;                                     		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                            PartyIndex;                                       		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.PartyBeaconHost.GetPlayers
// [0x00C20003] 
struct UPartyBeaconHost_execGetPlayers_Params
{
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                            PlayerIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]               
	// int32_t                                            PartyIndex;                                       		// 0x0014 (0x0004) [0x0000000000000000]               
	// struct FPlayerReservation                          PlayerRes;                                        		// 0x0018 (0x0068) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.PartyBeaconHost.AppendReservationSkillsToSearch
// [0x00020401] 
struct UPartyBeaconHost_execAppendReservationSkillsToSearch_Params
{
	class UOnlineGameSearch*                           Search;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.PartyBeaconHost.UnregisterParty
// [0x00820803] 
struct UPartyBeaconHost_eventUnregisterParty_Params
{
	struct FUniqueNetId                                PartyLeader;                                      		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            PlayerIndex;                                      		// 0x0048 (0x0004) [0x0000000000000000]               
	// int32_t                                            PartyIndex;                                       		// 0x004C (0x0004) [0x0000000000000000]               
	// class UOnlineSubsystem*                            OnlineSub;                                        		// 0x0050 (0x0008) [0x0000000000000000]               
	// struct FPlayerReservation                          PlayerRes;                                        		// 0x0058 (0x0068) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.PartyBeaconHost.UnregisterPartyMembers
// [0x00820803] 
struct UPartyBeaconHost_eventUnregisterPartyMembers_Params
{
	// int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]               
	// int32_t                                            PartyIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]               
	// class UOnlineSubsystem*                            OnlineSub;                                        		// 0x0008 (0x0008) [0x0000000000000000]               
	// struct FPlayerReservation                          PlayerRes;                                        		// 0x0010 (0x0068) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.PartyBeaconHost.RegisterPartyMembers
// [0x00820803] 
struct UPartyBeaconHost_eventRegisterPartyMembers_Params
{
	// int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]               
	// int32_t                                            PartyIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]               
	// class UOnlineSubsystem*                            OnlineSub;                                        		// 0x0008 (0x0008) [0x0000000000000000]               
	// class UOnlineRecentPlayersList*                    PlayersList;                                      		// 0x0010 (0x0008) [0x0000000000000000]               
	// TArray<struct FUniqueNetId>                        Members;                                          		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FPlayerReservation                          PlayerRes;                                        		// 0x0028 (0x0068) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.PartyBeaconHost.AreReservationsFull
// [0x00020003] 
struct UPartyBeaconHost_execAreReservationsFull_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconHost.TellClientsHostHasCancelled
// [0x00020401] 
struct UPartyBeaconHost_execTellClientsHostHasCancelled_Params
{
};

// Function IpDrv.PartyBeaconHost.TellClientsHostIsReady
// [0x00020401] 
struct UPartyBeaconHost_execTellClientsHostIsReady_Params
{
};

// Function IpDrv.PartyBeaconHost.TellClientsToTravel
// [0x00020401] 
struct UPartyBeaconHost_execTellClientsToTravel_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      SearchClass;                                      		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            PlatformSpecificInfo[0x50];                       		// 0x0010 (0x0050) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.PartyBeaconHost.DestroyBeacon
// [0x400020C00] 
struct UPartyBeaconHost_eventDestroyBeacon_Params
{
};

// Function IpDrv.PartyBeaconHost.OnClientCancellationReceived
// [0x00120001] 
struct UPartyBeaconHost_execOnClientCancellationReceived_Params
{
	struct FUniqueNetId                                PartyLeader;                                      		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.PartyBeaconHost.OnReservationsFull
// [0x00120001] 
struct UPartyBeaconHost_execOnReservationsFull_Params
{
};

// Function IpDrv.PartyBeaconHost.OnReservationChange
// [0x00120001] 
struct UPartyBeaconHost_execOnReservationChange_Params
{
};

// Function IpDrv.PartyBeaconHost.HandlePlayerLogout
// [0x00020401] 
struct UPartyBeaconHost_execHandlePlayerLogout_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bMaintainParty : 1;                               		// 0x0048 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.PartyBeaconHost.GetExistingReservation
// [0x00420401] 
struct UPartyBeaconHost_execGetExistingReservation_Params
{
	struct FUniqueNetId                                PartyLeader;                                      		// 0x0000 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0048 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconHost.UpdatePartyReservationEntry
// [0x00420401] 
struct UPartyBeaconHost_execUpdatePartyReservationEntry_Params
{
	struct FUniqueNetId                                PartyLeader;                                      		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FPlayerReservation>                  PlayerMembers;                                    		// 0x0048 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	EPartyReservationResult                            ReturnValue;                                      		// 0x0058 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconHost.AddPartyReservationEntry
// [0x00420401] 
struct UPartyBeaconHost_execAddPartyReservationEntry_Params
{
	struct FUniqueNetId                                PartyLeader;                                      		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FPlayerReservation>                  PlayerMembers;                                    		// 0x0048 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            TeamNum;                                          		// 0x0058 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bIsHost : 1;                                      		// 0x005C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	EPartyReservationResult                            ReturnValue;                                      		// 0x0060 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconHost.InitHostBeacon
// [0x00024401] 
struct UPartyBeaconHost_execInitHostBeacon_Params
{
	int32_t                                            InNumTeams;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            InNumPlayersPerTeam;                              		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            InNumReservations;                                		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       InSessionName;                                    		// 0x000C (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            InForceTeamNum;                                   		// 0x0014 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconHost.PauseReservationRequests
// [0x00020401] 
struct UPartyBeaconHost_execPauseReservationRequests_Params
{
	uint32_t                                           bPause : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.WebRequest.GetHexDigit
// [0x00020003] 
struct UWebRequest_execGetHexDigit_Params
{
	class FString                                      D;                                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebRequest.DecodeFormData
// [0x00020003] 
struct UWebRequest_execDecodeFormData_Params
{
	class FString                                      Data;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                      Token[0x2];                                       		// 0x0010 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      ch;                                               		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0040 (0x0004) [0x0000000000000000]               
	// int32_t                                            H1;                                               		// 0x0044 (0x0004) [0x0000000000000000]               
	// int32_t                                            H2;                                               		// 0x0048 (0x0004) [0x0000000000000000]               
	// int32_t                                            Limit;                                            		// 0x004C (0x0004) [0x0000000000000000]               
	// int32_t                                            T;                                                		// 0x0050 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.WebRequest.ProcessHeaderString
// [0x00020003] 
struct UWebRequest_execProcessHeaderString_Params
{
	class FString                                      S;                                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.WebRequest.Dump
// [0x00020401] 
struct UWebRequest_execDump_Params
{
};

// Function IpDrv.WebRequest.GetVariables
// [0x00420401] 
struct UWebRequest_execGetVariables_Params
{
	TArray<class FString>                              varNames;                                         		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.GetVariableNumber
// [0x00024401] 
struct UWebRequest_execGetVariableNumber_Params
{
	class FString                                      VariableName;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Number;                                           		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      DefaultValue;                                     		// 0x0018 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0028 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.GetVariableCount
// [0x00020401] 
struct UWebRequest_execGetVariableCount_Params
{
	class FString                                      VariableName;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebRequest.GetVariable
// [0x00024401] 
struct UWebRequest_execGetVariable_Params
{
	class FString                                      VariableName;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      DefaultValue;                                     		// 0x0010 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0020 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.AddVariable
// [0x00020401] 
struct UWebRequest_execAddVariable_Params
{
	class FString                                      VariableName;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Value;                                            		// 0x0010 (0x0010) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.GetHeaders
// [0x00420401] 
struct UWebRequest_execGetHeaders_Params
{
	TArray<class FString>                              Headers;                                          		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.GetHeader
// [0x00024401] 
struct UWebRequest_execGetHeader_Params
{
	class FString                                      HeaderName;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      DefaultValue;                                     		// 0x0010 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0020 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.AddHeader
// [0x00020401] 
struct UWebRequest_execAddHeader_Params
{
	class FString                                      HeaderName;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Value;                                            		// 0x0010 (0x0010) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.EncodeBase64
// [0x00022401] 
struct UWebRequest_execEncodeBase64_Params
{
	class FString                                      Decoded;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.DecodeBase64
// [0x00022401] 
struct UWebRequest_execDecodeBase64_Params
{
	class FString                                      Encoded;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.SentResponse
// [0x00020003] 
struct UWebResponse_execSentResponse_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebResponse.SentText
// [0x00020003] 
struct UWebResponse_execSentText_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebResponse.Redirect
// [0x00020003] 
struct UWebResponse_execRedirect_Params
{
	class FString                                      URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.SendStandardHeaders
// [0x00024003] 
struct UWebResponse_execSendStandardHeaders_Params
{
	class FString                                      ContentType;                                      		// 0x0000 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bCache : 1;                                       		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function IpDrv.WebResponse.HTTPError
// [0x00024003] 
struct UWebResponse_execHTTPError_Params
{
	int32_t                                            ErrorNum;                                         		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Data;                                             		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.SendHeaders
// [0x00020003] 
struct UWebResponse_execSendHeaders_Params
{
	// class FString                                      hdr;                                              		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.AddHeader
// [0x00024003] 
struct UWebResponse_execAddHeader_Params
{
	class FString                                      Header;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bReplace : 1;                                     		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	// int32_t                                            I;                                                		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            Idx;                                              		// 0x0018 (0x0004) [0x0000000000000000]               
	// class FString                                      Part;                                             		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      Entry;                                            		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.HTTPHeader
// [0x00020003] 
struct UWebResponse_execHTTPHeader_Params
{
	class FString                                      Header;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.HttpResponse
// [0x00020003] 
struct UWebResponse_execHttpResponse_Params
{
	class FString                                      Header;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.FailAuthentication
// [0x00020003] 
struct UWebResponse_execFailAuthentication_Params
{
	class FString                                      Realm;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.SendCachedFile
// [0x00024003] 
struct UWebResponse_execSendCachedFile_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ContentType;                                      		// 0x0010 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebResponse.SendBinary
// [0x00020803] 
struct UWebResponse_eventSendBinary_Params
{
	int32_t                                            Count;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            B[0xFF];                                          		// 0x0004 (0x00FF) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.WebResponse.SendText
// [0x00024803] 
struct UWebResponse_eventSendText_Params
{
	class FString                                      Text;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bNoCRLF : 1;                                      		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function IpDrv.WebResponse.Dump
// [0x00020401] 
struct UWebResponse_execDump_Params
{
};

// Function IpDrv.WebResponse.GetHTTPExpiration
// [0x00024401] 
struct UWebResponse_execGetHTTPExpiration_Params
{
	int32_t                                            OffsetSeconds;                                    		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.LoadParsedUHTM
// [0x00020401] 
struct UWebResponse_execLoadParsedUHTM_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.IncludeBinaryFile
// [0x00020401] 
struct UWebResponse_execIncludeBinaryFile_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebResponse.IncludeUHTM
// [0x00020401] 
struct UWebResponse_execIncludeUHTM_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebResponse.ClearSubst
// [0x00020401] 
struct UWebResponse_execClearSubst_Params
{
};

// Function IpDrv.WebResponse.Subst
// [0x00024401] 
struct UWebResponse_execSubst_Params
{
	class FString                                      Variable;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Value;                                            		// 0x0010 (0x0010) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	uint32_t                                           bClear : 1;                                       		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function IpDrv.WebResponse.FileExists
// [0x00020401] 
struct UWebResponse_execFileExists_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetMatchTypeForPlaylistId
// [0x00020803] 
struct UUIDataStore_OnlinePlaylists_eventGetMatchTypeForPlaylistId_Params
{
	int32_t                                            PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetOnlinePlaylistProvider
// [0x00426003] 
struct UUIDataStore_OnlinePlaylists_execGetOnlinePlaylistProvider_Params
{
	struct FName                                       ProviderTag;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            PlaylistId;                                       		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ProviderIndex;                                    		// 0x000C (0x0004) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
	class UOnlinePlaylistProvider*                     ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UUIDataStore_OnlinePlaylists*                PlaylistDS;                                       		// 0x0018 (0x0008) [0x0000000000000000]               
	// TArray<class UUIResourceDataProvider*>             Providers;                                        		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UOnlinePlaylistProvider*                     OPP;                                              		// 0x0030 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetPlaylistProvider
// [0x00420401] 
struct UUIDataStore_OnlinePlaylists_execGetPlaylistProvider_Params
{
	struct FName                                       ProviderTag;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ProviderIndex;                                    		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UUIResourceDataProvider*                     out_Provider;                                     		// 0x0010 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetResourceProviders
// [0x00420401] 
struct UUIDataStore_OnlinePlaylists_execGetResourceProviders_Params
{
	struct FName                                       ProviderTag;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	TArray<class UUIResourceDataProvider*>             out_Providers;                                    		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.UIDataStore_OnlinePlaylists.Init
// [0x00020803] 
struct UUIDataStore_OnlinePlaylists_eventInit_Params
{
	// class UOnlineSubsystem*                            OnlineSub;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.WebApplication.PostQuery
// [0x00020001] 
struct UWebApplication_execPostQuery_Params
{
	class UWebRequest*                                 Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UWebResponse*                                Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.WebApplication.Query
// [0x00020000] 
struct UWebApplication_execQuery_Params
{
	class UWebRequest*                                 Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UWebResponse*                                Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.WebApplication.PreQuery
// [0x00020003] 
struct UWebApplication_execPreQuery_Params
{
	class UWebRequest*                                 Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UWebResponse*                                Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebApplication.CleanupApp
// [0x00020003] 
struct UWebApplication_execCleanupApp_Params
{
};

// Function IpDrv.WebApplication.Cleanup
// [0x00020001] 
struct UWebApplication_execCleanup_Params
{
};

// Function IpDrv.WebApplication.Init
// [0x00020000] 
struct UWebApplication_execInit_Params
{
};

// Function IpDrv.WebServer.GetApplication
// [0x00420003] 
struct AWebServer_execGetApplication_Params
{
	class FString                                      URI;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SubURI;                                           		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class UWebApplication*                             ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            I;                                                		// 0x0028 (0x0004) [0x0000000000000000]               
	// int32_t                                            L;                                                		// 0x002C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.WebServer.LostChild
// [0x400020802] 
struct AWebServer_eventLostChild_Params
{
	class AActor*                                      C;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.WebServer.GainedChild
// [0x400020802] 
struct AWebServer_eventGainedChild_Params
{
	class AActor*                                      C;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.WebServer.Destroyed
// [0x400020802] 
struct AWebServer_eventDestroyed_Params
{
	// int32_t                                            I;                                                		// 0x0000 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.WebServer.PostBeginPlay
// [0x400820002] 
struct AWebServer_execPostBeginPlay_Params
{
	// int32_t                                            I;                                                		// 0x0000 (0x0004) [0x0000000000000000]               
	// class UClass*                                      ApplicationClass;                                 		// 0x0008 (0x0008) [0x0000000000000000]               
	// struct FIpAddr                                     L;                                                		// 0x0010 (0x0014) [0x0000000000000000]               
	// class FString                                      S;                                                		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.HelloWeb.Query
// [0x400020802] 
struct UHelloWeb_eventQuery_Params
{
	class UWebRequest*                                 Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UWebResponse*                                Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                            I;                                                		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.HelloWeb.Init
// [0x400020002] 
struct UHelloWeb_execInit_Params
{
};

// Function IpDrv.ImageServer.Query
// [0x400020802] 
struct UImageServer_eventQuery_Params
{
	class UWebRequest*                                 Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UWebResponse*                                Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// class FString                                      Image;                                            		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpServiceConfig.GetUserAuthTicket
// [0x00020001] 
struct UMcpServiceConfig_execGetUserAuthTicket_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.UpdateChallengeUserReward
// [0x00020000] 
struct UMcpClashMobBase_execUpdateChallengeUserReward_Params
{
	class FString                                      UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            UserReward;                                       		// 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.McpClashMobBase.OnUpdateChallengeUserRewardComplete
// [0x00120001] 
struct UMcpClashMobBase_execOnUpdateChallengeUserRewardComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UniqueChallengeId;                                		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Error;                                            		// 0x0028 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.UpdateChallengeUserProgress
// [0x00020000] 
struct UMcpClashMobBase_execUpdateChallengeUserProgress_Params
{
	class FString                                      UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bDidComplete : 1;                                 		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	int32_t                                            GoalProgress;                                     		// 0x0024 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.McpClashMobBase.OnUpdateChallengeUserProgressComplete
// [0x00120001] 
struct UMcpClashMobBase_execOnUpdateChallengeUserProgressComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UniqueChallengeId;                                		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Error;                                            		// 0x0028 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.GetChallengeUserStatus
// [0x00420000] 
struct UMcpClashMobBase_execGetChallengeUserStatus_Params
{
	class FString                                      UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpClashMobChallengeUserStatus             OutChallengeUserStatus;                           		// 0x0020 (0x0090) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.QueryChallengeMultiUserStatus
// [0x00420000] 
struct UMcpClashMobBase_execQueryChallengeMultiUserStatus_Params
{
	class FString                                      UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<class FString>                              UserIdsToRead;                                    		// 0x0020 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.QueryChallengeUserStatus
// [0x00020000] 
struct UMcpClashMobBase_execQueryChallengeUserStatus_Params
{
	class FString                                      UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.OnQueryChallengeUserStatusComplete
// [0x00120001] 
struct UMcpClashMobBase_execOnQueryChallengeUserStatusComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UniqueChallengeId;                                		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Error;                                            		// 0x0028 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.AcceptChallenge
// [0x00020000] 
struct UMcpClashMobBase_execAcceptChallenge_Params
{
	class FString                                      UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.OnAcceptChallengeComplete
// [0x00120001] 
struct UMcpClashMobBase_execOnAcceptChallengeComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UniqueChallengeId;                                		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Error;                                            		// 0x0028 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.DeleteCachedChallengeFile
// [0x00020000] 
struct UMcpClashMobBase_execDeleteCachedChallengeFile_Params
{
	class FString                                      UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      DLName;                                           		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.ClearCachedChallengeFile
// [0x00020000] 
struct UMcpClashMobBase_execClearCachedChallengeFile_Params
{
	class FString                                      UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      DLName;                                           		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.GetChallengeFileContents
// [0x00420000] 
struct UMcpClashMobBase_execGetChallengeFileContents_Params
{
	class FString                                      UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      DLName;                                           		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    OutFileContents;                                  		// 0x0020 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.DownloadChallengeFile
// [0x00020000] 
struct UMcpClashMobBase_execDownloadChallengeFile_Params
{
	class FString                                      UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      DLName;                                           		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.GetChallengeFileList
// [0x00420000] 
struct UMcpClashMobBase_execGetChallengeFileList_Params
{
	class FString                                      UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FMcpClashMobChallengeFile>           OutChallengeFiles;                                		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.OnDownloadChallengeFileComplete
// [0x00120001] 
struct UMcpClashMobBase_execOnDownloadChallengeFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UniqueChallengeId;                                		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      DLName;                                           		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0028 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Error;                                            		// 0x0038 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.GetChallengeList
// [0x00420000] 
struct UMcpClashMobBase_execGetChallengeList_Params
{
	TArray<struct FMcpClashMobChallengeEvent>          OutChallengeEvents;                               		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.QueryChallengeList
// [0x00020000] 
struct UMcpClashMobBase_execQueryChallengeList_Params
{
};

// Function IpDrv.McpClashMobBase.OnQueryChallengeListComplete
// [0x00120001] 
struct UMcpClashMobBase_execOnQueryChallengeListComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.CreateInstance
// [0x00022003] 
struct UMcpClashMobBase_execCreateInstance_Params
{
	class UMcpClashMobBase*                            ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UClass*                                      McpClashMobBaseClass;                             		// 0x0008 (0x0008) [0x0000000000000000]               
	// class UMcpClashMobBase*                            NewInstance;                                      		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobFileDownload.GetUrlForFile
// [0x400020002] 
struct UMcpClashMobFileDownload_execGetUrlForFile_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// class FString                                      URL;                                              		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobManager.OnUpdateChallengeUserRewardHTTPRequestComplete
// [0x00040003] 
struct UMcpClashMobManager_execOnUpdateChallengeUserRewardHTTPRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class FString                                      UniqueChallengeId;                                		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      UniqueUserId;                                     		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      ErrorStr;                                         		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                           bResult : 1;                                      		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                            UserQueryIdx;                                     		// 0x004C (0x0004) [0x0000000000000000]               
	// int32_t                                            ChallengeQueryIdx;                                		// 0x0050 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.UpdateChallengeUserReward
// [0x400020002] 
struct UMcpClashMobManager_execUpdateChallengeUserReward_Params
{
	class FString                                      UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            UserReward;                                       		// 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class FString                                      URL;                                              		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      ErrorStr;                                         		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            ChallengeQueryIdx;                                		// 0x0048 (0x0004) [0x0000000000000000]               
	// int32_t                                            UserQueryIdx;                                     		// 0x004C (0x0004) [0x0000000000000000]               
	// uint32_t                                           bPending : 1;                                     		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UHttpRequestInterface*                       Request;                                          		// 0x0058 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.OnUpdateChallengeUserProgressHTTPRequestComplete
// [0x00040003] 
struct UMcpClashMobManager_execOnUpdateChallengeUserProgressHTTPRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class FString                                      UniqueChallengeId;                                		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      UniqueUserId;                                     		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      ErrorStr;                                         		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                           bResult : 1;                                      		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                            UserQueryIdx;                                     		// 0x004C (0x0004) [0x0000000000000000]               
	// int32_t                                            ChallengeQueryIdx;                                		// 0x0050 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.UpdateChallengeUserProgress
// [0x400020002] 
struct UMcpClashMobManager_execUpdateChallengeUserProgress_Params
{
	class FString                                      UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bDidComplete : 1;                                 		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	int32_t                                            GoalProgress;                                     		// 0x0024 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class FString                                      URL;                                              		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      ErrorStr;                                         		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            ChallengeQueryIdx;                                		// 0x0048 (0x0004) [0x0000000000000000]               
	// int32_t                                            UserQueryIdx;                                     		// 0x004C (0x0004) [0x0000000000000000]               
	// uint32_t                                           bPending : 1;                                     		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UHttpRequestInterface*                       Request;                                          		// 0x0058 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.GetChallengeUserStatus
// [0x400C20002] 
struct UMcpClashMobManager_execGetChallengeUserStatus_Params
{
	class FString                                      UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpClashMobChallengeUserStatus             OutChallengeUserStatus;                           		// 0x0020 (0x0090) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                            UserStatusIdx;                                    		// 0x00B0 (0x0004) [0x0000000000000000]               
	// struct FMcpClashMobChallengeUserStatus             DefaultStatus;                                    		// 0x00B8 (0x0090) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobManager.OnQueryChallengeMultiStatusHTTPRequestComplete
// [0x00040003] 
struct UMcpClashMobManager_execOnQueryChallengeMultiStatusHTTPRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class FString                                      JSONStr;                                          		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      UniqueChallengeId;                                		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      UniqueUserId;                                     		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      ErrorStr;                                         		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                           bResult : 1;                                      		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                            UserQueryIdx;                                     		// 0x005C (0x0004) [0x0000000000000000]               
	// int32_t                                            ChallengeQueryIdx;                                		// 0x0060 (0x0004) [0x0000000000000000]               
	// int32_t                                            UserStatusIdx;                                    		// 0x0064 (0x0004) [0x0000000000000000]               
	// int32_t                                            TempUserStatusIdx;                                		// 0x0068 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.QueryChallengeMultiUserStatus
// [0x400420002] 
struct UMcpClashMobManager_execQueryChallengeMultiUserStatus_Params
{
	class FString                                      UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<class FString>                              UserIdsToRead;                                    		// 0x0020 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// class FString                                      URL;                                              		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      ErrorStr;                                         		// 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      JSONStr;                                          		// 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            ChallengeQueryIdx;                                		// 0x0060 (0x0004) [0x0000000000000000]               
	// int32_t                                            UserQueryIdx;                                     		// 0x0064 (0x0004) [0x0000000000000000]               
	// int32_t                                            UserIdIdx;                                        		// 0x0068 (0x0004) [0x0000000000000000]               
	// uint32_t                                           bPending : 1;                                     		// 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	// class UHttpRequestInterface*                       Request;                                          		// 0x0070 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.OnQueryChallengeStatusHTTPRequestComplete
// [0x00040003] 
struct UMcpClashMobManager_execOnQueryChallengeStatusHTTPRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class FString                                      JSONStr;                                          		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      UniqueChallengeId;                                		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      UniqueUserId;                                     		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      ErrorStr;                                         		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                           bResult : 1;                                      		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                            UserQueryIdx;                                     		// 0x005C (0x0004) [0x0000000000000000]               
	// int32_t                                            ChallengeQueryIdx;                                		// 0x0060 (0x0004) [0x0000000000000000]               
	// int32_t                                            UserStatusIdx;                                    		// 0x0064 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.QueryChallengeUserStatus
// [0x400020002] 
struct UMcpClashMobManager_execQueryChallengeUserStatus_Params
{
	class FString                                      UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                      URL;                                              		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      ErrorStr;                                         		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            ChallengeQueryIdx;                                		// 0x0040 (0x0004) [0x0000000000000000]               
	// int32_t                                            UserQueryIdx;                                     		// 0x0044 (0x0004) [0x0000000000000000]               
	// uint32_t                                           bPending : 1;                                     		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UHttpRequestInterface*                       Request;                                          		// 0x0050 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.OnAcceptChallengeHTTPRequestComplete
// [0x00040003] 
struct UMcpClashMobManager_execOnAcceptChallengeHTTPRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class FString                                      UniqueChallengeId;                                		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      UniqueUserId;                                     		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      ErrorStr;                                         		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                           bResult : 1;                                      		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                            UserQueryIdx;                                     		// 0x004C (0x0004) [0x0000000000000000]               
	// int32_t                                            ChallengeQueryIdx;                                		// 0x0050 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.AcceptChallenge
// [0x400020002] 
struct UMcpClashMobManager_execAcceptChallenge_Params
{
	class FString                                      UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                      URL;                                              		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      ErrorStr;                                         		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            ChallengeQueryIdx;                                		// 0x0040 (0x0004) [0x0000000000000000]               
	// int32_t                                            UserQueryIdx;                                     		// 0x0044 (0x0004) [0x0000000000000000]               
	// uint32_t                                           bPending : 1;                                     		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UHttpRequestInterface*                       Request;                                          		// 0x0050 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.DeleteCachedChallengeFile
// [0x400020002] 
struct UMcpClashMobManager_execDeleteCachedChallengeFile_Params
{
	class FString                                      UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      DLName;                                           		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            ChallengeIdx;                                     		// 0x0020 (0x0004) [0x0000000000000000]               
	// int32_t                                            FileIdx;                                          		// 0x0024 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.ClearCachedChallengeFile
// [0x400020002] 
struct UMcpClashMobManager_execClearCachedChallengeFile_Params
{
	class FString                                      UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      DLName;                                           		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            ChallengeIdx;                                     		// 0x0020 (0x0004) [0x0000000000000000]               
	// int32_t                                            FileIdx;                                          		// 0x0024 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.GetChallengeFileContents
// [0x400420002] 
struct UMcpClashMobManager_execGetChallengeFileContents_Params
{
	class FString                                      UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      DLName;                                           		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    OutFileContents;                                  		// 0x0020 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                            ChallengeIdx;                                     		// 0x0030 (0x0004) [0x0000000000000000]               
	// int32_t                                            FileIdx;                                          		// 0x0034 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.OnDownloadMcpFileComplete
// [0x00020003] 
struct UMcpClashMobManager_execOnDownloadMcpFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      DLName;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// TArray<uint8_t>                                    FileContents;                                     		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            ChallengeIdx;                                     		// 0x0028 (0x0004) [0x0000000000000000]               
	// int32_t                                            FileIdx;                                          		// 0x002C (0x0004) [0x0000000000000000]               
	// class FString                                      Filename;                                         		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobManager.OnLoadCachedFileComplete
// [0x00040003] 
struct UMcpClashMobManager_execOnLoadCachedFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      DLName;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// uint32_t                                           bRequiresDownload : 1;                            		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// class FString                                      FileHashCache;                                    		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      FileHashChallenge;                                		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      Filename;                                         		// 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            ChallengeIdx;                                     		// 0x0050 (0x0004) [0x0000000000000000]               
	// int32_t                                            FileIdx;                                          		// 0x0054 (0x0004) [0x0000000000000000]               
	// TArray<uint8_t>                                    FileContents;                                     		// 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobManager.DownloadChallengeFile
// [0x400020002] 
struct UMcpClashMobManager_execDownloadChallengeFile_Params
{
	class FString                                      UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      DLName;                                           		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                      ErrorStr;                                         		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            ChallengeIdx;                                     		// 0x0030 (0x0004) [0x0000000000000000]               
	// int32_t                                            FileIdx;                                          		// 0x0034 (0x0004) [0x0000000000000000]               
	// uint32_t                                           bPending : 1;                                     		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpClashMobManager.GetChallengeFileList
// [0x400420002] 
struct UMcpClashMobManager_execGetChallengeFileList_Params
{
	class FString                                      UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FMcpClashMobChallengeFile>           OutChallengeFiles;                                		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                            ChallengeEventIdx;                                		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.GetChallengeList
// [0x400420002] 
struct UMcpClashMobManager_execGetChallengeList_Params
{
	TArray<struct FMcpClashMobChallengeEvent>          OutChallengeEvents;                               		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobManager.OnQueryChallengeListHTTPRequestComplete
// [0x00040003] 
struct UMcpClashMobManager_execOnQueryChallengeListHTTPRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class FString                                      JSONStr;                                          		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      ErrorStr;                                         		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                           bResult : 1;                                      		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpClashMobManager.QueryChallengeList
// [0x400020002] 
struct UMcpClashMobManager_execQueryChallengeList_Params
{
	// class FString                                      URL;                                              		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      ErrorStr;                                         		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                           bPending : 1;                                     		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpClashMobManager.Init
// [0x400020002] 
struct UMcpClashMobManager_execInit_Params
{
};

// Function IpDrv.McpGroupsBase.OnAcceptGroupInviteComplete
// [0x00120001] 
struct UMcpGroupsBase_execOnAcceptGroupInviteComplete_Params
{
	class FString                                      GroupId;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.AcceptGroupInvite
// [0x00020000] 
struct UMcpGroupsBase_execAcceptGroupInvite_Params
{
	class FString                                      UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GroupId;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bShouldAccept : 1;                                		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.McpGroupsBase.GetGroupInviteList
// [0x00420001] 
struct UMcpGroupsBase_execGetGroupInviteList_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpGroupList                               InviteList;                                       		// 0x0010 (0x0020) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnQueryGroupInvitesComplete
// [0x00120001] 
struct UMcpGroupsBase_execOnQueryGroupInvitesComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.QueryGroupInvites
// [0x00020001] 
struct UMcpGroupsBase_execQueryGroupInvites_Params
{
	class FString                                      UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnDeleteAllGroupsComplete
// [0x00120001] 
struct UMcpGroupsBase_execOnDeleteAllGroupsComplete_Params
{
	class FString                                      RequesterId;                                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.DeleteAllGroups
// [0x00020000] 
struct UMcpGroupsBase_execDeleteAllGroups_Params
{
	class FString                                      OwnerId;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnRemoveGroupMembersComplete
// [0x00120001] 
struct UMcpGroupsBase_execOnRemoveGroupMembersComplete_Params
{
	class FString                                      GroupId;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.RemoveGroupMembers
// [0x00420000] 
struct UMcpGroupsBase_execRemoveGroupMembers_Params
{
	class FString                                      OwnerId;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GroupId;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<class FString>                              MemberIds;                                        		// 0x0020 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnAddGroupMembersComplete
// [0x00120001] 
struct UMcpGroupsBase_execOnAddGroupMembersComplete_Params
{
	class FString                                      GroupId;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.AddGroupMembers
// [0x00420000] 
struct UMcpGroupsBase_execAddGroupMembers_Params
{
	class FString                                      OwnerId;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GroupId;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<class FString>                              MemberIds;                                        		// 0x0020 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           bRequiresAcceptance : 1;                          		// 0x0030 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.McpGroupsBase.GetGroupMembers
// [0x00420000] 
struct UMcpGroupsBase_execGetGroupMembers_Params
{
	class FString                                      GroupId;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FMcpGroupMember>                     GroupMembers;                                     		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnQueryGroupMembersComplete
// [0x00120001] 
struct UMcpGroupsBase_execOnQueryGroupMembersComplete_Params
{
	class FString                                      GroupId;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.QueryGroupMembers
// [0x00020000] 
struct UMcpGroupsBase_execQueryGroupMembers_Params
{
	class FString                                      UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GroupId;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.GetGroupList
// [0x00420000] 
struct UMcpGroupsBase_execGetGroupList_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpGroupList                               GroupList;                                        		// 0x0010 (0x0020) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnQueryGroupsComplete
// [0x00120001] 
struct UMcpGroupsBase_execOnQueryGroupsComplete_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.QueryGroups
// [0x00020000] 
struct UMcpGroupsBase_execQueryGroups_Params
{
	class FString                                      RequesterId;                                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnDeleteGroupComplete
// [0x00120001] 
struct UMcpGroupsBase_execOnDeleteGroupComplete_Params
{
	class FString                                      GroupId;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.DeleteGroup
// [0x00020000] 
struct UMcpGroupsBase_execDeleteGroup_Params
{
	class FString                                      UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GroupId;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnCreateGroupComplete
// [0x00120001] 
struct UMcpGroupsBase_execOnCreateGroupComplete_Params
{
	struct FMcpGroup                                   Group;                                            		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0048 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.CreateGroup
// [0x00020000] 
struct UMcpGroupsBase_execCreateGroup_Params
{
	class FString                                      OwnerId;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GroupName;                                        		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.CreateInstance
// [0x00022003] 
struct UMcpGroupsBase_execCreateInstance_Params
{
	class UMcpGroupsBase*                              ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UClass*                                      McpGroupsManagerClass;                            		// 0x0008 (0x0008) [0x0000000000000000]               
	// class UMcpGroupsBase*                              NewInstance;                                      		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.CacheGroupMember
// [0x00820003] 
struct UMcpGroupsManager_execCacheGroupMember_Params
{
	class FString                                      MemberId;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GroupId;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            AcceptState;                                      		// 0x0020 (0x0001) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                            MemberIndex;                                      		// 0x0024 (0x0004) [0x0000000000000000]               
	// struct FMcpGroupList                               GroupList;                                        		// 0x0028 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            GroupListIndex;                                   		// 0x0048 (0x0004) [0x0000000000000000]               
	// struct FMcpGroup                                   GroupTemp;                                        		// 0x0050 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            GroupIndex;                                       		// 0x0098 (0x0004) [0x0000000000000000]               
	// int32_t                                            AddAt;                                            		// 0x009C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.CacheGroup
// [0x00820003] 
struct UMcpGroupsManager_execCacheGroup_Params
{
	class FString                                      RequesterId;                                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpGroup                                   Group;                                            		// 0x0010 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            AddAt;                                            		// 0x0058 (0x0004) [0x0000000000000000]               
	// int32_t                                            GroupIndex;                                       		// 0x005C (0x0004) [0x0000000000000000]               
	// int32_t                                            GroupListIndex;                                   		// 0x0060 (0x0004) [0x0000000000000000]               
	// struct FMcpGroupList                               UserGroupList;                                    		// 0x0068 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                           bWasFound : 1;                                    		// 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpGroupsManager.OnAcceptGroupInviteRequestComplete
// [0x00120003] 
struct UMcpGroupsManager_execOnAcceptGroupInviteRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]               
	// class FString                                      Content;                                          		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      GroupId;                                          		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.AcceptGroupInvite
// [0x400020002] 
struct UMcpGroupsManager_execAcceptGroupInvite_Params
{
	class FString                                      UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GroupId;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bShouldAccept : 1;                                		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class FString                                      URL;                                              		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       AcceptGroupInviteRequest;                         		// 0x0038 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.OnDeleteAllGroupsRequestComplete
// [0x00020003] 
struct UMcpGroupsManager_execOnDeleteAllGroupsRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]               
	// class FString                                      Content;                                          		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      RequesterId;                                      		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.DeleteAllGroups
// [0x400020002] 
struct UMcpGroupsManager_execDeleteAllGroups_Params
{
	class FString                                      UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                      URL;                                              		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       DeleteGroupRequest;                               		// 0x0020 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.OnRemoveGroupMembersRequestComplete
// [0x00020003] 
struct UMcpGroupsManager_execOnRemoveGroupMembersRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]               
	// class FString                                      Content;                                          		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      GroupId;                                          		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.RemoveGroupMembers
// [0x400420002] 
struct UMcpGroupsManager_execRemoveGroupMembers_Params
{
	class FString                                      UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GroupId;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<class FString>                              MemberIds;                                        		// 0x0020 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// class FString                                      URL;                                              		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       RemoveGroupMembersRequest;                        		// 0x0040 (0x0008) [0x0000000000000000]               
	// class FString                                      JsonPayload;                                      		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            Index;                                            		// 0x0058 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.OnAddGroupMembersRequestComplete
// [0x00120003] 
struct UMcpGroupsManager_execOnAddGroupMembersRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]               
	// class FString                                      Content;                                          		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      GroupId;                                          		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.AddGroupMembers
// [0x400420002] 
struct UMcpGroupsManager_execAddGroupMembers_Params
{
	class FString                                      UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GroupId;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<class FString>                              MemberIds;                                        		// 0x0020 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           bRequiresAcceptance : 1;                          		// 0x0030 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class FString                                      URL;                                              		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       AddGroupMembersRequest;                           		// 0x0048 (0x0008) [0x0000000000000000]               
	// class FString                                      JsonPayload;                                      		// 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            Index;                                            		// 0x0060 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.GetGroupMembers
// [0x400C20002] 
struct UMcpGroupsManager_execGetGroupMembers_Params
{
	class FString                                      GroupId;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FMcpGroupMember>                     GroupMembers;                                     		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                            GroupIndex;                                       		// 0x0020 (0x0004) [0x0000000000000000]               
	// struct FMcpGroupList                               GroupList;                                        		// 0x0028 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FMcpGroup                                   GroupTemp;                                        		// 0x0048 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.OnQueryGroupMembersRequestComplete
// [0x00120003] 
struct UMcpGroupsManager_execOnQueryGroupMembersRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]               
	// class FString                                      Error;                                            		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      JsonString;                                       		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UJsonObject*                                 ParsedJson;                                       		// 0x0038 (0x0008) [0x0000000000000000]               
	// int32_t                                            JsonIndex;                                        		// 0x0040 (0x0004) [0x0000000000000000]               
	// uint8_t                                            AcceptState;                                      		// 0x0044 (0x0001) [0x0000000000000000]               
	// class FString                                      MemberId;                                         		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      GroupId;                                          		// 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.QueryGroupMembers
// [0x400020002] 
struct UMcpGroupsManager_execQueryGroupMembers_Params
{
	class FString                                      UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GroupId;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                      URL;                                              		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       QueryGroupMembersRequest;                         		// 0x0030 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.GetGroupList
// [0x400420002] 
struct UMcpGroupsManager_execGetGroupList_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpGroupList                               GroupList;                                        		// 0x0010 (0x0020) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                            GroupListIndex;                                   		// 0x0030 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.OnQueryGroupsRequestComplete
// [0x00920003] 
struct UMcpGroupsManager_execOnQueryGroupsRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]               
	// class FString                                      Error;                                            		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FMcpGroup                                   Group;                                            		// 0x0028 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      JsonString;                                       		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UJsonObject*                                 ParsedJson;                                       		// 0x0080 (0x0008) [0x0000000000000000]               
	// int32_t                                            JsonIndex;                                        		// 0x0088 (0x0004) [0x0000000000000000]               
	// class FString                                      RequesterId;                                      		// 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.QueryGroups
// [0x400020002] 
struct UMcpGroupsManager_execQueryGroups_Params
{
	class FString                                      RequesterId;                                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                      URL;                                              		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       QueryGroupsRequest;                               		// 0x0020 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.OnDeleteGroupRequestComplete
// [0x00020003] 
struct UMcpGroupsManager_execOnDeleteGroupRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]               
	// class FString                                      Content;                                          		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      GroupId;                                          		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.DeleteGroup
// [0x400020002] 
struct UMcpGroupsManager_execDeleteGroup_Params
{
	class FString                                      UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GroupId;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                      URL;                                              		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       DeleteGroupRequest;                               		// 0x0030 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.OnCreateGroupRequestComplete
// [0x00820003] 
struct UMcpGroupsManager_execOnCreateGroupRequestComplete_Params
{
	class UHttpRequestInterface*                       CreateGroupRequest;                               		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]               
	// class FString                                      Content;                                          		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FMcpGroup                                   CreatedGroup;                                     		// 0x0028 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      JsonString;                                       		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UJsonObject*                                 ParsedJson;                                       		// 0x0080 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.CreateGroup
// [0x400820002] 
struct UMcpGroupsManager_execCreateGroup_Params
{
	class FString                                      UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GroupName;                                        		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                      URL;                                              		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       CreateGroupRequest;                               		// 0x0030 (0x0008) [0x0000000000000000]               
	// struct FMcpGroup                                   FailedGroup;                                      		// 0x0038 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpIdMappingBase.GetIdMappings
// [0x00420000] 
struct UMcpIdMappingBase_execGetIdMappings_Params
{
	class FString                                      ExternalType;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FMcpIdMapping>                       IDMappings;                                       		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpIdMappingBase.OnQueryMappingsComplete
// [0x00120001] 
struct UMcpIdMappingBase_execOnQueryMappingsComplete_Params
{
	class FString                                      ExternalType;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpIdMappingBase.QueryMappings
// [0x00420000] 
struct UMcpIdMappingBase_execQueryMappings_Params
{
	TArray<class FString>                              ExternalIds;                                      		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      ExternalType;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpIdMappingBase.OnAddMappingComplete
// [0x00120001] 
struct UMcpIdMappingBase_execOnAddMappingComplete_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ExternalId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ExternalType;                                     		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0030 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0038 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpIdMappingBase.AddMapping
// [0x00020000] 
struct UMcpIdMappingBase_execAddMapping_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ExternalId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ExternalType;                                     		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpIdMappingBase.CreateInstance
// [0x00022003] 
struct UMcpIdMappingBase_execCreateInstance_Params
{
	class UMcpIdMappingBase*                           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UClass*                                      McpIdMappingBaseClass;                            		// 0x0008 (0x0008) [0x0000000000000000]               
	// class UMcpIdMappingBase*                           NewInstance;                                      		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpIdMappingManager.GetIdMappings
// [0x400420002] 
struct UMcpIdMappingManager_execGetIdMappings_Params
{
	class FString                                      ExternalType;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FMcpIdMapping>                       IDMappings;                                       		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                            Index;                                            		// 0x0020 (0x0004) [0x0000000000000000]               
	// int32_t                                            AddAt;                                            		// 0x0024 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpIdMappingManager.OnQueryMappingsRequestComplete
// [0x00020003] 
struct UMcpIdMappingManager_execOnQueryMappingsRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            AddAt;                                            		// 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                            ResponseCode;                                     		// 0x001C (0x0004) [0x0000000000000000]               
	// class FString                                      JsonString;                                       		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UJsonObject*                                 ParsedJson;                                       		// 0x0030 (0x0008) [0x0000000000000000]               
	// int32_t                                            JsonIndex;                                        		// 0x0038 (0x0004) [0x0000000000000000]               
	// int32_t                                            AccountIndex;                                     		// 0x003C (0x0004) [0x0000000000000000]               
	// uint32_t                                           bWasFound : 1;                                    		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	// class FString                                      McpId;                                            		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      ExternalId;                                       		// 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      ExternalType;                                     		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpIdMappingManager.QueryMappings
// [0x400420002] 
struct UMcpIdMappingManager_execQueryMappings_Params
{
	TArray<class FString>                              ExternalIds;                                      		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      ExternalType;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                      URL;                                              		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       Request;                                          		// 0x0030 (0x0008) [0x0000000000000000]               
	// int32_t                                            AddAt;                                            		// 0x0038 (0x0004) [0x0000000000000000]               
	// class FString                                      JsonPayload;                                      		// 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            Index;                                            		// 0x0050 (0x0004) [0x0000000000000000]               
	// uint32_t                                           bFirst : 1;                                       		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpIdMappingManager.OnAddMappingRequestComplete
// [0x00020003] 
struct UMcpIdMappingManager_execOnAddMappingRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            AddAt;                                            		// 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                            ResponseCode;                                     		// 0x001C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpIdMappingManager.AddMapping
// [0x400020002] 
struct UMcpIdMappingManager_execAddMapping_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ExternalId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ExternalType;                                     		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                      URL;                                              		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       Request;                                          		// 0x0040 (0x0008) [0x0000000000000000]               
	// int32_t                                            AddAt;                                            		// 0x0048 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpManagedValueManagerBase.OnDeleteValueComplete
// [0x00120001] 
struct UMcpManagedValueManagerBase_execOnDeleteValueComplete_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FName                                       ValueId;                                          		// 0x0020 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0028 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpManagedValueManagerBase.DeleteValue
// [0x00020000] 
struct UMcpManagedValueManagerBase_execDeleteValue_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FName                                       ValueId;                                          		// 0x0020 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.McpManagedValueManagerBase.OnUpdateValueComplete
// [0x00120001] 
struct UMcpManagedValueManagerBase_execOnUpdateValueComplete_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FName                                       ValueId;                                          		// 0x0020 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Value;                                            		// 0x0028 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x002C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpManagedValueManagerBase.UpdateValue
// [0x00020000] 
struct UMcpManagedValueManagerBase_execUpdateValue_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FName                                       ValueId;                                          		// 0x0020 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Value;                                            		// 0x0028 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.McpManagedValueManagerBase.GetValue
// [0x00020000] 
struct UMcpManagedValueManagerBase_execGetValue_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FName                                       ValueId;                                          		// 0x0020 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.McpManagedValueManagerBase.GetValues
// [0x00020000] 
struct UMcpManagedValueManagerBase_execGetValues_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FManagedValue>                       ReturnValue;                                      		// 0x0020 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpManagedValueManagerBase.OnReadSaveSlotComplete
// [0x00120001] 
struct UMcpManagedValueManagerBase_execOnReadSaveSlotComplete_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0028 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpManagedValueManagerBase.ReadSaveSlot
// [0x00020000] 
struct UMcpManagedValueManagerBase_execReadSaveSlot_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpManagedValueManagerBase.OnCreateSaveSlotComplete
// [0x00120001] 
struct UMcpManagedValueManagerBase_execOnCreateSaveSlotComplete_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0028 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpManagedValueManagerBase.CreateSaveSlot
// [0x00020000] 
struct UMcpManagedValueManagerBase_execCreateSaveSlot_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpManagedValueManagerBase.CreateInstance
// [0x00022003] 
struct UMcpManagedValueManagerBase_execCreateInstance_Params
{
	class UMcpManagedValueManagerBase*                 ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UClass*                                      McpManagedValueManagerBaseClass;                  		// 0x0008 (0x0008) [0x0000000000000000]               
	// class UMcpManagedValueManagerBase*                 NewInstance;                                      		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpManagedValueManager.OnDeleteValueRequestComplete
// [0x00020003] 
struct UMcpManagedValueManager_execOnDeleteValueRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                            SaveSlotIndex;                                    		// 0x001C (0x0004) [0x0000000000000000]               
	// int32_t                                            ValueIndex;                                       		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpManagedValueManager.DeleteValue
// [0x400020002] 
struct UMcpManagedValueManager_execDeleteValue_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FName                                       ValueId;                                          		// 0x0020 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// class FString                                      URL;                                              		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       Request;                                          		// 0x0038 (0x0008) [0x0000000000000000]               
	// int32_t                                            AddAt;                                            		// 0x0040 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpManagedValueManager.OnUpdateValueRequestComplete
// [0x00020003] 
struct UMcpManagedValueManager_execOnUpdateValueRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]               
	// class FString                                      ResponseString;                                   		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            UpdatedValue;                                     		// 0x0030 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpManagedValueManager.UpdateValue
// [0x400020002] 
struct UMcpManagedValueManager_execUpdateValue_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FName                                       ValueId;                                          		// 0x0020 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Value;                                            		// 0x0028 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class FString                                      URL;                                              		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       Request;                                          		// 0x0040 (0x0008) [0x0000000000000000]               
	// int32_t                                            AddAt;                                            		// 0x0048 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpManagedValueManager.GetValue
// [0x400020002] 
struct UMcpManagedValueManager_execGetValue_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FName                                       ValueId;                                          		// 0x0020 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            SaveSlotIndex;                                    		// 0x002C (0x0004) [0x0000000000000000]               
	// int32_t                                            ValueIndex;                                       		// 0x0030 (0x0004) [0x0000000000000000]               
	// int32_t                                            Value;                                            		// 0x0034 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpManagedValueManager.GetValues
// [0x400020002] 
struct UMcpManagedValueManager_execGetValues_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FManagedValue>                       ReturnValue;                                      		// 0x0020 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// int32_t                                            SaveSlotIndex;                                    		// 0x0030 (0x0004) [0x0000000000000000]               
	// TArray<struct FManagedValue>                       EmptyArray;                                       		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpManagedValueManager.OnReadSaveSlotRequestComplete
// [0x00020003] 
struct UMcpManagedValueManager_execOnReadSaveSlotRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]               
	// class FString                                      ResponseString;                                   		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpManagedValueManager.ReadSaveSlot
// [0x400020002] 
struct UMcpManagedValueManager_execReadSaveSlot_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                      URL;                                              		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       Request;                                          		// 0x0030 (0x0008) [0x0000000000000000]               
	// int32_t                                            AddAt;                                            		// 0x0038 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpManagedValueManager.ParseValuesForSaveSlot
// [0x00020003] 
struct UMcpManagedValueManager_execParseValuesForSaveSlot_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      JsonPayload;                                      		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UJsonObject*                                 ParsedJson;                                       		// 0x0030 (0x0008) [0x0000000000000000]               
	// int32_t                                            JsonIndex;                                        		// 0x0038 (0x0004) [0x0000000000000000]               
	// int32_t                                            SaveSlotIndex;                                    		// 0x003C (0x0004) [0x0000000000000000]               
	// int32_t                                            ManagedValueIndex;                                		// 0x0040 (0x0004) [0x0000000000000000]               
	// struct FName                                       ValueId;                                          		// 0x0044 (0x0008) [0x0000000000000000]               
	// int32_t                                            Value;                                            		// 0x004C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpManagedValueManager.FindSaveSlotIndex
// [0x00020003] 
struct UMcpManagedValueManager_execFindSaveSlotIndex_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            SaveSlotIndex;                                    		// 0x0024 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpManagedValueManager.OnCreateSaveSlotRequestComplete
// [0x00020003] 
struct UMcpManagedValueManager_execOnCreateSaveSlotRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]               
	// class FString                                      ResponseString;                                   		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpManagedValueManager.CreateSaveSlot
// [0x400020002] 
struct UMcpManagedValueManager_execCreateSaveSlot_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                      URL;                                              		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       Request;                                          		// 0x0030 (0x0008) [0x0000000000000000]               
	// int32_t                                            AddAt;                                            		// 0x0038 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpServerTimeBase.GetLastServerTime
// [0x00020000] 
struct UMcpServerTimeBase_execGetLastServerTime_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpServerTimeBase.OnQueryServerTimeComplete
// [0x00120001] 
struct UMcpServerTimeBase_execOnQueryServerTimeComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      DateTimeStr;                                      		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Error;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpServerTimeBase.QueryServerTime
// [0x00020000] 
struct UMcpServerTimeBase_execQueryServerTime_Params
{
};

// Function IpDrv.McpServerTimeBase.CreateInstance
// [0x00022003] 
struct UMcpServerTimeBase_execCreateInstance_Params
{
	class UMcpServerTimeBase*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UClass*                                      McpServerTimeBaseClass;                           		// 0x0008 (0x0008) [0x0000000000000000]               
	// class UMcpServerTimeBase*                          NewInstance;                                      		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpServerTimeManager.GetLastServerTime
// [0x400020002] 
struct UMcpServerTimeManager_execGetLastServerTime_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpServerTimeManager.OnQueryServerTimeHTTPRequestComplete
// [0x00040003] 
struct UMcpServerTimeManager_execOnQueryServerTimeHTTPRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class FString                                      TimeStr;                                          		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      ResponseStr;                                      		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      ErrorStr;                                         		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            Idx;                                              		// 0x0048 (0x0004) [0x0000000000000000]               
	// uint32_t                                           bResult : 1;                                      		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpServerTimeManager.QueryServerTime
// [0x400020002] 
struct UMcpServerTimeManager_execQueryServerTime_Params
{
	// class FString                                      URL;                                              		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      ErrorStr;                                         		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                           bPending : 1;                                     		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserInventoryBase.OnRecordIapComplete
// [0x00120001] 
struct UMcpUserInventoryBase_execOnRecordIapComplete_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<class FString>                              UpdatedItemIds;                                   		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0030 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0038 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.RecordIap
// [0x00020000] 
struct UMcpUserInventoryBase_execRecordIap_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Receipt;                                          		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.OnDeleteItemComplete
// [0x00120001] 
struct UMcpUserInventoryBase_execOnDeleteItemComplete_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0030 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0038 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.DeleteItem
// [0x00020000] 
struct UMcpUserInventoryBase_execDeleteItem_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            StoreVersion;                                     		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.McpUserInventoryBase.OnConsumeItemComplete
// [0x00120001] 
struct UMcpUserInventoryBase_execOnConsumeItemComplete_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<class FString>                              UpdatedItemIds;                                   		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0040 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0048 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.ConsumeItem
// [0x00020000] 
struct UMcpUserInventoryBase_execConsumeItem_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Quantity;                                         		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            StoreVersion;                                     		// 0x0034 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.McpUserInventoryBase.OnEarnItemComplete
// [0x00120001] 
struct UMcpUserInventoryBase_execOnEarnItemComplete_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GlobalItemId;                                     		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<class FString>                              UpdatedItemIds;                                   		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0040 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0048 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.EarnItem
// [0x00020000] 
struct UMcpUserInventoryBase_execEarnItem_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GlobalItemId;                                     		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Quantity;                                         		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            StoreVersion;                                     		// 0x0034 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.McpUserInventoryBase.OnSellItemComplete
// [0x00120001] 
struct UMcpUserInventoryBase_execOnSellItemComplete_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<class FString>                              UpdatedItemIds;                                   		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0040 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0048 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.SellItem
// [0x00424000] 
struct UMcpUserInventoryBase_execSellItem_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Quantity;                                         		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            StoreVersion;                                     		// 0x0034 (0x0004) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FMcpInventoryItemContainer>          ExpectedResultItems;                              		// 0x0038 (0x0010) [0x0000000000400192] (CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.OnPurchaseItemComplete
// [0x00120001] 
struct UMcpUserInventoryBase_execOnPurchaseItemComplete_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GlobalItemId;                                     		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<class FString>                              UpdatedItemIds;                                   		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0040 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0048 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.PurchaseItem
// [0x00020000] 
struct UMcpUserInventoryBase_execPurchaseItem_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GlobalItemId;                                     		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<class FString>                              PurchaseItemIds;                                  		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Quantity;                                         		// 0x0040 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            StoreVersion;                                     		// 0x0044 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Scalar;                                           		// 0x0048 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.McpUserInventoryBase.GetInventoryItem
// [0x00420000] 
struct UMcpUserInventoryBase_execGetInventoryItem_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpInventoryItem                           OutInventoryItem;                                 		// 0x0030 (0x0050) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0080 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.McpUserInventoryBase.GetInventoryItems
// [0x00420000] 
struct UMcpUserInventoryBase_execGetInventoryItems_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FMcpInventoryItem>                   OutInventoryItems;                                		// 0x0020 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.OnQueryInventoryItemsComplete
// [0x00120001] 
struct UMcpUserInventoryBase_execOnQueryInventoryItemsComplete_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0028 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.QueryInventoryItems
// [0x00020000] 
struct UMcpUserInventoryBase_execQueryInventoryItems_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.OnQuerySaveSlotListComplete
// [0x00120001] 
struct UMcpUserInventoryBase_execOnQuerySaveSlotListComplete_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.GetSaveSlotList
// [0x00020000] 
struct UMcpUserInventoryBase_execGetSaveSlotList_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<class FString>                              ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.QuerySaveSlotList
// [0x00020000] 
struct UMcpUserInventoryBase_execQuerySaveSlotList_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.OnDeleteSaveSlotComplete
// [0x00120001] 
struct UMcpUserInventoryBase_execOnDeleteSaveSlotComplete_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0028 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.DeleteSaveSlot
// [0x00020000] 
struct UMcpUserInventoryBase_execDeleteSaveSlot_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.OnCreateSaveSlotComplete
// [0x00120001] 
struct UMcpUserInventoryBase_execOnCreateSaveSlotComplete_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0028 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.CreateSaveSlot
// [0x00024000] 
struct UMcpUserInventoryBase_execCreateSaveSlot_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ParentSaveSlotId;                                 		// 0x0020 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.CreateInstance
// [0x00022003] 
struct UMcpUserInventoryBase_execCreateInstance_Params
{
	class UMcpUserInventoryBase*                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UClass*                                      McpUserInventoryBaseClass;                        		// 0x0008 (0x0008) [0x0000000000000000]               
	// class UMcpUserInventoryBase*                       NewInstance;                                      		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.OnRecordIapRequestComplete
// [0x00020003] 
struct UMcpUserInventoryManager_execOnRecordIapRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]               
	// class FString                                      ResponseString;                                   		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<class FString>                              UpdatedItemIds;                                   		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryManager.RecordIap
// [0x400020002] 
struct UMcpUserInventoryManager_execRecordIap_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Receipt;                                          		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                      URL;                                              		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       Request;                                          		// 0x0040 (0x0008) [0x0000000000000000]               
	// int32_t                                            AddAt;                                            		// 0x0048 (0x0004) [0x0000000000000000]               
	// int32_t                                            ExistingIndex;                                    		// 0x004C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.OnDeleteItemRequestComplete
// [0x00020003] 
struct UMcpUserInventoryManager_execOnDeleteItemRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            SaveSlotIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                            ItemIndex;                                        		// 0x001C (0x0004) [0x0000000000000000]               
	// int32_t                                            ResponseCode;                                     		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.DeleteItem
// [0x400020002] 
struct UMcpUserInventoryManager_execDeleteItem_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            StoreVersion;                                     		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class FString                                      URL;                                              		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       Request;                                          		// 0x0048 (0x0008) [0x0000000000000000]               
	// int32_t                                            AddAt;                                            		// 0x0050 (0x0004) [0x0000000000000000]               
	// int32_t                                            ExistingIndex;                                    		// 0x0054 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.OnConsumeItemRequestComplete
// [0x00020003] 
struct UMcpUserInventoryManager_execOnConsumeItemRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]               
	// class FString                                      ResponseString;                                   		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<class FString>                              UpdatedItemIds;                                   		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryManager.ConsumeItem
// [0x400020002] 
struct UMcpUserInventoryManager_execConsumeItem_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Quantity;                                         		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            StoreVersion;                                     		// 0x0034 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class FString                                      URL;                                              		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       Request;                                          		// 0x0048 (0x0008) [0x0000000000000000]               
	// int32_t                                            AddAt;                                            		// 0x0050 (0x0004) [0x0000000000000000]               
	// int32_t                                            ExistingIndex;                                    		// 0x0054 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.OnEarnItemRequestComplete
// [0x00020003] 
struct UMcpUserInventoryManager_execOnEarnItemRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]               
	// class FString                                      ResponseString;                                   		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<class FString>                              UpdatedItemIds;                                   		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryManager.EarnItem
// [0x400020002] 
struct UMcpUserInventoryManager_execEarnItem_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GlobalItemId;                                     		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Quantity;                                         		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            StoreVersion;                                     		// 0x0034 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class FString                                      URL;                                              		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       Request;                                          		// 0x0048 (0x0008) [0x0000000000000000]               
	// int32_t                                            AddAt;                                            		// 0x0050 (0x0004) [0x0000000000000000]               
	// int32_t                                            ExistingIndex;                                    		// 0x0054 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.OnSellItemRequestComplete
// [0x00020003] 
struct UMcpUserInventoryManager_execOnSellItemRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            SaveSlotIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                            UpdatedItemIdIndex;                               		// 0x001C (0x0004) [0x0000000000000000]               
	// int32_t                                            FoundItemIndex;                                   		// 0x0020 (0x0004) [0x0000000000000000]               
	// int32_t                                            ResponseCode;                                     		// 0x0024 (0x0004) [0x0000000000000000]               
	// class FString                                      ResponseString;                                   		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<class FString>                              UpdatedItemIds;                                   		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryManager.SellItem
// [0x400424002] 
struct UMcpUserInventoryManager_execSellItem_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Quantity;                                         		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            StoreVersion;                                     		// 0x0034 (0x0004) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FMcpInventoryItemContainer>          ExpectedResultItems;                              		// 0x0038 (0x0010) [0x0000000000400192] (CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// class FString                                      URL;                                              		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      expectedResultsItemsJson;                         		// 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       Request;                                          		// 0x0068 (0x0008) [0x0000000000000000]               
	// int32_t                                            AddAt;                                            		// 0x0070 (0x0004) [0x0000000000000000]               
	// int32_t                                            ExistingIndex;                                    		// 0x0074 (0x0004) [0x0000000000000000]               
	// int32_t                                            Index;                                            		// 0x0078 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.OnPurchaseItemRequestComplete
// [0x00020003] 
struct UMcpUserInventoryManager_execOnPurchaseItemRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            SaveSlotIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                            UpdatedItemIdIndex;                               		// 0x001C (0x0004) [0x0000000000000000]               
	// int32_t                                            FoundItemIndex;                                   		// 0x0020 (0x0004) [0x0000000000000000]               
	// int32_t                                            ResponseCode;                                     		// 0x0024 (0x0004) [0x0000000000000000]               
	// class FString                                      ResponseString;                                   		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<class FString>                              UpdatedItemIds;                                   		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryManager.PurchaseItem
// [0x400020002] 
struct UMcpUserInventoryManager_execPurchaseItem_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GlobalItemId;                                     		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<class FString>                              PurchaseItemIds;                                  		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Quantity;                                         		// 0x0040 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            StoreVersion;                                     		// 0x0044 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Scalar;                                           		// 0x0048 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class FString                                      URL;                                              		// 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      paymentItemsJson;                                 		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       Request;                                          		// 0x0070 (0x0008) [0x0000000000000000]               
	// int32_t                                            AddAt;                                            		// 0x0078 (0x0004) [0x0000000000000000]               
	// int32_t                                            ExistingIndex;                                    		// 0x007C (0x0004) [0x0000000000000000]               
	// int32_t                                            Index;                                            		// 0x0080 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.FindItemRequest
// [0x00420003] 
struct UMcpUserInventoryManager_execFindItemRequest_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ItemID;                                           		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FInventoryItemRequestState>          InItemRequests;                                   		// 0x0030 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0040 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            Index;                                            		// 0x0044 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.FindSaveSlotRequest
// [0x00420003] 
struct UMcpUserInventoryManager_execFindSaveSlotRequest_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState> InSaveSlotRequests;                               		// 0x0020 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0030 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            Index;                                            		// 0x0034 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.FindSaveSlotIndex
// [0x00020003] 
struct UMcpUserInventoryManager_execFindSaveSlotIndex_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            SaveSlotIndex;                                    		// 0x0024 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.ParseSaveSlotList
// [0x00020003] 
struct UMcpUserInventoryManager_execParseSaveSlotList_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      JsonPayload;                                      		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UJsonObject*                                 ParsedJson;                                       		// 0x0020 (0x0008) [0x0000000000000000]               
	// int32_t                                            JsonIndex;                                        		// 0x0028 (0x0004) [0x0000000000000000]               
	// int32_t                                            SaveSlotIndex;                                    		// 0x002C (0x0004) [0x0000000000000000]               
	// class FString                                      SaveSlotId;                                       		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryManager.ParseInventoryForSaveSlot
// [0x00020003] 
struct UMcpUserInventoryManager_execParseInventoryForSaveSlot_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      JsonPayload;                                      		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<class FString>                              ReturnValue;                                      		// 0x0030 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// class UJsonObject*                                 ParsedJson;                                       		// 0x0040 (0x0008) [0x0000000000000000]               
	// class UJsonObject*                                 ParsedJsonAttrs;                                  		// 0x0048 (0x0008) [0x0000000000000000]               
	// int32_t                                            JsonIndex;                                        		// 0x0050 (0x0004) [0x0000000000000000]               
	// int32_t                                            SaveSlotIndex;                                    		// 0x0054 (0x0004) [0x0000000000000000]               
	// int32_t                                            ItemIndex;                                        		// 0x0058 (0x0004) [0x0000000000000000]               
	// int32_t                                            JsonAttrsIndex;                                   		// 0x005C (0x0004) [0x0000000000000000]               
	// class FString                                      GlobalItemId;                                     		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      InstanceItemId;                                   		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<class FString>                              UpdatedItemIds;                                   		// 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<class UJsonObject*>                         ObjectArray;                                      		// 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryManager.GetInventoryItem
// [0x400420002] 
struct UMcpUserInventoryManager_execGetInventoryItem_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpInventoryItem                           OutInventoryItem;                                 		// 0x0030 (0x0050) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0080 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            SaveSlotIndex;                                    		// 0x0084 (0x0004) [0x0000000000000000]               
	// int32_t                                            ItemIndex;                                        		// 0x0088 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.GetInventoryItems
// [0x400420002] 
struct UMcpUserInventoryManager_execGetInventoryItems_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FMcpInventoryItem>                   OutInventoryItems;                                		// 0x0020 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                            SaveSlotIndex;                                    		// 0x0030 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.OnQueryInventoryItemsRequestComplete
// [0x00020003] 
struct UMcpUserInventoryManager_execOnQueryInventoryItemsRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            SaveSlotIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                            ResponseCode;                                     		// 0x001C (0x0004) [0x0000000000000000]               
	// class FString                                      ResponseString;                                   		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryManager.QueryInventoryItems
// [0x400020002] 
struct UMcpUserInventoryManager_execQueryInventoryItems_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                      URL;                                              		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       Request;                                          		// 0x0030 (0x0008) [0x0000000000000000]               
	// int32_t                                            AddAt;                                            		// 0x0038 (0x0004) [0x0000000000000000]               
	// int32_t                                            ExistingIndex;                                    		// 0x003C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.GetSaveSlotList
// [0x400020002] 
struct UMcpUserInventoryManager_execGetSaveSlotList_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<class FString>                              ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// TArray<class FString>                              OutSaveSlots;                                     		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            SaveSlotIndex;                                    		// 0x0030 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.OnQuerySaveSlotListRequestComplete
// [0x00020003] 
struct UMcpUserInventoryManager_execOnQuerySaveSlotListRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]               
	// class FString                                      ResponseString;                                   		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryManager.QuerySaveSlotList
// [0x400020002] 
struct UMcpUserInventoryManager_execQuerySaveSlotList_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                      URL;                                              		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       Request;                                          		// 0x0020 (0x0008) [0x0000000000000000]               
	// int32_t                                            AddAt;                                            		// 0x0028 (0x0004) [0x0000000000000000]               
	// int32_t                                            ExistingIndex;                                    		// 0x002C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.OnDeleteSaveSlotRequestComplete
// [0x00020003] 
struct UMcpUserInventoryManager_execOnDeleteSaveSlotRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            SaveSlotIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                            ResponseCode;                                     		// 0x001C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.DeleteSaveSlot
// [0x400020002] 
struct UMcpUserInventoryManager_execDeleteSaveSlot_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                      URL;                                              		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       Request;                                          		// 0x0030 (0x0008) [0x0000000000000000]               
	// int32_t                                            AddAt;                                            		// 0x0038 (0x0004) [0x0000000000000000]               
	// int32_t                                            ExistingIndex;                                    		// 0x003C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.OnCreateSaveSlotRequestComplete
// [0x00020003] 
struct UMcpUserInventoryManager_execOnCreateSaveSlotRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            SaveSlotIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                            ResponseCode;                                     		// 0x001C (0x0004) [0x0000000000000000]               
	// class FString                                      ResponseString;                                   		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryManager.CreateSaveSlot
// [0x400024002] 
struct UMcpUserInventoryManager_execCreateSaveSlot_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ParentSaveSlotId;                                 		// 0x0020 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	// class FString                                      URL;                                              		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       Request;                                          		// 0x0040 (0x0008) [0x0000000000000000]               
	// int32_t                                            AddAt;                                            		// 0x0048 (0x0004) [0x0000000000000000]               
	// int32_t                                            ExistingIndex;                                    		// 0x004C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserManagerBase.OnDeleteUserComplete
// [0x00120001] 
struct UMcpUserManagerBase_execOnDeleteUserComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.DeleteUser
// [0x00020000] 
struct UMcpUserManagerBase_execDeleteUser_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.GetUser
// [0x00420000] 
struct UMcpUserManagerBase_execGetUser_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpUserStatus                              User;                                             		// 0x0010 (0x0068) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0078 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.McpUserManagerBase.GetUsers
// [0x00420000] 
struct UMcpUserManagerBase_execGetUsers_Params
{
	TArray<struct FMcpUserStatus>                      Users;                                            		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.OnQueryUsersComplete
// [0x00120001] 
struct UMcpUserManagerBase_execOnQueryUsersComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.QueryUsers
// [0x00420000] 
struct UMcpUserManagerBase_execQueryUsers_Params
{
	TArray<class FString>                              McpIds;                                           		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.QueryUser
// [0x00024000] 
struct UMcpUserManagerBase_execQueryUser_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bShouldUpdateLastActive : 1;                      		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function IpDrv.McpUserManagerBase.OnAuthenticateUserComplete
// [0x00120001] 
struct UMcpUserManagerBase_execOnAuthenticateUserComplete_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Token;                                            		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0028 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.AuthenticateUserMcp
// [0x00020000] 
struct UMcpUserManagerBase_execAuthenticateUserMcp_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ClientSecret;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UDID;                                             		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.AuthenticateUserFacebook
// [0x00020000] 
struct UMcpUserManagerBase_execAuthenticateUserFacebook_Params
{
	class FString                                      FacebookId;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      FacebookToken;                                    		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UDID;                                             		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.OnRegisterUserComplete
// [0x00120001] 
struct UMcpUserManagerBase_execOnRegisterUserComplete_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.RegisterUserFacebook
// [0x00020000] 
struct UMcpUserManagerBase_execRegisterUserFacebook_Params
{
	class FString                                      FacebookId;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      FacebookAuthToken;                                		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.RegisterUserGenerated
// [0x00020000] 
struct UMcpUserManagerBase_execRegisterUserGenerated_Params
{
};

// Function IpDrv.McpUserManagerBase.CreateInstance
// [0x00022003] 
struct UMcpUserManagerBase_execCreateInstance_Params
{
	class UMcpUserManagerBase*                         ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UClass*                                      McpUserManagerBaseClass;                          		// 0x0008 (0x0008) [0x0000000000000000]               
	// class UMcpUserManagerBase*                         NewInstance;                                      		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpUserManager.OnDeleteUserRequestComplete
// [0x00020003] 
struct UMcpUserManager_execOnDeleteUserRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            UserIndex;                                        		// 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                            ResponseCode;                                     		// 0x001C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserManager.DeleteUser
// [0x400020002] 
struct UMcpUserManager_execDeleteUser_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                      URL;                                              		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       Request;                                          		// 0x0020 (0x0008) [0x0000000000000000]               
	// int32_t                                            AddAt;                                            		// 0x0028 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserManager.GetUser
// [0x400420002] 
struct UMcpUserManager_execGetUser_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpUserStatus                              User;                                             		// 0x0010 (0x0068) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0078 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            UserIndex;                                        		// 0x007C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserManager.GetUsers
// [0x400420002] 
struct UMcpUserManager_execGetUsers_Params
{
	TArray<struct FMcpUserStatus>                      Users;                                            		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManager.OnQueryUsersRequestComplete
// [0x00020003] 
struct UMcpUserManager_execOnQueryUsersRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]               
	// class FString                                      ResponseString;                                   		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManager.ParseUsers
// [0x00080003] 
struct UMcpUserManager_execParseUsers_Params
{
	class FString                                      JsonPayload;                                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UJsonObject*                                 ParsedJson;                                       		// 0x0010 (0x0008) [0x0000000000000000]               
	// int32_t                                            JsonIndex;                                        		// 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                            UserIndex;                                        		// 0x001C (0x0004) [0x0000000000000000]               
	// class FString                                      McpId;                                            		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManager.QueryUsers
// [0x400420002] 
struct UMcpUserManager_execQueryUsers_Params
{
	TArray<class FString>                              McpIds;                                           		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// class FString                                      URL;                                              		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       Request;                                          		// 0x0020 (0x0008) [0x0000000000000000]               
	// int32_t                                            AddAt;                                            		// 0x0028 (0x0004) [0x0000000000000000]               
	// class FString                                      JsonPayload;                                      		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            Index;                                            		// 0x0040 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserManager.OnQueryUserRequestComplete
// [0x00020003] 
struct UMcpUserManager_execOnQueryUserRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                            UserIndex;                                        		// 0x001C (0x0004) [0x0000000000000000]               
	// class FString                                      ResponseString;                                   		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManager.QueryUser
// [0x400024002] 
struct UMcpUserManager_execQueryUser_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bShouldUpdateLastActive : 1;                      		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	// class FString                                      URL;                                              		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       Request;                                          		// 0x0028 (0x0008) [0x0000000000000000]               
	// int32_t                                            AddAt;                                            		// 0x0030 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserManager.OnAuthenticateUserRequestComplete
// [0x00020003] 
struct UMcpUserManager_execOnAuthenticateUserRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                            UserIndex;                                        		// 0x001C (0x0004) [0x0000000000000000]               
	// class FString                                      ResponseString;                                   		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      McpId;                                            		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      Ticket;                                           		// 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManager.AuthenticateUserMcp
// [0x400020002] 
struct UMcpUserManager_execAuthenticateUserMcp_Params
{
	class FString                                      McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ClientSecret;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UDID;                                             		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                      URL;                                              		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       Request;                                          		// 0x0040 (0x0008) [0x0000000000000000]               
	// int32_t                                            AddAt;                                            		// 0x0048 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserManager.AuthenticateUserFacebook
// [0x400020002] 
struct UMcpUserManager_execAuthenticateUserFacebook_Params
{
	class FString                                      FacebookId;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      FacebookToken;                                    		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UDID;                                             		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                      URL;                                              		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       Request;                                          		// 0x0040 (0x0008) [0x0000000000000000]               
	// int32_t                                            AddAt;                                            		// 0x0048 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserManager.OnRegisterUserRequestComplete
// [0x00020003] 
struct UMcpUserManager_execOnRegisterUserRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                            UserIndex;                                        		// 0x001C (0x0004) [0x0000000000000000]               
	// class FString                                      ResponseString;                                   		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      McpId;                                            		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManager.ParseUser
// [0x00080003] 
struct UMcpUserManager_execParseUser_Params
{
	class FString                                      JsonPayload;                                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UJsonObject*                                 ParsedJson;                                       		// 0x0018 (0x0008) [0x0000000000000000]               
	// int32_t                                            UserIndex;                                        		// 0x0020 (0x0004) [0x0000000000000000]               
	// class FString                                      McpId;                                            		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManager.RegisterUserFacebook
// [0x400020002] 
struct UMcpUserManager_execRegisterUserFacebook_Params
{
	class FString                                      FacebookId;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      FacebookAuthToken;                                		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                      URL;                                              		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       Request;                                          		// 0x0030 (0x0008) [0x0000000000000000]               
	// int32_t                                            AddAt;                                            		// 0x0038 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserManager.RegisterUserGenerated
// [0x400020002] 
struct UMcpUserManager_execRegisterUserGenerated_Params
{
	// class FString                                      URL;                                              		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                       Request;                                          		// 0x0010 (0x0008) [0x0000000000000000]               
	// int32_t                                            AddAt;                                            		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.WebConnection.IsHanging
// [0x00020003] 
struct AWebConnection_execIsHanging_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebConnection.Cleanup
// [0x00020003] 
struct AWebConnection_execCleanup_Params
{
};

// Function IpDrv.WebConnection.CheckRawBytes
// [0x00020003] 
struct AWebConnection_execCheckRawBytes_Params
{
};

// Function IpDrv.WebConnection.EndOfHeaders
// [0x00020003] 
struct AWebConnection_execEndOfHeaders_Params
{
};

// Function IpDrv.WebConnection.CreateResponseObject
// [0x00020003] 
struct AWebConnection_execCreateResponseObject_Params
{
	// int32_t                                            I;                                                		// 0x0000 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.WebConnection.ProcessPost
// [0x00020003] 
struct AWebConnection_execProcessPost_Params
{
	class FString                                      S;                                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.WebConnection.ProcessGet
// [0x00020003] 
struct AWebConnection_execProcessGet_Params
{
	class FString                                      S;                                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.WebConnection.ProcessHead
// [0x00020003] 
struct AWebConnection_execProcessHead_Params
{
	class FString                                      S;                                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebConnection.ReceivedLine
// [0x400020002] 
struct AWebConnection_execReceivedLine_Params
{
	class FString                                      S;                                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebConnection.ReceivedText
// [0x400020802] 
struct AWebConnection_eventReceivedText_Params
{
	class FString                                      Text;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0010 (0x0004) [0x0000000000000000]               
	// class FString                                      S;                                                		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.WebConnection.Timer
// [0x400020802] 
struct AWebConnection_eventTimer_Params
{
};

// Function IpDrv.WebConnection.Closed
// [0x400020802] 
struct AWebConnection_eventClosed_Params
{
};

// Function IpDrv.WebConnection.Accepted
// [0x400020802] 
struct AWebConnection_eventAccepted_Params
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
