/*
#############################################################################################
# RocketLeague (1.0.10897.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: WinDrv_classes.cpp
# ========================================================================================= #
# Credits: TheFeckless, ItsBranK
# Links: www.github.com/CodeRedModding/CodeRed-Generator, www.twitter.com/ItsBranK
#############################################################################################
*/
#include "../SdkHeaders.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function WinDrv.FacebookWindows.OnFacebookFriendsRequestComplete
// [0x00840003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bDidSucceed                    (CPF_Parm)

void UFacebookWindows::OnFacebookFriendsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed)
{
	static UFunction* uFnOnFacebookFriendsRequestComplete = nullptr;

	if (!uFnOnFacebookFriendsRequestComplete)
	{
		uFnOnFacebookFriendsRequestComplete = UFunction::FindFunction("Function WinDrv.FacebookWindows.OnFacebookFriendsRequestComplete");
	}

	UFacebookWindows_execOnFacebookFriendsRequestComplete_Params OnFacebookFriendsRequestComplete_Params;
	memset(&OnFacebookFriendsRequestComplete_Params, 0, sizeof(OnFacebookFriendsRequestComplete_Params));
	memcpy_s(&OnFacebookFriendsRequestComplete_Params.OriginalRequest, sizeof(OnFacebookFriendsRequestComplete_Params.OriginalRequest), &OriginalRequest, sizeof(OriginalRequest));
	memcpy_s(&OnFacebookFriendsRequestComplete_Params.Response, sizeof(OnFacebookFriendsRequestComplete_Params.Response), &Response, sizeof(Response));
	OnFacebookFriendsRequestComplete_Params.bDidSucceed = bDidSucceed;

	this->ProcessEvent(uFnOnFacebookFriendsRequestComplete, &OnFacebookFriendsRequestComplete_Params, nullptr);
};

// Function WinDrv.FacebookWindows.RequestFacebookFriends
// [0x00040803] (FUNC_Final | FUNC_Defined | FUNC_Event | FUNC_Private | FUNC_AllFlags)
// Parameter Info:

void UFacebookWindows::eventRequestFacebookFriends()
{
	static UFunction* uFnRequestFacebookFriends = nullptr;

	if (!uFnRequestFacebookFriends)
	{
		uFnRequestFacebookFriends = UFunction::FindFunction("Function WinDrv.FacebookWindows.RequestFacebookFriends");
	}

	UFacebookWindows_eventRequestFacebookFriends_Params RequestFacebookFriends_Params;
	memset(&RequestFacebookFriends_Params, 0, sizeof(RequestFacebookFriends_Params));

	this->ProcessEvent(uFnRequestFacebookFriends, &RequestFacebookFriends_Params, nullptr);
};

// Function WinDrv.FacebookWindows.OnFacebookMeRequestComplete
// [0x00840003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bDidSucceed                    (CPF_Parm)

void UFacebookWindows::OnFacebookMeRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed)
{
	static UFunction* uFnOnFacebookMeRequestComplete = nullptr;

	if (!uFnOnFacebookMeRequestComplete)
	{
		uFnOnFacebookMeRequestComplete = UFunction::FindFunction("Function WinDrv.FacebookWindows.OnFacebookMeRequestComplete");
	}

	UFacebookWindows_execOnFacebookMeRequestComplete_Params OnFacebookMeRequestComplete_Params;
	memset(&OnFacebookMeRequestComplete_Params, 0, sizeof(OnFacebookMeRequestComplete_Params));
	memcpy_s(&OnFacebookMeRequestComplete_Params.OriginalRequest, sizeof(OnFacebookMeRequestComplete_Params.OriginalRequest), &OriginalRequest, sizeof(OriginalRequest));
	memcpy_s(&OnFacebookMeRequestComplete_Params.Response, sizeof(OnFacebookMeRequestComplete_Params.Response), &Response, sizeof(Response));
	OnFacebookMeRequestComplete_Params.bDidSucceed = bDidSucceed;

	this->ProcessEvent(uFnOnFacebookMeRequestComplete, &OnFacebookMeRequestComplete_Params, nullptr);
};

// Function WinDrv.FacebookWindows.RequestFacebookMeInfo
// [0x00040803] (FUNC_Final | FUNC_Defined | FUNC_Event | FUNC_Private | FUNC_AllFlags)
// Parameter Info:

