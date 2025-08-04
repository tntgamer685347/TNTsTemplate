/*
#############################################################################################
# RocketLeague (1.0.10897.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: GFxUI_structs.hpp
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

// ScriptStruct GFxUI.GFxMoviePlayer.SoundThemeBinding
// 0x0020
struct FSoundThemeBinding
{
	struct FName                                       ThemeName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UUISoundTheme*                               Theme;                                         // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FString                                      ThemeClassName;                                // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct GFxUI.GFxMoviePlayer.ASValue
// 0x0028
struct FASValue
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           B : 1;                                         // 0x0004 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              N;                                             // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            I;                                             // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FString                                      S;                                             // 0x0010 (0x0010) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
	class UTexture*                                    T;                                             // 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GFxUI.GFxMoviePlayer.GFxWidgetBinding
// 0x0010
struct FGFxWidgetBinding
{
	struct FName                                       WidgetName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UClass*                                      WidgetClass;                                   // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GFxUI.GFxMoviePlayer.ExternalTexture
// 0x0018
struct FExternalTexture
{
	class FString                                      Resource;                                      // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UTexture*                                    Texture;                                       // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GFxUI.GFxObject.ASDisplayInfo
// 0x002C
struct FASDisplayInfo
{
	float                                              X;                                             // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Y;                                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Z;                                             // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Rotation;                                      // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              XRotation;                                     // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              YRotation;                                     // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              XScale;                                        // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              YScale;                                        // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ZScale;                                        // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Alpha;                                         // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           Visible : 1;                                   // 0x0028 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           hasX : 1;                                      // 0x0028 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           hasY : 1;                                      // 0x0028 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           hasZ : 1;                                      // 0x0028 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           hasRotation : 1;                               // 0x0028 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           hasXRotation : 1;                              // 0x0028 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           hasYRotation : 1;                              // 0x0028 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           hasXScale : 1;                                 // 0x0028 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           hasYScale : 1;                                 // 0x0028 (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
	uint32_t                                           hasZScale : 1;                                 // 0x0028 (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	uint32_t                                           hasAlpha : 1;                                  // 0x0028 (0x0004) [0x0000000000000001] [0x00000400] (CPF_Edit)
	uint32_t                                           hasVisible : 1;                                // 0x0028 (0x0004) [0x0000000000000001] [0x00000800] (CPF_Edit)
};

// ScriptStruct GFxUI.GFxObject.ASColorTransform
// 0x0020
struct FASColorTransform
{
	struct FLinearColor                                Multiply;                                      // 0x0000 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                Add;                                           // 0x0010 (0x0010) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GFxUI.GFxClikWidget.EventData
// 0x0034
struct FEventData
{
	class UGFxObject*                                  _this;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  Target;                                        // 0x0008 (0x0008) [0x0000000000000000]               
	class FString                                      Type;                                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Data;                                          // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            mouseIndex;                                    // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            Button;                                        // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            Index;                                         // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            lastIndex;                                     // 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GFxUI.GFxEngine.GCReference
// 0x0010
struct FGCReference
{
	class UObject*                                     m_object;                                      // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	int32_t                                            m_count;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            m_statid;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct GFxUI.GFxEngine.LoadingMovieMapInfo
// 0x009C
struct FLoadingMovieMapInfo
{
	uint8_t                                            InputType;                                     // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      MapBaseName;                                   // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PlaylistName;                                  // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      MapVariantName;                                // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      MaximumPlayerCounts;                           // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ProtipMessage;                                 // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Language;                                      // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      BuildEdition;                                  // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ProtipTitle;                                   // 0x0078 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	uint8_t                                            WeatherVariant;                                // 0x0088 (0x0001) [0x0000000000000000]               
	class UTexture2D*                                  LargeMapImage;                                 // 0x0090 (0x0008) [0x0000000000000000]               
	uint32_t                                           bSetBackgroundVisible : 1;                     // 0x0098 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDisplayGenericBackground : 1;                 // 0x0098 (0x0004) [0x0000000000000000] [0x00000002] 
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
