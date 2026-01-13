/*
#############################################################################################
# Rocket League SDK (RLSDK) Season 20 (v2.61)
# Generated with CodeRedGenerator v1.1.5 on 11/05/2025 07:11PM
# ========================================================================================= #
# File: TAGame_structs.hpp
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

// ScriptStruct TAGame.ConsecutiveMatchTracker_TA.MatchData
// Size: 0x0050 (0x004C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FMatchData
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            ConsecutiveMatchesPlayed;                      // 0x0048 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x004C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._Types_TA.PrespawnData
// Size: 0x001C
struct FPrespawnData
{
	uint32_t                                           bPrespawnSet : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     Location;                                      // 0x0004 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x0010 (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.VoiceRoomCredentials
// Size: 0x0030
struct FVoiceRoomCredentials
{
	class FString                                      RoomId;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      BaseUrl;                                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Token;                                         // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.PlayerVoiceRoomCredentials
// 0x0048 (0x0030 - 0x0078)
struct FPlayerVoiceRoomCredentials : FVoiceRoomCredentials
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0030 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.ActivePlayerVoice
// Size: 0x0018 (0x0011 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FActivePlayerVoice
{
	uint64_t                                           StartTimestamp;                                // 0x0000 (0x0008) [0x0000000000000000]               
	uint64_t                                           EndTimestamp;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	uint8_t                                            Location;                                      // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0011 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._Types_TA.VoiceRoomErrorMetric
// Size: 0x0010
struct FVoiceRoomErrorMetric
{
	class FName                                        ErrorName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	uint64_t                                           TimeStamp;                                     // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.VoiceRoomPlayerActivity
// Size: 0x0020
struct FVoiceRoomPlayerActivity
{
	class TArray<struct FActivePlayerVoice>            ActiveVoiceSummary;                            // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FVoiceRoomErrorMetric>         Errors;                                        // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.VoiceRoomDetails
// Size: 0x0028
struct FVoiceRoomDetails
{
	class FString                                      RoomName;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            RoomType;                                      // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x7];                            // 0x0011 (0x0007) MISSED OFFSET
	uint64_t                                           CreatedTimestamp;                              // 0x0018 (0x0008) [0x0000000000000000]               
	uint64_t                                           DestroyedTimestamp;                            // 0x0020 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.PlayerMessageInfo
// Size: 0x0020
struct FPlayerMessageInfo
{
	class FString                                      SenderId;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DisplayName;                                   // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.VehicleInputs
// Size: 0x0020
struct FVehicleInputs
{
	float                                              Throttle;                                      // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Steer;                                         // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Pitch;                                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Yaw;                                           // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Roll;                                          // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DodgeForward;                                  // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DodgeRight;                                    // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bHandbrake : 1;                                // 0x001C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bJump : 1;                                     // 0x001C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bActivateBoost : 1;                            // 0x001C (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bHoldingBoost : 1;                             // 0x001C (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bJumped : 1;                                   // 0x001C (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bGrab : 1;                                     // 0x001C (0x0004) [0x0001000000000000] [0x00000020] 
	uint32_t                                           bButtonMash : 1;                               // 0x001C (0x0004) [0x0001000000000000] [0x00000040] 
	uint32_t                                           bTargetFind : 1;                               // 0x001C (0x0004) [0x0001000000000000] [0x00000080] 
};

// ScriptStruct TAGame._Types_TA.ClientOnlineProductStat
// Size: 0x0018 (0x0014 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FClientOnlineProductStat
{
	struct FProductInstanceID                          InstanceID;                                    // 0x0000 (0x0010) [0x0000000000000000]               
	int32_t                                            Value;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0014 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._Types_TA.RandomWeight
// Size: 0x0010
struct FRandomWeight
{
	class UObject*                                     Obj;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Weight;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              OrigWeight;                                    // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.AssetLoadResult
// Size: 0x0020
struct FAssetLoadResult
{
	int32_t                                            ProductID;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	class FName                                        AssetName;                                     // 0x0004 (0x0008) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x000C (0x0004) MISSED OFFSET
	class UProductAsset_TA*                            Asset;                                         // 0x0010 (0x0008) [0x0000000000000000]               
	class UProductThumbnailAsset_TA*                   ThumbnailAsset;                                // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.ProductThumbnailResult
// Size: 0x0018
struct FProductThumbnailResult
{
	class UProductAsset_TA*                            Asset;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	class UOnlineProduct_TA*                           OnlineProduct;                                 // 0x0008 (0x0008) [0x0000000000000000]               
	class UProductThumbnail_TA*                        Thumbnail;                                     // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.MapImageLoadResult
// Size: 0x0010
struct FMapImageLoadResult
{
	class UTexture2D*                                  Image;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        MapName;                                       // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.ClientLoadoutData
// Size: 0x0010
struct FClientLoadoutData
{
	class TArray<int32_t>                              Products;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.LoadoutTeamColor
// Size: 0x0008
struct FLoadoutTeamColor
{
	uint8_t                                            Team;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            TeamColorID;                                   // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                            CustomColorID;                                 // 0x0002 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x1];                            // 0x0003 (0x0001) MISSED OFFSET
	uint32_t                                           bSet : 1;                                      // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame._Types_TA.LoadoutTeamPaint
// 0x0008 (0x0008 - 0x0010)
struct FLoadoutTeamPaint : FLoadoutTeamColor
{
	int32_t                                            TeamFinishID;                                  // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            CustomFinishID;                                // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.LoadoutData
// 0x0030 (0x0010 - 0x0040)
struct FLoadoutData : FClientLoadoutData
{
	struct FLoadoutTeamPaint                           TeamPaint;                                     // 0x0010 (0x0010) [0x0000000000000000]               
	class FName                                        Title;                                         // 0x0020 (0x0008) [0x0000000000000000]               
	int32_t                                            TeamIndex;                                     // 0x0028 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x002C (0x0004) MISSED OFFSET
	class TArray<struct FProductInstanceID>            OnlineProducts;                                // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.ClientLoadoutOnlineProduct
// Size: 0x0010
struct FClientLoadoutOnlineProduct
{
	class TArray<class UProductAttribute_TA*>          Attributes;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.ClientLoadoutOnlineData
// Size: 0x0010
struct FClientLoadoutOnlineData
{
	class TArray<struct FClientLoadoutOnlineProduct>   Products;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.InputRate
// Size: 0x0008
struct FInputRate
{
	float                                              RiseRate;                                      // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FallRate;                                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._Types_TA.TurningCircle
// Size: 0x0010
struct FTurningCircle
{
	struct FVector                                     Center;                                        // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              Radius;                                        // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.GFxTeamColor
// Size: 0x0010
struct FGFxTeamColor
{
	struct FColor                                      Value;                                         // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            ColorID;                                       // 0x0004 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            X;                                             // 0x0008 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Y;                                             // 0x000C (0x0004) [0x0000000040000000] (CPF_DataBinding)
};

// ScriptStruct TAGame._Types_TA.MapGroup
// Size: 0x0010
struct FMapGroup
{
	class TArray<class UMapData_TA*>                   Maps;                                          // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.StatValue
// Size: 0x0014
struct FStatValue
{
	class FName                                        Id;                                            // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            Values[3];                                     // 0x0008 (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.VoiceRoomTokenRequest
// Size: 0x0020
struct FVoiceRoomTokenRequest
{
	class FString                                      RoomId;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FUniqueNetId>                  PlayerIds;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.PlayerIdArray
// Size: 0x0010
struct FPlayerIdArray
{
	class TArray<struct FUniqueNetId>                  Players;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.ProductWithSettings
// Size: 0x0018
struct FProductWithSettings
{
	class UProductAsset_TA*                            Product;                                       // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UProductPaint_TA*                            Paint;                                         // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UDataAsset_ESportsTeam_TA*                   ESportsTeam;                                   // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._Types_TA.ProductTradeInFilter
// Size: 0x0050
struct FProductTradeInFilter
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      Label;                                         // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              SeriesIDs;                                     // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bBlueprint : 1;                                // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          UnknownData01[0x4];                            // 0x002C (0x0004) MISSED OFFSET
	class TArray<uint8_t>                              Qualities;                                     // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        TradeInQualities;                              // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.ColorOverride
// Size: 0x0014
struct FColorOverride
{
	uint32_t                                           bOverride : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FLinearColor                                Color;                                         // 0x0004 (0x0010) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.TeamColor
// Size: 0x0020
struct FTeamColor
{
	struct FLinearColor                                FontColor;                                     // 0x0000 (0x0010) [0x0000000000000000]               
	class TArray<struct FLinearColor>                  Colors;                                        // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.MapSkillSettings
// Size: 0x000C
struct FMapSkillSettings
{
	class FName                                        MapName;                                       // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              MinimumSkill;                                  // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._Types_TA.MaterialTextureParam
// Size: 0x0010
struct FMaterialTextureParam
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UTexture*                                    Value;                                         // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._Types_TA.MaterialVectorParam
// Size: 0x0018
struct FMaterialVectorParam
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                Value;                                         // 0x0008 (0x0010) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._Types_TA.MaterialScalarParam
// Size: 0x000C
struct FMaterialScalarParam
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              Value;                                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._Types_TA.MaterialParams
// Size: 0x0030
struct FMaterialParams
{
	class TArray<struct FMaterialTextureParam>         TextureParameters;                             // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FMaterialVectorParam>          VectorParameters;                              // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FMaterialScalarParam>          ScalarParameters;                              // 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.AssociativeMaterialParams
// Size: 0x0038
struct FAssociativeMaterialParams
{
	class UMaterialInterface*                          Material;                                      // 0x0000 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	struct FMaterialParams                             Params;                                        // 0x0008 (0x0030) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.SkinBodySettings
// Size: 0x0048
struct FSkinBodySettings
{
	class UProductAssetReferenceBody_TA*               Body;                                          // 0x0000 (0x0008) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	struct FMaterialParams                             Parameters;                                    // 0x0008 (0x0030) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FAssociativeMaterialParams>    AdditionalBodyParameters;                      // 0x0038 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditFixedSize | CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.UniqueNetIdGroup4
// Size: 0x0120
struct FUniqueNetIdGroup4
{
	struct FUniqueNetId                                PlayerIds[4];                                  // 0x0000 (0x0120) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.OnlineProductAttribute
// Size: 0x0018
struct FOnlineProductAttribute
{
	class FName                                        Key;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      Value;                                         // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.OnlineProductData
// Size: 0x0040
struct FOnlineProductData
{
	int32_t                                            ProductID;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	struct FProductInstanceID                          InstanceID;                                    // 0x0008 (0x0010) [0x0000000000000000]               
	int32_t                                            SeriesID;                                      // 0x0018 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData01[0x4];                            // 0x001C (0x0004) MISSED OFFSET
	class TArray<struct FOnlineProductAttribute>       Attributes;                                    // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            TradeHold;                                     // 0x0030 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData02[0x4];                            // 0x0034 (0x0004) MISSED OFFSET
	uint64_t                                           AddedTimestamp;                                // 0x0038 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.CurrencyProductData
// Size: 0x0010
struct U_Types_TA_FCurrencyProductData
{
	class UProduct_TA*                                 Product;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	class UOnlineProduct_TA*                           OnlineProduct;                                 // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.Currency
// Size: 0x0060
struct FCurrency
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x0001 (0x0003) MISSED OFFSET
	class FName                                        Name;                                          // 0x0004 (0x0008) [0x0000000000000000]               
	uint32_t                                           bCanBeTraded : 1;                              // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            TradeHold;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData01[0x4];                            // 0x0014 (0x0004) MISSED OFFSET
	struct U_Types_TA_FCurrencyProductData             ProductData;                                   // 0x0018 (0x0010) [0x0000000000000000]               
	int32_t                                            CurrencyID;                                    // 0x0028 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Id;                                            // 0x002C (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Amount;                                        // 0x0030 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          UnknownData02[0x4];                            // 0x0034 (0x0004) MISSED OFFSET
	class UTexture*                                    LargeImage;                                    // 0x0038 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	class UTexture*                                    SmallImage;                                    // 0x0040 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	class FString                                      LocalizedName;                                 // 0x0048 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	uint64_t                                           UpdatedTimestamp;                              // 0x0058 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.OnlineXPModifier
// Size: 0x0038
struct FOnlineXPModifier
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	float                                              Modifier;                                      // 0x0008 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                            ModifierType;                                  // 0x000C (0x0001) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          UnknownData00[0x3];                            // 0x000D (0x0003) MISSED OFFSET
	int32_t                                            Value;                                         // 0x0010 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          UnknownData01[0x4];                            // 0x0014 (0x0004) MISSED OFFSET
	class FString                                      LocalizedText;                                 // 0x0018 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	uint32_t                                           bPremium : 1;                                  // 0x0028 (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
	uint32_t                                           bPenalty : 1;                                  // 0x0028 (0x0004) [0x0000000040000000] [0x00000002] (CPF_DataBinding)
	uint32_t                                           bPromo : 1;                                    // 0x0028 (0x0004) [0x0000000040000000] [0x00000004] (CPF_DataBinding)
	int32_t                                            Remaining;                                     // 0x002C (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Count;                                         // 0x0030 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            MaxCount;                                      // 0x0034 (0x0004) [0x0000000040000000] (CPF_DataBinding)
};

// ScriptStruct TAGame._Types_TA.OnlineXPReward
// Size: 0x0040
struct FOnlineXPReward
{
	class FName                                        RewardName;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Total;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            Base;                                          // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            BaseLevel;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            Level;                                         // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            CapAdjustment;                                 // 0x0018 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x001C (0x0004) MISSED OFFSET
	class TArray<int32_t>                              LevelThresholds;                               // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FOnlineXPModifier>             RewardModifiers;                               // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.OnlineProductDrop
// Size: 0x0078
struct FOnlineProductDrop
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FOnlineProductData>            ProductData;                                   // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FCurrency>                     CurrencyData;                                  // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FOnlineXPReward>               RewardDrops;                                   // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.ChallengeRequirementProgress
// Size: 0x0008
struct FChallengeRequirementProgress
{
	int32_t                                            ProgressCount;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            ProgressChange;                                // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.ChallengeProgress
// Size: 0x0028
struct FChallengeProgress
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           bIsHidden : 1;                                 // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            CompleteCount;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bNotifyCompleted : 1;                          // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bNotifyAvailable : 1;                          // 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bNotifyNewInfo : 1;                            // 0x000C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bRewardsAvailable : 1;                         // 0x000C (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bComplete : 1;                                 // 0x000C (0x0004) [0x0000000000000000] [0x00000010] 
	uint64_t                                           ProgressResetTimeUTC;                          // 0x0010 (0x0008) [0x0000000000000000]               
	class TArray<struct FChallengeRequirementProgress> RequirementProgress;                           // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.XPRewardData
// Size: 0x000C
struct FXPRewardData
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	float                                              Amount;                                        // 0x0008 (0x0004) [0x0000000040000000] (CPF_DataBinding)
};

// ScriptStruct TAGame._Types_TA.GarageSlotCost
// Size: 0x0008
struct FGarageSlotCost
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Amount;                                        // 0x0004 (0x0004) [0x0000000040000000] (CPF_DataBinding)
};

// ScriptStruct TAGame._Types_TA.ProductDrop
// Size: 0x0028 (0x0024 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FProductDrop
{
	struct FProductHashID                              GroupId;                                       // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	struct FProductInstanceID                          DropID;                                        // 0x0008 (0x0010) [0x0000000040000000] (CPF_DataBinding)
	uint64_t                                           DropTime;                                      // 0x0018 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	uint32_t                                           bCanEquipNow : 1;                              // 0x0020 (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0024 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._Types_TA.RPCIntroCar
// Size: 0x0038
struct FRPCIntroCar
{
	int32_t                                            TemplateIndex;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      TemplateName;                                  // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      TemplateDescription;                           // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              ProductsList;                                  // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.IntroCarInfo
// Size: 0x0028
struct FIntroCarInfo
{
	int32_t                                            TemplateIndex;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      TemplateName;                                  // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      TemplateDescription;                           // 0x0018 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.EditorIntroCar
// Size: 0x0038
struct FEditorIntroCar
{
	struct FIntroCarInfo                               Info;                                          // 0x0000 (0x0028) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UProduct_TA*>                   ProductList;                                   // 0x0028 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.AppliedBreakoutDamage
// Size: 0x0018
struct FAppliedBreakoutDamage
{
	uint8_t                                            Id;                                            // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x0001 (0x0003) MISSED OFFSET
	struct FVector                                     Location;                                      // 0x0004 (0x000C) [0x0000000000000000]               
	int32_t                                            DamageIndex;                                   // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            TotalDamage;                                   // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.PaintAttributeParameter
// Size: 0x0010
struct FPaintAttributeParameter
{
	uint8_t                                            PaintVariant;                                  // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x3];                            // 0x0001 (0x0003) MISSED OFFSET
	class FName                                        ParameterName;                                 // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bEnabled : 1;                                  // 0x000C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bGammaCorrect : 1;                             // 0x000C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct TAGame._Types_TA.ProductLevelData
// Size: 0x0010
struct FProductLevelData
{
	int32_t                                            Level;                                         // 0x0000 (0x0004) [0x0000000040000001] (CPF_Edit | CPF_DataBinding)
	int32_t                                            SoftCurrency;                                  // 0x0004 (0x0004) [0x0000000040000001] (CPF_Edit | CPF_DataBinding)
	int32_t                                            HardCurrency;                                  // 0x0008 (0x0004) [0x0000000040000001] (CPF_Edit | CPF_DataBinding)
	float                                              UnlockWeight;                                  // 0x000C (0x0004) [0x0000000040000001] (CPF_Edit | CPF_DataBinding)
};

// ScriptStruct TAGame._Types_TA.BallPredictionInfo
// Size: 0x003C
struct FBallPredictionInfo
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              ArchTopTime;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                      // 0x0014 (0x000C) [0x0000000000000000]               
	struct FVector                                     ArchTop;                                       // 0x0020 (0x000C) [0x0000000000000000]               
	struct FVector                                     ArchTopVelocity;                               // 0x002C (0x000C) [0x0000000000000000]               
	uint32_t                                           bHitWall : 1;                                  // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHitGround : 1;                                // 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TAGame._Types_TA.PlayerPrivateMatchData
// Size: 0x0050
struct FPlayerPrivateMatchData
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              GameSecondsPlayed;                             // 0x0048 (0x0004) [0x0000000000000000]               
	int32_t                                            GameScore;                                     // 0x004C (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.StatData
// Size: 0x000C
struct FStatData
{
	class FName                                        EventName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            Count;                                         // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.QuickChatGroup
// Size: 0x0018 (0x0014 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FQuickChatGroup
{
	class FString                                      Key;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Count;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0014 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._Types_TA.OnlinePlayerMatchData
// Size: 0x0128 (0x0125 PropertySize + 0x0003 padding to satisfy MinAlignment of 8)
struct FOnlinePlayerMatchData
{
	class APRI_TA*                                     PRI;                                           // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FUniqueNetId                                PlayerID;                                      // 0x0008 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              GameSecondsPlayed;                             // 0x0050 (0x0004) [0x0000000000000000]               
	int32_t                                            GameScore;                                     // 0x0054 (0x0004) [0x0000000000000000]               
	int32_t                                            MatchGoals;                                    // 0x0058 (0x0004) [0x0000000000000000]               
	int32_t                                            MatchAssists;                                  // 0x005C (0x0004) [0x0000000000000000]               
	int32_t                                            MatchSaves;                                    // 0x0060 (0x0004) [0x0000000000000000]               
	int32_t                                            MatchShots;                                    // 0x0064 (0x0004) [0x0000000000000000]               
	int32_t                                            XPGained;                                      // 0x0068 (0x0004) [0x0001000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x006C (0x0004) MISSED OFFSET
	class TArray<struct FOnlineProductData>            Loadout;                                       // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bCompletedMatch : 1;                           // 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bForfeit : 1;                                  // 0x0080 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bMvp : 1;                                      // 0x0080 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bWinner : 1;                                   // 0x0080 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bLeaver : 1;                                   // 0x0080 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bInParty : 1;                                  // 0x0080 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bJoinedInProgress : 1;                         // 0x0080 (0x0004) [0x0000000000000000] [0x00000040] 
	int32_t                                            ConsecutiveMatchesPlayed;                      // 0x0084 (0x0004) [0x0000000000000000]               
	struct FUniqueNetId                                PartyLeader;                                   // 0x0088 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FUniqueNetId>                  PartyMembers;                                  // 0x00D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            DistanceDrivenMeters;                          // 0x00E0 (0x0004) [0x0000000000000000]               
	uint32_t                                           bPartyLeaderValid : 1;                         // 0x00E4 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            TeamIndex;                                     // 0x00E8 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData01[0x4];                            // 0x00EC (0x0004) MISSED OFFSET
	class TArray<struct FStatData>                     Stats;                                         // 0x00F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FLoadoutData>                  TeamLoadouts;                                  // 0x0100 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FQuickChatGroup>               QuickChat;                                     // 0x0110 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           ForceDrop : 1;                                 // 0x0120 (0x0004) [0x0001000000000000] [0x00000001] 
	uint32_t                                           PreventDrop : 1;                               // 0x0120 (0x0004) [0x0001000000000000] [0x00000002] 
	uint8_t                                            InfectedByType;                                // 0x0124 (0x0001) [0x0001000000000000]               
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x0125 (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._Types_TA.StatDataFloat
// Size: 0x000C
struct FStatDataFloat
{
	class FName                                        EventName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Count;                                         // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.ActorHistory
// Size: 0x0020
struct FActorHistory
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            Type;                                          // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x7];                            // 0x0009 (0x0007) MISSED OFFSET
	class FString                                      SerializedHistory;                             // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.SortedProductData
// Size: 0x0038 (0x0034 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FSortedProductData
{
	struct FProductInstanceID                          Id;                                            // 0x0000 (0x0010) [0x0000000000000000]               
	struct FProductHashID                              HashID;                                        // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0014 (0x0004) MISSED OFFSET
	class UProduct_TA*                                 Product;                                       // 0x0018 (0x0008) [0x0000000000000000]               
	class UOnlineProduct_TA*                           OnlineProduct;                                 // 0x0020 (0x0008) [0x0000000000000000]               
	int32_t                                            BlueprintSortWeight;                           // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            Quantity;                                      // 0x002C (0x0004) [0x0000000000000000]               
	uint32_t                                           bUnlocked : 1;                                 // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsFavorited : 1;                              // 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bCurrency : 1;                                 // 0x0030 (0x0004) [0x0000000000000000] [0x00000004] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0034 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._Types_TA.EditorRoundData
// Size: 0x0018
struct FEditorRoundData
{
	float                                              TimeLimit;                                     // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class TArray<class FString>                        SerializedArchetypes;                          // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.LoadObjectResult
// Size: 0x0028 (0x0021 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FLoadObjectResult
{
	class FString                                      FilePath;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UObject*                                     ObjectData;                                    // 0x0010 (0x0008) [0x0000000000000000]               
	class UError*                                      Error;                                         // 0x0018 (0x0008) [0x0000000000000000]               
	uint8_t                                            Code;                                          // 0x0020 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0021 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._Types_TA.SaveObjectResult
// Size: 0x0018 (0x0011 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FSaveObjectResult
{
	class UObject*                                     ObjectData;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	class UError*                                      Error;                                         // 0x0008 (0x0008) [0x0000000000000000]               
	uint8_t                                            Code;                                          // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0011 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._Types_TA.WeldingInfo
// Size: 0x0028 (0x0024 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FWeldingInfo
{
	class ARBActor_TA*                                 RBActor;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     Offset;                                        // 0x0008 (0x000C) [0x0000000000000000]               
	float                                              Mass;                                          // 0x0014 (0x0004) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x0018 (0x000C) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0024 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._Types_TA.ChatBanInfo
// Size: 0x0010 (0x000C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FChatBanInfo
{
	uint64_t                                           Expiration;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bPermanentlyBanned : 1;                        // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x000C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._Types_TA.PlayerChatMessage
// Size: 0x0068
struct FPlayerChatMessage
{
	float                                              MessageTimeStamp;                              // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	struct FUniqueNetId                                PlayerID;                                      // 0x0008 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            ChatChannel;                                   // 0x0050 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData01[0x3];                            // 0x0051 (0x0003) MISSED OFFSET
	int32_t                                            Team;                                          // 0x0054 (0x0004) [0x0000000000000000]               
	class FString                                      Message;                                       // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.ReportedPlayerInfo
// Size: 0x00A8 (0x00A4 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FReportedPlayerInfo
{
	struct FUniqueNetId                                Reporter;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                Offender;                                      // 0x0048 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              ReasonIDs;                                     // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              ReportTimeStamp;                               // 0x00A0 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x00A4 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._Types_TA.BoostOptionData
// Size: 0x0010
struct FBoostOptionData
{
	class FString                                      LocalizedName;                                 // 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
};

// ScriptStruct TAGame._Types_TA.GoalResetOptionData
// Size: 0x0020
struct FGoalResetOptionData
{
	class FString                                      LocalizedName;                                 // 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      LocalizedDescription;                          // 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
};

// ScriptStruct TAGame._Types_TA.GameModeData
// Size: 0x0020 (0x001C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FGameModeData
{
	int32_t                                            GameMode;                                      // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      LocalizedName;                                 // 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	int32_t                                            SortIdx;                                       // 0x0018 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x001C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._Types_TA.SimilarLogoGroup
// Size: 0x0010
struct FSimilarLogoGroup
{
	class TArray<class UProductAsset_Logo_TA*>         SimilarLogoColorAssets;                        // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.UIProductSlotData
// Size: 0x0018
struct FUIProductSlotData
{
	class UProductSlot_TA*                             Slot;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UTexture2D*                                  Texture;                                       // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAkSoundCue*                                 Sound;                                         // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._Types_TA.SimpleSpringSettings
// Size: 0x0050
struct FSimpleSpringSettings
{
	struct FVector                                     Strength;                                      // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Damping;                                       // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     MaxDisplacement;                               // 0x0018 (0x000C) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bUseMinDisplacement : 1;                       // 0x0024 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FVector                                     MinDisplacement;                               // 0x0028 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              Mass;                                          // 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     MassOffset;                                    // 0x0038 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxSpeed;                                      // 0x0044 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bDebug : 1;                                    // 0x0048 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              DrawDebugOffset;                               // 0x004C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._Types_TA.WheelContactData
// Size: 0x0050
struct FWheelContactData
{
	uint32_t                                           bHasContact : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHasContactWithWorldGeometry : 1;              // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              HasContactChangeTime;                          // 0x0004 (0x0004) [0x0000000000000000]               
	class AActor*                                      Actor;                                         // 0x0008 (0x0008) [0x0000000000000000]               
	class UPrimitiveComponent*                         Component;                                     // 0x0010 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     Location;                                      // 0x0018 (0x000C) [0x0000000000000000]               
	struct FVector                                     Normal;                                        // 0x0024 (0x000C) [0x0000000000000000]               
	struct FVector                                     LatDirection;                                  // 0x0030 (0x000C) [0x0000000000000000]               
	struct FVector                                     LongDirection;                                 // 0x003C (0x000C) [0x0000000000000000]               
	class UPhysicalMaterialProperty_TA*                PhysMatProp;                                   // 0x0048 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.WheelAttachment
// Size: 0x0030
struct FWheelAttachment
{
	class UPrimitiveComponent*                         Component;                                     // 0x0000 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class TArray<class UAttachmentBehavior_TA*>        Behaviors;                                     // 0x0008 (0x0010) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
	class FName                                        Socket;                                        // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UMaterialInterface*>            PaintableMaterials;                            // 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.ProductAttachment
// Size: 0x0070
struct FProductAttachment
{
	class UStaticMesh*                                 StaticMesh;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USkeletalMesh*                               SkeletalMesh;                                  // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             ParticleSystem;                                // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInterface*                          Material;                                      // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              Scale;                                         // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Translation;                                   // 0x0024 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    Rotation;                                      // 0x0030 (0x000C) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            Socket;                                        // 0x003C (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x3];                            // 0x003D (0x0003) MISSED OFFSET
	class UAntennaComponent_TA*                        Antenna;                                       // 0x0040 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class TArray<class UAttachmentBehavior_TA*>        Behaviors;                                     // 0x0048 (0x0010) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
	class UProductAttribute_InheritCarSetting_TA*      InheritCarAttribute;                           // 0x0058 (0x0008) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	class UPrimitiveComponent*                         Component;                                     // 0x0060 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class AFXActor_X*                                  FXActor;                                       // 0x0068 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._Types_TA.AccumulatedRigidBodyCollision
// Size: 0x0080
struct FAccumulatedRigidBodyCollision
{
	class AActor*                                      Actor;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	class UPrimitiveComponent*                         Component;                                     // 0x0008 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPhysicalMaterial*                           PhysMat;                                       // 0x0010 (0x0008) [0x0000000000000000]               
	struct FVector                                     Velocity;                                      // 0x0018 (0x000C) [0x0000000000000000]               
	struct FVector                                     OtherVelocity;                                 // 0x0024 (0x000C) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0030 (0x000C) [0x0000000000000000]               
	struct FVector                                     Normal;                                        // 0x003C (0x000C) [0x0000000000000000]               
	struct FVector                                     NormalForce;                                   // 0x0048 (0x000C) [0x0000000000000000]               
	struct FVector                                     FrictionForce;                                 // 0x0054 (0x000C) [0x0000000000000000]               
	struct FVector                                     NormalVelocity;                                // 0x0060 (0x000C) [0x0000000000000000]               
	struct FVector                                     FrictionVelocity;                              // 0x006C (0x000C) [0x0000000000000000]               
	int32_t                                            NumCollisions;                                 // 0x0078 (0x0004) [0x0000000000000000]               
	int32_t                                            NumContacts;                                   // 0x007C (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.TAPlayerStat
// Size: 0x0010 (0x000C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FTAPlayerStat
{
	class UStatEvent_TA*                               StatEvent;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            Count;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x000C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._Types_TA.BallHitInfo
// Size: 0x0110 (0x010C PropertySize + 0x0004 padding to satisfy MinAlignment of 16)
struct FBallHitInfo
{
	class APRI_TA*                                     PRI;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	class APRI_TA*                                     AttackerPRI;                                   // 0x0008 (0x0008) [0x0000000000000000]               
	class FName                                        CarName;                                       // 0x0010 (0x0008) [0x0000000000000000]               
	int32_t                                            TeamNum;                                       // 0x0018 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x001C (0x0004) MISSED OFFSET
	struct FReplicatedRBState                          PreHitCarPhysics;                              // 0x0020 (0x0040) [0x0000000000000000]               
	struct FReplicatedRBState                          PreHitBallPhysics;                             // 0x0060 (0x0040) [0x0000000000000000]               
	struct FReplicatedRBState                          PostHitBallPhysics;                            // 0x00A0 (0x0040) [0x0000000000000000]               
	float                                              Distance;                                      // 0x00E0 (0x0004) [0x0000000000000000]               
	float                                              Time;                                          // 0x00E4 (0x0004) [0x0000000000000000]               
	struct FVector                                     HitLocation;                                   // 0x00E8 (0x000C) [0x0000000000000000]               
	struct FVector                                     HitNormal;                                     // 0x00F4 (0x000C) [0x0000000000000000]               
	uint32_t                                           bDodging : 1;                                  // 0x0100 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bWheelsTouching : 1;                           // 0x0100 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bWorldTouching : 1;                            // 0x0100 (0x0004) [0x0000000000000000] [0x00000004] 
	uint8_t                                            HitType;                                       // 0x0104 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData01[0x3];                            // 0x0105 (0x0003) MISSED OFFSET
	int32_t                                            HitID;                                         // 0x0108 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x010C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._Types_TA.MessageValue
// Size: 0x0030 (0x002C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FMessageValue
{
	class FString                                      StringValue;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            IntValue;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0014 (0x0004) MISSED OFFSET
	class UObject*                                     ObjectValue;                                   // 0x0018 (0x0008) [0x0000000000000000]               
	class FName                                        NameValue;                                     // 0x0020 (0x0008) [0x0000000000000000]               
	int32_t                                            ValueType;                                     // 0x0028 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x002C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._Types_TA.MessagePacket
// Size: 0x0018
struct FMessagePacket
{
	class UMessage_TA*                                 Message;                                       // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	class TArray<struct FMessageValue>                 Values;                                        // 0x0008 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.ClientFrameData
// Size: 0x0028
struct FClientFrameData
{
	struct FVehicleInputs                              VehicleInput;                                  // 0x0000 (0x0020) [0x0000000000000000]               
	int32_t                                            frame;                                         // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              TimeStamp;                                     // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.OnlineProductStat
// Size: 0x0018
struct FOnlineProductStat
{
	struct FProductInstanceID                          InstanceID;                                    // 0x0000 (0x0010) [0x0000000000000000]               
	class UProductStat_TA*                             ProductStat;                                   // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.ProductAttributesArray
// Size: 0x0010
struct FProductAttributesArray
{
	class TArray<class UProductAttribute_TA*>          Attributes;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.LoadoutAttributesArray
// Size: 0x0010
struct FLoadoutAttributesArray
{
	class TArray<struct FProductAttributesArray>       Products;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.LoadoutProductData
// Size: 0x0028
struct FLoadoutProductData
{
	int32_t                                            SlotIndex;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            ProductID;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	struct FProductInstanceID                          InstanceID;                                    // 0x0008 (0x0010) [0x0000000000000000]               
	class TArray<class UProductAttribute_TA*>          Attributes;                                    // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.ServerSetLoadoutTeam
// Size: 0x0020
struct FServerSetLoadoutTeam
{
	class TArray<struct FLoadoutProductData>           Products;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FLoadoutTeamPaint                           TeamPaint;                                     // 0x0010 (0x0010) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.ServerSetLoadoutParams
// Size: 0x0058
struct FServerSetLoadoutParams
{
	class FName                                        Title;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	struct FServerSetLoadoutTeam                       Loadouts[2];                                   // 0x0008 (0x0040) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FLoadoutProductData>           DataProducts;                                  // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.RandomRange
// Size: 0x0008
struct FRandomRange
{
	float                                              Min;                                           // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Max;                                           // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._Types_TA.SchematicResourceData
// Size: 0x0018 (0x0014 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FSchematicResourceData
{
	struct FProductInstanceID                          InstanceID;                                    // 0x0000 (0x0010) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Resources;                                     // 0x0010 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0014 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._Types_TA.ProfileProduct
// Size: 0x0020
struct FProfileProduct
{
	struct FProductInstanceID                          InstanceID;                                    // 0x0000 (0x0010) [0x0000000000000000]               
	class TArray<class UProductAttribute_TA*>          Attributes;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.ProductFilter
// Size: 0x0170 (0x016C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FProductFilter
{
	class TArray<class UOnlineProduct_TA*>             OnlineProducts;                                // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UProduct_TA*>                   Products;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FProductHashID>                ArchivedProducts;                              // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FProductHashID>                FavoritedProducts;                             // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Label;                                         // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              Slots;                                         // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UProductSlot_TA*>               ProhibitedSlots;                               // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              ExclusiveQualities;                            // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              ProhibitedQualities;                           // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              UnlockMethods;                                 // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              TradeRestrictions;                             // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              TradeHoldRestrictions;                         // 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UClass*>                        ExclusiveAttributes;                           // 0x00C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UClass*>                        ProhibitedAttributes;                          // 0x00D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            SortType;                                      // 0x00E0 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x7];                            // 0x00E1 (0x0007) MISSED OFFSET
	class TArray<int32_t>                              SeriesIDs;                                     // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FProductHashID                              PackHashID;                                    // 0x00F8 (0x0004) [0x0000000000000000]               
	uint32_t                                           bExcludePacks : 1;                             // 0x00FC (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOnlyXEItems : 1;                              // 0x00FC (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bIgnoreEquipped : 1;                           // 0x00FC (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bIgnoreLicensedCars : 1;                       // 0x00FC (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bStackProducts : 1;                            // 0x00FC (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bAllowEquippedArchivedProducts : 1;            // 0x00FC (0x0004) [0x0000000000000000] [0x00000020] 
	class TArray<int32_t>                              Loadout;                                       // 0x0100 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FProductHashID>                EquippedHashIDs;                               // 0x0110 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            LogLevel;                                      // 0x0120 (0x0001) [0x0000000000000000]               
	uint8_t                                            ArchivedProductFilter;                         // 0x0121 (0x0001) [0x0000000000000000]               
	uint8_t                                            FavoritedProductFilter;                        // 0x0122 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData01[0x5];                            // 0x0123 (0x0005) MISSED OFFSET
	class TArray<uint8_t>                              ProhibitedBlueprints;                          // 0x0128 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              ProhibitedSortTypes;                           // 0x0138 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UClass*>                        ProhibitedAttributeSortTypes;                  // 0x0148 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              PaintIDs;                                      // 0x0158 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bHoldXEInstance : 1;                           // 0x0168 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x016C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._Types_TA.ThumbnailComponent
// Size: 0x0060 (0x0058 PropertySize + 0x0008 padding to satisfy MinAlignment of 16)
struct FThumbnailComponent
{
	class UActorComponent*                             Component;                                     // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	uint8_t                                          UnknownData00[0x8];                            // 0x0008 (0x0008) MISSED OFFSET
	struct FMatrix                                     BaseTransform;                                 // 0x0010 (0x0040) [0x0000000000000000]               
	class FName                                        Tag;                                           // 0x0050 (0x0008) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x8];                      // 0x0058 (0x0008) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._Types_TA.RocketPassTierBonusRange
// Size: 0x000C
struct FRocketPassTierBonusRange
{
	int32_t                                            Start;                                         // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            End;                                           // 0x0004 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Bonus;                                         // 0x0008 (0x0004) [0x0000000040000000] (CPF_DataBinding)
};

// ScriptStruct TAGame._Types_TA.RocketPassUnlock
// Size: 0x0038
struct FRocketPassUnlock
{
	int32_t                                            Tier;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class TArray<struct FOnlineProductData>            ProductData;                                   // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FOnlineXPReward>               RewardDrops;                                   // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FCurrency>                     CurrencyDrops;                                 // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.TierUnlockRequirements
// Size: 0x0008
struct FTierUnlockRequirements
{
	int32_t                                            Tier;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Requirement;                                   // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.RocketPassPageData
// Size: 0x0030
struct FRocketPassPageData
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            RocketPassID;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Page;                                          // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            StartLevel;                                    // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            EndLevel;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            LevelRequiredToUnlock;                         // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            ClaimsRequiredToUnlock;                        // 0x0018 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x001C (0x0004) MISSED OFFSET
	class TArray<struct FTierUnlockRequirements>       TierClaimRequirements;                         // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.OnlineProductTimestampedData
// 0x0010 (0x0040 - 0x0050)
struct FOnlineProductTimestampedData : FOnlineProductData
{
	uint64_t                                           UpdatedTimestamp;                              // 0x0040 (0x0008) [0x0000000000000000]               
	uint64_t                                           DeletedTimestamp;                              // 0x0048 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.ItemSetsData
// Size: 0x0030
struct FItemSetsData
{
	class TArray<struct FOnlineProductTimestampedData> Instances;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Name;                                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Id;                                            // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              StartTime;                                     // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              EndTime;                                       // 0x0028 (0x0004) [0x0000000000000000]               
	uint32_t                                           HideNotification : 1;                          // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame._Types_TA.RocketPassRewardData
// Size: 0x0050
struct FRocketPassRewardData
{
	int32_t                                            Tier;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            UnlockType;                                    // 0x0004 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x0005 (0x0003) MISSED OFFSET
	uint32_t                                           Claimable : 1;                                 // 0x0008 (0x0004) [0x0001000000000000] [0x00000001] 
	uint8_t                                          UnknownData01[0x4];                            // 0x000C (0x0004) MISSED OFFSET
	class TArray<struct FOnlineProductData>            ProductData;                                   // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FItemSetsData>                 ItemSets;                                      // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FXPRewardData>                 XPRewards;                                     // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FCurrency>                     CurrencyDrops;                                 // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.RocketPassExtendedRewardData
// 0x0005 (0x0050 - 0x0055)
struct FRocketPassExtendedRewardData : FRocketPassRewardData
{
	uint32_t                                           bPremiumTier : 1;                              // 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            LockState;                                     // 0x0054 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x0055 (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._Types_TA.RocketPassPage
// Size: 0x0020 (0x001C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FRocketPassPage
{
	uint32_t                                           bProTier : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class TArray<struct FRocketPassExtendedRewardData> Rewards;                                       // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            MaxTierLevel;                                  // 0x0018 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x001C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._Types_TA.RocketPassClaimData
// Size: 0x0028
struct FRocketPassClaimData
{
	int32_t                                            Tier;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class TArray<struct FOnlineProductData>            ProductData;                                   // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FCurrency>                     CurrencyDrops;                                 // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.RocketPassInfo
// Size: 0x000C
struct FRocketPassInfo
{
	int32_t                                            TierLevel;                                     // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bOwnsPremium : 1;                              // 0x0004 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	float                                              XPMultiplier;                                  // 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct TAGame._Types_TA.RocketPassBundleInfo
// Size: 0x0038
struct FRocketPassBundleInfo
{
	int32_t                                            PurchasableID;                                 // 0x0000 (0x0004) [0x0000000040002000] (CPF_Transient | CPF_DataBinding)
	int32_t                                            KeyCost;                                       // 0x0004 (0x0004) [0x0000000040002000] (CPF_Transient | CPF_DataBinding)
	int32_t                                            OriginalKeyCost;                               // 0x0008 (0x0004) [0x0000000040002000] (CPF_Transient | CPF_DataBinding)
	int32_t                                            OriginalCurrencyCost;                          // 0x000C (0x0004) [0x0000000040002000] (CPF_Transient | CPF_DataBinding)
	int32_t                                            CurrencyID;                                    // 0x0010 (0x0004) [0x0000000040002000] (CPF_Transient | CPF_DataBinding)
	int32_t                                            CurrencyCost;                                  // 0x0014 (0x0004) [0x0000000040002000] (CPF_Transient | CPF_DataBinding)
	int32_t                                            Tiers;                                         // 0x0018 (0x0004) [0x0000000040002000] (CPF_Transient | CPF_DataBinding)
	int32_t                                            Savings;                                       // 0x001C (0x0004) [0x0000000040002000] (CPF_Transient | CPF_DataBinding)
	class UTexture*                                    Image;                                         // 0x0020 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	class FString                                      ImageURL;                                      // 0x0028 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.RocketPassStore
// Size: 0x0020
struct FRocketPassStore
{
	class TArray<struct FRocketPassBundleInfo>         Tiers;                                         // 0x0000 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<struct FRocketPassBundleInfo>         Bundles;                                       // 0x0010 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.RocketPassPurchasable
// Size: 0x0008
struct FRocketPassPurchasable
{
	int32_t                                            PurchasableID;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Count;                                         // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.OnlineReward
// Size: 0x0028
struct FOnlineReward
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class TArray<struct FOnlineProductData>            ProductData;                                   // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FOnlineXPReward>               RewardDrops;                                   // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.TradeSkipValidation
// Size: 0x0000
struct FTradeSkipValidation
{
};

// ScriptStruct TAGame._Types_TA.SeasonMatch
// Size: 0x001C
struct FSeasonMatch
{
	int32_t                                            Week;                                          // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Team0;                                         // 0x0004 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Team1;                                         // 0x0008 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Score0;                                        // 0x000C (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Score1;                                        // 0x0010 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Winner;                                        // 0x0014 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint32_t                                           bBye : 1;                                      // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame._Types_TA.SeasonTeam
// Size: 0x0020 (0x001C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FSeasonTeam
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FName                                        LogoAsset;                                     // 0x0010 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            EliminationWeek;                               // 0x0018 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x001C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._Types_TA.SeasonPlayerStat
// Size: 0x0020 (0x001C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FSeasonPlayerStat
{
	int32_t                                            PlayerIndex;                                   // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      StatName;                                      // 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	int32_t                                            StatValue;                                     // 0x0018 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x001C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._Types_TA.SeasonPlayer
// Size: 0x0030 (0x002C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FSeasonPlayer
{
	int32_t                                            Team;                                          // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      Name;                                          // 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      Id;                                            // 0x0018 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	uint32_t                                           bBot : 1;                                      // 0x0028 (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x002C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._Types_TA.SeasonTeamRank
// Size: 0x001C
struct FSeasonTeamRank
{
	int32_t                                            Team;                                          // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Wins;                                          // 0x0004 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Losses;                                        // 0x0008 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            PointsFor;                                     // 0x000C (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            PointsAgainst;                                 // 0x0010 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            PointsDifferential;                            // 0x0014 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            EliminationWeek;                               // 0x0018 (0x0004) [0x0000000040000000] (CPF_DataBinding)
};

// ScriptStruct TAGame._Types_TA.ReplayHeaderLoadResult
// Size: 0x0010
struct FReplayHeaderLoadResult
{
	class UReplay_TA*                                  Header;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class UError*                                      Error;                                         // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.ProfileAutoCamSettings
// Size: 0x0028
struct FProfileAutoCamSettings
{
	float                                              FOV;                                           // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Height;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              Distance;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              MoveSpeed;                                     // 0x000C (0x0004) [0x0000000000000000]               
	float                                              MoveSpeedZ;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              RotateSpeed;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              AerialDistance;                                // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              FocusBlendSpeed;                               // 0x001C (0x0004) [0x0000000000000000]               
	float                                              AerialPrediction;                              // 0x0020 (0x0004) [0x0000000000000000]               
	uint32_t                                           bUseReplayCamera : 1;                          // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bFocusOnGoals : 1;                             // 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TAGame._Types_TA.ProfileCameraSettings
// Size: 0x001C
struct FProfileCameraSettings
{
	float                                              FOV;                                           // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Height;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              Pitch;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Distance;                                      // 0x000C (0x0004) [0x0000000000000000]               
	float                                              Stiffness;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              SwivelSpeed;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              TransitionSpeed;                               // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.StatEventScore
// Size: 0x0010 (0x000C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FStatEventScore
{
	class UStatEvent_TA*                               StatEvent;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            Score;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x000C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._Types_TA.XPInfo
// Size: 0x0020
struct FXPInfo
{
	int32_t                                            TotalXP;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            XpLevel;                                       // 0x0004 (0x0004) [0x0000000000000000]               
	class FString                                      XPTitle;                                       // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            XPProgressInCurrentLevel;                      // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            XPRequiredForNextLevel;                        // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.ProductStat
// Size: 0x0008
struct FProductStat
{
	int32_t                                            ProductID;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Value;                                         // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.DemolishInvulnerability
// Size: 0x0018
struct FDemolishInvulnerability
{
	class UObject*                                     ObjectSource;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<uint8_t>                              DemolishSources;                               // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.DemolishData
// Size: 0x0028
struct FDemolishData
{
	class ARBActor_TA*                                 Attacker;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class ACar_TA*                                     Victim;                                        // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     AttackerVelocity;                              // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     VictimVelocity;                                // 0x001C (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.DemolishDataGoalExplosion
// 0x0008 (0x0028 - 0x0030)
struct FDemolishDataGoalExplosion : FDemolishData
{
	class APRI_TA*                                     GoalExplosionOwner;                            // 0x0028 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.DemolishDataExtended
// 0x0014 (0x0030 - 0x0044)
struct FDemolishDataExtended : FDemolishDataGoalExplosion
{
	class APRI_TA*                                     AttackerPRI;                                   // 0x0030 (0x0008) [0x0000000000000000]               
	class AFXActor_X*                                  SelfDemoFX;                                    // 0x0038 (0x0008) [0x0000000000000000]               
	uint32_t                                           bSelfDemolish : 1;                             // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0044 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._Types_TA.DemolishData2
// 0x0008 (0x0028 - 0x0030)
struct FDemolishData2 : FDemolishData
{
	class AFXActor_X*                                  CustomDemoFX;                                  // 0x0028 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.UISavedKeyValue
// Size: 0x0018
struct FUISavedKeyValue
{
	class FName                                        Key;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      Value;                                         // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.PlaylistMapPrefs
// 0x000C (0x0020 - 0x002C)
struct FPlaylistMapPrefs : FMapPrefs
{
	class FName                                        Playlist;                                      // 0x0020 (0x0008) [0x0000000000000000]               
	uint32_t                                           bOverrideGlobal : 1;                           // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x002C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._Types_TA.NetBucketMetrics
// Size: 0x0014
struct FNetBucketMetrics
{
	int32_t                                            MinPossibleValue;                              // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TotalSeconds;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              AvgRecordedValue;                              // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              MaxRecordedValue;                              // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            Count;                                         // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.FPSBucketMetrics
// Size: 0x0020
struct FFPSBucketMetrics
{
	int32_t                                            FPS;                                           // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            FrameCount;                                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PercentTime;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AverageGameThreadTime;                         // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AverageRenderThreadTime;                       // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AverageGPUFrameTime;                           // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              UndockedAverageResolutionIndex;                // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DockedAverageResolutionIndex;                  // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._Types_TA.BodyToEngineAudioPair
// Size: 0x0010
struct FBodyToEngineAudioPair
{
	class UProduct_TA*                                 Body;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class UProduct_TA*                                 EngineAudio;                                   // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.PartyUpMergeError
// Size: 0x0098
struct FPartyUpMergeError
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                LeaderID;                                      // 0x0048 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class UError*                                      Error;                                         // 0x0090 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.AutoFlipData
// Size: 0x0008
struct FAutoFlipData
{
	float                                              Torque;                                        // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Force;                                         // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._Types_TA.StickyForceData
// Size: 0x0008
struct FStickyForceData
{
	float                                              Ground;                                        // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Wall;                                          // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._Types_TA.WaveParams
// Size: 0x0008
struct FWaveParams
{
	float                                              Frequency;                                     // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Amplitude;                                     // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._Types_TA.PersonaDataId
// Size: 0x0048
struct FPersonaDataId
{
	struct FUniqueNetId                                PersonaId;                                     // 0x0000 (0x0048) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
};

// ScriptStruct TAGame._Types_TA.PaintWithOverride
// Size: 0x0018
struct FPaintWithOverride
{
	class UProductPaint_TA*                            PaintToOverride;                               // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UProductOverride_TA*>           Overrides;                                     // 0x0008 (0x0010) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct TAGame._Types_TA.PlayerActorIDPair
// Size: 0x0050
struct FPlayerActorIDPair
{
	int32_t                                            ActorID;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	struct FUniqueNetId                                PlayerID;                                      // 0x0008 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxData_Mutators_TA.CustomGameSetting
// Size: 0x0070
struct FCustomGameSetting
{
	class FString                                      MutatorCategoryName;                           // 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      MutatorCategoryDesc;                           // 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      SettingsName;                                  // 0x0020 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	int32_t                                            SettingIndex;                                  // 0x0030 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            DefaultIndex;                                  // 0x0034 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	class FName                                        InternalName;                                  // 0x0038 (0x0008) [0x0000000000000000]               
	int32_t                                            MutatorGroupID;                                // 0x0040 (0x0004) [0x0000000000000000]               
	int32_t                                            GameSettingCategoryIndex;                      // 0x0044 (0x0004) [0x0000000000000000]               
	class TArray<class FName>                          SettingNameExplicit;                           // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bPresetLocked : 1;                             // 0x0058 (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
	int32_t                                            RowID;                                         // 0x005C (0x0004) [0x0000000040000000] (CPF_DataBinding)
	class TArray<class FString>                        PreviouslyBlockedCategories;                   // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxData_Mutators_TA.ModeMapPair
// Size: 0x000C
struct FModeMapPair
{
	int32_t                                            GameMode;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	class FName                                        MapName;                                       // 0x0004 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_Mutators_TA.OnlineFreeplayOption
// Size: 0x0048
struct FOnlineFreeplayOption
{
	int32_t                                            OptionIndex;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      LocalizationGroup;                             // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LocalizationPackage;                           // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LocalizationName;                              // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LocalizationDescription;                       // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._ShopTypes_TA.ItemShopNotificationData
// Size: 0x0048
struct FItemShopNotificationData
{
	int32_t                                            ShopNotificationID;                            // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            ShopItemCostID;                                // 0x0004 (0x0004) [0x0000000000000000]               
	uint64_t                                           StartTime;                                     // 0x0008 (0x0008) [0x0000000000000000]               
	uint64_t                                           EndTime;                                       // 0x0010 (0x0008) [0x0000000000000000]               
	class FString                                      ImageURL;                                      // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Title;                                         // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FOnlineProductData>            DeliverableProducts;                           // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._ShopTypes_TA.ShopCurrencyInfo
// Size: 0x0008
struct FShopCurrencyInfo
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Amount;                                        // 0x0004 (0x0004) [0x0000000040000000] (CPF_DataBinding)
};

// ScriptStruct TAGame._ShopTypes_TA.DestructionProductValue
// Size: 0x0020
struct FDestructionProductValue
{
	struct FProductInstanceID                          ProductInstanceID;                             // 0x0000 (0x0010) [0x0000000040000000] (CPF_DataBinding)
	class TArray<struct FShopCurrencyInfo>             Value;                                         // 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
};

// ScriptStruct TAGame._ShopTypes_TA.ShopData
// Size: 0x0058
struct FShopData
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      Name;                                          // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Title;                                         // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Type;                                          // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint64_t                                           StartDate;                                     // 0x0038 (0x0008) [0x0000000000000000]               
	uint64_t                                           EndDate;                                       // 0x0040 (0x0008) [0x0000000000000000]               
	class FString                                      LogoURL;                                       // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._ShopTypes_TA.ShopDeliverable
// Size: 0x0060
struct FShopDeliverable
{
	int32_t                                            Count;                                         // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	struct FProductInstanceID                          Id;                                            // 0x0008 (0x0010) [0x0000000040000000] (CPF_DataBinding)
	struct FProductHashID                              HashID;                                        // 0x0018 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint32_t                                           IsOwned : 1;                                   // 0x001C (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
	uint32_t                                           bOwnedUntradeable : 1;                         // 0x001C (0x0004) [0x0000000040000000] [0x00000002] (CPF_DataBinding)
	struct FOnlineProductData                          Product;                                       // 0x0020 (0x0040) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._ShopTypes_TA.ShopPrice
// Size: 0x0008
struct FShopPrice
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Amount;                                        // 0x0004 (0x0004) [0x0000000040000000] (CPF_DataBinding)
};

// ScriptStruct TAGame._ShopTypes_TA.ShopDiscount
// Size: 0x0030
struct FShopDiscount
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            ShopItemCostID;                                // 0x0004 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint64_t                                           StartDate;                                     // 0x0008 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	uint64_t                                           EndDate;                                       // 0x0010 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	class TArray<struct FShopPrice>                    Price;                                         // 0x0018 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	int32_t                                            Quantity;                                      // 0x0028 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint32_t                                           IsProrated : 1;                                // 0x002C (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
};

// ScriptStruct TAGame._ShopTypes_TA.ShopCost
// Size: 0x0070 (0x0069 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FShopCost
{
	int32_t                                            ShopItemCostID;                                // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class TArray<struct FShopPrice>                    Price;                                         // 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	struct FShopDiscount                               Discount;                                      // 0x0018 (0x0030) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	uint64_t                                           StartDate;                                     // 0x0048 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	uint64_t                                           EndDate;                                       // 0x0050 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	class TArray<struct FShopDiscount>                 BulkDiscounts;                                 // 0x0058 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	uint8_t                                            DisplayTypeID;                                 // 0x0068 (0x0001) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0069 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._ShopTypes_TA.OnlineShopAttribute
// Size: 0x0018
struct FOnlineShopAttribute
{
	class FName                                        Key;                                           // 0x0000 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	class FString                                      Value;                                         // 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
};

// ScriptStruct TAGame._ShopTypes_TA.ShopItem
// Size: 0x00D0
struct FShopItem
{
	int32_t                                            ShopItemID;                                    // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint32_t                                           Purchasable : 1;                               // 0x0004 (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
	int32_t                                            PurchasedQuantity;                             // 0x0008 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            MaxQuantityPerPlayer;                          // 0x000C (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint64_t                                           StartDate;                                     // 0x0010 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	uint64_t                                           EndDate;                                       // 0x0018 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	class TArray<struct FShopDeliverable>              DeliverableProducts;                           // 0x0020 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class TArray<struct FShopCurrencyInfo>             DeliverableCurrencies;                         // 0x0030 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class TArray<struct FShopCost>                     Costs;                                         // 0x0040 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class TArray<class FString>                        FeaturedCollections;                           // 0x0050 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class TArray<int32_t>                              ShopItemLocations;                             // 0x0060 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      Title;                                         // 0x0070 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      Description;                                   // 0x0080 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      disclaimer;                                    // 0x0090 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class TArray<struct FOnlineShopAttribute>          Attributes;                                    // 0x00A0 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      ImageURL;                                      // 0x00B0 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class UTexture*                                    ItemTexture;                                   // 0x00C0 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	uint32_t                                           bOwnsAllUntradeableProducts : 1;               // 0x00C8 (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
	uint32_t                                           bOwnsAllDeliverables : 1;                      // 0x00C8 (0x0004) [0x0000000040000000] [0x00000002] (CPF_DataBinding)
	uint32_t                                           bIsProrated : 1;                               // 0x00C8 (0x0004) [0x0000000040000000] [0x00000004] (CPF_DataBinding)
	int32_t                                            BuyingProductCount;                            // 0x00CC (0x0004) [0x0000000040000000] (CPF_DataBinding)
};

// ScriptStruct TAGame._ShopTypes_TA.ShopCatalogue
// Size: 0x0018
struct FShopCatalogue
{
	int32_t                                            ShopID;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class TArray<struct FShopItem>                     ShopItems;                                     // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._ShopTypes_TA.CurrencyProductData
// Size: 0x0010
struct U_ShopTypes_TA_FCurrencyProductData
{
	class UProduct_TA*                                 Product;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	class UOnlineProduct_TA*                           OnlineProduct;                                 // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._ShopTypes_TA.ShopCurrency
// Size: 0x0058
struct FShopCurrency
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x0001 (0x0003) MISSED OFFSET
	int32_t                                            Id;                                            // 0x0004 (0x0004) [0x0000000000000000]               
	class UTexture*                                    SmallImage;                                    // 0x0008 (0x0008) [0x0000000000000000]               
	class UTexture*                                    LargeImage;                                    // 0x0010 (0x0008) [0x0000000000000000]               
	int32_t                                            Amount;                                        // 0x0018 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData01[0x4];                            // 0x001C (0x0004) MISSED OFFSET
	class FString                                      Name;                                          // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LocalizedName;                                 // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bCanBeTraded : 1;                              // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            TradeHold;                                     // 0x0044 (0x0004) [0x0000000000000000]               
	struct U_ShopTypes_TA_FCurrencyProductData         ProductData;                                   // 0x0048 (0x0010) [0x0000000000000000]               
};

// ScriptStruct TAGame._ShopTypes_TA.ShopCurrencyData
// Size: 0x0008
struct FShopCurrencyData
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Amount;                                        // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._TourTypes_TA.TourPlayer
// Size: 0x0060
struct FTourPlayer
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PlayerName;                                    // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UTexture*                                    Avatar;                                        // 0x0058 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct TAGame._TourTypes_TA.TourReward
// Size: 0x0018 (0x0014 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FTourReward
{
	class TArray<struct FOnlineProductData>            Rewards;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Placement;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0014 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._TourTypes_TA.TourTeam
// Size: 0x0048 (0x0044 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FTourTeam
{
	uint64_t                                           TeamID;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	struct FCustomMatchTeamSettings                    Settings;                                      // 0x0008 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FTourPlayer>                   Players;                                       // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint64_t                                           Seed;                                          // 0x0038 (0x0008) [0x0000000000000000]               
	int32_t                                            Difficulty;                                    // 0x0040 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0044 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._TourTypes_TA.TourMatchGame
// Size: 0x0018
struct FTourMatchGame
{
	int32_t                                            GameTimeSeconds;                               // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           bOverTime : 1;                                 // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bAborted : 1;                                  // 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	uint64_t                                           Winner;                                        // 0x0008 (0x0008) [0x0000000000000000]               
	int32_t                                            Scores[2];                                     // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._TourTypes_TA.TourPlayerStats
// Size: 0x0060
struct FTourPlayerStats
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            TeamNum;                                       // 0x0048 (0x0004) [0x0000000000000000]               
	int32_t                                            Score;                                         // 0x004C (0x0004) [0x0000000000000000]               
	int32_t                                            Saves;                                         // 0x0050 (0x0004) [0x0000000000000000]               
	int32_t                                            Shots;                                         // 0x0054 (0x0004) [0x0000000000000000]               
	int32_t                                            Goals;                                         // 0x0058 (0x0004) [0x0000000000000000]               
	int32_t                                            Assists;                                       // 0x005C (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._TourTypes_TA.TourMatch
// Size: 0x0030
struct FTourMatch
{
	int32_t                                            MatchID;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	uint64_t                                           Teams[2];                                      // 0x0008 (0x0010) [0x0000000000000000]               
	uint64_t                                           Winner;                                        // 0x0018 (0x0008) [0x0000000000000000]               
	class TArray<struct FTourMatchGame>                Games;                                         // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._TourTypes_TA.IntPair
// Size: 0x0008
struct FIntPair
{
	int32_t                                            A;                                             // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            B;                                             // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._TourTypes_TA.QWORDPair
// Size: 0x0010
struct FQWORDPair
{
	uint64_t                                           A;                                             // 0x0000 (0x0008) [0x0000000000000000]               
	uint64_t                                           B;                                             // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._TourTypes_TA.TourMatchNode
// Size: 0x0030 (0x002C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FTourMatchNode
{
	int32_t                                            MatchID;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Round;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Order;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x000C (0x0004) MISSED OFFSET
	struct FQWORDPair                                  Teams;                                         // 0x0010 (0x0010) [0x0000000000000000]               
	int32_t                                            NextMatchID;                                   // 0x0020 (0x0004) [0x0000000000000000]               
	struct FIntPair                                    PrevMatch;                                     // 0x0024 (0x0008) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x002C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._TourTypes_TA.TourPlacementInfo
// Size: 0x0070
struct FTourPlacementInfo
{
	int32_t                                            Placement;                                     // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      Name;                                          // 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	int32_t                                            Value;                                         // 0x0018 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          UnknownData01[0x4];                            // 0x001C (0x0004) MISSED OFFSET
	uint64_t                                           TeamID;                                        // 0x0020 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	struct FUniqueNetId                                PlayerID;                                      // 0x0028 (0x0048) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
};

// ScriptStruct TAGame._TourTypes_TA.TourLeaderboard
// Size: 0x0040
struct FTourLeaderboard
{
	class TArray<struct FTourPlacementInfo>            TeamGoals;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FTourPlacementInfo>            PlayerGoals;                                   // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FTourPlacementInfo>            PlayerAssists;                                 // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FTourPlacementInfo>            PlayerSaves;                                   // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._TourTypes_TA.TourMatchPlayerStats
// Size: 0x0068 (0x0064 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FTourMatchPlayerStats
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	struct FUniqueNetId                                Id;                                            // 0x0008 (0x0048) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	int32_t                                            Score;                                         // 0x0050 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Goals;                                         // 0x0054 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Assists;                                       // 0x0058 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Saves;                                         // 0x005C (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Shots;                                         // 0x0060 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0064 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._TourTypes_TA.TourMatchTeamDetails
// Size: 0x0028
struct FTourMatchTeamDetails
{
	uint64_t                                           TeamID;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<int32_t>                              GoalsPerGame;                                  // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FTourMatchPlayerStats>         CumulativePlayerStats;                         // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._TourTypes_TA.TourBracket
// Size: 0x0078
struct FTourBracket
{
	uint64_t                                           TournamentID;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<struct FTourTeam>                     Teams;                                         // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FTourMatch>                    Matches;                                       // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FTourLeaderboard                            Leaderboard;                                   // 0x0028 (0x0040) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FShopCurrencyInfo>             CurrentPayouts;                                // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.CameraState_PodiumSpotlight_TA.CachedPodiumCar
// Size: 0x0018
struct FCachedPodiumCar
{
	class ACar_TA*                                     Car;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	uint32_t                                           bHasPostMatchCelebration : 1;                  // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.Car_KnockOut_TA.PendingHit
// Size: 0x0020 (0x001C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FPendingHit
{
	class ACar_KnockOut_TA*                            Attacker;                                      // 0x0000 (0x0008) [0x0001000000000000]               
	struct FVector                                     HitDirection;                                  // 0x0008 (0x000C) [0x0001000000000000]               
	float                                              HitSpeed;                                      // 0x0014 (0x0004) [0x0001000000000000]               
	uint32_t                                           bHeavyAttack : 1;                              // 0x0018 (0x0004) [0x0001000000000000] [0x00000001] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x001C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.CarMeshComponent_TA.WheelSkelControlSet
// Size: 0x0020
struct FWheelSkelControlSet
{
	class UWheel_TA*                                   Wheel;                                         // 0x0000 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USkelControlSingleBone*                      TranslationControl;                            // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USkelControlSingleBone*                      SteerControl;                                  // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USkelControlSingleBone*                      RollControl;                                   // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.CodeRedeemer_TA.PendingCodeRedemption
// Size: 0x0018
struct FPendingCodeRedemption
{
	class UOnlinePlayer_TA*                            OnlinePlayer;                                  // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	class FString                                      Code;                                          // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.CrumbTrails_TA.CrumbTrailData
// Size: 0x0058
struct FCrumbTrailData
{
	class FName                                        CrumbTrailId;                                  // 0x0000 (0x0008) [0x0001000000000000]               
	class TArray<class FName>                          CrumbNames;                                    // 0x0008 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	class FName                                        MenuTreeTrailEnd;                              // 0x0018 (0x0008) [0x0001000000000000]               
	class TArray<class UTriggerClump_TA*>              ActivationTriggers;                            // 0x0020 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	class TArray<class UTriggerClump_TA*>              CompletionOverride;                            // 0x0030 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bCompleteOnlyWhenActive : 1;                   // 0x0040 (0x0004) [0x0001000000000000] [0x00000001] 
	uint32_t                                           bRepeatable : 1;                               // 0x0040 (0x0004) [0x0001000000000000] [0x00000002] 
	uint32_t                                           bManualStart : 1;                              // 0x0040 (0x0004) [0x0001000000000000] [0x00000004] 
	uint8_t                                          UnknownData00[0x4];                            // 0x0044 (0x0004) MISSED OFFSET
	class UTriggerCondition_TA*                        ActivationCondition;                           // 0x0048 (0x0008) [0x0001000000002000] (CPF_Transient)
	class UTriggerCondition_TA*                        CompletionCondition;                           // 0x0050 (0x0008) [0x0001000000002000] (CPF_Transient)
};

// ScriptStruct TAGame.EOSGameClipsMetrics_TA.EOSGameClipsAccountLinkInfo
// Size: 0x0028
struct FEOSGameClipsAccountLinkInfo
{
	class FString                                      EpicAccountId;                                 // 0x0000 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bLinkedToPostparty : 1;                        // 0x0010 (0x0004) [0x0001000000000000] [0x00000001] 
	uint8_t                                          UnknownData00[0x4];                            // 0x0014 (0x0004) MISSED OFFSET
	class TArray<class FName>                          Errors;                                        // 0x0018 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.EOSGameClipsMetrics_TA.EOSGameClipsClipInfo
// Size: 0x0040
struct FEOSGameClipsClipInfo
{
	class FString                                      EpicAccountId;                                 // 0x0000 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	int32_t                                            ClipId;                                        // 0x0010 (0x0004) [0x0001000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0014 (0x0004) MISSED OFFSET
	class FString                                      ClipType;                                      // 0x0018 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	float                                              ClipUploadStartTimestamp;                      // 0x0028 (0x0004) [0x0001000000000000]               
	float                                              ClipUploadEndTimestamp;                        // 0x002C (0x0004) [0x0001000000000000]               
	class TArray<class FName>                          Errors;                                        // 0x0030 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.EOSVoiceManager_TA.VoiceRoomToken
// Size: 0x0068
struct FVoiceRoomToken
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0001000000400000] (CPF_NeedCtorLink)
	class FString                                      ClientBaseUrl;                                 // 0x0048 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	class FString                                      Token;                                         // 0x0058 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.EOSVoiceManager_TA.MappedRoomMember
// Size: 0x0058
struct FMappedRoomMember
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0001000000400000] (CPF_NeedCtorLink)
	class FString                                      EpicAccountId;                                 // 0x0048 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.EOSVoiceManager_TA.VoiceRoom
// Size: 0x0038 (0x0031 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FVoiceRoom
{
	class FString                                      RoomName;                                      // 0x0000 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	class TArray<struct FVoiceRoomToken>               Tokens;                                        // 0x0010 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	class TArray<struct FMappedRoomMember>             Members;                                       // 0x0020 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	uint8_t                                            RoomType;                                      // 0x0030 (0x0001) [0x0001000000000000]               
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0031 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.EOSVoiceSettingsSave_TA.PlatformAudioDevices
// Size: 0x0028 (0x0021 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FPlatformAudioDevices
{
	class FString                                      InputDeviceId;                                 // 0x0000 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	class FString                                      OutputDeviceId;                                // 0x0010 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	uint8_t                                            Platform;                                      // 0x0020 (0x0001) [0x0001000000000000]               
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0021 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.EpicAccountSave_TA.EpicConvertFriendsSaveData
// Size: 0x0018 (0x0014 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FEpicConvertFriendsSaveData
{
	uint8_t                                            Platform;                                      // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x7];                            // 0x0001 (0x0007) MISSED OFFSET
	uint64_t                                           LastPromptTime;                                // 0x0008 (0x0008) [0x0000000000000000]               
	uint32_t                                           bConvertPlatformFriends : 1;                   // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPromptedForConversion : 1;                    // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0014 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.FirstTimeExperienceManager_TA.FTEGroup
// Size: 0x0048
struct FFTEGroup
{
	class FName                                        GroupName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      RequirementInfo;                               // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UTriggerClump_TA*>              TriggerClumps;                                 // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bCanBeDoneAgain : 1;                           // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            GroupUserType;                                 // 0x002C (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x002D (0x0003) MISSED OFFSET
	int32_t                                            GroupVersion;                                  // 0x0030 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData01[0x4];                            // 0x0034 (0x0004) MISSED OFFSET
	class TArray<class FName>                          Checkpoints;                                   // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.FirstTimeExperienceSave_TA.CompletedFTEInfo
// Size: 0x0028 (0x0024 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FCompletedFTEInfo
{
	class FName                                        GroupName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bHasCompletedGroup : 1;                        // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          UnknownData00[0x4];                            // 0x000C (0x0004) MISSED OFFSET
	class TArray<class FName>                          CompletedCheckpoints;                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            GroupVersion;                                  // 0x0020 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0024 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.FirstTimeExperienceManager_TA.FTELevelData
// Size: 0x0048
struct FFTELevelData
{
	class FString                                      LevelId;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UClass*                                      SequenceClass;                                 // 0x0010 (0x0008) [0x0000000000000000]               
	class FString                                      MapName;                                       // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      MatchType;                                     // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        AddedInfo;                                     // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.FirstTimeExperienceManager_TA.FTEChallengeInfo
// Size: 0x0010
struct FFTEChallengeInfo
{
	class FName                                        GroupName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        CheckpointName;                                // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.FXActor_SafeZone_Knockout_TA.SafeZoneInfo
// Size: 0x0010
struct FSafeZoneInfo
{
	int32_t                                            Size;                                          // 0x0000 (0x0004) [0x0001000000000001] (CPF_Edit)    
	int32_t                                            StartTime;                                     // 0x0004 (0x0004) [0x0001000000000001] (CPF_Edit)    
	int32_t                                            ReturnToZoneTime;                              // 0x0008 (0x0004) [0x0001000000000001] (CPF_Edit)    
	float                                              BlendSpeed;                                    // 0x000C (0x0004) [0x0001000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.GameEvent_Team_TA.PlayerLeavingData
// Size: 0x0010
struct FPlayerLeavingData
{
	class AController*                                 Player;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class ATeam_TA*                                    Team;                                          // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.GameEvent_Soccar_TA.ClubMemberCount
// Size: 0x0010
struct FClubMemberCount
{
	int32_t                                            Count;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	uint64_t                                           ClubID;                                        // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.GameEvent_Soccar_TA.PendingClubStatRecord
// Size: 0x0010
struct FPendingClubStatRecord
{
	int32_t                                            TeamIndex;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	uint64_t                                           ClubID;                                        // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.MatchSeries_TA.SeriesTeam
// Size: 0x0018 (0x0014 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FSeriesTeam
{
	class TArray<struct FUniqueNetId>                  Players;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            GamesWon;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0014 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.GameEvent_Soccar_TA.MemberTitleStat
// Size: 0x0020
struct FMemberTitleStat
{
	class UStatCategory_TA*                            Category;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class UStatTitle_TA*                               Title;                                         // 0x0008 (0x0008) [0x0000000000000000]               
	int32_t                                            PointsEarned;                                  // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            StatCount;                                     // 0x0014 (0x0004) [0x0000000000000000]               
	class APRI_TA*                                     MemberPRI;                                     // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.FpsBucketRecorder_TA.FpsBucketData
// Size: 0x0024
struct FFpsBucketData
{
	int32_t                                            FPS;                                           // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TotalTime;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              GameThreadTime;                                // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              RenderThreadTime;                              // 0x000C (0x0004) [0x0000000000000000]               
	float                                              GPUFrameTime;                                  // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              AvgFPS;                                        // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            DockedResolutionIndexSum;                      // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            UndockedResolutionIndexSum;                    // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            Count;                                         // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.GameInfo_TA.GameEventData
// Size: 0x0020 (0x001C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FGameEventData
{
	class AGameEvent_TA*                               Archetype;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FString                                      LaunchOption;                                  // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bDestroyCurrentGame : 1;                       // 0x0018 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bAddAllPlayers : 1;                            // 0x0018 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x001C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.GameInfo_TA.PostMatchCelebrationData
// Size: 0x0028 (0x0024 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FPostMatchCelebrationData
{
	class FName                                        CelebrationName;                               // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        MVPAnim;                                       // 0x0008 (0x0008) [0x0000000000000000]               
	class TArray<class FName>                          RegularAnims;                                  // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            CelebrationPlayerCount;                        // 0x0020 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0024 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.GameObserver_TA.BallData
// Size: 0x0020 (0x001C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FBallData
{
	class ABall_TA*                                    Ball;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Altitude;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              AerialSkill;                                   // 0x000C (0x0004) [0x0000000000000000]               
	class AVehicle_TA*                                 LastHitBy;                                     // 0x0010 (0x0008) [0x0000000000000000]               
	float                                              LastHitTime;                                   // 0x0018 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x001C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.GameObserver_TA.CarGoalData
// Size: 0x000C
struct FCarGoalData
{
	float                                              Distance;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Dot;                                           // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              DotBetweenBall;                                // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.GameObserver_TA.CarData
// Size: 0x0058
struct FCarData
{
	class AVehicle_TA*                                 Car;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Dot;                                           // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              DistToBall;                                    // 0x000C (0x0004) [0x0000000000000000]               
	float                                              SpeedTowardsBall;                              // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              TimeToBall;                                    // 0x0014 (0x0004) [0x0000000000000000]               
	struct FCarGoalData                                OffensiveGoal;                                 // 0x0018 (0x000C) [0x0000000000000000]               
	struct FCarGoalData                                DefensiveGoal;                                 // 0x0024 (0x000C) [0x0000000000000000]               
	class FString                                      LastEvent;                                     // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              BallHitProbability;                            // 0x0040 (0x0004) [0x0000000000000000]               
	float                                              Offense;                                       // 0x0044 (0x0004) [0x0000000000000000]               
	float                                              Defense;                                       // 0x0048 (0x0004) [0x0000000000000000]               
	float                                              Aerial;                                        // 0x004C (0x0004) [0x0000000000000000]               
	float                                              PredictedDistToBall;                           // 0x0050 (0x0004) [0x0000000000000000]               
	float                                              TimeInAir;                                     // 0x0054 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_Chat_TA.GFxChatMessage
// Size: 0x0098 (0x0094 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FGFxChatMessage
{
	int32_t                                            Team;                                          // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      PlayerName;                                    // 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      Message;                                       // 0x0018 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	uint8_t                                            ChatChannel;                                   // 0x0028 (0x0001) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          UnknownData01[0x3];                            // 0x0029 (0x0003) MISSED OFFSET
	uint32_t                                           bLocalPlayer : 1;                              // 0x002C (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
	uint32_t                                           bTransient : 1;                                // 0x002C (0x0004) [0x0000000000000000] [0x00000002] 
	struct FUniqueNetId                                SenderId;                                      // 0x0030 (0x0048) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	uint32_t                                           bPreset : 1;                                   // 0x0078 (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
	uint8_t                                            MessageType;                                   // 0x007C (0x0001) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          UnknownData02[0x3];                            // 0x007D (0x0003) MISSED OFFSET
	class FString                                      TimeStamp;                                     // 0x0080 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	struct FColor                                      TeamColor;                                     // 0x0090 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0094 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.GFxData_Chat_TA.ChatPresetGroupOverride
// Size: 0x0020
struct FChatPresetGroupOverride
{
	int32_t                                            GroupIndex;                                    // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      GroupName;                                     // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            MessageIDOffset;                               // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bTeam : 1;                                     // 0x001C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct TAGame.GFxData_Chat_TA.ChatPresetMessageGroup
// Size: 0x0018
struct FChatPresetMessageGroup
{
	uint32_t                                           bTeam : 1;                                     // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      Label;                                         // 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_Chat_TA.ChatPresetMessage
// Size: 0x0020
struct FChatPresetMessage
{
	int32_t                                            GroupIndex;                                    // 0x0000 (0x0004) [0x0000000040000001] (CPF_Edit | CPF_DataBinding)
	class FName                                        Id;                                            // 0x0004 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	uint32_t                                           bTeam : 1;                                     // 0x000C (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
	class FString                                      Label;                                         // 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_Chat_TA.ChatChannelHistory
// Size: 0x0018
struct FChatChannelHistory
{
	uint8_t                                            ChatChannel;                                   // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x7];                            // 0x0001 (0x0007) MISSED OFFSET
	class TArray<struct FGFxChatMessage>               Messages;                                      // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxData_EOSVoiceRoom_TA.NotificationCooldown
// Size: 0x0018
struct FNotificationCooldown
{
	class FString                                      EpicAccountId;                                 // 0x0000 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	uint64_t                                           NotificationTime;                              // 0x0010 (0x0008) [0x0001000000000000]               
};

// ScriptStruct TAGame.GFxData_ErrorModals_TA.PendingError
// Size: 0x0028
struct FPendingError
{
	class UError*                                      Error;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             Callback;                                      // 0x0008 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	class UClass*                                      ModalClass;                                    // 0x0020 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_MenuTree_TA.MenuTreeNodeData
// Size: 0x0020
struct FMenuTreeNodeData
{
	class FName                                        NodeID;                                        // 0x0000 (0x0008) [0x0001000040000000] (CPF_DataBinding)
	class FString                                      TableName;                                     // 0x0008 (0x0010) [0x0001000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class UMenuTreeNode_TA*                            Node;                                          // 0x0018 (0x0008) [0x0001000000000000]               
};

// ScriptStruct TAGame.PlayMenuSave_TA.MenuTreeFocusMap
// Size: 0x0010
struct FMenuTreeFocusMap
{
	class FName                                        ParentNodeID;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        ChildNodeID;                                   // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_MusicPlayer_TA.GFxMusicPlaylist
// Size: 0x0030
struct FGFxMusicPlaylist
{
	class FString                                      Label;                                         // 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class UTexture*                                    Icon;                                          // 0x0010 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	uint32_t                                           bSelected : 1;                                 // 0x0018 (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
	class FName                                        PlaylistName;                                  // 0x001C (0x0008) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0024 (0x0004) MISSED OFFSET
	class UMusicPlaylist_TA*                           Playlist;                                      // 0x0028 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_NotificationManager_TA.GFXNotificationInfo
// Size: 0x0020
struct FGFXNotificationInfo
{
	int32_t                                            NotificationID;                                // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      TableName;                                     // 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class UNotification_TA*                            Notification;                                  // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_PartyInvite_TA.InviteDatabind
// Size: 0x0058
struct FInviteDatabind
{
	struct FUniqueLobbyId                              LobbyId;                                       // 0x0000 (0x0010) [0x0000000000000000]               
	struct FUniqueNetId                                FromUser;                                      // 0x0010 (0x0048) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_PartyInvite_TA.InviteTarget
// Size: 0x0060
struct FInviteTarget
{
	struct FUniqueNetId                                ToPlayer;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             InviteHandler;                                 // 0x0048 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ProductHash_TA.ProductHashSource
// Size: 0x0020
struct FProductHashSource
{
	int32_t                                            ProductID;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	struct FProductInstanceID                          InstanceID;                                    // 0x0008 (0x0010) [0x0000000000000000]               
	class UOnlineProduct_TA*                           OnlineProduct;                                 // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_ProductFilter_TA.FilterProductSlot
// Size: 0x0040
struct FFilterProductSlot
{
	class FName                                        SlotName;                                      // 0x0000 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	class FString                                      Label;                                         // 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      PluralLabel;                                   // 0x0018 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class UTexture*                                    Icon;                                          // 0x0028 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	uint32_t                                           bSelected : 1;                                 // 0x0030 (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
	uint32_t                                           bHasNewItems : 1;                              // 0x0030 (0x0004) [0x0000000040000000] [0x00000002] (CPF_DataBinding)
	int32_t                                            SlotIndex;                                     // 0x0034 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            PreviewQuantity;                               // 0x0038 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint32_t                                           bHidden : 1;                                   // 0x003C (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_ProductFilter_TA.FilterProductQuality
// Size: 0x0020 (0x001C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FFilterProductQuality
{
	class FString                                      Label;                                         // 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	uint32_t                                           bSelected : 1;                                 // 0x0010 (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
	uint8_t                                            Quality;                                       // 0x0014 (0x0001) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          UnknownData00[0x3];                            // 0x0015 (0x0003) MISSED OFFSET
	int32_t                                            PreviewQuantity;                               // 0x0018 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x001C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.GFxData_ProductFilter_TA.FilterProductAttribute
// Size: 0x0028
struct FFilterProductAttribute
{
	class FString                                      Label;                                         // 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	uint32_t                                           bSelected : 1;                                 // 0x0010 (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
	uint8_t                                          UnknownData00[0x4];                            // 0x0014 (0x0004) MISSED OFFSET
	class UClass*                                      AttributeClass;                                // 0x0018 (0x0008) [0x0000000000000000]               
	int32_t                                            PreviewQuantity;                               // 0x0020 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint32_t                                           bHidden : 1;                                   // 0x0024 (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_ProductFilter_TA.FilterProductExtraAttributeEntry
// Size: 0x0010
struct FFilterProductExtraAttributeEntry
{
	class UClass*                                      OriginalAttributeClass;                        // 0x0000 (0x0008) [0x0000000000000000]               
	class UClass*                                      ExtraAttributeClass;                           // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_ProductFilter_TA.FilterProductSeries
// Size: 0x0018
struct FFilterProductSeries
{
	class FString                                      Label;                                         // 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	uint32_t                                           bSelected : 1;                                 // 0x0010 (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
	int32_t                                            SeriesID;                                      // 0x0014 (0x0004) [0x0000000040000000] (CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_ProductFilter_TA.FilterProductPaint
// Size: 0x0020 (0x001C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FFilterProductPaint
{
	class FString                                      Label;                                         // 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	uint32_t                                           bSelected : 1;                                 // 0x0010 (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
	int32_t                                            PaintID;                                       // 0x0014 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            PreviewQuantity;                               // 0x0018 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x001C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.GFxData_ProductFilter_TA.FilterProductSorting
// Size: 0x0018 (0x0011 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FFilterProductSorting
{
	class FString                                      Label;                                         // 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	uint8_t                                            SortType;                                      // 0x0010 (0x0001) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0011 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.GFxData_ProductTradeIn_TA.TradeIn
// Size: 0x0004
struct FTradeIn
{
	struct FProductHashID                              HashID;                                        // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
};

// ScriptStruct TAGame._TourTypes_TA.TourServerSettings
// Size: 0x00E8 (0x00E4 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FTourServerSettings
{
	uint64_t                                           TournamentID;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            MatchID;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x000C (0x0004) MISSED OFFSET
	class FString                                      GameTags;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            TieBreaker;                                    // 0x0020 (0x0001) [0x0000000000000000]               
	uint8_t                                            GameMode;                                      // 0x0021 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData01[0x6];                            // 0x0022 (0x0006) MISSED OFFSET
	class TArray<class FName>                          DisabledMaps;                                  // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FName                                        MapSetName;                                    // 0x0038 (0x0008) [0x0000000000000000]               
	int32_t                                            SeriesLength;                                  // 0x0040 (0x0004) [0x0000000000000000]               
	int32_t                                            TeamSize;                                      // 0x0044 (0x0004) [0x0000000000000000]               
	class TArray<struct FTourTeam>                     Teams;                                         // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<uint64_t>                             BotTeams;                                      // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FTourMatchGame>                Games;                                         // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FUniqueNetId>                  SpectatorPlayerIDs;                            // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                CreatorPlayerID;                               // 0x0088 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            MinPlayersPerTeam;                             // 0x00D0 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData02[0x7];                            // 0x00D1 (0x0007) MISSED OFFSET
	uint64_t                                           MatchExpireTimestamp;                          // 0x00D8 (0x0008) [0x0000000000000000]               
	int32_t                                            MinPlayersMetWaitTimeSeconds;                  // 0x00E0 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x00E4 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._TourTypes_TA.TourPrivateCredentials
// Size: 0x0020
struct FTourPrivateCredentials
{
	class FString                                      Title;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Password;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._TourTypes_TA.TourCreateSettings
// Size: 0x0038
struct FTourCreateSettings
{
	class UTourSettings_TA*                            Settings;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	struct FTourPrivateCredentials                     PrivateSettings;                               // 0x0008 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FTourReward>                   Rewards;                                       // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.InMapDragonManager_TA.DragonEntry
// Size: 0x0030
struct FDragonEntry
{
	class UAnimStateComponent_TA*                      AnimState;                                     // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            TeamIndex;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x000C (0x0004) MISSED OFFSET
	class UAnimNodeAimOffset*                          AimOffsetNode;                                 // 0x0010 (0x0008) [0x0000000000000000]               
	struct FRotator                                    DesiredAim;                                    // 0x0018 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FRotator                                    CurrentAim;                                    // 0x0024 (0x000C) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct TAGame.MapsConfig_TA.OnlineMapData
// Size: 0x0010
struct FOnlineMapData
{
	class UMapData_TA*                                 Map;                                           // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              Frequency;                                     // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bInRotation : 1;                               // 0x000C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct TAGame.MapsConfig_TA.OnlineMapSet
// Size: 0x0020
struct FOnlineMapSet
{
	class FName                                        SetName;                                       // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FOnlineMapData>                Maps;                                          // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UMapSet_TA*                                  MapSet;                                        // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.MapsConfig_TA.MapSetMapData
// Size: 0x0028
struct FMapSetMapData
{
	class UMapSet_TA*                                  MapSet;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<class UMapData_TA*>                   MapsToAdd;                                     // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UMapData_TA*>                   MapsToRemove;                                  // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.RPC_GetActivePlaylists_TA.ActivePlaylistInfo
// Size: 0x0028 (0x0024 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FActivePlaylistInfo
{
	class FName                                        NodeID;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            Playlist;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                            Type;                                          // 0x000C (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x000D (0x0003) MISSED OFFSET
	uint64_t                                           StartTime;                                     // 0x0010 (0x0008) [0x0000000000000000]               
	uint64_t                                           EndTime;                                       // 0x0018 (0x0008) [0x0000000000000000]               
	uint32_t                                           bCompetitive : 1;                              // 0x0020 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0024 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.RPC_GetActivePlaylists_TA.RankedUnlockCondition
// Size: 0x0020
struct FRankedUnlockCondition
{
	class FString                                      Criteria;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              Value;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.MTXGarageUtils_TA.PriceInfo
// Size: 0x0038 (0x0034 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FPriceInfo
{
	int32_t                                            CatalogID;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      Title;                                         // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bIsExactPack : 1;                              // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            Price;                                         // 0x001C (0x0004) [0x0000000000000000]               
	class FString                                      PurchasePrice;                                 // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            VCAmount;                                      // 0x0030 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0034 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.MTXGarageUtils_TA.MTXPurchaseInfo
// Size: 0x00D0
struct FMTXPurchaseInfo
{
	int32_t                                            CatalogID;                                     // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      Title;                                         // 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      Description;                                   // 0x0018 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      PriceDescription;                              // 0x0028 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      TabTitle;                                      // 0x0038 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class UTexture*                                    Image;                                         // 0x0048 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	class FString                                      PurchasePrice;                                 // 0x0050 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      OriginalPrice;                                 // 0x0060 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	int32_t                                            DiscountPercentage;                            // 0x0070 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          UnknownData01[0x4];                            // 0x0074 (0x0004) MISSED OFFSET
	class FString                                      ProductHashIDs;                                // 0x0078 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      BundleCurrencies;                              // 0x0088 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	uint32_t                                           bCanBePlayerTraded : 1;                        // 0x0098 (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
	uint32_t                                           bIsOwned : 1;                                  // 0x0098 (0x0004) [0x0000000040000000] [0x00000002] (CPF_DataBinding)
	uint32_t                                           bIsExactPack : 1;                              // 0x0098 (0x0004) [0x0000000040000000] [0x00000004] (CPF_DataBinding)
	int32_t                                            BonusVCPercentage;                             // 0x009C (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Price;                                         // 0x00A0 (0x0004) [0x0000000000000000]               
	int32_t                                            VCAmount;                                      // 0x00A4 (0x0004) [0x0000000000000000]               
	uint32_t                                           bIsPriceUpdated : 1;                           // 0x00A8 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          UnknownData02[0x4];                            // 0x00AC (0x0004) MISSED OFFSET
	class FString                                      ImageURL;                                      // 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PlatformProductID;                             // 0x00C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.PhysicsMetrics_TA.ResimMetricData
// Size: 0x001C
struct FResimMetricData
{
	class FName                                        GameStateName;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            NumCorrectionEvents;                           // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            TotalNumResimFrames;                           // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            MinNumResimFramesPerEvent;                     // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxNumResimFramesPerEvent;                     // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              AverageNumResimFramesPerEvent;                 // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.PlatformMetrics_TA.PlatformMetricData
// Size: 0x0010 (0x000C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FPlatformMetricData
{
	uint64_t                                           Marker;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            Type;                                          // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x000C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.PlatformMetrics_TA.PlatformMetric
// Size: 0x0018
struct FPlatformMetric
{
	class APlayerController_TA*                        PC;                                            // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<struct FPlatformMetricData>           MetricData;                                    // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.SaveData_TA.OptionsValue
// Size: 0x0018
struct FOptionsValue
{
	class FName                                        Id;                                            // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      Value;                                         // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.SaveData_TA.PlaylistSkillData
// Size: 0x000C
struct FPlaylistSkillData
{
	int32_t                                            Playlist;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Tier;                                          // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            MatchesPlayed;                                 // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.PrivacyPolicySave_TA.LegalTextVersion
// Size: 0x0008
struct FLegalTextVersion
{
	int32_t                                            TextHash;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Version;                                       // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.ProductAsset_Skin_TA.ParameterInformation
// Size: 0x0038
struct FParameterInformation
{
	class UProductAsset_PaintFinish_TA*                PaintFinishToApply;                            // 0x0000 (0x0008) [0x0000000800000001] (CPF_Edit | CPF_EditorOnly)
	class TArray<struct FTextureParameterValue>        TextureParameterValues;                        // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FScalarParameterValue>         ScalarParameterValues;                         // 0x0018 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FVectorParameterValue>         VectorParameterValues;                         // 0x0028 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ProductAsset_Skin_TA.BodyChassisOverride
// Size: 0x0010
struct FBodyChassisOverride
{
	class UProductAssetReferenceBody_TA*               Body;                                          // 0x0000 (0x0008) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	class UProductOverride_SpecificMaterials_TA*       MaterialOverride;                              // 0x0008 (0x0008) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
};

// ScriptStruct TAGame.ProductOverride_ParticleSystemColorParameter_TA.PaintColorParameterOverride
// Size: 0x0028
struct FPaintColorParameterOverride
{
	class FName                                        PaintParameterName;                            // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            PaintType;                                     // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x7];                            // 0x0009 (0x0007) MISSED OFFSET
	class UProductPaint_TA*                            Paint;                                         // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                CustomColor;                                   // 0x0018 (0x0010) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.RecentPlayers_TA.PlayerGameID
// Size: 0x0058
struct FPlayerGameID
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      GameID;                                        // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.RecentPlayers_TA.PlayerLoadoutData
// Size: 0x00C8
struct FPlayerLoadoutData
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FOnlineProductData                          BannerData;                                    // 0x0048 (0x0040) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FOnlineProductData                          AvatarBorderData;                              // 0x0088 (0x0040) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.RocketPassNotificationsManager_TA.RocketPassNotificationData
// Size: 0x0038 (0x0034 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FRocketPassNotificationData
{
	class FString                                      Title;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Body;                                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            RPNotificationType;                            // 0x0020 (0x0001) [0x0000000000000000]               
	uint8_t                                            RewardType;                                    // 0x0021 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x2];                            // 0x0022 (0x0002) MISSED OFFSET
	int32_t                                            TierLevel;                                     // 0x0024 (0x0004) [0x0000000000000000]               
	class UOnlineProduct_TA*                           Reward;                                        // 0x0028 (0x0008) [0x0000000000000000]               
	float                                              CreatedTime;                                   // 0x0030 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0034 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.FXActor_Car_TA.WheelFX
// Size: 0x0038 (0x0034 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FWheelFX
{
	class UParticleSystemComponent*                    PSC;                                           // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     Velocity;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	uint32_t                                           bHasContact : 1;                               // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	class AFXActor_X*                                  SupersonicFXActor;                             // 0x0018 (0x0008) [0x0000000000000000]               
	class FName                                        BoneName;                                      // 0x0020 (0x0008) [0x0000000000000000]               
	struct FVector                                     BoneOffset;                                    // 0x0028 (0x000C) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0034 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.SFXConfig_TA.SoundEventSetting
// Size: 0x0020
struct FSoundEventSetting
{
	class FName                                        SoundName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	uint64_t                                           StartTime;                                     // 0x0008 (0x0008) [0x0000000000000000]               
	uint64_t                                           EndTime;                                       // 0x0010 (0x0008) [0x0000000000000000]               
	float                                              Frequency;                                     // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              MinValue;                                      // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.ShopAdsConfig_TA.ShopAdData
// Size: 0x0068
struct FShopAdData
{
	class FString                                      IdleImageURL;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      HoverImageURL;                                 // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ClickImageURL;                                 // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UTexture*                                    IdleImage;                                     // 0x0030 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	class UTexture*                                    HoverImage;                                    // 0x0038 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	class UTexture*                                    ClickImage;                                    // 0x0040 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	uint32_t                                           bOpenURLInCoherent : 1;                        // 0x0048 (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
	class FName                                        Section;                                       // 0x004C (0x0008) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          UnknownData00[0x4];                            // 0x0054 (0x0004) MISSED OFFSET
	class FString                                      Link;                                          // 0x0058 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
};

// ScriptStruct TAGame.ShopCatalogueCacheSave_TA.ShopItemCacheItem
// Size: 0x0018
struct FShopItemCacheItem
{
	int32_t                                            ShopItemID;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class TArray<struct FProductHashID>                ProductHashIDs;                                // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ShopNotificationsManager_TA.ReadyItemShopNotification
// Size: 0x0038
struct FReadyItemShopNotification
{
	int32_t                                            ShopNotificationID;                            // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      Title;                                         // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Body;                                          // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UTexture*                                    Icon;                                          // 0x0028 (0x0008) [0x0000000000000000]               
	uint64_t                                           ExpirationTime;                                // 0x0030 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.SpecialEventConfig_TA.SpecialEventStoreConfigs
// Size: 0x0040
struct FSpecialEventStoreConfigs
{
	int32_t                                            EventID;                                       // 0x0000 (0x0004) [0x0000000040000001] (CPF_Edit | CPF_DataBinding)
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      TabTitle;                                      // 0x0008 (0x0010) [0x0000000040400001] (CPF_Edit | CPF_NeedCtorLink | CPF_DataBinding)
	class UTexture*                                    TabIconTexture;                                // 0x0018 (0x0008) [0x0000000040000001] (CPF_Edit | CPF_DataBinding)
	uint64_t                                           StartTime;                                     // 0x0020 (0x0008) [0x0000000040000001] (CPF_Edit | CPF_DataBinding)
	uint64_t                                           EndTime;                                       // 0x0028 (0x0008) [0x0000000040000001] (CPF_Edit | CPF_DataBinding)
	class FString                                      TabIconImageURL;                               // 0x0030 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ServerStartVoteEvent_TA.PartyInfo
// Size: 0x0060
struct FPartyInfo
{
	struct FUniqueNetId                                LeaderID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FUniqueNetId>                  FollowerIds;                                   // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class AActor*                                      VoterOwner;                                    // 0x0058 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.TextModerationManager_TA.PendingValidatedMessage
// Size: 0x0010
struct FPendingValidatedMessage
{
	class USignedMessageObject_X*                      MessageObject;                                 // 0x0000 (0x0008) [0x0001000000000000]               
	int32_t                                            ServerTimeStamp;                               // 0x0008 (0x0004) [0x0001000000000000]               
	int32_t                                            RequestID;                                     // 0x000C (0x0004) [0x0001000000000000]               
};

// ScriptStruct TAGame.TextModerationManager_TA.PendingSignedMessage
// Size: 0x0028 (0x0024 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FPendingSignedMessage
{
	class USignedMessageObject_X*                      MessageObject;                                 // 0x0000 (0x0008) [0x0001000000000000]               
	struct FScriptDelegate                             FinishedCallback;                              // 0x0008 (0x0018) [0x0001000000400000] (CPF_NeedCtorLink)
	int32_t                                            RequestID;                                     // 0x0020 (0x0004) [0x0001000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0024 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.TextModerationManager_TA.PendingKeyGenMessage
// Size: 0x0078
struct FPendingKeyGenMessage
{
	class FString                                      Message;                                       // 0x0000 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                SenderId;                                      // 0x0010 (0x0048) [0x0001000000400000] (CPF_NeedCtorLink)
	uint8_t                                            ChatChannel;                                   // 0x0058 (0x0001) [0x0001000000000000]               
	uint8_t                                          UnknownData00[0x7];                            // 0x0059 (0x0007) MISSED OFFSET
	struct FScriptDelegate                             FinishedCallback;                              // 0x0060 (0x0018) [0x0001000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.TextModerationManager_TA.UserPublicKey
// Size: 0x0030
struct FUserPublicKey
{
	class FString                                      EpicAccountId;                                 // 0x0000 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	class FString                                      PublicKey;                                     // 0x0010 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	class FString                                      PublicKeyJWT;                                  // 0x0020 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.TextModerationManager_TA.KeyRegistrationContent
// Size: 0x0020
struct FKeyRegistrationContent
{
	class FString                                      algorithm;                                     // 0x0000 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	class FString                                      Key;                                           // 0x0010 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.TourBracketCache_TA.BracketResult
// Size: 0x00B8
struct FBracketResult
{
	uint64_t                                           TourID;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	struct FTourBracket                                Bracket;                                       // 0x0008 (0x0078) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              RetrieveTime;                                  // 0x0080 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint8_t                                          UnknownData00[0x4];                            // 0x0084 (0x0004) MISSED OFFSET
	struct FScriptDelegate                             BracketChangedCallback;                        // 0x0088 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             ErrorCallback;                                 // 0x00A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.TourBracketCache_TA.BracketRequest
// Size: 0x0028
struct FBracketRequest
{
	uint64_t                                           TourID;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class UAsyncTask*                                  Task;                                          // 0x0008 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             Callback;                                      // 0x0010 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.RPC_TourUpdateGame_TA.TeamUpdateInfo
// Size: 0x0010 (0x000C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FTeamUpdateInfo
{
	uint64_t                                           TeamID;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            Difficulty;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x000C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._TourTypes_TA.TourSearchSettings
// Size: 0x0060 (0x005C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FTourSearchSettings
{
	class FString                                      Text;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            RankMin;                                       // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            RankMax;                                       // 0x0014 (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              GameModes;                                     // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        Regions;                                       // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            TeamSize;                                      // 0x0038 (0x0004) [0x0000000000000000]               
	int32_t                                            BracketSize;                                   // 0x003C (0x0004) [0x0000000000000000]               
	uint32_t                                           bEnableCrossplay : 1;                          // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          UnknownData00[0x4];                            // 0x0044 (0x0004) MISSED OFFSET
	uint64_t                                           StartTime;                                     // 0x0048 (0x0008) [0x0000000000000000]               
	uint64_t                                           EndTime;                                       // 0x0050 (0x0008) [0x0000000000000000]               
	uint32_t                                           bShowFull : 1;                                 // 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bShowIneligibleRank : 1;                       // 0x0058 (0x0004) [0x0000000000000000] [0x00000002] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x005C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._TourTypes_TA.GFxTournamentReward
// Size: 0x0018
struct FGFxTournamentReward
{
	int32_t                                            Placement;                                     // 0x0000 (0x0004) [0x0000000040000001] (CPF_Edit | CPF_DataBinding)
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	struct FProductInstanceID                          InstanceID;                                    // 0x0008 (0x0010) [0x0000000040000001] (CPF_Edit | CPF_DataBinding)
};

// ScriptStruct TAGame._TourTypes_TA.TournamentResult
// Size: 0x0010
struct FTournamentResult
{
	int32_t                                            Difficulty;                                    // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Placement;                                     // 0x0004 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Score;                                         // 0x0008 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            ResultStanding;                                // 0x000C (0x0004) [0x0000000040000000] (CPF_DataBinding)
};

// ScriptStruct TAGame._TourTypes_TA.TourResult
// Size: 0x0010
struct FTourResult
{
	uint64_t                                           TournamentID;                                  // 0x0000 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Difficulty;                                    // 0x0008 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Placement;                                     // 0x000C (0x0004) [0x0000000040000000] (CPF_DataBinding)
};

// ScriptStruct TAGame.TourStatus_TA.TourStatus
// Size: 0x0028
struct FTourStatus
{
	uint64_t                                           Id;                                            // 0x0000 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                            Status;                                        // 0x0008 (0x0001) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          UnknownData00[0x7];                            // 0x0009 (0x0007) MISSED OFFSET
	uint64_t                                           PlayerTeamID;                                  // 0x0010 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	class FString                                      TeamName;                                      // 0x0018 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
};

// ScriptStruct TAGame._UserBugReportTypes_TA.UserBugReportCategory
// Size: 0x0028
struct FUserBugReportCategory
{
	class FName                                        Id;                                            // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        ParentId;                                      // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            Type;                                          // 0x0010 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x7];                            // 0x0011 (0x0007) MISSED OFFSET
	class FString                                      Label;                                         // 0x0018 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.UserSettingObserverEventCache_TA.SettingEvent
// Size: 0x0060
struct FSettingEvent
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0001000000400000] (CPF_NeedCtorLink)
	class FName                                        Id;                                            // 0x0048 (0x0008) [0x0001000000000000]               
	class FString                                      Value;                                         // 0x0050 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.VanityQuery_TA.VanityQueryRequest
// Size: 0x0048 (0x0044 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FVanityQueryRequest
{
	class UGFxShell_X*                                 Shell;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            VanityType;                                    // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x7];                            // 0x0009 (0x0007) MISSED OFFSET
	class TArray<struct FUniqueNetId>                  PlayerIds;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             VanityCallback;                                // 0x0020 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            NumIdsToQuery;                                 // 0x0038 (0x0004) [0x0000000000000000]               
	int32_t                                            NumQueriesCompleted;                           // 0x003C (0x0004) [0x0000000000000000]               
	uint32_t                                           bForced : 1;                                   // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0044 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.ViralItemConfig_TA.ViralSeriesGroup
// Size: 0x0018
struct FViralSeriesGroup
{
	uint8_t                                            InfectedType;                                  // 0x0000 (0x0001) [0x0001000000000000]               
	uint8_t                                          UnknownData00[0x7];                            // 0x0001 (0x0007) MISSED OFFSET
	class TArray<int32_t>                              SeriesIDs;                                     // 0x0008 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.VoteActor_TA.Voter
// Size: 0x0010 (0x0009 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FVoter
{
	class APRI_TA*                                     PRI;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            Status;                                        // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0009 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._AITypes_TA.BTDynamicLinkData
// Size: 0x0010
struct FBTDynamicLinkData
{
	class FName                                        LinkName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UBTNode*                                     Node;                                          // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._AITypes_TA.AIProxyData
// Size: 0x0048
struct FAIProxyData
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                      // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     Gravity;                                       // 0x0018 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x0024 (0x000C) [0x0000000000000000]               
	float                                              Radius;                                        // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              Bounce;                                        // 0x0034 (0x0004) [0x0000000000000000]               
	class AActor*                                      Actor;                                         // 0x0038 (0x0008) [0x0000000000000000]               
	class AVehicle_TA*                                 Vehicle;                                       // 0x0040 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._AITypes_TA.AICachedGoalInfo
// Size: 0x0018 (0x0014 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FAICachedGoalInfo
{
	class UGoal_TA*                                    Goal;                                          // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     FieldSize;                                     // 0x0008 (0x000C) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0014 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._CrowdTypes_TA.CrowdExcitementSound
// Size: 0x0010 (0x000C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FCrowdExcitementSound
{
	class UAkSoundCue*                                 Sound;                                         // 0x0000 (0x0008) [0x0001000000000001] (CPF_Edit)    
	float                                              Value;                                         // 0x0008 (0x0004) [0x0001000000000001] (CPF_Edit)    
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x000C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._CrowdTypes_TA.CrowdExcitementSounds
// Size: 0x0028
struct FCrowdExcitementSounds
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0001000000000001] (CPF_Edit)    
	float                                              Cooldown;                                      // 0x0008 (0x0004) [0x0001000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x4];                            // 0x000C (0x0004) MISSED OFFSET
	class TArray<struct FCrowdExcitementSound>         Sounds;                                        // 0x0010 (0x0010) [0x0001000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            CompareType;                                   // 0x0020 (0x0001) [0x0001000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData01[0x3];                            // 0x0021 (0x0003) MISSED OFFSET
	float                                              LastPlayed;                                    // 0x0024 (0x0004) [0x0001000000002000] (CPF_Transient)
};

// ScriptStruct TAGame._CrowdTypes_TA.CrowdDefense
// Size: 0x000C
struct FCrowdDefense
{
	float                                              DefenseZoneTime;                               // 0x0000 (0x0004) [0x0001000000000001] (CPF_Edit)    
	float                                              DefenseZoneDistance;                           // 0x0004 (0x0004) [0x0001000000000001] (CPF_Edit)    
	float                                              ReplayDelay;                                   // 0x0008 (0x0004) [0x0001000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._CrowdTypes_TA.CrowdScoreState
// Size: 0x0010
struct FCrowdScoreState
{
	int32_t                                            MaxIncreaseScoreSeparation;                    // 0x0000 (0x0004) [0x0001000000000001] (CPF_Edit)    
	int32_t                                            MaxDecreaseScoreSeparation;                    // 0x0004 (0x0004) [0x0001000000000001] (CPF_Edit)    
	class FName                                        StateName;                                     // 0x0008 (0x0008) [0x0001000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._CrowdTypes_TA.CrowdValueState
// Size: 0x000C
struct FCrowdValueState
{
	float                                              Value;                                         // 0x0000 (0x0004) [0x0001000000000001] (CPF_Edit)    
	class FName                                        StateName;                                     // 0x0004 (0x0008) [0x0001000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._FreeplayCommandsTypes_TA.FreeplayCommandsMetricsData
// Size: 0x0058 (0x0054 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FFreeplayCommandsMetricsData
{
	struct FVector                                     BallLocation;                                  // 0x0000 (0x000C) [0x0001000000000000]               
	struct FVector                                     BallVelocity;                                  // 0x000C (0x000C) [0x0001000000000000]               
	struct FVector                                     CarLocation;                                   // 0x0018 (0x000C) [0x0001000000000000]               
	struct FVector                                     CarVelocity;                                   // 0x0024 (0x000C) [0x0001000000000000]               
	struct FRotatorRadians                             CarRotation;                                   // 0x0030 (0x000C) [0x0001000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x003C (0x0004) MISSED OFFSET
	class FString                                      MapName;                                       // 0x0040 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bCarOnGround : 1;                              // 0x0050 (0x0004) [0x0001000000000000] [0x00000001] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0054 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame._FreeplayCommandsTypes_TA.FreeplayCommandEvent
// Size: 0x0070
struct FFreeplayCommandEvent
{
	uint64_t                                           ActivationTimestamp;                           // 0x0000 (0x0008) [0x0001000000000000]               
	uint8_t                                            ActivatedCommand;                              // 0x0008 (0x0001) [0x0001000000000000]               
	uint8_t                                          UnknownData00[0x7];                            // 0x0009 (0x0007) MISSED OFFSET
	struct FFreeplayCommandsMetricsData                PreActivationData;                             // 0x0010 (0x0058) [0x0001000000400000] (CPF_NeedCtorLink)
	class FName                                        CommandExecutionError;                         // 0x0068 (0x0008) [0x0001000000000000]               
};

// ScriptStruct TAGame._TourTypes_TA.TournamentEndData
// Size: 0x0070
struct FTournamentEndData
{
	uint64_t                                           CycleID;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            WeekIndex;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x000C (0x0004) MISSED OFFSET
	class TArray<struct FTournamentResult>             OldWeeklyResults;                              // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FTournamentResult                           Result;                                        // 0x0020 (0x0010) [0x0000000000000000]               
	class TArray<struct FShopCurrencyInfo>             CurrencyRewards;                               // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FShopCurrencyInfo>             OldWeeklyCurrencies;                           // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FShopCurrencyInfo>             WeeklyCurrencies;                              // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FShopCurrencyInfo>             FinalCurrencies;                               // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._TourTypes_TA.FaceItReservationMatchInfo
// Size: 0x000C
struct FFaceItReservationMatchInfo
{
	int32_t                                            PartnerID;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            ServerId;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	uint32_t                                           bIsCrossPlatform : 1;                          // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame._TrainingTypes_TA.TrainingRoundProgress
// Size: 0x0008 (0x0005 PropertySize + 0x0003 padding to satisfy MinAlignment of 4)
struct FTrainingRoundProgress
{
	int32_t                                            RoundNumber;                                   // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                            Status;                                        // 0x0004 (0x0001) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x0005 (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.PRI_TA.ClientLoadoutDatas
// Size: 0x0020
struct FClientLoadoutDatas
{
	struct FClientLoadoutData                          Loadouts[2];                                   // 0x0000 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.PRI_TA.SkillTierData
// Size: 0x0008
struct FSkillTierData
{
	uint8_t                                            Tier;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            PlacementMatchesPlayed;                        // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x2];                            // 0x0002 (0x0002) MISSED OFFSET
	uint32_t                                           bReplicated : 1;                               // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.ActorChannelMonitor_TA.OverflowedProperties
// Size: 0x0018
struct FOverflowedProperties
{
	class AActor*                                      OverflowedActor;                               // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<class FString>                        PropertyNames;                                 // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ActorChannelMonitor_TA.ActorOverflowEvent
// Size: 0x0058
struct FActorOverflowEvent
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FOverflowedProperties>         OverflowedActors;                              // 0x0048 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.AdManager_TA.CachedAdImageData
// Size: 0x0020
struct FCachedAdImageData
{
	class FString                                      ImageURL;                                      // 0x0000 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	uint64_t                                           CacheEndTime;                                  // 0x0010 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UTexture2DDynamic*                           ImageTexture;                                  // 0x0018 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct TAGame.AdManager_TA.BillboardData
// Size: 0x0018 (0x0014 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FBillboardData
{
	class FString                                      MaterialName;                                  // 0x0000 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            ZoneID;                                        // 0x0010 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0014 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.AdManager_TA.BillboardUpdateRequestData
// Size: 0x0020
struct FBillboardUpdateRequestData
{
	int32_t                                            ZoneID;                                        // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            MaterialIndex;                                 // 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
	class FString                                      MaterialName;                                  // 0x0008 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UStaticMeshComponent*                        Mesh;                                          // 0x0018 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
};

// ScriptStruct TAGame.RPC_AdsGet_TA.AdInfo
// Size: 0x0020
struct FAdInfo
{
	class FString                                      URL;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            ZoneID;                                        // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0014 (0x0004) MISSED OFFSET
	uint64_t                                           UTCEndTime;                                    // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.AdManagerConfig_TA.MapAds
// Size: 0x0020
struct FMapAds
{
	class FString                                      MapName;                                       // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FAdInfo>                       Ads;                                           // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.BTLockCollection.TimedLock
// Size: 0x0010
struct FTimedLock
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              ReleaseTime;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bLockedOneFrame : 1;                           // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.AIController_TA.CachedProxyData
// Size: 0x0060 (0x005C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FCachedProxyData
{
	class UBTProxyType*                                Type;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            Index;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x000C (0x0004) MISSED OFFSET
	struct FAIProxyData                                Data;                                          // 0x0010 (0x0048) [0x0000000000000000]               
	float                                              CacheTime;                                     // 0x0058 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x005C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.AIController_TA.CachedTargetData
// Size: 0x0060 (0x005C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FCachedTargetData
{
	class UBTTarget*                                   Target;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            Index;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x000C (0x0004) MISSED OFFSET
	struct FAIProxyData                                Data;                                          // 0x0010 (0x0048) [0x0000000000000000]               
	float                                              CacheTime;                                     // 0x0058 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x005C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.AIController_TA.SkillRange
// Size: 0x000C
struct FSkillRange
{
	float                                              Easy;                                          // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Hard;                                          // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Value;                                         // 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct TAGame.AIController_TA.CachedObstaclePoly
// Size: 0x0020
struct FCachedObstaclePoly
{
	struct FPointer                                    Poly;                                          // 0x0000 (0x0008) [0x0000000000001000] (CPF_Native)  
	uint8_t                                          UnknownData00[0x8];                            // 0x0008 (0x0008) MISSED OFFSET
	struct FPlane                                      Plane;                                         // 0x0010 (0x0010) [0x0000000000000000]               
};

// ScriptStruct TAGame.AIController_TA.CachedObstaclesData
// Size: 0x0028
struct FCachedObstaclesData
{
	struct FVector                                     CarLocation;                                   // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     CarNavMeshLocation;                            // 0x000C (0x000C) [0x0000000000000000]               
	class TArray<struct FCachedObstaclePoly>           Polys;                                         // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.AIManager_TA.CachedNavMeshLocation
// Size: 0x0020
struct FCachedNavMeshLocation
{
	class AActor*                                      Actor;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     NavMeshLocation;                               // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     OldActorLocation;                              // 0x0014 (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame.ExplosionHitHandler_TA.ExplosionPaintInfo
// Size: 0x0018
struct FExplosionPaintInfo
{
	class UProductAsset_TA*                            Asset;                                         // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UProductAttribute_PaintSettings_TA*          PaintSettings;                                 // 0x0008 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UProductPaint_TA*                            Paint;                                         // 0x0010 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct TAGame.PRI_TA.ClientLoadoutOnlineDatas
// Size: 0x0028 (0x0024 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FClientLoadoutOnlineDatas
{
	struct FClientLoadoutOnlineData                    Loadouts[2];                                   // 0x0000 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bLoadoutSet : 1;                               // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDeprecated : 1;                               // 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0024 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.ArenaReflectionsManager_TA.SlapbackActorSetup
// Size: 0x0018
struct FSlapbackActorSetup
{
	class FName                                        Bus;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            Axis;                                          // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x0009 (0x0003) MISSED OFFSET
	struct FVector                                     FieldLocation;                                 // 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame.ArenaSoundSettings_TA.ArenaStatSound
// Size: 0x0010
struct FArenaStatSound
{
	class UStatEvent_TA*                               StatEvent;                                     // 0x0000 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	class UAkSoundCue*                                 Sound;                                         // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.StatFactory_TA.StatEventCollection
// Size: 0x0210
struct FStatEventCollection
{
	class UStatEvent_TA*                               Win;                                           // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               Loss;                                          // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               TimePlayed;                                    // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               Shot;                                          // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               Assist;                                        // 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               Center;                                        // 0x0028 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               Clear;                                         // 0x0030 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               PoolShot;                                      // 0x0038 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               Goal;                                          // 0x0040 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               AerialGoal;                                    // 0x0048 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               BicycleGoal;                                   // 0x0050 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               BulletGoal;                                    // 0x0058 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               BackwardsGoal;                                 // 0x0060 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               LongGoal;                                      // 0x0068 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               OvertimeGoal;                                  // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               TurtleGoal;                                    // 0x0078 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               AerialHit;                                     // 0x0080 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               BicycleHit;                                    // 0x0088 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               BulletHit;                                     // 0x0090 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               JuggleHit;                                     // 0x0098 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               FirstTouch;                                    // 0x00A0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               BallHit;                                       // 0x00A8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               Save;                                          // 0x00B0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               EpicSave;                                      // 0x00B8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               FreezeSave;                                    // 0x00C0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               HatTrick;                                      // 0x00C8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               Savior;                                        // 0x00D0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               Playmaker;                                     // 0x00D8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               MVP;                                           // 0x00E0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               FastestGoal;                                   // 0x00E8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               SlowestGoal;                                   // 0x00F0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               FurthestGoal;                                  // 0x00F8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               OwnGoal;                                       // 0x0100 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               MostBallTouches;                               // 0x0108 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               FewestBallTouches;                             // 0x0110 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               MostBoostPickups;                              // 0x0118 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               FewestBoostPickups;                            // 0x0120 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               BoostPickups;                                  // 0x0128 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               CarTouches;                                    // 0x0130 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               Demolition;                                    // 0x0138 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               Demolish;                                      // 0x0140 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               BallDemolitionScore;                           // 0x0148 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               CarDemolitionScore;                            // 0x0150 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               DemolitionSave;                                // 0x0158 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               LowFive;                                       // 0x0160 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               HighFive;                                      // 0x0168 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               PossessionPoint;                               // 0x0170 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               PossessionSteal;                               // 0x0178 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               PossessionDenial;                              // 0x0180 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               PossessionClear;                               // 0x0188 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               SmallBoostsCollected;                          // 0x0190 (0x0008) [0x0001000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               BigBoostsCollected;                            // 0x0198 (0x0008) [0x0001000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               BoostUsed;                                     // 0x01A0 (0x0008) [0x0001000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               Dodges;                                        // 0x01A8 (0x0008) [0x0001000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               DistanceDrivenMeters;                          // 0x01B0 (0x0008) [0x0001000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               SupersonicDistanceDrivenMeters;                // 0x01B8 (0x0008) [0x0001000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               DistanceFlown;                                 // 0x01C0 (0x0008) [0x0001000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               CrossbarHits;                                  // 0x01C8 (0x0008) [0x0001000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               DoubleGrapple;                                 // 0x01D0 (0x0008) [0x0001000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               MaxDodgeStreak;                                // 0x01D8 (0x0008) [0x0001000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               InfectedPlayersDefeated;                       // 0x01E0 (0x0008) [0x0001000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               PlayersInfected;                               // 0x01E8 (0x0008) [0x0001000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               KeepUpPoint;                                   // 0x01F0 (0x0008) [0x0001000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               KeepUpPossession;                              // 0x01F8 (0x0008) [0x0001000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               KeepUpDenial;                                  // 0x0200 (0x0008) [0x0001000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               KeepUpClear;                                   // 0x0208 (0x0008) [0x0001000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.AssetAttribute_ChangeProductDrawScale_TA.ProductSlotNewDrawScale
// Size: 0x0010
struct FProductSlotNewDrawScale
{
	float                                              DrawScaleToApply;                              // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class UProductSlot_TA*                             ProductSlotToApplyTo;                          // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.AssetAttribute_GoalCountChanging_TA.GoalCountAndAsset
// Size: 0x0010
struct FGoalCountAndAsset
{
	int32_t                                            GoalToChangeOn;                                // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class UObject*                                     ObjectToChangeTo;                              // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.AssetAttribute_SoundOverrides_TA.FXAttachmentSoundOverride
// Size: 0x0010
struct FFXAttachmentSoundOverride
{
	class FName                                        FXName;                                        // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAkSoundCue*                                 SoundCue;                                      // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.AssetAttribute_TeamEdition_TA.TeamEditionOverrides
// Size: 0x0028
struct FTeamEditionOverrides
{
	class UDataAsset_ESportsTeam_TA*                   ESportsTeam;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UProductOverride_TA*>           Overrides;                                     // 0x0008 (0x0010) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
	class TArray<struct FPaintWithOverride>            PaintOverrides;                                // 0x0018 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.AudioPriorityComponent_TA.PriorityCandidate
// Size: 0x0020
struct FPriorityCandidate
{
	class AVehicle_TA*                                 Candidate;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            Priority;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x000C (0x0004) MISSED OFFSET
	class TArray<class FString>                        BonusReasons;                                  // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.AutoTour_TA.ScheduledTournament
// Size: 0x0038
struct FScheduledTournament
{
	uint64_t                                           Time;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	uint64_t                                           ScheduleID;                                    // 0x0008 (0x0008) [0x0000000000000000]               
	class FString                                      Description;                                   // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bUpdateSkill : 1;                              // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          UnknownData00[0x4];                            // 0x0024 (0x0004) MISSED OFFSET
	class TArray<class UTourSettings_TA*>              Tournaments;                                   // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.AutoTour_TA.TournamentWeek
// Size: 0x0010
struct FTournamentWeek
{
	class TArray<struct FTournamentResult>             Results;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.AutoTourConfig_TA.ScheduleRegion
// Size: 0x0020
struct FScheduleRegion
{
	class FString                                      Id;                                            // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Label;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.RBActor_TA.WorldContactData
// Size: 0x0028
struct FWorldContactData
{
	uint32_t                                           bHasContact : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     Location;                                      // 0x0004 (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                      // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     Normal;                                        // 0x001C (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame.RBActor_TA.NetworkSyncSettingsData
// Size: 0x0020
struct FNetworkSyncSettingsData
{
	float                                              LocationFixRate;                               // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AngularFixRate;                                // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinDeltaLocation;                              // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              WeldedLerpRate;                                // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MinDeltaRotation;                              // 0x0010 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MinDeltaLinearVelocity;                        // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ForceReplicationDelay;                         // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bDebug : 1;                                    // 0x001C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct TAGame.RBActor_TA.TimeOfImpactData
// Size: 0x004C
struct FTimeOfImpactData
{
	float                                              Fraction;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0004 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     OtherLocation;                                 // 0x001C (0x000C) [0x0000000000000000]               
	struct FRotator                                    OtherRotation;                                 // 0x0028 (0x000C) [0x0000000000000000]               
	struct FVector                                     ImpactLocation;                                // 0x0034 (0x000C) [0x0000000000000000]               
	struct FVector                                     ImpactNormal;                                  // 0x0040 (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame.PitchTekDrawingComponent_TA.PitchTekCarBodyContactData
// Size: 0x0010
struct FPitchTekCarBodyContactData
{
	uint32_t                                           bHasContact : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     Location;                                      // 0x0004 (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame.Ball_TA.PredictedPosition
// Size: 0x0018
struct FPredictedPosition
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                      // 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame.Ball_TA.ExplosionData
// Size: 0x0018 (0x0014 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FExplosionData
{
	class UGoal_TA*                                    Goal;                                          // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     Location;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0014 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.Ball_TA.ExplosionDataExtended
// Size: 0x0020
struct FExplosionDataExtended
{
	class UGoal_TA*                                    Goal;                                          // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     Location;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0014 (0x0004) MISSED OFFSET
	class APRI_TA*                                     Scorer;                                        // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.Ball_TA.GoalPenetrationData
// Size: 0x0028 (0x0024 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FGoalPenetrationData
{
	class UGoal_TA*                                    Goal;                                          // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     PlaneLocation;                                 // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     PlaneNormal;                                   // 0x0014 (0x000C) [0x0000000000000000]               
	float                                              PenetrationDistance;                           // 0x0020 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0024 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.Ball_TA.CarBallInteractionSettings
// Size: 0x0038 (0x0034 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FCarBallInteractionSettings
{
	uint32_t                                           bSkipScriptForces : 1;                         // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	struct FInterpCurveFloat                           PushFactorCurve;                               // 0x0008 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              PushZScale;                                    // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PushForwardScale;                              // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxRelativeSpeed;                              // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Restitution;                                   // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Friction;                                      // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0034 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.Ball_Breakout_TA.BreakoutDamage
// Size: 0x0008
struct FBreakoutDamage
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Damage;                                        // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.BallTrajectoryComponent_TA.TrajectorySetup
// Size: 0x0014
struct FTrajectorySetup
{
	float                                              TotalSimulateTime;                             // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           bAlwaysEnabled : 1;                            // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bUpdatePathEveryFrame : 1;                     // 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            TotalPoints;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxStepsPerFrame;                              // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            QuickTrajectorySteps;                          // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.BallTrajectoryComponent_Beam_TA.TrajectoryFX
// Size: 0x0008
struct FTrajectoryFX
{
	class UParticleSystemComponent*                    Particle;                                      // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct TAGame.BallTrajectoryComponent_Mesh_TA.MeshInfo
// Size: 0x0038
struct FMeshInfo
{
	class UStaticMeshComponent*                        Meshes;                                        // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     Location;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x0014 (0x000C) [0x0000000000000000]               
	int32_t                                            PointIndex;                                    // 0x0020 (0x0004) [0x0000000000000000]               
	struct FVector                                     MoveDirection;                                 // 0x0024 (0x000C) [0x0000000000000000]               
	float                                              DistanceAlongPath;                             // 0x0030 (0x0004) [0x0000000000000000]               
	uint32_t                                           bCrossedZero : 1;                              // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.BallTrajectoryComponent_Spline_TA.TrajectorySplineFX
// Size: 0x0008
struct FTrajectorySplineFX
{
	class ASplineLoftActorMovable*                     Spline;                                        // 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.BeamTraceComponent_TA.BeamTraceProps
// Size: 0x0020
struct FBeamTraceProps
{
	float                                              NextTraceTime;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     LastWorldLocation;                             // 0x0004 (0x000C) [0x0000000000000000]               
	uint32_t                                           LastWorldHit : 1;                              // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          UnknownData00[0x4];                            // 0x0014 (0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    PSC;                                           // 0x0018 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct TAGame.BoostMesh_TA.AnimatedMaterialParam
// Size: 0x0008
struct FAnimatedMaterialParam
{
	class FName                                        ParamName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.BoostMesh_TA.AnimatedMaterialParamFloat
// 0x0008 (0x0008 - 0x0010)
struct FAnimatedMaterialParamFloat : FAnimatedMaterialParam
{
	class UDistributionFloat*                          Value;                                         // 0x0008 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct TAGame.BoostMesh_TA.AnimatedMaterialParamVector
// 0x0008 (0x0008 - 0x0010)
struct FAnimatedMaterialParamVector : FAnimatedMaterialParam
{
	class UDistributionVector*                         Value;                                         // 0x0008 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct TAGame.BoostMesh_TA.BoostMeshOverride
// Size: 0x0020
struct FBoostMeshOverride
{
	class UActorComponent*                             Mesh;                                          // 0x0000 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class AFXActor_X*                                  CarType;                                       // 0x0008 (0x0008) [0x0000000800000001] (CPF_Edit | CPF_EditorOnly)
	class FString                                      CarTypePath;                                   // 0x0010 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.BoostMesh_TA.AnimatedMaterialParamColor
// 0x0008 (0x0010 - 0x0018)
struct FAnimatedMaterialParamColor : FAnimatedMaterialParamVector
{
	class UDistributionFloat*                          AlphaValue;                                    // 0x0010 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct TAGame.BoostMesh_TA.AnimatedMaterialMesh
// Size: 0x0068 (0x0064 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FAnimatedMaterialMesh
{
	class FName                                        MeshAttachmentName;                            // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInterface*                          Material;                                      // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MaterialIndex;                                 // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x4];                            // 0x0014 (0x0004) MISSED OFFSET
	class TArray<struct FBoostMeshOverride>            MeshOverrides;                                 // 0x0018 (0x0010) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	class TArray<struct FAnimatedMaterialParamFloat>   FloatParams;                                   // 0x0028 (0x0010) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	class TArray<struct FAnimatedMaterialParamVector>  VectorParams;                                  // 0x0038 (0x0010) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	class TArray<struct FAnimatedMaterialParamColor>   ColorParams;                                   // 0x0048 (0x0010) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	class UActorComponent*                             Mesh;                                          // 0x0058 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	float                                              ElapsedTime;                                   // 0x0060 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0064 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.BreakOutActor_Platform_TA.BreakoutDamageState
// Size: 0x0020
struct FBreakoutDamageState
{
	uint8_t                                            State;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x7];                            // 0x0001 (0x0007) MISSED OFFSET
	class APRI_TA*                                     Causer;                                        // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     DamageLocation;                                // 0x0010 (0x000C) [0x0000000000000000]               
	uint32_t                                           bDirectDamage : 1;                             // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bImmediate : 1;                                // 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TAGame.BTComponent.BTStatusLog
// Size: 0x0028
struct FBTStatusLog
{
	class UBTNode*                                     Node;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            Depth;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                            Status;                                        // 0x000C (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x000D (0x0003) MISSED OFFSET
	class FString                                      Message;                                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bSetMessage : 1;                               // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCondition : 1;                                // 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              LastEvalTime;                                  // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.Camera_TA.ProfileSliderLimits
// Size: 0x000C
struct FProfileSliderLimits
{
	float                                              Min;                                           // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Max;                                           // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              interval;                                      // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.Camera_TA.SwivelExtent
// Size: 0x000C
struct FSwivelExtent
{
	int32_t                                            PitchMin;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            PitchMax;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            YawMax;                                        // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.CameraState_Car_TA.InterpVector
// Size: 0x0028
struct FInterpVector
{
	float                                              Rate;                                          // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxDistance;                                   // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Location;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	uint32_t                                           bInitialized : 1;                              // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Rate_Old;                                      // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Velocity;                                      // 0x001C (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame.TargetFinder_TA.PlaneSelectData
// Size: 0x0010
struct FPlaneSelectData
{
	float                                              YExtent;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              ZExtent;                                       // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              MaxDegreeAngle;                                // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              MaxDistance;                                   // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.TargetFinder_TA.AngleSelectData
// Size: 0x0008
struct FAngleSelectData
{
	float                                              MaxDegreeAngle;                                // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              MaxDistance;                                   // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.CameraState_CarPreview_TA.TargetCacheEntry
// Size: 0x0020
struct FTargetCacheEntry
{
	class FName                                        TargetName;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x0014 (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame.GameObserver_TA.GoalData
// Size: 0x0048
struct FGoalData
{
	class UGoal_TA*                                    Goal;                                          // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     GoalFront;                                     // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     GoalForward;                                   // 0x0014 (0x000C) [0x0000000000000000]               
	float                                              DotToBall;                                     // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              DistToBall;                                    // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              BallSpeedTowardsGoal;                          // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              DotToBallVelocity;                             // 0x002C (0x0004) [0x0000000000000000]               
	float                                              RawScorability;                                // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              Scorability;                                   // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              Defense;                                       // 0x0038 (0x0004) [0x0000000000000000]               
	int32_t                                            NumDefensiveCars;                              // 0x003C (0x0004) [0x0000000000000000]               
	float                                              Offense;                                       // 0x0040 (0x0004) [0x0000000000000000]               
	int32_t                                            NumOffensiveCars;                              // 0x0044 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.CameraState_Lobby_TA.CameraSettings
// Size: 0x0008
struct FCameraSettings
{
	float                                              XOffsetDistance;                               // 0x0000 (0x0004) [0x0001000000000000]               
	float                                              CameraOffsetPitch;                             // 0x0004 (0x0004) [0x0001000000000000]               
};

// ScriptStruct TAGame.CameraStateSelector_Priority_TA.StateParams
// Size: 0x0010 (0x0009 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FStateParams
{
	class UCameraState_X*                              State;                                         // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            Priority;                                      // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0009 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.CameraTrack_TA.CameraTrackRotationPoint
// Size: 0x0010
struct FCameraTrackRotationPoint
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x0004 (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame.Vehicle_TA.CarInteractionData
// Size: 0x0010 (0x000C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FCarInteractionData
{
	class AVehicle_TA*                                 LastHitCar;                                    // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	float                                              LastHitTime;                                   // 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x000C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.CarMeshComponentBase_TA.InheritedObjects
// Size: 0x0018
struct FInheritedObjects
{
	class UProductAsset_TA*                            Asset;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	class UObject*                                     ObjectToEdit;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	class UProductAttribute_InheritCarSetting_TA*      InheritSetting;                                // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.ProductAsset_Body_TA.VehicleWheelSettings
// Size: 0x0008
struct FVehicleWheelSettings
{
	class FName                                        BoneName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.ProductAsset_Body_TA.VehicleAxleSettings
// Size: 0x0028
struct FVehicleAxleSettings
{
	float                                              WheelMeshRadius;                               // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              WheelWidth;                                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              WheelMeshOffsetSide;                           // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVehicleWheelSettings                       LeftWheel;                                     // 0x000C (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVehicleWheelSettings                       RightWheel;                                    // 0x0014 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              WheelRadius;                                   // 0x001C (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              WheelOffsetForward;                            // 0x0020 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              WheelOffsetSide;                               // 0x0024 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
};

// ScriptStruct TAGame.ProductAttribute_PaintSettings_TA.PaintMaterialGroup
// Size: 0x0010
struct FPaintMaterialGroup
{
	class TArray<class UMaterialInterface*>            Materials;                                     // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.EngineAudioComponent_TA.CarStateData
// Size: 0x0010
struct FCarStateData
{
	float                                              Throttle;                                      // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              WheelSpeed;                                    // 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              EngineRPM;                                     // 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              EngineLoad;                                    // 0x000C (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct TAGame.EngineAudioComponent_TA.EngineAudioNativeState
// Size: 0x0038
struct FEngineAudioNativeState
{
	class UEngineAudioComponent_TA*                    Component;                                     // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UEngineAudioProfile_TA*                      Profile;                                       // 0x0008 (0x0008) [0x0000000000000000]               
	class AVehicle_TA*                                 Car;                                           // 0x0010 (0x0008) [0x0000000000000000]               
	struct FCarStateData                               OldCarState;                                   // 0x0018 (0x0010) [0x0000000000000000]               
	struct FCarStateData                               CarState;                                      // 0x0028 (0x0010) [0x0000000000000000]               
};

// ScriptStruct TAGame.EngineAudioComponent_TA.EngineAudioNativeState_Clutched
// 0x0004 (0x0038 - 0x003C)
struct FEngineAudioNativeState_Clutched : FEngineAudioNativeState
{
	uint32_t                                           bUsingRevLimiter : 1;                          // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x003C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.EngineAudioComponent_TA.EngineAudioNativeState_OnGround
// 0x0010 (0x0038 - 0x0048)
struct FEngineAudioNativeState_OnGround : FEngineAudioNativeState
{
	float                                              GearSwitchTimeRemaining;                       // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              RPMShiftUp;                                    // 0x003C (0x0004) [0x0000000000000000]               
	float                                              RPMShiftDown;                                  // 0x0040 (0x0004) [0x0000000000000000]               
	int32_t                                            Gear;                                          // 0x0044 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.EngineAudioComponent_TA.EngineAudioNativeState_InAir
// 0x0008 (0x003C - 0x0044)
struct FEngineAudioNativeState_InAir : FEngineAudioNativeState_Clutched
{
	uint8_t                                          UnknownData00[0x4];                            // 0x003C (0x0004) MISSED OFFSET
	float                                              TimeInAir;                                     // 0x0040 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0044 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.HandlingPreset_TA.VehicleAxleData
// Size: 0x0014
struct FVehicleAxleData
{
	float                                              WheelRadius;                                   // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              WheelWidth;                                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     LocalRestPosition;                             // 0x0008 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.ViralItemFXComponent_TA.ViralFXData
// Size: 0x0018
struct FViralFXData
{
	class AFXActor_TA*                                 FXArchetype;                                   // 0x0000 (0x0008) [0x0001000000000001] (CPF_Edit)    
	float                                              Brightness;                                    // 0x0008 (0x0004) [0x0001000000000001] (CPF_Edit)    
	float                                              GoldTint;                                      // 0x000C (0x0004) [0x0001000000000001] (CPF_Edit)    
	class UAkSoundCue*                                 SFX;                                           // 0x0010 (0x0008) [0x0001000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.Car_KnockOut_TA.ImpulseData
// Size: 0x0008
struct FImpulseData
{
	int32_t                                            CompressedRotation;                            // 0x0000 (0x0004) [0x0001000000000000]               
	float                                              ImpulseSpeed;                                  // 0x0004 (0x0004) [0x0001000000000000]               
};

// ScriptStruct TAGame.Team_TA.ReplicatedLogoData
// Size: 0x0008
struct FReplicatedLogoData
{
	int32_t                                            LogoID;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           bSwapColors : 1;                               // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.CarColorSet_TA.DebugColor
// Size: 0x0014
struct FDebugColor
{
	struct FLinearColor                                Color;                                         // 0x0000 (0x0010) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bPreview : 1;                                  // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct TAGame.CarComponent_Boost_TA.ReplicatedBoostData
// Size: 0x0004
struct FReplicatedBoostData
{
	uint8_t                                            GrantCount;                                    // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            BoostAmount;                                   // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                            Unused1;                                       // 0x0002 (0x0001) [0x0000000000000000]               
	uint8_t                                            Unused2;                                       // 0x0003 (0x0001) [0x0000000000000000]               
};

// ScriptStruct TAGame.CarPreviewAnim_TA.PreviewAnimKeyframe
// Size: 0x0038
struct FPreviewAnimKeyframe
{
	struct FRotator                                    Rotation;                                      // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Translation;                                   // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FViewTargetTransitionParams                 BlendParams;                                   // 0x0018 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     BouncyChassisForce;                            // 0x0028 (0x000C) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bAddRotation : 1;                              // 0x0034 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bAddTranslation : 1;                           // 0x0034 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct TAGame.CinematicIntroSequence_TA.PressedAxis
// Size: 0x0010
struct FPressedAxis
{
	class FName                                        Key;                                           // 0x0000 (0x0008) [0x0001000000000000]               
	uint8_t                                            AxisSign;                                      // 0x0008 (0x0001) [0x0001000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x0009 (0x0003) MISSED OFFSET
	float                                              PressTime;                                     // 0x000C (0x0004) [0x0001000000000000]               
};

// ScriptStruct TAGame.CountryConfig_TA.CountryInfo
// Size: 0x0020
struct FCountryInfo
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Code;                                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.CrowdActor_TA.CrowdNoiseModifierInstance
// Size: 0x0008
struct FCrowdNoiseModifierInstance
{
	float                                              Value;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.CrowdActorSettings_TA.StatCrowdNoise
// Size: 0x0010
struct FStatCrowdNoise
{
	class UStatEvent_TA*                               StatEvent;                                     // 0x0000 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	class UCrowdNoiseModifier_TA*                      Noise;                                         // 0x0008 (0x0008) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
};

// ScriptStruct TAGame.CrowdActorSettings_TA.BallHitCrowdNoise
// Size: 0x0010
struct FBallHitCrowdNoise
{
	float                                              RelativeSpeed;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class UCrowdNoiseModifier_TA*                      Noise;                                         // 0x0008 (0x0008) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
};

// ScriptStruct TAGame.CrowdActorSettings_TA.CrowdDefenseSettings
// Size: 0x0018 (0x0014 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FCrowdDefenseSettings
{
	float                                              DefenseZoneTime;                               // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DefenseZoneDistance;                           // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkSoundCue*                                 Sound;                                         // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              ReplayDelay;                                   // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0014 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.CrumbTrailRedefinition_TA.CrumbRedefinedInfo
// Size: 0x0060
struct FCrumbRedefinedInfo
{
	uint8_t                                            RedefinedType;                                 // 0x0000 (0x0001) [0x0001000000000000]               
	uint8_t                                            RedefinedAction;                               // 0x0001 (0x0001) [0x0001000000000000]               
	uint8_t                                          UnknownData00[0x6];                            // 0x0002 (0x0006) MISSED OFFSET
	struct FCrumbTrailData                             CrumbData;                                     // 0x0008 (0x0058) [0x0001000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.CurrencyProductSet_TA.CurrencyProduct
// Size: 0x000C
struct FCurrencyProduct
{
	struct FProductHashID                              HashID;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrencyID;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Quantity;                                      // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.DebugHelpMenu_TA.DebugHelpItem
// Size: 0x0030
struct FDebugHelpItem
{
	class FString                                      Key;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Command;                                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Description;                                   // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.DebugHelpMenu_TA.DebugCategory
// Size: 0x0020
struct FDebugCategory
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FDebugHelpItem>                Items;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.EngagementEventsConfig_TA.EngagementEventData
// Size: 0x0040
struct FEngagementEventData
{
	class FString                                      Description;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              EventTypes;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint64_t                                           EpochStartTime;                                // 0x0020 (0x0008) [0x0000000000000000]               
	uint64_t                                           EpochEndTime;                                  // 0x0028 (0x0008) [0x0000000000000000]               
	uint32_t                                           bEndingSoon : 1;                               // 0x0030 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bLiveNow : 1;                                  // 0x0030 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint8_t                                          UnknownData00[0x4];                            // 0x0034 (0x0004) MISSED OFFSET
	uint64_t                                           EpochSoonEndTime;                              // 0x0038 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct TAGame.EngagementEventsConfig_TA.EngagementEventStatus
// Size: 0x0030
struct FEngagementEventStatus
{
	uint32_t                                           bEventActive : 1;                              // 0x0000 (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
	uint32_t                                           bEventEndingSoon : 1;                          // 0x0000 (0x0004) [0x0000000040002000] [0x00000002] (CPF_Transient | CPF_DataBinding)
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	uint64_t                                           EpochTimeStart;                                // 0x0008 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	uint64_t                                           EpochTimeEnd;                                  // 0x0010 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	uint64_t                                           EpochTimeRemaining;                            // 0x0018 (0x0008) [0x0000000040002000] (CPF_Transient | CPF_DataBinding)
	uint32_t                                           bStartNotificationShown : 1;                   // 0x0020 (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
	uint8_t                                          UnknownData01[0x4];                            // 0x0024 (0x0004) MISSED OFFSET
	uint64_t                                           EpochTimeStartForNotificationShown;            // 0x0028 (0x0008) [0x0000000040000000] (CPF_DataBinding)
};

// ScriptStruct TAGame.EngineAudioProfile_TA.AudioMinMax
// Size: 0x0008
struct FAudioMinMax
{
	float                                              Min;                                           // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RandRange;                                     // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.EngineAudioProfile_TA.AudioGear
// Size: 0x0010
struct FAudioGear
{
	struct FAudioMinMax                                RPMShiftDownRange;                             // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FAudioMinMax                                RPMShiftUpRange;                               // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.EOSShopPurchaseEvent_X.EOSShopPurchaseEventProduct
// Size: 0x0014
struct FEOSShopPurchaseEventProduct
{
	int32_t                                            ProductID;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            Quality;                                       // 0x0004 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x0005 (0x0003) MISSED OFFSET
	int32_t                                            PaintID;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            CertifiedStatID;                               // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            SpecialEditionID;                              // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.OnlineSaveRecord_TA.OnlineSaveObject
// Size: 0x0028
struct FOnlineSaveObject
{
	class FString                                      Path;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Data;                                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UObject*                                     DataObj;                                       // 0x0020 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct TAGame.K3SUserPermissions_TA.K3STranslation
// Size: 0x0030
struct FK3STranslation
{
	class FString                                      Label;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      UserNotice;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ParentNotice;                                  // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.K3SUserPermissions_TA.K3STranslations
// Size: 0x0030
struct FK3STranslations
{
	struct FK3STranslation                             en;                                            // 0x0000 (0x0030) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.K3SUserPermissions_TA.K3SOptions
// Size: 0x0040
struct FK3SOptions
{
	struct FK3STranslations                            Translations;                                  // 0x0000 (0x0030) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Value;                                         // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.K3SUserPermissions_TA.K3SAgeBracket
// Size: 0x0050
struct FK3SAgeBracket
{
	class FString                                      ConsentTypeRequired;                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ConsentTypeUnderParentalControl;               // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DefaultValue;                                  // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DefaultParentLimit;                            // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      EnforcedLimit;                                 // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.K3SUserPermissions_TA.K3SDefinition
// Size: 0x0178 (0x0174 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FK3SDefinition
{
	class TArray<struct FK3SOptions>                   Options;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FK3STranslations                            Translations;                                  // 0x0010 (0x0030) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FK3SAgeBracket                              AgeBracket;                                    // 0x0040 (0x0050) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FK3SAgeBracket                              PreviousAgeBracket;                            // 0x0090 (0x0050) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      OrgId;                                         // 0x00E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ProductID;                                     // 0x00F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Namespace;                                     // 0x0100 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      SettingName;                                   // 0x0110 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ValueType;                                     // 0x0120 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      NumericValueFormat;                            // 0x0130 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      AllowProductOverrides;                         // 0x0140 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      RestrictiveOrder;                              // 0x0150 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            NumberOfDecimals;                              // 0x0160 (0x0004) [0x0000000000000000]               
	int32_t                                            Min;                                           // 0x0164 (0x0004) [0x0000000000000000]               
	int32_t                                            Max;                                           // 0x0168 (0x0004) [0x0000000000000000]               
	int32_t                                            IncrementOrDecrementBy;                        // 0x016C (0x0004) [0x0000000000000000]               
	uint32_t                                           InheritFromOrg : 1;                            // 0x0170 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           UserHidden : 1;                                // 0x0170 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           UserReadOnly : 1;                              // 0x0170 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           Required : 1;                                  // 0x0170 (0x0004) [0x0000000000000000] [0x00000008] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0174 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.K3SUserPermissions_TA.K3SSetting
// Size: 0x01F0 (0x01EC PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FK3SSetting
{
	struct FK3SDefinition                              Definition;                                    // 0x0000 (0x0178) [0x0000000000400000] (CPF_NeedCtorLink)
	uint64_t                                           PreferredValueUpdatedAt;                       // 0x0178 (0x0008) [0x0000000000000000]               
	uint64_t                                           LastGraduatedAt;                               // 0x0180 (0x0008) [0x0000000000000000]               
	class FString                                      Namespace;                                     // 0x0188 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      SettingName;                                   // 0x0198 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PreferredValue;                                // 0x01A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ParentLimit;                                   // 0x01B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      EffectiveValue;                                // 0x01C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      EffectiveSource;                               // 0x01D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           ParentLimitFromOrgLevel : 1;                   // 0x01E8 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           PreferredValueFromOrgLevel : 1;                // 0x01E8 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           IsOrgLevel : 1;                                // 0x01E8 (0x0004) [0x0000000000000000] [0x00000004] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x01EC (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.K3SUserPermissions_TA.K3SResponse
// Size: 0x0010
struct FK3SResponse
{
	class TArray<struct FK3SSetting>                   Settings;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.K3SUserPermissions_TA.K3SFirstTimeDefaults
// Size: 0x0070
struct FK3SFirstTimeDefaults
{
	class FString                                      AgeGateDefaultVoice;                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      AgeGateDefaultText;                            // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      AgeGateDefaultTrade;                           // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ItemShopNotificationsDefaultEnabled;           // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      AgeGateDefaultVoiceReporting;                  // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      AgeGateDefaultTextReporting;                   // 0x0050 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	class FString                                      AgeGateDefaultFilterMatureLanguage;            // 0x0060 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.EOSUserPermissions_TA.EOSPermissionsResult
// Size: 0x0068 (0x0064 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FEOSPermissionsResult
{
	uint32_t                                           Disabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           AllowedToAcquire : 1;                          // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           AllowedToMakePurchases : 1;                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           CanSeeMatureLanguage : 1;                      // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           CanAcceptFriendRequest : 1;                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           CanRecieveInGameItems : 1;                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           CanSeeThirdPartyNames : 1;                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           CanDisplayMyUserName : 1;                      // 0x0000 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           CanSeeOtherPlayersNames : 1;                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           CanUseVoiceChat : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           CanVoiceChatWithUnknowns : 1;                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           CanUseHousepartyCasting : 1;                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000800] 
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      PlaytimeReportingFrequency;                    // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           PurchaseReportingEnabled : 1;                  // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           CanUseTextChat : 1;                            // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	uint8_t                                          UnknownData01[0x4];                            // 0x001C (0x0004) MISSED OFFSET
	class FString                                      UgcViewing;                                    // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      UgcSharing;                                    // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      VoiceChat;                                     // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      TextChat;                                      // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           RequirePinToAddFriend : 1;                     // 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0064 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.EOSUserPermissions_TA.EOSPermissionsResponse
// Size: 0x0138
struct FEOSPermissionsResponse
{
	struct FEOSPermissionsResult                       Result;                                        // 0x0000 (0x0068) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FEOSPermissionsResult                       NamespaceSetting;                              // 0x0068 (0x0068) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FEOSPermissionsResult                       UserSetting;                                   // 0x00D0 (0x0068) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.EOSVoiceManager_TA.PendingRoomJoin
// Size: 0x0018
struct FPendingRoomJoin
{
	class UOnlinePlayer_X*                             OnlinePlayer;                                  // 0x0000 (0x0008) [0x0001000000002000] (CPF_Transient)
	class FString                                      RoomName;                                      // 0x0008 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.EOSVoiceManager_TA.VoiceRecordingBufferData
// Size: 0x0018 (0x0011 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FVoiceRecordingBufferData
{
	uint64_t                                           RecordStartTime;                               // 0x0000 (0x0008) [0x0001000000000000]               
	uint64_t                                           RecordEndTime;                                 // 0x0008 (0x0008) [0x0001000000000000]               
	uint8_t                                            RoomType;                                      // 0x0010 (0x0001) [0x0001000000000000]               
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0011 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.EOSVoiceMetrics_TA.UserVoiceSettings
// Size: 0x0020
struct FUserVoiceSettings
{
	uint8_t                                            VoiceChatFilter;                               // 0x0000 (0x0001) [0x0001000000000000]               
	uint8_t                                            VoiceInputMode;                                // 0x0001 (0x0001) [0x0001000000000000]               
	uint8_t                                          UnknownData00[0x2];                            // 0x0002 (0x0002) MISSED OFFSET
	uint32_t                                           bMainMenuNotifications : 1;                    // 0x0004 (0x0004) [0x0001000000000000] [0x00000001] 
	uint32_t                                           bMatchNotifications : 1;                       // 0x0004 (0x0004) [0x0001000000000000] [0x00000002] 
	uint32_t                                           bTextNotifications : 1;                        // 0x0004 (0x0004) [0x0001000000000000] [0x00000004] 
	float                                              OutputVolume;                                  // 0x0008 (0x0004) [0x0001000000000000]               
	uint8_t                                            PreferredRoomType;                             // 0x000C (0x0001) [0x0001000000000000]               
	uint8_t                                          UnknownData01[0x3];                            // 0x000D (0x0003) MISSED OFFSET
	class TArray<class FString>                        MutedPlayers;                                  // 0x0010 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ESportConfig_TA.ESportEventData
// Size: 0x00B0
struct FESportEventData
{
	class FString                                      Image;                                         // 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      Title;                                         // 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      Description;                                   // 0x0020 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      URL;                                           // 0x0030 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      UTCStartTime;                                  // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      UTCEndTime;                                    // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bStartingSoon : 1;                             // 0x0060 (0x0004) [0x0000000040002000] [0x00000001] (CPF_Transient | CPF_DataBinding)
	uint32_t                                           bLiveNow : 1;                                  // 0x0060 (0x0004) [0x0000000040002000] [0x00000002] (CPF_Transient | CPF_DataBinding)
	uint8_t                                          UnknownData00[0x4];                            // 0x0064 (0x0004) MISSED OFFSET
	class UTexture*                                    ImageTexture;                                  // 0x0068 (0x0008) [0x0000000040002000] (CPF_Transient | CPF_DataBinding)
	int32_t                                            ImageTextureSizeX;                             // 0x0070 (0x0004) [0x0000000040002000] (CPF_Transient | CPF_DataBinding)
	int32_t                                            ImageTextureSizeY;                             // 0x0074 (0x0004) [0x0000000040002000] (CPF_Transient | CPF_DataBinding)
	class FString                                      StartTime;                                     // 0x0078 (0x0010) [0x0000000040402000] (CPF_Transient | CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      EndTime;                                       // 0x0088 (0x0010) [0x0000000040402000] (CPF_Transient | CPF_NeedCtorLink | CPF_DataBinding)
	uint64_t                                           EpochSoonStartTime;                            // 0x0098 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint64_t                                           EpochStartTime;                                // 0x00A0 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint64_t                                           EpochEndTime;                                  // 0x00A8 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct TAGame.EulaSave_TA.EulaVersion
// Size: 0x0004
struct FEulaVersion
{
	int32_t                                            TextHash;                                      // 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.FaceIt_TA.FaceItMatchInfo
// Size: 0x0080
struct FFaceItMatchInfo
{
	int32_t                                            MatchID;                                       // 0x0000 (0x0004) [0x0001000000000000]               
	int32_t                                            ServerId;                                      // 0x0004 (0x0004) [0x0001000000000000]               
	class FString                                      TeamNameA;                                     // 0x0008 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	class FString                                      TeamNameB;                                     // 0x0018 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bIsSpectator : 1;                              // 0x0028 (0x0004) [0x0001000000000000] [0x00000001] 
	uint32_t                                           bIsCrossPlatform : 1;                          // 0x0028 (0x0004) [0x0001000000000000] [0x00000002] 
	int32_t                                            TeamSize;                                      // 0x002C (0x0004) [0x0001000000000000]               
	int32_t                                            PartnerID;                                     // 0x0030 (0x0004) [0x0001000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0034 (0x0004) MISSED OFFSET
	struct FUniqueNetId                                PlayerID;                                      // 0x0038 (0x0048) [0x0001000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.FaceItConfig_TA.PartnerMapping
// Size: 0x0018
struct FPartnerMapping
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0001000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      Name;                                          // 0x0008 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.FirstTimeExperienceRedefinition_TA.RedefinedInfo
// Size: 0x0040
struct FRedefinedInfo
{
	uint8_t                                            RedefinedAction;                               // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            RedefinedType;                                 // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x2];                            // 0x0002 (0x0002) MISSED OFFSET
	class FName                                        GroupName;                                     // 0x0004 (0x0008) [0x0000000000000000]               
	uint8_t                                          UnknownData01[0x4];                            // 0x000C (0x0004) MISSED OFFSET
	class TArray<class FName>                          CheckpointNames;                               // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UTriggerClump_TA*>              TriggerClumps;                                 // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FName                                        NameValue;                                     // 0x0030 (0x0008) [0x0000000000000000]               
	int32_t                                            IntValue;                                      // 0x0038 (0x0004) [0x0000000000000000]               
	uint32_t                                           bValue : 1;                                    // 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.FlockActor_TA.FlockAgent
// Size: 0x0038
struct FFlockAgent
{
	uint32_t                                           bWaitingForOtherAgents : 1;                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DistanceAlongSpline;                           // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              Scale;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	struct FVector                                     Position;                                      // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                      // 0x0018 (0x000C) [0x0000000000000000]               
	struct FVector                                     NormalizedSplineOffset;                        // 0x0024 (0x000C) [0x0000000000000000]               
	class ASplineActor*                                CurrentSplineActor;                            // 0x0030 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.FreeplayCommands_TA.ActivateFreeplayCommandOutParams
// Size: 0x0060
struct FActivateFreeplayCommandOutParams
{
	struct FFreeplayCommandsMetricsData                PreActivationData;                             // 0x0000 (0x0058) [0x0001000000400000] (CPF_NeedCtorLink)
	class UError*                                      ExecutionError;                                // 0x0058 (0x0008) [0x0001000000000000]               
};

// ScriptStruct TAGame.FreeplayCommandsStatics_TA.ModifyRBStateInParams
// Size: 0x0070 (0x0064 PropertySize + 0x000C padding to satisfy MinAlignment of 16)
struct FModifyRBStateInParams
{
	struct FReplicatedRBState                          InRBState;                                     // 0x0000 (0x0040) [0x0001000000000000]               
	struct FVector                                     NewLocation;                                   // 0x0040 (0x000C) [0x0001000000000000]               
	struct FVector                                     NewLinearVelocity;                             // 0x004C (0x000C) [0x0001000000000000]               
	struct FVector                                     NewAngularVelocity;                            // 0x0058 (0x000C) [0x0001000000000000]               
	uint8_t                                          MinAlignmentPadding[0xC];                      // 0x0064 (0x000C) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.FreeplayCommandsStatics_TA.CalculateVerticalLaunchSpeedInParams
// Size: 0x0010
struct FCalculateVerticalLaunchSpeedInParams
{
	float                                              TargetHeight;                                  // 0x0000 (0x0004) [0x0001000000000000]               
	float                                              StartHeight;                                   // 0x0004 (0x0004) [0x0001000000000000]               
	float                                              FlightTime;                                    // 0x0008 (0x0004) [0x0001000000000000]               
	float                                              Gravity;                                       // 0x000C (0x0004) [0x0001000000000000]               
};

// ScriptStruct TAGame.FreeplayCommandsStatics_TA.CalculateBallInFrontLocationInParams
// Size: 0x002C
struct FCalculateBallInFrontLocationInParams
{
	float                                              BallRadius;                                    // 0x0000 (0x0004) [0x0001000000000000]               
	float                                              BallInFrontDistance;                           // 0x0004 (0x0004) [0x0001000000000000]               
	struct FRotator                                    CarRotation;                                   // 0x0008 (0x000C) [0x0001000000000000]               
	struct FVector                                     CarLocalCollisionExtent;                       // 0x0014 (0x000C) [0x0001000000000000]               
	struct FVector                                     CarLocation;                                   // 0x0020 (0x000C) [0x0001000000000000]               
};

// ScriptStruct TAGame.FreeplayCommandsStatics_TA.CalculateBallOnCarLocationInParams
// Size: 0x0048
struct FCalculateBallOnCarLocationInParams
{
	struct FRotator                                    CarRotation;                                   // 0x0000 (0x000C) [0x0001000000000000]               
	struct FVector                                     CarLocation;                                   // 0x000C (0x000C) [0x0001000000000000]               
	struct FVector                                     CarAcceleration;                               // 0x0018 (0x000C) [0x0001000000000000]               
	float                                              CarSpeedPerc;                                  // 0x0024 (0x0004) [0x0001000000000000]               
	float                                              CarTurnPerc;                                   // 0x0028 (0x0004) [0x0001000000000000]               
	float                                              BaseForwardOffset;                             // 0x002C (0x0004) [0x0001000000000000]               
	float                                              BaseUpOffset;                                  // 0x0030 (0x0004) [0x0001000000000000]               
	float                                              ForwardOffsetFromTurn;                         // 0x0034 (0x0004) [0x0001000000000000]               
	float                                              AccelerationEffectMultiplier;                  // 0x0038 (0x0004) [0x0001000000000000]               
	float                                              MaxRightOffset;                                // 0x003C (0x0004) [0x0001000000000000]               
	float                                              SlowRightOffsetPerc;                           // 0x0040 (0x0004) [0x0001000000000000]               
	float                                              MinUpOffsetPerc;                               // 0x0044 (0x0004) [0x0001000000000000]               
};

// ScriptStruct TAGame.FreeplayCommandsStatics_TA.CalculateBallOnCarInAirLocationInParams
// Size: 0x0030
struct FCalculateBallOnCarInAirLocationInParams
{
	float                                              BallRadius;                                    // 0x0000 (0x0004) [0x0001000000000000]               
	float                                              BallOnCarDistance;                             // 0x0004 (0x0004) [0x0001000000000000]               
	float                                              CarLocalCollisionZ;                            // 0x0008 (0x0004) [0x0001000000000000]               
	struct FRotator                                    CarRotation;                                   // 0x000C (0x000C) [0x0001000000000000]               
	struct FVector                                     CarLocation;                                   // 0x0018 (0x000C) [0x0001000000000000]               
	struct FVector                                     CarCurrentLinearVelocity;                      // 0x0024 (0x000C) [0x0001000000000000]               
};

// ScriptStruct TAGame.FreeplayCommandsStatics_TA.CalculateLaunchVectorInParams
// Size: 0x0024
struct FCalculateLaunchVectorInParams
{
	struct FVector                                     StartLocation;                                 // 0x0000 (0x000C) [0x0001000000000000]               
	struct FVector                                     TargetLocation;                                // 0x000C (0x000C) [0x0001000000000000]               
	float                                              Gravity;                                       // 0x0018 (0x0004) [0x0001000000000000]               
	float                                              HorizontalSpeed;                               // 0x001C (0x0004) [0x0001000000000000]               
	float                                              MaxVerticalLaunchSpeedRatio;                   // 0x0020 (0x0004) [0x0001000000000000]               
};

// ScriptStruct TAGame.FreeplayCommandsStatics_TA.CalculateRedirectPassLocationInParams
// Size: 0x004C
struct FCalculateRedirectPassLocationInParams
{
	struct FVector                                     BallStartLocation;                             // 0x0000 (0x000C) [0x0001000000000000]               
	struct FVector                                     CarStartLocation;                              // 0x000C (0x000C) [0x0001000000000000]               
	struct FVector                                     CarStartVelocity;                              // 0x0018 (0x000C) [0x0001000000000000]               
	struct FVector                                     BestGoalLocation;                              // 0x0024 (0x000C) [0x0001000000000000]               
	float                                              VelocityWeight;                                // 0x0030 (0x0004) [0x0001000000000000]               
	float                                              VelocityZWeight;                               // 0x0034 (0x0004) [0x0001000000000000]               
	float                                              GoalWeight;                                    // 0x0038 (0x0004) [0x0001000000000000]               
	float                                              BallHorizontalSpeed;                           // 0x003C (0x0004) [0x0001000000000000]               
	float                                              MaxGoalLeading;                                // 0x0040 (0x0004) [0x0001000000000000]               
	float                                              AdditionalTargetHeight;                        // 0x0044 (0x0004) [0x0001000000000000]               
	int32_t                                            Iterations;                                    // 0x0048 (0x0004) [0x0001000000000000]               
};

// ScriptStruct TAGame.FreeplayCommandsStatics_TA.CalculateRedirectHorizontalLaunchSpeedInParams
// Size: 0x002C
struct FCalculateRedirectHorizontalLaunchSpeedInParams
{
	struct FVector                                     BallLocation;                                  // 0x0000 (0x000C) [0x0001000000000000]               
	struct FVector                                     CarLocation;                                   // 0x000C (0x000C) [0x0001000000000000]               
	struct FVector                                     CarVelocity;                                   // 0x0018 (0x000C) [0x0001000000000000]               
	float                                              MaxHorizontalLaunchSpeed;                      // 0x0024 (0x0004) [0x0001000000000000]               
	float                                              SpeedDropoffMaxRange;                          // 0x0028 (0x0004) [0x0001000000000000]               
};

// ScriptStruct TAGame.FreeplayCommandsStatics_TA.CalculateShotOnGoalSpeedHoopsInParams
// Size: 0x001C
struct FCalculateShotOnGoalSpeedHoopsInParams
{
	float                                              MaxLaunchSpeed;                                // 0x0000 (0x0004) [0x0001000000000000]               
	float                                              DropoffRange;                                  // 0x0004 (0x0004) [0x0001000000000000]               
	float                                              MinSpeedReductionAngle;                        // 0x0008 (0x0004) [0x0001000000000000]               
	float                                              AboveNetSpeedReduction;                        // 0x000C (0x0004) [0x0001000000000000]               
	struct FVector                                     BallProximityToRim;                            // 0x0010 (0x000C) [0x0001000000000000]               
};

// ScriptStruct TAGame.FreeplayCommandsStatics_TA.CalculateShotOnGoalLocationHoopsInParams
// Size: 0x0034
struct FCalculateShotOnGoalLocationHoopsInParams
{
	float                                              SurfaceHeight;                                 // 0x0000 (0x0004) [0x0001000000000000]               
	float                                              GoalRadius;                                    // 0x0004 (0x0004) [0x0001000000000000]               
	float                                              WidthPosition;                                 // 0x0008 (0x0004) [0x0001000000000000]               
	float                                              LengthPosition;                                // 0x000C (0x0004) [0x0001000000000000]               
	struct FVector                                     BackboardDirection;                            // 0x0010 (0x000C) [0x0001000000000000]               
	struct FVector                                     BackboardLocation;                             // 0x001C (0x000C) [0x0001000000000000]               
	struct FVector                                     GoalCenter;                                    // 0x0028 (0x000C) [0x0001000000000000]               
};

// ScriptStruct TAGame.FreeplayCommandsStatics_TA.CalculateShotOnGoalLocationStandardInParams
// Size: 0x002C
struct FCalculateShotOnGoalLocationStandardInParams
{
	float                                              BallRadius;                                    // 0x0000 (0x0004) [0x0001000000000000]               
	float                                              HorizontalGoalPosition;                        // 0x0004 (0x0004) [0x0001000000000000]               
	float                                              VerticalGoalPosition;                          // 0x0008 (0x0004) [0x0001000000000000]               
	float                                              GoalVolumeHalfWidth;                           // 0x000C (0x0004) [0x0001000000000000]               
	float                                              GoalVolumeHalfHeight;                          // 0x0010 (0x0004) [0x0001000000000000]               
	struct FVector                                     GoalWorldFrontCenter;                          // 0x0014 (0x000C) [0x0001000000000000]               
	struct FVector                                     GoalForward;                                   // 0x0020 (0x000C) [0x0001000000000000]               
};

// ScriptStruct TAGame.FreeplayCommandsStatics_TA.GetTargetLocationFromFlightTimeInParams
// Size: 0x0024
struct FGetTargetLocationFromFlightTimeInParams
{
	struct FVector                                     TargetStartLocation;                           // 0x0000 (0x000C) [0x0001000000000000]               
	struct FVector                                     TargetVelocity;                                // 0x000C (0x000C) [0x0001000000000000]               
	float                                              FlightTime;                                    // 0x0018 (0x0004) [0x0001000000000000]               
	float                                              VelocityWeight;                                // 0x001C (0x0004) [0x0001000000000000]               
	float                                              VelocityZWeight;                               // 0x0020 (0x0004) [0x0001000000000000]               
};

// ScriptStruct TAGame.FreeplaySessionManager_TA.FreeplaySettings
// Size: 0x0004 (0x0002 PropertySize + 0x0002 padding to satisfy MinAlignment of 4)
struct FFreeplaySettings
{
	uint8_t                                            GoalResetValue;                                // 0x0000 (0x0001) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            BoostFillValue;                                // 0x0001 (0x0001) [0x0000000000002000] (CPF_Transient)
	uint8_t                                          MinAlignmentPadding[0x2];                      // 0x0002 (0x0002) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.FriendsListUtils_TA.FriendInfoCounts
// Size: 0x0010
struct FFriendInfoCounts
{
	int32_t                                            OnlinePlatform;                                // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            InGamePlatform;                                // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            OnlineEpic;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            InGameEpic;                                    // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.FXActor_Boost_TA.ParticleBodyParameterSet
// Size: 0x0018
struct FParticleBodyParameterSet
{
	class FName                                        AttachmentName;                                // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FParticleSysParam>             Parameters;                                    // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.FXActor_Boost_TA.ParticleParameterSet
// Size: 0x0020
struct FParticleParameterSet
{
	class TArray<struct FParticleSysParam>             Parameters;                                    // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FParticleSysParam>             DrivingParameters;                             // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.FXActor_Boost_TA.BoostMeshMaterialOverride
// Size: 0x0018
struct FBoostMeshMaterialOverride
{
	class UMaterialInterface*                          Material;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<int32_t>                              Index;                                         // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.FXActor_Boost_TA.PreviewParticleOverride
// Size: 0x0010
struct FPreviewParticleOverride
{
	class UParticleSystem*                             Template;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        FXAttachmentName;                              // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.FXActor_BreakoutPlatform_TA.PlatformParam
// Size: 0x0020
struct FPlatformParam
{
	class FName                                        ParamName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FInterpCurveFloat                           ValueOverTime;                                 // 0x0008 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.FXActor_Car_TA.CarMovementState
// Size: 0x0004
struct FCarMovementState
{
	float                                              DesiredBoostGlow;                              // 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.ProductDatabase_TA.TemporaryProduct
// Size: 0x0018
struct FTemporaryProduct
{
	class FString                                      AssetPath;                                     // 0x0000 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FName                                        SlotName;                                      // 0x0010 (0x0008) [0x0000000000004000] (CPF_Config)  
};

// ScriptStruct TAGame.ProductDatabase_TA.GarageFolderData
// Size: 0x0060
struct FGarageFolderData
{
	class TArray<int32_t>                              FolderIDs;                                     // 0x0000 (0x0010) [0x0000000000001000] (CPF_Native)  
	struct FMap_Mirror                                 ProductIDToFolderID;                           // 0x0010 (0x0050) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct TAGame.XPManager_TA.TitleInfo
// Size: 0x000C
struct FTitleInfo
{
	class FName                                        Title;                                         // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            TitleCap;                                      // 0x0008 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct TAGame.Team_TA.TemporarySpawnSpot
// Size: 0x0028
struct FTemporarySpawnSpot
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                      // 0x0018 (0x000C) [0x0000000000000000]               
	float                                              Time;                                          // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.GlobalLookupTexture_TA.IntVector
// Size: 0x0008
struct FIntVector
{
	int32_t                                            X;                                             // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Y;                                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.MapInfo_TA.WorldColorData
// Size: 0x0040
struct FWorldColorData
{
	struct FLinearColor                                EnvironmentA;                                  // 0x0000 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                EnvironmentB;                                  // 0x0010 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                SunLight;                                      // 0x0020 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                WorldLight;                                    // 0x0030 (0x0010) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.GameEditor_Ring_TA.ActorTouchRecordData
// Size: 0x0018 (0x0014 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FActorTouchRecordData
{
	class AActor*                                      Actor;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     TouchDirection;                                // 0x0008 (0x000C) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0014 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.GameEvent_GameEditor_TA.SpawnArchetypeData
// Size: 0x0010 (0x000C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FSpawnArchetypeData
{
	class AActor*                                      Archetype;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            MaxSpawnCount;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x000C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.GameEvent_Tutorial_TA.CarSpawnData
// Size: 0x0020
struct FCarSpawnData
{
	class AController*                                 Controller;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x0014 (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame.GameEvent_Tutorial_TA.FieldSpawnInfo
// Size: 0x003C
struct FFieldSpawnInfo
{
	struct FVector                                     ExtentLoc;                                     // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     Extent;                                        // 0x000C (0x000C) [0x0000000000000000]               
	float                                              Speed;                                         // 0x0018 (0x0004) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x001C (0x000C) [0x0000000000000000]               
	uint8_t                                            RotationType;                                  // 0x0028 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x0029 (0x0003) MISSED OFFSET
	struct FVector                                     MaxFieldExtentScale;                           // 0x002C (0x000C) [0x0000000000000000]               
	uint32_t                                           bSpawnCannon : 1;                              // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDrawDebug : 1;                                // 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TAGame.GameEvent_Tutorial_TA.FieldSpawnInfoPair
// Size: 0x0078
struct FFieldSpawnInfoPair
{
	struct FFieldSpawnInfo                             PlayerSpawn;                                   // 0x0000 (0x003C) [0x0000000000000000]               
	struct FFieldSpawnInfo                             BallSpawn;                                     // 0x003C (0x003C) [0x0000000000000000]               
};

// ScriptStruct TAGame.GameEvent_Tutorial_TA.FieldSetupWave
// Size: 0x0018 (0x0014 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FFieldSetupWave
{
	class TArray<struct FFieldSpawnInfoPair>           SpawnList;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            MaxWaveLoops;                                  // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0014 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.GameEvent_Tutorial_TA.DifficultyInfo
// Size: 0x0028
struct FDifficultyInfo
{
	class TArray<struct FFieldSetupWave>               FieldSetupList;                                // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            TotalGameEventRounds;                          // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            TotalGameEventRoundsToWin;                     // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              ResetCheckTime;                                // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              ResetCheckTimeAfterBallTouch;                  // 0x001C (0x0004) [0x0000000000000000]               
	float                                              MinBallVelocityForDestroy;                     // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              BallStartTime;                                 // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.MaxActorsGroup_TA.MaxActorCallback
// Size: 0x0030
struct FMaxActorCallback
{
	class AActor*                                      Actor;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<struct FScriptDelegate>               EnabledDelegates;                              // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               DisabledDelegates;                             // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bEnabled : 1;                                  // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Distance;                                      // 0x002C (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_BlueprintGarage_TA.BlueprintPreviewProduct
// Size: 0x0020
struct FBlueprintPreviewProduct
{
	int32_t                                            BlueprintProductID;                            // 0x0000 (0x0004) [0x0001000000000000]               
	struct FProductHashID                              BlueprintHashID;                               // 0x0004 (0x0004) [0x0001000000000000]               
	class UOnlineProduct_TA*                           OnlineProduct;                                 // 0x0008 (0x0008) [0x0001000000000000]               
	class TArray<struct FProductHashID>                PossibleHashIDsForThisProduct;                 // 0x0010 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxData_CarRumble_TA.RumblePickupData
// Size: 0x0030
struct FRumblePickupData
{
	class UTexture2D*                                  ActiveIcon;                                    // 0x0000 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	class UTexture2D*                                  InactiveIcon;                                  // 0x0008 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	class FString                                      PickupName;                                    // 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	int32_t                                            CooldownSeconds;                               // 0x0020 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          UnknownData00[0x4];                            // 0x0024 (0x0004) MISSED OFFSET
	class ASpecialPickup_TA*                           Item;                                          // 0x0028 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.RumblePickups_TA.PickupInfo_TA
// Size: 0x0020 (0x001C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FPickupInfo_TA
{
	class ASpecialPickup_TA*                           AvailablePickups[3];                           // 0x0000 (0x0018) [0x0000000000000000]               
	uint32_t                                           bItemsArePreview : 1;                          // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x001C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.GFxData_Clubs_TA.GFxSeasonBadgesData
// Size: 0x0008 (0x0007 PropertySize + 0x0001 padding to satisfy MinAlignment of 4)
struct FGFxSeasonBadgesData
{
	int32_t                                            Season;                                        // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                            AssistBadgeSeasonTier;                         // 0x0004 (0x0001) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                            GoalBadgeSeasonTier;                           // 0x0005 (0x0001) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                            SaveBadgeSeasonTier;                           // 0x0006 (0x0001) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          MinAlignmentPadding[0x1];                      // 0x0007 (0x0001) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.GFxData_Clubs_TA.GFxClubSeasonStatMilestoneData
// Size: 0x0008
struct FGFxClubSeasonStatMilestoneData
{
	int32_t                                            MilestoneStatValue;                            // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            MilestoneSize;                                 // 0x0004 (0x0004) [0x0000000040000000] (CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_Clubs_TA.GFxClubSeasonMilestoneData
// Size: 0x0028
struct FGFxClubSeasonMilestoneData
{
	class FString                                      TitleText;                                     // 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	struct FColor                                      TitleColor;                                    // 0x0010 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	struct FColor                                      TitleGlowColor;                                // 0x0014 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	class TArray<struct FGFxClubSeasonStatMilestoneData> Stats;                                         // 0x0018 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_Clubs_TA.GFxClubStatData
// Size: 0x0030
struct FGFxClubStatData
{
	class FString                                      Id;                                            // 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      Name;                                          // 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      DisplayValue;                                  // 0x0020 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_Clubs_TA.GFxClubActionData
// Size: 0x0018
struct FGFxClubActionData
{
	class FString                                      LocalizedName;                                 // 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	uint8_t                                            ClubAction;                                    // 0x0010 (0x0001) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          UnknownData00[0x3];                            // 0x0011 (0x0003) MISSED OFFSET
	int32_t                                            Priority;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_ClubServerBrowser_TA.GFxClubServer
// Size: 0x0018
struct FGFxClubServer
{
	class UClubServerResult_X*                         Server;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      ServerName;                                    // 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_ContainerDrops_TA.ContainerInfo
// Size: 0x0018
struct FContainerInfo
{
	int32_t                                            SeriesID;                                      // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            ProductID;                                     // 0x0004 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	class FString                                      PossibleContents;                              // 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
};

// ScriptStruct TAGame.RPC_MicroTransactions_GetContainerDropTable_TA.RPCContainerDropTable
// Size: 0x0018
struct FRPCContainerDropTable
{
	int32_t                                            SeriesID;                                      // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            ProductID;                                     // 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
	class TArray<struct FOnlineProductData>            Drops;                                         // 0x0008 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxData_Controls_TA.LocalizedBindingCategory
// Size: 0x0028
struct FLocalizedBindingCategory
{
	class FName                                        Category;                                      // 0x0000 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	class FString                                      Label;                                         // 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      Description;                                   // 0x0018 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_Controls_TA.LocalizedAction
// 0x0024 (0x0038 - 0x005C)
struct FLocalizedAction : FBindingAction
{
	class FString                                      Label;                                         // 0x0038 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      Description;                                   // 0x0048 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	uint32_t                                           bRebindable : 1;                               // 0x0058 (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x005C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.GFxData_Controls_TA.UIPlayerBinding
// 0x0014 (0x002C - 0x0040)
struct FUIPlayerBinding : FPlayerBinding
{
	uint8_t                                          UnknownData00[0x4];                            // 0x002C (0x0004) MISSED OFFSET
	class FString                                      UIKey;                                         // 0x0030 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_Credits_TA.LocalizedNameData
// Size: 0x0020
struct FLocalizedNameData
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Position;                                      // 0x0010 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxData_Credits_TA.LocalizedDepartmentData
// Size: 0x0020
struct FLocalizedDepartmentData
{
	class FString                                      DepartmentTitle;                               // 0x0000 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class TArray<struct FLocalizedNameData>            Names;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxData_Credits_TA.LocalizedPostCreditData
// Size: 0x0020
struct FLocalizedPostCreditData
{
	class TArray<class FString>                        Lines;                                         // 0x0000 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class TArray<uint8_t>                              Platforms;                                     // 0x0010 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxData_Credits_TA.DepartmentData
// Size: 0x0030
struct FDepartmentData
{
	class FString                                      DepartmentTitle;                               // 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      Name;                                          // 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      Position;                                      // 0x0020 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_Credits_TA.PostCreditData
// Size: 0x0040
struct FPostCreditData
{
	class FString                                      Line0;                                         // 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      Line1;                                         // 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      Line2;                                         // 0x0020 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      Line3;                                         // 0x0030 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_CrumbTrails_TA.CrumbTrailName
// Size: 0x0008
struct FCrumbTrailName
{
	class FName                                        CrumbName;                                     // 0x0000 (0x0008) [0x0001000040000000] (CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_CustomTeams_TA.GFxCustomTeamSettings
// Size: 0x0018
struct FGFxCustomTeamSettings
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	int32_t                                            TeamColorID;                                   // 0x0010 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            CustomColorID;                                 // 0x0014 (0x0004) [0x0000000040000000] (CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_DLC_TA.GFxDLCData
// Size: 0x0060
struct FGFxDLCData
{
	class FString                                      PackName;                                      // 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FName                                        Id;                                            // 0x0010 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            ProductID;                                     // 0x0018 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          UnknownData00[0x4];                            // 0x001C (0x0004) MISSED OFFSET
	class FString                                      SubItems;                                      // 0x0020 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      Price;                                         // 0x0030 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      DiscountPrice;                                 // 0x0040 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	int32_t                                            DiscountPercentage;                            // 0x0050 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            LabelSlotIndex;                                // 0x0054 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint32_t                                           bUnlocked : 1;                                 // 0x0058 (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
	uint32_t                                           bIsNew : 1;                                    // 0x0058 (0x0004) [0x0000000040000000] [0x00000002] (CPF_DataBinding)
	int32_t                                            PurchaseTime;                                  // 0x005C (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct TAGame.GFxData_EngagementEventsConfig_TA.NotificationStatus
// Size: 0x0010
struct FNotificationStatus
{
	class TArray<uint32_t>                             bShow;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.NotificationSave_TA.EngagementEventNotificationData
// Size: 0x0010
struct FEngagementEventNotificationData
{
	uint32_t                                           bStartNotificationShown : 1;                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	uint64_t                                           EpochTimeStartForNotificationShown;            // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_FreeToPlayRewards_TA.CompensationItem
// Size: 0x0004
struct FCompensationItem
{
	struct FProductHashID                              HashID;                                        // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_Garage_TA.GarageTeam
// Size: 0x0020
struct FGarageTeam
{
	class FString                                      Label;                                         // 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	int32_t                                            TeamColorID;                                   // 0x0010 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            CustomColorID;                                 // 0x0014 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	struct FProductHashID                              TeamFinishHashID;                              // 0x0018 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	struct FProductHashID                              CustomFinishHashID;                            // 0x001C (0x0004) [0x0000000040000000] (CPF_DataBinding)
};

// ScriptStruct TAGame.LeaderboardsConfig_TA.LeaderboardRequestInfo
// Size: 0x0030
struct FLeaderboardRequestInfo
{
	class FString                                      Label;                                         // 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      RequestName;                                   // 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      ImageName;                                     // 0x0020 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_LoadoutSets_TA.GFxLoadoutSet
// Size: 0x0018
struct FGFxLoadoutSet
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	int32_t                                            Index;                                         // 0x0010 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint32_t                                           bEquipped : 1;                                 // 0x0014 (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_Map_TA.GFxMapData
// Size: 0x0038 (0x0034 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FGFxMapData
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	class FString                                      FriendlyName;                                  // 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class UTexture2D*                                  Thumbnail;                                     // 0x0018 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	class UTexture2D*                                  LargeImage;                                    // 0x0020 (0x0008) [0x0000000000000000]               
	class UMapData_TA*                                 Data;                                          // 0x0028 (0x0008) [0x0000000000000000]               
	int32_t                                            GameMode;                                      // 0x0030 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0034 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.GFxData_MapPrefs_TA.GFxPlaylistType
// Size: 0x0018
struct FGFxPlaylistType
{
	class FName                                        PlaylistTypeID;                                // 0x0000 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	class FString                                      Label;                                         // 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_MapPrefs_TA.GFxMapType
// Size: 0x0020
struct FGFxMapType
{
	class FName                                        MapTypeID;                                     // 0x0000 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	class FString                                      Label;                                         // 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class UMapSet_TA*                                  MapSet;                                        // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_MapPrefs_TA.GFxMapPlaylist
// Size: 0x0030 (0x002C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FGFxMapPlaylist
{
	class FName                                        PlaylistId;                                    // 0x0000 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	class FName                                        PlaylistTypeID;                                // 0x0008 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	class FString                                      Label;                                         // 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	int32_t                                            LikesRemaining;                                // 0x0020 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            DislikesRemaining;                             // 0x0024 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint32_t                                           bOverrideGlobal : 1;                           // 0x0028 (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x002C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.GFxData_MapPrefs_TA.GFxMapPreference
// Size: 0x0038 (0x0031 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FGFxMapPreference
{
	class FName                                        MapID;                                         // 0x0000 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	class FName                                        MapTypeID;                                     // 0x0008 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	class FName                                        PlaylistId;                                    // 0x0010 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	class FString                                      Label;                                         // 0x0018 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class UTexture2D*                                  Thumbnail;                                     // 0x0028 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                            Preference;                                    // 0x0030 (0x0001) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0031 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.GFxData_MapSelection_TA.GFxMapSelectionData
// Size: 0x000C
struct FGFxMapSelectionData
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	uint32_t                                           bSelected : 1;                                 // 0x0008 (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_Regions_TA.GFxRegion
// Size: 0x0028 (0x0024 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FGFxRegion
{
	class FString                                      Id;                                            // 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      Name;                                          // 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	uint32_t                                           bSelected : 1;                                 // 0x0020 (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0024 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.GFxData_Matchmaking_TA.MessageUpdate
// Size: 0x0018
struct FMessageUpdate
{
	int32_t                                            DelayFromStart;                                // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      MessageKey;                                    // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxData_MenuSequence_TA.MenuSequencePair
// Size: 0x0010
struct FMenuSequencePair
{
	class FName                                        MenuSequence;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        MenuID;                                        // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_MiniScoreboard_TA.ScoreIndex
// Size: 0x0068 (0x0064 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FScoreIndex
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0001000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	int32_t                                            Place;                                         // 0x0048 (0x0004) [0x0001000040000000] (CPF_DataBinding)
	int32_t                                            Score;                                         // 0x004C (0x0004) [0x0001000040000000] (CPF_DataBinding)
	class FString                                      PlayerName;                                    // 0x0050 (0x0010) [0x0001000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	uint32_t                                           bOwningPlayer : 1;                             // 0x0060 (0x0004) [0x0001000040000000] [0x00000001] (CPF_DataBinding)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0064 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.MTXGarageUtils_TA.CartInfo
// Size: 0x0008
struct FCartInfo
{
	int32_t                                            CatalogID;                                     // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Count;                                         // 0x0004 (0x0004) [0x0000000040000000] (CPF_DataBinding)
};

// ScriptStruct TAGame.RPC_MicroTransactions_GetCatalog_TA.MTCatalogInfo
// Size: 0x00A8
struct FMTCatalogInfo
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      Title;                                         // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Description;                                   // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ImageURL;                                      // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      TabTitle;                                      // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PriceDescription;                              // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FOnlineProductData>            Items;                                         // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FCurrency>                     Currencies;                                    // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PlatformProductID;                             // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Category;                                      // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Price;                                         // 0x0098 (0x0004) [0x0000000000000000]               
	int32_t                                            OriginalPrice;                                 // 0x009C (0x0004) [0x0000000000000000]               
	int32_t                                            DiscountPercentage;                            // 0x00A0 (0x0004) [0x0000000000000000]               
	uint32_t                                           bIsOwned : 1;                                  // 0x00A4 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.RPC_MicroTransactions_StartPurchase_TA.MTCartItem
// Size: 0x0008
struct FMTCartItem
{
	int32_t                                            CatalogID;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Count;                                         // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.MusicTheme_TA.PlaylistTrack
// Size: 0x0010
struct FPlaylistTrack
{
	class UAkSoundCue*                                 Track;                                         // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UTexture*                                    Icon;                                          // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.MusicTheme_TA.PlaylistTitleTrack
// 0x0004 (0x0010 - 0x0014)
struct FPlaylistTitleTrack : FPlaylistTrack
{
	float                                              StartupLogoDisplayDurationMS;                  // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0014 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.MusicPlayerSave_TA.PlaylistState
// Size: 0x000C
struct FPlaylistState
{
	class FName                                        Playlist;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bEnabled : 1;                                  // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.GFxData_OnlineMatchStatus_TA.MatchmakingMessage
// Size: 0x0018 (0x0011 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FMatchmakingMessage
{
	class FString                                      Message;                                       // 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	uint8_t                                            MessageType;                                   // 0x0010 (0x0001) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0011 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.GFxData_Party_TA.GFxPartyMember
// Size: 0x0088 (0x0084 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FGFxPartyMember
{
	struct FUniqueNetId                                PersonaId;                                     // 0x0000 (0x0048) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      PlayerName;                                    // 0x0048 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      ProfileId;                                     // 0x0058 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class UTexture*                                    PlayerAvatarTexture;                           // 0x0068 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            XpLevel;                                       // 0x0070 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint32_t                                           bCompletedChallenges : 1;                      // 0x0074 (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
	uint32_t                                           bLegacyPlayer : 1;                             // 0x0074 (0x0004) [0x0000000040000000] [0x00000002] (CPF_DataBinding)
	uint32_t                                           bGuestAccount : 1;                             // 0x0074 (0x0004) [0x0000000040000000] [0x00000004] (CPF_DataBinding)
	uint64_t                                           ClubID;                                        // 0x0078 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	uint32_t                                           bSplitScreen : 1;                              // 0x0080 (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
	uint32_t                                           bLocalSplitScreen : 1;                         // 0x0080 (0x0004) [0x0000000040000000] [0x00000002] (CPF_DataBinding)
	uint32_t                                           bHasProfile : 1;                               // 0x0080 (0x0004) [0x0000000040000000] [0x00000004] (CPF_DataBinding)
	uint32_t                                           bPartyLeader : 1;                              // 0x0080 (0x0004) [0x0000000040000000] [0x00000008] (CPF_DataBinding)
	uint32_t                                           bIsPlayerInMatch : 1;                          // 0x0080 (0x0004) [0x0000000040000000] [0x00000010] (CPF_DataBinding)
	uint32_t                                           bPlayerCanTrade : 1;                           // 0x0080 (0x0004) [0x0001000040000000] [0x00000020] (CPF_DataBinding)
	uint32_t                                           bIsPlayerTrading : 1;                          // 0x0080 (0x0004) [0x0001000040000000] [0x00000040] (CPF_DataBinding)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0084 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.GFxData_PlayerAvatarBorderPreview_TA.GFxPlayerAvatarBorderRef
// Size: 0x0010
struct FGFxPlayerAvatarBorderRef
{
	struct FProductHashID                              HashID;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class UGFxData_PlayerAvatarBorder_TA*              PlayerAvatarBorder;                            // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_PlayerAvatarPreview_TA.GFxPlayerAvatarRef
// Size: 0x0010
struct FGFxPlayerAvatarRef
{
	struct FProductHashID                              HashID;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class UGFxData_PlayerAvatar_TA*                    PlayerAvatar;                                  // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_PlayerBanners_TA.GFxPlayerBannerRef
// Size: 0x0010
struct FGFxPlayerBannerRef
{
	struct FProductHashID                              HashID;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class UGFxData_PlayerBanner_TA*                    PlayerBanner;                                  // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.PRI_TA.ScoreboardStat
// Size: 0x000C
struct FScoreboardStat
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            Value;                                         // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.PRI_TA.StatCooldown
// Size: 0x0010 (0x000C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FStatCooldown
{
	class UStatEvent_TA*                               Stat;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              UnlockWorldTime;                               // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x000C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.GFxData_Products_TA.ProductStatInfo
// Size: 0x0040
struct FProductStatInfo
{
	class FString                                      ProductStatLabel;                              // 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      ProductStatDescription;                        // 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      ProductStatValue;                              // 0x0020 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      CertifiedStatLabel;                            // 0x0030 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_QuickChatBindings_TA.LocalizedQuickChat
// Size: 0x0028 (0x0021 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FLocalizedQuickChat
{
	class FString                                      MessageId;                                     // 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      Message;                                       // 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	uint8_t                                            QuickChatState;                                // 0x0020 (0x0001) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0021 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.GFxData_QuickChatBindings_TA.LocalizedQuickChatBinding
// Size: 0x0038
struct FLocalizedQuickChatBinding
{
	class FString                                      MessageId;                                     // 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      Message;                                       // 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	int32_t                                            Group;                                         // 0x0020 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          UnknownData00[0x4];                            // 0x0024 (0x0004) MISSED OFFSET
	class FString                                      Action;                                        // 0x0028 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
};

// ScriptStruct TAGame.Replay_Soccar_TA.ReplayPlayerStats
// Size: 0x0088 (0x0084 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FReplayPlayerStats
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Name;                                          // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            Platform;                                      // 0x0058 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x7];                            // 0x0059 (0x0007) MISSED OFFSET
	uint64_t                                           OnlineID;                                      // 0x0060 (0x0008) [0x0000000000000000]               
	int32_t                                            Team;                                          // 0x0068 (0x0004) [0x0000000000000000]               
	int32_t                                            Score;                                         // 0x006C (0x0004) [0x0000000000000000]               
	int32_t                                            Goals;                                         // 0x0070 (0x0004) [0x0000000000000000]               
	int32_t                                            Assists;                                       // 0x0074 (0x0004) [0x0000000000000000]               
	int32_t                                            Saves;                                         // 0x0078 (0x0004) [0x0000000000000000]               
	int32_t                                            Shots;                                         // 0x007C (0x0004) [0x0000000000000000]               
	uint32_t                                           bBot : 1;                                      // 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0084 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.GFxData_ReplayViewer_TA.LocalizedCameraMode
// Size: 0x0030
struct FLocalizedCameraMode
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	uint32_t                                           bDisabled : 1;                                 // 0x0008 (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
	uint8_t                                          UnknownData00[0x4];                            // 0x000C (0x0004) MISSED OFFSET
	class FString                                      Label;                                         // 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      Description;                                   // 0x0020 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
};

// ScriptStruct TAGame.Replay_TA.TimelineKeyframe
// Size: 0x000C
struct FTimelineKeyframe
{
	class FName                                        Type;                                          // 0x0000 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            frame;                                         // 0x0008 (0x0004) [0x0000000040000000] (CPF_DataBinding)
};

// ScriptStruct TAGame.RewardDrop_TA.GFxLevelThreshold
// Size: 0x0004
struct FGFxLevelThreshold
{
	int32_t                                            TotalXP;                                       // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_RocketPass_TA.RocketPassReward
// Size: 0x0014
struct FRocketPassReward
{
	int32_t                                            CurrencyID;                                    // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	class FName                                        Name;                                          // 0x0004 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	float                                              Amount;                                        // 0x000C (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Tier;                                          // 0x0010 (0x0004) [0x0000000040000000] (CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_RocketPass_TA.RocketPassProduct
// Size: 0x000C (0x0009 PropertySize + 0x0003 padding to satisfy MinAlignment of 4)
struct FRocketPassProduct
{
	struct FProductHashID                              HashID;                                        // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Tier;                                          // 0x0004 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                            UnlockType;                                    // 0x0008 (0x0001) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x0009 (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.GFxData_RocketPass_TA.RocketPassXPReward
// 0x0000 (0x0014 - 0x0014)
struct FRocketPassXPReward : FRocketPassReward
{
};

// ScriptStruct TAGame.GFxData_RocketPass_TA.RocketPassCurrencyReward
// 0x0000 (0x0014 - 0x0014)
struct FRocketPassCurrencyReward : FRocketPassReward
{
};

// ScriptStruct TAGame.GFxData_Season_TA.SeasonWeek
// Size: 0x0004
struct FSeasonWeek
{
	uint32_t                                           bWinner : 1;                                   // 0x0000 (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
};

// ScriptStruct TAGame.ProductTemplate_TA.ProductReplacement2
// Size: 0x0018
struct FProductReplacement2
{
	class TArray<uint8_t>                              Platforms;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UProduct_TA*                                 Replacement;                                   // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_SeasonMode_TA.GFxLogoData
// Size: 0x0030 (0x002C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FGFxLogoData
{
	class FName                                        AssetName;                                     // 0x0000 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	class UTexture*                                    Logo;                                          // 0x0008 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            TeamColor;                                     // 0x0010 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            CustomColor;                                   // 0x0014 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	class FString                                      DefaultTeamName;                               // 0x0018 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	uint32_t                                           bIsBotTeam : 1;                                // 0x0028 (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x002C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.GFxData_SeasonMode_TA.GFxBotData
// Size: 0x0020
struct FGFxBotData
{
	class FString                                      PlayerName;                                    // 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      Id;                                            // 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_Settings_TA.BindingPreset
// Size: 0x0018
struct FBindingPreset
{
	class FName                                        PresetName;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      DisplayName;                                   // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.LoadedMtxCatalog_TA.LoadedMtxCatalog
// Size: 0x0020 (0x0019 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FLoadedMtxCatalog
{
	int32_t                                            CatalogID;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      Label;                                         // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            Category;                                      // 0x0018 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0019 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.ShopTabs_TA.ShopTab
// Size: 0x0018
struct FShopTab
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          UnknownData00[0x3];                            // 0x0001 (0x0003) MISSED OFFSET
	int32_t                                            Index;                                         // 0x0004 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	class FString                                      Label;                                         // 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_Shops_TA.ShopsMapEntry
// Size: 0x0010
struct FShopsMapEntry
{
	int32_t                                            ShopIndex;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class UGFxData_ShopCatalogue_TA*                   Catalogue;                                     // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.RPC_GetSpecialEventCurrencyRewards_TA.SpecialEventReward
// Size: 0x0040 (0x003C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FSpecialEventReward
{
	int32_t                                            StoreProductID;                                // 0x0000 (0x0004) [0x0001000000000000]               
	int32_t                                            ProductID;                                     // 0x0004 (0x0004) [0x0001000000000000]               
	int32_t                                            SeriesID;                                      // 0x0008 (0x0004) [0x0001000000000000]               
	int32_t                                            Cost;                                          // 0x000C (0x0004) [0x0001000000000000]               
	int32_t                                            CurrencyID;                                    // 0x0010 (0x0004) [0x0001000000000000]               
	int32_t                                            MaxQuantityPerPlayer;                          // 0x0014 (0x0004) [0x0001000000000000]               
	int32_t                                            PurchasedQuantity;                             // 0x0018 (0x0004) [0x0001000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x001C (0x0004) MISSED OFFSET
	class TArray<struct FOnlineProductAttribute>       Attributes;                                    // 0x0020 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	struct FXPRewardData                               XPReward;                                      // 0x0030 (0x000C) [0x0001000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x003C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.RPC_GetSpecialEventCurrencyRewards_TA.SpecialEventStore
// Size: 0x0018
struct FSpecialEventStore
{
	int32_t                                            EventID;                                       // 0x0000 (0x0004) [0x0001000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class TArray<struct FSpecialEventReward>           Rewards;                                       // 0x0008 (0x0010) [0x0001000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxData_SpecialEventStore_TA.GFxSpecialEventReward
// Size: 0x0020
struct FGFxSpecialEventReward
{
	int32_t                                            ProductID;                                     // 0x0000 (0x0004) [0x0001000000000000]               
	struct FProductHashID                              HashID;                                        // 0x0004 (0x0004) [0x0001000040000000] (CPF_DataBinding)
	int32_t                                            StoreProductID;                                // 0x0008 (0x0004) [0x0001000040000000] (CPF_DataBinding)
	int32_t                                            Cost;                                          // 0x000C (0x0004) [0x0001000040000000] (CPF_DataBinding)
	int32_t                                            Remaining;                                     // 0x0010 (0x0004) [0x0001000040000000] (CPF_DataBinding)
	struct FXPRewardData                               XPReward;                                      // 0x0014 (0x000C) [0x0001000040000000] (CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_Stats_TA.GFxStatData
// Size: 0x0050
struct FGFxStatData
{
	class FString                                      Id;                                            // 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      Name;                                          // 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      DisplayValue;                                  // 0x0020 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class UTexture*                                    Texture;                                       // 0x0030 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	class FString                                      Description;                                   // 0x0038 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class UClass*                                      DisplayProductStatClass;                       // 0x0048 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_TextChatChannel_TA.CachedChatMessage
// Size: 0x0108 (0x0104 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FCachedChatMessage
{
	struct FGFxChatMessage                             ChatMessage;                                   // 0x0000 (0x0098) [0x0001000000400000] (CPF_NeedCtorLink)
	struct FSignedMessagePacket                        MessagePacket;                                 // 0x0098 (0x0048) [0x0001000000400000] (CPF_NeedCtorLink)
	struct FPlayerMessageInfo                          PlayerInfo;                                    // 0x00E0 (0x0020) [0x0001000000400000] (CPF_NeedCtorLink)
	int32_t                                            InternalId;                                    // 0x0100 (0x0004) [0x0001000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0104 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.GFxData_TourBracketMatchTeamDetails_TA.TeamGameStats
// Size: 0x0004
struct FTeamGameStats
{
	int32_t                                            Goals;                                         // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_TourPlatforms_TA.GFxTourPlatformGroup
// Size: 0x0028 (0x0024 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FGFxTourPlatformGroup
{
	class TArray<uint8_t>                              Platforms;                                     // 0x0000 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class FString                                      Label;                                         // 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	uint32_t                                           bSelected : 1;                                 // 0x0020 (0x0004) [0x0000000040000000] [0x00000001] (CPF_DataBinding)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0024 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.GFxData_TourSubscriptions_TA.SubscriptionInfo
// Size: 0x0008
struct FSubscriptionInfo
{
	uint64_t                                           Id;                                            // 0x0000 (0x0008) [0x0000000040000000] (CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_Training_TA.UseAction
// Size: 0x0020
struct FUseAction
{
	class FString                                      ActionName;                                    // 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	class FString                                      LocalizedActionName;                           // 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
};

// ScriptStruct TAGame.TrainingEditorMetrics_TA.TrainingNavigationEvent
// Size: 0x0028 (0x0024 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FTrainingNavigationEvent
{
	uint64_t                                           TimeStamp;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            CommandUsed;                                   // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x0009 (0x0003) MISSED OFFSET
	int32_t                                            PrevPlaylistIndex;                             // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            NewPlaylistIndex;                              // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            PrevRoundNum;                                  // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            NewRoundNum;                                   // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            PrevShotAttempt;                               // 0x001C (0x0004) [0x0000000000000000]               
	uint32_t                                           bShuffle : 1;                                  // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0024 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.GFxData_TrainingModeBrowser_TA.FavoritedFileMetaData
// Size: 0x0028
struct FFavoritedFileMetaData
{
	class FString                                      Code;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint64_t                                           UpdatedAt;                                     // 0x0010 (0x0008) [0x0000000000000000]               
	class FString                                      Filename;                                      // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxData_TrainingModeBrowser_TA.CachedDownloadedFile
// Size: 0x0020
struct FCachedDownloadedFile
{
	class FString                                      Filename;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Code;                                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxData_TrainingModeBrowser_TA.SearchCacheData
// Size: 0x0018
struct FSearchCacheData
{
	float                                              TimeoutTime;                                   // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class TArray<class UTrainingEditorData_TA*>        TrainingModes;                                 // 0x0008 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.RPC_TrainingEditor_ListPlayerTrainingDataTimestamp_TA.CodeTimePair
// Size: 0x0018
struct FCodeTimePair
{
	class FString                                      Code;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint64_t                                           UpdatedAt;                                     // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_TrainingModeConstants_TA.TrainingModeDifficulty
// Size: 0x0004 (0x0001 PropertySize + 0x0003 padding to satisfy MinAlignment of 4)
struct FTrainingModeDifficulty
{
	uint8_t                                            Difficulty;                                    // 0x0000 (0x0001) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x0001 (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.GFxData_TrainingModeConstants_TA.TrainingModeType
// Size: 0x0004 (0x0001 PropertySize + 0x0003 padding to satisfy MinAlignment of 4)
struct FTrainingModeType
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x0001 (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.GFxData_TrainingModeConstants_TA.TrainingModeTag
// Size: 0x0004 (0x0001 PropertySize + 0x0003 padding to satisfy MinAlignment of 4)
struct FTrainingModeTag
{
	uint8_t                                            Tag;                                           // 0x0000 (0x0001) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x0001 (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.GFxData_UserBugReport_TA.GFxUserBugReportCategory
// Size: 0x0020
struct FGFxUserBugReportCategory
{
	class FName                                        Id;                                            // 0x0000 (0x0008) [0x0001000040000000] (CPF_DataBinding)
	uint8_t                                            Type;                                          // 0x0008 (0x0001) [0x0001000040000000] (CPF_DataBinding)
	uint8_t                                          UnknownData00[0x7];                            // 0x0009 (0x0007) MISSED OFFSET
	class FString                                      Label;                                         // 0x0010 (0x0010) [0x0001000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
};

// ScriptStruct TAGame.GFxEngine_TA.SoundStateItem
// Size: 0x0018 (0x0011 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FSoundStateItem
{
	class FName                                        StateName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	class UGFxShell_X*                                 Shell;                                         // 0x0008 (0x0008) [0x0000000000000000]               
	uint8_t                                            Priority;                                      // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0011 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.HUDBase_TA.ChatMessage
// Size: 0x0090
struct FChatMessage
{
	class APlayerReplicationInfo*                      PRI;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	class ATeam_TA*                                    Team;                                          // 0x0008 (0x0008) [0x0000000000000000]               
	class FString                                      PlayerName;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Message;                                       // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            ChatChannel;                                   // 0x0030 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x0031 (0x0003) MISSED OFFSET
	uint32_t                                           bPreset : 1;                                   // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FUniqueNetId                                Recipient;                                     // 0x0038 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      TimeStamp;                                     // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxHUD_TA.ScreenLocation
// Size: 0x0010
struct FScreenLocation
{
	struct FVector                                     ScreenPos;                                     // 0x0000 (0x000C) [0x0000000000000000]               
	uint32_t                                           bOffScreen : 1;                                // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.Replay_TA.ReplayActorChannel
// Size: 0x0040
struct FReplayActorChannel
{
	class AActor*                                      Actor;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	class UClass*                                      ActorClass;                                    // 0x0008 (0x0008) [0x0000000000000000]               
	class FName                                        actorName;                                     // 0x0010 (0x0008) [0x0000000000000000]               
	class TArray<uint8_t>                              Recent;                                        // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              StillDirty;                                    // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              CloseTime;                                     // 0x0038 (0x0004) [0x0000000000000000]               
	uint32_t                                           bNetInitial : 1;                               // 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPlaybackPersistent : 1;                       // 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TAGame.Replay_TA.ReplayLogItem
// Size: 0x0028
struct FReplayLogItem
{
	int32_t                                            frame;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      PlayerName;                                    // 0x0008 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      Text;                                          // 0x0018 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.Replay_TA.ReplayKeyframe
// Size: 0x000C
struct FReplayKeyframe
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            frame;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Position;                                      // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.ReplayDirector_TA.ReplayScoreData
// Size: 0x0020 (0x0019 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FReplayScoreData
{
	class APRI_TA*                                     ScoredBy;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class APRI_TA*                                     AssistedBy;                                    // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              Speed;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              Time;                                          // 0x0014 (0x0004) [0x0000000000000000]               
	uint8_t                                            ScoreTeam;                                     // 0x0018 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0019 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.ImpactEffectsComponent_TA.CollisionEffectData
// Size: 0x0058
struct FCollisionEffectData
{
	class UPhysicalMaterial*                           PhysMat;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	class UPhysicalMaterialProperty_TA*                PhysMatProp;                                   // 0x0008 (0x0008) [0x0000000000000000]               
	struct FEffectsMapping                             ImpactEffects;                                 // 0x0010 (0x0010) [0x0000000000000000]               
	struct FVector                                     HitLocation;                                   // 0x0020 (0x000C) [0x0000000000000000]               
	struct FVector                                     HitNormal;                                     // 0x002C (0x000C) [0x0000000000000000]               
	struct FVector                                     Momentum;                                      // 0x0038 (0x000C) [0x0000000000000000]               
	float                                              ImpactMomentum;                                // 0x0044 (0x0004) [0x0000000000000000]               
	float                                              SlideMomentum;                                 // 0x0048 (0x0004) [0x0000000000000000]               
	int32_t                                            PhysicsFrame;                                  // 0x004C (0x0004) [0x0000000000000000]               
	class AActor*                                      HitActor;                                      // 0x0050 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.InMapScoreboard_TA.ScoreboardMaterialOverride
// Size: 0x0038
struct FScoreboardMaterialOverride
{
	class UMaterialInstanceConstant*                   MaterialInstance;                              // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MaterialIndex;                                 // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x4];                            // 0x000C (0x0004) MISSED OFFSET
	struct FInterpCurveFloat                           MICValueOverrideCurve;                         // 0x0010 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FName                                        ParamToOverride;                               // 0x0028 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInstanceConstant*                   MIC;                                           // 0x0030 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct TAGame.PhysicsConfig_TA.SimTimeScaleSettings
// Size: 0x0004
struct FSimTimeScaleSettings
{
	float                                              FixedAdjustSimTimeRate;                        // 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.NetworkInputBuffer_TA.ClientPacketData
// Size: 0x0030
struct FClientPacketData
{
	float                                              TimeStamp;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     CameraLoc;                                     // 0x0004 (0x000C) [0x0000000000000000]               
	struct FRotator                                    CameraRot;                                     // 0x0010 (0x000C) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x001C (0x0004) MISSED OFFSET
	class TArray<struct FClientFrameData>              Frames;                                        // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.NetworkInputBuffer_TA.InputBufferStats
// Size: 0x0008 (0x0005 PropertySize + 0x0003 padding to satisfy MinAlignment of 4)
struct FInputBufferStats
{
	uint8_t                                            OverBufferFrames;                              // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            UnderBufferFrames;                             // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                            InputBufferLow;                                // 0x0002 (0x0001) [0x0000000000000000]               
	uint8_t                                            InputBufferHigh;                               // 0x0003 (0x0001) [0x0000000000000000]               
	uint8_t                                            InputBufferTarget;                             // 0x0004 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x0005 (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.JiggleHitHandler_TA.JiggleCarData
// Size: 0x0028 (0x0025 PropertySize + 0x0003 padding to satisfy MinAlignment of 8)
struct FJiggleCarData
{
	class AVehicle_TA*                                 HitVehicle;                                    // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     JiggleAxis;                                    // 0x0008 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     JiggleStartLocation;                           // 0x0014 (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              JiggleStartTime;                               // 0x0020 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            OriginalPhysics;                               // 0x0024 (0x0001) [0x0000000000002000] (CPF_Transient)
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x0025 (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.K3SUserPermissions_TA.K3SMeta
// Size: 0x0020
struct FK3SMeta
{
	class FString                                      RequestID;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      TimeStamp;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ListenServer_TA.LoadingPlayer
// Size: 0x0050
struct FLoadingPlayer
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            NumPlayers;                                    // 0x0048 (0x0004) [0x0000000000000000]               
	float                                              TimeoutTime;                                   // 0x004C (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.LoadoutSequencer_TA.SequenceData
// Size: 0x0010
struct FSequenceData
{
	class UProductSlot_TA*                             Slot;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              AnimDelay;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bAssetLoaded : 1;                              // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.MapDataLoader_TA.MapSelectorPair
// Size: 0x0010
struct FMapSelectorPair
{
	class UMapSet_TA*                                  MapSet;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class UMapSelector_TA*                             Selector;                                      // 0x0008 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct TAGame.MapDataLoader_TA.MapImageLoadRequest
// Size: 0x0038
struct FMapImageLoadRequest
{
	class UMapData_TA*                                 MapData;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        PackageName;                                   // 0x0008 (0x0008) [0x0000000000000000]               
	class FString                                      AssetPath;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                      // 0x0020 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.MapPrefsMetrics_TA.MapPrefsMetric
// Size: 0x0028
struct FMapPrefsMetric
{
	int32_t                                            Playlist;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class TArray<class FName>                          Likes;                                         // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FName>                          Dislikes;                                      // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.MatchCompleteMetrics_TA.MatchCompleteHistory
// Size: 0x0028 (0x0024 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FMatchCompleteHistory
{
	class FString                                      MatchGUID;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FUniqueNetId>                  Players;                                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              MatchCompleteTime;                             // 0x0020 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0024 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.MatchHistoryMetrics_TA.MatchPreviewData
// Size: 0x0020 (0x001C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FMatchPreviewData
{
	int32_t                                            Index;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      MatchGUID;                                     // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            TimesPreviewed;                                // 0x0018 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x001C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.MatchHistoryMetrics_TA.MatchHistoryChangeTabEvent
// Size: 0x0030
struct FMatchHistoryChangeTabEvent
{
	uint8_t                                            CurrentTab;                                    // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            NewTab;                                        // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x6];                            // 0x0002 (0x0006) MISSED OFFSET
	uint64_t                                           StartTimestamp;                                // 0x0008 (0x0008) [0x0000000000000000]               
	uint64_t                                           EndTimestamp;                                  // 0x0010 (0x0008) [0x0000000000000000]               
	uint8_t                                            NavigableButtonID;                             // 0x0018 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData01[0x7];                            // 0x0019 (0x0007) MISSED OFFSET
	class TArray<struct FMatchPreviewData>             MatchPreviews;                                 // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.MenuTreeNode_TA.NodePlatformAvailability
// Size: 0x0018
struct FNodePlatformAvailability
{
	uint32_t                                           bPlatformIncludeList : 1;                      // 0x0000 (0x0004) [0x0001000000000001] [0x00000001] (CPF_Edit)
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class TArray<uint8_t>                              Platforms;                                     // 0x0008 (0x0010) [0x0001000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.MenuTreePlaylistQueue_TA.ActivePlaylistQueueInfo
// Size: 0x0010
struct FActivePlaylistQueueInfo
{
	int32_t                                            PlaylistDataIndex;                             // 0x0000 (0x0004) [0x0001000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	uint64_t                                           StartTime;                                     // 0x0008 (0x0008) [0x0001000000000000]               
};

// ScriptStruct TAGame.MergePartyEvent_TA.MergePartyReplicatedData
// Size: 0x0240
struct FMergePartyReplicatedData
{
	struct FUniqueNetId                                LeaderID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                InviteeIDs[7];                                 // 0x0048 (0x01F8) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.MtxConfig_TA.CurrencyReplacement
// Size: 0x0020
struct FCurrencyReplacement
{
	class FString                                      CurrencyString;                                // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      SubstitutionString;                            // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.MusicUrlConfig_TA.MusicConfigTrack
// Size: 0x0018
struct FMusicConfigTrack
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FString                                      ExternalUrl;                                   // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.Mutator_Ball_TA.MapBallArcOverride
// Size: 0x0010
struct FMapBallArcOverride
{
	class UMapData_TA*                                 Map;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	class ABall_TA*                                    BallArchetype;                                 // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.Mutator_Freeplay_TA.RumbleItemIndex
// Size: 0x0010 (0x000C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FRumbleItemIndex
{
	class APlayerController_TA*                        PC;                                            // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            ItemIndex;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x000C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.NetMetricPlayerData_TA.NetBuckets
// Size: 0x0030 (0x002C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FNetBuckets
{
	class TArray<struct FNetBucketMetrics>             Data;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      StatName;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            BannedBucketIndex;                             // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              KickThresholdSeconds;                          // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              TotalBannedSeconds;                            // 0x0028 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x002C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.NetMetricsConfig_TA.NetBucketSetup
// Size: 0x0018
struct FNetBucketSetup
{
	class TArray<int32_t>                              MinPossibleValue;                              // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            BannedBucketIndex;                             // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              KickThresholdSeconds;                          // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.NetMetricPlayerDataExport_TA.NetBucketsExport
// Size: 0x0020
struct FNetBucketsExport
{
	class TArray<struct FNetBucketMetrics>             Data;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      StatName;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.NetworkConfig_TA.NetworkLimit
// Size: 0x0010
struct FNetworkLimit
{
	float                                              Min;                                           // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Max;                                           // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              OldMin;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              OldMax;                                        // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.PhysicsConfig_TA.ContinuousSimTimeScaleSettings
// Size: 0x0034
struct FContinuousSimTimeScaleSettings
{
	float                                              TimeDilations[5];                              // 0x0000 (0x0014) [0x0000000000000000]               
	int32_t                                            Inputs_Starved;                                // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            Inputs_Good;                                   // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            Inputs_Saturated;                              // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            Inputs_ExtremelySaturated;                     // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            Inputs_Max;                                    // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            ExtraBufferMax;                                // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              ExtraBufferHistorySeconds;                     // 0x002C (0x0004) [0x0000000000000000]               
	float                                              ExtraBufferUpdatePeriod;                       // 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.NetworkInputBuffer_STS_TA.SimTimeAdjustDebugData
// Size: 0x0008
struct FSimTimeAdjustDebugData
{
	float                                              TimeLastSimTimeAdjustStarted;                  // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            NumSimTimeAdjustFrames;                        // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.OnlineGamePlayerTitles_TA.CachedPlayerData
// Size: 0x0078
struct FCachedPlayerData
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FName>                          Titles;                                        // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              CacheTime;                                     // 0x0058 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x005C (0x0004) MISSED OFFSET
	class URPC_X*                                      RPC;                                           // 0x0060 (0x0008) [0x0000000000000000]               
	class TArray<struct FScriptDelegate>               Callbacks;                                     // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.OnlineGameReservations_TA.ReservationLoadout
// Size: 0x0058
struct FReservationLoadout
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              ProductIDs;                                    // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.OrbitHitHandler_TA.OrbitCarData
// Size: 0x0028
struct FOrbitCarData
{
	class AVehicle_TA*                                 CarHit;                                        // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     OrbitAxis;                                     // 0x0008 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     OrbitLocation;                                 // 0x0014 (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              RotationAngleRadians;                          // 0x0020 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bShouldOrbit : 1;                              // 0x0024 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
};

// ScriptStruct TAGame.OverrideMaterialsHitHandler_TA.SkeletalMeshMaterialCache
// Size: 0x0018
struct FSkeletalMeshMaterialCache
{
	class UMeshComponent*                              TargetMesh;                                    // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class TArray<class UMaterialInterface*>            Materials;                                     // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.PartyMessage_Loadout_TA.PartyMemberLoadoutMessage
// Size: 0x00A0 (0x009D PropertySize + 0x0003 padding to satisfy MinAlignment of 8)
struct FPartyMemberLoadoutMessage
{
	struct FUniqueNetId                                UniqueId;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FLoadoutData                                Loadout;                                       // 0x0048 (0x0040) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FOnlineProductData>            OnlineLoadoutData;                             // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            GaragePreviewTeam;                             // 0x0098 (0x0004) [0x0000000000000000]               
	uint8_t                                            SortWeight;                                    // 0x009C (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x009D (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.PlayerController_TA.CrosshairExtentInfo
// Size: 0x0010
struct FCrosshairExtentInfo
{
	struct FVector                                     Extent;                                        // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              minDot;                                        // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.PlayerController_TA.ChatSpamData
// Size: 0x0018
struct FChatSpamData
{
	float                                              RiseAmount;                                    // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RiseMultiplier;                                // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DecayRate;                                     // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxValue;                                      // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Value;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              LastChatTime;                                  // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.PlayerReportConfig_TA.PlayerReportReason
// Size: 0x0018
struct FPlayerReportReason
{
	int32_t                                            ReasonID;                                      // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      Reason;                                        // 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
};

// ScriptStruct TAGame.PremiumSkinSet_TA.PremiumSkinSetItem
// Size: 0x0008
struct FPremiumSkinSetItem
{
	class UPremiumSkin_TA*                             PremiumSkin;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.ProductAsset_TA.ProductReplacement
// Size: 0x0018
struct FProductReplacement
{
	class TArray<uint8_t>                              Platforms;                                     // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UProductAsset_TA*                            Replacement;                                   // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.ProductAsset_Body_TA.BoostAttachmentToggle
// Size: 0x0028
struct FBoostAttachmentToggle
{
	class FName                                        BoostAttachment;                               // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UFXActorEvent_X*>               AttachAny;                                     // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UFXActorEvent_X*>               DetachAny;                                     // 0x0018 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ProductAsset_Body_TA.TeamPaintFinish
// Size: 0x0010
struct FTeamPaintFinish
{
	class UProductAsset_PaintFinish_TA*                TeamFinish;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UProductAsset_PaintFinish_TA*                CustomFinish;                                  // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.ProductAsset_GoalExplosion_TA.IgnoredGoalRotations
// Size: 0x0004
struct FIgnoredGoalRotations
{
	uint32_t                                           bIgnorePitch : 1;                              // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bIgnoreYaw : 1;                                // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bIgnoreRoll : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
};

// ScriptStruct TAGame.ProductAssetLoader_TA.AssetLoadRequest
// Size: 0x0050
struct FAssetLoadRequest
{
	struct FAssetLoadResult                            Result;                                        // 0x0000 (0x0020) [0x0000000000000000]               
	class UProduct_TA*                                 Product;                                       // 0x0020 (0x0008) [0x0000000000000000]               
	int32_t                                            LoadOrder;                                     // 0x0028 (0x0004) [0x0000000000000000]               
	uint8_t                                            LoadState;                                     // 0x002C (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x002D (0x0003) MISSED OFFSET
	uint32_t                                           bIsThumbnailRequest : 1;                       // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          UnknownData01[0x4];                            // 0x0034 (0x0004) MISSED OFFSET
	struct FScriptDelegate                             OnLoadedCallback;                              // 0x0038 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ProductAttribute_InheritCarSetting_TA.InheritedParameter
// Size: 0x0010
struct FInheritedParameter
{
	class FName                                        ParentParameterName;                           // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        AssetParameterName;                            // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.ProductAttribute_SpecialEditionSettings_TA.SpecialEditionConfig
// Size: 0x0010
struct FSpecialEditionConfig
{
	class UProductSpecialEdition_TA*                   SpecialEdition;                                // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UProductAssetReference_TA*                   SpecialEditionProductAsset;                    // 0x0008 (0x0008) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
};

// ScriptStruct TAGame.ProductAttribute_SwapMICParameterValues_TA.MICSwapParameters
// Size: 0x0018
struct FMICSwapParameters
{
	class UMaterialInstanceConstant*                   MICToChange;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        FirstParameter;                                // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        SecondParameter;                               // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.RPC_ProductsDebugAddProducts_TA.AddProductsRequestData
// Size: 0x0020
struct FAddProductsRequestData
{
	int32_t                                            ProductID;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Count;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            SeriesID;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x000C (0x0004) MISSED OFFSET
	class TArray<struct FOnlineProductAttribute>       Attributes;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ProductMetrics_TA.PaintMetricsData
// Size: 0x0010
struct FPaintMetricsData
{
	uint8_t                                            TeamColorID;                                   // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x0001 (0x0003) MISSED OFFSET
	int32_t                                            TeamProductID;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	uint8_t                                            CustomColorID;                                 // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData01[0x3];                            // 0x0009 (0x0003) MISSED OFFSET
	int32_t                                            CustomProductID;                               // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.ProductMetrics_TA.ProductMetricsData
// Size: 0x0018
struct FProductMetricsData
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class TArray<struct FOnlineProductAttribute>       Attributes;                                    // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ProductOverride_SpecificMaterials_TA.MaterialAndMaterialOverride
// Size: 0x0010
struct FMaterialAndMaterialOverride
{
	class UMaterialInstanceConstant*                   MICToOverride;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInstanceConstant*                   MICTOOverrideWith;                             // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.ProductsConfig_TA.ReplacementProduct
// Size: 0x0050
struct FReplacementProduct
{
	int32_t                                            ProhibitedID;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           bShowForOwningClient : 1;                      // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FOnlineProductData                          Replacement;                                   // 0x0008 (0x0040) [0x0000000000400000] (CPF_NeedCtorLink)
	class UOnlineProduct_TA*                           ReplacementInstance;                           // 0x0048 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct TAGame.ProductsConfig_TA.SeriesGroup
// Size: 0x0018
struct FSeriesGroup
{
	int32_t                                            SeriesID;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class TArray<uint8_t>                              ExcludedQualities;                             // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ProductsConfig_TA.ProductTradeHoldOverride
// Size: 0x0028
struct FProductTradeHoldOverride
{
	int32_t                                            ProductID;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class TArray<uint8_t>                              TradeRestrictions;                             // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              DefaultRestrictions;                           // 0x0018 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ProductThumbnailQueue_TA.RenderThumbnailScene
// Size: 0x0038 (0x0034 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FRenderThumbnailScene
{
	class UProductThumbnail_TA*                        Thumbnail;                                     // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UProductAsset_TA*                            Asset;                                         // 0x0008 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UOnlineProduct_TA*                           OnlineProduct;                                 // 0x0010 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UThumbnailScene_TA*                          Scene;                                         // 0x0018 (0x0008) [0x0000000000000002] (CPF_Const)   
	int32_t                                            TextureWidth;                                  // 0x0020 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            TextureHeight;                                 // 0x0024 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            TeamID;                                        // 0x0028 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              NextRenderTime;                                // 0x002C (0x0004) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bBeingRendered : 1;                            // 0x0030 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bCanceled : 1;                                 // 0x0030 (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0034 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.ProductThumbnailQueue_TA.RenderThumbnailRequest
// Size: 0x0030
struct FRenderThumbnailRequest
{
	struct FProductThumbnailResult                     Result;                                        // 0x0000 (0x0018) [0x0000000000000002] (CPF_Const)   
	struct FScriptDelegate                             Callback;                                      // 0x0018 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.RBHistory_TA.RBPhysicsSnapshot
// Size: 0x0070
struct FRBPhysicsSnapshot
{
	struct FReplicatedRBState                          RBState;                                       // 0x0000 (0x0040) [0x0000000000000000]               
	struct FWorldContactData                           WorldContact;                                  // 0x0040 (0x0028) [0x0000000000000000]               
	class APhysicsVolume*                              PhysicsVolume;                                 // 0x0068 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.RBVehicleHistory_TA.RBVehicleSnapshot
// Size: 0x0178
struct FRBVehicleSnapshot
{
	struct FVehicleInputs                              Input;                                         // 0x0000 (0x0020) [0x0000000000000000]               
	struct FWheelContactData                           WheelContact0;                                 // 0x0020 (0x0050) [0x0000000000080000] (CPF_Component)
	struct FWheelContactData                           WheelContact1;                                 // 0x0070 (0x0050) [0x0000000000080000] (CPF_Component)
	struct FWheelContactData                           WheelContact2;                                 // 0x00C0 (0x0050) [0x0000000000080000] (CPF_Component)
	struct FWheelContactData                           WheelContact3;                                 // 0x0110 (0x0050) [0x0000000000080000] (CPF_Component)
	struct FCarInteractionData                         CarInteraction;                                // 0x0160 (0x0010) [0x0000000000000000]               
	float                                              OutputHandbrake;                               // 0x0170 (0x0004) [0x0000000000000000]               
	int32_t                                            LastHitBallFrame;                              // 0x0174 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.RBVehicleHistory_TA.CarComponentSnapshot
// Size: 0x000C (0x0009 PropertySize + 0x0003 padding to satisfy MinAlignment of 4)
struct FCarComponentSnapshot
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ActivityTime;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	uint8_t                                            ComponentData;                                 // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x3];                      // 0x0009 (0x0003) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.RBVehicleHistory_TA.CarComponentHistory
// Size: 0x0028 (0x0024 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FCarComponentHistory
{
	class ACarComponent_TA*                            CarComponent;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<struct FCarComponentSnapshot>         Snapshots;                                     // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FCarComponentSnapshot                       BackupSnapshot;                                // 0x0018 (0x000C) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0024 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.Replay_TA.CarFrameSettings
// Size: 0x0060
struct FCarFrameSettings
{
	class FString                                      PlayerName;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FClientLoadoutData                          CarLoadout;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FLinearColor                                TeamColor;                                     // 0x0020 (0x0010) [0x0000000000000000]               
	struct FLinearColor                                AccentColor;                                   // 0x0030 (0x0010) [0x0000000000000000]               
	class TArray<int32_t>                              PaintIDs;                                      // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              EsportsIDs;                                    // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.Replay_TA.SceneFrameCapture
// Size: 0x0060
struct FSceneFrameCapture
{
	class FName                                        SceneName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        CameraModeName;                                // 0x0008 (0x0008) [0x0000000000000000]               
	class FString                                      FocusActorName;                                // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              TimeCaptured;                                  // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              CameraFOV;                                     // 0x0024 (0x0004) [0x0000000000000000]               
	struct FVector                                     CameraLocation;                                // 0x0028 (0x000C) [0x0000000000000000]               
	struct FRotator                                    CameraRotation;                                // 0x0034 (0x000C) [0x0000000000000000]               
	class TArray<struct FCarFrameSettings>             PlayerCarSettings;                             // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      OverrideBallType;                              // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.Replay_Soccar_TA.ScoredGoal
// Size: 0x0020 (0x001C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FScoredGoal
{
	int32_t                                            frame;                                         // 0x0000 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      PlayerName;                                    // 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_DataBinding)
	int32_t                                            PlayerTeam;                                    // 0x0018 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x001C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.Replay_Soccar_TA.Highlight
// Size: 0x001C
struct FHighlight
{
	int32_t                                            frame;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	class FName                                        CarName;                                       // 0x0004 (0x0008) [0x0000000000000000]               
	class FName                                        BallName;                                      // 0x000C (0x0008) [0x0000000000000000]               
	class FName                                        GoalActorName;                                 // 0x0014 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.ReplayCompatibilityActor_TA.ReplayRenamedActor
// Size: 0x0020
struct FReplayRenamedActor
{
	class FString                                      OldPath;                                       // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      NewPath;                                       // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ReplayDirector_TA.ReplayFocusCar
// Size: 0x0014
struct FReplayFocusCar
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	class FName                                        CarName;                                       // 0x0008 (0x0008) [0x0000000000000000]               
	int32_t                                            BallHitIndex;                                  // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayIOTaskBase
// Size: 0x0028
struct FReplayIOTaskBase
{
	class UReplay_TA*                                  Replay;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      Path;                                          // 0x0008 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class UErrorType*                                  Error;                                         // 0x0018 (0x0008) [0x0000000000000000]               
	struct FPointer                                    Ar;                                            // 0x0020 (0x0008) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayExportCallbackData
// Size: 0x0020
struct FReplayExportCallbackData
{
	struct FPointer                                    Task;                                          // 0x0000 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FScriptDelegate                             Callback;                                      // 0x0008 (0x0018) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayImportCallbackData
// Size: 0x0020
struct FReplayImportCallbackData
{
	struct FPointer                                    Task;                                          // 0x0000 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FScriptDelegate                             Callback;                                      // 0x0008 (0x0018) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayExportTask
// 0x0014 (0x0028 - 0x003C)
struct FReplayExportTask : FReplayIOTaskBase
{
	class TArray<uint8_t>                              Data;                                          // 0x0028 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	uint32_t                                           bDebug : 1;                                    // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x003C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayClassTask
// 0x0010 (0x0028 - 0x0038)
struct FReplayClassTask : FReplayIOTaskBase
{
	class FString                                      ClassPath;                                     // 0x0028 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayHeaderImportTask
// 0x0000 (0x0028 - 0x0028)
struct FReplayHeaderImportTask : FReplayIOTaskBase
{
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayImportTask
// 0x0010 (0x0028 - 0x0038)
struct FReplayImportTask : FReplayIOTaskBase
{
	class TArray<uint8_t>                              Data;                                          // 0x0028 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayTypeData
// Size: 0x0020
struct FReplayTypeData
{
	class FString                                      FilePath;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ClassPath;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayHeadersCountTask
// Size: 0x0038
struct FReplayHeadersCountTask
{
	class FString                                      Path;                                          // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class TArray<class FString>                        FileNameFilters;                               // 0x0010 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class TArray<struct FReplayTypeData>               Replays;                                       // 0x0020 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class UErrorType*                                  Error;                                         // 0x0030 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayUpdateDataMapTask
// Size: 0x0060
struct FReplayUpdateDataMapTask
{
	struct FMap_Mirror                                 Data;                                          // 0x0000 (0x0050) [0x0000000000101000] (CPF_Native)  
	int32_t                                            RemovedIndex;                                  // 0x0050 (0x0004) [0x0000000000100000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0054 (0x0004) MISSED OFFSET
	class UErrorType*                                  Error;                                         // 0x0058 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.RewardDropGroup_TA.GFxRewardDrop
// Size: 0x0018
struct FGFxRewardDrop
{
	class FName                                        RewardName;                                    // 0x0000 (0x0008) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Total;                                         // 0x0008 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Base;                                          // 0x000C (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            BaseLevel;                                     // 0x0010 (0x0004) [0x0000000040000000] (CPF_DataBinding)
	int32_t                                            Level;                                         // 0x0014 (0x0004) [0x0000000040000000] (CPF_DataBinding)
};

// ScriptStruct TAGame.RLBot_Util_TA.BotLoadout
// Size: 0x0028
struct FBotLoadout
{
	class TArray<int32_t>                              Products;                                      // 0x0000 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              Paints;                                        // 0x0010 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	struct FColor                                      PrimaryColor;                                  // 0x0020 (0x0004) [0x0001000000000000]               
	struct FColor                                      SecondaryColor;                                // 0x0024 (0x0004) [0x0001000000000000]               
};

// ScriptStruct TAGame.RLBot_Util_TA.PlayerStats
// Size: 0x001C
struct FPlayerStats
{
	int32_t                                            Score;                                         // 0x0000 (0x0004) [0x0001000000000000]               
	int32_t                                            Goals;                                         // 0x0004 (0x0004) [0x0001000000000000]               
	int32_t                                            OwnGoals;                                      // 0x0008 (0x0004) [0x0001000000000000]               
	int32_t                                            Assists;                                       // 0x000C (0x0004) [0x0001000000000000]               
	int32_t                                            Saves;                                         // 0x0010 (0x0004) [0x0001000000000000]               
	int32_t                                            Shots;                                         // 0x0014 (0x0004) [0x0001000000000000]               
	int32_t                                            Demolitions;                                   // 0x0018 (0x0004) [0x0001000000000000]               
};

// ScriptStruct TAGame.RocketPassMetrics_TA.RocketPassPremiumData
// Size: 0x0010
struct FRocketPassPremiumData
{
	uint64_t                                           StartTimestamp;                                // 0x0000 (0x0008) [0x0000000000000000]               
	uint64_t                                           EndTimestamp;                                  // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.RocketPassMetrics_TA.RocketPassTiersData
// Size: 0x0018 (0x0014 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FRocketPassTiersData
{
	uint64_t                                           StartTimestamp;                                // 0x0000 (0x0008) [0x0000000000000000]               
	uint64_t                                           EndTimestamp;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	int32_t                                            PurchasableID;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0014 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.RPC_GetSpecialEventCurrency_TA.EventCurrencyData
// Size: 0x0018
struct FEventCurrencyData
{
	int32_t                                            CurrencyID;                                    // 0x0000 (0x0004) [0x0001000000000000]               
	int32_t                                            PsyonixID;                                     // 0x0004 (0x0004) [0x0001000000000000]               
	int32_t                                            Total;                                         // 0x0008 (0x0004) [0x0001000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x000C (0x0004) MISSED OFFSET
	uint64_t                                           ExpirationTime;                                // 0x0010 (0x0008) [0x0001000000000000]               
};

// ScriptStruct TAGame.RPC_GetSpecialEvents_TA.SpecialEventData
// Size: 0x0030 (0x002C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FSpecialEventData
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0001000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      Name;                                          // 0x0008 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	uint64_t                                           StartTime;                                     // 0x0018 (0x0008) [0x0001000000000000]               
	uint64_t                                           EndTime;                                       // 0x0020 (0x0008) [0x0001000000000000]               
	int32_t                                            CurrencyID;                                    // 0x0028 (0x0004) [0x0001000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x002C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.RPC_ProductsDebugAddProduct_TA.AddProductAttribute
// Size: 0x0018
struct FAddProductAttribute
{
	class FName                                        Key;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      Value;                                         // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.RPC_ProductsDebugAddProducts_TA.AddProductsResponseData
// Size: 0x0040
struct FAddProductsResponseData
{
	int32_t                                            ProductID;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	struct FProductInstanceID                          InstanceID;                                    // 0x0008 (0x0010) [0x0000000000000000]               
	class TArray<struct FOnlineProductAttribute>       Attributes;                                    // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            SeriesID;                                      // 0x0028 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData01[0x4];                            // 0x002C (0x0004) MISSED OFFSET
	uint64_t                                           AddedTimestamp;                                // 0x0030 (0x0008) [0x0000000000000000]               
	uint64_t                                           UpdatedTimestamp;                              // 0x0038 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.RPC_ProductsLoadoutGet_TA.InstanceToSlotRow
// Size: 0x0018
struct FInstanceToSlotRow
{
	struct FProductInstanceID                          InstanceID;                                    // 0x0000 (0x0010) [0x0000000000000000]               
	int32_t                                            SlotIndex;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            TeamIndex;                                     // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.RPC_PsyNetGetVanities_TA.VanityProductInfo
// Size: 0x0068
struct FVanityProductInfo
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              VanityTypes;                                   // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FOnlineProductData>            ProductData;                                   // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.RPC_PsyNetGetVanities_TA.VanityProductData
// Size: 0x0068
struct FVanityProductData
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              VanityTypes;                                   // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UOnlineProduct_TA*>             VanityProducts;                                // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.RPC_PsyNetSetVanity_TA.VanityLoadout
// Size: 0x0020 (0x001C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FVanityLoadout
{
	int32_t                                            VanityType;                                    // 0x0000 (0x0004) [0x0000004000000000] (CPF_PrivateWrite)
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	struct FProductInstanceID                          InstanceID;                                    // 0x0008 (0x0010) [0x0000004000000000] (CPF_PrivateWrite)
	int32_t                                            UserColor;                                     // 0x0018 (0x0004) [0x0000004000000000] (CPF_PrivateWrite)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x001C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.SampleHistory_TA.Sample
// Size: 0x0008
struct FSample
{
	float                                              Low;                                           // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              High;                                          // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.SampleHistory_TA.GraphSummaryMethod
// Size: 0x000C
struct FGraphSummaryMethod
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x0001 (0x0003) MISSED OFFSET
	float                                              MaxSampleAge;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	uint32_t                                           bAbsoluteValue : 1;                            // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.SaveObjectManager_TA.DingoContentCache
// Size: 0x0008
struct FDingoContentCache
{
	uint64_t                                           UserXUID;                                      // 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.SaveObjectManager_TA.SaveDataTask
// Size: 0x0018
struct FSaveDataTask
{
	int32_t                                            ControllerIndex;                               // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      Path;                                          // 0x0008 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.SaveObjectManager_TA.SaveDataDeleteTask
// 0x0004 (0x0018 - 0x001C)
struct FSaveDataDeleteTask : FSaveDataTask
{
	int32_t                                            KeepNewestFileCount;                           // 0x0018 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x001C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.SaveObjectManager_TA.SaveDataListFilesTask
// 0x0021 (0x0018 - 0x0039)
struct FSaveDataListFilesTask : FSaveDataTask
{
	class FString                                      Pattern;                                       // 0x0018 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class TArray<class FString>                        Files;                                         // 0x0028 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	uint8_t                                            Result;                                        // 0x0038 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0039 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.SaveObjectManager_TA.SaveDataImportTask
// 0x0024 (0x0018 - 0x003C)
struct FSaveDataImportTask : FSaveDataTask
{
	class UObject*                                     SaveDataObject;                                // 0x0018 (0x0008) [0x0000000000100000]               
	uint8_t                                            Result;                                        // 0x0020 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x7];                            // 0x0021 (0x0007) MISSED OFFSET
	class TArray<uint8_t>                              Data;                                          // 0x0028 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	uint32_t                                           bExactFileMatch : 1;                           // 0x0038 (0x0004) [0x0000000000100000] [0x00000001] 
	uint32_t                                           bPlayerSaveData : 1;                           // 0x0038 (0x0004) [0x0000000000100000] [0x00000002] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x003C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.SaveObjectManager_TA.SaveDataExportTask
// 0x001C (0x0018 - 0x0034)
struct FSaveDataExportTask : FSaveDataTask
{
	class TArray<uint8_t>                              Data;                                          // 0x0018 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	uint32_t                                           bExactFileMatch : 1;                           // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPlayerSaveData : 1;                           // 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bEncryptAndCRC : 1;                            // 0x0028 (0x0004) [0x0000000000000000] [0x00000004] 
	uint8_t                                            Result;                                        // 0x002C (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x002D (0x0003) MISSED OFFSET
	int32_t                                            KeepNewestSaveFileCount;                       // 0x0030 (0x0004) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0034 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.SaveObjectManager_TA.InitSaveProviderTask
// 0x0001 (0x0018 - 0x0019)
struct FInitSaveProviderTask : FSaveDataTask
{
	uint8_t                                            Result;                                        // 0x0018 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0019 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.SeqAct_DriveSpline_TA.CarSplineData
// Size: 0x0018
struct FCarSplineData
{
	class ACar_TA*                                     Car;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	class ASplineActor*                                Spline;                                        // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              DistanceAlongSpline;                           // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           bReachedSpline : 1;                            // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.SeqAct_SpawnCarColors_TA.SpawnCarColorSet
// Size: 0x0010 (0x000C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FSpawnCarColorSet
{
	class UCarColorSet_TA*                             ColorSet;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bRender : 1;                                   // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x000C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.ShopCatalogueCacheSave_TA.CatalogueCacheItem
// Size: 0x0018
struct FCatalogueCacheItem
{
	int32_t                                            ShopID;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class TArray<struct FShopItemCacheItem>            StoreItems;                                    // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ShopMetrics_TA.ShopItemData
// Size: 0x0020
struct FShopItemData
{
	int32_t                                            ShopItemID;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            NumTimesPreviewed;                             // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            NumTimesPurchaseOpened;                        // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            NumTimesPurchaseCancelled;                     // 0x000C (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              Costs;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ShopMetrics_TA.ShopTabData
// Size: 0x0030
struct FShopTabData
{
	int32_t                                            FromShopID;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            NewShopID;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            FromCatalogID;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            NewCatalogID;                                  // 0x000C (0x0004) [0x0000000000000000]               
	uint64_t                                           StartTimestamp;                                // 0x0010 (0x0008) [0x0000000000000000]               
	uint64_t                                           EndTimestamp;                                  // 0x0018 (0x0008) [0x0000000000000000]               
	class TArray<struct FShopItemData>                 ItemMetrics;                                   // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.SkelControlSingleBoneCopy_TA.AxisConversion
// Size: 0x000C
struct FAxisConversion
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint8_t                                            Source;                                        // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                          UnknownData00[0x3];                            // 0x0005 (0x0003) MISSED OFFSET
	float                                              Scale;                                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.SkeletalMeshActorMAT_Products_TA.BothWheelAssets
// Size: 0x0010
struct FBothWheelAssets
{
	class UMeshComponent*                              Left;                                          // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UMeshComponent*                              Right;                                         // 0x0008 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct TAGame.SonyPricingInfo_TA.LocalizedStrings
// Size: 0x00A0
struct FLocalizedStrings
{
	class FString                                      Title;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      furigana;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      soloName;                                      // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      soloNameAllCaps;                               // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      appleTitle;                                    // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      longDescription;                               // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      shortDescription;                              // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      switchDescription;                             // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      switchDisclaimer;                              // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      egsDescription;                                // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.SonyPricingInfo_TA.ProductGroup
// Size: 0x01D8 (0x01D4 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FProductGroup
{
	struct FLocalizedStrings                           LocalizedStrings;                              // 0x0000 (0x00A0) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class FString                                      conceptName;                                   // 0x00A0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class FString                                      currencyAmountString;                          // 0x00B0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class FString                                      labelPrefix;                                   // 0x00C0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class FString                                      currencyLabelAmount;                           // 0x00D0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class FString                                      Region;                                        // 0x00E0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class FString                                      Currency;                                      // 0x00F0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class FString                                      Game;                                          // 0x0100 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class FString                                      CurrencyType;                                  // 0x0110 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class FString                                      wholesalePrice;                                // 0x0120 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class FString                                      vatPrice;                                      // 0x0130 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class FString                                      isotonicPrice;                                 // 0x0140 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class FString                                      CurrencyCode;                                  // 0x0150 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class FString                                      languageCode;                                  // 0x0160 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class FString                                      Country;                                       // 0x0170 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      offerName;                                     // 0x0180 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      retailPrice;                                   // 0x0190 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      currencySymbol;                                // 0x01A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            CurrencyAmount;                                // 0x01B0 (0x0004) [0x0000000000000000]               
	float                                              localPrice;                                    // 0x01B4 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              exchangeRate;                                  // 0x01B8 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              vatRate;                                       // 0x01BC (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              retailPriceNumber;                             // 0x01C0 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              wholesalePriceNumber;                          // 0x01C4 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              vatPriceNumber;                                // 0x01C8 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              isotonicPriceNumber;                           // 0x01CC (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              wholesaleDiscountPercent;                      // 0x01D0 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x01D4 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.SonyPricingInfo_TA.BaseInput
// Size: 0x0218
struct FBaseInput
{
	struct FProductGroup                               ProductGroup;                                  // 0x0000 (0x01D8) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      conceptName;                                   // 0x01D8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class FString                                      GameName;                                      // 0x01E8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class FString                                      Region;                                        // 0x01F8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class FString                                      ReleaseDate;                                   // 0x0208 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.SonyPricingInfo_TA.SonyInputs
// Size: 0x0218
struct FSonyInputs
{
	struct FBaseInput                                  SONY_INPUTS;                                   // 0x0000 (0x0218) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.SonyPricingInfo_TA.SonyMetadataStruct
// Size: 0x0058
struct FSonyMetadataStruct
{
	class TArray<int32_t>                              currencyAmounts;                               // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      GameName;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      targetCountries;                               // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      generatedAt;                                   // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ReleaseDate;                                   // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            totalGenerated;                                // 0x0050 (0x0004) [0x0000000000000000]               
	int32_t                                            Count;                                         // 0x0054 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.SpecialEventConfig_TA.DebugMicroEventPlaylistID
// Size: 0x0004
struct FDebugMicroEventPlaylistID
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000040000001] (CPF_Edit | CPF_DataBinding)
};

// ScriptStruct TAGame.SpecialPickup_TA.PickupReplacement
// Size: 0x0010
struct FPickupReplacement
{
	class UProduct_TA*                                 Body;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class ASpecialPickup_TA*                           Pickup;                                        // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.SpecialPickup_Football_TA.ThrowSetting
// Size: 0x001C
struct FThrowSetting
{
	float                                              Pitch;                                         // 0x0000 (0x0004) [0x0001000000000000]               
	float                                              LinearScale;                                   // 0x0004 (0x0004) [0x0001000000000000]               
	float                                              AngularScale;                                  // 0x0008 (0x0004) [0x0001000000000000]               
	float                                              MinLinearForce;                                // 0x000C (0x0004) [0x0001000000000000]               
	float                                              MaxLinearForce;                                // 0x0010 (0x0004) [0x0001000000000000]               
	float                                              MinAngularForce;                               // 0x0014 (0x0004) [0x0001000000000000]               
	float                                              MaxAngularForce;                               // 0x0018 (0x0004) [0x0001000000000000]               
};

// ScriptStruct TAGame.StatFactory_TA.BallInfo
// Size: 0x0040
struct FBallInfo
{
	class ABall_TA*                                    Ball;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class UGoal_TA*                                    ShotGoal;                                      // 0x0008 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UGoal_TA*                                    RedZoneGoal;                                   // 0x0010 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class APRI_TA*                                     RedZonePRI;                                    // 0x0018 (0x0008) [0x0000000000000000]               
	int32_t                                            RedZoneHitID;                                  // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              GroundHitTime;                                 // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              JuggleTime;                                    // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              SpecialHitTime;                                // 0x002C (0x0004) [0x0000000000000000]               
	float                                              BallHitTime;                                   // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              SaveTime;                                      // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              ShotTime;                                      // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              CrossbarHitTime;                               // 0x003C (0x0004) [0x0001000000000000]               
};

// ScriptStruct TAGame.StatFactory_TA.StatGroupCollection
// Size: 0x0030
struct FStatGroupCollection
{
	class UStatGroup_TA*                               Wins;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatGroup_TA*                               Losses;                                        // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatGroup_TA*                               Goals;                                         // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatGroup_TA*                               Saves;                                         // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatGroup_TA*                               Shots;                                         // 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatGroup_TA*                               Assists;                                       // 0x0028 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.StatFactory_KnockOut_TA.StatEventCollection_KO
// Size: 0x0098
struct FStatEventCollection_KO
{
	class UStatEvent_TA*                               KnockOut;                                      // 0x0000 (0x0008) [0x0001000000000000]               
	class UStatEvent_TA*                               KnockoutAssist;                                // 0x0008 (0x0008) [0x0001000000000000]               
	class UStatEvent_TA*                               Death;                                         // 0x0010 (0x0008) [0x0001000000000000]               
	class UStatEvent_TA*                               PlayerGrabbed;                                 // 0x0018 (0x0008) [0x0001000000000000]               
	class UStatEvent_TA*                               PlayerThrown;                                  // 0x0020 (0x0008) [0x0001000000000000]               
	class UStatEvent_TA*                               Grabbed;                                       // 0x0028 (0x0008) [0x0001000000000000]               
	class UStatEvent_TA*                               Thrown;                                        // 0x0030 (0x0008) [0x0001000000000000]               
	class UStatEvent_TA*                               HeavyHit;                                      // 0x0038 (0x0008) [0x0001000000000000]               
	class UStatEvent_TA*                               LightHit;                                      // 0x0040 (0x0008) [0x0001000000000000]               
	class UStatEvent_TA*                               AerialHeavyHit;                                // 0x0048 (0x0008) [0x0001000000000000]               
	class UStatEvent_TA*                               AerialLightHit;                                // 0x0050 (0x0008) [0x0001000000000000]               
	class UStatEvent_TA*                               HitTaken;                                      // 0x0058 (0x0008) [0x0001000000000000]               
	class UStatEvent_TA*                               HeavyBlock;                                    // 0x0060 (0x0008) [0x0001000000000000]               
	class UStatEvent_TA*                               LightBlock;                                    // 0x0068 (0x0008) [0x0001000000000000]               
	class UStatEvent_TA*                               BlockTaken;                                    // 0x0070 (0x0008) [0x0001000000000000]               
	class UStatEvent_TA*                               DoubleKO;                                      // 0x0078 (0x0008) [0x0001000000000000]               
	class UStatEvent_TA*                               TripleKO;                                      // 0x0080 (0x0008) [0x0001000000000000]               
	class UStatEvent_TA*                               MassKO;                                        // 0x0088 (0x0008) [0x0001000000000000]               
	class UStatEvent_TA*                               Winner;                                        // 0x0090 (0x0008) [0x0001000000000000]               
};

// ScriptStruct TAGame.StatGraphDrawer_TA.SummaryLabel
// Size: 0x0028 (0x0024 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FSummaryLabel
{
	class FString                                      Label;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            LabelWidth;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	struct FLinearColor                                Color;                                         // 0x0014 (0x0010) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0024 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.StatGraphDrawer_TA.GraphLine
// Size: 0x0028
struct FGraphLine
{
	struct FVector                                     Start;                                         // 0x0000 (0x000C) [0x0000000000100000]               
	struct FVector                                     End;                                           // 0x000C (0x000C) [0x0000000000100000]               
	struct FLinearColor                                Color;                                         // 0x0018 (0x0010) [0x0000000000100000]               
};

// ScriptStruct TAGame.StayAsPartyMetrics_TA.PartyMergeResult
// Size: 0x00A0 (0x009C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FPartyMergeResult
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                LeaderID;                                      // 0x0048 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bSuccess : 1;                                  // 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	class FName                                        FailReason;                                    // 0x0094 (0x0008) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x009C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.TourCredentials_TA.CredentialItem
// Size: 0x0028
struct FCredentialItem
{
	uint64_t                                           TourID;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	struct FTourPrivateCredentials                     Credentials;                                   // 0x0008 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.TourRewards_TA.RewardsResult
// Size: 0x0018
struct FRewardsResult
{
	uint64_t                                           TourID;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<struct FTourReward>                   Rewards;                                       // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.TourRewards_TA.RewardsRequest
// Size: 0x0028
struct FRewardsRequest
{
	uint64_t                                           TourID;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class UAsyncTask*                                  Task;                                          // 0x0008 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             Callback;                                      // 0x0010 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.TourSeeder_TA.TeamSeeds
// Size: 0x0010
struct FTeamSeeds
{
	class TArray<uint64_t>                             Seeds;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.TrainingEditorMetrics_TA.TrainingManipulationEvent
// Size: 0x0018 (0x0014 PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FTrainingManipulationEvent
{
	uint64_t                                           TimeStamp;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            CommandUsed;                                   // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x0009 (0x0003) MISSED OFFSET
	int32_t                                            RoundNum;                                      // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           bMirror : 1;                                   // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x0014 (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.Tutorial_TA.ButtonInfo
// Size: 0x0030 (0x002C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FButtonInfo
{
	class FString                                      Text;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             ClickDelegate;                                 // 0x0010 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bCorrectAnswer : 1;                            // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x002C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.Tutorial_TA.ActionNameInfo
// Size: 0x0010
struct FActionNameInfo
{
	class TArray<class FName>                          ActionNames;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.Tutorial_TA.MessageInfo
// Size: 0x0040
struct FMessageInfo
{
	class FString                                      Title;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Body;                                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FButtonInfo>                   Buttons;                                       // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FActionNameInfo>               ActionNameList;                                // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.UserBugReportBulkData_TA.UserReportVideoSetting
// Size: 0x0020
struct FUserReportVideoSetting
{
	class FString                                      Key;                                           // 0x0000 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	class FString                                      Value;                                         // 0x0010 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.VanityQuery_TA.VanityQuerySet
// Size: 0x0018
struct FVanityQuerySet
{
	class TArray<struct FUniqueNetId>                  PlayerIds;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            VanityType;                                    // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x3];                            // 0x0011 (0x0003) MISSED OFFSET
	uint32_t                                           bForced : 1;                                   // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.VehiclePickup_TA.PickupData
// Size: 0x0010 (0x000C PropertySize + 0x0004 padding to satisfy MinAlignment of 8)
struct FPickupData
{
	class ACar_TA*                                     Instigator;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bPickedUp : 1;                                 // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                          MinAlignmentPadding[0x4];                      // 0x000C (0x0004) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.VehiclePickup_TA.PickupData2
// Size: 0x0010 (0x0009 PropertySize + 0x0007 padding to satisfy MinAlignment of 8)
struct FPickupData2
{
	class ACar_TA*                                     Instigator;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            PickedUp;                                      // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                          MinAlignmentPadding[0x7];                      // 0x0009 (0x0007) PADDING FOR MINALIGNMENT
};

// ScriptStruct TAGame.ViewMetrics_TA.InteractableData
// Size: 0x0010
struct FInteractableData
{
	class FName                                        InteractableDescriptor;                        // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            InteractableID;                                // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            NumInteractions;                               // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.ViewMetrics_TA.ViewData
// Size: 0x0028
struct FViewData
{
	int32_t                                            ExitedViewID;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            EnteredViewID;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	uint64_t                                           StartTimestamp;                                // 0x0008 (0x0008) [0x0000000000000000]               
	uint64_t                                           EndTimestamp;                                  // 0x0010 (0x0008) [0x0000000000000000]               
	class TArray<struct FInteractableData>             InteractableMetrics;                           // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