void UFacebookWindows::eventRequestFacebookMeInfo()
{
	static UFunction* uFnRequestFacebookMeInfo = nullptr;

	if (!uFnRequestFacebookMeInfo)
	{
		uFnRequestFacebookMeInfo = UFunction::FindFunction("Function WinDrv.FacebookWindows.RequestFacebookMeInfo");
	}

	UFacebookWindows_eventRequestFacebookMeInfo_Params RequestFacebookMeInfo_Params;
	memset(&RequestFacebookMeInfo_Params, 0, sizeof(RequestFacebookMeInfo_Params));

	this->ProcessEvent(uFnRequestFacebookMeInfo, &RequestFacebookMeInfo_Params, nullptr);
};

// Function WinDrv.FacebookWindows.FacebookRequestCallback
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bDidSucceed                    (CPF_Parm)

void UFacebookWindows::FacebookRequestCallback(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed)
{
	static UFunction* uFnFacebookRequestCallback = nullptr;

	if (!uFnFacebookRequestCallback)
	{
		uFnFacebookRequestCallback = UFunction::FindFunction("Function WinDrv.FacebookWindows.FacebookRequestCallback");
	}

	UFacebookWindows_execFacebookRequestCallback_Params FacebookRequestCallback_Params;
	memset(&FacebookRequestCallback_Params, 0, sizeof(FacebookRequestCallback_Params));
	memcpy_s(&FacebookRequestCallback_Params.OriginalRequest, sizeof(FacebookRequestCallback_Params.OriginalRequest), &OriginalRequest, sizeof(OriginalRequest));
	memcpy_s(&FacebookRequestCallback_Params.Response, sizeof(FacebookRequestCallback_Params.Response), &Response, sizeof(Response));
	FacebookRequestCallback_Params.bDidSucceed = bDidSucceed;

	this->ProcessEvent(uFnFacebookRequestCallback, &FacebookRequestCallback_Params, nullptr);
};

// Function WinDrv.FacebookWindows.ProcessFacebookRequest
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Payload                        (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        ResponseCode                   (CPF_Parm)

void UFacebookWindows::ProcessFacebookRequest(class FString Payload, int32_t ResponseCode)
{
	static UFunction* uFnProcessFacebookRequest = nullptr;

	if (!uFnProcessFacebookRequest)
	{
		uFnProcessFacebookRequest = UFunction::FindFunction("Function WinDrv.FacebookWindows.ProcessFacebookRequest");
	}

	UFacebookWindows_execProcessFacebookRequest_Params ProcessFacebookRequest_Params;
	memset(&ProcessFacebookRequest_Params, 0, sizeof(ProcessFacebookRequest_Params));
	memcpy_s(&ProcessFacebookRequest_Params.Payload, sizeof(ProcessFacebookRequest_Params.Payload), &Payload, sizeof(Payload));
	memcpy_s(&ProcessFacebookRequest_Params.ResponseCode, sizeof(ProcessFacebookRequest_Params.ResponseCode), &ResponseCode, sizeof(ResponseCode));

	uFnProcessFacebookRequest->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnProcessFacebookRequest, &ProcessFacebookRequest_Params, nullptr);
	uFnProcessFacebookRequest->FunctionFlags |= 0x400;
};

// Function WinDrv.FacebookWindows.FacebookRequest
// [0x400024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  GraphRequest                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  HTTPMethod                     (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// TArray<class FString>          ParamKeysAndValues             (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

void UFacebookWindows::FacebookRequest(class FString GraphRequest, class FString HTTPMethod, TArray<class FString> ParamKeysAndValues)
{
	static UFunction* uFnFacebookRequest = nullptr;

	if (!uFnFacebookRequest)
	{
		uFnFacebookRequest = UFunction::FindFunction("Function WinDrv.FacebookWindows.FacebookRequest");
	}

	UFacebookWindows_execFacebookRequest_Params FacebookRequest_Params;
	memset(&FacebookRequest_Params, 0, sizeof(FacebookRequest_Params));
	memcpy_s(&FacebookRequest_Params.GraphRequest, sizeof(FacebookRequest_Params.GraphRequest), &GraphRequest, sizeof(GraphRequest));
	memcpy_s(&FacebookRequest_Params.HTTPMethod, sizeof(FacebookRequest_Params.HTTPMethod), &HTTPMethod, sizeof(HTTPMethod));
	memcpy_s(&FacebookRequest_Params.ParamKeysAndValues, sizeof(FacebookRequest_Params.ParamKeysAndValues), &ParamKeysAndValues, sizeof(ParamKeysAndValues));

	this->ProcessEvent(uFnFacebookRequest, &FacebookRequest_Params, nullptr);
};

