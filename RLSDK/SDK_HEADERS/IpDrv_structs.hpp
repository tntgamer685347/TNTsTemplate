/*
#############################################################################################
# Rocket League SDK (RLSDK) Season 20 (v2.61)
# Generated with CodeRedGenerator v1.1.5 on 11/05/2025 07:11PM
# ========================================================================================= #
# File: IpDrv_structs.hpp
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
# Structs
# ========================================================================================= #
*/

// ScriptStruct IpDrv.AdHocDelegates.AdHocAccessPointInfo
// Size: 0x0038
struct FAdHocAccessPointInfo
{
	class FString                                      Ipv4Addr;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Username;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      AdvertiseData;                                 // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            ScanResultIndex;                               // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            NetworkNodeIndex;                              // 0x0034 (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.AdHocDelegates.AdHocStationInfo
// Size: 0x0010
struct FAdHocStationInfo
{
	class FString                                      Username;                                      // 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
};

// ScriptStruct IpDrv.AvatarDownloadMap.AvatarKey
// Size: 0x0050 (0x0049 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FAvatarKey
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            Size;                                          // 0x0048 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0049 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct IpDrv.OnlineImageDownloaderWeb.OnlineImageDownload
// Size: 0x0040
struct FOnlineImageDownload
{
	class FString                                      URL;                                           // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequest;                                   // 0x0010 (0x0008) [0x0000000000000000]               
	uint8_t                                            Status;                                        // 0x0018 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x7];                            // 0x0019 (0x0007) MISSED OFFSET
	class UTexture2DDynamic*                           Texture;                                       // 0x0020 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             DecodedCallbacks;                              // 0x0028 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.ImageDecoder.DecodeImageRequest
// Size: 0x0030
struct FDecodeImageRequest
{
	class FString                                      RequestURL;                                    // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             OnFinishedCallback;                            // 0x0010 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPointer                                    Task;                                          // 0x0028 (0x0008) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct IpDrv.ImageDecoder.DecodeImageTask
// Size: 0x0040
struct FDecodeImageTask
{
	class FString                                      RequestURL;                                    // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	uint8_t                                            ImageType;                                     // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x7];                            // 0x0011 (0x0007) MISSED OFFSET
	class TArray<uint8_t>                              ImageData;                                     // 0x0018 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	struct FImageLayout                                Result;                                        // 0x0028 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.McpClashMobBase.McpClashMobChallengeFile
// Size: 0x0060 (0x0059 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FMcpClashMobChallengeFile
{
	uint32_t                                           should_keep_post_challenge : 1;                // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      title_id;                                      // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      file_name;                                     // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      dl_name;                                       // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      hash_code;                                     // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Type;                                          // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            Status;                                        // 0x0058 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0059 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct IpDrv.McpClashMobBase.McpClashMobPushNotificationParams
// Size: 0x0004
struct FMcpClashMobPushNotificationParams
{
	int32_t                                            bah;                                           // 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.McpClashMobBase.McpClashMobPushNotification
// Size: 0x0048 (0x0044 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FMcpClashMobPushNotification
{
	class TArray<class FString>                        device_tokens;                                 // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      badge_type;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Sound;                                         // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Message;                                       // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FMcpClashMobPushNotificationParams          Params;                                        // 0x0040 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0044 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct IpDrv.McpClashMobBase.McpClashMobChallengeEvent
// Size: 0x00E0
struct FMcpClashMobChallengeEvent
{
	class FString                                      unique_challenge_id;                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      visible_date;                                  // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      start_date;                                    // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      end_date;                                      // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      completed_date;                                // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      purge_date;                                    // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      challenge_type;                                // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            num_attempts;                                  // 0x0070 (0x0004) [0x0000000000000000]               
	int32_t                                            num_successful_attempts;                       // 0x0074 (0x0004) [0x0000000000000000]               
	int32_t                                            goal_value;                                    // 0x0078 (0x0004) [0x0000000000000000]               
	int32_t                                            goal_start_value;                              // 0x007C (0x0004) [0x0000000000000000]               
	int32_t                                            goal_current_value;                            // 0x0080 (0x0004) [0x0000000000000000]               
	uint32_t                                           has_started : 1;                               // 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           is_visible : 1;                                // 0x0084 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           has_completed : 1;                             // 0x0084 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           was_successful : 1;                            // 0x0084 (0x0004) [0x0000000000000000] [0x00000008] 
	class TArray<struct FMcpClashMobChallengeFile>     file_list;                                     // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            facebook_likes;                                // 0x0098 (0x0004) [0x0000000000000000]               
	int32_t                                            facebook_comments;                             // 0x009C (0x0004) [0x0000000000000000]               
	float                                              facebook_like_scaler;                          // 0x00A0 (0x0004) [0x0000000000000000]               
	float                                              facebook_comment_scaler;                       // 0x00A4 (0x0004) [0x0000000000000000]               
	int32_t                                            facebook_like_goal_progress;                   // 0x00A8 (0x0004) [0x0000000000000000]               
	int32_t                                            facebook_comment_goal_progress;                // 0x00AC (0x0004) [0x0000000000000000]               
	class FString                                      facebook_id;                                   // 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            twitter_retweets;                              // 0x00C0 (0x0004) [0x0000000000000000]               
	float                                              twitter_retweets_scaler;                       // 0x00C4 (0x0004) [0x0000000000000000]               
	int32_t                                            twitter_goal_progress;                         // 0x00C8 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x00CC (0x0004) MISSED OFFSET
	class FString                                      twitter_id;                                    // 0x00D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.McpClashMobBase.McpClashMobChallengeUserStatus
// Size: 0x0090 (0x008C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FMcpClashMobChallengeUserStatus
{
	class FString                                      unique_challenge_id;                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      unique_user_id;                                // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            num_attempts;                                  // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            num_successful_attempts;                       // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            goal_progress;                                 // 0x0028 (0x0004) [0x0000000000000000]               
	uint32_t                                           did_complete : 1;                              // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      last_update_time;                              // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            user_award_given;                              // 0x0040 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0044 (0x0004) MISSED OFFSET
	class FString                                      accept_time;                                   // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           did_preregister : 1;                           // 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          UnknownData01[0x4];                            // 0x005C (0x0004) MISSED OFFSET
	class FString                                      facebook_like_time;                            // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           enrolled_via_facebook : 1;                     // 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           liked_via_facebook : 1;                        // 0x0070 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           commented_via_facebook : 1;                    // 0x0070 (0x0004) [0x0000000000000000] [0x00000004] 
	uint8_t                                          UnknownData02[0x4];                            // 0x0074 (0x0004) MISSED OFFSET
	class FString                                      twitter_retweet_time;                          // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           enrolled_via_twitter : 1;                      // 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           retweeted : 1;                                 // 0x0088 (0x0004) [0x0000000000000000] [0x00000002] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x008C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct IpDrv.OnlineTitleFileDownloadBase.FileNameToURLMapping
// Size: 0x0010
struct FFileNameToURLMapping
{
	class FName                                        Filename;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        UrlMapping;                                    // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct IpDrv.OnlineTitleFileDownloadBase.TitleFileWeb
// 0x0019 (0x0028 - 0x0041)
struct FTitleFileWeb : FTitleFile
{
	class FString                                      StringData;                                    // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequest;                                   // 0x0038 (0x0008) [0x0000000000000000]               
	uint8_t                                            FileCompressionType;                           // 0x0040 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0041 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct IpDrv.McpClashMobManager.McpChallengeRequest
// Size: 0x0018
struct FMcpChallengeRequest
{
	class FString                                      UniqueChallengeId;                             // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequest;                                   // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct IpDrv.McpClashMobManager.McpChallengeUserRequest
// Size: 0x0050
struct FMcpChallengeUserRequest
{
	class FString                                      UniqueUserId;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FMcpChallengeRequest>          ChallengeStatusRequests;                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FMcpChallengeRequest>          ChallengeAcceptRequests;                       // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FMcpChallengeRequest>          ChallengeUpdateProgressRequests;               // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FMcpChallengeRequest>          ChallengeUpdateRewardRequests;                 // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.McpGroupsBase.McpGroupMember
// Size: 0x0018 (0x0011 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FMcpGroupMember
{
	class FString                                      MemberId;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            AcceptState;                                   // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0011 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct IpDrv.McpGroupsBase.McpGroup
// Size: 0x0048
struct FMcpGroup
{
	class FString                                      OwnerId;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      GroupId;                                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      GroupName;                                     // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            AccessLevel;                                   // 0x0030 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x7];                            // 0x0031 (0x0007) MISSED OFFSET
	class TArray<struct FMcpGroupMember>               Members;                                       // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.McpGroupsBase.McpGroupList
// Size: 0x0020
struct FMcpGroupList
{
	class FString                                      RequesterId;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FMcpGroup>                     Groups;                                        // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.McpIdMappingBase.McpIdMapping
// Size: 0x0030
struct FMcpIdMapping
{
	class FString                                      McpId;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ExternalId;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ExternalType;                                  // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.McpIdMappingManager.AddMappingRequest
// Size: 0x0038
struct FAddMappingRequest
{
	class FString                                      McpId;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ExternalId;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ExternalType;                                  // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UHttpRequestInterface*                       Request;                                       // 0x0030 (0x0008) [0x0000000000000000]               
};

// ScriptStruct IpDrv.McpIdMappingManager.QueryMappingRequest
// Size: 0x0018
struct FQueryMappingRequest
{
	class FString                                      ExternalType;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UHttpRequestInterface*                       Request;                                       // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct IpDrv.McpManagedValueManagerBase.ManagedValue
// Size: 0x000C
struct FManagedValue
{
	class FName                                        ValueId;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            Value;                                         // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.McpManagedValueManagerBase.ManagedValueSaveSlot
// Size: 0x0030
struct FManagedValueSaveSlot
{
	class FString                                      OwningMcpId;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      SaveSlot;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FManagedValue>                 Values;                                        // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.McpManagedValueManager.SaveSlotRequestState
// Size: 0x0028
struct UMcpManagedValueManager_FSaveSlotRequestState
{
	class FString                                      McpId;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      SaveSlot;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UHttpRequestInterface*                       Request;                                       // 0x0020 (0x0008) [0x0000000000000000]               
};

// ScriptStruct IpDrv.McpManagedValueManager.ValueRequestState
// 0x0008 (0x0028 - 0x0030)
struct FValueRequestState : UMcpManagedValueManager_FSaveSlotRequestState
{
	class FName                                        ValueId;                                       // 0x0028 (0x0008) [0x0000000000000000]               
};

// ScriptStruct IpDrv.McpMessageBase.McpMessage
// Size: 0x0068 (0x0061 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FMcpMessage
{
	class FString                                      MessageId;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ToUniqueUserId;                                // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      FromUniqueUserId;                              // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      FromFriendlyName;                              // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      MessageType;                                   // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ValidUntil;                                    // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            MessageCompressionType;                        // 0x0060 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0061 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct IpDrv.McpMessageBase.McpMessageList
// Size: 0x0020
struct FMcpMessageList
{
	class FString                                      ToUniqueUserId;                                // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FMcpMessage>                   Messages;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.McpMessageBase.McpMessageContents
// Size: 0x0020
struct FMcpMessageContents
{
	class FString                                      MessageId;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              MessageContents;                               // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.McpMessageManager.McpCompressMessageRequest
// Size: 0x0038
struct FMcpCompressMessageRequest
{
	class TArray<uint8_t>                              SourceBuffer;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              DestBuffer;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            OutCompressedSize;                             // 0x0020 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0024 (0x0004) MISSED OFFSET
	class UHttpRequestInterface*                       Request;                                       // 0x0028 (0x0008) [0x0000000000000000]               
	struct FPointer                                    CompressionWorker;                             // 0x0030 (0x0008) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct IpDrv.McpMessageManager.McpUncompressMessageRequest
// Size: 0x0040
struct FMcpUncompressMessageRequest
{
	class FString                                      MessageId;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              SourceBuffer;                                  // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              DestBuffer;                                    // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            OutUncompressedSize;                           // 0x0030 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0034 (0x0004) MISSED OFFSET
	struct FPointer                                    UncompressionWorker;                           // 0x0038 (0x0008) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct IpDrv.McpUserCloudFileDownload.McpUserCloudFileInfo
// 0x0034 (0x0034 - 0x0068)
struct FMcpUserCloudFileInfo : FEmsFile
{
	uint8_t                                          UnknownData00[0x4];                            // 0x0034 (0x0004) MISSED OFFSET
	class FString                                      CreationDate;                                  // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LastUpdateDate;                                // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      CompressionType;                               // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.McpUserCloudFileDownload.McpUserCloudFilesEntry
// Size: 0x0038
struct FMcpUserCloudFilesEntry
{
	class FString                                      UserId;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FTitleFileWeb>                 DownloadedFiles;                               // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FMcpUserCloudFileInfo>         EnumeratedFiles;                               // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequestEnumerateFiles;                     // 0x0030 (0x0008) [0x0000000000000000]               
};

// ScriptStruct IpDrv.McpUserInventoryBase.McpInventoryItemAttribute
// Size: 0x0018 (0x0014 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FMcpInventoryItemAttribute
{
	class FString                                      AttributeId;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Value;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0014 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct IpDrv.McpUserInventoryBase.McpInventoryItem
// Size: 0x0050
struct FMcpInventoryItem
{
	class FString                                      InstanceItemId;                                // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      GlobalItemId;                                  // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Quantity;                                      // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            QuantityIAP;                                   // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              Scalar;                                        // 0x0028 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x002C (0x0004) MISSED OFFSET
	class FString                                      LastUpdateTime;                                // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FMcpInventoryItemAttribute>    Attributes;                                    // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.McpUserInventoryBase.McpInventoryItemContainer
// Size: 0x0018 (0x0014 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FMcpInventoryItemContainer
{
	class FString                                      GlobalItemId;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Quantity;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0014 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct IpDrv.McpUserInventoryBase.McpInventorySaveSlot
// Size: 0x0030
struct FMcpInventorySaveSlot
{
	class FString                                      OwningMcpId;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FMcpInventoryItem>             Items;                                         // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.McpUserInventoryManager.SaveSlotRequestState
// Size: 0x0028
struct UMcpUserInventoryManager_FSaveSlotRequestState
{
	class FString                                      McpId;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      SaveSlotId;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UHttpRequestInterface*                       Request;                                       // 0x0020 (0x0008) [0x0000000000000000]               
};

// ScriptStruct IpDrv.McpUserInventoryManager.InventoryItemRequestState
// 0x0010 (0x0028 - 0x0038)
struct FInventoryItemRequestState : UMcpUserInventoryManager_FSaveSlotRequestState
{
	class FString                                      ItemID;                                        // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.McpUserManagerBase.McpUserStatus
// Size: 0x0068
struct FMcpUserStatus
{
	class FString                                      McpId;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      SecretKey;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Ticket;                                        // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      UDID;                                          // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      RegisteredDate;                                // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LastActiveDate;                                // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            DaysInactive;                                  // 0x0060 (0x0004) [0x0000000000000000]               
	uint32_t                                           bIsBanned : 1;                                 // 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct IpDrv.McpUserManager.UserRequest
// Size: 0x0018
struct FUserRequest
{
	class FString                                      McpId;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UHttpRequestInterface*                       Request;                                       // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct IpDrv.MeshBeacon.ConnectionBandwidthStats
// Size: 0x000C
struct FConnectionBandwidthStats
{
	int32_t                                            UpstreamRate;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            DownstreamRate;                                // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            RoundtripLatency;                              // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.MeshBeacon.PlayerMember
// Size: 0x0050
struct FPlayerMember
{
	int32_t                                            TeamNum;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Skill;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	struct FUniqueNetId                                NetId;                                         // 0x0008 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.MeshBeaconClient.ClientBandwidthTestData
// Size: 0x0014
struct FClientBandwidthTestData
{
	uint8_t                                            TestType;                                      // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            CurrentState;                                  // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x2];                            // 0x0002 (0x0002) MISSED OFFSET
	int32_t                                            NumBytesToSendTotal;                           // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            NumBytesSentTotal;                             // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            NumBytesSentLast;                              // 0x000C (0x0004) [0x0000000000000000]               
	float                                              ElapsedTestTime;                               // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.MeshBeaconClient.ClientConnectionRequest
// Size: 0x0070 (0x006C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FClientConnectionRequest
{
	struct FUniqueNetId                                PlayerNetId;                                   // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            NatType;                                       // 0x0048 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x0049 (0x0003) MISSED OFFSET
	uint32_t                                           bCanHostVs : 1;                                // 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              GoodHostRatio;                                 // 0x0050 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData01[0x4];                            // 0x0054 (0x0004) MISSED OFFSET
	class TArray<struct FConnectionBandwidthStats>     BandwidthHistory;                              // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            MinutesSinceLastTest;                          // 0x0068 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x006C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct IpDrv.MeshBeaconHost.ClientConnectionBandwidthTestData
// Size: 0x0030 (0x002C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FClientConnectionBandwidthTestData
{
	uint8_t                                            CurrentState;                                  // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            TestType;                                      // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x2];                            // 0x0002 (0x0002) MISSED OFFSET
	int32_t                                            BytesTotalNeeded;                              // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            BytesReceived;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData01[0x4];                            // 0x000C (0x0004) MISSED OFFSET
	struct FDouble                                     RequestTestStartTime;                          // 0x0010 (0x0008) [0x0000000000000000]               
	struct FDouble                                     TestStartTime;                                 // 0x0018 (0x0008) [0x0000000000000000]               
	struct FConnectionBandwidthStats                   BandwidthStats;                                // 0x0020 (0x000C) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x002C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct IpDrv.MeshBeaconHost.ClientMeshBeaconConnection
// Size: 0x00B8 (0x00B4 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FClientMeshBeaconConnection
{
	struct FUniqueNetId                                PlayerNetId;                                   // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              ElapsedHeartbeatTime;                          // 0x0048 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x004C (0x0004) MISSED OFFSET
	struct FPointer                                    Socket;                                        // 0x0050 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	uint32_t                                           bConnectionAccepted : 1;                       // 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          UnknownData01[0x4];                            // 0x005C (0x0004) MISSED OFFSET
	struct FClientConnectionBandwidthTestData          BandwidthTest;                                 // 0x0060 (0x0030) [0x0000000000000000]               
	uint8_t                                            NatType;                                       // 0x0090 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData02[0x3];                            // 0x0091 (0x0003) MISSED OFFSET
	uint32_t                                           bCanHostVs : 1;                                // 0x0094 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              GoodHostRatio;                                 // 0x0098 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData03[0x4];                            // 0x009C (0x0004) MISSED OFFSET
	class TArray<struct FConnectionBandwidthStats>     BandwidthHistory;                              // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            MinutesSinceLastTest;                          // 0x00B0 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x00B4 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct IpDrv.OnlineAuthInterfaceImpl.AuthCodeRequest
// Size: 0x0068 (0x0064 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FAuthCodeRequest
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                      // 0x0048 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            RequestID;                                     // 0x0060 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0064 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct IpDrv.OnlineEventsInterfaceMcp.EventUploadConfig
// Size: 0x0020
struct FEventUploadConfig
{
	uint8_t                                            UploadType;                                    // 0x0000 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                          UnknownData00[0x7];                            // 0x0001 (0x0007) MISSED OFFSET
	class FString                                      UploadUrl;                                     // 0x0008 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	float                                              Timeout;                                       // 0x0018 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bUseCompression : 1;                           // 0x001C (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
};

// ScriptStruct IpDrv.OnlineNewsInterfaceMcp.NewsCacheEntry
// Size: 0x0038
struct FNewsCacheEntry
{
	class FString                                      NewsUrl;                                       // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint8_t                                            ReadState;                                     // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                            NewsType;                                      // 0x0011 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                          UnknownData00[0x6];                            // 0x0012 (0x0006) MISSED OFFSET
	class FString                                      NewsItem;                                      // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              Timeout;                                       // 0x0028 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bIsUnicode : 1;                                // 0x002C (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	struct FPointer                                    HttpDownloader;                                // 0x0030 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct IpDrv.OnlinePlaylistManager.ConfiguredGameSetting
// Size: 0x0030
struct FConfiguredGameSetting
{
	int32_t                                            GameSettingId;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      GameSettingsClassName;                         // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      URL;                                           // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UOnlineGameSettings*                         GameSettings;                                  // 0x0028 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct IpDrv.OnlinePlaylistManager.Playlist
// Size: 0x0080
struct FPlaylist
{
	class TArray<struct FConfiguredGameSetting>        ConfiguredGames;                               // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            PlaylistId;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            LoadBalanceId;                                 // 0x0014 (0x0004) [0x0000000000000000]               
	class FString                                      LocalizationString;                            // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              ContentIds;                                    // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            TeamSize;                                      // 0x0038 (0x0004) [0x0000000000000000]               
	int32_t                                            TeamCount;                                     // 0x003C (0x0004) [0x0000000000000000]               
	int32_t                                            MaxPartySize;                                  // 0x0040 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0044 (0x0004) MISSED OFFSET
	class FString                                      Name;                                          // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      URL;                                           // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            MatchType;                                     // 0x0068 (0x0004) [0x0000000000000000]               
	uint32_t                                           bDisableDedicatedServerSearches : 1;           // 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	class TArray<class FName>                          MapCycle;                                      // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.OnlinePlaylistManager.PlaylistPopulation
// Size: 0x000C
struct FPlaylistPopulation
{
	int32_t                                            PlaylistId;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            WorldwideTotal;                                // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            RegionTotal;                                   // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.OnlineSubsystemCommonImpl.SanitizeCallbackData
// Size: 0x0030
struct FSanitizeCallbackData
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	struct FScriptDelegate                             Callback;                                      // 0x0008 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Comment;                                       // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.OnlineTitleFileDownloadMcp.TitleFileMcp
// 0x0008 (0x0028 - 0x0030)
struct FTitleFileMcp : FTitleFile
{
	struct FPointer                                    HttpDownloader;                                // 0x0028 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct IpDrv.PartyBeacon.PlayerReservation
// Size: 0x0068 (0x0064 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FPlayerReservation
{
	struct FUniqueNetId                                NetId;                                         // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Skill;                                         // 0x0048 (0x0004) [0x0000000000000000]               
	int32_t                                            XpLevel;                                       // 0x004C (0x0004) [0x0000000000000000]               
	struct FDouble                                     Mu;                                            // 0x0050 (0x0008) [0x0000000000000000]               
	struct FDouble                                     Sigma;                                         // 0x0058 (0x0008) [0x0000000000000000]               
	float                                              ElapsedSessionTime;                            // 0x0060 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0064 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct IpDrv.PartyBeacon.PartyReservation
// Size: 0x0060
struct FPartyReservation
{
	int32_t                                            TeamNum;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	struct FUniqueNetId                                PartyLeader;                                   // 0x0008 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FPlayerReservation>            PartyMembers;                                  // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.PartyBeaconHost.ClientBeaconConnection
// Size: 0x0058
struct FClientBeaconConnection
{
	struct FUniqueNetId                                PartyLeader;                                   // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              ElapsedHeartbeatTime;                          // 0x0048 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x004C (0x0004) MISSED OFFSET
	struct FPointer                                    Socket;                                        // 0x0050 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
};

// ScriptStruct IpDrv.TitleFileDownloadCache.TitleFileCacheEntry
// 0x0030 (0x0028 - 0x0058)
struct FTitleFileCacheEntry : FTitleFile
{
	class FString                                      LogicalName;                                   // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Hash;                                          // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            FileOp;                                        // 0x0048 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x7];                            // 0x0049 (0x0007) MISSED OFFSET
	struct FPointer                                    Ar;                                            // 0x0050 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
