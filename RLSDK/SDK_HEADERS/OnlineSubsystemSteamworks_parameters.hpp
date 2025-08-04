/*
#############################################################################################
# RocketLeague (1.0.10897.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_parameters.hpp
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

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.RequestAuthTicket
// [0x400020400] 
struct UOnlineAuthInterfaceSteamworks_execRequestAuthTicket_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                         		// 0x0048 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0060 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.RequiresAuthTicket
// [0x400020002] 
struct UOnlineAuthInterfaceSteamworks_execRequiresAuthTicket_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerAddr
// [0x400420400] 
struct UOnlineAuthInterfaceSteamworks_execGetServerAddr_Params
{
	struct FIpAddr                                     OutServerIP;                                      		// 0x0000 (0x0014) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            OutServerPort;                                    		// 0x0014 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerUniqueId
// [0x400420400] 
struct UOnlineAuthInterfaceSteamworks_execGetServerUniqueId_Params
{
	struct FUniqueNetId                                OutServerUID;                                     		// 0x0000 (0x0048) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyServerAuthSession
// [0x400020400] 
struct UOnlineAuthInterfaceSteamworks_execVerifyServerAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                        		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     ServerIP;                                         		// 0x0048 (0x0014) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            AuthTicketUID;                                    		// 0x005C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0060 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateServerAuthSession
// [0x400420400] 
struct UOnlineAuthInterfaceSteamworks_execCreateServerAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                        		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     ClientIP;                                         		// 0x0048 (0x0014) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ClientPort;                                       		// 0x005C (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            OutAuthTicketUID;                                 		// 0x0060 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0064 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyClientAuthSession
// [0x400020400] 
struct UOnlineAuthInterfaceSteamworks_execVerifyClientAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                        		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     ClientIP;                                         		// 0x0048 (0x0014) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ClientPort;                                       		// 0x005C (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            AuthTicketUID;                                    		// 0x0060 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0064 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateClientAuthSession
// [0x400420400] 
struct UOnlineAuthInterfaceSteamworks_execCreateClientAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                        		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     ServerIP;                                         		// 0x0048 (0x0014) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ServerPort;                                       		// 0x005C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bSecure : 1;                                      		// 0x0060 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	int32_t                                            OutAuthTicketUID;                                 		// 0x0064 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0068 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendServerAuthRequest
// [0x400020400] 
struct UOnlineAuthInterfaceSteamworks_execSendServerAuthRequest_Params
{
	struct FUniqueNetId                                ServerUID;                                        		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendClientAuthRequest
// [0x400020400] 
struct UOnlineAuthInterfaceSteamworks_execSendClientAuthRequest_Params
{
	class UPlayer*                                     ClientConnection;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                ClientUID;                                        		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.UpdateWorkshopItemUploadProgress
// [0x00020401] 
struct UOnlineCommunityContentInterfaceSteamworks_execUpdateWorkshopItemUploadProgress_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.DownloadAllWorkshopData
// [0x00020401] 
struct UOnlineCommunityContentInterfaceSteamworks_execDownloadAllWorkshopData_Params
{
	struct FScriptDelegate                             Callback;                                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.CreateWorkshopItem
// [0x00020401] 
struct UOnlineCommunityContentInterfaceSteamworks_execCreateWorkshopItem_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.RateContent
// [0x00420001] 
struct UOnlineCommunityContentInterfaceSteamworks_execRateContent_Params
{
	uint8_t                                            PlayerNum;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FCommunityContentFile                       FileToRate;                                       		// 0x0008 (0x0090) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            NewRating;                                        		// 0x0098 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearGetContentPayloadCompleteDelegate
// [0x00020001] 
struct UOnlineCommunityContentInterfaceSteamworks_execClearGetContentPayloadCompleteDelegate_Params
{
	struct FScriptDelegate                             GetContentPayloadCompleteDelegate;                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddGetContentPayloadCompleteDelegate
// [0x00020001] 
struct UOnlineCommunityContentInterfaceSteamworks_execAddGetContentPayloadCompleteDelegate_Params
{
	struct FScriptDelegate                             GetContentPayloadCompleteDelegate;                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnGetContentPayloadComplete
// [0x00520001] 
struct UOnlineCommunityContentInterfaceSteamworks_execOnGetContentPayloadComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FCommunityContentFile                       FileDownloaded;                                   		// 0x0008 (0x0090) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    Payload;                                          		// 0x0098 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetContentPayload
// [0x00420001] 
struct UOnlineCommunityContentInterfaceSteamworks_execGetContentPayload_Params
{
	uint8_t                                            PlayerNum;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FCommunityContentFile                       FileDownloaded;                                   		// 0x0008 (0x0090) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0098 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearDownloadContentCompleteDelegate
// [0x00020001] 
struct UOnlineCommunityContentInterfaceSteamworks_execClearDownloadContentCompleteDelegate_Params
{
	struct FScriptDelegate                             DownloadContentCompleteDelegate;                  		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddDownloadContentCompleteDelegate
// [0x00020001] 
struct UOnlineCommunityContentInterfaceSteamworks_execAddDownloadContentCompleteDelegate_Params
{
	struct FScriptDelegate                             DownloadContentCompleteDelegate;                  		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnDownloadContentComplete
// [0x00120001] 
struct UOnlineCommunityContentInterfaceSteamworks_execOnDownloadContentComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FCommunityContentFile                       FileDownloaded;                                   		// 0x0008 (0x0090) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    Payload;                                          		// 0x0098 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.DownloadContent
// [0x00420001] 
struct UOnlineCommunityContentInterfaceSteamworks_execDownloadContent_Params
{
	uint8_t                                            PlayerNum;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FCommunityContentFile                       FileToDownload;                                   		// 0x0008 (0x0090) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0098 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearUploadContentCompleteDelegate
// [0x00020001] 
struct UOnlineCommunityContentInterfaceSteamworks_execClearUploadContentCompleteDelegate_Params
{
	struct FScriptDelegate                             UploadContentCompleteDelegate;                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddUploadContentCompleteDelegate
// [0x00020001] 
struct UOnlineCommunityContentInterfaceSteamworks_execAddUploadContentCompleteDelegate_Params
{
	struct FScriptDelegate                             UploadContentCompleteDelegate;                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnUploadContentComplete
// [0x00120001] 
struct UOnlineCommunityContentInterfaceSteamworks_execOnUploadContentComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FCommunityContentFile                       UploadedFile;                                     		// 0x0008 (0x0090) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.UploadContent
// [0x00420001] 
struct UOnlineCommunityContentInterfaceSteamworks_execUploadContent_Params
{
	uint8_t                                            PlayerNum;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<uint8_t>                                    Payload;                                          		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FCommunityContentMetadata                   MetaData;                                         		// 0x0018 (0x0038) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetFriendsContentList
// [0x00420001] 
struct UOnlineCommunityContentInterfaceSteamworks_execGetFriendsContentList_Params
{
	uint8_t                                            PlayerNum;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FOnlineFriend                               Friend;                                           		// 0x0008 (0x0118) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	TArray<struct FCommunityContentFile>               ContentFiles;                                     		// 0x0120 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0130 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearReadFriendsContentListCompleteDelegate
// [0x00020001] 
struct UOnlineCommunityContentInterfaceSteamworks_execClearReadFriendsContentListCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadFriendsContentListCompleteDelegate;           		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddReadFriendsContentListCompleteDelegate
// [0x00020001] 
struct UOnlineCommunityContentInterfaceSteamworks_execAddReadFriendsContentListCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadFriendsContentListCompleteDelegate;           		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnReadFriendsContentListComplete
// [0x00120001] 
struct UOnlineCommunityContentInterfaceSteamworks_execOnReadFriendsContentListComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ReadFriendsContentList
// [0x00424001] 
struct UOnlineCommunityContentInterfaceSteamworks_execReadFriendsContentList_Params
{
	uint8_t                                            PlayerNum;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FOnlineFriend>                       Friends;                                          		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            StartAt;                                          		// 0x0018 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            NumToRead;                                        		// 0x001C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetContentList
// [0x00420001] 
struct UOnlineCommunityContentInterfaceSteamworks_execGetContentList_Params
{
	uint8_t                                            PlayerNum;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FCommunityContentFile>               ContentFiles;                                     		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearReadContentListCompleteDelegate
// [0x00020001] 
struct UOnlineCommunityContentInterfaceSteamworks_execClearReadContentListCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadContentListCompleteDelegate;                  		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddReadContentListCompleteDelegate
// [0x00020001] 
struct UOnlineCommunityContentInterfaceSteamworks_execAddReadContentListCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadContentListCompleteDelegate;                  		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnReadContentListComplete
// [0x00120001] 
struct UOnlineCommunityContentInterfaceSteamworks_execOnReadContentListComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	TArray<struct FCommunityContentFile>               ContentFiles;                                     		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ReadContentList
// [0x00024001] 
struct UOnlineCommunityContentInterfaceSteamworks_execReadContentList_Params
{
	uint8_t                                            PlayerNum;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                NetId;                                            		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Path;                                             		// 0x0050 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            StartAt;                                          		// 0x0060 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            NumToRead;                                        		// 0x0064 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0068 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.Exit
// [0x00020401] 
struct UOnlineCommunityContentInterfaceSteamworks_execExit_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.Init
// [0x00020401] 
struct UOnlineCommunityContentInterfaceSteamworks_execInit_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnDownloadedWorkshopData
// [0x00520001] 
struct UOnlineCommunityContentInterfaceSteamworks_execOnDownloadedWorkshopData_Params
{
	TArray<struct FDownloadedWorkshopData>             Items;                                            		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           bSuccess : 1;                                     		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.PrintDebugInfoNative
// [0x00020401] 
struct UOnlineGameInterfaceSteamworks_execPrintDebugInfoNative_Params
{
	class UDebugDrawer*                                Drawer;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.PrintDebugInfo
// [0x400020102] 
struct UOnlineGameInterfaceSteamworks_execPrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData
// [0x400020002] 
struct UOnlineGameInterfaceSteamworks_execQueryNonAdvertisedData_Params
{
	int32_t                                            StartAt;                                          		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            NumberToQuery;                                    		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate
// [0x400020002] 
struct UOnlineGameInterfaceSteamworks_execClearUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                 		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate
// [0x400020002] 
struct UOnlineGameInterfaceSteamworks_execAddUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                 		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete
// [0x400120000] 
struct UOnlineGameInterfaceSteamworks_execOnUnregisterPlayerComplete_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0050 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer
// [0x400020400] 
struct UOnlineGameInterfaceSteamworks_execUnregisterPlayer_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate
// [0x400020002] 
struct UOnlineGameInterfaceSteamworks_execClearRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate
// [0x400020002] 
struct UOnlineGameInterfaceSteamworks_execAddRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete
// [0x400120000] 
struct UOnlineGameInterfaceSteamworks_execOnRegisterPlayerComplete_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0050 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer
// [0x400020400] 
struct UOnlineGameInterfaceSteamworks_execRegisterPlayer_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasInvited : 1;                                  		// 0x0050 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0054 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite
// [0x400020400] 
struct UOnlineGameInterfaceSteamworks_execAcceptGameInvite_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted
// [0x400520000] 
struct UOnlineGameInterfaceSteamworks_execOnGameInviteAccepted_Params
{
	struct FOnlineGameSearchResult                     InviteResult;                                     		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class FString                                      ErrorString;                                      		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame
// [0x400024400] 
struct UOnlineGameInterfaceSteamworks_execUpdateOnlineGame_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UOnlineGameSettings*                         UpdatedGameSettings;                              		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bShouldRefreshOnlineData : 1;                     		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.ClearUnregisterPlayerCompleteDelegate
// [0x400020002] 
struct UOnlineGameInterfaceSteamworks_PsyNet_execClearUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                 		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AddUnregisterPlayerCompleteDelegate
// [0x400020002] 
struct UOnlineGameInterfaceSteamworks_PsyNet_execAddUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                 		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.OnUnregisterPlayerComplete
// [0x400120000] 
struct UOnlineGameInterfaceSteamworks_PsyNet_execOnUnregisterPlayerComplete_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0050 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.UnregisterPlayer
// [0x400020400] 
struct UOnlineGameInterfaceSteamworks_PsyNet_execUnregisterPlayer_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.ClearRegisterPlayerCompleteDelegate
// [0x400020002] 
struct UOnlineGameInterfaceSteamworks_PsyNet_execClearRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AddRegisterPlayerCompleteDelegate
// [0x400020002] 
struct UOnlineGameInterfaceSteamworks_PsyNet_execAddRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.OnRegisterPlayerComplete
// [0x400120000] 
struct UOnlineGameInterfaceSteamworks_PsyNet_execOnRegisterPlayerComplete_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0050 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.RegisterPlayer
// [0x400020400] 
struct UOnlineGameInterfaceSteamworks_PsyNet_execRegisterPlayer_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasInvited : 1;                                  		// 0x0050 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0054 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.QueryNonAdvertisedData
// [0x400020002] 
struct UOnlineGameInterfaceSteamworks_PsyNet_execQueryNonAdvertisedData_Params
{
	int32_t                                            StartAt;                                          		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            NumberToQuery;                                    		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AcceptGameInvite
// [0x400020000] 
struct UOnlineGameInterfaceSteamworks_PsyNet_execAcceptGameInvite_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.UpdateOnlineGame
// [0x400024000] 
struct UOnlineGameInterfaceSteamworks_PsyNet_execUpdateOnlineGame_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UOnlineGameSettings*                         UpdatedGameSettings;                              		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bShouldRefreshOnlineData : 1;                     		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.SetFriendJoinLocation
// [0x400020400] 
struct UOnlineGameInterfaceSteamworks_PsyNet_execSetFriendJoinLocation_Params
{
	struct FUniqueNetId                                JoinablePlayerID;                                 		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ServerAddress;                                    		// 0x0048 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            Visibility;                                       		// 0x0058 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.KickPlayer
// [0x400420002] 
struct UOnlineLobbyInterfaceSteamworks_execKickPlayer_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FUniqueNetId                                PlayerID;                                         		// 0x0010 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint8_t                                            Reason;                                           		// 0x0058 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x005C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyFromCommandline
// [0x00424401] 
struct UOnlineLobbyInterfaceSteamworks_execGetLobbyFromCommandline_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bMarkAsJoined : 1;                                		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ShowInviteUI
// [0x400420400] 
struct UOnlineLobbyInterfaceSteamworks_execShowInviteUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000082] (CPF_Const | CPF_Parm)
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0008 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.InviteToLobby
// [0x400420400] 
struct UOnlineLobbyInterfaceSteamworks_execInviteToLobby_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FUniqueNetId                                PlayerID;                                         		// 0x0010 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.CanInviteToLobby
// [0x400420002] 
struct UOnlineLobbyInterfaceSteamworks_execCanInviteToLobby_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FUniqueNetId                                PlayerID;                                         		// 0x0010 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyOwner
// [0x400420400] 
struct UOnlineLobbyInterfaceSteamworks_execSetLobbyOwner_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FUniqueNetId                                NewOwner;                                         		// 0x0010 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyLock
// [0x400420400] 
struct UOnlineLobbyInterfaceSteamworks_execSetLobbyLock_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint32_t                                           bLocked : 1;                                      		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyType
// [0x00420401] 
struct UOnlineLobbyInterfaceSteamworks_execSetLobbyType_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint8_t                                            Type;                                             		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyServer
// [0x400420400] 
struct UOnlineLobbyInterfaceSteamworks_execSetLobbyServer_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FUniqueNetId                                ServerUID;                                        		// 0x0010 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      ServerIP;                                         		// 0x0058 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0068 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.RemoveLobbySetting
// [0x400420400] 
struct UOnlineLobbyInterfaceSteamworks_execRemoveLobbySetting_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class FString                                      Key;                                              		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbySetting
// [0x400420400] 
struct UOnlineLobbyInterfaceSteamworks_execSetLobbySetting_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class FString                                      Key;                                              		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Value;                                            		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyAdmin
// [0x400420400] 
struct UOnlineLobbyInterfaceSteamworks_execGetLobbyAdmin_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FUniqueNetId                                AdminId;                                          		// 0x0010 (0x0048) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyKicked
// [0x00520001] 
struct UOnlineLobbyInterfaceSteamworks_execOnLobbyKicked_Params
{
	struct FActiveLobbyInfo                            Lobby;                                            		// 0x0000 (0x0030) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            AdminIndex;                                       		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SendLobbyBinaryData
// [0x400420400] 
struct UOnlineLobbyInterfaceSteamworks_execSendLobbyBinaryData_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	TArray<uint8_t>                                    Data;                                             		// 0x0010 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyUserSetting
// [0x400420400] 
struct UOnlineLobbyInterfaceSteamworks_execSetLobbyUserSetting_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class FString                                      Key;                                              		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Value;                                            		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.LeaveLobby
// [0x400420400] 
struct UOnlineLobbyInterfaceSteamworks_execLeaveLobby_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.JoinLobby
// [0x400420400] 
struct UOnlineLobbyInterfaceSteamworks_execJoinLobby_Params
{
	int32_t                                            LocalPlayerNum;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0008 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.UpdateFoundLobbies
// [0x400024400] 
struct UOnlineLobbyInterfaceSteamworks_execUpdateFoundLobbies_Params
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.FindLobbies
// [0x400024400] 
struct UOnlineLobbyInterfaceSteamworks_execFindLobbies_Params
{
	int32_t                                            MaxResults;                                       		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	TArray<struct FLobbyFilter>                        Filters;                                          		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FLobbySortFilter>                    SortFilters;                                      		// 0x0018 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            MinSlots;                                         		// 0x0028 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            Distance;                                         		// 0x002C (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.CreateLobby
// [0x400024400] 
struct UOnlineLobbyInterfaceSteamworks_execCreateLobby_Params
{
	int32_t                                            LocalPlayerNum;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            MaxPlayers;                                       		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            Type;                                             		// 0x0008 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	TArray<struct FLobbyMetaData>                      InitialSettings;                                  		// 0x0010 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadBlockList
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execReadBlockList_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetBlockList
// [0x00420001] 
struct UOnlineSubsystemSteamworks_execGetBlockList_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FOnlineFriend>                       OutBlockList;                                     		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerUnblockedDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execAddPlayerUnblockedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             Delegate;                                         		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerUnblocked
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnPlayerUnblocked_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UError*                                      Error;                                            		// 0x0050 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerBlockedDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execAddPlayerBlockedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             Delegate;                                         		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerBlocked
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnPlayerBlocked_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UError*                                      Error;                                            		// 0x0050 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddBlockListUpdatedDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execAddBlockListUpdatedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             Delegate;                                         		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnBlockListUpdated
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnBlockListUpdated_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EpicIDToPlatformID
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execEpicIDToPlatformID_Params
{
	struct FUniqueNetId                                EpicAccountId;                                    		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            TargetPlatform;                                   		// 0x0048 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             Callback;                                         		// 0x0050 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EpicIDToPlatformIDCallback
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execEpicIDToPlatformIDCallback_Params
{
	struct FUniqueNetId                                PlatformAccountId;                                		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Error;                                            		// 0x0048 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetEpicAccountId
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execGetEpicAccountId_Params
{
	struct FUniqueNetId                                PlatformId;                                       		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FUniqueNetId                                ReturnValue;                                      		// 0x0048 (0x0048) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerSigningOutDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execClearPlayerSigningOutDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerSigningOutDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execAddPlayerSigningOutDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerSigningOut
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnPlayerSigningOut_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RefreshNetworkErrorToggle
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execRefreshNetworkErrorToggle_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.TriggerScreenshot
// [0x400020400] 
struct UOnlineSubsystemSteamworks_execTriggerScreenshot_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerConnectionStatusChanged
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execOnControllerConnectionStatusChanged_Params
{
	int32_t                                            LocalPlayerNum;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bConnected : 1;                                   		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerInputAPIChanged
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execOnControllerInputAPIChanged_Params
{
	int32_t                                            LocalPlayerNum;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputAPI;                                         		// 0x0004 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetControllerPlatform
// [0x400020400] 
struct UOnlineSubsystemSteamworks_execGetControllerPlatform_Params
{
	int32_t                                            LocalPlayerNum;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	EInputPlatformType                                 ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetControllerID
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execGetControllerID_Params
{
	int32_t                                            LocalPlayerNum;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetConnectedControllerNames
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execGetConnectedControllerNames_Params
{
	TArray<struct FName>                               ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLocalPlayerRemoved
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execOnLocalPlayerRemoved_Params
{
	int32_t                                            LocalPlayerNum;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterController
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execUnregisterController_Params
{
	int32_t                                            LocalPlayerNum;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterController
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execRegisterController_Params
{
	int32_t                                            LocalPlayerNum;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ControllerId;                                     		// 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanRegisterController
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execCanRegisterController_Params
{
	int32_t                                            LocalPlayerNum;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowBindings
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execShowBindings_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetControllerLayout
// [0x400020400] 
struct UOnlineSubsystemSteamworks_execSetControllerLayout_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       LayoutName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetInputAPI
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execSetInputAPI_Params
{
	uint8_t                                            TargetAPI;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetActiveDiscDLC
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execGetActiveDiscDLC_Params
{
	TArray<struct FName>                               ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineSubscriptionRequirement
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execSetOnlineSubscriptionRequirement_Params
{
	uint32_t                                           bRequiresOnlineSubscription : 1;                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleGamepadConnectionStatusChanged
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execHandleGamepadConnectionStatusChanged_Params
{
	class UGameViewportClient*                         GVC;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            LocalPlayerNum;                                   		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bConnected : 1;                                   		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleGamepadInputAPIChanged
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execHandleGamepadInputAPIChanged_Params
{
	class UGameViewportClient*                         GVC;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            LocalPlayerNum;                                   		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputAPI;                                         		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearInputAPIChangedDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearInputAPIChangedDelegate_Params
{
	struct FScriptDelegate                             InputAPIChangedDelegate;                          		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddInputAPIChangedDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddInputAPIChangedDelegate_Params
{
	struct FScriptDelegate                             InputAPIChangedDelegate;                          		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnregisteredControllerDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearUnregisteredControllerDelegate_Params
{
	struct FScriptDelegate                             UnregisteredControllerDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisteredControllerDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearRegisteredControllerDelegate_Params
{
	struct FScriptDelegate                             RegisteredControllerDelegate;                     		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnregisteredControllerDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddUnregisteredControllerDelegate_Params
{
	struct FScriptDelegate                             UnregisteredControllerDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisteredControllerDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddRegisteredControllerDelegate_Params
{
	struct FScriptDelegate                             RegisteredControllerDelegate;                     		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnInputAPIChanged
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnInputAPIChanged_Params
{
	uint8_t                                            TargetAPI;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnregisteredController
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnUnregisteredController_Params
{
	int32_t                                            LocalPlayerNum;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisteredController
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnRegisteredController_Params
{
	int32_t                                            LocalPlayerNum;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ControllerId;                                     		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasIncomingFriendInvite
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execHasIncomingFriendInvite_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                InviteFrom;                                       		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasFriendsFunctionality
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execHasFriendsFunctionality_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanSendOfflinePartyInvite
// [0x400020002] 
struct UOnlineSubsystemSteamworks_execCanSendOfflinePartyInvite_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CheckParentalControlInfo
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execCheckParentalControlInfo_Params
{
	uint32_t                                           bShowUi : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RecordPlayersRecentlyMetKeys
// [0x00420001] 
struct UOnlineSubsystemSteamworks_execRecordPlayersRecentlyMetKeys_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FFriendHistoryKey>                   PlayerKeys;                                       		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayHistoryRegistrationKey
// [0x00420001] 
struct UOnlineSubsystemSteamworks_execGetPlayHistoryRegistrationKey_Params
{
	TArray<uint8_t>                                    Key;                                              		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsOriginalAppOwner
// [0x400020400] 
struct UOnlineSubsystemSteamworks_execIsOriginalAppOwner_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateSessionStatusFromPlayers
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execUpdateSessionStatusFromPlayers_Params
{
	int32_t                                            CurrentPlayerCount;                               		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            numBotPlayers;                                    		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsAchievementUnlocked
// [0x400020000] 
struct UOnlineSubsystemSteamworks_execIsAchievementUnlocked_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateGameProgress
// [0x400020000] 
struct UOnlineSubsystemSteamworks_execUpdateGameProgress_Params
{
	uint8_t                                            LocalPlayerNum;                                   		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	float                                              Progress;                                         		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FinishOnlineGameSession
// [0x400020000] 
struct UOnlineSubsystemSteamworks_execFinishOnlineGameSession_Params
{
	class FString                                      ServerId;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartOnlineGameSession
// [0x400020000] 
struct UOnlineSubsystemSteamworks_execStartOnlineGameSession_Params
{
	class FString                                      ServerId;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSystemUserControllerPairingChangedDelegate
// [0x400020000] 
struct UOnlineSubsystemSteamworks_execClearSystemUserControllerPairingChangedDelegate_Params
{
	struct FScriptDelegate                             PairingChangeDelegate;                            		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSystemUserControllerPairingChangedDelegate
// [0x400020000] 
struct UOnlineSubsystemSteamworks_execAddSystemUserControllerPairingChangedDelegate_Params
{
	struct FScriptDelegate                             PairingChangeDelegate;                            		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSystemUserControllerPairingChanged
// [0x400120000] 
struct UOnlineSubsystemSteamworks_execOnSystemUserControllerPairingChanged_Params
{
	int32_t                                            NewLocalUserNum;                                  		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            PreviousLocalUserNum;                             		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAccountPickerInput
// [0x400020000] 
struct UOnlineSubsystemSteamworks_execClearAccountPickerInput_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LookForAccountPickerInput
// [0x400020000] 
struct UOnlineSubsystemSteamworks_execLookForAccountPickerInput_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerToSession
// [0x400020000] 
struct UOnlineSubsystemSteamworks_execAddPlayerToSession_Params
{
	uint8_t                                            ControllerId;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPrimaryPlayer
// [0x400020000] 
struct UOnlineSubsystemSteamworks_execClearPrimaryPlayer_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveUserAssociation
// [0x400020000] 
struct UOnlineSubsystemSteamworks_execRemoveUserAssociation_Params
{
	uint8_t                                            ControllerId;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MapEnd
// [0x400020000] 
struct UOnlineSubsystemSteamworks_execMapEnd_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MapStart
// [0x400020000] 
struct UOnlineSubsystemSteamworks_execMapStart_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineMatchEnd
// [0x400020000] 
struct UOnlineSubsystemSteamworks_execOnlineMatchEnd_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineMatchStart
// [0x400020000] 
struct UOnlineSubsystemSteamworks_execOnlineMatchStart_Params
{
	class FString                                      MapName;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionDifficultyLevel
// [0x400020000] 
struct UOnlineSubsystemSteamworks_execSetSessionDifficultyLevel_Params
{
	int32_t                                            DifficultyLevel;                                  		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionGameplayModeName
// [0x400020000] 
struct UOnlineSubsystemSteamworks_execSetSessionGameplayModeName_Params
{
	struct FName                                       GameplayModeName;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionGameplayMode
// [0x400020000] 
struct UOnlineSubsystemSteamworks_execSetSessionGameplayMode_Params
{
	int32_t                                            GameplayMode;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSyncedAchievements
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execGetSyncedAchievements_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<bool>                                       ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetPlayedWith
// [0x400020400] 
struct UOnlineSubsystemSteamworks_execSetPlayedWith_Params
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0048) [0x0000000000400082] (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleBootMessage
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execHandleBootMessage_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearErrorDialogClosedDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execClearErrorDialogClosedDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddErrorDialogClosedDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execAddErrorDialogClosedDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnErrorDialogClosed
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnErrorDialogClosed_Params
{
	int32_t                                            LocalUserNum;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCloseKickPlayerDialogDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execClearCloseKickPlayerDialogDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCloseKickPlayerDialogDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execAddCloseKickPlayerDialogDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCloseKickPlayerDialog
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnCloseKickPlayerDialog_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCommerceDialogClosedDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execClearCommerceDialogClosedDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCommerceDialogClosedDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execAddCommerceDialogClosedDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCommerceDialogClosed
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnCommerceDialogClosed_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WordFilterSanitizeString
// [0x00024001] 
struct UOnlineSubsystemSteamworks_execWordFilterSanitizeString_Params
{
	class FString                                      Comment;                                          		// 0x0000 (0x0010) [0x0000000000400082] (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             SanitizeDelegate;                                 		// 0x0010 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                         		// 0x0028 (0x0048) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0070 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveCanPlayOnlineChangedDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execRemoveCanPlayOnlineChangedDelegate_Params
{
	struct FScriptDelegate                             Callback;                                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCanPlayOnlineChangedDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execAddCanPlayOnlineChangedDelegate_Params
{
	struct FScriptDelegate                             Callback;                                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RecordPlayersRecentlyMet
// [0x00420001] 
struct UOnlineSubsystemSteamworks_execRecordPlayersRecentlyMet_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      GameDescription;                                  		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSaveDataNoSpaceDialogCompleteDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execClearSaveDataNoSpaceDialogCompleteDelegate_Params
{
	struct FScriptDelegate                             DeviceDelegate;                                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSaveDataNoSpaceDialogCompleteDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execAddSaveDataNoSpaceDialogCompleteDelegate_Params
{
	struct FScriptDelegate                             DeviceDelegate;                                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSaveDataNoSpaceDialogComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnSaveDataNoSpaceDialogComplete_Params
{
	uint32_t                                           bContinueWithoutSave : 1;                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockedDLCChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearUnlockedDLCChangeDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockedDLCChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddUnlockedDLCChangeDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUnlockedDLC
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execGetUnlockedDLC_Params
{
	TArray<struct FName>                               ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockedDLCChange
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnUnlockedDLCChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetOverlayEnabled
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execGetOverlayEnabled_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDLCPurchaseTime
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execGetDLCPurchaseTime_Params
{
	struct FName                                       AppName;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleGetUserInfoComplete
// [0x00040003] 
struct UOnlineSubsystemSteamworks_execHandleGetUserInfoComplete_Params
{
	struct FName                                       NewCurrency;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      NewCountry;                                       		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerCountry
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execGetPlayerCountry_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerLanguage
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execGetPlayerLanguage_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerCountryDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearReadPlayerCountryDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadPlayerCountryDelegate;                        		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerCountryDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddReadPlayerCountryDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadPlayerCountryDelegate;                        		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AnyPlayerChatRestricted
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execAnyPlayerChatRestricted_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.InitializeTrophyAPI
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execInitializeTrophyAPI_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForItems
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execOpenStoreForItems_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<class FString>                              Targets;                                          		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForDLC
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execOpenStoreForDLC_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       DLC;                                              		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForItemsAsync
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execOpenStoreForItemsAsync_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<class FString>                              Targets;                                          		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             OnStorePurchaseCompleteDelegate;                  		// 0x0018 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorePurchaseCompleteDelegate
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnStorePurchaseCompleteDelegate_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenErrorDialog
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execOpenErrorDialog_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            ErrorCode;                                        		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenPS4DisplayMode
// [0x00024001] 
struct UOnlineSubsystemSteamworks_execOpenPS4DisplayMode_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            DisplayMode;                                      		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<class FString>                              Targets;                                          		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ServiceLabel;                                     		// 0x0018 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetControllerColor
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execResetControllerColor_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetControllerColor
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execSetControllerColor_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FColor                                      NewColor;                                         		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddInGamePost
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execAddInGamePost_Params
{
	class FString                                      InPostID;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            LocalUserNum;                                     		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<class FString>                              StringReplaceList;                                		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsEnabled
// [0x400020400] 
struct UOnlineSubsystemSteamworks_execIsEnabled_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRichPresence
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execSetRichPresence_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      PresenceString;                                   		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GameDataString;                                   		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAllDelegates
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearAllDelegates_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteSharedFileCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearWriteSharedFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteSharedFileCompleteDelegate;                  		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteSharedFileCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddWriteSharedFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteSharedFileCompleteDelegate;                  		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteSharedFile
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execWriteSharedFile_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    Contents;                                         		// 0x0020 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteSharedFileComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnWriteSharedFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SharedHandle;                                     		// 0x0028 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSharedFileCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearReadSharedFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadSharedFileCompleteDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSharedFileCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddReadSharedFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadSharedFileCompleteDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSharedFile
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execReadSharedFile_Params
{
	class FString                                      SharedHandle;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSharedFileComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnReadSharedFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      SharedHandle;                                     		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFile
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execClearSharedFile_Params
{
	class FString                                      SharedHandle;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFiles
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execClearSharedFiles_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSharedFileContents
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execGetSharedFileContents_Params
{
	class FString                                      SharedHandle;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    FileContents;                                     		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeleteUserFileCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearDeleteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             DeleteUserFileCompleteDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeleteUserFileCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddDeleteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             DeleteUserFileCompleteDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteUserFile
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execDeleteUserFile_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bShouldCloudDelete : 1;                           		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bShouldLocallyDelete : 1;                         		// 0x0024 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeleteUserFileComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnDeleteUserFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteUserFileCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearWriteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteUserFileCompleteDelegate;                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteUserFileCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddWriteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteUserFileCompleteDelegate;                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFile
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execWriteUserFile_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    FileContents;                                     		// 0x0020 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteUserFileComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnWriteUserFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadUserFileCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearReadUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadUserFileCompleteDelegate;                     		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadUserFileCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddReadUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadUserFileCompleteDelegate;                     		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadUserFile
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execReadUserFile_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadUserFileComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnReadUserFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserFileList
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execGetUserFileList_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FEmsFile>                            UserFiles;                                        		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearEnumerateUserFileCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearEnumerateUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             EnumerateUserFileCompleteDelegate;                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddEnumerateUserFileCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddEnumerateUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             EnumerateUserFileCompleteDelegate;                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateUserFiles
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execEnumerateUserFiles_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnEnumerateUserFilesComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnEnumerateUserFilesComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFile
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execClearFile_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFiles
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execClearFiles_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFileContents
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execGetFileContents_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    FileContents;                                     		// 0x0020 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFileInternal
// [0x00440401] 
struct UOnlineSubsystemSteamworks_execWriteUserFileInternal_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    FileContents;                                     		// 0x0020 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetVoiceReceiveVolume
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execSetVoiceReceiveVolume_Params
{
	float                                              VoiceVolume;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendJoinURL
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execGetFriendJoinURL_Params
{
	struct FUniqueNetId                                FriendUID;                                        		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ServerURL;                                        		// 0x0048 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      ServerUID;                                        		// 0x0058 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0068 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCommandlineJoinURL
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execGetCommandlineJoinURL_Params
{
	uint32_t                                           bMarkAsJoined : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      ServerURL;                                        		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      ServerUID;                                        		// 0x0018 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Int64ToUniqueNetId
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execInt64ToUniqueNetId_Params
{
	class FString                                      UIDString;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FUniqueNetId                                OutUID;                                           		// 0x0010 (0x0048) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToInt64
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execUniqueNetIdToInt64_Params
{
	struct FUniqueNetId                                Uid;                                              		// 0x0000 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0048 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.NotifyVOIPPlaybackFinished
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execNotifyVOIPPlaybackFinished_Params
{
	class UAudioComponent*                             VOIPAudioComponent;                               		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnVOIPPlaybackFinished
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execOnVOIPPlaybackFinished_Params
{
	class UAudioComponent*                             AC;                                               		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProfileUI
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execShowProfileUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      SubURL;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerUID;                                        		// 0x0018 (0x0048) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0060 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToPlayerName
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execUniqueNetIdToPlayerName_Params
{
	struct FUniqueNetId                                Uid;                                              		// 0x0000 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0048 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DisplayAchievementProgress
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execDisplayAchievementProgress_Params
{
	int32_t                                            AchievementId;                                    		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ProgressCount;                                    		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            MaxProgress;                                      		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execCreateLeaderboard_Params
{
	class FString                                      LeaderboardName;                                  		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            SortType;                                         		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            DisplayFormat;                                    		// 0x0011 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetStats
// [0x400020400] 
struct UOnlineSubsystemSteamworks_execResetStats_Params
{
	uint32_t                                           bResetAchievements : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomMessageUI
// [0x00424001] 
struct UOnlineSubsystemSteamworks_execShowCustomMessageUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        Recipients;                                       		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      MessageTitle;                                     		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      NonEditableMessage;                               		// 0x0028 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      EditableMessage;                                  		// 0x0038 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleProfileSettings
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execClearCrossTitleProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleProfileSettings
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execGetCrossTitleProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UOnlineProfileSettings*                      ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execClearReadCrossTitleProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execAddReadCrossTitleProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleProfileSettingsComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnReadCrossTitleProfileSettingsComplete_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleProfileSettings
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execReadCrossTitleProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamClanData
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execGetSteamClanData_Params
{
	TArray<struct FSteamPlayerClanData>                Results;                                          		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearGetNumberOfCurrentPlayersCompleteDelegate_Params
{
	struct FScriptDelegate                             GetNumberOfCurrentPlayersCompleteDelegate;        		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddGetNumberOfCurrentPlayersCompleteDelegate_Params
{
	struct FScriptDelegate                             GetNumberOfCurrentPlayersCompleteDelegate;        		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnGetNumberOfCurrentPlayersComplete_Params
{
	int32_t                                            TotalPlayers;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execGetNumberOfCurrentPlayers_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatars
// [0x400420400] 
struct UOnlineSubsystemSteamworks_execReadOnlineAvatars_Params
{
	TArray<struct FUniqueNetId>                        PlayerNetIds;                                     		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint8_t                                            Size;                                             		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadOnlineAvatarCompleteDelegate;                 		// 0x0018 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execShowCustomPlayersUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      Title;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Description;                                      		// 0x0028 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0038 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements
// [0x00424401] 
struct UOnlineSubsystemSteamworks_execGetAchievements_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FAchievementDetails>                 Achievements;                                     		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            TitleId;                                          		// 0x0018 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	EOnlineEnumerationReadState                        ReturnValue;                                      		// 0x001C (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearReadAchievementsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                 		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddReadAchievementsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                 		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnReadAchievementsComplete_Params
{
	int32_t                                            TitleId;                                          		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execReadAchievements_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bShouldReadText : 1;                              		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bShouldReadImages : 1;                            		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execShowPlayersUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execShowFriendsInviteUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execShowFriendsUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearProfileDataChangedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ProfileDataChangedDelegate;                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddProfileDataChangedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ProfileDataChangedDelegate;                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnProfileDataChanged_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execUnlockGamerPicture_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            PictureId;                                        		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearUnlockAchievementCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddUnlockAchievementCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnUnlockAchievementComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execUnlockAchievement_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              PercentComplete;                                  		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateStat
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execUpdateStat_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       StatName;                                         		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Points;                                           		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid
// [0x00024001] 
struct UOnlineSubsystemSteamworks_execIsDeviceValid_Params
{
	int32_t                                            DeviceID;                                         		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            SizeNeeded;                                       		// 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults
// [0x00420001] 
struct UOnlineSubsystemSteamworks_execGetDeviceSelectionResults_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      DeviceName;                                       		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execClearDeviceSelectionDoneDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             DeviceDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execAddDeviceSelectionDoneDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             DeviceDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnDeviceSelectionComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI
// [0x00024001] 
struct UOnlineSubsystemSteamworks_execShowDeviceSelectionUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            SizeNeeded;                                       		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bManageStorage : 1;                               		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execShowContentMarketplaceUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            CategoryMask;                                     		// 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            OfferId;                                          		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execShowInviteUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      InviteText;                                       		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execShowAchievementsUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execShowMessagesUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execShowGamerCardUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                UniqueId;                                         		// 0x0008 (0x0048) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	class FString                                      PlayerName;                                       		// 0x0050 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0060 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execShowFeedbackUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execDeleteMessage_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            MessageIndex;                                     		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execUnmuteAll_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execMuteAll_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bAllowFriends : 1;                                		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid
// [0x00420001] 
struct UOnlineSubsystemSteamworks_execRegisterStatGuid_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ClientStatGuid;                                   		// 0x0048 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execGetClientStatGuid_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execClearRegisterHostStatGuidCompleteDelegateDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execAddRegisterHostStatGuidCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnRegisterHostStatGuidComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid
// [0x00420001] 
struct UOnlineSubsystemSteamworks_execRegisterHostStatGuid_Params
{
	class FString                                      HostStatGuid;                                     		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execGetHostStatGuid_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearFriendMessageReceivedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             MessageDelegate;                                  		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddFriendMessageReceivedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             MessageDelegate;                                  		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnFriendMessageReceived_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                SendingPlayer;                                    		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SendingNick;                                      		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0060 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages
// [0x00420003] 
struct UOnlineSubsystemSteamworks_execGetFriendMessages_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FOnlineFriendMessage>                FriendMessages;                                   		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearJoinFriendGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddJoinFriendGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnJoinFriendGameComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execJoinFriendGame_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                Friend;                                           		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearReceivedGameInviteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddReceivedGameInviteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnReceivedGameInvite_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      InviterName;                                      		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execSendGameInviteToFriends_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        Friends;                                          		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Text;                                             		// 0x0018 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execSendGameInviteToFriend_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                Friend;                                           		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Text;                                             		// 0x0050 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0060 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execSendMessageToFriendW_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                Friend;                                           		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0060 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteCanceledDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execClearFriendInviteCanceledDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InviteDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteCanceledDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execAddFriendInviteCanceledDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InviteDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteCanceled
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnFriendInviteCanceled_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                CanceledUserId;                                   		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearFriendInviteReceivedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InviteDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddFriendInviteReceivedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InviteDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnFriendInviteReceived_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      RequestingNick;                                   		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0060 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execDenyFriendInvite_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDenyFriendInviteCompleteDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execClearDenyFriendInviteCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDenyFriendInviteCompleteDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execAddDenyFriendInviteCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDenyFriendInviteComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnDenyFriendInviteComplete_Params
{
	struct FUniqueNetId                                FriendId;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UError*                                      Error;                                            		// 0x0048 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execAcceptFriendInvite_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAcceptFriendInviteCompleteDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execClearAcceptFriendInviteCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAcceptFriendInviteCompleteDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execAddAcceptFriendInviteCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAcceptFriendInviteComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnAcceptFriendInviteComplete_Params
{
	struct FUniqueNetId                                FriendId;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UError*                                      Error;                                            		// 0x0048 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execRemoveFriend_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                FormerFriend;                                     		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRemoveFriendCompleteDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execClearRemoveFriendCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             RemoveFriendDelegate;                             		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRemoveFriendCompleteDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execAddRemoveFriendCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             RemoveFriendDelegate;                             		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRemoveFriendComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnRemoveFriendComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FUniqueNetId                                RemovedID;                                        		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearAddFriendByNameCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddAddFriendByNameCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnAddFriendByNameComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execAddFriendByName_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      FriendName;                                       		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0018 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueryUserByDisplayName
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execQueryUserByDisplayName_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      DisplayName;                                      		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearQueryUserByDisplayNameCompleteDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execClearQueryUserByDisplayNameCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             QueryDelegate;                                    		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddQueryUserByDisplayNameCompleteDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execAddQueryUserByDisplayNameCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             QueryDelegate;                                    		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnQueryUserByDisplayName
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnQueryUserByDisplayName_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      QueriedDisplayName;                               		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FUniqueNetId                                UserId;                                           		// 0x0018 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execAddFriend_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                NewFriend;                                        		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0050 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0060 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendCompleteDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execClearAddFriendCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendCompleteDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execAddAddFriendCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnAddFriendComplete_Params
{
	struct FUniqueNetId                                NewFriendId;                                      		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UError*                                      Error;                                            		// 0x0048 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults
// [0x00420003] 
struct UOnlineSubsystemSteamworks_execGetKeyboardInputResults_Params
{
	uint8_t                                            bWasCanceled;                                     		// 0x0000 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearKeyboardInputDoneDelegate_Params
{
	struct FScriptDelegate                             InputDelegate;                                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddKeyboardInputDoneDelegate_Params
{
	struct FScriptDelegate                             InputDelegate;                                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnKeyboardInputComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HideKeyboardUI
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execHideKeyboardUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execShowKeyboardUI_Params
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

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execSetOnlineStatus_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            StatusId;                                         		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FLocalizedStringSetting>             LocalizedStringSettings;                          		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	TArray<struct FSettingsProperty>                   Properties;                                       		// 0x0018 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execGetTitleFileState_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	EOnlineEnumerationReadState                        ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execGetTitleFileContents_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    FileContents;                                     		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execReadTitleFile_Params
{
	class FString                                      FileToRead;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnReadTitleFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execClearStorageDeviceChangeDelegate_Params
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execAddStorageDeviceChangeDelegate_Params
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnStorageDeviceChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execGetNATType_Params
{
	ENATType                                           ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearConnectionStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddConnectionStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnConnectionStatusChange_Params
{
	uint8_t                                            ConnectionStatus;                                 		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCurrentConnectionStatus
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execGetCurrentConnectionStatus_Params
{
	EOnlineServerConnectionStatus                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execIsControllerConnected_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserRestoredDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execClearUserRestoredDelegate_Params
{
	struct FScriptDelegate                             UserRestoredDelegate;                             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserRestoredDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execAddUserRestoredDelegate_Params
{
	struct FScriptDelegate                             UserRestoredDelegate;                             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserRestored
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnUserRestored_Params
{
	uint8_t                                            ControllerId;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserOrphanedDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execClearUserOrphanedDelegate_Params
{
	struct FScriptDelegate                             UserOrphanedDelegate;                             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserOrphanedDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execAddUserOrphanedDelegate_Params
{
	struct FScriptDelegate                             UserOrphanedDelegate;                             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserOrphaned
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnUserOrphaned_Params
{
	uint8_t                                            ControllerId;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execClearControllerChangeDelegate_Params
{
	struct FScriptDelegate                             ControllerChangeDelegate;                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execAddControllerChangeDelegate_Params
{
	struct FScriptDelegate                             ControllerChangeDelegate;                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnControllerChange_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bIsConnected : 1;                                 		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execSetNetworkNotificationPosition_Params
{
	uint8_t                                            NewPos;                                           		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execGetNetworkNotificationPosition_Params
{
	ENetworkNotificationPosition                       ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearExternalUIChangeDelegate_Params
{
	struct FScriptDelegate                             ExternalUIDelegate;                               		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddExternalUIChangeDelegate_Params
{
	struct FScriptDelegate                             ExternalUIDelegate;                               		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnExternalUIChange_Params
{
	uint32_t                                           bIsOpening : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearLinkStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LinkStatusDelegate;                               		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddLinkStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LinkStatusDelegate;                               		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnLinkStatusChange_Params
{
	uint32_t                                           bIsConnected : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execHasLinkConnection_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex
// [0x400020802] 
struct UOnlineSubsystemSteamworks_eventGetPlayerNicknameFromIndex_Params
{
	int32_t                                            UserIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execWriteOnlinePlayerScores_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            LeaderboardId;                                    		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FOnlinePlayerScore>                  PlayerScores;                                     		// 0x0010 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearFlushOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                 		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddFlushOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                 		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnFlushOnlineStatsComplete_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execFlushOnlineStats_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execWriteOnlineStats_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                Player;                                           		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UOnlineStatsWrite*                           StatsWrite;                                       		// 0x0050 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execFreeStats_Params
{
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                  		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                  		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnReadOnlineStatsComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execReadOnlineStatsByRankAroundPlayer_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            NumRows;                                          		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execReadOnlineStatsByRank_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            StartIndex;                                       		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            NumToRead;                                        		// 0x0014 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execReadOnlineStatsForFriends_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execReadOnlineStats_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execSetSpeechRecognitionObject_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class USpeechRecognition*                          SpeechRecogObj;                                   		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execSelectVocabulary_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            VocabularyId;                                     		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearRecognitionCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             RecognitionDelegate;                              		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddRecognitionCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             RecognitionDelegate;                              		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnRecognitionComplete_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execGetRecognitionResults_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FSpeechRecognizedWord>               Words;                                            		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execStopSpeechRecognition_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execStartSpeechRecognition_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execStopNetworkedVoice_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execStartNetworkedVoice_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearPlayerTalkingDelegate_Params
{
	struct FScriptDelegate                             TalkerDelegate;                                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerTalkingDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddPlayerTalkingDelegate_Params
{
	struct FScriptDelegate                             TalkerDelegate;                                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            AddIndex;                                         		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerTalkingStateChange
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnPlayerTalkingStateChange_Params
{
	struct FUniqueNetId                                Player;                                           		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bIsTalking : 1;                                   		// 0x0048 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execUnmuteRemoteTalker_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bIsSystemWide : 1;                                		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0054 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execMuteRemoteTalker_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bIsSystemWide : 1;                                		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0054 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execSetRemoteTalkerPriority_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Priority;                                         		// 0x0050 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0054 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execIsHeadsetPresent_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execIsRemotePlayerTalking_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execIsLocalPlayerTalking_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execUnregisterRemoteTalker_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execRegisterRemoteTalker_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execUnregisterLocalTalker_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execRegisterLocalTalker_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList
// [0x00424401] 
struct UOnlineSubsystemSteamworks_execGetFriendsList_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FOnlineFriend>                       Friends;                                          		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            Count;                                            		// 0x0018 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            StartingAt;                                       		// 0x001C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	EOnlineEnumerationReadState                        ReturnValue;                                      		// 0x0020 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearReadFriendsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                      		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddReadFriendsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                      		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnReadFriendsComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execReadFriendsList_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Count;                                            		// 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            StartingAt;                                       		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearWritePlayerStorageCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;               		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddWritePlayerStorageCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;               		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnWritePlayerStorageComplete_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage
// [0x00024001] 
struct UOnlineSubsystemSteamworks_execWritePlayerStorage_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            DeviceID;                                         		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execGetPlayerStorage_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlinePlayerStorage*                        ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearReadPlayerStorageForNetIdCompleteDelegate_Params
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;        		// 0x0048 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0060 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddReadPlayerStorageForNetIdCompleteDelegate_Params
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;        		// 0x0048 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnReadPlayerStorageForNetIdComplete_Params
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0048 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execReadPlayerStorageForNetId_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                NetId;                                            		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0050 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearReadPlayerStorageCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddReadPlayerStorageCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnReadPlayerStorageComplete_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage
// [0x00024001] 
struct UOnlineSubsystemSteamworks_execReadPlayerStorage_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            DeviceID;                                         		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearWriteProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddWriteProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnWriteProfileSettingsComplete_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execWriteProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execGetProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineProfileSettings*                      ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearReadProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddReadProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnReadProfileSettingsComplete_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execReadProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearFriendsChangeDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendsDelegate;                                  		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAvatarChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearAvatarChangeDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             AvatarDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAvatarChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddAvatarChangeDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             AvatarDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendPresence
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execGetFriendPresence_Params
{
	struct FOnlineFriend                               FriendData;                                       		// 0x0000 (0x0118) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendPresenceChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearFriendPresenceChangeDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             PresenceDelegate;                                 		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendPresenceChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddFriendPresenceChangeDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             PresenceDelegate;                                 		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddFriendsChangeDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendsDelegate;                                  		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearMutingChangeDelegate_Params
{
	struct FScriptDelegate                             MutingDelegate;                                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddMutingChangeDelegate_Params
{
	struct FScriptDelegate                             MutingDelegate;                                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execClearLoginCancelledDelegate_Params
{
	struct FScriptDelegate                             CancelledDelegate;                                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execAddLoginCancelledDelegate_Params
{
	struct FScriptDelegate                             CancelledDelegate;                                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execClearLoginStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LoginStatusDelegate;                              		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            LocalUserNum;                                     		// 0x0018 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execAddLoginStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LoginStatusDelegate;                              		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            LocalUserNum;                                     		// 0x0018 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnLoginStatusChange_Params
{
	uint8_t                                            NewStatus;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                NewId;                                            		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearLoginChangeDelegate_Params
{
	struct FScriptDelegate                             LoginDelegate;                                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddLoginChangeDelegate_Params
{
	struct FScriptDelegate                             LoginDelegate;                                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserSignInCompleteDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execClearUserSignInCompleteDelegate_Params
{
	struct FScriptDelegate                             UserSignInCompleteDelegate;                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserSignInCompleteDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execAddUserSignInCompleteDelegate_Params
{
	struct FScriptDelegate                             UserSignInCompleteDelegate;                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserSwitchCompleteDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execClearUserSwitchCompleteDelegate_Params
{
	struct FScriptDelegate                             UserSwitchCompleteDelegate;                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserSwitchCompleteDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execAddUserSwitchCompleteDelegate_Params
{
	struct FScriptDelegate                             UserSwitchCompleteDelegate;                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetPrimaryPlayerGamepadToLastInput
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execSetPrimaryPlayerGamepadToLastInput_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execIsMuted_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execAreAnyFriends_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FFriendsQuery>                       Query;                                            		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execIsFriend_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RequestRestrictedFeatureMessaging
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execRequestRestrictedFeatureMessaging_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            RestrictedFeature;                                		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUploadFitnessData
// [0x00424001] 
struct UOnlineSubsystemSteamworks_execCanUploadFitnessData_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareKinectContent
// [0x00424001] 
struct UOnlineSubsystemSteamworks_execCanShareKinectContent_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareWithSocialNetwork
// [0x00424001] 
struct UOnlineSubsystemSteamworks_execCanShareWithSocialNetwork_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanBrowseInternet
// [0x00424001] 
struct UOnlineSubsystemSteamworks_execCanBrowseInternet_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumVideoContent
// [0x00424001] 
struct UOnlineSubsystemSteamworks_execCanAccessPremiumVideoContent_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumContent
// [0x00424001] 
struct UOnlineSubsystemSteamworks_execCanAccessPremiumContent_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUseCloudStorage
// [0x00424001] 
struct UOnlineSubsystemSteamworks_execCanUseCloudStorage_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanRecordDVRClips
// [0x00424001] 
struct UOnlineSubsystemSteamworks_execCanRecordDVRClips_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation
// [0x00424003] 
struct UOnlineSubsystemSteamworks_execCanShowPresenceInformation_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles
// [0x00424003] 
struct UOnlineSubsystemSteamworks_execCanViewPlayerProfiles_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent
// [0x00424003] 
struct UOnlineSubsystemSteamworks_execCanPurchaseContent_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanDownloadUserContent
// [0x00424003] 
struct UOnlineSubsystemSteamworks_execCanDownloadUserContent_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareUserCreatedContent
// [0x00424001] 
struct UOnlineSubsystemSteamworks_execCanShareUserCreatedContent_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVoice
// [0x00424001] 
struct UOnlineSubsystemSteamworks_execCanCommunicateVoice_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVideo
// [0x00424001] 
struct UOnlineSubsystemSteamworks_execCanCommunicateVideo_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateText
// [0x00424001] 
struct UOnlineSubsystemSteamworks_execCanCommunicateText_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execCanCommunicate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            CommMethod;                                       		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	EFeaturePrivilegeLevel                             ReturnValue;                                      		// 0x0008 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline
// [0x00424401] 
struct UOnlineSubsystemSteamworks_execCanPlayOnline_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execGetPlayerNickname_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId
// [0x00420003] 
struct UOnlineSubsystemSteamworks_execGetUniquePlayerId_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execIsGuestLogin_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execGetLoginStatus_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	ELoginStatus                                       ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execClearLogoutCompletedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             LogoutDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execAddLogoutCompletedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             LogoutDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnLogoutCompleted_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execLogout_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearLoginFailedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             LoginFailedDelegate;                              		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddLoginFailedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             LoginFailedDelegate;                              		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnLoginFailed_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            ErrorCode;                                        		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execAutoLogin_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execLogin_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      LoginName;                                        		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Password;                                         		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWantsLocalOnly : 1;                              		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetKickPlayerDialogActive
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execSetKickPlayerDialogActive_Params
{
	uint32_t                                           Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsUserSwitchActive
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execIsUserSwitchActive_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetKickPreviousUser
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execSetKickPreviousUser_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SupportInGameLogin
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execSupportInGameLogin_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowControllerUI
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execShowControllerUI_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUIForOrphanedUser
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execShowLoginUIForOrphanedUser_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI
// [0x00024001] 
struct UOnlineSubsystemSteamworks_execShowLoginUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bShowOnlineOnly : 1;                              		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAvatarChange
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnAvatarChange_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FriendPresenceChange
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execFriendPresenceChange_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteAcceptedDelegate
// [0x00020001] 
struct UOnlineSubsystemSteamworks_execAddFriendInviteAcceptedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InviteAccepted;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteAccepted
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnFriendInviteAccepted_Params
{
	struct FUniqueNetId                                AcceptingPlayerId;                                		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnFriendsChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnMutingChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnLoginCancelled_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnLoginChange_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserSignInComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnUserSignInComplete_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserSwitchComplete
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execOnUserSwitchComplete_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit
// [0x400020C00] 
struct UOnlineSubsystemSteamworks_eventExit_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PostInit
// [0x400020802] 
struct UOnlineSubsystemSteamworks_eventPostInit_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init
// [0x400020C00] 
struct UOnlineSubsystemSteamworks_eventInit_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnlineChanged
// [0x00120001] 
struct UOnlineSubsystemSteamworks_execCanPlayOnlineChanged_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.ClearMicroTxnResponseDelegate
// [0x400020002] 
struct UOnlinePurchaseInterfaceSteamworks_execClearMicroTxnResponseDelegate_Params
{
	struct FScriptDelegate                             ResponseMicroTxnDelegate;                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            Index;                                            		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AddMicroTxnResponseDelegate
// [0x400020002] 
struct UOnlinePurchaseInterfaceSteamworks_execAddMicroTxnResponseDelegate_Params
{
	struct FScriptDelegate                             ResponseMicroTxnDelegate;                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.FormatCurrency
// [0x400020002] 
struct UOnlinePurchaseInterfaceSteamworks_execFormatCurrency_Params
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

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.HandleGetAppPriceInfoComplete
// [0x00840003] 
struct UOnlinePurchaseInterfaceSteamworks_execHandleGetAppPriceInfoComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bDidSucceed : 1;                                  		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// struct FAppPriceInfoRequest                        PriceRequest;                                     		// 0x0018 (0x0030) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UJsonObject*                                 JSON;                                             		// 0x0048 (0x0008) [0x0000000000000000]               
	// class UJsonObject*                                 JsonElement;                                      		// 0x0050 (0x0008) [0x0000000000000000]               
	// class FString                                      LocalAppId;                                       		// 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      Currency;                                         		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      Price;                                            		// 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      DiscountPrice;                                    		// 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            IntPrice;                                         		// 0x0098 (0x0004) [0x0000000000000000]               
	// int32_t                                            IntDiscountPrice;                                 		// 0x009C (0x0004) [0x0000000000000000]               
	// int32_t                                            DiscountPercent;                                  		// 0x00A0 (0x0004) [0x0000000000000000]               
	// struct FScriptDelegate                             Callback;                                         		// 0x00A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FName                                       AppName;                                          		// 0x00C0 (0x0008) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.GetAppPriceInfo
// [0x400C20002] 
struct UOnlinePurchaseInterfaceSteamworks_execGetAppPriceInfo_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	TArray<struct FName>                               AppNames;                                         		// 0x0048 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                         		// 0x0058 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0070 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// struct FAppPriceInfoRequest                        Request;                                          		// 0x0078 (0x0030) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AppIdToName
// [0x00424003] 
struct UOnlinePurchaseInterfaceSteamworks_execAppIdToName_Params
{
	class FString                                      AppID;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FName                                       AppName;                                          		// 0x0010 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bOptional : 1;                                    		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            Index;                                            		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AppNameToId
// [0x00424003] 
struct UOnlinePurchaseInterfaceSteamworks_execAppNameToId_Params
{
	struct FName                                       AppName;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      AppID;                                            		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           bOptional : 1;                                    		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            Index;                                            		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.SteamWorkshopCommandlet.Init
// [0x00020803] 
struct USteamWorkshopCommandlet_eventInit_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