// Function WinDrv.FacebookWindows.Disconnect
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:

void UFacebookWindows::Disconnect()
{
	static UFunction* uFnDisconnect = nullptr;

	if (!uFnDisconnect)
	{
		uFnDisconnect = UFunction::FindFunction("Function WinDrv.FacebookWindows.Disconnect");
	}

	UFacebookWindows_execDisconnect_Params Disconnect_Params;
	memset(&Disconnect_Params, 0, sizeof(Disconnect_Params));

	uFnDisconnect->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDisconnect, &Disconnect_Params, nullptr);
	uFnDisconnect->FunctionFlags |= 0x400;
};

// Function WinDrv.FacebookWindows.IsAuthorized
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UFacebookWindows::IsAuthorized()
{
	static UFunction* uFnIsAuthorized = nullptr;

	if (!uFnIsAuthorized)
	{
		uFnIsAuthorized = UFunction::FindFunction("Function WinDrv.FacebookWindows.IsAuthorized");
	}

	UFacebookWindows_execIsAuthorized_Params IsAuthorized_Params;
	memset(&IsAuthorized_Params, 0, sizeof(IsAuthorized_Params));

	uFnIsAuthorized->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsAuthorized, &IsAuthorized_Params, nullptr);
	uFnIsAuthorized->FunctionFlags |= 0x400;

	return IsAuthorized_Params.ReturnValue;
};

// Function WinDrv.FacebookWindows.Authorize
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UFacebookWindows::Authorize()
{
	static UFunction* uFnAuthorize = nullptr;

	if (!uFnAuthorize)
	{
		uFnAuthorize = UFunction::FindFunction("Function WinDrv.FacebookWindows.Authorize");
	}

	UFacebookWindows_execAuthorize_Params Authorize_Params;
	memset(&Authorize_Params, 0, sizeof(Authorize_Params));

	uFnAuthorize->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAuthorize, &Authorize_Params, nullptr);
	uFnAuthorize->FunctionFlags |= 0x400;

	return Authorize_Params.ReturnValue;
};

// Function WinDrv.FacebookWindows.Init
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UFacebookWindows::Init()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function WinDrv.FacebookWindows.Init");
	}

	UFacebookWindows_execInit_Params Init_Params;
	memset(&Init_Params, 0, sizeof(Init_Params));

	uFnInit->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
	uFnInit->FunctionFlags |= 0x400;

	return Init_Params.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.ProcessRequest
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UHttpRequestWindows::ProcessRequest()
{
	static UFunction* uFnProcessRequest = nullptr;

	if (!uFnProcessRequest)
	{
		uFnProcessRequest = UFunction::FindFunction("Function WinDrv.HttpRequestWindows.ProcessRequest");
	}

	UHttpRequestWindows_execProcessRequest_Params ProcessRequest_Params;
	memset(&ProcessRequest_Params, 0, sizeof(ProcessRequest_Params));

	uFnProcessRequest->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnProcessRequest, &ProcessRequest_Params, nullptr);
	uFnProcessRequest->FunctionFlags |= 0x400;

	return ProcessRequest_Params.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.SetHeader
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  HeaderName                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  HeaderValue                    (CPF_Parm | CPF_NeedCtorLink)

class UHttpRequestInterface* UHttpRequestWindows::SetHeader(class FString HeaderName, class FString HeaderValue)
{
	static UFunction* uFnSetHeader = nullptr;

	if (!uFnSetHeader)
	{
		uFnSetHeader = UFunction::FindFunction("Function WinDrv.HttpRequestWindows.SetHeader");
	}

	UHttpRequestWindows_execSetHeader_Params SetHeader_Params;
	memset(&SetHeader_Params, 0, sizeof(SetHeader_Params));
	memcpy_s(&SetHeader_Params.HeaderName, sizeof(SetHeader_Params.HeaderName), &HeaderName, sizeof(HeaderName));
	memcpy_s(&SetHeader_Params.HeaderValue, sizeof(SetHeader_Params.HeaderValue), &HeaderValue, sizeof(HeaderValue));

