/*
#############################################################################################
# RocketLeague (1.0.10897.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: ProjectX_structs.hpp
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
# Structs
# ========================================================================================= #
*/

// ScriptStruct ProjectX._Types_X.SkillRating
// 0x0008
struct FSkillRating
{
	float                                              Mu;                                            // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Sigma;                                         // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.ReservationData
// 0x0110
struct FReservationData
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PlayerName;                                    // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                PartyID;                                       // 0x0058 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            Status;                                        // 0x00A0 (0x0001) [0x0000000000000000]               
	float                                              TimeoutTime;                                   // 0x00A4 (0x0004) [0x0000000000000000]               
	uint32_t                                           bDisableCrossPlay : 1;                         // 0x00A8 (0x0004) [0x0000000000000000] [0x00000001] 
	class APlayerReplicationInfo*                      PRI;                                           // 0x00B0 (0x0008) [0x0000000000000000]               
	uint8_t                                            Team;                                          // 0x00B8 (0x0001) [0x0000000000000000]               
	uint64_t                                           ClubID;                                        // 0x00C0 (0x0008) [0x0001000000000000]               
	class UAddReservationMessage_X*                    ReservationMessage;                            // 0x00C8 (0x0008) [0x0000000000000000]               
	class UIReservationConnection_X*                   Connection_Object;                             // 0x00D0 (0x0010) [0x0000000000000000] 
	class UIReservationConnection_X*                   Connection_Interface;                          // 0x00D0 (0x0010) [0x0000000000000000]               
	uint32_t                                           bIgnoreBeaconDisconnect : 1;                   // 0x00E0 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FSkillRating                                Skill;                                         // 0x00E4 (0x0008) [0x0000000000000000]               
	TArray<struct FName>                               MapLikes;                                      // 0x00F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               MapDislikes;                                   // 0x0100 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.ClubReplicationInfo
// 0x0043
struct FClubReplicationInfo
{
	uint64_t                                           ClubID;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bVerified : 1;                                 // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       EquippedTitle;                                 // 0x000C (0x0008) [0x0000000000000000]               
	class FString                                      ClubName;                                      // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ClubTag;                                       // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            PrimaryColor;                                  // 0x0038 (0x0004) [0x0000000000000000]               
	int32_t                                            AccentColor;                                   // 0x003C (0x0004) [0x0000000000000000]               
	uint8_t                                            FirstBadgeTier;                                // 0x0040 (0x0001) [0x0000000000000000]               
	uint8_t                                            SecondBadgeTier;                               // 0x0041 (0x0001) [0x0000000000000000]               
	uint8_t                                            ThirdBadgeTier;                                // 0x0042 (0x0001) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.MigrationReservationData
// 0x00E0
struct FMigrationReservationData
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PlayerName;                                    // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                PartyID;                                       // 0x0058 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            Status;                                        // 0x00A0 (0x0001) [0x0000000000000000]               
	uint32_t                                           bDisableCrossPlay : 1;                         // 0x00A4 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            Team;                                          // 0x00A8 (0x0001) [0x0000000000000000]               
	struct FSkillRating                                Skill;                                         // 0x00AC (0x0008) [0x0000000000000000]               
	TArray<struct FName>                               MapLikes;                                      // 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               MapDislikes;                                   // 0x00C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UNetworkEncryptionKey*                       SecurityKey;                                   // 0x00D8 (0x0008) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.PlayerSeasonRewardProgress
// 0x0050
struct FPlayerSeasonRewardProgress
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            SeasonLevel;                                   // 0x0048 (0x0004) [0x0000000000000000]               
	int32_t                                            SeasonLevelWins;                               // 0x004C (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.SuperSonicConfig
// 0x000C
struct FSuperSonicConfig
{
	float                                              Speed;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              TurnoffSpeedBuffer;                            // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              TurnoffTime;                                   // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.BumpAngleCheckConfig
// 0x0014
struct FBumpAngleCheckConfig
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BumpAngleYaw;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              BumpAnglePitch;                                // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              DemolishAngleYaw;                              // 0x000C (0x0004) [0x0000000000000000]               
	float                                              DemolishAnglePitch;                            // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.BumpAngleCurveCheckConfig
// 0x0068
struct FBumpAngleCurveCheckConfig
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FInterpCurveFloat                           BumpAngleCurveYaw;                             // 0x0008 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FInterpCurveFloat                           BumpAngleCurvePitch;                           // 0x0020 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FInterpCurveFloat                           DemolishAngleCurveYaw;                         // 0x0038 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FInterpCurveFloat                           DemolishAngleCurvePitch;                       // 0x0050 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.CarInteractionConfig
// 0x0104
struct FCarInteractionConfig
{
	float                                              PushFactor;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	struct FInterpCurveFloat                           BumperPushFactorCurveGround;                   // 0x0008 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FInterpCurveFloat                           BumperPushFactorCurveAir;                      // 0x0020 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FInterpCurveFloat                           ZPushFactorCurve;                              // 0x0038 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              BumpInterval;                                  // 0x0050 (0x0004) [0x0000000000000000]               
	struct FBumpAngleCheckConfig                       COMAngleCheck;                                 // 0x0054 (0x0014) [0x0000000000000000]               
	struct FBumpAngleCheckConfig                       VictimHitAngleCheck;                           // 0x0068 (0x0014) [0x0000000000000000]               
	struct FBumpAngleCheckConfig                       AttackerHitAngleCheck;                         // 0x007C (0x0014) [0x0000000000000000]               
	struct FBumpAngleCurveCheckConfig                  VictimHitAngleCurveCheck;                      // 0x0090 (0x0068) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bCheckImpactNormal : 1;                        // 0x00F8 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ImpactNormalDotProductDemo;                    // 0x00FC (0x0004) [0x0000000000000000]               
	float                                              ImpactNormalDotProductBump;                    // 0x0100 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.PsyNetPersonaData
// 0x0078
struct FPsyNetPersonaData
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PlayerName;                                    // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PresenceInfo;                                  // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PresenceState;                                 // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.SuperRegionData
// 0x0030
struct FSuperRegionData
{
	class FString                                      Region;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Label;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              SubRegions;                                    // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.RegionSecret
// 0x0020
struct FRegionSecret
{
	class FString                                      Region;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Secret;                                        // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.OnlineStatus
// 0x0059
struct FOnlineStatus
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PresenceInfo;                                  // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            PresenceState;                                 // 0x0058 (0x0001) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.HonorDuelChallenge
// 0x0090
struct FHonorDuelChallenge
{
	struct FUniqueNetId                                Challenger;                                    // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                Defender;                                      // 0x0048 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.PsyNetBeaconPartyReservation
// 0x0010
struct FPsyNetBeaconPartyReservation
{
	TArray<struct FUniqueNetId>                        Members;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.PsyNetBeaconPlayerReservation
// 0x0060
struct FPsyNetBeaconPlayerReservation
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class UNetworkEncryptionKey*                       Keys;                                          // 0x0048 (0x0008) [0x0000000000000000]               
	class FString                                      DSConnectToken;                                // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.PsyNetBeaconReservation
// 0x0048
struct FPsyNetBeaconReservation
{
	class FString                                      ReservationID;                                 // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Playlist;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           IsBackfill : 1;                                // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           IsBotMatch : 1;                                // 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	TArray<class FString>                              BotNames;                                      // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FPsyNetBeaconPlayerReservation>      Players;                                       // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FPsyNetBeaconPartyReservation>       Parties;                                       // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.GFxBlurRect
// 0x0020
struct FGFxBlurRect
{
	class FString                                      RectID;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              TopLeftX;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              TopLeftY;                                      // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              BottomRightX;                                  // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              BottomRightY;                                  // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.ServerReservationData
// 0x0070
struct FServerReservationData
{
	class FString                                      ServerName;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Playlist;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	class FString                                      Region;                                        // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ReservationID;                                 // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DSRToken;                                      // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UNetworkEncryptionKey*                       Keys;                                          // 0x0048 (0x0008) [0x0000000000000000]               
	class FString                                      JoinName;                                      // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      JoinPassword;                                  // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.CheckReservationResponse
// 0x007C
struct FCheckReservationResponse
{
	class FString                                      IP;                                            // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ServerName;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Playlist;                                      // 0x0020 (0x0004) [0x0000000000000000]               
	class FString                                      Region;                                        // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Host;                                          // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Port;                                          // 0x0048 (0x0004) [0x0000000000000000]               
	class FString                                      ReservationID;                                 // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DSConnectToken;                                // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UNetworkEncryptionKey*                       Keys;                                          // 0x0070 (0x0008) [0x0000000000000000]               
	uint32_t                                           IsServerKey : 1;                               // 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct ProjectX._Types_X.MapPrefs
// 0x0020
struct FMapPrefs
{
	TArray<struct FName>                               Likes;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               Dislikes;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.RenderProfile
// 0x0028
struct FRenderProfile
{
	float                                              GameThreadTime;                                // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              RenderThreadTime;                              // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              GPUTime;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              FrameTime;                                     // 0x000C (0x0004) [0x0000000000000000]               
	float                                              FPS;                                           // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              AccumGameThreadTime;                           // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              AccumRenderThreadTime;                         // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              AccumGPUTime;                                  // 0x001C (0x0004) [0x0000000000000000]               
	float                                              AccumFrameTime;                                // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            NumSamples;                                    // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.MetricsEvent
// 0x0070
struct FMetricsEvent
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0020000000400000] (CPF_NeedCtorLink)
	float                                              TimeSeconds;                                   // 0x0048 (0x0004) [0x0000000000000000]               
	int32_t                                            Version;                                       // 0x004C (0x0004) [0x0000000000000000]               
	class FString                                      EventName;                                     // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      EventData;                                     // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.ActiveServerData
// 0x00A0
struct FActiveServerData
{
	struct FServerReservationData                      Reservation;                                   // 0x0000 (0x0070) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PingURL;                                       // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      GameURL;                                       // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      JoinCredentials;                               // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.CrossplayGroup
// 0x0010
struct FCrossplayGroup
{
	TArray<uint8_t>                                    Platforms;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.ServerConnectionInfo
// 0x0030
struct FServerConnectionInfo
{
	class FString                                      ServerAddress;                                 // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PingAddress;                                   // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ServerName;                                    // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.TierSkillRating
// 0x0018 (0x0008 - 0x0020)
struct FTierSkillRating : FSkillRating
{
	int32_t                                            Tier;                                          // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            Division;                                      // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            MatchesPlayed;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            PlacementMatchesPlayed;                        // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            WinStreak;                                     // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              MMR;                                           // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.SkillMatchPartyRating
// 0x0004 (0x0020 - 0x0024)
struct FSkillMatchPartyRating : FTierSkillRating
{
	int32_t                                            PartyID;                                       // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.SkillMatchParty
// 0x0020
struct FSkillMatchParty
{
	int32_t                                            PartyID;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              PctTimePlayed;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	uint32_t                                           bQuitter : 1;                                  // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray<struct FUniqueNetId>                        Players;                                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.SkillMatchData
// 0x0024
struct FSkillMatchData
{
	class FString                                      ServerId;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Playlist;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            WinningTeam;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            Team0Score;                                    // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            Team1Score;                                    // 0x001C (0x0004) [0x0000000000000000]               
	uint32_t                                           bOverTime : 1;                                 // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct ProjectX._Types_X.ClubColorSet
// 0x0008
struct FClubColorSet
{
	uint8_t                                            TeamColorID;                                   // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            CustomColorID;                                 // 0x0001 (0x0001) [0x0000000000000000]               
	uint32_t                                           bTeamColorSet : 1;                             // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCustomColorSet : 1;                           // 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct ProjectX._Types_X.CustomMatchTeamSettings
// 0x001C
struct FCustomMatchTeamSettings
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FClubColorSet                               Colors;                                        // 0x0010 (0x0008) [0x0000000000000000]               
	int32_t                                            GameScore;                                     // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.CustomMatchSettings
// 0x0088
struct FCustomMatchSettings
{
	class FString                                      GameTags;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       MapName;                                       // 0x0010 (0x0008) [0x0000000000000000]               
	uint8_t                                            GameMode;                                      // 0x0018 (0x0001) [0x0000000000000000]               
	int32_t                                            MaxPlayerCount;                                // 0x001C (0x0004) [0x0000000000000000]               
	class FString                                      ServerName;                                    // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Password;                                      // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bPublic : 1;                                   // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bClubServer : 1;                               // 0x0040 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FCustomMatchTeamSettings                    TeamSettings[0x2];                             // 0x0048 (0x0040) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.ServerResult
// 0x00A8
struct FServerResult
{
	class FString                                      Address;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ServerName;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FCustomMatchSettings                        Settings;                                      // 0x0020 (0x0088) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.SkillMatchPlayer
// 0x0060
struct FSkillMatchPlayer
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              PctTimePlayed;                                 // 0x0048 (0x0004) [0x0000000000000000]               
	float                                              TimePlayed;                                    // 0x004C (0x0004) [0x0000000000000000]               
	uint32_t                                           bQuitter : 1;                                  // 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            PartyID;                                       // 0x0054 (0x0004) [0x0000000000000000]               
	int32_t                                            Score;                                         // 0x0058 (0x0004) [0x0000000000000000]               
	int32_t                                            Team;                                          // 0x005C (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.ReplicatedReservationData
// 0x0059
struct FReplicatedReservationData
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PlayerName;                                    // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            Status;                                        // 0x0058 (0x0001) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.PartyJoinMatchSettings
// 0x0058
struct FPartyJoinMatchSettings
{
	class FString                                      ServerName;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            PlaylistId;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           bFriendJoin : 1;                               // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      CustomPassword;                                // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ReservationID;                                 // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      JoinName;                                      // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      JoinPassword;                                  // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.JoinMatchSettings
// 0x0020
struct FJoinMatchSettings
{
	uint8_t                                            MatchType;                                     // 0x0000 (0x0001) [0x0000000000000000]               
	int32_t                                            PlaylistId;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	uint32_t                                           bFriendJoin : 1;                               // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bMigration : 1;                                // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bRankedReconnect : 1;                          // 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
	class FString                                      Password;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.ReservationPlayerData
// 0x00A0
struct FReservationPlayerData
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PlayerName;                                    // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              SkillMu;                                       // 0x0058 (0x0004) [0x0000000000000000]               
	float                                              SkillSigma;                                    // 0x005C (0x0004) [0x0000000000000000]               
	int32_t                                            Tier;                                          // 0x0060 (0x0004) [0x0000000000000000]               
	uint32_t                                           bRemotePlayer : 1;                             // 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray<int32_t>                                    Loadout;                                       // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               MapLikes;                                      // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               MapDislikes;                                   // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint64_t                                           ClubID;                                        // 0x0098 (0x0008) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.ReplicatedRBStateNoQuat
// 0x0038
struct FReplicatedRBStateNoQuat
{
	float                                              QuatX;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              QuatY;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              QuatZ;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              QuatW;                                         // 0x000C (0x0004) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     LinearVelocity;                                // 0x001C (0x000C) [0x0000000000000000]               
	struct FVector                                     AngularVelocity;                               // 0x0028 (0x000C) [0x0000000000000000]               
	uint32_t                                           bSleeping : 1;                                 // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct ProjectX._Types_X.ReplicatedRBState
// 0x003C
struct FReplicatedRBState
{
	struct FQuat                                       Quaternion;                                    // 0x0000 (0x0010) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     LinearVelocity;                                // 0x001C (0x000C) [0x0000000000000000]               
	struct FVector                                     AngularVelocity;                               // 0x0028 (0x000C) [0x0000000000000000]               
	float                                              Time;                                          // 0x0034 (0x0004) [0x0000000000000000]               
	uint32_t                                           bSleeping : 1;                                 // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bNewData : 1;                                  // 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct ProjectX._Types_X.PlayerBinding
// 0x002C
struct FPlayerBinding
{
	struct FName                                       Action;                                        // 0x0000 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FName                                       Key;                                           // 0x0008 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	uint8_t                                            AxisSign;                                      // 0x0010 (0x0001) [0x0000000040000000] (CPF_EditInlineNotify)
	uint8_t                                            PressType;                                     // 0x0011 (0x0001) [0x0000000040000000] (CPF_EditInlineNotify)
	float                                              Speed;                                         // 0x0014 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	uint32_t                                           bRequired : 1;                                 // 0x0018 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
	uint8_t                                            Remappable;                                    // 0x001C (0x0001) [0x0000000000000000]               
	float                                              PressedTime;                                   // 0x0020 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              ReleasedTime;                                  // 0x0024 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bTapped : 1;                                   // 0x0028 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bToggled : 1;                                  // 0x0028 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
};

// ScriptStruct ProjectX._Types_X.BindingAction
// 0x0038
struct FBindingAction
{
	struct FName                                       Action;                                        // 0x0000 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FName                                       Category;                                      // 0x0008 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FName                                       Axis;                                          // 0x0010 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	uint8_t                                            AxisSign;                                      // 0x0018 (0x0001) [0x0000000040000000] (CPF_EditInlineNotify)
	class FString                                      Command;                                       // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bDisableRemapping : 1;                         // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            Priority;                                      // 0x0034 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.PlaylistTierSkillRating
// 0x0004 (0x0020 - 0x0024)
struct FPlaylistTierSkillRating : FTierSkillRating
{
	int32_t                                            Playlist;                                      // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.PlayerPermissions
// 0x0009
struct FPlayerPermissions
{
	uint8_t                                            TextChat;                                      // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            VoiceChat;                                     // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                            Trade;                                         // 0x0002 (0x0001) [0x0000000000000000]               
	uint32_t                                           bRequirePinForFriends : 1;                     // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bItemShopNotificationsAllowed : 1;             // 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	uint8_t                                            VoiceReporting;                                // 0x0008 (0x0001) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.PartyMemberServer
// 0x0044
struct FPartyMemberServer
{
	class FString                                      ServerName;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      CustomPassword;                                // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      JoinName;                                      // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      JoinPassword;                                  // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            PlaylistId;                                    // 0x0040 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.PlaylistSkillRating
// 0x0004 (0x0020 - 0x0024)
struct FPlaylistSkillRating : FTierSkillRating
{
	int32_t                                            Playlist;                                      // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.PlayerSkillRating
// 0x004C (0x0024 - 0x0070)
struct FPlayerSkillRating : FPlaylistSkillRating
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0028 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.UpdatedPlayerSkillRating
// 0x0010 (0x0070 - 0x0080)
struct FUpdatedPlayerSkillRating : FPlayerSkillRating
{
	float                                              PrevMu;                                        // 0x0070 (0x0004) [0x0000000000000000]               
	float                                              PrevSigma;                                     // 0x0074 (0x0004) [0x0000000000000000]               
	int32_t                                            PrevTier;                                      // 0x0078 (0x0004) [0x0000000000000000]               
	int32_t                                            PrevDivision;                                  // 0x007C (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.CachedRegionPing
// 0x000C
struct FCachedRegionPing
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Ping;                                          // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.PartyMember
// 0x0171
struct FPartyMember
{
	struct FUniqueNetId                                PrimaryMemberId;                               // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                MemberId;                                      // 0x0048 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      MemberName;                                    // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            MatchmakeRestrictions;                         // 0x00A0 (0x0004) [0x0000000000000000]               
	int32_t                                            LocalControllerId;                             // 0x00A4 (0x0004) [0x0000000000000000]               
	int32_t                                            XpLevel;                                       // 0x00A8 (0x0004) [0x0000000000000000]               
	uint32_t                                           bCompletedChallenges : 1;                      // 0x00AC (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            CrossChatState;                                // 0x00B0 (0x0001) [0x0000000000000000]               
	uint32_t                                           bDisableCrossPlay : 1;                         // 0x00B4 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bTradingEnabled : 1;                           // 0x00B4 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FUniqueNetId                                TradingMemberId;                               // 0x00B8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FGuid                                       TradeId;                                       // 0x0100 (0x0010) [0x0000000000000000]               
	uint32_t                                           bReadyToLockTrade : 1;                         // 0x0110 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bReadyToConfirmTrade : 1;                      // 0x0110 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FPartyMemberServer                          Server;                                        // 0x0118 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueLobbyId                              PlatformParty;                                 // 0x0160 (0x0010) [0x0000000000000000]               
	uint8_t                                            VoiceReportingLevel;                           // 0x0170 (0x0001) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.PlayerTitleData
// 0x0028
struct FPlayerTitleData
{
	struct FName                                       Id;                                            // 0x0000 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	class FString                                      Text;                                          // 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FName                                       Category;                                      // 0x0018 (0x0008) [0x0000000000000000]               
	struct FColor                                      Color;                                         // 0x0020 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FColor                                      GlowColor;                                     // 0x0024 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct ProjectX._Types_X.PlayerTitleCategory
// 0x0028
struct FPlayerTitleCategory
{
	struct FName                                       Id;                                            // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      Color;                                         // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      GlowColor;                                     // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.LinkedAccount
// 0x0020
struct FLinkedAccount
{
	class FString                                      identityProviderId;                            // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      AccountId;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.IntVector3
// 0x000C
struct FIntVector3
{
	int32_t                                            X;                                             // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Y;                                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Z;                                             // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct ProjectX._Types_X.DownloadedImage
// 0x0018
struct FDownloadedImage
{
	class FString                                      URL;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UTexture2DDynamic*                           Texture;                                       // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.ClubMember
// 0x00B1
struct FClubMember
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                EpicPlayerID;                                  // 0x0048 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PlayerName;                                    // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      EpicPlayerName;                                // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            RoleID;                                        // 0x00B0 (0x0001) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.PlayerPermissionsList
// 0x0058
struct FPlayerPermissionsList
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<uint8_t>                                    Permissions;                                   // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.NetStats
// 0x000C
struct FNetStats
{
	float                                              PingMin;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Jitter;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              LossPct;                                       // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.SetPlayerStorageResult_X.SetPlayerStorageResultItem
// 0x0010
struct FSetPlayerStorageResultItem
{
	struct FName                                       Category;                                      // 0x0000 (0x0008) [0x0001000000000000]               
	int32_t                                            Tick;                                          // 0x0008 (0x0004) [0x0001000000000000]               
	uint32_t                                           bOutOfSync : 1;                                // 0x000C (0x0004) [0x0001000000000000] [0x00000001] 
};

// ScriptStruct ProjectX.OnlinePlayerStorageQueue_X.PendingStorage
// 0x0014
struct FPendingStorage
{
	class UObject*                                     Data;                                          // 0x0000 (0x0008) [0x0001000000000000]               
	class UClass*                                      DataClass;                                     // 0x0008 (0x0008) [0x0001000000000000]               
	int32_t                                            Tick;                                          // 0x0010 (0x0004) [0x0001000000000000]               
};

// ScriptStruct ProjectX.BlockStatusReporter_X.PlayerBlockListenData
// 0x0028
struct FPlayerBlockListenData
{
	class FString                                      EpicId;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                      // 0x0010 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.CabinedModeResponse.CabinedModeData
// 0x0028
struct FCabinedModeData
{
	uint32_t                                           cabinedMode : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      AccountId;                                     // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FLinkedAccount>                      linkedAccounts;                                // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.OnlineGameMatchmaking_X.DSRegionInfo
// 0x0014
struct FDSRegionInfo
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Ping;                                          // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.OnlineMessageComponent_X.OnlineMessageHandler
// 0x0018
struct FOnlineMessageHandler
{
	class UClass*                                      MessageClass;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	TArray<struct FScriptDelegate>                     Delegates;                                     // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.PartyMessage_LocalPlayers_X.SimplePartyMember
// 0x0058
struct FSimplePartyMember
{
	struct FUniqueNetId                                MemberId;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      MemberName;                                    // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.OnlineGameParty_X.PlaylistRestrictionPlayer
// 0x004C
struct FPlaylistRestrictionPlayer
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Tier;                                          // 0x0048 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.OnlinePlayerFriends_X.EpicSocialTaskData
// 0x0060
struct FEpicSocialTaskData
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             OnCompleteCallback;                            // 0x0048 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.OnlinePlayerStorageQueue_X.StorageMaxSize
// 0x000C
struct FStorageMaxSize
{
	struct FName                                       Category;                                      // 0x0000 (0x0008) [0x0001000000000000]               
	int32_t                                            MaxSizeBytes;                                  // 0x0008 (0x0004) [0x0001000000000000]               
};

// ScriptStruct ProjectX.RPC_PlayerStorageSet_X.SetPlayerStorageRequestItem
// 0x0021
struct FSetPlayerStorageRequestItem
{
	struct FName                                       Category;                                      // 0x0000 (0x0008) [0x0001000000000000]               
	int32_t                                            Tick;                                          // 0x0008 (0x0004) [0x0001000000000000]               
	int32_t                                            Checksum;                                      // 0x000C (0x0004) [0x0001000000000000]               
	class FString                                      Data;                                          // 0x0010 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	uint8_t                                            Encoding;                                      // 0x0020 (0x0001) [0x0001000000000000]               
};

// ScriptStruct ProjectX.Parties_X.PsyNetPartyInfo
// 0x0070
struct FPsyNetPartyInfo
{
	class FString                                      PartyID;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint64_t                                           CreatedAt;                                     // 0x0010 (0x0008) [0x0000000000000000]               
	struct FUniqueNetId                                CreatedByUserId;                               // 0x0018 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      JoinID;                                        // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.WordFilterTypes_X.WordFilterPair
// 0x0078
struct FWordFilterPair
{
	class FString                                      Id;                                            // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Key;                                           // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Value;                                         // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            Usage;                                         // 0x0030 (0x0001) [0x0000000000000000]               
	uint32_t                                           bPending : 1;                                  // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              LastRequestTime;                               // 0x0038 (0x0004) [0x0000000000000000]               
	class UError*                                      Error;                                         // 0x0040 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             Callback;                                      // 0x0048 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             ErrorCallback;                                 // 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._SharedHelpers.Orientation
// 0x0018
struct FOrientation
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct ProjectX.AddReservationMessagePublic_X.OnlinePlayerMapPrefs
// 0x0068
struct FOnlinePlayerMapPrefs
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               MapLikes;                                      // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               MapDislikes;                                   // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.AnimateParametersComponent_X.AnimatedParam
// 0x0008
struct FAnimatedParam
{
	struct FName                                       ParamName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct ProjectX.AnimateParametersComponent_X.AnimatedFloatParam
// 0x0018 (0x0008 - 0x0020)
struct FAnimatedFloatParam : FAnimatedParam
{
	struct FInterpCurveFloat                           ValueOverTime;                                 // 0x0008 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.AnimateParametersComponent_X.AnimatedVectorParam
// 0x0018 (0x0008 - 0x0020)
struct FAnimatedVectorParam : FAnimatedParam
{
	struct FInterpCurveVector                          ValueOverTime;                                 // 0x0008 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.AnimateParametersComponent_X.AnimatedLinearColorParam
// 0x0018 (0x0008 - 0x0020)
struct FAnimatedLinearColorParam : FAnimatedParam
{
	struct FInterpCurveLinearColor                     ValueOverTime;                                 // 0x0008 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.OnlineConfig_X.ModifierSubscription
// 0x0038
struct FModifierSubscription
{
	class UClass*                                      ObjClass;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             OnAdd;                                         // 0x0008 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             OnRemove;                                      // 0x0020 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.AprilConfig_X.QuickChatOverridePair
// 0x0020
struct FQuickChatOverridePair
{
	class FString                                      Id;                                            // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Override;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.Camera_X.CameraKnockBase
// 0x0010
struct FCameraKnockBase
{
	float                                              BlendInTime;                                   // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendOutTime;                                  // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Falloff;                                       // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Time;                                          // 0x000C (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct ProjectX.Camera_X.CameraOrientation
// 0x002C
struct FCameraOrientation
{
	struct FVector                                     Focus;                                         // 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x000C (0x000C) [0x0000000000000000]               
	float                                              Distance;                                      // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              FOV;                                           // 0x001C (0x0004) [0x0000000000000000]               
	struct FVector                                     CalculatedLocation;                            // 0x0020 (0x000C) [0x0000000000000000]               
};

// ScriptStruct ProjectX.CameraStateBlender_X.CameraTransition
// 0x004C
struct FCameraTransition
{
	class UCameraState_X*                              CameraState;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	struct FViewTargetTransitionParams                 BlendParams;                                   // 0x0008 (0x0010) [0x0000000000000000]               
	float                                              RemainingTime;                                 // 0x0018 (0x0004) [0x0000000000000000]               
	struct FCameraOrientation                          SnapshotPOV;                                   // 0x001C (0x002C) [0x0000000000000000]               
	uint32_t                                           bStarted : 1;                                  // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct ProjectX.Camera_X.RotationCameraKnock
// 0x000C (0x0010 - 0x001C)
struct FRotationCameraKnock : FCameraKnockBase
{
	struct FRotator                                    Amount;                                        // 0x0010 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct ProjectX.Camera_X.LocationCameraKnock
// 0x000C (0x0010 - 0x001C)
struct FLocationCameraKnock : FCameraKnockBase
{
	struct FVector                                     Amount;                                        // 0x0010 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct ProjectX.Camera_X.VectorInterpRate
// 0x0018
struct FVectorInterpRate
{
	float                                              MaxDistance;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              InterpRate;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              ForwardScale;                                  // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              BackwardScale;                                 // 0x000C (0x0004) [0x0000000000000000]               
	float                                              SideScale;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              UpDownScale;                                   // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.CheatManager_X.TestStructEvent
// 0x0018
struct FTestStructEvent
{
	struct FScriptDelegate                             Callback;                                      // 0x0000 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.ClassPropertyConfig_X.PropertyOverride
// 0x0030
struct FPropertyOverride
{
	class FString                                      Class;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Property;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Value;                                         // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.ClientNetMetrics_X.PingStats
// 0x0010
struct FPingStats
{
	float                                              Min;                                           // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Max;                                           // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              Average;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Median;                                        // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.ClubDetails_X.StatBadge
// 0x0009
struct FStatBadge
{
	struct FName                                       Stat;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            Badge;                                         // 0x0008 (0x0001) [0x0000000000000000]               
};

// ScriptStruct ProjectX.ColorPalette_X.ColorPosition
// 0x0008
struct FColorPosition
{
	int32_t                                            Row;                                           // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Column;                                        // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.ContentConfig_X.ContentPair
// 0x0020
struct FContentPair
{
	struct FName                                       KeyName;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      Content;                                       // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FEncryptedKeyIndex                          Index;                                         // 0x0018 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bUnreleased : 1;                               // 0x001C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
};

// ScriptStruct ProjectX.EffectsMap_X.EffectsMapping
// 0x0010
struct FEffectsMapping
{
	class UPhysicalMaterial*                           PhysicalMaterial;                              // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             Particle;                                      // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct ProjectX.EngineShare_X.DynamicallyLoadedPackage
// 0x0020
struct FDynamicallyLoadedPackage
{
	class FString                                      Tag;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PackageName;                                   // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.EOS_GetAccountsResponse.EOSAccountInfo
// 0x0038
struct FEOSAccountInfo
{
	class FString                                      AccountId;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Created;                                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           Favorite : 1;                                  // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      NickName;                                      // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.EOS_AccountSummaryResponse.PrivacySettings
// 0x0010
struct FPrivacySettings
{
	class FString                                      ReceiveInvites;                                // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.EOS_AccountSummaryResponse.AccountSettings
// 0x0010
struct FAccountSettings
{
	struct FPrivacySettings                            Privacy;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.EOSMetrics_X.MetricEventJsonStruct
// 0x0010
struct FMetricEventJsonStruct
{
	TArray<class UEOSMetricEvent_X*>                   Events;                                        // 0x0000 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.EpicConfig_X.ChatPermissionPair
// 0x0011
struct FChatPermissionPair
{
	class FString                                      PermissionLabel;                               // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            Level;                                         // 0x0010 (0x0001) [0x0000000000000000]               
};

// ScriptStruct ProjectX.EpicConfig_X.TradePermissionPair
// 0x0011
struct FTradePermissionPair
{
	class FString                                      PermissionLabel;                               // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            Level;                                         // 0x0010 (0x0001) [0x0000000000000000]               
};

// ScriptStruct ProjectX.EpicConfig_X.TradePermissionEnabledPair
// 0x0008
struct FTradePermissionEnabledPair
{
	uint8_t                                            Level;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	uint32_t                                           bEnabled : 1;                                  // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct ProjectX.EpochTimerTick_X.EpochTimer
// 0x0020
struct FEpochTimer
{
	struct FScriptDelegate                             Callback;                                      // 0x0000 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	uint64_t                                           EpochTime;                                     // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct ProjectX.ParameterDispenser_X.NameParamPair
// 0x0010
struct FNameParamPair
{
	struct FName                                       Key;                                           // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       Value;                                         // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct ProjectX.ParameterDispenser_X.FloatParamPair
// 0x000C
struct FFloatParamPair
{
	struct FName                                       Key;                                           // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              Value;                                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct ProjectX.ParameterDispenser_X.VectorParamPair
// 0x0014
struct FVectorParamPair
{
	struct FName                                       Key;                                           // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Value;                                         // 0x0008 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct ProjectX.ParameterDispenser_X.ColorParamPair
// 0x0018
struct FColorParamPair
{
	struct FName                                       Key;                                           // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                Value;                                         // 0x0008 (0x0010) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct ProjectX.ParameterDispenser_X.ActorParamPair
// 0x0010
struct FActorParamPair
{
	struct FName                                       Key;                                           // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class AActor*                                      Value;                                         // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct ProjectX.FXActor_X.AttachToParameterWithUnlockAxes
// 0x0009
struct FAttachToParameterWithUnlockAxes
{
	struct FName                                       Parameter;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            IgnoredAxis;                                   // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct ProjectX.FXActor_X.FXAttachment
// 0x012C
struct FFXAttachment
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       SkeletalMeshAttachName;                        // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       SocketOrBoneName;                              // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AttachToParameter;                             // 0x0018 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              AttachDelay;                                   // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DetachDelay;                                   // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LifeTime;                                      // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            Target;                                        // 0x002C (0x0001) [0x0000000000000001] (CPF_Edit)    
	class UActorComponent*                             Component;                                     // 0x0030 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	TArray<class UFXActorEvent_X*>                     AttachAny;                                     // 0x0038 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<class UFXActorEvent_X*>                     DetachAny;                                     // 0x0048 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<class UFXActorEvent_X*>                     AttachAll;                                     // 0x0058 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<class URuntimeParameterBase_X*>             RuntimeParameters;                             // 0x0068 (0x0010) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
	TArray<class UFXAttachmentTraitBase_X*>            Traits;                                        // 0x0078 (0x0010) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
	struct FAttachToParameterWithUnlockAxes            AttachToParameterActor;                        // 0x0088 (0x000C) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            OverrideAttachBehavior;                        // 0x0094 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     OverrideAttachLocationOffset;                  // 0x0098 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    OverrideAttachRotationOffset;                  // 0x00A4 (0x000C) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bCreateDuplicates : 1;                         // 0x00B0 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bWantsAttachment : 1;                          // 0x00B0 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           bInitializedTraits : 1;                        // 0x00B0 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	uint32_t                                           bWarnedMissingSocket : 1;                      // 0x00B0 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	uint32_t                                           bExistingComponent : 1;                        // 0x00B0 (0x0004) [0x0000000800000000] [0x00000010] 
	uint32_t                                           bExistingAttachment : 1;                       // 0x00B0 (0x0004) [0x0000000800000000] [0x00000020] 
	float                                              AttachedTime;                                  // 0x00B4 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            State;                                         // 0x00B8 (0x0001) [0x0000000000002000] (CPF_Transient)
	float                                              WantsAttachmentChangeTime;                     // 0x00BC (0x0004) [0x0000000000002000] (CPF_Transient)
	class USkeletalMeshComponent*                      AttachedToMesh;                                // 0x00C0 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	uint8_t                                           UnknownData00[0x8];                               		// 0x00C8 (0x0008) MISSED OFFSET
	struct FMatrix                                     RelativeTransform;                             // 0x00D0 (0x0040) [0x0000000000002000] (CPF_Transient)
	int32_t                                            BoneIndex;                                     // 0x0110 (0x0004) [0x0000000000002000] (CPF_Transient)
	class AActor*                                      AttachToActor;                                 // 0x0118 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     OffsetToAttachActor;                           // 0x0120 (0x000C) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct ProjectX.FXActor_X.FXActorEventCheck
// 0x000C
struct FFXActorEventCheck
{
	class UFXActorEvent_X*                             Event;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bHasTicked : 1;                                // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct ProjectX.FXActor_X.FXEventSubscription
// 0x0038
struct FFXEventSubscription
{
	class UFXActorEvent_X*                             Event;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             OnPushed;                                      // 0x0008 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             OnPopped;                                      // 0x0020 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.ExplosionHitHandler_X.ContactInformation
// 0x001C
struct FContactInformation
{
	struct FVector                                     ContactLocation;                               // 0x0000 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     ContactVelocity;                               // 0x000C (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              ContactTime;                                   // 0x0018 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct ProjectX.FakeData_X.FakeData1
// 0x0035
struct FFakeData1
{
	class FString                                      string1;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       name1;                                         // 0x0010 (0x0008) [0x0000000000000000]               
	uint32_t                                           bool1 : 1;                                     // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint64_t                                           qword1;                                        // 0x0020 (0x0008) [0x0000000000000000]               
	float                                              float1;                                        // 0x0028 (0x0004) [0x0000000000000000]               
	uint8_t                                            byte1;                                         // 0x002C (0x0001) [0x0000000000000000]               
	int32_t                                            int1;                                          // 0x0030 (0x0004) [0x0000000000000000]               
	uint8_t                                            enum1;                                         // 0x0034 (0x0001) [0x0000000000000000]               
};

// ScriptStruct ProjectX.FakeData_X.FakeData2
// 0x0090
struct FFakeData2
{
	struct FFakeData1                                  struct1;                                       // 0x0000 (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      string1;                                       // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       name1;                                         // 0x0048 (0x0008) [0x0000000000000000]               
	uint32_t                                           bool1 : 1;                                     // 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	uint64_t                                           qword1;                                        // 0x0058 (0x0008) [0x0000000000000000]               
	float                                              float1;                                        // 0x0060 (0x0004) [0x0000000000000000]               
	uint8_t                                            byte1;                                         // 0x0064 (0x0001) [0x0000000000000000]               
	int32_t                                            int1;                                          // 0x0068 (0x0004) [0x0000000000000000]               
	uint8_t                                            enum1;                                         // 0x006C (0x0001) [0x0000000000000000]               
	TArray<struct FFakeData1>                          array1;                                        // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              array2;                                        // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.FakeData_X.FakeData3
// 0x0130
struct FFakeData3
{
	TArray<struct FFakeData2>                          array1;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      string1;                                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FFakeData1                                  struct1;                                       // 0x0020 (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       name1;                                         // 0x0058 (0x0008) [0x0000000000000000]               
	TArray<struct FFakeData2>                          array2;                                        // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FFakeData2>                          array3;                                        // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bool1 : 1;                                     // 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	uint64_t                                           qword1;                                        // 0x0088 (0x0008) [0x0000000000000000]               
	float                                              float1;                                        // 0x0090 (0x0004) [0x0000000000000000]               
	uint8_t                                            byte1;                                         // 0x0094 (0x0001) [0x0000000000000000]               
	int32_t                                            int1;                                          // 0x0098 (0x0004) [0x0000000000000000]               
	uint8_t                                            enum1;                                         // 0x009C (0x0001) [0x0000000000000000]               
	struct FFakeData2                                  struct2;                                       // 0x00A0 (0x0090) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.FakeData_X.FakeData4
// 0x011D
struct FFakeData4
{
	struct FFakeData2                                  struct2;                                       // 0x0000 (0x0090) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FFakeData3>                          array1;                                        // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FFakeData1                                  struct1;                                       // 0x00A0 (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FFakeData2>                          array2;                                        // 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      string1;                                       // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       name1;                                         // 0x00F8 (0x0008) [0x0000000000000000]               
	uint32_t                                           bool1 : 1;                                     // 0x0100 (0x0004) [0x0000000000000000] [0x00000001] 
	uint64_t                                           qword1;                                        // 0x0108 (0x0008) [0x0000000000000000]               
	float                                              float1;                                        // 0x0110 (0x0004) [0x0000000000000000]               
	uint8_t                                            byte1;                                         // 0x0114 (0x0001) [0x0000000000000000]               
	int32_t                                            int1;                                          // 0x0118 (0x0004) [0x0000000000000000]               
	uint8_t                                            enum1;                                         // 0x011C (0x0001) [0x0000000000000000]               
};

// ScriptStruct ProjectX.GameInfo_X.PauserData
// 0x000C
struct FPauserData
{
	class APlayerController*                           PC;                                            // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            PauseNum;                                      // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.GameSettingConfig_X.GameSettingHidingOverride
// 0x000C
struct FGameSettingHidingOverride
{
	struct FName                                       SettingName;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bHidden : 1;                                   // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct ProjectX.GFxDataStore_X.GFxDataStoreColumn
// 0x000C
struct FGFxDataStoreColumn
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	struct FName                                       Name;                                          // 0x0004 (0x0008) [0x0000000000000000]               
};

// ScriptStruct ProjectX.GFxDataStore_X.GFxDataStoreRow
// 0x0018
struct FGFxDataStoreRow
{
	TArray<struct FASValue>                            Values;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UGFxDataRow_X*                               BoundObject;                                   // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct ProjectX.GFxDataStore_X.GFxDataStoreTable
// 0x0080
struct FGFxDataStoreTable
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	TArray<struct FGFxDataStoreColumn>                 Columns;                                       // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FGFxDataStoreRow>                    Rows;                                          // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bLevelTransitionPersistent : 1;                // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FMap_Mirror                                 PrimaryKeyMap;                                 // 0x0030 (0x0050) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct ProjectX.GFxDataStore_X.GFxDirtyRow
// 0x0018
struct FGFxDirtyRow
{
	int32_t                                            RowNum;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	TArray<struct FName>                               DirtyValues;                                   // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.GFxDataStore_X.GFxDirtyTable
// 0x0018
struct FGFxDirtyTable
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	TArray<struct FGFxDirtyRow>                        DirtyRows;                                     // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.GFxEngine_X.DirtyObject
// 0x0014
struct FDirtyObject
{
	class UObject*                                     Object;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class UProperty*                                   Property;                                      // 0x0008 (0x0008) [0x0000000000000000]               
	int32_t                                            Index;                                         // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.GFxSoundPack_X.SoundPackSoundRef
// 0x0010
struct FSoundPackSoundRef
{
	class UAkSoundCue*                                 Sound;                                         // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       Name;                                          // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct ProjectX.LensFlareComponent_X.LensFlareFloatParamCurve
// 0x0038
struct FLensFlareFloatParamCurve
{
	struct FName                                       MaterialParamName;                             // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MaterialParamIndex;                            // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FRawDistributionFloat                       ValueOverTime;                                 // 0x0010 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.LocalCache_X.CacheImportCallbackData
// 0x0020
struct FCacheImportCallbackData
{
	struct FPointer                                    Task;                                          // 0x0000 (0x0008) [0x0000000000001000] (CPF_Native)  
	struct FScriptDelegate                             Callback;                                      // 0x0008 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.LocalCache_X.CacheIOTaskBase
// 0x0030
struct FCacheIOTaskBase
{
	class UObject*                                     CacheObject;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	TArray<uint8_t>                                    Data;                                          // 0x0008 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      Path;                                          // 0x0018 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class UErrorType*                                  Error;                                         // 0x0028 (0x0008) [0x0000000000000000]               
};

// ScriptStruct ProjectX.LocalCache_X.CacheExportTask
// 0x0000 (0x0030 - 0x0030)
struct FCacheExportTask : FCacheIOTaskBase
{
};

// ScriptStruct ProjectX.LocalCache_X.CacheExportCallbackData
// 0x0020
struct FCacheExportCallbackData
{
	struct FPointer                                    Task;                                          // 0x0000 (0x0008) [0x0000000000001000] (CPF_Native)  
	struct FScriptDelegate                             Callback;                                      // 0x0008 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.LocalCache_X.CacheImportTask
// 0x0000 (0x0030 - 0x0030)
struct FCacheImportTask : FCacheIOTaskBase
{
};

// ScriptStruct ProjectX.LocalClubData_X.PlayerClubPair
// 0x0050
struct FPlayerClubPair
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	uint64_t                                           ClubID;                                        // 0x0048 (0x0008) [0x0000000000000000]               
};

// ScriptStruct ProjectX.LocalizationConfig_X.LocOverride
// 0x0040
struct FLocOverride
{
	class FString                                      Section;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Key;                                           // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Value;                                         // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Package;                                       // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.MatchPlayerData_X.MatchSkillUpdate
// 0x0024
struct FMatchSkillUpdate
{
	uint32_t                                           bValid : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Mu;                                            // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              Sigma;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            Tier;                                          // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            Division;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              PrevMu;                                        // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              PrevSigma;                                     // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            PrevTier;                                      // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            PrevDivision;                                  // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.OnlineClubProvider_X.PlayerClubSyncResult
// 0x0050
struct FPlayerClubSyncResult
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class UError*                                      Error;                                         // 0x0048 (0x0008) [0x0000000000000000]               
};

// ScriptStruct ProjectX.PresetMutators_X.CategorySettingPair
// 0x0014
struct FCategorySettingPair
{
	struct FName                                       Category;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       Setting;                                       // 0x0008 (0x0008) [0x0000000000000000]               
	uint32_t                                           bLockSetting : 1;                              // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct ProjectX.RPC_CheckReplacementDedicatedServer_X.CheckReplacementDedicatedServerData
// 0x0034
struct FCheckReplacementDedicatedServerData
{
	class FString                                      ServerId;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      IP;                                            // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Host;                                          // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Port;                                          // 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.OnlineGameDLC_X.SteamJsonResponseGetPublisherAppOwnership3
// 0x0028
struct FSteamJsonResponseGetPublisherAppOwnership3
{
	uint64_t                                           AppID;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	uint64_t                                           OwnerSteamID;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	uint32_t                                           OwnsApp : 1;                                   // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           Permanent : 1;                                 // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	class FString                                      TimeStamp;                                     // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.OnlineGameDLC_X.SteamJsonResponseGetPublisherAppOwnership2
// 0x0010
struct FSteamJsonResponseGetPublisherAppOwnership2
{
	TArray<struct FSteamJsonResponseGetPublisherAppOwnership3> Apps;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.OnlineGameDLC_X.SteamJsonResponseGetPublisherAppOwnership
// 0x0010
struct FSteamJsonResponseGetPublisherAppOwnership
{
	struct FSteamJsonResponseGetPublisherAppOwnership2 AppOwnership;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.OnlineGameDLC_X.SteamPlayerDLCOwnershipState
// 0x0011
struct FSteamPlayerDLCOwnershipState
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	uint64_t                                           AppID;                                         // 0x0008 (0x0008) [0x0000000000000000]               
	uint8_t                                            State;                                         // 0x0010 (0x0001) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct ProjectX.OnlineGameDLC_X.PlayerDLCInfo
// 0x0074
struct FPlayerDLCInfo
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FSteamPlayerDLCOwnershipState>       DLCs;                                          // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             ValidationReadyDelegate;                       // 0x0058 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              TimeLastOwnershipRequest;                      // 0x0070 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct ProjectX.OnlineGameDLC_X.SteamWebRequestData
// 0x0050
struct FSteamWebRequestData
{
	class UWebRequest_X*                               Request;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	struct FUniqueNetId                                PlayerID;                                      // 0x0008 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.PsyNet_X.PsyNetKeys
// 0x0040
struct FPsyNetKeys
{
	class FString                                      Environment;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PsyNetAuth;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PsyConfigAuth;                                 // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      SteamPublisher;                                // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.ReservationBeacon_X.BeaconMessageHandler
// 0x0018
struct FBeaconMessageHandler
{
	class UClass*                                      MessageClass;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	TArray<struct FScriptDelegate>                     Delegates;                                     // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.OnlineGameLeaderboards_X.LeaderboardData
// 0x0080
struct FLeaderboardData
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	class FString                                      UnSanitizedPlayerName;                         // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PlayerName;                                    // 0x0058 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	uint32_t                                           bPsyNetUser : 1;                               // 0x0068 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
	int32_t                                            Rank;                                          // 0x006C (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int32_t                                            Value;                                         // 0x0070 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	float                                              MMR;                                           // 0x0074 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int32_t                                            Division;                                      // 0x0078 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	uint32_t                                           bIsPrimaryPlayer : 1;                          // 0x007C (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
};

// ScriptStruct ProjectX.OnlineGameLeaderboards_X.CachedLeaderboardData
// 0x0020
struct FCachedLeaderboardData
{
	struct FName                                       LeaderboardId;                                 // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	TArray<struct FLeaderboardData>                    DataList;                                      // 0x0008 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	uint64_t                                           LastLeaderboardSyncTime;                       // 0x0018 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct ProjectX.RPC_GetLeaderboardBase_X.GetLeaderboardBaseData
// 0x0060
struct FGetLeaderboardBaseData
{
	class FString                                      PlayerName;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                      // 0x0010 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Value;                                         // 0x0058 (0x0004) [0x0000000000000000]               
	float                                              MMR;                                           // 0x005C (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.RPC_GetLeaderboardBase_X.GetLeaderboardPlatformBaseData
// 0x0020
struct FGetLeaderboardPlatformBaseData
{
	class FString                                      Platform;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FGetLeaderboardBaseData>             Players;                                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.RPC_GetLeaderboardRankForUsersBase_X.GetLeaderboardRankForUserData
// 0x0060
struct FGetLeaderboardRankForUserData
{
	class FString                                      PlayerName;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                      // 0x0010 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Value;                                         // 0x0058 (0x0004) [0x0000000000000000]               
	float                                              MMR;                                           // 0x005C (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.OnlineGameMatchmaking_X.MatchmakingRequestData
// 0x0060
struct FMatchmakingRequestData
{
	class FString                                      PartyID;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FDSRegionInfo>                       Regions;                                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<int32_t>                                    Playlists;                                     // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            SecondsSearching;                              // 0x0030 (0x0004) [0x0000000000000000]               
	class FString                                      CurrentServerID;                               // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bDisableCrossPlay : 1;                         // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIgnoreSkill : 1;                              // 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
	TArray<struct FUniqueNetId>                        PartyMembers;                                  // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.RPC_GetPopulation_X.GetPopulationData
// 0x0008
struct FGetPopulationData
{
	int32_t                                            Playlist;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            PlayerCount;                                   // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.OnlineGamePrivateMatch_X.PrivateMatchmakingRequestData
// 0x0014
struct FPrivateMatchmakingRequestData
{
	class FString                                      SubRegionToMatchmake;                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            PlaylistId;                                    // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.RPC_GetGameServerPingList2_X.GetGameServerPingListData
// 0x0058
struct FGetGameServerPingListData
{
	class FString                                      Region;                                        // 0x0000 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	class FString                                      IP;                                            // 0x0010 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	class FString                                      Host;                                          // 0x0020 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	int32_t                                            Port;                                          // 0x0030 (0x0004) [0x0001000000000000]               
	class FString                                      Address;                                       // 0x0038 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	class FString                                      SubRegion;                                     // 0x0048 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.RPC_GetGameServerPingList_X.GetGameServerPingListData_Deprecated
// 0x0048
struct FGetGameServerPingListData_Deprecated
{
	class FString                                      Region;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      IP;                                            // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Host;                                          // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Port;                                          // 0x0030 (0x0004) [0x0000000000000000]               
	class FString                                      Address;                                       // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.OnlineGameReservations_AssignTeamsByParty_X.PartyByTeam
// 0x0050
struct FPartyByTeam
{
	struct FUniqueNetId                                PartyID;                                       // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            Team;                                          // 0x0048 (0x0001) [0x0000000000000000]               
	int32_t                                            Size;                                          // 0x004C (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.OnlineGameReservations_X.TeamPairHistory
// 0x0094
struct FTeamPairHistory
{
	struct FUniqueNetId                                PartyA;                                        // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                PartyB;                                        // 0x0048 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Count;                                         // 0x0090 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.OnlineGameReservations_X.PendingReservation
// 0x0018
struct FPendingReservation
{
	class UIReservationConnection_X*                   Connection_Object;                             // 0x0000 (0x0010) [0x0000000000000000] 
	class UIReservationConnection_X*                   Connection_Interface;                          // 0x0000 (0x0010) [0x0000000000000000]               
	class UAddReservationMessage_X*                    Message;                                       // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct ProjectX.OnlineGameSkill_X.SkillSyncRequest
// 0x0068
struct FSkillSyncRequest
{
	class URPC_X*                                      RPC;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	struct FUniqueNetId                                PlayerID;                                      // 0x0008 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                      // 0x0050 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.RPC_GetPartyMemberSkill_X.PartyMemberSkill
// 0x0058
struct FPartyMemberSkill
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FPlayerSkillRating>                  Skills;                                        // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.OnlineGameStats_X.UploadStatData
// 0x004C
struct FUploadStatData
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Value;                                         // 0x0048 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.OnlineGameStats_X.UploadStatDataSet
// 0x0018
struct FUploadStatDataSet
{
	struct FName                                       StatId;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	TArray<struct FUploadStatData>                     Data;                                          // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.OnlineGameWordFilterProcessor_X.WordFilterRequest
// 0x0040
struct FWordFilterRequest
{
	class UWebRequest_X*                               Request;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      Comment;                                       // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Sanitized;                                     // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                      // 0x0028 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.OnlinePlayerStorageManifest_X.StorageMetadata
// 0x000D
struct FStorageMetadata
{
	struct FName                                       Category;                                      // 0x0000 (0x0008) [0x0001000000000000]               
	int32_t                                            Checksum;                                      // 0x0008 (0x0004) [0x0001000000000000]               
	uint8_t                                            Encoding;                                      // 0x000C (0x0001) [0x0001000000000000]               
};

// ScriptStruct ProjectX.OnlinePlayerStorageSync_X.OnlinePlayerStorageSyncResult
// 0x001D
struct FOnlinePlayerStorageSyncResult
{
	class UClass*                                      DataClass;                                     // 0x0000 (0x0008) [0x0001000000000000]               
	class UObject*                                     RemoteData;                                    // 0x0008 (0x0008) [0x0001000000000000]               
	int32_t                                            ServerTick;                                    // 0x0010 (0x0004) [0x0001000000000000]               
	int32_t                                            Checksum;                                      // 0x0014 (0x0004) [0x0001000000000000]               
	uint32_t                                           bChecksumMatch : 1;                            // 0x0018 (0x0004) [0x0001000000000000] [0x00000001] 
	uint8_t                                            Encoding;                                      // 0x001C (0x0001) [0x0001000000000000]               
};

// ScriptStruct ProjectX.OnlinePlayerStorageSync_X.OnlinePlayerStorageSyncRequest
// 0x000D
struct FOnlinePlayerStorageSyncRequest
{
	class UObject*                                     DataObj;                                       // 0x0000 (0x0008) [0x0001000000000000]               
	int32_t                                            ClientTick;                                    // 0x0008 (0x0004) [0x0001000000000000]               
	uint8_t                                            Encoding;                                      // 0x000C (0x0001) [0x0001000000000000]               
};

// ScriptStruct ProjectX.RPC_PlayerStorageGet_X.GetPlayerStorageRequestItem
// 0x0018
struct FGetPlayerStorageRequestItem
{
	struct FName                                       Category;                                      // 0x0000 (0x0008) [0x0001000000000000]               
	int32_t                                            Tick;                                          // 0x0008 (0x0004) [0x0001000000000000]               
	int32_t                                            Checksum;                                      // 0x000C (0x0004) [0x0001000000000000]               
	class UObject*                                     LocalRef;                                      // 0x0010 (0x0008) [0x0001000000002000] (CPF_Transient)
};

// ScriptStruct ProjectX.PartyMessageQueue_X.PendingMessage
// 0x0020
struct FPendingMessage
{
	struct FUniqueLobbyId                              LobbyId;                                       // 0x0000 (0x0010) [0x0000000000000000]               
	TArray<class FString>                              Messages;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.Parties_X.PsyNetPartyMember
// 0x0080
struct FPsyNetPartyMember
{
	class FString                                      PartyID;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                UserId;                                        // 0x0010 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Username;                                      // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint64_t                                           JoinedAt;                                      // 0x0068 (0x0008) [0x0000000000000000]               
	class FString                                      Role;                                          // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.Parties_X.PartyInvite
// 0x0078
struct FPartyInvite
{
	struct FUniqueNetId                                UserId;                                        // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Username;                                      // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PartyID;                                       // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint64_t                                           InvitedAt;                                     // 0x0068 (0x0008) [0x0000000000000000]               
	uint64_t                                           AcceptedAt;                                    // 0x0070 (0x0008) [0x0000000000000000]               
};

// ScriptStruct ProjectX.PsyNetService_PartyJoinRequestAccepted_X.PartyData
// 0x0080
struct FPartyData
{
	struct FPsyNetPartyInfo                            Info;                                          // 0x0000 (0x0070) [0x0001000000400000] (CPF_NeedCtorLink)
	TArray<struct FPsyNetPartyMember>                  Members;                                       // 0x0070 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.PartyMetrics_X.PartyMetricsData
// 0x000C
struct FPartyMetricsData
{
	int32_t                                            LocalPlayers;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            RemotePlayers;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	uint32_t                                           bPartyLeader : 1;                              // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct ProjectX.PlayerInput_X.GamepadDeadzoneSettings
// 0x0010
struct FGamepadDeadzoneSettings
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       Key;                                           // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              Deadzone;                                      // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct ProjectX.PlayerInput_X.KeyboardAxisBlendSettings
// 0x000C
struct FKeyboardAxisBlendSettings
{
	struct FName                                       Axis;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendTime;                                     // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct ProjectX.PlayerInput_X.RawAxisValue
// 0x0010
struct FRawAxisValue
{
	float                                              Value;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	uint64_t                                           LastFrameChanged;                              // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct ProjectX.PostProcessManager_X.PPEffectDefaults
// 0x000C
struct FPPEffectDefaults
{
	struct FName                                       EffectName;                                    // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bEnabled : 1;                                  // 0x0008 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
};

// ScriptStruct ProjectX.PostProcessManager_X.PPPersistentEffectDefaults
// 0x001C
struct FPPPersistentEffectDefaults
{
	struct FName                                       EffectName;                                    // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       MaterialEffectName;                            // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       MaterialParamName;                             // 0x0010 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DefaultValue;                                  // 0x0018 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct ProjectX.PostProcessManager_X.PPChainInfo
// 0x0010
struct FPPChainInfo
{
	struct FName                                       ChainName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UPostProcessChain*                           ChainReference;                                // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct ProjectX.PostProcessManager_X.PostProcessOverride
// 0x0184
struct FPostProcessOverride
{
	struct FPostProcessSettings                        Settings;                                      // 0x0000 (0x0168) [0x0000000000400000] (CPF_NeedCtorLink)
	class APostProcessVolume*                          Volume;                                        // 0x0168 (0x0008) [0x0000000000000000]               
	struct FName                                       Id;                                            // 0x0170 (0x0008) [0x0000000000000000]               
	float                                              BlendInTime;                                   // 0x0178 (0x0004) [0x0000000000000000]               
	float                                              BlendOutTime;                                  // 0x017C (0x0004) [0x0000000000000000]               
	uint32_t                                           bEnabled : 1;                                  // 0x0180 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bDefaultEnabled : 1;                           // 0x0180 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct ProjectX.PsyNetServiceSubscriptions_X.ServiceSubscription
// 0x0020
struct FServiceSubscription
{
	class UClass*                                      Class;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             Callback;                                      // 0x0008 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.PsyNetChannel_X.PendingChannelService
// 0x001C
struct FPendingChannelService
{
	class UPsyNetClientService_X*                      Service;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            MessageId;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	class UAsyncTask*                                  Task;                                          // 0x0010 (0x0008) [0x0000000000000000]               
	float                                              ReceiveTime;                                   // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.PsyNetMessengerWebSocket_X.QueuedPsyNetMessage
// 0x0014
struct FQueuedPsyNetMessage
{
	class UPsyNetMessage_X*                            Message;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	class UAsyncTask*                                  Task;                                          // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              TimeoutTime;                                   // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.PsyNetMetrics_X.ServiceMetricsData
// 0x0024
struct FServiceMetricsData
{
	class FString                                      Service;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Attempts;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            Failures;                                      // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              MinLatency;                                    // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              MaxLatency;                                    // 0x001C (0x0004) [0x0000000000000000]               
	float                                              AvgLatency;                                    // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.PsyNetMetrics_X.ServiceErrorData
// 0x000C
struct FServiceErrorData
{
	struct FName                                       Type;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            Count;                                         // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.PsyNetRequestQue_X.PsyNetRequest
// 0x0018
struct FPsyNetRequest
{
	struct FName                                       Id;                                            // 0x0000 (0x0008) [0x0000000000000000]               
	class UTAsyncResult__PsyNetMessage_X*              Task;                                          // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              TimeoutTime;                                   // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              SendTime;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.PsyNetService_PersonaInfo_X.OnlinePersonaData
// 0x0078
struct FOnlinePersonaData
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PlayerName;                                    // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PresenceInfo;                                  // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PresenceState;                                 // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.RandomStream_X.RandomStream_Mirror
// 0x0004
struct FRandomStream_Mirror
{
	int32_t                                            Seed;                                          // 0x0000 (0x0004) [0x0000000000001001] (CPF_Edit | CPF_Native)
};

// ScriptStruct ProjectX.RenderProfiler_X.PrimitiveComponentProfile
// 0x0070
struct FPrimitiveComponentProfile
{
	class FString                                      ContentName;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UPrimitiveComponent*>                 Components;                                    // 0x0010 (0x0010) [0x0000000004480008] (CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline)
	struct FRenderProfile                              InclusiveProfile;                              // 0x0020 (0x0028) [0x0000000000000000]               
	struct FRenderProfile                              ExclusiveProfile;                              // 0x0048 (0x0028) [0x0000000000000000]               
};

// ScriptStruct ProjectX.RPC_ClubsRecordStats_X.ClubStatRecord
// 0x0088
struct FClubStatRecord
{
	int32_t                                            ClubID;                                        // 0x0000 (0x0004) [0x0001000000000000]               
	uint32_t                                           Win : 1;                                       // 0x0004 (0x0004) [0x0001000000000000] [0x00000001] 
	int32_t                                            TimePlayed;                                    // 0x0008 (0x0004) [0x0021000000000000]               
	int32_t                                            Goal;                                          // 0x000C (0x0004) [0x0021000000000000]               
	int32_t                                            AerialGoal;                                    // 0x0010 (0x0004) [0x0021000000000000]               
	int32_t                                            LongGoal;                                      // 0x0014 (0x0004) [0x0021000000000000]               
	int32_t                                            BackwardsGoal;                                 // 0x0018 (0x0004) [0x0021000000000000]               
	int32_t                                            OvertimeGoal;                                  // 0x001C (0x0004) [0x0021000000000000]               
	int32_t                                            TurtleGoal;                                    // 0x0020 (0x0004) [0x0021000000000000]               
	int32_t                                            Assist;                                        // 0x0024 (0x0004) [0x0021000000000000]               
	int32_t                                            Playmaker;                                     // 0x0028 (0x0004) [0x0021000000000000]               
	int32_t                                            Save;                                          // 0x002C (0x0004) [0x0021000000000000]               
	int32_t                                            EpicSave;                                      // 0x0030 (0x0004) [0x0021000000000000]               
	int32_t                                            Savior;                                        // 0x0034 (0x0004) [0x0021000000000000]               
	int32_t                                            Shot;                                          // 0x0038 (0x0004) [0x0021000000000000]               
	int32_t                                            Center;                                        // 0x003C (0x0004) [0x0021000000000000]               
	int32_t                                            Clear;                                         // 0x0040 (0x0004) [0x0021000000000000]               
	int32_t                                            AerialHit;                                     // 0x0044 (0x0004) [0x0021000000000000]               
	int32_t                                            BicycleHit;                                    // 0x0048 (0x0004) [0x0021000000000000]               
	int32_t                                            JuggleHit;                                     // 0x004C (0x0004) [0x0021000000000000]               
	int32_t                                            Demolish;                                      // 0x0050 (0x0004) [0x0021000000000000]               
	int32_t                                            Demolition;                                    // 0x0054 (0x0004) [0x0021000000000000]               
	int32_t                                            FirstTouch;                                    // 0x0058 (0x0004) [0x0021000000000000]               
	int32_t                                            PoolShot;                                      // 0x005C (0x0004) [0x0021000000000000]               
	int32_t                                            LowFive;                                       // 0x0060 (0x0004) [0x0021000000000000]               
	int32_t                                            HighFive;                                      // 0x0064 (0x0004) [0x0021000000000000]               
	int32_t                                            BreakoutDamage;                                // 0x0068 (0x0004) [0x0021000000000000]               
	int32_t                                            BreakoutDamageLarge;                           // 0x006C (0x0004) [0x0021000000000000]               
	int32_t                                            HoopsSwishGoal;                                // 0x0070 (0x0004) [0x0021000000000000]               
	TArray<struct FUniqueNetId>                        Players;                                       // 0x0078 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.RPC_GetClubStats_X.StatMilestoneData
// 0x001D
struct FStatMilestoneData
{
	struct FName                                       Stat;                                          // 0x0000 (0x0008) [0x0001000000000000]               
	TArray<int32_t>                                    Milestones;                                    // 0x0008 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	int32_t                                            Value;                                         // 0x0018 (0x0004) [0x0001000000000000]               
	uint8_t                                            Badge;                                         // 0x001C (0x0001) [0x0001000000000000]               
};

// ScriptStruct ProjectX.RPC_GetClubStats_X.SeasonalBadgeTierData
// 0x0018
struct FSeasonalBadgeTierData
{
	int32_t                                            Season;                                        // 0x0000 (0x0004) [0x0001000000000000]               
	TArray<struct FStatBadge>                          Badges;                                        // 0x0008 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.RPC_GetClubStats_X.MilestoneTitleData
// 0x000C
struct FMilestoneTitleData
{
	uint8_t                                            Badge;                                         // 0x0000 (0x0001) [0x0001000000000000]               
	struct FName                                       Title;                                         // 0x0004 (0x0008) [0x0001000000000000]               
};

// ScriptStruct ProjectX.RPC_GetClubStats_X.ClubCareerStats
// 0x0074
struct FClubCareerStats
{
	int32_t                                            MatchPlayed;                                   // 0x0000 (0x0004) [0x0001000000000000]               
	int32_t                                            Win;                                           // 0x0004 (0x0004) [0x0001000000000000]               
	int32_t                                            TimePlayed;                                    // 0x0008 (0x0004) [0x0001000000000000]               
	int32_t                                            Goal;                                          // 0x000C (0x0004) [0x0001000000000000]               
	int32_t                                            AerialGoal;                                    // 0x0010 (0x0004) [0x0001000000000000]               
	int32_t                                            LongGoal;                                      // 0x0014 (0x0004) [0x0001000000000000]               
	int32_t                                            BackwardsGoal;                                 // 0x0018 (0x0004) [0x0001000000000000]               
	int32_t                                            OvertimeGoal;                                  // 0x001C (0x0004) [0x0001000000000000]               
	int32_t                                            TurtleGoal;                                    // 0x0020 (0x0004) [0x0001000000000000]               
	int32_t                                            Assist;                                        // 0x0024 (0x0004) [0x0001000000000000]               
	int32_t                                            Playmaker;                                     // 0x0028 (0x0004) [0x0001000000000000]               
	int32_t                                            Save;                                          // 0x002C (0x0004) [0x0001000000000000]               
	int32_t                                            EpicSave;                                      // 0x0030 (0x0004) [0x0001000000000000]               
	int32_t                                            Savior;                                        // 0x0034 (0x0004) [0x0001000000000000]               
	int32_t                                            Shot;                                          // 0x0038 (0x0004) [0x0001000000000000]               
	int32_t                                            Center;                                        // 0x003C (0x0004) [0x0001000000000000]               
	int32_t                                            Clear;                                         // 0x0040 (0x0004) [0x0001000000000000]               
	int32_t                                            AerialHit;                                     // 0x0044 (0x0004) [0x0001000000000000]               
	int32_t                                            BicycleHit;                                    // 0x0048 (0x0004) [0x0001000000000000]               
	int32_t                                            JuggleHit;                                     // 0x004C (0x0004) [0x0001000000000000]               
	int32_t                                            Demolish;                                      // 0x0050 (0x0004) [0x0001000000000000]               
	int32_t                                            Demolition;                                    // 0x0054 (0x0004) [0x0001000000000000]               
	int32_t                                            FirstTouch;                                    // 0x0058 (0x0004) [0x0001000000000000]               
	int32_t                                            PoolShot;                                      // 0x005C (0x0004) [0x0001000000000000]               
	int32_t                                            LowFive;                                       // 0x0060 (0x0004) [0x0001000000000000]               
	int32_t                                            HighFive;                                      // 0x0064 (0x0004) [0x0001000000000000]               
	int32_t                                            BreakoutDamage;                                // 0x0068 (0x0004) [0x0001000000000000]               
	int32_t                                            BreakoutDamageLarge;                           // 0x006C (0x0004) [0x0001000000000000]               
	int32_t                                            HoopsSwishGoal;                                // 0x0070 (0x0004) [0x0001000000000000]               
};

// ScriptStruct ProjectX.RPC_GetGenericDataAll_X.GetGenericDataAllData
// 0x0018
struct FGetGenericDataAllData
{
	struct FName                                       DataKey;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      DataValue;                                     // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.RPC_GetPlayerPermissions_X.PlayerPermissionsReponse
// 0x0058
struct FPlayerPermissionsReponse
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               Permissions;                                   // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.RPC_Test_X.RPCTestItem
// 0x0078
struct FRPCTestItem
{
	uint32_t                                           BoolItem : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            IntItem;                                       // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              FloatItem;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	class FString                                      StringItem;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerItem;                                    // 0x0020 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              StringItems;                                   // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.RPC_Test_X.RPCTestParam
// 0x0088
struct FRPCTestParam
{
	struct FRPCTestItem                                TestItem;                                      // 0x0000 (0x0078) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FRPCTestItem>                        TestItems;                                     // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.RPCQueue_X.PendingRPC
// 0x0020
struct FPendingRPC
{
	class URPC_X*                                      RPC;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            UniqueId;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              CreationTime;                                  // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            Failures;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              NextSendTime;                                  // 0x0014 (0x0004) [0x0000000000000000]               
	class UError*                                      PendingError;                                  // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct ProjectX.RPCQueue_X.RPCError
// 0x0020
struct FRPCError
{
	class FString                                      Type;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Message;                                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.RPCQueue_X.RPCResponse
// 0x0030
struct FRPCResponse
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000000]               
	struct FRPCError                                   Error;                                         // 0x0008 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	class URPC_X*                                      Result;                                        // 0x0028 (0x0008) [0x0000000000000000]               
};

// ScriptStruct ProjectX.ServerExploitManager_X.MatchExploitReportData
// 0x0058
struct FMatchExploitReportData
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<uint8_t>                                    ReportedReasons;                               // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.ShakeComponent_X.ShakeReceiver
// 0x000C
struct FShakeReceiver
{
	class APlayerController*                           Player;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Scale;                                         // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.SystemMetrics_X.OSMetrics
// 0x0020
struct FOSMetrics
{
	class FString                                      Type;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Bits;                                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.SystemMetrics_X.CpuMetrics
// 0x0040
struct FCpuMetrics
{
	class FString                                      Type;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Desc;                                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Cores;                                         // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Threads;                                       // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.SystemMetrics_X.MemoryMetrics
// 0x0004
struct FMemoryMetrics
{
	float                                              Physical;                                      // 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.SystemMetrics_X.VideoCardMetrics
// 0x0014
struct FVideoCardMetrics
{
	class FString                                      Type;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            RAM;                                           // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.SystemMetrics_X.NetworkAdapterMetrics
// 0x0010
struct FNetworkAdapterMetrics
{
	TArray<class FString>                              Types;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.WebCache_X.CachedDataRequest
// 0x0050
struct FCachedDataRequest
{
	class FString                                      URL;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Path;                                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UStringMap*                                  Headers;                                       // 0x0020 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UCachedWebData_X*                            CachedWebData;                                 // 0x0028 (0x0008) [0x0000000000000000]               
	uint32_t                                           bZipResponse : 1;                              // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             Callback;                                      // 0x0038 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
