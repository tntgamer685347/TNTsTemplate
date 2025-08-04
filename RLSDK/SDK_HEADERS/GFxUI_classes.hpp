/*
#############################################################################################
# RocketLeague (1.0.10897.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: GFxUI_classes.hpp
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

// Enum GFxUI.SwfMovie.EEdition
enum class EEdition : uint8_t
{
	Edition_Default                                    = 0,
	Edition_China                                      = 1,
	Edition_END                                        = 2
};

// Enum GFxUI.SwfMovie.FlashTextureRescale
enum class EFlashTextureRescale : uint8_t
{
	FlashTextureScale_High                             = 0,
	FlashTextureScale_Low                              = 1,
	FlashTextureScale_NextLow                          = 2,
	FlashTextureScale_Mult4                            = 3,
	FlashTextureScale_None                             = 4,
	FlashTextureScale_END                              = 5
};

// Enum GFxUI.GFxMoviePlayer.ASType
enum class EASType : uint8_t
{
	AS_Undefined                                       = 0,
	AS_Null                                            = 1,
	AS_Number                                          = 2,
	AS_Int                                             = 3,
	AS_String                                          = 4,
	AS_Boolean                                         = 5,
	AS_Texture                                         = 6,
	AS_UInt                                            = 7,
	AS_END                                             = 8
};

// Enum GFxUI.GFxMoviePlayer.GFxAlign
enum class EGFxAlign : uint8_t
{
	Align_Center                                       = 0,
	Align_TopCenter                                    = 1,
	Align_BottomCenter                                 = 2,
	Align_CenterLeft                                   = 3,
	Align_CenterRight                                  = 4,
	Align_TopLeft                                      = 5,
	Align_TopRight                                     = 6,
	Align_BottomLeft                                   = 7,
	Align_BottomRight                                  = 8,
	Align_END                                          = 9
};

// Enum GFxUI.GFxMoviePlayer.GFxScaleMode
enum class EGFxScaleMode : uint8_t
{
	SM_NoScale                                         = 0,
	SM_ShowAll                                         = 1,
	SM_ExactFit                                        = 2,
	SM_NoBorder                                        = 3,
	SM_END                                             = 4
};

// Enum GFxUI.GFxMoviePlayer.GFxTimingMode
enum class EGFxTimingMode : uint8_t
{
	TM_Game                                            = 0,
	TM_Real                                            = 1,
	TM_END                                             = 2
};

// Enum GFxUI.GFxMoviePlayer.GFxRenderTextureMode
enum class EGFxRenderTextureMode : uint8_t
{
	RTM_Opaque                                         = 0,
	RTM_Alpha                                          = 1,
	RTM_AlphaComposite                                 = 2,
	RTM_END                                            = 3
};

// Enum GFxUI.GFxEngine.EWeatherVariant
enum class EWeatherVariant : uint8_t
{
	WeatherVariant_None                                = 0,
	WeatherVariant_Dawn                                = 1,
	WeatherVariant_Day                                 = 2,
	WeatherVariant_Dusk                                = 3,
	WeatherVariant_Lab                                 = 4,
	WeatherVariant_Night                               = 5,
	WeatherVariant_Rain                                = 6,
	WeatherVariant_Snow                                = 7,
	WeatherVariant_END                                 = 8
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class GFxUI.GFxEngine
// 0x00C8 (0x0060 - 0x0128)
class UGFxEngine : public UObject
{
public:
	TArray<struct FGCReference>                        GCReferences;                                  // 0x0060 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            RefCount;                                      // 0x0070 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FLoadingMovieMapInfo                        LoadingScreenInfo;                             // 0x0078 (0x00A0) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              IgnoreWarningsThatStartWith;                   // 0x0118 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxEngine");
		}

		return uClassPointer;
	};

	void UpdateMovieLoadingInfo(struct FLoadingMovieMapInfo& LoadingInfo);
	void eventTick(float DeltaTime);
};

// Class GFxUI.GFxFSCmdHandler
// 0x0000 (0x0060 - 0x0060)
class UGFxFSCmdHandler : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxFSCmdHandler");
		}

		return uClassPointer;
	};

	bool eventFSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, class FString Cmd, class FString Arg);
};

// Class GFxUI.GFxInteraction
// 0x000C (0x00D0 - 0x00DC)
class UGFxInteraction : public UInteraction
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                  // 0x00D0 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	uint32_t                                           bFakeMobileTouches : 1;                        // 0x00D8 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxInteraction");
		}

		return uClassPointer;
	};

	void DebugInputKey(int32_t ControllerId, struct FName Key, EInputEvent Event, float AmountDepressed, bool bGamepad);
	void CloseAllMoviePlayers();
	void NotifySplitscreenLayoutChanged();
	void NotifyPlayerRemoved(int32_t PlayerIndex, class ULocalPlayer* RemovedPlayer);
	void NotifyPlayerAdded(int32_t PlayerIndex, class ULocalPlayer* AddedPlayer);
	void NotifyGameSessionEnded();
	class UGFxMoviePlayer* GetFocusMovie(int32_t ControllerId);
};

// Class GFxUI.GFxMoviePlayer
// 0x01B8 (0x0060 - 0x0218)
class UGFxMoviePlayer : public UObject
{
public:
	struct FPointer                                    pMovie;                                        // 0x0060 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    pCaptureKeys;                                  // 0x0068 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    pFocusIgnoreKeys;                              // 0x0070 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	uint8_t                                           UnknownData00[0x50];                           // 0x0078 (0x0050) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.ASUClasses
	uint8_t                                           UnknownData01[0x50];                           // 0x00C8 (0x0050) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.ASUObjects
	int32_t                                            NextASUObject;                                 // 0x0118 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class USwfMovie*                                   MovieInfo;                                     // 0x0120 (0x0008) [0x0000000000000000]               
	uint32_t                                           bMovieIsOpen : 1;                              // 0x0128 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bDisplayWithHudOff : 1;                        // 0x0128 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bEnableGammaCorrection : 1;                    // 0x0128 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bWidgetsInitializedThisFrame : 1;              // 0x0128 (0x0004) [0x0000000000002002] [0x00000008] (CPF_Const | CPF_Transient)
	uint32_t                                           bLogUnhandedWidgetInitializations : 1;         // 0x0128 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bAllowInput : 1;                               // 0x0128 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bAllowFocus : 1;                               // 0x0128 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bAutoPlay : 1;                                 // 0x0128 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bPauseGameWhileActive : 1;                     // 0x0128 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bDisableWorldRendering : 1;                    // 0x0128 (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           bCaptureWorldRendering : 1;                    // 0x0128 (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bCloseOnLevelChange : 1;                       // 0x0128 (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           bOnlyOwnerFocusable : 1;                       // 0x0128 (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           bForceFullViewport : 1;                        // 0x0128 (0x0004) [0x0000000000000000] [0x00002000] 
	uint32_t                                           bDiscardNonOwnerInput : 1;                     // 0x0128 (0x0004) [0x0000000000000000] [0x00004000] 
	uint32_t                                           bCaptureInput : 1;                             // 0x0128 (0x0004) [0x0000000000000000] [0x00008000] 
	uint32_t                                           bCaptureMouseInput : 1;                        // 0x0128 (0x0004) [0x0000000000000000] [0x00010000] 
	uint32_t                                           bIgnoreMouseInput : 1;                         // 0x0128 (0x0004) [0x0000000000000000] [0x00020000] 
	uint32_t                                           bIsSplitscreenLayoutModified : 1;              // 0x0128 (0x0004) [0x0000000000002000] [0x00040000] (CPF_Transient)
	uint32_t                                           bShowHardwareMouseCursor : 1;                  // 0x0128 (0x0004) [0x0000000000000000] [0x00080000] 
	uint32_t                                           bForceFullScreen : 1;                          // 0x0128 (0x0004) [0x0000000000000000] [0x00100000] 
	uint32_t                                           bBlurLesserMovies : 1;                         // 0x0128 (0x0004) [0x0000000000000000] [0x00200000] 
	uint32_t                                           bHideLesserMovies : 1;                         // 0x0128 (0x0004) [0x0000000000000000] [0x00400000] 
	uint32_t                                           bIsPriorityBlurred : 1;                        // 0x0128 (0x0004) [0x0000000000000000] [0x00800000] 
	uint32_t                                           bIsPriorityHidden : 1;                         // 0x0128 (0x0004) [0x0000000000000000] [0x01000000] 
	uint32_t                                           bIgnoreVisibilityEffect : 1;                   // 0x0128 (0x0004) [0x0000000000000000] [0x02000000] 
	uint32_t                                           bIgnoreBlurEffect : 1;                         // 0x0128 (0x0004) [0x0000000000000000] [0x04000000] 
	class UTextureRenderTarget2D*                      RenderTexture;                                 // 0x0130 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            LocalPlayerOwnerIndex;                         // 0x0138 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UObject*                                     ExternalInterface;                             // 0x0140 (0x0008) [0x0000000000000000]               
	TArray<struct FName>                               CaptureKeys;                                   // 0x0148 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               FocusIgnoreKeys;                               // 0x0158 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FExternalTexture>                    ExternalTextures;                              // 0x0168 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FSoundThemeBinding>                  SoundThemes;                                   // 0x0178 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	EGFxTimingMode                                     TimingMode;                                    // 0x0188 (0x0001) [0x0000000000000000]               
	EGFxRenderTextureMode                              RenderTextureMode;                             // 0x0189 (0x0001) [0x0000000000000000]               
	uint8_t                                            Priority;                                      // 0x018A (0x0001) [0x0000000000000000]               
	TArray<struct FGFxWidgetBinding>                   WidgetBindings;                                // 0x0190 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                           UnknownData02[0x50];                           // 0x01A0 (0x0050) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.WidgetPathBindings
	class UGFxObject*                                  SplitscreenLayoutObject;                       // 0x01F0 (0x0008) [0x0000000000002000] (CPF_Transient)
	int32_t                                            SplitscreenLayoutYAdjust;                      // 0x01F8 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FScriptDelegate                             __OnPostAdvance__Delegate;                     // 0x0200 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxMoviePlayer");
		}

		return uClassPointer;
	};

	void SetFullScreen(bool bFullScreen);
	bool IsHidden();
	void SetHidden(bool bHidden);
	void RenderOnce();
	void UpdateSplitscreenLayout();
	void ApplyPriorityVisibilityEffect(bool bRemoveEffect);
	void ApplyPriorityBlurEffect(bool bRemoveEffect);
	void eventApplyPriorityEffect(bool bRequestedBlurState, bool bRequestedHiddenState);
	void eventPlaySoundFromTheme(struct FName EventName, struct FName optionalSoundThemeName);
	void eventOnFocusLost(int32_t LocalPlayerIndex);
	void eventOnFocusGained(int32_t LocalPlayerIndex);
	void ConsoleCommand(class FString Command);
	class APlayerController* eventGetPC();
	class ULocalPlayer* eventGetLP();
	void Init(class ULocalPlayer* optionalLocPlay);
	void SetWidgetPathBinding(class UGFxObject* WidgetToBind, struct FName Path);
	void eventPostWidgetInit();
	bool eventWidgetUnloaded(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
	bool eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
	class UGFxObject* ActionScriptConstructor(class FString ClassName);
	class UGFxObject* ActionScriptObject(class FString Path);
	class FString ActionScriptString(class FString Path);
	float ActionScriptFloat(class FString Path);
	int32_t ActionScriptInt(class FString Path);
	void ActionScriptVoid(class FString Path);
	struct FASValue Invoke(class FString method, TArray<struct FASValue> args);
	void ActionScriptSetFunction(class UGFxObject* Object, class FString Member);
	class UGFxObject* CreateArray();
	class UGFxObject* CreateObject(class FString ASClass, class UClass* optionalType, TArray<struct FASValue> optionalArgs);
	bool SetVariableStringArray(class FString Path, int32_t Index, TArray<class FString> Arg);
	bool SetVariableFloatArray(class FString Path, int32_t Index, TArray<float> Arg);
	bool SetVariableIntArray(class FString Path, int32_t Index, TArray<int32_t> Arg);
	bool SetVariableArray(class FString Path, int32_t Index, TArray<struct FASValue> Arg);
	bool GetVariableStringArray(class FString Path, int32_t Index, TArray<class FString>& Arg);
	bool GetVariableFloatArray(class FString Path, int32_t Index, TArray<float>& Arg);
	bool GetVariableIntArray(class FString Path, int32_t Index, TArray<int32_t>& Arg);
	bool GetVariableArray(class FString Path, int32_t Index, TArray<struct FASValue>& Arg);
	void SetVariableObject(class FString Path, class UGFxObject* Object);
	void SetVariableString(class FString Path, class FString S);
	void SetVariableInt(class FString Path, int32_t I);
	void SetVariableNumber(class FString Path, float F);
	void SetVariableBool(class FString Path, bool B);
	void SetVariable(class FString Path, struct FASValue Arg);
	class UGFxObject* GetVariableObject(class FString Path, class UClass* optionalType);
	class FString GetVariableString(class FString Path);
	int32_t GetVariableInt(class FString Path);
	float GetVariableNumber(class FString Path);
	bool GetVariableBool(class FString Path);
	struct FASValue GetVariable(class FString Path);
	int32_t GetAVMVersion();
	bool eventFilterButtonInput(int32_t ControllerId, struct FName ButtonName, EInputEvent InputEvent);
	void FlushPlayerInput(bool capturekeysonly);
	void ClearFocusIgnoreKeys();
	void AddFocusIgnoreKey(struct FName Key);
	void ClearCaptureKeys();
	void AddCaptureKey(struct FName Key);
	void SetMovieCanReceiveInput(bool bCanReceiveInput);
	void SetMovieCanReceiveFocus(bool bCanReceiveFocus);
	void SetPerspective3D(struct FMatrix& matPersp);
	void SetView3D(struct FMatrix& matView);
	void GetVisibleFrameRect(float& x0, float& y0, float& X1, float& Y1);
	void SetAlignment(EGFxAlign A);
	void SetViewScaleMode(EGFxScaleMode SM);
	void SetViewport(int32_t X, int32_t Y, int32_t Width, int32_t Height);
	class UGameViewportClient* GetGameViewportClient();
	void SetPriority(uint8_t NewPriority);
	bool SetExternalTexture(class FString Resource, class UTexture* Texture);
	void SetExternalInterface(class UObject* H);
	void SetTimingMode(EGFxTimingMode Mode);
	void SetMovieInfo(class USwfMovie* Data);
	void eventConditionalClearPause();
	void eventOnCleanup();
	void eventOnClose();
	void Close(bool optionalUnload);
	void SetPause(bool optionalBPausePlayback);
	void OnPostAdvance(float DeltaTime);
	void PostAdvance(float DeltaTime);
	void Advance(float Time);
	bool eventStart(bool optionalStartPaused);
};

// Class GFxUI.GFxObject
// 0x0040 (0x0060 - 0x00A0)
class UGFxObject : public UObject
{
public:
	int32_t                                            Value[0xC];                                    // 0x0060 (0x0030) [0x0000000000001002] (CPF_Const | CPF_Native)
	TArray<struct FGFxWidgetBinding>                   SubWidgetBindings;                             // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxObject");
		}

		return uClassPointer;
	};

	bool eventWidgetUnloaded(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
	bool eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget);
	class UGFxObject* AttachMovie(class FString symbolname, class FString instancename, int32_t optionalDepth, class UClass* optionalType);
	class UGFxObject* CreateEmptyMovieClip(class FString instancename, int32_t optionalDepth, class UClass* optionalType);
	void GotoAndStopI(int32_t frame);
	void GotoAndStop(class FString frame);
	void GotoAndPlayI(int32_t frame);
	void GotoAndPlay(class FString frame);
	TArray<class UGFxObject*> ActionScriptArray(class FString Path);
	class UGFxObject* ActionScriptObject(class FString Path);
	class FString ActionScriptString(class FString method);
	float ActionScriptFloat(class FString method);
	int32_t ActionScriptInt(class FString method);
	void ActionScriptVoid(class FString method);
	struct FASValue Invoke(class FString Member, TArray<struct FASValue> args);
	void ActionScriptSetFunctionOn(class UGFxObject* Target, class FString Member);
	void ActionScriptSetFunction(class FString Member);
	void SetElementMemberString(int32_t Index, class FString Member, class FString S);
	void SetElementMemberInt(int32_t Index, class FString Member, int32_t I);
	void SetElementMemberFloat(int32_t Index, class FString Member, float F);
	void SetElementMemberBool(int32_t Index, class FString Member, bool B);
	void SetElementMemberObject(int32_t Index, class FString Member, class UGFxObject* val);
	void SetElementMember(int32_t Index, class FString Member, struct FASValue Arg);
	class FString GetElementMemberString(int32_t Index, class FString Member);
	int32_t GetElementMemberInt(int32_t Index, class FString Member);
	float GetElementMemberFloat(int32_t Index, class FString Member);
	bool GetElementMemberBool(int32_t Index, class FString Member);
	class UGFxObject* GetElementMemberObject(int32_t Index, class FString Member, class UClass* optionalType);
	struct FASValue GetElementMember(int32_t Index, class FString Member);
	void SetElementColorTransform(int32_t Index, struct FASColorTransform cxform);
	void SetElementPosition(int32_t Index, float X, float Y);
	void SetElementVisible(int32_t Index, bool Visible);
	void SetElementDisplayMatrix(int32_t Index, struct FMatrix M);
	void SetElementDisplayInfo(int32_t Index, struct FASDisplayInfo D);
	struct FMatrix GetElementDisplayMatrix(int32_t Index);
	struct FASDisplayInfo GetElementDisplayInfo(int32_t Index);
	void SetElementString(int32_t Index, class FString S);
	void SetElementInt(int32_t Index, int32_t I);
	void SetElementFloat(int32_t Index, float F);
	void SetElementBool(int32_t Index, bool B);
	void SetElementObject(int32_t Index, class UGFxObject* val);
	void SetElement(int32_t Index, struct FASValue Arg);
	class FString GetElementString(int32_t Index);
	int32_t GetElementInt(int32_t Index);
	float GetElementFloat(int32_t Index);
	bool GetElementBool(int32_t Index);
	class UGFxObject* GetElementObject(int32_t Index, class UClass* optionalType);
	struct FASValue GetElement(int32_t Index);
	void SetText(class FString Text, class UTranslationContext* optionalInContext);
	class FString GetText();
	void SetVisible(bool Visible);
	void SetDisplayMatrix3D(struct FMatrix M);
	void SetDisplayMatrix(struct FMatrix M);
	void SetColorTransform(struct FASColorTransform cxform);
	void SetPosition(float X, float Y);
	void SetDisplayInfo(struct FASDisplayInfo D);
	struct FMatrix GetDisplayMatrix3D();
	struct FMatrix GetDisplayMatrix();
	struct FASColorTransform GetColorTransform();
	bool GetPosition(float& X, float& Y);
	struct FASDisplayInfo GetDisplayInfo();
	static class FString TranslateString(class FString StringToTranslate, class UTranslationContext* optionalInContext);
	void SetFunction(class FString Member, class UObject* Context, struct FName fname);
	void SetObject(class FString Member, class UGFxObject* val);
	void SetString(class FString Member, class FString S, class UTranslationContext* optionalInContext);
	void SetInt(class FString Member, int32_t I);
	void SetFloat(class FString Member, float F);
	void SetBool(class FString Member, bool B);
	void Set(class FString Member, struct FASValue Arg);
	class UGFxObject* GetObjectW(class FString Member, class UClass* optionalType);
	class FString GetString(class FString Member);
	int32_t GetInt(class FString Member);
	float GetFloat(class FString Member);
	bool GetBool(class FString Member);
	struct FASValue Get(class FString Member);
};

// Class GFxUI.GFxRawData
// 0x0040 (0x0060 - 0x00A0)
class UGFxRawData : public UObject
{
public:
	TArray<uint8_t>                                    RawData;                                       // 0x0060 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<class FString>                              ReferencedSwfs;                                // 0x0070 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	TArray<class UObject*>                             References;                                    // 0x0080 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	TArray<class UObject*>                             UserReferences;                                // 0x0090 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxRawData");
		}

		return uClassPointer;
	};

};

// Class GFxUI.SwfMovie
// 0x0078 (0x00A0 - 0x0118)
class USwfMovie : public UGFxRawData
{
public:
	uint32_t                                           bUsesFontlib : 1;                              // 0x00A0 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bSetSRGBOnImportedTextures : 1;                // 0x00A0 (0x0004) [0x0000000000020001] [0x00000002] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bPackTextures : 1;                             // 0x00A0 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bForceSquarePacking : 1;                       // 0x00A0 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	class FString                                      SourceFile;                                    // 0x00A8 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            PackTextureSize;                               // 0x00B8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	EFlashTextureRescale                               TextureRescale;                                // 0x00BC (0x0001) [0x0000000000000001] (CPF_Edit)    
	class FString                                      TextureFormat;                                 // 0x00C0 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	class FString                                      SourceFileTimestamp;                           // 0x00D0 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	int32_t                                            SourceFileCRC;                                 // 0x00E0 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	TArray<EEdition>                                   Editions;                                      // 0x00E8 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FName>                               Features;                                      // 0x00F8 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            RTTextures;                                    // 0x0108 (0x0004) [0x0000000000000000]               
	int32_t                                            RTVideoTextures;                               // 0x010C (0x0004) [0x0000000000000000]               
	uint64_t                                           ImportTimeStamp;                               // 0x0110 (0x0008) [0x0000000800002002] (CPF_Const | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.SwfMovie");
		}

		return uClassPointer;
	};

};

// Class GFxUI.FlashMovie
// 0x0000 (0x0118 - 0x0118)
class UFlashMovie : public USwfMovie
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.FlashMovie");
		}

		return uClassPointer;
	};

};

// Class GFxUI.GFxAction_CloseMovie
// 0x000C (0x0160 - 0x016C)
class UGFxAction_CloseMovie : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                         // 0x0160 (0x0008) [0x0000000000000000]               
	uint32_t                                           bUnload : 1;                                   // 0x0168 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxAction_CloseMovie");
		}

		return uClassPointer;
	};

	bool eventIsValidLevelSequenceObject();
};

// Class GFxUI.GFxAction_GetVariable
// 0x0018 (0x0160 - 0x0178)
class UGFxAction_GetVariable : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                         // 0x0160 (0x0008) [0x0000000000000000]               
	class FString                                      Variable;                                      // 0x0168 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxAction_GetVariable");
		}

		return uClassPointer;
	};

	bool eventIsValidLevelSequenceObject();
};

// Class GFxUI.GFxAction_Invoke
// 0x0028 (0x0160 - 0x0188)
class UGFxAction_Invoke : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                         // 0x0160 (0x0008) [0x0000000000000000]               
	class FString                                      MethodName;                                    // 0x0168 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FASValue>                            Arguments;                                     // 0x0178 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxAction_Invoke");
		}

		return uClassPointer;
	};

	bool eventIsValidLevelSequenceObject();
};

// Class GFxUI.GFxAction_OpenMovie
// 0x0048 (0x0160 - 0x01A8)
class UGFxAction_OpenMovie : public USequenceAction
{
public:
	class USwfMovie*                                   Movie;                                         // 0x0160 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UClass*                                      MoviePlayerClass;                              // 0x0168 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UGFxMoviePlayer*                             MoviePlayer;                                   // 0x0170 (0x0008) [0x0000000000000000]               
	uint32_t                                           bTakeFocus : 1;                                // 0x0178 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bCaptureInput : 1;                             // 0x0178 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bStartPaused : 1;                              // 0x0178 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bEnableGammaCorrection : 1;                    // 0x0178 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bDisplayWithHudOff : 1;                        // 0x0178 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	EGFxRenderTextureMode                              RenderTextureMode;                             // 0x017C (0x0001) [0x0000000000000001] (CPF_Edit)    
	class UTextureRenderTarget2D*                      RenderTexture;                                 // 0x0180 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FName>                               CaptureKeys;                                   // 0x0188 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FName>                               FocusIgnoreKeys;                               // 0x0198 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxAction_OpenMovie");
		}

		return uClassPointer;
	};

	bool eventIsValidLevelSequenceObject();
};

// Class GFxUI.GFxAction_SetCaptureKeys
// 0x0018 (0x0160 - 0x0178)
class UGFxAction_SetCaptureKeys : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                         // 0x0160 (0x0008) [0x0000000000000000]               
	TArray<struct FName>                               CaptureKeys;                                   // 0x0168 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxAction_SetCaptureKeys");
		}

		return uClassPointer;
	};

};

// Class GFxUI.GFxAction_SetVariable
// 0x0018 (0x0160 - 0x0178)
class UGFxAction_SetVariable : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                         // 0x0160 (0x0008) [0x0000000000000000]               
	class FString                                      Variable;                                      // 0x0168 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxAction_SetVariable");
		}

		return uClassPointer;
	};

	bool eventIsValidLevelSequenceObject();
};

// Class GFxUI.GFxEvent_FSCommand
// 0x0024 (0x017C - 0x01A0)
class UGFxEvent_FSCommand : public USequenceEvent
{
public:
	class USwfMovie*                                   Movie;                                         // 0x0180 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FString                                      FSCommand;                                     // 0x0188 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UGFxFSCmdHandler_Kismet*                     Handler;                                       // 0x0198 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxEvent_FSCommand");
		}

		return uClassPointer;
	};

};

// Class GFxUI.GFxFSCmdHandler_Kismet
// 0x0000 (0x0060 - 0x0060)
class UGFxFSCmdHandler_Kismet : public UGFxFSCmdHandler
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxFSCmdHandler_Kismet");
		}

		return uClassPointer;
	};

	bool eventFSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, class FString Cmd, class FString Arg);
};

// Class GFxUI.GFxClikWidget
// 0x0018 (0x00A0 - 0x00B8)
class UGFxClikWidget : public UGFxObject
{
public:
	struct FScriptDelegate                             __EventListener__Delegate;                     // 0x00A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxClikWidget");
		}

		return uClassPointer;
	};

	void ASRemoveAllEventListeners(class FString Event);
	void AS3AddEventListener(class FString Type, class UGFxObject* O, bool optionalUseCapture, int32_t optionalListenerPriority, bool optionalUseWeakReference);
	void ASAddEventListener(class FString Type, class UGFxObject* O, class FString func);
	void SetListener(class UGFxObject* O, class FString Member, struct FScriptDelegate Listener);
	class FString GetEventStringFromTypename(struct FName Typename);
	void RemoveAllEventListeners(class FString Event);
	void AddEventListener(struct FName Type, struct FScriptDelegate Listener, bool optionalUseCapture, int32_t optionalListenerPriority, bool optionalUseWeakReference);
	void EventListener(struct FEventData Data);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