	uFnSetHeader->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetHeader, &SetHeader_Params, nullptr);
	uFnSetHeader->FunctionFlags |= 0x400;

	return SetHeader_Params.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.SetContentAsString
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  ContentString                  (CPF_Parm | CPF_NeedCtorLink)

class UHttpRequestInterface* UHttpRequestWindows::SetContentAsString(class FString ContentString)
{
	static UFunction* uFnSetContentAsString = nullptr;

	if (!uFnSetContentAsString)
	{
		uFnSetContentAsString = UFunction::FindFunction("Function WinDrv.HttpRequestWindows.SetContentAsString");
	}

	UHttpRequestWindows_execSetContentAsString_Params SetContentAsString_Params;
	memset(&SetContentAsString_Params, 0, sizeof(SetContentAsString_Params));
	memcpy_s(&SetContentAsString_Params.ContentString, sizeof(SetContentAsString_Params.ContentString), &ContentString, sizeof(ContentString));

	uFnSetContentAsString->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetContentAsString, &SetContentAsString_Params, nullptr);
	uFnSetContentAsString->FunctionFlags |= 0x400;

	return SetContentAsString_Params.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.SetContent
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// TArray<uint8_t>                ContentPayload                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

class UHttpRequestInterface* UHttpRequestWindows::SetContent(TArray<uint8_t>& ContentPayload)
{
	static UFunction* uFnSetContent = nullptr;

	if (!uFnSetContent)
	{
		uFnSetContent = UFunction::FindFunction("Function WinDrv.HttpRequestWindows.SetContent");
	}

	UHttpRequestWindows_execSetContent_Params SetContent_Params;
	memset(&SetContent_Params, 0, sizeof(SetContent_Params));
	memcpy_s(&SetContent_Params.ContentPayload, sizeof(SetContent_Params.ContentPayload), &ContentPayload, sizeof(ContentPayload));

	uFnSetContent->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetContent, &SetContent_Params, nullptr);
	uFnSetContent->FunctionFlags |= 0x400;

	memcpy_s(&ContentPayload, sizeof(ContentPayload), &SetContent_Params.ContentPayload, sizeof(SetContent_Params.ContentPayload));

	return SetContent_Params.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.SetURL
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  URL                            (CPF_Parm | CPF_NeedCtorLink)

class UHttpRequestInterface* UHttpRequestWindows::SetURL(class FString URL)
{
	static UFunction* uFnSetURL = nullptr;

	if (!uFnSetURL)
	{
		uFnSetURL = UFunction::FindFunction("Function WinDrv.HttpRequestWindows.SetURL");
	}

	UHttpRequestWindows_execSetURL_Params SetURL_Params;
	memset(&SetURL_Params, 0, sizeof(SetURL_Params));
	memcpy_s(&SetURL_Params.URL, sizeof(SetURL_Params.URL), &URL, sizeof(URL));

	uFnSetURL->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetURL, &SetURL_Params, nullptr);
	uFnSetURL->FunctionFlags |= 0x400;

	return SetURL_Params.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.SetVerb
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Verb                           (CPF_Parm | CPF_NeedCtorLink)

class UHttpRequestInterface* UHttpRequestWindows::SetVerb(class FString Verb)
{
	static UFunction* uFnSetVerb = nullptr;

	if (!uFnSetVerb)
	{
		uFnSetVerb = UFunction::FindFunction("Function WinDrv.HttpRequestWindows.SetVerb");
	}

	UHttpRequestWindows_execSetVerb_Params SetVerb_Params;
	memset(&SetVerb_Params, 0, sizeof(SetVerb_Params));
	memcpy_s(&SetVerb_Params.Verb, sizeof(SetVerb_Params.Verb), &Verb, sizeof(Verb));

