/*
#############################################################################################
# RocketLeague (1.0.10897.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: WinDrv_classes.hpp
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


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class WinDrv.FacebookWindows
// 0x0010 (0x00E8 - 0x00F8)
class UFacebookWindows : public UFacebookIntegration
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x00E8 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    ChildProcHandle;                               // 0x00F0 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.FacebookWindows");
		}

		return uClassPointer;
	};

	void OnFacebookFriendsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void eventRequestFacebookFriends();
	void OnFacebookMeRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void eventRequestFacebookMeInfo();
	void FacebookRequestCallback(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void ProcessFacebookRequest(class FString Payload, int32_t ResponseCode);
	void FacebookRequest(class FString GraphRequest, class FString optionalHTTPMethod, TArray<class FString> optionalParamKeysAndValues);
	void Disconnect();
	bool IsAuthorized();
	bool Authorize();
	bool Init();
};

// Class WinDrv.HttpRequestWindows
// 0x0030 (0x0078 - 0x00A8)
class UHttpRequestWindows : public UHttpRequestInterface
{
public:
	struct FPointer                                    Request;                                       // 0x0078 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class FString                                      RequestVerb;                                   // 0x0080 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    RequestURL;                                    // 0x0090 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	TArray<uint8_t>                                    Payload;                                       // 0x0098 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.HttpRequestWindows");
		}

		return uClassPointer;
	};

	bool ProcessRequest();
	class UHttpRequestInterface* SetHeader(class FString HeaderName, class FString HeaderValue);
	class UHttpRequestInterface* SetContentAsString(class FString ContentString);
	class UHttpRequestInterface* SetContent(TArray<uint8_t>& ContentPayload);
	class UHttpRequestInterface* SetURL(class FString URL);
	class UHttpRequestInterface* SetVerb(class FString Verb);
	class FString GetVerb();
	void GetContent(TArray<uint8_t>& Content);
	class FString GetURL();
	int32_t GetContentLength();
	class FString GetContentType();
	class FString GetURLParameter(class FString ParameterName);
	TArray<class FString> GetHeaders();
	class FString GetHeader(class FString HeaderName);
};

// Class WinDrv.HttpResponseWindows
// 0x0018 (0x0060 - 0x0078)
class UHttpResponseWindows : public UHttpResponseInterface
{
public:
	struct FPointer                                    Response;                                      // 0x0060 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	TArray<uint8_t>                                    Payload;                                       // 0x0068 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.HttpResponseWindows");
		}

		return uClassPointer;
	};

	int32_t GetResponseCode();
	class FString GetContentAsString();
	void GetContent(TArray<uint8_t>& Content);
	class FString GetURL();
	int32_t GetContentLength();
	class FString GetContentType();
	class FString GetURLParameter(class FString ParameterName);
	TArray<class FString> GetHeaders();
	class FString GetHeader(class FString HeaderName);
};

// Class WinDrv.WindowsClient
// 0x0348 (0x0078 - 0x03C0)
class UWindowsClient : public UClient
{
public:
	uint8_t                                           UnknownData00[0x200];                          // 0x0078 (0x0200) MISSED OFFSET
	class UClass*                                      AudioDeviceClass;                              // 0x0278 (0x0008) [0x0000000000004000] (CPF_Config)  
	uint8_t                                           UnknownData01[0x38];                           // 0x0280 (0x0038) MISSED OFFSET
	int32_t                                            AllowJoystickInput;                            // 0x02B8 (0x0004) [0x0000000000004000] (CPF_Config)  
	uint8_t                                           UnknownData02[0x104];                          // 0x02BC (0x0104) FINAL PADDING

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.WindowsClient");
		}

		return uClassPointer;
	};

};

// Class WinDrv.XnaForceFeedbackManager
// 0x0018 (0x0098 - 0x00B0)
class UXnaForceFeedbackManager : public UForceFeedbackManager
{
public:
	uint8_t                                           UnknownData00[0x18];                           // 0x0098 (0x0018) FINAL PADDING

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.XnaForceFeedbackManager");
		}

		return uClassPointer;
	};

};

// Class WinDrv.HttpRequestWindowsMcp
// 0x0020 (0x00A8 - 0x00C8)
class UHttpRequestWindowsMcp : public UHttpRequestWindows
{
public:
	class FString                                      AppID;                                         // 0x00A8 (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	class FString                                      AppSecret;                                     // 0x00B8 (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.HttpRequestWindowsMcp");
		}

		return uClassPointer;
	};

	bool ProcessRequest();
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