	uFnSetVerb->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetVerb, &SetVerb_Params, nullptr);
	uFnSetVerb->FunctionFlags |= 0x400;

	return SetVerb_Params.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.GetVerb
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UHttpRequestWindows::GetVerb()
{
	static UFunction* uFnGetVerb = nullptr;

	if (!uFnGetVerb)
	{
		uFnGetVerb = UFunction::FindFunction("Function WinDrv.HttpRequestWindows.GetVerb");
	}

	UHttpRequestWindows_execGetVerb_Params GetVerb_Params;
	memset(&GetVerb_Params, 0, sizeof(GetVerb_Params));

	uFnGetVerb->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetVerb, &GetVerb_Params, nullptr);
	uFnGetVerb->FunctionFlags |= 0x400;

	return GetVerb_Params.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.GetContent
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// TArray<uint8_t>                Content                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UHttpRequestWindows::GetContent(TArray<uint8_t>& Content)
{
	static UFunction* uFnGetContent = nullptr;

	if (!uFnGetContent)
	{
		uFnGetContent = UFunction::FindFunction("Function WinDrv.HttpRequestWindows.GetContent");
	}

	UHttpRequestWindows_execGetContent_Params GetContent_Params;
	memset(&GetContent_Params, 0, sizeof(GetContent_Params));
	memcpy_s(&GetContent_Params.Content, sizeof(GetContent_Params.Content), &Content, sizeof(Content));

	uFnGetContent->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetContent, &GetContent_Params, nullptr);
	uFnGetContent->FunctionFlags |= 0x400;

	memcpy_s(&Content, sizeof(Content), &GetContent_Params.Content, sizeof(GetContent_Params.Content));
};

// Function WinDrv.HttpRequestWindows.GetURL
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UHttpRequestWindows::GetURL()
{
	static UFunction* uFnGetURL = nullptr;

	if (!uFnGetURL)
	{
		uFnGetURL = UFunction::FindFunction("Function WinDrv.HttpRequestWindows.GetURL");
	}

	UHttpRequestWindows_execGetURL_Params GetURL_Params;
	memset(&GetURL_Params, 0, sizeof(GetURL_Params));

	uFnGetURL->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetURL, &GetURL_Params, nullptr);
	uFnGetURL->FunctionFlags |= 0x400;

	return GetURL_Params.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.GetContentLength
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UHttpRequestWindows::GetContentLength()
{
	static UFunction* uFnGetContentLength = nullptr;

	if (!uFnGetContentLength)
	{
		uFnGetContentLength = UFunction::FindFunction("Function WinDrv.HttpRequestWindows.GetContentLength");
	}

	UHttpRequestWindows_execGetContentLength_Params GetContentLength_Params;
	memset(&GetContentLength_Params, 0, sizeof(GetContentLength_Params));

	uFnGetContentLength->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetContentLength, &GetContentLength_Params, nullptr);
	uFnGetContentLength->FunctionFlags |= 0x400;

	return GetContentLength_Params.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.GetContentType
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UHttpRequestWindows::GetContentType()
{
	static UFunction* uFnGetContentType = nullptr;

	if (!uFnGetContentType)
	{
		uFnGetContentType = UFunction::FindFunction("Function WinDrv.HttpRequestWindows.GetContentType");
	}

	UHttpRequestWindows_execGetContentType_Params GetContentType_Params;
	memset(&GetContentType_Params, 0, sizeof(GetContentType_Params));

	uFnGetContentType->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetContentType, &GetContentType_Params, nullptr);
	uFnGetContentType->FunctionFlags |= 0x400;

	return GetContentType_Params.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.GetURLParameter
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  ParameterName                  (CPF_Parm | CPF_NeedCtorLink)

class FString UHttpRequestWindows::GetURLParameter(class FString ParameterName)
{
	static UFunction* uFnGetURLParameter = nullptr;

	if (!uFnGetURLParameter)
	{
		uFnGetURLParameter = UFunction::FindFunction("Function WinDrv.HttpRequestWindows.GetURLParameter");
	}

	UHttpRequestWindows_execGetURLParameter_Params GetURLParameter_Params;
	memset(&GetURLParameter_Params, 0, sizeof(GetURLParameter_Params));
	memcpy_s(&GetURLParameter_Params.ParameterName, sizeof(GetURLParameter_Params.ParameterName), &ParameterName, sizeof(ParameterName));

	uFnGetURLParameter->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetURLParameter, &GetURLParameter_Params, nullptr);
	uFnGetURLParameter->FunctionFlags |= 0x400;

	return GetURLParameter_Params.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.GetHeaders
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// TArray<class FString>          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<class FString> UHttpRequestWindows::GetHeaders()
{
	static UFunction* uFnGetHeaders = nullptr;

	if (!uFnGetHeaders)
	{
		uFnGetHeaders = UFunction::FindFunction("Function WinDrv.HttpRequestWindows.GetHeaders");
	}

	UHttpRequestWindows_execGetHeaders_Params GetHeaders_Params;
	memset(&GetHeaders_Params, 0, sizeof(GetHeaders_Params));

	uFnGetHeaders->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetHeaders, &GetHeaders_Params, nullptr);
	uFnGetHeaders->FunctionFlags |= 0x400;

	return GetHeaders_Params.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.GetHeader
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  HeaderName                     (CPF_Parm | CPF_NeedCtorLink)

class FString UHttpRequestWindows::GetHeader(class FString HeaderName)
{
	static UFunction* uFnGetHeader = nullptr;

	if (!uFnGetHeader)
	{
		uFnGetHeader = UFunction::FindFunction("Function WinDrv.HttpRequestWindows.GetHeader");
	}

	UHttpRequestWindows_execGetHeader_Params GetHeader_Params;
	memset(&GetHeader_Params, 0, sizeof(GetHeader_Params));
	memcpy_s(&GetHeader_Params.HeaderName, sizeof(GetHeader_Params.HeaderName), &HeaderName, sizeof(HeaderName));

	uFnGetHeader->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetHeader, &GetHeader_Params, nullptr);
	uFnGetHeader->FunctionFlags |= 0x400;

	return GetHeader_Params.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetResponseCode
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UHttpResponseWindows::GetResponseCode()
{
	static UFunction* uFnGetResponseCode = nullptr;

	if (!uFnGetResponseCode)
	{
		uFnGetResponseCode = UFunction::FindFunction("Function WinDrv.HttpResponseWindows.GetResponseCode");
	}

	UHttpResponseWindows_execGetResponseCode_Params GetResponseCode_Params;
	memset(&GetResponseCode_Params, 0, sizeof(GetResponseCode_Params));

	uFnGetResponseCode->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetResponseCode, &GetResponseCode_Params, nullptr);
	uFnGetResponseCode->FunctionFlags |= 0x400;

	return GetResponseCode_Params.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetContentAsString
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UHttpResponseWindows::GetContentAsString()
{
	static UFunction* uFnGetContentAsString = nullptr;

	if (!uFnGetContentAsString)
	{
		uFnGetContentAsString = UFunction::FindFunction("Function WinDrv.HttpResponseWindows.GetContentAsString");
	}

	UHttpResponseWindows_execGetContentAsString_Params GetContentAsString_Params;
	memset(&GetContentAsString_Params, 0, sizeof(GetContentAsString_Params));

	uFnGetContentAsString->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetContentAsString, &GetContentAsString_Params, nullptr);
	uFnGetContentAsString->FunctionFlags |= 0x400;

	return GetContentAsString_Params.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetContent
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// TArray<uint8_t>                Content                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UHttpResponseWindows::GetContent(TArray<uint8_t>& Content)
{
	static UFunction* uFnGetContent = nullptr;

	if (!uFnGetContent)
	{
		uFnGetContent = UFunction::FindFunction("Function WinDrv.HttpResponseWindows.GetContent");
	}

	UHttpResponseWindows_execGetContent_Params GetContent_Params;
	memset(&GetContent_Params, 0, sizeof(GetContent_Params));
	memcpy_s(&GetContent_Params.Content, sizeof(GetContent_Params.Content), &Content, sizeof(Content));

	uFnGetContent->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetContent, &GetContent_Params, nullptr);
	uFnGetContent->FunctionFlags |= 0x400;

	memcpy_s(&Content, sizeof(Content), &GetContent_Params.Content, sizeof(GetContent_Params.Content));
};

// Function WinDrv.HttpResponseWindows.GetURL
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UHttpResponseWindows::GetURL()
{
	static UFunction* uFnGetURL = nullptr;

	if (!uFnGetURL)
	{
		uFnGetURL = UFunction::FindFunction("Function WinDrv.HttpResponseWindows.GetURL");
	}

	UHttpResponseWindows_execGetURL_Params GetURL_Params;
	memset(&GetURL_Params, 0, sizeof(GetURL_Params));

	uFnGetURL->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetURL, &GetURL_Params, nullptr);
	uFnGetURL->FunctionFlags |= 0x400;

	return GetURL_Params.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetContentLength
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UHttpResponseWindows::GetContentLength()
{
	static UFunction* uFnGetContentLength = nullptr;

	if (!uFnGetContentLength)
	{
		uFnGetContentLength = UFunction::FindFunction("Function WinDrv.HttpResponseWindows.GetContentLength");
	}

	UHttpResponseWindows_execGetContentLength_Params GetContentLength_Params;
	memset(&GetContentLength_Params, 0, sizeof(GetContentLength_Params));

	uFnGetContentLength->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetContentLength, &GetContentLength_Params, nullptr);
	uFnGetContentLength->FunctionFlags |= 0x400;

	return GetContentLength_Params.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetContentType
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UHttpResponseWindows::GetContentType()
{
	static UFunction* uFnGetContentType = nullptr;

	if (!uFnGetContentType)
	{
		uFnGetContentType = UFunction::FindFunction("Function WinDrv.HttpResponseWindows.GetContentType");
	}

	UHttpResponseWindows_execGetContentType_Params GetContentType_Params;
	memset(&GetContentType_Params, 0, sizeof(GetContentType_Params));

	uFnGetContentType->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetContentType, &GetContentType_Params, nullptr);
	uFnGetContentType->FunctionFlags |= 0x400;

	return GetContentType_Params.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetURLParameter
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  ParameterName                  (CPF_Parm | CPF_NeedCtorLink)

class FString UHttpResponseWindows::GetURLParameter(class FString ParameterName)
{
	static UFunction* uFnGetURLParameter = nullptr;

	if (!uFnGetURLParameter)
	{
		uFnGetURLParameter = UFunction::FindFunction("Function WinDrv.HttpResponseWindows.GetURLParameter");
	}

	UHttpResponseWindows_execGetURLParameter_Params GetURLParameter_Params;
	memset(&GetURLParameter_Params, 0, sizeof(GetURLParameter_Params));
	memcpy_s(&GetURLParameter_Params.ParameterName, sizeof(GetURLParameter_Params.ParameterName), &ParameterName, sizeof(ParameterName));

	uFnGetURLParameter->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetURLParameter, &GetURLParameter_Params, nullptr);
	uFnGetURLParameter->FunctionFlags |= 0x400;

	return GetURLParameter_Params.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetHeaders
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// TArray<class FString>          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<class FString> UHttpResponseWindows::GetHeaders()
{
	static UFunction* uFnGetHeaders = nullptr;

	if (!uFnGetHeaders)
	{
		uFnGetHeaders = UFunction::FindFunction("Function WinDrv.HttpResponseWindows.GetHeaders");
	}

	UHttpResponseWindows_execGetHeaders_Params GetHeaders_Params;
	memset(&GetHeaders_Params, 0, sizeof(GetHeaders_Params));

	uFnGetHeaders->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetHeaders, &GetHeaders_Params, nullptr);
	uFnGetHeaders->FunctionFlags |= 0x400;

	return GetHeaders_Params.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetHeader
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  HeaderName                     (CPF_Parm | CPF_NeedCtorLink)

class FString UHttpResponseWindows::GetHeader(class FString HeaderName)
{
	static UFunction* uFnGetHeader = nullptr;

	if (!uFnGetHeader)
	{
		uFnGetHeader = UFunction::FindFunction("Function WinDrv.HttpResponseWindows.GetHeader");
	}

	UHttpResponseWindows_execGetHeader_Params GetHeader_Params;
	memset(&GetHeader_Params, 0, sizeof(GetHeader_Params));
	memcpy_s(&GetHeader_Params.HeaderName, sizeof(GetHeader_Params.HeaderName), &HeaderName, sizeof(HeaderName));

	uFnGetHeader->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetHeader, &GetHeader_Params, nullptr);
	uFnGetHeader->FunctionFlags |= 0x400;

	return GetHeader_Params.ReturnValue;
};

// Function WinDrv.HttpRequestWindowsMcp.ProcessRequest
// [0x400020002] (FUNC_Defined | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UHttpRequestWindowsMcp::ProcessRequest()
{
	static UFunction* uFnProcessRequest = nullptr;

	if (!uFnProcessRequest)
	{
		uFnProcessRequest = UFunction::FindFunction("Function WinDrv.HttpRequestWindowsMcp.ProcessRequest");
	}

	UHttpRequestWindowsMcp_execProcessRequest_Params ProcessRequest_Params;
	memset(&ProcessRequest_Params, 0, sizeof(ProcessRequest_Params));

	this->ProcessEvent(uFnProcessRequest, &ProcessRequest_Params, nullptr);

	return ProcessRequest_Params.ReturnValue;
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
