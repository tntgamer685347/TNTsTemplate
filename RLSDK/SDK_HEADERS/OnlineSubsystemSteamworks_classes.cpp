/*
#############################################################################################
# RocketLeague (1.0.10897.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_classes.cpp
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

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.RequestAuthTicket
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceSteamworks::RequestAuthTicket(struct FUniqueNetId PlayerID, struct FScriptDelegate Callback)
{
	static UFunction* uFnRequestAuthTicket = nullptr;

	if (!uFnRequestAuthTicket)
	{
		uFnRequestAuthTicket = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.RequestAuthTicket");
	}

	UOnlineAuthInterfaceSteamworks_execRequestAuthTicket_Params RequestAuthTicket_Params;
	memset(&RequestAuthTicket_Params, 0, sizeof(RequestAuthTicket_Params));
	memcpy_s(&RequestAuthTicket_Params.PlayerID, sizeof(RequestAuthTicket_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	memcpy_s(&RequestAuthTicket_Params.Callback, sizeof(RequestAuthTicket_Params.Callback), &Callback, sizeof(Callback));

	uFnRequestAuthTicket->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRequestAuthTicket, &RequestAuthTicket_Params, nullptr);
	uFnRequestAuthTicket->FunctionFlags |= 0x400;

	return RequestAuthTicket_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.RequiresAuthTicket
// [0x400020002] (FUNC_Defined | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineAuthInterfaceSteamworks::RequiresAuthTicket()
{
	static UFunction* uFnRequiresAuthTicket = nullptr;

	if (!uFnRequiresAuthTicket)
	{
		uFnRequiresAuthTicket = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.RequiresAuthTicket");
	}

	UOnlineAuthInterfaceSteamworks_execRequiresAuthTicket_Params RequiresAuthTicket_Params;
	memset(&RequiresAuthTicket_Params, 0, sizeof(RequiresAuthTicket_Params));

	this->ProcessEvent(uFnRequiresAuthTicket, &RequiresAuthTicket_Params, nullptr);

	return RequiresAuthTicket_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerAddr
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FIpAddr                 OutServerIP                    (CPF_Parm | CPF_OutParm)
// int32_t                        OutServerPort                  (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceSteamworks::GetServerAddr(struct FIpAddr& OutServerIP, int32_t& OutServerPort)
{
	static UFunction* uFnGetServerAddr = nullptr;

	if (!uFnGetServerAddr)
	{
		uFnGetServerAddr = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerAddr");
	}

	UOnlineAuthInterfaceSteamworks_execGetServerAddr_Params GetServerAddr_Params;
	memset(&GetServerAddr_Params, 0, sizeof(GetServerAddr_Params));
	memcpy_s(&GetServerAddr_Params.OutServerIP, sizeof(GetServerAddr_Params.OutServerIP), &OutServerIP, sizeof(OutServerIP));
	memcpy_s(&GetServerAddr_Params.OutServerPort, sizeof(GetServerAddr_Params.OutServerPort), &OutServerPort, sizeof(OutServerPort));

	uFnGetServerAddr->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetServerAddr, &GetServerAddr_Params, nullptr);
	uFnGetServerAddr->FunctionFlags |= 0x400;

	memcpy_s(&OutServerIP, sizeof(OutServerIP), &GetServerAddr_Params.OutServerIP, sizeof(GetServerAddr_Params.OutServerIP));
	memcpy_s(&OutServerPort, sizeof(OutServerPort), &GetServerAddr_Params.OutServerPort, sizeof(GetServerAddr_Params.OutServerPort));

	return GetServerAddr_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerUniqueId
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            OutServerUID                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceSteamworks::GetServerUniqueId(struct FUniqueNetId& OutServerUID)
{
	static UFunction* uFnGetServerUniqueId = nullptr;

	if (!uFnGetServerUniqueId)
	{
		uFnGetServerUniqueId = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerUniqueId");
	}

	UOnlineAuthInterfaceSteamworks_execGetServerUniqueId_Params GetServerUniqueId_Params;
	memset(&GetServerUniqueId_Params, 0, sizeof(GetServerUniqueId_Params));
	memcpy_s(&GetServerUniqueId_Params.OutServerUID, sizeof(GetServerUniqueId_Params.OutServerUID), &OutServerUID, sizeof(OutServerUID));

	uFnGetServerUniqueId->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetServerUniqueId, &GetServerUniqueId_Params, nullptr);
	uFnGetServerUniqueId->FunctionFlags |= 0x400;

	memcpy_s(&OutServerUID, sizeof(OutServerUID), &GetServerUniqueId_Params.OutServerUID, sizeof(GetServerUniqueId_Params.OutServerUID));

	return GetServerUniqueId_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyServerAuthSession
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ServerIP                       (CPF_Parm)
// int32_t                        AuthTicketUID                  (CPF_Parm)

bool UOnlineAuthInterfaceSteamworks::VerifyServerAuthSession(struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int32_t AuthTicketUID)
{
	static UFunction* uFnVerifyServerAuthSession = nullptr;

	if (!uFnVerifyServerAuthSession)
	{
		uFnVerifyServerAuthSession = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyServerAuthSession");
	}

	UOnlineAuthInterfaceSteamworks_execVerifyServerAuthSession_Params VerifyServerAuthSession_Params;
	memset(&VerifyServerAuthSession_Params, 0, sizeof(VerifyServerAuthSession_Params));
	memcpy_s(&VerifyServerAuthSession_Params.ServerUID, sizeof(VerifyServerAuthSession_Params.ServerUID), &ServerUID, sizeof(ServerUID));
	memcpy_s(&VerifyServerAuthSession_Params.ServerIP, sizeof(VerifyServerAuthSession_Params.ServerIP), &ServerIP, sizeof(ServerIP));
	memcpy_s(&VerifyServerAuthSession_Params.AuthTicketUID, sizeof(VerifyServerAuthSession_Params.AuthTicketUID), &AuthTicketUID, sizeof(AuthTicketUID));

	uFnVerifyServerAuthSession->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnVerifyServerAuthSession, &VerifyServerAuthSession_Params, nullptr);
	uFnVerifyServerAuthSession->FunctionFlags |= 0x400;

	return VerifyServerAuthSession_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateServerAuthSession
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ClientIP                       (CPF_Parm)
// int32_t                        ClientPort                     (CPF_Parm)
// int32_t                        OutAuthTicketUID               (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceSteamworks::CreateServerAuthSession(struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int32_t ClientPort, int32_t& OutAuthTicketUID)
{
	static UFunction* uFnCreateServerAuthSession = nullptr;

	if (!uFnCreateServerAuthSession)
	{
		uFnCreateServerAuthSession = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateServerAuthSession");
	}

	UOnlineAuthInterfaceSteamworks_execCreateServerAuthSession_Params CreateServerAuthSession_Params;
	memset(&CreateServerAuthSession_Params, 0, sizeof(CreateServerAuthSession_Params));
	memcpy_s(&CreateServerAuthSession_Params.ClientUID, sizeof(CreateServerAuthSession_Params.ClientUID), &ClientUID, sizeof(ClientUID));
	memcpy_s(&CreateServerAuthSession_Params.ClientIP, sizeof(CreateServerAuthSession_Params.ClientIP), &ClientIP, sizeof(ClientIP));
	memcpy_s(&CreateServerAuthSession_Params.ClientPort, sizeof(CreateServerAuthSession_Params.ClientPort), &ClientPort, sizeof(ClientPort));
	memcpy_s(&CreateServerAuthSession_Params.OutAuthTicketUID, sizeof(CreateServerAuthSession_Params.OutAuthTicketUID), &OutAuthTicketUID, sizeof(OutAuthTicketUID));

	uFnCreateServerAuthSession->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCreateServerAuthSession, &CreateServerAuthSession_Params, nullptr);
	uFnCreateServerAuthSession->FunctionFlags |= 0x400;

	memcpy_s(&OutAuthTicketUID, sizeof(OutAuthTicketUID), &CreateServerAuthSession_Params.OutAuthTicketUID, sizeof(CreateServerAuthSession_Params.OutAuthTicketUID));

	return CreateServerAuthSession_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyClientAuthSession
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ClientIP                       (CPF_Parm)
// int32_t                        ClientPort                     (CPF_Parm)
// int32_t                        AuthTicketUID                  (CPF_Parm)

bool UOnlineAuthInterfaceSteamworks::VerifyClientAuthSession(struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int32_t ClientPort, int32_t AuthTicketUID)
{
	static UFunction* uFnVerifyClientAuthSession = nullptr;

	if (!uFnVerifyClientAuthSession)
	{
		uFnVerifyClientAuthSession = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyClientAuthSession");
	}

	UOnlineAuthInterfaceSteamworks_execVerifyClientAuthSession_Params VerifyClientAuthSession_Params;
	memset(&VerifyClientAuthSession_Params, 0, sizeof(VerifyClientAuthSession_Params));
	memcpy_s(&VerifyClientAuthSession_Params.ClientUID, sizeof(VerifyClientAuthSession_Params.ClientUID), &ClientUID, sizeof(ClientUID));
	memcpy_s(&VerifyClientAuthSession_Params.ClientIP, sizeof(VerifyClientAuthSession_Params.ClientIP), &ClientIP, sizeof(ClientIP));
	memcpy_s(&VerifyClientAuthSession_Params.ClientPort, sizeof(VerifyClientAuthSession_Params.ClientPort), &ClientPort, sizeof(ClientPort));
	memcpy_s(&VerifyClientAuthSession_Params.AuthTicketUID, sizeof(VerifyClientAuthSession_Params.AuthTicketUID), &AuthTicketUID, sizeof(AuthTicketUID));

	uFnVerifyClientAuthSession->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnVerifyClientAuthSession, &VerifyClientAuthSession_Params, nullptr);
	uFnVerifyClientAuthSession->FunctionFlags |= 0x400;

	return VerifyClientAuthSession_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateClientAuthSession
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ServerIP                       (CPF_Parm)
// int32_t                        ServerPort                     (CPF_Parm)
// bool                           bSecure                        (CPF_Parm)
// int32_t                        OutAuthTicketUID               (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceSteamworks::CreateClientAuthSession(struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int32_t ServerPort, bool bSecure, int32_t& OutAuthTicketUID)
{
	static UFunction* uFnCreateClientAuthSession = nullptr;

	if (!uFnCreateClientAuthSession)
	{
		uFnCreateClientAuthSession = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateClientAuthSession");
	}

	UOnlineAuthInterfaceSteamworks_execCreateClientAuthSession_Params CreateClientAuthSession_Params;
	memset(&CreateClientAuthSession_Params, 0, sizeof(CreateClientAuthSession_Params));
	memcpy_s(&CreateClientAuthSession_Params.ServerUID, sizeof(CreateClientAuthSession_Params.ServerUID), &ServerUID, sizeof(ServerUID));
	memcpy_s(&CreateClientAuthSession_Params.ServerIP, sizeof(CreateClientAuthSession_Params.ServerIP), &ServerIP, sizeof(ServerIP));
	memcpy_s(&CreateClientAuthSession_Params.ServerPort, sizeof(CreateClientAuthSession_Params.ServerPort), &ServerPort, sizeof(ServerPort));
	CreateClientAuthSession_Params.bSecure = bSecure;
	memcpy_s(&CreateClientAuthSession_Params.OutAuthTicketUID, sizeof(CreateClientAuthSession_Params.OutAuthTicketUID), &OutAuthTicketUID, sizeof(OutAuthTicketUID));

	uFnCreateClientAuthSession->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCreateClientAuthSession, &CreateClientAuthSession_Params, nullptr);
	uFnCreateClientAuthSession->FunctionFlags |= 0x400;

	memcpy_s(&OutAuthTicketUID, sizeof(OutAuthTicketUID), &CreateClientAuthSession_Params.OutAuthTicketUID, sizeof(CreateClientAuthSession_Params.OutAuthTicketUID));

	return CreateClientAuthSession_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendServerAuthRequest
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceSteamworks::SendServerAuthRequest(struct FUniqueNetId ServerUID)
{
	static UFunction* uFnSendServerAuthRequest = nullptr;

	if (!uFnSendServerAuthRequest)
	{
		uFnSendServerAuthRequest = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendServerAuthRequest");
	}

	UOnlineAuthInterfaceSteamworks_execSendServerAuthRequest_Params SendServerAuthRequest_Params;
	memset(&SendServerAuthRequest_Params, 0, sizeof(SendServerAuthRequest_Params));
	memcpy_s(&SendServerAuthRequest_Params.ServerUID, sizeof(SendServerAuthRequest_Params.ServerUID), &ServerUID, sizeof(ServerUID));

	uFnSendServerAuthRequest->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSendServerAuthRequest, &SendServerAuthRequest_Params, nullptr);
	uFnSendServerAuthRequest->FunctionFlags |= 0x400;

	return SendServerAuthRequest_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendClientAuthRequest
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ClientConnection               (CPF_Parm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceSteamworks::SendClientAuthRequest(class UPlayer* ClientConnection, struct FUniqueNetId ClientUID)
{
	static UFunction* uFnSendClientAuthRequest = nullptr;

	if (!uFnSendClientAuthRequest)
	{
		uFnSendClientAuthRequest = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendClientAuthRequest");
	}

	UOnlineAuthInterfaceSteamworks_execSendClientAuthRequest_Params SendClientAuthRequest_Params;
	memset(&SendClientAuthRequest_Params, 0, sizeof(SendClientAuthRequest_Params));
	memcpy_s(&SendClientAuthRequest_Params.ClientConnection, sizeof(SendClientAuthRequest_Params.ClientConnection), &ClientConnection, sizeof(ClientConnection));
	memcpy_s(&SendClientAuthRequest_Params.ClientUID, sizeof(SendClientAuthRequest_Params.ClientUID), &ClientUID, sizeof(ClientUID));

	uFnSendClientAuthRequest->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSendClientAuthRequest, &SendClientAuthRequest_Params, nullptr);
	uFnSendClientAuthRequest->FunctionFlags |= 0x400;

	return SendClientAuthRequest_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.UpdateWorkshopItemUploadProgress
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlineCommunityContentInterfaceSteamworks::UpdateWorkshopItemUploadProgress()
{
	static UFunction* uFnUpdateWorkshopItemUploadProgress = nullptr;

	if (!uFnUpdateWorkshopItemUploadProgress)
	{
		uFnUpdateWorkshopItemUploadProgress = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.UpdateWorkshopItemUploadProgress");
	}

	UOnlineCommunityContentInterfaceSteamworks_execUpdateWorkshopItemUploadProgress_Params UpdateWorkshopItemUploadProgress_Params;
	memset(&UpdateWorkshopItemUploadProgress_Params, 0, sizeof(UpdateWorkshopItemUploadProgress_Params));

	uFnUpdateWorkshopItemUploadProgress->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUpdateWorkshopItemUploadProgress, &UpdateWorkshopItemUploadProgress_Params, nullptr);
	uFnUpdateWorkshopItemUploadProgress->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.DownloadAllWorkshopData
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::DownloadAllWorkshopData(struct FScriptDelegate Callback)
{
	static UFunction* uFnDownloadAllWorkshopData = nullptr;

	if (!uFnDownloadAllWorkshopData)
	{
		uFnDownloadAllWorkshopData = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.DownloadAllWorkshopData");
	}

	UOnlineCommunityContentInterfaceSteamworks_execDownloadAllWorkshopData_Params DownloadAllWorkshopData_Params;
	memset(&DownloadAllWorkshopData_Params, 0, sizeof(DownloadAllWorkshopData_Params));
	memcpy_s(&DownloadAllWorkshopData_Params.Callback, sizeof(DownloadAllWorkshopData_Params.Callback), &Callback, sizeof(Callback));

	uFnDownloadAllWorkshopData->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDownloadAllWorkshopData, &DownloadAllWorkshopData_Params, nullptr);
	uFnDownloadAllWorkshopData->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.CreateWorkshopItem
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlineCommunityContentInterfaceSteamworks::CreateWorkshopItem()
{
	static UFunction* uFnCreateWorkshopItem = nullptr;

	if (!uFnCreateWorkshopItem)
	{
		uFnCreateWorkshopItem = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.CreateWorkshopItem");
	}

	UOnlineCommunityContentInterfaceSteamworks_execCreateWorkshopItem_Params CreateWorkshopItem_Params;
	memset(&CreateWorkshopItem_Params, 0, sizeof(CreateWorkshopItem_Params));

	uFnCreateWorkshopItem->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCreateWorkshopItem, &CreateWorkshopItem_Params, nullptr);
	uFnCreateWorkshopItem->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.RateContent
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        PlayerNum                      (CPF_Parm)
// int32_t                        NewRating                      (CPF_Parm)
// struct FCommunityContentFile   FileToRate                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::RateContent(uint8_t PlayerNum, int32_t NewRating, struct FCommunityContentFile& FileToRate)
{
	static UFunction* uFnRateContent = nullptr;

	if (!uFnRateContent)
	{
		uFnRateContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.RateContent");
	}

	UOnlineCommunityContentInterfaceSteamworks_execRateContent_Params RateContent_Params;
	memset(&RateContent_Params, 0, sizeof(RateContent_Params));
	memcpy_s(&RateContent_Params.PlayerNum, sizeof(RateContent_Params.PlayerNum), &PlayerNum, sizeof(PlayerNum));
	memcpy_s(&RateContent_Params.NewRating, sizeof(RateContent_Params.NewRating), &NewRating, sizeof(NewRating));
	memcpy_s(&RateContent_Params.FileToRate, sizeof(RateContent_Params.FileToRate), &FileToRate, sizeof(FileToRate));

	this->ProcessEvent(uFnRateContent, &RateContent_Params, nullptr);

	memcpy_s(&FileToRate, sizeof(FileToRate), &RateContent_Params.FileToRate, sizeof(RateContent_Params.FileToRate));
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearGetContentPayloadCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         GetContentPayloadCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::ClearGetContentPayloadCompleteDelegate(struct FScriptDelegate GetContentPayloadCompleteDelegate)
{
	static UFunction* uFnClearGetContentPayloadCompleteDelegate = nullptr;

	if (!uFnClearGetContentPayloadCompleteDelegate)
	{
		uFnClearGetContentPayloadCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearGetContentPayloadCompleteDelegate");
	}

	UOnlineCommunityContentInterfaceSteamworks_execClearGetContentPayloadCompleteDelegate_Params ClearGetContentPayloadCompleteDelegate_Params;
	memset(&ClearGetContentPayloadCompleteDelegate_Params, 0, sizeof(ClearGetContentPayloadCompleteDelegate_Params));
	memcpy_s(&ClearGetContentPayloadCompleteDelegate_Params.GetContentPayloadCompleteDelegate, sizeof(ClearGetContentPayloadCompleteDelegate_Params.GetContentPayloadCompleteDelegate), &GetContentPayloadCompleteDelegate, sizeof(GetContentPayloadCompleteDelegate));

	this->ProcessEvent(uFnClearGetContentPayloadCompleteDelegate, &ClearGetContentPayloadCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddGetContentPayloadCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         GetContentPayloadCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::AddGetContentPayloadCompleteDelegate(struct FScriptDelegate GetContentPayloadCompleteDelegate)
{
	static UFunction* uFnAddGetContentPayloadCompleteDelegate = nullptr;

	if (!uFnAddGetContentPayloadCompleteDelegate)
	{
		uFnAddGetContentPayloadCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddGetContentPayloadCompleteDelegate");
	}

	UOnlineCommunityContentInterfaceSteamworks_execAddGetContentPayloadCompleteDelegate_Params AddGetContentPayloadCompleteDelegate_Params;
	memset(&AddGetContentPayloadCompleteDelegate_Params, 0, sizeof(AddGetContentPayloadCompleteDelegate_Params));
	memcpy_s(&AddGetContentPayloadCompleteDelegate_Params.GetContentPayloadCompleteDelegate, sizeof(AddGetContentPayloadCompleteDelegate_Params.GetContentPayloadCompleteDelegate), &GetContentPayloadCompleteDelegate, sizeof(GetContentPayloadCompleteDelegate));

	this->ProcessEvent(uFnAddGetContentPayloadCompleteDelegate, &AddGetContentPayloadCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnGetContentPayloadComplete
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FCommunityContentFile   FileDownloaded                 (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                Payload                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::OnGetContentPayloadComplete(bool bWasSuccessful, struct FCommunityContentFile FileDownloaded, TArray<uint8_t>& Payload)
{
	static UFunction* uFnOnGetContentPayloadComplete = nullptr;

	if (!uFnOnGetContentPayloadComplete)
	{
		uFnOnGetContentPayloadComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnGetContentPayloadComplete");
	}

	UOnlineCommunityContentInterfaceSteamworks_execOnGetContentPayloadComplete_Params OnGetContentPayloadComplete_Params;
	memset(&OnGetContentPayloadComplete_Params, 0, sizeof(OnGetContentPayloadComplete_Params));
	OnGetContentPayloadComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnGetContentPayloadComplete_Params.FileDownloaded, sizeof(OnGetContentPayloadComplete_Params.FileDownloaded), &FileDownloaded, sizeof(FileDownloaded));
	memcpy_s(&OnGetContentPayloadComplete_Params.Payload, sizeof(OnGetContentPayloadComplete_Params.Payload), &Payload, sizeof(Payload));

	this->ProcessEvent(uFnOnGetContentPayloadComplete, &OnGetContentPayloadComplete_Params, nullptr);

	memcpy_s(&Payload, sizeof(Payload), &OnGetContentPayloadComplete_Params.Payload, sizeof(OnGetContentPayloadComplete_Params.Payload));
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetContentPayload
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        PlayerNum                      (CPF_Parm)
// struct FCommunityContentFile   FileDownloaded                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineCommunityContentInterfaceSteamworks::GetContentPayload(uint8_t PlayerNum, struct FCommunityContentFile& FileDownloaded)
{
	static UFunction* uFnGetContentPayload = nullptr;

	if (!uFnGetContentPayload)
	{
		uFnGetContentPayload = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetContentPayload");
	}

	UOnlineCommunityContentInterfaceSteamworks_execGetContentPayload_Params GetContentPayload_Params;
	memset(&GetContentPayload_Params, 0, sizeof(GetContentPayload_Params));
	memcpy_s(&GetContentPayload_Params.PlayerNum, sizeof(GetContentPayload_Params.PlayerNum), &PlayerNum, sizeof(PlayerNum));
	memcpy_s(&GetContentPayload_Params.FileDownloaded, sizeof(GetContentPayload_Params.FileDownloaded), &FileDownloaded, sizeof(FileDownloaded));

	this->ProcessEvent(uFnGetContentPayload, &GetContentPayload_Params, nullptr);

	memcpy_s(&FileDownloaded, sizeof(FileDownloaded), &GetContentPayload_Params.FileDownloaded, sizeof(GetContentPayload_Params.FileDownloaded));

	return GetContentPayload_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearDownloadContentCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         DownloadContentCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::ClearDownloadContentCompleteDelegate(struct FScriptDelegate DownloadContentCompleteDelegate)
{
	static UFunction* uFnClearDownloadContentCompleteDelegate = nullptr;

	if (!uFnClearDownloadContentCompleteDelegate)
	{
		uFnClearDownloadContentCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearDownloadContentCompleteDelegate");
	}

	UOnlineCommunityContentInterfaceSteamworks_execClearDownloadContentCompleteDelegate_Params ClearDownloadContentCompleteDelegate_Params;
	memset(&ClearDownloadContentCompleteDelegate_Params, 0, sizeof(ClearDownloadContentCompleteDelegate_Params));
	memcpy_s(&ClearDownloadContentCompleteDelegate_Params.DownloadContentCompleteDelegate, sizeof(ClearDownloadContentCompleteDelegate_Params.DownloadContentCompleteDelegate), &DownloadContentCompleteDelegate, sizeof(DownloadContentCompleteDelegate));

	this->ProcessEvent(uFnClearDownloadContentCompleteDelegate, &ClearDownloadContentCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddDownloadContentCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         DownloadContentCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::AddDownloadContentCompleteDelegate(struct FScriptDelegate DownloadContentCompleteDelegate)
{
	static UFunction* uFnAddDownloadContentCompleteDelegate = nullptr;

	if (!uFnAddDownloadContentCompleteDelegate)
	{
		uFnAddDownloadContentCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddDownloadContentCompleteDelegate");
	}

	UOnlineCommunityContentInterfaceSteamworks_execAddDownloadContentCompleteDelegate_Params AddDownloadContentCompleteDelegate_Params;
	memset(&AddDownloadContentCompleteDelegate_Params, 0, sizeof(AddDownloadContentCompleteDelegate_Params));
	memcpy_s(&AddDownloadContentCompleteDelegate_Params.DownloadContentCompleteDelegate, sizeof(AddDownloadContentCompleteDelegate_Params.DownloadContentCompleteDelegate), &DownloadContentCompleteDelegate, sizeof(DownloadContentCompleteDelegate));

	this->ProcessEvent(uFnAddDownloadContentCompleteDelegate, &AddDownloadContentCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnDownloadContentComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FCommunityContentFile   FileDownloaded                 (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                Payload                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::OnDownloadContentComplete(bool bWasSuccessful, struct FCommunityContentFile FileDownloaded, TArray<uint8_t> Payload)
{
	static UFunction* uFnOnDownloadContentComplete = nullptr;

	if (!uFnOnDownloadContentComplete)
	{
		uFnOnDownloadContentComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnDownloadContentComplete");
	}

	UOnlineCommunityContentInterfaceSteamworks_execOnDownloadContentComplete_Params OnDownloadContentComplete_Params;
	memset(&OnDownloadContentComplete_Params, 0, sizeof(OnDownloadContentComplete_Params));
	OnDownloadContentComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDownloadContentComplete_Params.FileDownloaded, sizeof(OnDownloadContentComplete_Params.FileDownloaded), &FileDownloaded, sizeof(FileDownloaded));
	memcpy_s(&OnDownloadContentComplete_Params.Payload, sizeof(OnDownloadContentComplete_Params.Payload), &Payload, sizeof(Payload));

	this->ProcessEvent(uFnOnDownloadContentComplete, &OnDownloadContentComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.DownloadContent
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        PlayerNum                      (CPF_Parm)
// struct FCommunityContentFile   FileToDownload                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineCommunityContentInterfaceSteamworks::DownloadContent(uint8_t PlayerNum, struct FCommunityContentFile& FileToDownload)
{
	static UFunction* uFnDownloadContent = nullptr;

	if (!uFnDownloadContent)
	{
		uFnDownloadContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.DownloadContent");
	}

	UOnlineCommunityContentInterfaceSteamworks_execDownloadContent_Params DownloadContent_Params;
	memset(&DownloadContent_Params, 0, sizeof(DownloadContent_Params));
	memcpy_s(&DownloadContent_Params.PlayerNum, sizeof(DownloadContent_Params.PlayerNum), &PlayerNum, sizeof(PlayerNum));
	memcpy_s(&DownloadContent_Params.FileToDownload, sizeof(DownloadContent_Params.FileToDownload), &FileToDownload, sizeof(FileToDownload));

	this->ProcessEvent(uFnDownloadContent, &DownloadContent_Params, nullptr);

	memcpy_s(&FileToDownload, sizeof(FileToDownload), &DownloadContent_Params.FileToDownload, sizeof(DownloadContent_Params.FileToDownload));

	return DownloadContent_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearUploadContentCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UploadContentCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::ClearUploadContentCompleteDelegate(struct FScriptDelegate UploadContentCompleteDelegate)
{
	static UFunction* uFnClearUploadContentCompleteDelegate = nullptr;

	if (!uFnClearUploadContentCompleteDelegate)
	{
		uFnClearUploadContentCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearUploadContentCompleteDelegate");
	}

	UOnlineCommunityContentInterfaceSteamworks_execClearUploadContentCompleteDelegate_Params ClearUploadContentCompleteDelegate_Params;
	memset(&ClearUploadContentCompleteDelegate_Params, 0, sizeof(ClearUploadContentCompleteDelegate_Params));
	memcpy_s(&ClearUploadContentCompleteDelegate_Params.UploadContentCompleteDelegate, sizeof(ClearUploadContentCompleteDelegate_Params.UploadContentCompleteDelegate), &UploadContentCompleteDelegate, sizeof(UploadContentCompleteDelegate));

	this->ProcessEvent(uFnClearUploadContentCompleteDelegate, &ClearUploadContentCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddUploadContentCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UploadContentCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::AddUploadContentCompleteDelegate(struct FScriptDelegate UploadContentCompleteDelegate)
{
	static UFunction* uFnAddUploadContentCompleteDelegate = nullptr;

	if (!uFnAddUploadContentCompleteDelegate)
	{
		uFnAddUploadContentCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddUploadContentCompleteDelegate");
	}

	UOnlineCommunityContentInterfaceSteamworks_execAddUploadContentCompleteDelegate_Params AddUploadContentCompleteDelegate_Params;
	memset(&AddUploadContentCompleteDelegate_Params, 0, sizeof(AddUploadContentCompleteDelegate_Params));
	memcpy_s(&AddUploadContentCompleteDelegate_Params.UploadContentCompleteDelegate, sizeof(AddUploadContentCompleteDelegate_Params.UploadContentCompleteDelegate), &UploadContentCompleteDelegate, sizeof(UploadContentCompleteDelegate));

	this->ProcessEvent(uFnAddUploadContentCompleteDelegate, &AddUploadContentCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnUploadContentComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FCommunityContentFile   UploadedFile                   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::OnUploadContentComplete(bool bWasSuccessful, struct FCommunityContentFile UploadedFile)
{
	static UFunction* uFnOnUploadContentComplete = nullptr;

	if (!uFnOnUploadContentComplete)
	{
		uFnOnUploadContentComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnUploadContentComplete");
	}

	UOnlineCommunityContentInterfaceSteamworks_execOnUploadContentComplete_Params OnUploadContentComplete_Params;
	memset(&OnUploadContentComplete_Params, 0, sizeof(OnUploadContentComplete_Params));
	OnUploadContentComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnUploadContentComplete_Params.UploadedFile, sizeof(OnUploadContentComplete_Params.UploadedFile), &UploadedFile, sizeof(UploadedFile));

	this->ProcessEvent(uFnOnUploadContentComplete, &OnUploadContentComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.UploadContent
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        PlayerNum                      (CPF_Parm)
// TArray<uint8_t>                Payload                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// struct FCommunityContentMetadata MetaData                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineCommunityContentInterfaceSteamworks::UploadContent(uint8_t PlayerNum, TArray<uint8_t>& Payload, struct FCommunityContentMetadata& MetaData)
{
	static UFunction* uFnUploadContent = nullptr;

	if (!uFnUploadContent)
	{
		uFnUploadContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.UploadContent");
	}

	UOnlineCommunityContentInterfaceSteamworks_execUploadContent_Params UploadContent_Params;
	memset(&UploadContent_Params, 0, sizeof(UploadContent_Params));
	memcpy_s(&UploadContent_Params.PlayerNum, sizeof(UploadContent_Params.PlayerNum), &PlayerNum, sizeof(PlayerNum));
	memcpy_s(&UploadContent_Params.Payload, sizeof(UploadContent_Params.Payload), &Payload, sizeof(Payload));
	memcpy_s(&UploadContent_Params.MetaData, sizeof(UploadContent_Params.MetaData), &MetaData, sizeof(MetaData));

	this->ProcessEvent(uFnUploadContent, &UploadContent_Params, nullptr);

	memcpy_s(&Payload, sizeof(Payload), &UploadContent_Params.Payload, sizeof(UploadContent_Params.Payload));
	memcpy_s(&MetaData, sizeof(MetaData), &UploadContent_Params.MetaData, sizeof(UploadContent_Params.MetaData));

	return UploadContent_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetFriendsContentList
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        PlayerNum                      (CPF_Parm)
// struct FOnlineFriend           Friend                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<struct FCommunityContentFile> ContentFiles                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineCommunityContentInterfaceSteamworks::GetFriendsContentList(uint8_t PlayerNum, struct FOnlineFriend& Friend, TArray<struct FCommunityContentFile>& ContentFiles)
{
	static UFunction* uFnGetFriendsContentList = nullptr;

	if (!uFnGetFriendsContentList)
	{
		uFnGetFriendsContentList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetFriendsContentList");
	}

	UOnlineCommunityContentInterfaceSteamworks_execGetFriendsContentList_Params GetFriendsContentList_Params;
	memset(&GetFriendsContentList_Params, 0, sizeof(GetFriendsContentList_Params));
	memcpy_s(&GetFriendsContentList_Params.PlayerNum, sizeof(GetFriendsContentList_Params.PlayerNum), &PlayerNum, sizeof(PlayerNum));
	memcpy_s(&GetFriendsContentList_Params.Friend, sizeof(GetFriendsContentList_Params.Friend), &Friend, sizeof(Friend));
	memcpy_s(&GetFriendsContentList_Params.ContentFiles, sizeof(GetFriendsContentList_Params.ContentFiles), &ContentFiles, sizeof(ContentFiles));

	this->ProcessEvent(uFnGetFriendsContentList, &GetFriendsContentList_Params, nullptr);

	memcpy_s(&Friend, sizeof(Friend), &GetFriendsContentList_Params.Friend, sizeof(GetFriendsContentList_Params.Friend));
	memcpy_s(&ContentFiles, sizeof(ContentFiles), &GetFriendsContentList_Params.ContentFiles, sizeof(GetFriendsContentList_Params.ContentFiles));

	return GetFriendsContentList_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearReadFriendsContentListCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadFriendsContentListCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::ClearReadFriendsContentListCompleteDelegate(struct FScriptDelegate ReadFriendsContentListCompleteDelegate)
{
	static UFunction* uFnClearReadFriendsContentListCompleteDelegate = nullptr;

	if (!uFnClearReadFriendsContentListCompleteDelegate)
	{
		uFnClearReadFriendsContentListCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearReadFriendsContentListCompleteDelegate");
	}

	UOnlineCommunityContentInterfaceSteamworks_execClearReadFriendsContentListCompleteDelegate_Params ClearReadFriendsContentListCompleteDelegate_Params;
	memset(&ClearReadFriendsContentListCompleteDelegate_Params, 0, sizeof(ClearReadFriendsContentListCompleteDelegate_Params));
	memcpy_s(&ClearReadFriendsContentListCompleteDelegate_Params.ReadFriendsContentListCompleteDelegate, sizeof(ClearReadFriendsContentListCompleteDelegate_Params.ReadFriendsContentListCompleteDelegate), &ReadFriendsContentListCompleteDelegate, sizeof(ReadFriendsContentListCompleteDelegate));

	this->ProcessEvent(uFnClearReadFriendsContentListCompleteDelegate, &ClearReadFriendsContentListCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddReadFriendsContentListCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadFriendsContentListCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::AddReadFriendsContentListCompleteDelegate(struct FScriptDelegate ReadFriendsContentListCompleteDelegate)
{
	static UFunction* uFnAddReadFriendsContentListCompleteDelegate = nullptr;

	if (!uFnAddReadFriendsContentListCompleteDelegate)
	{
		uFnAddReadFriendsContentListCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddReadFriendsContentListCompleteDelegate");
	}

	UOnlineCommunityContentInterfaceSteamworks_execAddReadFriendsContentListCompleteDelegate_Params AddReadFriendsContentListCompleteDelegate_Params;
	memset(&AddReadFriendsContentListCompleteDelegate_Params, 0, sizeof(AddReadFriendsContentListCompleteDelegate_Params));
	memcpy_s(&AddReadFriendsContentListCompleteDelegate_Params.ReadFriendsContentListCompleteDelegate, sizeof(AddReadFriendsContentListCompleteDelegate_Params.ReadFriendsContentListCompleteDelegate), &ReadFriendsContentListCompleteDelegate, sizeof(ReadFriendsContentListCompleteDelegate));

	this->ProcessEvent(uFnAddReadFriendsContentListCompleteDelegate, &AddReadFriendsContentListCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnReadFriendsContentListComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineCommunityContentInterfaceSteamworks::OnReadFriendsContentListComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnReadFriendsContentListComplete = nullptr;

	if (!uFnOnReadFriendsContentListComplete)
	{
		uFnOnReadFriendsContentListComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnReadFriendsContentListComplete");
	}

	UOnlineCommunityContentInterfaceSteamworks_execOnReadFriendsContentListComplete_Params OnReadFriendsContentListComplete_Params;
	memset(&OnReadFriendsContentListComplete_Params, 0, sizeof(OnReadFriendsContentListComplete_Params));
	OnReadFriendsContentListComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadFriendsContentListComplete, &OnReadFriendsContentListComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ReadFriendsContentList
// [0x00424001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        PlayerNum                      (CPF_Parm)
// int32_t                        StartAt                        (CPF_OptionalParm | CPF_Parm)
// int32_t                        NumToRead                      (CPF_OptionalParm | CPF_Parm)
// TArray<struct FOnlineFriend>   Friends                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineCommunityContentInterfaceSteamworks::ReadFriendsContentList(uint8_t PlayerNum, int32_t StartAt, int32_t NumToRead, TArray<struct FOnlineFriend>& Friends)
{
	static UFunction* uFnReadFriendsContentList = nullptr;

	if (!uFnReadFriendsContentList)
	{
		uFnReadFriendsContentList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ReadFriendsContentList");
	}

	UOnlineCommunityContentInterfaceSteamworks_execReadFriendsContentList_Params ReadFriendsContentList_Params;
	memset(&ReadFriendsContentList_Params, 0, sizeof(ReadFriendsContentList_Params));
	memcpy_s(&ReadFriendsContentList_Params.PlayerNum, sizeof(ReadFriendsContentList_Params.PlayerNum), &PlayerNum, sizeof(PlayerNum));
	memcpy_s(&ReadFriendsContentList_Params.StartAt, sizeof(ReadFriendsContentList_Params.StartAt), &StartAt, sizeof(StartAt));
	memcpy_s(&ReadFriendsContentList_Params.NumToRead, sizeof(ReadFriendsContentList_Params.NumToRead), &NumToRead, sizeof(NumToRead));
	memcpy_s(&ReadFriendsContentList_Params.Friends, sizeof(ReadFriendsContentList_Params.Friends), &Friends, sizeof(Friends));

	this->ProcessEvent(uFnReadFriendsContentList, &ReadFriendsContentList_Params, nullptr);

	memcpy_s(&Friends, sizeof(Friends), &ReadFriendsContentList_Params.Friends, sizeof(ReadFriendsContentList_Params.Friends));

	return ReadFriendsContentList_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetContentList
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        PlayerNum                      (CPF_Parm)
// TArray<struct FCommunityContentFile> ContentFiles                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineCommunityContentInterfaceSteamworks::GetContentList(uint8_t PlayerNum, TArray<struct FCommunityContentFile>& ContentFiles)
{
	static UFunction* uFnGetContentList = nullptr;

	if (!uFnGetContentList)
	{
		uFnGetContentList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetContentList");
	}

	UOnlineCommunityContentInterfaceSteamworks_execGetContentList_Params GetContentList_Params;
	memset(&GetContentList_Params, 0, sizeof(GetContentList_Params));
	memcpy_s(&GetContentList_Params.PlayerNum, sizeof(GetContentList_Params.PlayerNum), &PlayerNum, sizeof(PlayerNum));
	memcpy_s(&GetContentList_Params.ContentFiles, sizeof(GetContentList_Params.ContentFiles), &ContentFiles, sizeof(ContentFiles));

	this->ProcessEvent(uFnGetContentList, &GetContentList_Params, nullptr);

	memcpy_s(&ContentFiles, sizeof(ContentFiles), &GetContentList_Params.ContentFiles, sizeof(GetContentList_Params.ContentFiles));

	return GetContentList_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearReadContentListCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadContentListCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::ClearReadContentListCompleteDelegate(struct FScriptDelegate ReadContentListCompleteDelegate)
{
	static UFunction* uFnClearReadContentListCompleteDelegate = nullptr;

	if (!uFnClearReadContentListCompleteDelegate)
	{
		uFnClearReadContentListCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearReadContentListCompleteDelegate");
	}

	UOnlineCommunityContentInterfaceSteamworks_execClearReadContentListCompleteDelegate_Params ClearReadContentListCompleteDelegate_Params;
	memset(&ClearReadContentListCompleteDelegate_Params, 0, sizeof(ClearReadContentListCompleteDelegate_Params));
	memcpy_s(&ClearReadContentListCompleteDelegate_Params.ReadContentListCompleteDelegate, sizeof(ClearReadContentListCompleteDelegate_Params.ReadContentListCompleteDelegate), &ReadContentListCompleteDelegate, sizeof(ReadContentListCompleteDelegate));

	this->ProcessEvent(uFnClearReadContentListCompleteDelegate, &ClearReadContentListCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddReadContentListCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadContentListCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::AddReadContentListCompleteDelegate(struct FScriptDelegate ReadContentListCompleteDelegate)
{
	static UFunction* uFnAddReadContentListCompleteDelegate = nullptr;

	if (!uFnAddReadContentListCompleteDelegate)
	{
		uFnAddReadContentListCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddReadContentListCompleteDelegate");
	}

	UOnlineCommunityContentInterfaceSteamworks_execAddReadContentListCompleteDelegate_Params AddReadContentListCompleteDelegate_Params;
	memset(&AddReadContentListCompleteDelegate_Params, 0, sizeof(AddReadContentListCompleteDelegate_Params));
	memcpy_s(&AddReadContentListCompleteDelegate_Params.ReadContentListCompleteDelegate, sizeof(AddReadContentListCompleteDelegate_Params.ReadContentListCompleteDelegate), &ReadContentListCompleteDelegate, sizeof(ReadContentListCompleteDelegate));

	this->ProcessEvent(uFnAddReadContentListCompleteDelegate, &AddReadContentListCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnReadContentListComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)
// TArray<struct FCommunityContentFile> ContentFiles                   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::OnReadContentListComplete(bool bWasSuccessful, TArray<struct FCommunityContentFile> ContentFiles)
{
	static UFunction* uFnOnReadContentListComplete = nullptr;

	if (!uFnOnReadContentListComplete)
	{
		uFnOnReadContentListComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnReadContentListComplete");
	}

	UOnlineCommunityContentInterfaceSteamworks_execOnReadContentListComplete_Params OnReadContentListComplete_Params;
	memset(&OnReadContentListComplete_Params, 0, sizeof(OnReadContentListComplete_Params));
	OnReadContentListComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadContentListComplete_Params.ContentFiles, sizeof(OnReadContentListComplete_Params.ContentFiles), &ContentFiles, sizeof(ContentFiles));

	this->ProcessEvent(uFnOnReadContentListComplete, &OnReadContentListComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ReadContentList
// [0x00024001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        PlayerNum                      (CPF_Parm)
// struct FUniqueNetId            NetId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Path                           (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// int32_t                        StartAt                        (CPF_OptionalParm | CPF_Parm)
// int32_t                        NumToRead                      (CPF_OptionalParm | CPF_Parm)

bool UOnlineCommunityContentInterfaceSteamworks::ReadContentList(uint8_t PlayerNum, struct FUniqueNetId NetId, class FString Path, int32_t StartAt, int32_t NumToRead)
{
	static UFunction* uFnReadContentList = nullptr;

	if (!uFnReadContentList)
	{
		uFnReadContentList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ReadContentList");
	}

	UOnlineCommunityContentInterfaceSteamworks_execReadContentList_Params ReadContentList_Params;
	memset(&ReadContentList_Params, 0, sizeof(ReadContentList_Params));
	memcpy_s(&ReadContentList_Params.PlayerNum, sizeof(ReadContentList_Params.PlayerNum), &PlayerNum, sizeof(PlayerNum));
	memcpy_s(&ReadContentList_Params.NetId, sizeof(ReadContentList_Params.NetId), &NetId, sizeof(NetId));
	memcpy_s(&ReadContentList_Params.Path, sizeof(ReadContentList_Params.Path), &Path, sizeof(Path));
	memcpy_s(&ReadContentList_Params.StartAt, sizeof(ReadContentList_Params.StartAt), &StartAt, sizeof(StartAt));
	memcpy_s(&ReadContentList_Params.NumToRead, sizeof(ReadContentList_Params.NumToRead), &NumToRead, sizeof(NumToRead));

	this->ProcessEvent(uFnReadContentList, &ReadContentList_Params, nullptr);

	return ReadContentList_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.Exit
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlineCommunityContentInterfaceSteamworks::Exit()
{
	static UFunction* uFnExit = nullptr;

	if (!uFnExit)
	{
		uFnExit = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.Exit");
	}

	UOnlineCommunityContentInterfaceSteamworks_execExit_Params Exit_Params;
	memset(&Exit_Params, 0, sizeof(Exit_Params));

	uFnExit->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnExit, &Exit_Params, nullptr);
	uFnExit->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.Init
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineCommunityContentInterfaceSteamworks::Init()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.Init");
	}

	UOnlineCommunityContentInterfaceSteamworks_execInit_Params Init_Params;
	memset(&Init_Params, 0, sizeof(Init_Params));

	uFnInit->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
	uFnInit->FunctionFlags |= 0x400;

	return Init_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnDownloadedWorkshopData
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           bSuccess                       (CPF_Parm)
// TArray<struct FDownloadedWorkshopData> Items                          (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::OnDownloadedWorkshopData(bool bSuccess, TArray<struct FDownloadedWorkshopData>& Items)
{
	static UFunction* uFnOnDownloadedWorkshopData = nullptr;

	if (!uFnOnDownloadedWorkshopData)
	{
		uFnOnDownloadedWorkshopData = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnDownloadedWorkshopData");
	}

	UOnlineCommunityContentInterfaceSteamworks_execOnDownloadedWorkshopData_Params OnDownloadedWorkshopData_Params;
	memset(&OnDownloadedWorkshopData_Params, 0, sizeof(OnDownloadedWorkshopData_Params));
	OnDownloadedWorkshopData_Params.bSuccess = bSuccess;
	memcpy_s(&OnDownloadedWorkshopData_Params.Items, sizeof(OnDownloadedWorkshopData_Params.Items), &Items, sizeof(Items));

	this->ProcessEvent(uFnOnDownloadedWorkshopData, &OnDownloadedWorkshopData_Params, nullptr);

	memcpy_s(&Items, sizeof(Items), &OnDownloadedWorkshopData_Params.Items, sizeof(OnDownloadedWorkshopData_Params.Items));
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.PrintDebugInfoNative
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UDebugDrawer*            Drawer                         (CPF_Parm)

void UOnlineGameInterfaceSteamworks::PrintDebugInfoNative(class UDebugDrawer* Drawer)
{
	static UFunction* uFnPrintDebugInfoNative = nullptr;

	if (!uFnPrintDebugInfoNative)
	{
		uFnPrintDebugInfoNative = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.PrintDebugInfoNative");
	}

	UOnlineGameInterfaceSteamworks_execPrintDebugInfoNative_Params PrintDebugInfoNative_Params;
	memset(&PrintDebugInfoNative_Params, 0, sizeof(PrintDebugInfoNative_Params));
	memcpy_s(&PrintDebugInfoNative_Params.Drawer, sizeof(PrintDebugInfoNative_Params.Drawer), &Drawer, sizeof(Drawer));

	uFnPrintDebugInfoNative->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnPrintDebugInfoNative, &PrintDebugInfoNative_Params, nullptr);
	uFnPrintDebugInfoNative->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.PrintDebugInfo
// [0x400020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class UDebugDrawer*            Drawer                         (CPF_Parm)

void UOnlineGameInterfaceSteamworks::PrintDebugInfo(class UDebugDrawer* Drawer)
{
	static UFunction* uFnPrintDebugInfo = nullptr;

	if (!uFnPrintDebugInfo)
	{
		uFnPrintDebugInfo = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.PrintDebugInfo");
	}

	UOnlineGameInterfaceSteamworks_execPrintDebugInfo_Params PrintDebugInfo_Params;
	memset(&PrintDebugInfo_Params, 0, sizeof(PrintDebugInfo_Params));
	memcpy_s(&PrintDebugInfo_Params.Drawer, sizeof(PrintDebugInfo_Params.Drawer), &Drawer, sizeof(Drawer));

	this->ProcessEvent(uFnPrintDebugInfo, &PrintDebugInfo_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData
// [0x400020002] (FUNC_Defined | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        StartAt                        (CPF_Parm)
// int32_t                        NumberToQuery                  (CPF_Parm)

bool UOnlineGameInterfaceSteamworks::QueryNonAdvertisedData(int32_t StartAt, int32_t NumberToQuery)
{
	static UFunction* uFnQueryNonAdvertisedData = nullptr;

	if (!uFnQueryNonAdvertisedData)
	{
		uFnQueryNonAdvertisedData = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData");
	}

	UOnlineGameInterfaceSteamworks_execQueryNonAdvertisedData_Params QueryNonAdvertisedData_Params;
	memset(&QueryNonAdvertisedData_Params, 0, sizeof(QueryNonAdvertisedData_Params));
	memcpy_s(&QueryNonAdvertisedData_Params.StartAt, sizeof(QueryNonAdvertisedData_Params.StartAt), &StartAt, sizeof(StartAt));
	memcpy_s(&QueryNonAdvertisedData_Params.NumberToQuery, sizeof(QueryNonAdvertisedData_Params.NumberToQuery), &NumberToQuery, sizeof(NumberToQuery));

	this->ProcessEvent(uFnQueryNonAdvertisedData, &QueryNonAdvertisedData_Params, nullptr);

	return QueryNonAdvertisedData_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate
// [0x400020002] (FUNC_Defined | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks::ClearUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate)
{
	static UFunction* uFnClearUnregisterPlayerCompleteDelegate = nullptr;

	if (!uFnClearUnregisterPlayerCompleteDelegate)
	{
		uFnClearUnregisterPlayerCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceSteamworks_execClearUnregisterPlayerCompleteDelegate_Params ClearUnregisterPlayerCompleteDelegate_Params;
	memset(&ClearUnregisterPlayerCompleteDelegate_Params, 0, sizeof(ClearUnregisterPlayerCompleteDelegate_Params));
	memcpy_s(&ClearUnregisterPlayerCompleteDelegate_Params.UnregisterPlayerCompleteDelegate, sizeof(ClearUnregisterPlayerCompleteDelegate_Params.UnregisterPlayerCompleteDelegate), &UnregisterPlayerCompleteDelegate, sizeof(UnregisterPlayerCompleteDelegate));

	this->ProcessEvent(uFnClearUnregisterPlayerCompleteDelegate, &ClearUnregisterPlayerCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate
// [0x400020002] (FUNC_Defined | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks::AddUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate)
{
	static UFunction* uFnAddUnregisterPlayerCompleteDelegate = nullptr;

	if (!uFnAddUnregisterPlayerCompleteDelegate)
	{
		uFnAddUnregisterPlayerCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceSteamworks_execAddUnregisterPlayerCompleteDelegate_Params AddUnregisterPlayerCompleteDelegate_Params;
	memset(&AddUnregisterPlayerCompleteDelegate_Params, 0, sizeof(AddUnregisterPlayerCompleteDelegate_Params));
	memcpy_s(&AddUnregisterPlayerCompleteDelegate_Params.UnregisterPlayerCompleteDelegate, sizeof(AddUnregisterPlayerCompleteDelegate_Params.UnregisterPlayerCompleteDelegate), &UnregisterPlayerCompleteDelegate, sizeof(UnregisterPlayerCompleteDelegate));

	this->ProcessEvent(uFnAddUnregisterPlayerCompleteDelegate, &AddUnregisterPlayerCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete
// [0x400120000] (FUNC_Public | FUNC_Delegate | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceSteamworks::OnUnregisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, bool bWasSuccessful)
{
	static UFunction* uFnOnUnregisterPlayerComplete = nullptr;

	if (!uFnOnUnregisterPlayerComplete)
	{
		uFnOnUnregisterPlayerComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete");
	}

	UOnlineGameInterfaceSteamworks_execOnUnregisterPlayerComplete_Params OnUnregisterPlayerComplete_Params;
	memset(&OnUnregisterPlayerComplete_Params, 0, sizeof(OnUnregisterPlayerComplete_Params));
	memcpy_s(&OnUnregisterPlayerComplete_Params.SessionName, sizeof(OnUnregisterPlayerComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&OnUnregisterPlayerComplete_Params.PlayerID, sizeof(OnUnregisterPlayerComplete_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	OnUnregisterPlayerComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnUnregisterPlayerComplete, &OnUnregisterPlayerComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineGameInterfaceSteamworks::UnregisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnUnregisterPlayer = nullptr;

	if (!uFnUnregisterPlayer)
	{
		uFnUnregisterPlayer = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer");
	}

	UOnlineGameInterfaceSteamworks_execUnregisterPlayer_Params UnregisterPlayer_Params;
	memset(&UnregisterPlayer_Params, 0, sizeof(UnregisterPlayer_Params));
	memcpy_s(&UnregisterPlayer_Params.SessionName, sizeof(UnregisterPlayer_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&UnregisterPlayer_Params.PlayerID, sizeof(UnregisterPlayer_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	uFnUnregisterPlayer->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUnregisterPlayer, &UnregisterPlayer_Params, nullptr);
	uFnUnregisterPlayer->FunctionFlags |= 0x400;

	return UnregisterPlayer_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate
// [0x400020002] (FUNC_Defined | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks::ClearRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate)
{
	static UFunction* uFnClearRegisterPlayerCompleteDelegate = nullptr;

	if (!uFnClearRegisterPlayerCompleteDelegate)
	{
		uFnClearRegisterPlayerCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceSteamworks_execClearRegisterPlayerCompleteDelegate_Params ClearRegisterPlayerCompleteDelegate_Params;
	memset(&ClearRegisterPlayerCompleteDelegate_Params, 0, sizeof(ClearRegisterPlayerCompleteDelegate_Params));
	memcpy_s(&ClearRegisterPlayerCompleteDelegate_Params.RegisterPlayerCompleteDelegate, sizeof(ClearRegisterPlayerCompleteDelegate_Params.RegisterPlayerCompleteDelegate), &RegisterPlayerCompleteDelegate, sizeof(RegisterPlayerCompleteDelegate));

	this->ProcessEvent(uFnClearRegisterPlayerCompleteDelegate, &ClearRegisterPlayerCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate
// [0x400020002] (FUNC_Defined | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks::AddRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate)
{
	static UFunction* uFnAddRegisterPlayerCompleteDelegate = nullptr;

	if (!uFnAddRegisterPlayerCompleteDelegate)
	{
		uFnAddRegisterPlayerCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceSteamworks_execAddRegisterPlayerCompleteDelegate_Params AddRegisterPlayerCompleteDelegate_Params;
	memset(&AddRegisterPlayerCompleteDelegate_Params, 0, sizeof(AddRegisterPlayerCompleteDelegate_Params));
	memcpy_s(&AddRegisterPlayerCompleteDelegate_Params.RegisterPlayerCompleteDelegate, sizeof(AddRegisterPlayerCompleteDelegate_Params.RegisterPlayerCompleteDelegate), &RegisterPlayerCompleteDelegate, sizeof(RegisterPlayerCompleteDelegate));

	this->ProcessEvent(uFnAddRegisterPlayerCompleteDelegate, &AddRegisterPlayerCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete
// [0x400120000] (FUNC_Public | FUNC_Delegate | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceSteamworks::OnRegisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, bool bWasSuccessful)
{
	static UFunction* uFnOnRegisterPlayerComplete = nullptr;

	if (!uFnOnRegisterPlayerComplete)
	{
		uFnOnRegisterPlayerComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete");
	}

	UOnlineGameInterfaceSteamworks_execOnRegisterPlayerComplete_Params OnRegisterPlayerComplete_Params;
	memset(&OnRegisterPlayerComplete_Params, 0, sizeof(OnRegisterPlayerComplete_Params));
	memcpy_s(&OnRegisterPlayerComplete_Params.SessionName, sizeof(OnRegisterPlayerComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&OnRegisterPlayerComplete_Params.PlayerID, sizeof(OnRegisterPlayerComplete_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	OnRegisterPlayerComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnRegisterPlayerComplete, &OnRegisterPlayerComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// bool                           bWasInvited                    (CPF_Parm)

bool UOnlineGameInterfaceSteamworks::RegisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID, bool bWasInvited)
{
	static UFunction* uFnRegisterPlayer = nullptr;

	if (!uFnRegisterPlayer)
	{
		uFnRegisterPlayer = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer");
	}

	UOnlineGameInterfaceSteamworks_execRegisterPlayer_Params RegisterPlayer_Params;
	memset(&RegisterPlayer_Params, 0, sizeof(RegisterPlayer_Params));
	memcpy_s(&RegisterPlayer_Params.SessionName, sizeof(RegisterPlayer_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&RegisterPlayer_Params.PlayerID, sizeof(RegisterPlayer_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	RegisterPlayer_Params.bWasInvited = bWasInvited;

	uFnRegisterPlayer->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRegisterPlayer, &RegisterPlayer_Params, nullptr);
	uFnRegisterPlayer->FunctionFlags |= 0x400;

	return RegisterPlayer_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceSteamworks::AcceptGameInvite(uint8_t LocalUserNum, struct FName SessionName)
{
	static UFunction* uFnAcceptGameInvite = nullptr;

	if (!uFnAcceptGameInvite)
	{
		uFnAcceptGameInvite = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite");
	}

	UOnlineGameInterfaceSteamworks_execAcceptGameInvite_Params AcceptGameInvite_Params;
	memset(&AcceptGameInvite_Params, 0, sizeof(AcceptGameInvite_Params));
	memcpy_s(&AcceptGameInvite_Params.LocalUserNum, sizeof(AcceptGameInvite_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AcceptGameInvite_Params.SessionName, sizeof(AcceptGameInvite_Params.SessionName), &SessionName, sizeof(SessionName));

	uFnAcceptGameInvite->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAcceptGameInvite, &AcceptGameInvite_Params, nullptr);
	uFnAcceptGameInvite->FunctionFlags |= 0x400;

	return AcceptGameInvite_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted
// [0x400520000] (FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  ErrorString                    (CPF_Parm | CPF_NeedCtorLink)
// struct FOnlineGameSearchResult InviteResult                   (CPF_Const | CPF_Parm | CPF_OutParm)

void UOnlineGameInterfaceSteamworks::OnGameInviteAccepted(class FString ErrorString, struct FOnlineGameSearchResult& InviteResult)
{
	static UFunction* uFnOnGameInviteAccepted = nullptr;

	if (!uFnOnGameInviteAccepted)
	{
		uFnOnGameInviteAccepted = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted");
	}

	UOnlineGameInterfaceSteamworks_execOnGameInviteAccepted_Params OnGameInviteAccepted_Params;
	memset(&OnGameInviteAccepted_Params, 0, sizeof(OnGameInviteAccepted_Params));
	memcpy_s(&OnGameInviteAccepted_Params.ErrorString, sizeof(OnGameInviteAccepted_Params.ErrorString), &ErrorString, sizeof(ErrorString));
	memcpy_s(&OnGameInviteAccepted_Params.InviteResult, sizeof(OnGameInviteAccepted_Params.InviteResult), &InviteResult, sizeof(InviteResult));

	this->ProcessEvent(uFnOnGameInviteAccepted, &OnGameInviteAccepted_Params, nullptr);

	memcpy_s(&InviteResult, sizeof(InviteResult), &OnGameInviteAccepted_Params.InviteResult, sizeof(OnGameInviteAccepted_Params.InviteResult));
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame
// [0x400024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// class UOnlineGameSettings*     UpdatedGameSettings            (CPF_Parm)
// bool                           bShouldRefreshOnlineData       (CPF_OptionalParm | CPF_Parm)

bool UOnlineGameInterfaceSteamworks::UpdateOnlineGame(struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool bShouldRefreshOnlineData)
{
	static UFunction* uFnUpdateOnlineGame = nullptr;

	if (!uFnUpdateOnlineGame)
	{
		uFnUpdateOnlineGame = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame");
	}

	UOnlineGameInterfaceSteamworks_execUpdateOnlineGame_Params UpdateOnlineGame_Params;
	memset(&UpdateOnlineGame_Params, 0, sizeof(UpdateOnlineGame_Params));
	memcpy_s(&UpdateOnlineGame_Params.SessionName, sizeof(UpdateOnlineGame_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&UpdateOnlineGame_Params.UpdatedGameSettings, sizeof(UpdateOnlineGame_Params.UpdatedGameSettings), &UpdatedGameSettings, sizeof(UpdatedGameSettings));
	UpdateOnlineGame_Params.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	uFnUpdateOnlineGame->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUpdateOnlineGame, &UpdateOnlineGame_Params, nullptr);
	uFnUpdateOnlineGame->FunctionFlags |= 0x400;

	return UpdateOnlineGame_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.ClearUnregisterPlayerCompleteDelegate
// [0x400020002] (FUNC_Defined | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks_PsyNet::ClearUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate)
{
	static UFunction* uFnClearUnregisterPlayerCompleteDelegate = nullptr;

	if (!uFnClearUnregisterPlayerCompleteDelegate)
	{
		uFnClearUnregisterPlayerCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.ClearUnregisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceSteamworks_PsyNet_execClearUnregisterPlayerCompleteDelegate_Params ClearUnregisterPlayerCompleteDelegate_Params;
	memset(&ClearUnregisterPlayerCompleteDelegate_Params, 0, sizeof(ClearUnregisterPlayerCompleteDelegate_Params));
	memcpy_s(&ClearUnregisterPlayerCompleteDelegate_Params.UnregisterPlayerCompleteDelegate, sizeof(ClearUnregisterPlayerCompleteDelegate_Params.UnregisterPlayerCompleteDelegate), &UnregisterPlayerCompleteDelegate, sizeof(UnregisterPlayerCompleteDelegate));

	this->ProcessEvent(uFnClearUnregisterPlayerCompleteDelegate, &ClearUnregisterPlayerCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AddUnregisterPlayerCompleteDelegate
// [0x400020002] (FUNC_Defined | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks_PsyNet::AddUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate)
{
	static UFunction* uFnAddUnregisterPlayerCompleteDelegate = nullptr;

	if (!uFnAddUnregisterPlayerCompleteDelegate)
	{
		uFnAddUnregisterPlayerCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AddUnregisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceSteamworks_PsyNet_execAddUnregisterPlayerCompleteDelegate_Params AddUnregisterPlayerCompleteDelegate_Params;
	memset(&AddUnregisterPlayerCompleteDelegate_Params, 0, sizeof(AddUnregisterPlayerCompleteDelegate_Params));
	memcpy_s(&AddUnregisterPlayerCompleteDelegate_Params.UnregisterPlayerCompleteDelegate, sizeof(AddUnregisterPlayerCompleteDelegate_Params.UnregisterPlayerCompleteDelegate), &UnregisterPlayerCompleteDelegate, sizeof(UnregisterPlayerCompleteDelegate));

	this->ProcessEvent(uFnAddUnregisterPlayerCompleteDelegate, &AddUnregisterPlayerCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.OnUnregisterPlayerComplete
// [0x400120000] (FUNC_Public | FUNC_Delegate | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceSteamworks_PsyNet::OnUnregisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, bool bWasSuccessful)
{
	static UFunction* uFnOnUnregisterPlayerComplete = nullptr;

	if (!uFnOnUnregisterPlayerComplete)
	{
		uFnOnUnregisterPlayerComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.OnUnregisterPlayerComplete");
	}

	UOnlineGameInterfaceSteamworks_PsyNet_execOnUnregisterPlayerComplete_Params OnUnregisterPlayerComplete_Params;
	memset(&OnUnregisterPlayerComplete_Params, 0, sizeof(OnUnregisterPlayerComplete_Params));
	memcpy_s(&OnUnregisterPlayerComplete_Params.SessionName, sizeof(OnUnregisterPlayerComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&OnUnregisterPlayerComplete_Params.PlayerID, sizeof(OnUnregisterPlayerComplete_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	OnUnregisterPlayerComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnUnregisterPlayerComplete, &OnUnregisterPlayerComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.UnregisterPlayer
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineGameInterfaceSteamworks_PsyNet::UnregisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnUnregisterPlayer = nullptr;

	if (!uFnUnregisterPlayer)
	{
		uFnUnregisterPlayer = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.UnregisterPlayer");
	}

	UOnlineGameInterfaceSteamworks_PsyNet_execUnregisterPlayer_Params UnregisterPlayer_Params;
	memset(&UnregisterPlayer_Params, 0, sizeof(UnregisterPlayer_Params));
	memcpy_s(&UnregisterPlayer_Params.SessionName, sizeof(UnregisterPlayer_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&UnregisterPlayer_Params.PlayerID, sizeof(UnregisterPlayer_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	uFnUnregisterPlayer->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUnregisterPlayer, &UnregisterPlayer_Params, nullptr);
	uFnUnregisterPlayer->FunctionFlags |= 0x400;

	return UnregisterPlayer_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.ClearRegisterPlayerCompleteDelegate
// [0x400020002] (FUNC_Defined | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks_PsyNet::ClearRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate)
{
	static UFunction* uFnClearRegisterPlayerCompleteDelegate = nullptr;

	if (!uFnClearRegisterPlayerCompleteDelegate)
	{
		uFnClearRegisterPlayerCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.ClearRegisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceSteamworks_PsyNet_execClearRegisterPlayerCompleteDelegate_Params ClearRegisterPlayerCompleteDelegate_Params;
	memset(&ClearRegisterPlayerCompleteDelegate_Params, 0, sizeof(ClearRegisterPlayerCompleteDelegate_Params));
	memcpy_s(&ClearRegisterPlayerCompleteDelegate_Params.RegisterPlayerCompleteDelegate, sizeof(ClearRegisterPlayerCompleteDelegate_Params.RegisterPlayerCompleteDelegate), &RegisterPlayerCompleteDelegate, sizeof(RegisterPlayerCompleteDelegate));

	this->ProcessEvent(uFnClearRegisterPlayerCompleteDelegate, &ClearRegisterPlayerCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AddRegisterPlayerCompleteDelegate
// [0x400020002] (FUNC_Defined | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks_PsyNet::AddRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate)
{
	static UFunction* uFnAddRegisterPlayerCompleteDelegate = nullptr;

	if (!uFnAddRegisterPlayerCompleteDelegate)
	{
		uFnAddRegisterPlayerCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AddRegisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceSteamworks_PsyNet_execAddRegisterPlayerCompleteDelegate_Params AddRegisterPlayerCompleteDelegate_Params;
	memset(&AddRegisterPlayerCompleteDelegate_Params, 0, sizeof(AddRegisterPlayerCompleteDelegate_Params));
	memcpy_s(&AddRegisterPlayerCompleteDelegate_Params.RegisterPlayerCompleteDelegate, sizeof(AddRegisterPlayerCompleteDelegate_Params.RegisterPlayerCompleteDelegate), &RegisterPlayerCompleteDelegate, sizeof(RegisterPlayerCompleteDelegate));

	this->ProcessEvent(uFnAddRegisterPlayerCompleteDelegate, &AddRegisterPlayerCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.OnRegisterPlayerComplete
// [0x400120000] (FUNC_Public | FUNC_Delegate | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceSteamworks_PsyNet::OnRegisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, bool bWasSuccessful)
{
	static UFunction* uFnOnRegisterPlayerComplete = nullptr;

	if (!uFnOnRegisterPlayerComplete)
	{
		uFnOnRegisterPlayerComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.OnRegisterPlayerComplete");
	}

	UOnlineGameInterfaceSteamworks_PsyNet_execOnRegisterPlayerComplete_Params OnRegisterPlayerComplete_Params;
	memset(&OnRegisterPlayerComplete_Params, 0, sizeof(OnRegisterPlayerComplete_Params));
	memcpy_s(&OnRegisterPlayerComplete_Params.SessionName, sizeof(OnRegisterPlayerComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&OnRegisterPlayerComplete_Params.PlayerID, sizeof(OnRegisterPlayerComplete_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	OnRegisterPlayerComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnRegisterPlayerComplete, &OnRegisterPlayerComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.RegisterPlayer
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// bool                           bWasInvited                    (CPF_Parm)

bool UOnlineGameInterfaceSteamworks_PsyNet::RegisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID, bool bWasInvited)
{
	static UFunction* uFnRegisterPlayer = nullptr;

	if (!uFnRegisterPlayer)
	{
		uFnRegisterPlayer = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.RegisterPlayer");
	}

	UOnlineGameInterfaceSteamworks_PsyNet_execRegisterPlayer_Params RegisterPlayer_Params;
	memset(&RegisterPlayer_Params, 0, sizeof(RegisterPlayer_Params));
	memcpy_s(&RegisterPlayer_Params.SessionName, sizeof(RegisterPlayer_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&RegisterPlayer_Params.PlayerID, sizeof(RegisterPlayer_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	RegisterPlayer_Params.bWasInvited = bWasInvited;

	uFnRegisterPlayer->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRegisterPlayer, &RegisterPlayer_Params, nullptr);
	uFnRegisterPlayer->FunctionFlags |= 0x400;

	return RegisterPlayer_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.QueryNonAdvertisedData
// [0x400020002] (FUNC_Defined | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        StartAt                        (CPF_Parm)
// int32_t                        NumberToQuery                  (CPF_Parm)

bool UOnlineGameInterfaceSteamworks_PsyNet::QueryNonAdvertisedData(int32_t StartAt, int32_t NumberToQuery)
{
	static UFunction* uFnQueryNonAdvertisedData = nullptr;

	if (!uFnQueryNonAdvertisedData)
	{
		uFnQueryNonAdvertisedData = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.QueryNonAdvertisedData");
	}

	UOnlineGameInterfaceSteamworks_PsyNet_execQueryNonAdvertisedData_Params QueryNonAdvertisedData_Params;
	memset(&QueryNonAdvertisedData_Params, 0, sizeof(QueryNonAdvertisedData_Params));
	memcpy_s(&QueryNonAdvertisedData_Params.StartAt, sizeof(QueryNonAdvertisedData_Params.StartAt), &StartAt, sizeof(StartAt));
	memcpy_s(&QueryNonAdvertisedData_Params.NumberToQuery, sizeof(QueryNonAdvertisedData_Params.NumberToQuery), &NumberToQuery, sizeof(NumberToQuery));

	this->ProcessEvent(uFnQueryNonAdvertisedData, &QueryNonAdvertisedData_Params, nullptr);

	return QueryNonAdvertisedData_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AcceptGameInvite
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceSteamworks_PsyNet::AcceptGameInvite(uint8_t LocalUserNum, struct FName SessionName)
{
	static UFunction* uFnAcceptGameInvite = nullptr;

	if (!uFnAcceptGameInvite)
	{
		uFnAcceptGameInvite = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AcceptGameInvite");
	}

	UOnlineGameInterfaceSteamworks_PsyNet_execAcceptGameInvite_Params AcceptGameInvite_Params;
	memset(&AcceptGameInvite_Params, 0, sizeof(AcceptGameInvite_Params));
	memcpy_s(&AcceptGameInvite_Params.LocalUserNum, sizeof(AcceptGameInvite_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AcceptGameInvite_Params.SessionName, sizeof(AcceptGameInvite_Params.SessionName), &SessionName, sizeof(SessionName));

	this->ProcessEvent(uFnAcceptGameInvite, &AcceptGameInvite_Params, nullptr);

	return AcceptGameInvite_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.UpdateOnlineGame
// [0x400024000] (FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// class UOnlineGameSettings*     UpdatedGameSettings            (CPF_Parm)
// bool                           bShouldRefreshOnlineData       (CPF_OptionalParm | CPF_Parm)

bool UOnlineGameInterfaceSteamworks_PsyNet::UpdateOnlineGame(struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool bShouldRefreshOnlineData)
{
	static UFunction* uFnUpdateOnlineGame = nullptr;

	if (!uFnUpdateOnlineGame)
	{
		uFnUpdateOnlineGame = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.UpdateOnlineGame");
	}

	UOnlineGameInterfaceSteamworks_PsyNet_execUpdateOnlineGame_Params UpdateOnlineGame_Params;
	memset(&UpdateOnlineGame_Params, 0, sizeof(UpdateOnlineGame_Params));
	memcpy_s(&UpdateOnlineGame_Params.SessionName, sizeof(UpdateOnlineGame_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&UpdateOnlineGame_Params.UpdatedGameSettings, sizeof(UpdateOnlineGame_Params.UpdatedGameSettings), &UpdatedGameSettings, sizeof(UpdatedGameSettings));
	UpdateOnlineGame_Params.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	this->ProcessEvent(uFnUpdateOnlineGame, &UpdateOnlineGame_Params, nullptr);

	return UpdateOnlineGame_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.SetFriendJoinLocation
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            JoinablePlayerID               (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ServerAddress                  (CPF_Parm | CPF_NeedCtorLink)
// ELobbyVisibility               Visibility                     (CPF_Parm)

void UOnlineGameInterfaceSteamworks_PsyNet::SetFriendJoinLocation(struct FUniqueNetId JoinablePlayerID, class FString ServerAddress, ELobbyVisibility Visibility)
{
	static UFunction* uFnSetFriendJoinLocation = nullptr;

	if (!uFnSetFriendJoinLocation)
	{
		uFnSetFriendJoinLocation = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.SetFriendJoinLocation");
	}

	UOnlineGameInterfaceSteamworks_PsyNet_execSetFriendJoinLocation_Params SetFriendJoinLocation_Params;
	memset(&SetFriendJoinLocation_Params, 0, sizeof(SetFriendJoinLocation_Params));
	memcpy_s(&SetFriendJoinLocation_Params.JoinablePlayerID, sizeof(SetFriendJoinLocation_Params.JoinablePlayerID), &JoinablePlayerID, sizeof(JoinablePlayerID));
	memcpy_s(&SetFriendJoinLocation_Params.ServerAddress, sizeof(SetFriendJoinLocation_Params.ServerAddress), &ServerAddress, sizeof(ServerAddress));
	memcpy_s(&SetFriendJoinLocation_Params.Visibility, sizeof(SetFriendJoinLocation_Params.Visibility), &Visibility, sizeof(Visibility));

	uFnSetFriendJoinLocation->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetFriendJoinLocation, &SetFriendJoinLocation_Params, nullptr);
	uFnSetFriendJoinLocation->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.KickPlayer
// [0x400420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// ELobbyKickReason               Reason                         (CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            PlayerID                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceSteamworks::KickPlayer(ELobbyKickReason Reason, struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnKickPlayer = nullptr;

	if (!uFnKickPlayer)
	{
		uFnKickPlayer = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.KickPlayer");
	}

	UOnlineLobbyInterfaceSteamworks_execKickPlayer_Params KickPlayer_Params;
	memset(&KickPlayer_Params, 0, sizeof(KickPlayer_Params));
	memcpy_s(&KickPlayer_Params.Reason, sizeof(KickPlayer_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&KickPlayer_Params.LobbyId, sizeof(KickPlayer_Params.LobbyId), &LobbyId, sizeof(LobbyId));
	memcpy_s(&KickPlayer_Params.PlayerID, sizeof(KickPlayer_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	this->ProcessEvent(uFnKickPlayer, &KickPlayer_Params, nullptr);

	memcpy_s(&LobbyId, sizeof(LobbyId), &KickPlayer_Params.LobbyId, sizeof(KickPlayer_Params.LobbyId));
	memcpy_s(&PlayerID, sizeof(PlayerID), &KickPlayer_Params.PlayerID, sizeof(KickPlayer_Params.PlayerID));

	return KickPlayer_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyFromCommandline
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// bool                           bMarkAsJoined                  (CPF_OptionalParm | CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceSteamworks::GetLobbyFromCommandline(bool bMarkAsJoined, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* uFnGetLobbyFromCommandline = nullptr;

	if (!uFnGetLobbyFromCommandline)
	{
		uFnGetLobbyFromCommandline = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyFromCommandline");
	}

	UOnlineLobbyInterfaceSteamworks_execGetLobbyFromCommandline_Params GetLobbyFromCommandline_Params;
	memset(&GetLobbyFromCommandline_Params, 0, sizeof(GetLobbyFromCommandline_Params));
	GetLobbyFromCommandline_Params.bMarkAsJoined = bMarkAsJoined;
	memcpy_s(&GetLobbyFromCommandline_Params.LobbyId, sizeof(GetLobbyFromCommandline_Params.LobbyId), &LobbyId, sizeof(LobbyId));

	uFnGetLobbyFromCommandline->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetLobbyFromCommandline, &GetLobbyFromCommandline_Params, nullptr);
	uFnGetLobbyFromCommandline->FunctionFlags |= 0x400;

	memcpy_s(&LobbyId, sizeof(LobbyId), &GetLobbyFromCommandline_Params.LobbyId, sizeof(GetLobbyFromCommandline_Params.LobbyId));

	return GetLobbyFromCommandline_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ShowInviteUI
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Const | CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceSteamworks::ShowInviteUI(uint8_t LocalUserNum, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* uFnShowInviteUI = nullptr;

	if (!uFnShowInviteUI)
	{
		uFnShowInviteUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ShowInviteUI");
	}

	UOnlineLobbyInterfaceSteamworks_execShowInviteUI_Params ShowInviteUI_Params;
	memset(&ShowInviteUI_Params, 0, sizeof(ShowInviteUI_Params));
	memcpy_s(&ShowInviteUI_Params.LocalUserNum, sizeof(ShowInviteUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowInviteUI_Params.LobbyId, sizeof(ShowInviteUI_Params.LobbyId), &LobbyId, sizeof(LobbyId));

	uFnShowInviteUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowInviteUI, &ShowInviteUI_Params, nullptr);
	uFnShowInviteUI->FunctionFlags |= 0x400;

	memcpy_s(&LobbyId, sizeof(LobbyId), &ShowInviteUI_Params.LobbyId, sizeof(ShowInviteUI_Params.LobbyId));

	return ShowInviteUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.InviteToLobby
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            PlayerID                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceSteamworks::InviteToLobby(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnInviteToLobby = nullptr;

	if (!uFnInviteToLobby)
	{
		uFnInviteToLobby = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.InviteToLobby");
	}

	UOnlineLobbyInterfaceSteamworks_execInviteToLobby_Params InviteToLobby_Params;
	memset(&InviteToLobby_Params, 0, sizeof(InviteToLobby_Params));
	memcpy_s(&InviteToLobby_Params.LobbyId, sizeof(InviteToLobby_Params.LobbyId), &LobbyId, sizeof(LobbyId));
	memcpy_s(&InviteToLobby_Params.PlayerID, sizeof(InviteToLobby_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	uFnInviteToLobby->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnInviteToLobby, &InviteToLobby_Params, nullptr);
	uFnInviteToLobby->FunctionFlags |= 0x400;

	memcpy_s(&LobbyId, sizeof(LobbyId), &InviteToLobby_Params.LobbyId, sizeof(InviteToLobby_Params.LobbyId));
	memcpy_s(&PlayerID, sizeof(PlayerID), &InviteToLobby_Params.PlayerID, sizeof(InviteToLobby_Params.PlayerID));

	return InviteToLobby_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.CanInviteToLobby
// [0x400420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            PlayerID                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceSteamworks::CanInviteToLobby(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnCanInviteToLobby = nullptr;

	if (!uFnCanInviteToLobby)
	{
		uFnCanInviteToLobby = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.CanInviteToLobby");
	}

	UOnlineLobbyInterfaceSteamworks_execCanInviteToLobby_Params CanInviteToLobby_Params;
	memset(&CanInviteToLobby_Params, 0, sizeof(CanInviteToLobby_Params));
	memcpy_s(&CanInviteToLobby_Params.LobbyId, sizeof(CanInviteToLobby_Params.LobbyId), &LobbyId, sizeof(LobbyId));
	memcpy_s(&CanInviteToLobby_Params.PlayerID, sizeof(CanInviteToLobby_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	this->ProcessEvent(uFnCanInviteToLobby, &CanInviteToLobby_Params, nullptr);

	memcpy_s(&LobbyId, sizeof(LobbyId), &CanInviteToLobby_Params.LobbyId, sizeof(CanInviteToLobby_Params.LobbyId));
	memcpy_s(&PlayerID, sizeof(PlayerID), &CanInviteToLobby_Params.PlayerID, sizeof(CanInviteToLobby_Params.PlayerID));

	return CanInviteToLobby_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyOwner
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            NewOwner                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceSteamworks::SetLobbyOwner(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& NewOwner)
{
	static UFunction* uFnSetLobbyOwner = nullptr;

	if (!uFnSetLobbyOwner)
	{
		uFnSetLobbyOwner = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyOwner");
	}

	UOnlineLobbyInterfaceSteamworks_execSetLobbyOwner_Params SetLobbyOwner_Params;
	memset(&SetLobbyOwner_Params, 0, sizeof(SetLobbyOwner_Params));
	memcpy_s(&SetLobbyOwner_Params.LobbyId, sizeof(SetLobbyOwner_Params.LobbyId), &LobbyId, sizeof(LobbyId));
	memcpy_s(&SetLobbyOwner_Params.NewOwner, sizeof(SetLobbyOwner_Params.NewOwner), &NewOwner, sizeof(NewOwner));

	uFnSetLobbyOwner->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetLobbyOwner, &SetLobbyOwner_Params, nullptr);
	uFnSetLobbyOwner->FunctionFlags |= 0x400;

	memcpy_s(&LobbyId, sizeof(LobbyId), &SetLobbyOwner_Params.LobbyId, sizeof(SetLobbyOwner_Params.LobbyId));
	memcpy_s(&NewOwner, sizeof(NewOwner), &SetLobbyOwner_Params.NewOwner, sizeof(SetLobbyOwner_Params.NewOwner));

	return SetLobbyOwner_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyLock
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// bool                           bLocked                        (CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceSteamworks::SetLobbyLock(bool bLocked, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* uFnSetLobbyLock = nullptr;

	if (!uFnSetLobbyLock)
	{
		uFnSetLobbyLock = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyLock");
	}

	UOnlineLobbyInterfaceSteamworks_execSetLobbyLock_Params SetLobbyLock_Params;
	memset(&SetLobbyLock_Params, 0, sizeof(SetLobbyLock_Params));
	SetLobbyLock_Params.bLocked = bLocked;
	memcpy_s(&SetLobbyLock_Params.LobbyId, sizeof(SetLobbyLock_Params.LobbyId), &LobbyId, sizeof(LobbyId));

	uFnSetLobbyLock->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetLobbyLock, &SetLobbyLock_Params, nullptr);
	uFnSetLobbyLock->FunctionFlags |= 0x400;

	memcpy_s(&LobbyId, sizeof(LobbyId), &SetLobbyLock_Params.LobbyId, sizeof(SetLobbyLock_Params.LobbyId));

	return SetLobbyLock_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyType
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// ELobbyVisibility               Type                           (CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceSteamworks::SetLobbyType(ELobbyVisibility Type, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* uFnSetLobbyType = nullptr;

	if (!uFnSetLobbyType)
	{
		uFnSetLobbyType = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyType");
	}

	UOnlineLobbyInterfaceSteamworks_execSetLobbyType_Params SetLobbyType_Params;
	memset(&SetLobbyType_Params, 0, sizeof(SetLobbyType_Params));
	memcpy_s(&SetLobbyType_Params.Type, sizeof(SetLobbyType_Params.Type), &Type, sizeof(Type));
	memcpy_s(&SetLobbyType_Params.LobbyId, sizeof(SetLobbyType_Params.LobbyId), &LobbyId, sizeof(LobbyId));

	uFnSetLobbyType->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetLobbyType, &SetLobbyType_Params, nullptr);
	uFnSetLobbyType->FunctionFlags |= 0x400;

	memcpy_s(&LobbyId, sizeof(LobbyId), &SetLobbyType_Params.LobbyId, sizeof(SetLobbyType_Params.LobbyId));

	return SetLobbyType_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyServer
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  ServerIP                       (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            ServerUID                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceSteamworks::SetLobbyServer(class FString ServerIP, struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& ServerUID)
{
	static UFunction* uFnSetLobbyServer = nullptr;

	if (!uFnSetLobbyServer)
	{
		uFnSetLobbyServer = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyServer");
	}

	UOnlineLobbyInterfaceSteamworks_execSetLobbyServer_Params SetLobbyServer_Params;
	memset(&SetLobbyServer_Params, 0, sizeof(SetLobbyServer_Params));
	memcpy_s(&SetLobbyServer_Params.ServerIP, sizeof(SetLobbyServer_Params.ServerIP), &ServerIP, sizeof(ServerIP));
	memcpy_s(&SetLobbyServer_Params.LobbyId, sizeof(SetLobbyServer_Params.LobbyId), &LobbyId, sizeof(LobbyId));
	memcpy_s(&SetLobbyServer_Params.ServerUID, sizeof(SetLobbyServer_Params.ServerUID), &ServerUID, sizeof(ServerUID));

	uFnSetLobbyServer->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetLobbyServer, &SetLobbyServer_Params, nullptr);
	uFnSetLobbyServer->FunctionFlags |= 0x400;

	memcpy_s(&LobbyId, sizeof(LobbyId), &SetLobbyServer_Params.LobbyId, sizeof(SetLobbyServer_Params.LobbyId));
	memcpy_s(&ServerUID, sizeof(ServerUID), &SetLobbyServer_Params.ServerUID, sizeof(SetLobbyServer_Params.ServerUID));

	return SetLobbyServer_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.RemoveLobbySetting
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceSteamworks::RemoveLobbySetting(class FString Key, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* uFnRemoveLobbySetting = nullptr;

	if (!uFnRemoveLobbySetting)
	{
		uFnRemoveLobbySetting = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.RemoveLobbySetting");
	}

	UOnlineLobbyInterfaceSteamworks_execRemoveLobbySetting_Params RemoveLobbySetting_Params;
	memset(&RemoveLobbySetting_Params, 0, sizeof(RemoveLobbySetting_Params));
	memcpy_s(&RemoveLobbySetting_Params.Key, sizeof(RemoveLobbySetting_Params.Key), &Key, sizeof(Key));
	memcpy_s(&RemoveLobbySetting_Params.LobbyId, sizeof(RemoveLobbySetting_Params.LobbyId), &LobbyId, sizeof(LobbyId));

	uFnRemoveLobbySetting->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRemoveLobbySetting, &RemoveLobbySetting_Params, nullptr);
	uFnRemoveLobbySetting->FunctionFlags |= 0x400;

	memcpy_s(&LobbyId, sizeof(LobbyId), &RemoveLobbySetting_Params.LobbyId, sizeof(RemoveLobbySetting_Params.LobbyId));

	return RemoveLobbySetting_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbySetting
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Value                          (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceSteamworks::SetLobbySetting(class FString Key, class FString Value, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* uFnSetLobbySetting = nullptr;

	if (!uFnSetLobbySetting)
	{
		uFnSetLobbySetting = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbySetting");
	}

	UOnlineLobbyInterfaceSteamworks_execSetLobbySetting_Params SetLobbySetting_Params;
	memset(&SetLobbySetting_Params, 0, sizeof(SetLobbySetting_Params));
	memcpy_s(&SetLobbySetting_Params.Key, sizeof(SetLobbySetting_Params.Key), &Key, sizeof(Key));
	memcpy_s(&SetLobbySetting_Params.Value, sizeof(SetLobbySetting_Params.Value), &Value, sizeof(Value));
	memcpy_s(&SetLobbySetting_Params.LobbyId, sizeof(SetLobbySetting_Params.LobbyId), &LobbyId, sizeof(LobbyId));

	uFnSetLobbySetting->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetLobbySetting, &SetLobbySetting_Params, nullptr);
	uFnSetLobbySetting->FunctionFlags |= 0x400;

	memcpy_s(&LobbyId, sizeof(LobbyId), &SetLobbySetting_Params.LobbyId, sizeof(SetLobbySetting_Params.LobbyId));

	return SetLobbySetting_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyAdmin
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            AdminId                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceSteamworks::GetLobbyAdmin(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& AdminId)
{
	static UFunction* uFnGetLobbyAdmin = nullptr;

	if (!uFnGetLobbyAdmin)
	{
		uFnGetLobbyAdmin = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyAdmin");
	}

	UOnlineLobbyInterfaceSteamworks_execGetLobbyAdmin_Params GetLobbyAdmin_Params;
	memset(&GetLobbyAdmin_Params, 0, sizeof(GetLobbyAdmin_Params));
	memcpy_s(&GetLobbyAdmin_Params.LobbyId, sizeof(GetLobbyAdmin_Params.LobbyId), &LobbyId, sizeof(LobbyId));
	memcpy_s(&GetLobbyAdmin_Params.AdminId, sizeof(GetLobbyAdmin_Params.AdminId), &AdminId, sizeof(AdminId));

	uFnGetLobbyAdmin->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetLobbyAdmin, &GetLobbyAdmin_Params, nullptr);
	uFnGetLobbyAdmin->FunctionFlags |= 0x400;

	memcpy_s(&LobbyId, sizeof(LobbyId), &GetLobbyAdmin_Params.LobbyId, sizeof(GetLobbyAdmin_Params.LobbyId));
	memcpy_s(&AdminId, sizeof(AdminId), &GetLobbyAdmin_Params.AdminId, sizeof(GetLobbyAdmin_Params.AdminId));

	return GetLobbyAdmin_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyKicked
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// int32_t                        AdminIndex                     (CPF_Parm)
// struct FActiveLobbyInfo        Lobby                          (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::OnLobbyKicked(int32_t AdminIndex, struct FActiveLobbyInfo& Lobby)
{
	static UFunction* uFnOnLobbyKicked = nullptr;

	if (!uFnOnLobbyKicked)
	{
		uFnOnLobbyKicked = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyKicked");
	}

	UOnlineLobbyInterfaceSteamworks_execOnLobbyKicked_Params OnLobbyKicked_Params;
	memset(&OnLobbyKicked_Params, 0, sizeof(OnLobbyKicked_Params));
	memcpy_s(&OnLobbyKicked_Params.AdminIndex, sizeof(OnLobbyKicked_Params.AdminIndex), &AdminIndex, sizeof(AdminIndex));
	memcpy_s(&OnLobbyKicked_Params.Lobby, sizeof(OnLobbyKicked_Params.Lobby), &Lobby, sizeof(Lobby));

	this->ProcessEvent(uFnOnLobbyKicked, &OnLobbyKicked_Params, nullptr);

	memcpy_s(&Lobby, sizeof(Lobby), &OnLobbyKicked_Params.Lobby, sizeof(OnLobbyKicked_Params.Lobby));
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SendLobbyBinaryData
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// TArray<uint8_t>                Data                           (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceSteamworks::SendLobbyBinaryData(struct FUniqueLobbyId& LobbyId, TArray<uint8_t>& Data)
{
	static UFunction* uFnSendLobbyBinaryData = nullptr;

	if (!uFnSendLobbyBinaryData)
	{
		uFnSendLobbyBinaryData = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SendLobbyBinaryData");
	}

	UOnlineLobbyInterfaceSteamworks_execSendLobbyBinaryData_Params SendLobbyBinaryData_Params;
	memset(&SendLobbyBinaryData_Params, 0, sizeof(SendLobbyBinaryData_Params));
	memcpy_s(&SendLobbyBinaryData_Params.LobbyId, sizeof(SendLobbyBinaryData_Params.LobbyId), &LobbyId, sizeof(LobbyId));
	memcpy_s(&SendLobbyBinaryData_Params.Data, sizeof(SendLobbyBinaryData_Params.Data), &Data, sizeof(Data));

	uFnSendLobbyBinaryData->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSendLobbyBinaryData, &SendLobbyBinaryData_Params, nullptr);
	uFnSendLobbyBinaryData->FunctionFlags |= 0x400;

	memcpy_s(&LobbyId, sizeof(LobbyId), &SendLobbyBinaryData_Params.LobbyId, sizeof(SendLobbyBinaryData_Params.LobbyId));
	memcpy_s(&Data, sizeof(Data), &SendLobbyBinaryData_Params.Data, sizeof(SendLobbyBinaryData_Params.Data));

	return SendLobbyBinaryData_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyUserSetting
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Value                          (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceSteamworks::SetLobbyUserSetting(class FString Key, class FString Value, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* uFnSetLobbyUserSetting = nullptr;

	if (!uFnSetLobbyUserSetting)
	{
		uFnSetLobbyUserSetting = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyUserSetting");
	}

	UOnlineLobbyInterfaceSteamworks_execSetLobbyUserSetting_Params SetLobbyUserSetting_Params;
	memset(&SetLobbyUserSetting_Params, 0, sizeof(SetLobbyUserSetting_Params));
	memcpy_s(&SetLobbyUserSetting_Params.Key, sizeof(SetLobbyUserSetting_Params.Key), &Key, sizeof(Key));
	memcpy_s(&SetLobbyUserSetting_Params.Value, sizeof(SetLobbyUserSetting_Params.Value), &Value, sizeof(Value));
	memcpy_s(&SetLobbyUserSetting_Params.LobbyId, sizeof(SetLobbyUserSetting_Params.LobbyId), &LobbyId, sizeof(LobbyId));

	uFnSetLobbyUserSetting->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetLobbyUserSetting, &SetLobbyUserSetting_Params, nullptr);
	uFnSetLobbyUserSetting->FunctionFlags |= 0x400;

	memcpy_s(&LobbyId, sizeof(LobbyId), &SetLobbyUserSetting_Params.LobbyId, sizeof(SetLobbyUserSetting_Params.LobbyId));

	return SetLobbyUserSetting_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.LeaveLobby
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceSteamworks::LeaveLobby(struct FUniqueLobbyId& LobbyId)
{
	static UFunction* uFnLeaveLobby = nullptr;

	if (!uFnLeaveLobby)
	{
		uFnLeaveLobby = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.LeaveLobby");
	}

	UOnlineLobbyInterfaceSteamworks_execLeaveLobby_Params LeaveLobby_Params;
	memset(&LeaveLobby_Params, 0, sizeof(LeaveLobby_Params));
	memcpy_s(&LeaveLobby_Params.LobbyId, sizeof(LeaveLobby_Params.LobbyId), &LobbyId, sizeof(LobbyId));

	uFnLeaveLobby->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnLeaveLobby, &LeaveLobby_Params, nullptr);
	uFnLeaveLobby->FunctionFlags |= 0x400;

	memcpy_s(&LobbyId, sizeof(LobbyId), &LeaveLobby_Params.LobbyId, sizeof(LeaveLobby_Params.LobbyId));

	return LeaveLobby_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.JoinLobby
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        LocalPlayerNum                 (CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceSteamworks::JoinLobby(int32_t LocalPlayerNum, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* uFnJoinLobby = nullptr;

	if (!uFnJoinLobby)
	{
		uFnJoinLobby = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.JoinLobby");
	}

	UOnlineLobbyInterfaceSteamworks_execJoinLobby_Params JoinLobby_Params;
	memset(&JoinLobby_Params, 0, sizeof(JoinLobby_Params));
	memcpy_s(&JoinLobby_Params.LocalPlayerNum, sizeof(JoinLobby_Params.LocalPlayerNum), &LocalPlayerNum, sizeof(LocalPlayerNum));
	memcpy_s(&JoinLobby_Params.LobbyId, sizeof(JoinLobby_Params.LobbyId), &LobbyId, sizeof(LobbyId));

	uFnJoinLobby->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnJoinLobby, &JoinLobby_Params, nullptr);
	uFnJoinLobby->FunctionFlags |= 0x400;

	memcpy_s(&LobbyId, sizeof(LobbyId), &JoinLobby_Params.LobbyId, sizeof(JoinLobby_Params.LobbyId));

	return JoinLobby_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.UpdateFoundLobbies
// [0x400024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_OptionalParm | CPF_Parm)

bool UOnlineLobbyInterfaceSteamworks::UpdateFoundLobbies(struct FUniqueLobbyId LobbyId)
{
	static UFunction* uFnUpdateFoundLobbies = nullptr;

	if (!uFnUpdateFoundLobbies)
	{
		uFnUpdateFoundLobbies = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.UpdateFoundLobbies");
	}

	UOnlineLobbyInterfaceSteamworks_execUpdateFoundLobbies_Params UpdateFoundLobbies_Params;
	memset(&UpdateFoundLobbies_Params, 0, sizeof(UpdateFoundLobbies_Params));
	memcpy_s(&UpdateFoundLobbies_Params.LobbyId, sizeof(UpdateFoundLobbies_Params.LobbyId), &LobbyId, sizeof(LobbyId));

	uFnUpdateFoundLobbies->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUpdateFoundLobbies, &UpdateFoundLobbies_Params, nullptr);
	uFnUpdateFoundLobbies->FunctionFlags |= 0x400;

	return UpdateFoundLobbies_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.FindLobbies
// [0x400024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        MaxResults                     (CPF_OptionalParm | CPF_Parm)
// TArray<struct FLobbyFilter>    Filters                        (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FLobbySortFilter> SortFilters                    (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// int32_t                        MinSlots                       (CPF_OptionalParm | CPF_Parm)
// ELobbyDistance                 Distance                       (CPF_OptionalParm | CPF_Parm)

bool UOnlineLobbyInterfaceSteamworks::FindLobbies(int32_t MaxResults, TArray<struct FLobbyFilter> Filters, TArray<struct FLobbySortFilter> SortFilters, int32_t MinSlots, ELobbyDistance Distance)
{
	static UFunction* uFnFindLobbies = nullptr;

	if (!uFnFindLobbies)
	{
		uFnFindLobbies = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.FindLobbies");
	}

	UOnlineLobbyInterfaceSteamworks_execFindLobbies_Params FindLobbies_Params;
	memset(&FindLobbies_Params, 0, sizeof(FindLobbies_Params));
	memcpy_s(&FindLobbies_Params.MaxResults, sizeof(FindLobbies_Params.MaxResults), &MaxResults, sizeof(MaxResults));
	memcpy_s(&FindLobbies_Params.Filters, sizeof(FindLobbies_Params.Filters), &Filters, sizeof(Filters));
	memcpy_s(&FindLobbies_Params.SortFilters, sizeof(FindLobbies_Params.SortFilters), &SortFilters, sizeof(SortFilters));
	memcpy_s(&FindLobbies_Params.MinSlots, sizeof(FindLobbies_Params.MinSlots), &MinSlots, sizeof(MinSlots));
	memcpy_s(&FindLobbies_Params.Distance, sizeof(FindLobbies_Params.Distance), &Distance, sizeof(Distance));

	uFnFindLobbies->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnFindLobbies, &FindLobbies_Params, nullptr);
	uFnFindLobbies->FunctionFlags |= 0x400;

	return FindLobbies_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.CreateLobby
// [0x400024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        LocalPlayerNum                 (CPF_Parm)
// int32_t                        MaxPlayers                     (CPF_Parm)
// ELobbyVisibility               Type                           (CPF_OptionalParm | CPF_Parm)
// TArray<struct FLobbyMetaData>  InitialSettings                (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceSteamworks::CreateLobby(int32_t LocalPlayerNum, int32_t MaxPlayers, ELobbyVisibility Type, TArray<struct FLobbyMetaData> InitialSettings)
{
	static UFunction* uFnCreateLobby = nullptr;

	if (!uFnCreateLobby)
	{
		uFnCreateLobby = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.CreateLobby");
	}

	UOnlineLobbyInterfaceSteamworks_execCreateLobby_Params CreateLobby_Params;
	memset(&CreateLobby_Params, 0, sizeof(CreateLobby_Params));
	memcpy_s(&CreateLobby_Params.LocalPlayerNum, sizeof(CreateLobby_Params.LocalPlayerNum), &LocalPlayerNum, sizeof(LocalPlayerNum));
	memcpy_s(&CreateLobby_Params.MaxPlayers, sizeof(CreateLobby_Params.MaxPlayers), &MaxPlayers, sizeof(MaxPlayers));
	memcpy_s(&CreateLobby_Params.Type, sizeof(CreateLobby_Params.Type), &Type, sizeof(Type));
	memcpy_s(&CreateLobby_Params.InitialSettings, sizeof(CreateLobby_Params.InitialSettings), &InitialSettings, sizeof(InitialSettings));

	uFnCreateLobby->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCreateLobby, &CreateLobby_Params, nullptr);
	uFnCreateLobby->FunctionFlags |= 0x400;

	return CreateLobby_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadBlockList
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadBlockList(uint8_t LocalUserNum)
{
	static UFunction* uFnReadBlockList = nullptr;

	if (!uFnReadBlockList)
	{
		uFnReadBlockList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadBlockList");
	}

	UOnlineSubsystemSteamworks_execReadBlockList_Params ReadBlockList_Params;
	memset(&ReadBlockList_Params, 0, sizeof(ReadBlockList_Params));
	memcpy_s(&ReadBlockList_Params.LocalUserNum, sizeof(ReadBlockList_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnReadBlockList, &ReadBlockList_Params, nullptr);

	return ReadBlockList_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetBlockList
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FOnlineFriend>   OutBlockList                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::GetBlockList(uint8_t LocalUserNum, TArray<struct FOnlineFriend>& OutBlockList)
{
	static UFunction* uFnGetBlockList = nullptr;

	if (!uFnGetBlockList)
	{
		uFnGetBlockList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetBlockList");
	}

	UOnlineSubsystemSteamworks_execGetBlockList_Params GetBlockList_Params;
	memset(&GetBlockList_Params, 0, sizeof(GetBlockList_Params));
	memcpy_s(&GetBlockList_Params.LocalUserNum, sizeof(GetBlockList_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&GetBlockList_Params.OutBlockList, sizeof(GetBlockList_Params.OutBlockList), &OutBlockList, sizeof(OutBlockList));

	this->ProcessEvent(uFnGetBlockList, &GetBlockList_Params, nullptr);

	memcpy_s(&OutBlockList, sizeof(OutBlockList), &GetBlockList_Params.OutBlockList, sizeof(GetBlockList_Params.OutBlockList));
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerUnblockedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         Delegate                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddPlayerUnblockedDelegate(uint8_t LocalUserNum, struct FScriptDelegate Delegate)
{
	static UFunction* uFnAddPlayerUnblockedDelegate = nullptr;

	if (!uFnAddPlayerUnblockedDelegate)
	{
		uFnAddPlayerUnblockedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerUnblockedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddPlayerUnblockedDelegate_Params AddPlayerUnblockedDelegate_Params;
	memset(&AddPlayerUnblockedDelegate_Params, 0, sizeof(AddPlayerUnblockedDelegate_Params));
	memcpy_s(&AddPlayerUnblockedDelegate_Params.LocalUserNum, sizeof(AddPlayerUnblockedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddPlayerUnblockedDelegate_Params.Delegate, sizeof(AddPlayerUnblockedDelegate_Params.Delegate), &Delegate, sizeof(Delegate));

	this->ProcessEvent(uFnAddPlayerUnblockedDelegate, &AddPlayerUnblockedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerUnblocked
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// class UError*                  Error                          (CPF_Parm)

void UOnlineSubsystemSteamworks::OnPlayerUnblocked(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, class UError* Error)
{
	static UFunction* uFnOnPlayerUnblocked = nullptr;

	if (!uFnOnPlayerUnblocked)
	{
		uFnOnPlayerUnblocked = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerUnblocked");
	}

	UOnlineSubsystemSteamworks_execOnPlayerUnblocked_Params OnPlayerUnblocked_Params;
	memset(&OnPlayerUnblocked_Params, 0, sizeof(OnPlayerUnblocked_Params));
	memcpy_s(&OnPlayerUnblocked_Params.LocalUserNum, sizeof(OnPlayerUnblocked_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OnPlayerUnblocked_Params.PlayerID, sizeof(OnPlayerUnblocked_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	memcpy_s(&OnPlayerUnblocked_Params.Error, sizeof(OnPlayerUnblocked_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnPlayerUnblocked, &OnPlayerUnblocked_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerBlockedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         Delegate                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddPlayerBlockedDelegate(uint8_t LocalUserNum, struct FScriptDelegate Delegate)
{
	static UFunction* uFnAddPlayerBlockedDelegate = nullptr;

	if (!uFnAddPlayerBlockedDelegate)
	{
		uFnAddPlayerBlockedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerBlockedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddPlayerBlockedDelegate_Params AddPlayerBlockedDelegate_Params;
	memset(&AddPlayerBlockedDelegate_Params, 0, sizeof(AddPlayerBlockedDelegate_Params));
	memcpy_s(&AddPlayerBlockedDelegate_Params.LocalUserNum, sizeof(AddPlayerBlockedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddPlayerBlockedDelegate_Params.Delegate, sizeof(AddPlayerBlockedDelegate_Params.Delegate), &Delegate, sizeof(Delegate));

	this->ProcessEvent(uFnAddPlayerBlockedDelegate, &AddPlayerBlockedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerBlocked
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// class UError*                  Error                          (CPF_Parm)

void UOnlineSubsystemSteamworks::OnPlayerBlocked(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, class UError* Error)
{
	static UFunction* uFnOnPlayerBlocked = nullptr;

	if (!uFnOnPlayerBlocked)
	{
		uFnOnPlayerBlocked = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerBlocked");
	}

	UOnlineSubsystemSteamworks_execOnPlayerBlocked_Params OnPlayerBlocked_Params;
	memset(&OnPlayerBlocked_Params, 0, sizeof(OnPlayerBlocked_Params));
	memcpy_s(&OnPlayerBlocked_Params.LocalUserNum, sizeof(OnPlayerBlocked_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OnPlayerBlocked_Params.PlayerID, sizeof(OnPlayerBlocked_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	memcpy_s(&OnPlayerBlocked_Params.Error, sizeof(OnPlayerBlocked_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnPlayerBlocked, &OnPlayerBlocked_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddBlockListUpdatedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         Delegate                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddBlockListUpdatedDelegate(uint8_t LocalUserNum, struct FScriptDelegate Delegate)
{
	static UFunction* uFnAddBlockListUpdatedDelegate = nullptr;

	if (!uFnAddBlockListUpdatedDelegate)
	{
		uFnAddBlockListUpdatedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddBlockListUpdatedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddBlockListUpdatedDelegate_Params AddBlockListUpdatedDelegate_Params;
	memset(&AddBlockListUpdatedDelegate_Params, 0, sizeof(AddBlockListUpdatedDelegate_Params));
	memcpy_s(&AddBlockListUpdatedDelegate_Params.LocalUserNum, sizeof(AddBlockListUpdatedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddBlockListUpdatedDelegate_Params.Delegate, sizeof(AddBlockListUpdatedDelegate_Params.Delegate), &Delegate, sizeof(Delegate));

	this->ProcessEvent(uFnAddBlockListUpdatedDelegate, &AddBlockListUpdatedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnBlockListUpdated
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnBlockListUpdated(uint8_t LocalUserNum)
{
	static UFunction* uFnOnBlockListUpdated = nullptr;

	if (!uFnOnBlockListUpdated)
	{
		uFnOnBlockListUpdated = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnBlockListUpdated");
	}

	UOnlineSubsystemSteamworks_execOnBlockListUpdated_Params OnBlockListUpdated_Params;
	memset(&OnBlockListUpdated_Params, 0, sizeof(OnBlockListUpdated_Params));
	memcpy_s(&OnBlockListUpdated_Params.LocalUserNum, sizeof(OnBlockListUpdated_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnOnBlockListUpdated, &OnBlockListUpdated_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EpicIDToPlatformID
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            EpicAccountId                  (CPF_Parm | CPF_NeedCtorLink)
// EOnlinePlatform                TargetPlatform                 (CPF_Parm)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::EpicIDToPlatformID(struct FUniqueNetId EpicAccountId, EOnlinePlatform TargetPlatform, struct FScriptDelegate Callback)
{
	static UFunction* uFnEpicIDToPlatformID = nullptr;

	if (!uFnEpicIDToPlatformID)
	{
		uFnEpicIDToPlatformID = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EpicIDToPlatformID");
	}

	UOnlineSubsystemSteamworks_execEpicIDToPlatformID_Params EpicIDToPlatformID_Params;
	memset(&EpicIDToPlatformID_Params, 0, sizeof(EpicIDToPlatformID_Params));
	memcpy_s(&EpicIDToPlatformID_Params.EpicAccountId, sizeof(EpicIDToPlatformID_Params.EpicAccountId), &EpicAccountId, sizeof(EpicAccountId));
	memcpy_s(&EpicIDToPlatformID_Params.TargetPlatform, sizeof(EpicIDToPlatformID_Params.TargetPlatform), &TargetPlatform, sizeof(TargetPlatform));
	memcpy_s(&EpicIDToPlatformID_Params.Callback, sizeof(EpicIDToPlatformID_Params.Callback), &Callback, sizeof(Callback));

	this->ProcessEvent(uFnEpicIDToPlatformID, &EpicIDToPlatformID_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EpicIDToPlatformIDCallback
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            PlatformAccountId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::EpicIDToPlatformIDCallback(struct FUniqueNetId PlatformAccountId, class FString Error)
{
	static UFunction* uFnEpicIDToPlatformIDCallback = nullptr;

	if (!uFnEpicIDToPlatformIDCallback)
	{
		uFnEpicIDToPlatformIDCallback = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EpicIDToPlatformIDCallback");
	}

	UOnlineSubsystemSteamworks_execEpicIDToPlatformIDCallback_Params EpicIDToPlatformIDCallback_Params;
	memset(&EpicIDToPlatformIDCallback_Params, 0, sizeof(EpicIDToPlatformIDCallback_Params));
	memcpy_s(&EpicIDToPlatformIDCallback_Params.PlatformAccountId, sizeof(EpicIDToPlatformIDCallback_Params.PlatformAccountId), &PlatformAccountId, sizeof(PlatformAccountId));
	memcpy_s(&EpicIDToPlatformIDCallback_Params.Error, sizeof(EpicIDToPlatformIDCallback_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnEpicIDToPlatformIDCallback, &EpicIDToPlatformIDCallback_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetEpicAccountId
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FUniqueNetId            PlatformId                     (CPF_Parm | CPF_NeedCtorLink)

struct FUniqueNetId UOnlineSubsystemSteamworks::GetEpicAccountId(struct FUniqueNetId PlatformId)
{
	static UFunction* uFnGetEpicAccountId = nullptr;

	if (!uFnGetEpicAccountId)
	{
		uFnGetEpicAccountId = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetEpicAccountId");
	}

	UOnlineSubsystemSteamworks_execGetEpicAccountId_Params GetEpicAccountId_Params;
	memset(&GetEpicAccountId_Params, 0, sizeof(GetEpicAccountId_Params));
	memcpy_s(&GetEpicAccountId_Params.PlatformId, sizeof(GetEpicAccountId_Params.PlatformId), &PlatformId, sizeof(PlatformId));

	this->ProcessEvent(uFnGetEpicAccountId, &GetEpicAccountId_Params, nullptr);

	return GetEpicAccountId_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerSigningOutDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearPlayerSigningOutDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearPlayerSigningOutDelegate = nullptr;

	if (!uFnClearPlayerSigningOutDelegate)
	{
		uFnClearPlayerSigningOutDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerSigningOutDelegate");
	}

	UOnlineSubsystemSteamworks_execClearPlayerSigningOutDelegate_Params ClearPlayerSigningOutDelegate_Params;
	memset(&ClearPlayerSigningOutDelegate_Params, 0, sizeof(ClearPlayerSigningOutDelegate_Params));
	memcpy_s(&ClearPlayerSigningOutDelegate_Params.InDelegate, sizeof(ClearPlayerSigningOutDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnClearPlayerSigningOutDelegate, &ClearPlayerSigningOutDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerSigningOutDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddPlayerSigningOutDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddPlayerSigningOutDelegate = nullptr;

	if (!uFnAddPlayerSigningOutDelegate)
	{
		uFnAddPlayerSigningOutDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerSigningOutDelegate");
	}

	UOnlineSubsystemSteamworks_execAddPlayerSigningOutDelegate_Params AddPlayerSigningOutDelegate_Params;
	memset(&AddPlayerSigningOutDelegate_Params, 0, sizeof(AddPlayerSigningOutDelegate_Params));
	memcpy_s(&AddPlayerSigningOutDelegate_Params.InDelegate, sizeof(AddPlayerSigningOutDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnAddPlayerSigningOutDelegate, &AddPlayerSigningOutDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerSigningOut
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnPlayerSigningOut(uint8_t LocalUserNum)
{
	static UFunction* uFnOnPlayerSigningOut = nullptr;

	if (!uFnOnPlayerSigningOut)
	{
		uFnOnPlayerSigningOut = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerSigningOut");
	}

	UOnlineSubsystemSteamworks_execOnPlayerSigningOut_Params OnPlayerSigningOut_Params;
	memset(&OnPlayerSigningOut_Params, 0, sizeof(OnPlayerSigningOut_Params));
	memcpy_s(&OnPlayerSigningOut_Params.LocalUserNum, sizeof(OnPlayerSigningOut_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnOnPlayerSigningOut, &OnPlayerSigningOut_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RefreshNetworkErrorToggle
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::RefreshNetworkErrorToggle()
{
	static UFunction* uFnRefreshNetworkErrorToggle = nullptr;

	if (!uFnRefreshNetworkErrorToggle)
	{
		uFnRefreshNetworkErrorToggle = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RefreshNetworkErrorToggle");
	}

	UOnlineSubsystemSteamworks_execRefreshNetworkErrorToggle_Params RefreshNetworkErrorToggle_Params;
	memset(&RefreshNetworkErrorToggle_Params, 0, sizeof(RefreshNetworkErrorToggle_Params));

	this->ProcessEvent(uFnRefreshNetworkErrorToggle, &RefreshNetworkErrorToggle_Params, nullptr);

	return RefreshNetworkErrorToggle_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.TriggerScreenshot
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::TriggerScreenshot()
{
	static UFunction* uFnTriggerScreenshot = nullptr;

	if (!uFnTriggerScreenshot)
	{
		uFnTriggerScreenshot = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.TriggerScreenshot");
	}

	UOnlineSubsystemSteamworks_execTriggerScreenshot_Params TriggerScreenshot_Params;
	memset(&TriggerScreenshot_Params, 0, sizeof(TriggerScreenshot_Params));

	uFnTriggerScreenshot->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnTriggerScreenshot, &TriggerScreenshot_Params, nullptr);
	uFnTriggerScreenshot->FunctionFlags |= 0x400;

	return TriggerScreenshot_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerConnectionStatusChanged
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LocalPlayerNum                 (CPF_Parm)
// bool                           bConnected                     (CPF_Parm)

void UOnlineSubsystemSteamworks::OnControllerConnectionStatusChanged(int32_t LocalPlayerNum, bool bConnected)
{
	static UFunction* uFnOnControllerConnectionStatusChanged = nullptr;

	if (!uFnOnControllerConnectionStatusChanged)
	{
		uFnOnControllerConnectionStatusChanged = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerConnectionStatusChanged");
	}

	UOnlineSubsystemSteamworks_execOnControllerConnectionStatusChanged_Params OnControllerConnectionStatusChanged_Params;
	memset(&OnControllerConnectionStatusChanged_Params, 0, sizeof(OnControllerConnectionStatusChanged_Params));
	memcpy_s(&OnControllerConnectionStatusChanged_Params.LocalPlayerNum, sizeof(OnControllerConnectionStatusChanged_Params.LocalPlayerNum), &LocalPlayerNum, sizeof(LocalPlayerNum));
	OnControllerConnectionStatusChanged_Params.bConnected = bConnected;

	uFnOnControllerConnectionStatusChanged->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnOnControllerConnectionStatusChanged, &OnControllerConnectionStatusChanged_Params, nullptr);
	uFnOnControllerConnectionStatusChanged->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerInputAPIChanged
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LocalPlayerNum                 (CPF_Parm)
// EInputAPI                      InputAPI                       (CPF_Parm)

void UOnlineSubsystemSteamworks::OnControllerInputAPIChanged(int32_t LocalPlayerNum, EInputAPI InputAPI)
{
	static UFunction* uFnOnControllerInputAPIChanged = nullptr;

	if (!uFnOnControllerInputAPIChanged)
	{
		uFnOnControllerInputAPIChanged = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerInputAPIChanged");
	}

	UOnlineSubsystemSteamworks_execOnControllerInputAPIChanged_Params OnControllerInputAPIChanged_Params;
	memset(&OnControllerInputAPIChanged_Params, 0, sizeof(OnControllerInputAPIChanged_Params));
	memcpy_s(&OnControllerInputAPIChanged_Params.LocalPlayerNum, sizeof(OnControllerInputAPIChanged_Params.LocalPlayerNum), &LocalPlayerNum, sizeof(LocalPlayerNum));
	memcpy_s(&OnControllerInputAPIChanged_Params.InputAPI, sizeof(OnControllerInputAPIChanged_Params.InputAPI), &InputAPI, sizeof(InputAPI));

	uFnOnControllerInputAPIChanged->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnOnControllerInputAPIChanged, &OnControllerInputAPIChanged_Params, nullptr);
	uFnOnControllerInputAPIChanged->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetControllerPlatform
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// EInputPlatformType             ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        LocalPlayerNum                 (CPF_Parm)

EInputPlatformType UOnlineSubsystemSteamworks::GetControllerPlatform(int32_t LocalPlayerNum)
{
	static UFunction* uFnGetControllerPlatform = nullptr;

	if (!uFnGetControllerPlatform)
	{
		uFnGetControllerPlatform = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetControllerPlatform");
	}

	UOnlineSubsystemSteamworks_execGetControllerPlatform_Params GetControllerPlatform_Params;
	memset(&GetControllerPlatform_Params, 0, sizeof(GetControllerPlatform_Params));
	memcpy_s(&GetControllerPlatform_Params.LocalPlayerNum, sizeof(GetControllerPlatform_Params.LocalPlayerNum), &LocalPlayerNum, sizeof(LocalPlayerNum));

	uFnGetControllerPlatform->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetControllerPlatform, &GetControllerPlatform_Params, nullptr);
	uFnGetControllerPlatform->FunctionFlags |= 0x400;

	return GetControllerPlatform_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetControllerID
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        LocalPlayerNum                 (CPF_Parm)

int32_t UOnlineSubsystemSteamworks::GetControllerID(int32_t LocalPlayerNum)
{
	static UFunction* uFnGetControllerID = nullptr;

	if (!uFnGetControllerID)
	{
		uFnGetControllerID = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetControllerID");
	}

	UOnlineSubsystemSteamworks_execGetControllerID_Params GetControllerID_Params;
	memset(&GetControllerID_Params, 0, sizeof(GetControllerID_Params));
	memcpy_s(&GetControllerID_Params.LocalPlayerNum, sizeof(GetControllerID_Params.LocalPlayerNum), &LocalPlayerNum, sizeof(LocalPlayerNum));

	uFnGetControllerID->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetControllerID, &GetControllerID_Params, nullptr);
	uFnGetControllerID->FunctionFlags |= 0x400;

	return GetControllerID_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetConnectedControllerNames
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// TArray<struct FName>           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<struct FName> UOnlineSubsystemSteamworks::GetConnectedControllerNames()
{
	static UFunction* uFnGetConnectedControllerNames = nullptr;

	if (!uFnGetConnectedControllerNames)
	{
		uFnGetConnectedControllerNames = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetConnectedControllerNames");
	}

	UOnlineSubsystemSteamworks_execGetConnectedControllerNames_Params GetConnectedControllerNames_Params;
	memset(&GetConnectedControllerNames_Params, 0, sizeof(GetConnectedControllerNames_Params));

	uFnGetConnectedControllerNames->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetConnectedControllerNames, &GetConnectedControllerNames_Params, nullptr);
	uFnGetConnectedControllerNames->FunctionFlags |= 0x400;

	return GetConnectedControllerNames_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLocalPlayerRemoved
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LocalPlayerNum                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLocalPlayerRemoved(int32_t LocalPlayerNum)
{
	static UFunction* uFnOnLocalPlayerRemoved = nullptr;

	if (!uFnOnLocalPlayerRemoved)
	{
		uFnOnLocalPlayerRemoved = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLocalPlayerRemoved");
	}

	UOnlineSubsystemSteamworks_execOnLocalPlayerRemoved_Params OnLocalPlayerRemoved_Params;
	memset(&OnLocalPlayerRemoved_Params, 0, sizeof(OnLocalPlayerRemoved_Params));
	memcpy_s(&OnLocalPlayerRemoved_Params.LocalPlayerNum, sizeof(OnLocalPlayerRemoved_Params.LocalPlayerNum), &LocalPlayerNum, sizeof(LocalPlayerNum));

	uFnOnLocalPlayerRemoved->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnOnLocalPlayerRemoved, &OnLocalPlayerRemoved_Params, nullptr);
	uFnOnLocalPlayerRemoved->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterController
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LocalPlayerNum                 (CPF_Parm)

void UOnlineSubsystemSteamworks::UnregisterController(int32_t LocalPlayerNum)
{
	static UFunction* uFnUnregisterController = nullptr;

	if (!uFnUnregisterController)
	{
		uFnUnregisterController = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterController");
	}

	UOnlineSubsystemSteamworks_execUnregisterController_Params UnregisterController_Params;
	memset(&UnregisterController_Params, 0, sizeof(UnregisterController_Params));
	memcpy_s(&UnregisterController_Params.LocalPlayerNum, sizeof(UnregisterController_Params.LocalPlayerNum), &LocalPlayerNum, sizeof(LocalPlayerNum));

	uFnUnregisterController->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUnregisterController, &UnregisterController_Params, nullptr);
	uFnUnregisterController->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterController
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LocalPlayerNum                 (CPF_Parm)
// int32_t                        ControllerId                   (CPF_OptionalParm | CPF_Parm)

void UOnlineSubsystemSteamworks::RegisterController(int32_t LocalPlayerNum, int32_t ControllerId)
{
	static UFunction* uFnRegisterController = nullptr;

	if (!uFnRegisterController)
	{
		uFnRegisterController = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterController");
	}

	UOnlineSubsystemSteamworks_execRegisterController_Params RegisterController_Params;
	memset(&RegisterController_Params, 0, sizeof(RegisterController_Params));
	memcpy_s(&RegisterController_Params.LocalPlayerNum, sizeof(RegisterController_Params.LocalPlayerNum), &LocalPlayerNum, sizeof(LocalPlayerNum));
	memcpy_s(&RegisterController_Params.ControllerId, sizeof(RegisterController_Params.ControllerId), &ControllerId, sizeof(ControllerId));

	uFnRegisterController->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRegisterController, &RegisterController_Params, nullptr);
	uFnRegisterController->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanRegisterController
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        LocalPlayerNum                 (CPF_Parm)

bool UOnlineSubsystemSteamworks::CanRegisterController(int32_t LocalPlayerNum)
{
	static UFunction* uFnCanRegisterController = nullptr;

	if (!uFnCanRegisterController)
	{
		uFnCanRegisterController = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanRegisterController");
	}

	UOnlineSubsystemSteamworks_execCanRegisterController_Params CanRegisterController_Params;
	memset(&CanRegisterController_Params, 0, sizeof(CanRegisterController_Params));
	memcpy_s(&CanRegisterController_Params.LocalPlayerNum, sizeof(CanRegisterController_Params.LocalPlayerNum), &LocalPlayerNum, sizeof(LocalPlayerNum));

	uFnCanRegisterController->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCanRegisterController, &CanRegisterController_Params, nullptr);
	uFnCanRegisterController->FunctionFlags |= 0x400;

	return CanRegisterController_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowBindings
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowBindings(int32_t ControllerId)
{
	static UFunction* uFnShowBindings = nullptr;

	if (!uFnShowBindings)
	{
		uFnShowBindings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowBindings");
	}

	UOnlineSubsystemSteamworks_execShowBindings_Params ShowBindings_Params;
	memset(&ShowBindings_Params, 0, sizeof(ShowBindings_Params));
	memcpy_s(&ShowBindings_Params.ControllerId, sizeof(ShowBindings_Params.ControllerId), &ControllerId, sizeof(ControllerId));

	uFnShowBindings->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowBindings, &ShowBindings_Params, nullptr);
	uFnShowBindings->FunctionFlags |= 0x400;

	return ShowBindings_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetControllerLayout
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ControllerId                   (CPF_Parm)
// struct FName                   LayoutName                     (CPF_Parm)

void UOnlineSubsystemSteamworks::SetControllerLayout(int32_t ControllerId, struct FName LayoutName)
{
	static UFunction* uFnSetControllerLayout = nullptr;

	if (!uFnSetControllerLayout)
	{
		uFnSetControllerLayout = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetControllerLayout");
	}

	UOnlineSubsystemSteamworks_execSetControllerLayout_Params SetControllerLayout_Params;
	memset(&SetControllerLayout_Params, 0, sizeof(SetControllerLayout_Params));
	memcpy_s(&SetControllerLayout_Params.ControllerId, sizeof(SetControllerLayout_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	memcpy_s(&SetControllerLayout_Params.LayoutName, sizeof(SetControllerLayout_Params.LayoutName), &LayoutName, sizeof(LayoutName));

	uFnSetControllerLayout->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetControllerLayout, &SetControllerLayout_Params, nullptr);
	uFnSetControllerLayout->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetInputAPI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EInputAPI                      TargetAPI                      (CPF_Parm)

void UOnlineSubsystemSteamworks::SetInputAPI(EInputAPI TargetAPI)
{
	static UFunction* uFnSetInputAPI = nullptr;

	if (!uFnSetInputAPI)
	{
		uFnSetInputAPI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetInputAPI");
	}

	UOnlineSubsystemSteamworks_execSetInputAPI_Params SetInputAPI_Params;
	memset(&SetInputAPI_Params, 0, sizeof(SetInputAPI_Params));
	memcpy_s(&SetInputAPI_Params.TargetAPI, sizeof(SetInputAPI_Params.TargetAPI), &TargetAPI, sizeof(TargetAPI));

	uFnSetInputAPI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetInputAPI, &SetInputAPI_Params, nullptr);
	uFnSetInputAPI->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetActiveDiscDLC
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// TArray<struct FName>           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<struct FName> UOnlineSubsystemSteamworks::GetActiveDiscDLC()
{
	static UFunction* uFnGetActiveDiscDLC = nullptr;

	if (!uFnGetActiveDiscDLC)
	{
		uFnGetActiveDiscDLC = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetActiveDiscDLC");
	}

	UOnlineSubsystemSteamworks_execGetActiveDiscDLC_Params GetActiveDiscDLC_Params;
	memset(&GetActiveDiscDLC_Params, 0, sizeof(GetActiveDiscDLC_Params));

	this->ProcessEvent(uFnGetActiveDiscDLC, &GetActiveDiscDLC_Params, nullptr);

	return GetActiveDiscDLC_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineSubscriptionRequirement
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bRequiresOnlineSubscription    (CPF_Parm)

void UOnlineSubsystemSteamworks::SetOnlineSubscriptionRequirement(bool bRequiresOnlineSubscription)
{
	static UFunction* uFnSetOnlineSubscriptionRequirement = nullptr;

	if (!uFnSetOnlineSubscriptionRequirement)
	{
		uFnSetOnlineSubscriptionRequirement = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineSubscriptionRequirement");
	}

	UOnlineSubsystemSteamworks_execSetOnlineSubscriptionRequirement_Params SetOnlineSubscriptionRequirement_Params;
	memset(&SetOnlineSubscriptionRequirement_Params, 0, sizeof(SetOnlineSubscriptionRequirement_Params));
	SetOnlineSubscriptionRequirement_Params.bRequiresOnlineSubscription = bRequiresOnlineSubscription;

	this->ProcessEvent(uFnSetOnlineSubscriptionRequirement, &SetOnlineSubscriptionRequirement_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleGamepadConnectionStatusChanged
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGameViewportClient*     GVC                            (CPF_Parm)
// int32_t                        LocalPlayerNum                 (CPF_Parm)
// bool                           bConnected                     (CPF_Parm)

void UOnlineSubsystemSteamworks::HandleGamepadConnectionStatusChanged(class UGameViewportClient* GVC, int32_t LocalPlayerNum, bool bConnected)
{
	static UFunction* uFnHandleGamepadConnectionStatusChanged = nullptr;

	if (!uFnHandleGamepadConnectionStatusChanged)
	{
		uFnHandleGamepadConnectionStatusChanged = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleGamepadConnectionStatusChanged");
	}

	UOnlineSubsystemSteamworks_execHandleGamepadConnectionStatusChanged_Params HandleGamepadConnectionStatusChanged_Params;
	memset(&HandleGamepadConnectionStatusChanged_Params, 0, sizeof(HandleGamepadConnectionStatusChanged_Params));
	memcpy_s(&HandleGamepadConnectionStatusChanged_Params.GVC, sizeof(HandleGamepadConnectionStatusChanged_Params.GVC), &GVC, sizeof(GVC));
	memcpy_s(&HandleGamepadConnectionStatusChanged_Params.LocalPlayerNum, sizeof(HandleGamepadConnectionStatusChanged_Params.LocalPlayerNum), &LocalPlayerNum, sizeof(LocalPlayerNum));
	HandleGamepadConnectionStatusChanged_Params.bConnected = bConnected;

	this->ProcessEvent(uFnHandleGamepadConnectionStatusChanged, &HandleGamepadConnectionStatusChanged_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleGamepadInputAPIChanged
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGameViewportClient*     GVC                            (CPF_Parm)
// int32_t                        LocalPlayerNum                 (CPF_Parm)
// EInputAPI                      InputAPI                       (CPF_Parm)

void UOnlineSubsystemSteamworks::HandleGamepadInputAPIChanged(class UGameViewportClient* GVC, int32_t LocalPlayerNum, EInputAPI InputAPI)
{
	static UFunction* uFnHandleGamepadInputAPIChanged = nullptr;

	if (!uFnHandleGamepadInputAPIChanged)
	{
		uFnHandleGamepadInputAPIChanged = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleGamepadInputAPIChanged");
	}

	UOnlineSubsystemSteamworks_execHandleGamepadInputAPIChanged_Params HandleGamepadInputAPIChanged_Params;
	memset(&HandleGamepadInputAPIChanged_Params, 0, sizeof(HandleGamepadInputAPIChanged_Params));
	memcpy_s(&HandleGamepadInputAPIChanged_Params.GVC, sizeof(HandleGamepadInputAPIChanged_Params.GVC), &GVC, sizeof(GVC));
	memcpy_s(&HandleGamepadInputAPIChanged_Params.LocalPlayerNum, sizeof(HandleGamepadInputAPIChanged_Params.LocalPlayerNum), &LocalPlayerNum, sizeof(LocalPlayerNum));
	memcpy_s(&HandleGamepadInputAPIChanged_Params.InputAPI, sizeof(HandleGamepadInputAPIChanged_Params.InputAPI), &InputAPI, sizeof(InputAPI));

	this->ProcessEvent(uFnHandleGamepadInputAPIChanged, &HandleGamepadInputAPIChanged_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearInputAPIChangedDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InputAPIChangedDelegate        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearInputAPIChangedDelegate(struct FScriptDelegate InputAPIChangedDelegate)
{
	static UFunction* uFnClearInputAPIChangedDelegate = nullptr;

	if (!uFnClearInputAPIChangedDelegate)
	{
		uFnClearInputAPIChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearInputAPIChangedDelegate");
	}

	UOnlineSubsystemSteamworks_execClearInputAPIChangedDelegate_Params ClearInputAPIChangedDelegate_Params;
	memset(&ClearInputAPIChangedDelegate_Params, 0, sizeof(ClearInputAPIChangedDelegate_Params));
	memcpy_s(&ClearInputAPIChangedDelegate_Params.InputAPIChangedDelegate, sizeof(ClearInputAPIChangedDelegate_Params.InputAPIChangedDelegate), &InputAPIChangedDelegate, sizeof(InputAPIChangedDelegate));

	this->ProcessEvent(uFnClearInputAPIChangedDelegate, &ClearInputAPIChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddInputAPIChangedDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InputAPIChangedDelegate        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddInputAPIChangedDelegate(struct FScriptDelegate InputAPIChangedDelegate)
{
	static UFunction* uFnAddInputAPIChangedDelegate = nullptr;

	if (!uFnAddInputAPIChangedDelegate)
	{
		uFnAddInputAPIChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddInputAPIChangedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddInputAPIChangedDelegate_Params AddInputAPIChangedDelegate_Params;
	memset(&AddInputAPIChangedDelegate_Params, 0, sizeof(AddInputAPIChangedDelegate_Params));
	memcpy_s(&AddInputAPIChangedDelegate_Params.InputAPIChangedDelegate, sizeof(AddInputAPIChangedDelegate_Params.InputAPIChangedDelegate), &InputAPIChangedDelegate, sizeof(InputAPIChangedDelegate));

	this->ProcessEvent(uFnAddInputAPIChangedDelegate, &AddInputAPIChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnregisteredControllerDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UnregisteredControllerDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUnregisteredControllerDelegate(struct FScriptDelegate UnregisteredControllerDelegate)
{
	static UFunction* uFnClearUnregisteredControllerDelegate = nullptr;

	if (!uFnClearUnregisteredControllerDelegate)
	{
		uFnClearUnregisteredControllerDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnregisteredControllerDelegate");
	}

	UOnlineSubsystemSteamworks_execClearUnregisteredControllerDelegate_Params ClearUnregisteredControllerDelegate_Params;
	memset(&ClearUnregisteredControllerDelegate_Params, 0, sizeof(ClearUnregisteredControllerDelegate_Params));
	memcpy_s(&ClearUnregisteredControllerDelegate_Params.UnregisteredControllerDelegate, sizeof(ClearUnregisteredControllerDelegate_Params.UnregisteredControllerDelegate), &UnregisteredControllerDelegate, sizeof(UnregisteredControllerDelegate));

	this->ProcessEvent(uFnClearUnregisteredControllerDelegate, &ClearUnregisteredControllerDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisteredControllerDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RegisteredControllerDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearRegisteredControllerDelegate(struct FScriptDelegate RegisteredControllerDelegate)
{
	static UFunction* uFnClearRegisteredControllerDelegate = nullptr;

	if (!uFnClearRegisteredControllerDelegate)
	{
		uFnClearRegisteredControllerDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisteredControllerDelegate");
	}

	UOnlineSubsystemSteamworks_execClearRegisteredControllerDelegate_Params ClearRegisteredControllerDelegate_Params;
	memset(&ClearRegisteredControllerDelegate_Params, 0, sizeof(ClearRegisteredControllerDelegate_Params));
	memcpy_s(&ClearRegisteredControllerDelegate_Params.RegisteredControllerDelegate, sizeof(ClearRegisteredControllerDelegate_Params.RegisteredControllerDelegate), &RegisteredControllerDelegate, sizeof(RegisteredControllerDelegate));

	this->ProcessEvent(uFnClearRegisteredControllerDelegate, &ClearRegisteredControllerDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnregisteredControllerDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UnregisteredControllerDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUnregisteredControllerDelegate(struct FScriptDelegate UnregisteredControllerDelegate)
{
	static UFunction* uFnAddUnregisteredControllerDelegate = nullptr;

	if (!uFnAddUnregisteredControllerDelegate)
	{
		uFnAddUnregisteredControllerDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnregisteredControllerDelegate");
	}

	UOnlineSubsystemSteamworks_execAddUnregisteredControllerDelegate_Params AddUnregisteredControllerDelegate_Params;
	memset(&AddUnregisteredControllerDelegate_Params, 0, sizeof(AddUnregisteredControllerDelegate_Params));
	memcpy_s(&AddUnregisteredControllerDelegate_Params.UnregisteredControllerDelegate, sizeof(AddUnregisteredControllerDelegate_Params.UnregisteredControllerDelegate), &UnregisteredControllerDelegate, sizeof(UnregisteredControllerDelegate));

	this->ProcessEvent(uFnAddUnregisteredControllerDelegate, &AddUnregisteredControllerDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisteredControllerDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RegisteredControllerDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddRegisteredControllerDelegate(struct FScriptDelegate RegisteredControllerDelegate)
{
	static UFunction* uFnAddRegisteredControllerDelegate = nullptr;

	if (!uFnAddRegisteredControllerDelegate)
	{
		uFnAddRegisteredControllerDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisteredControllerDelegate");
	}

	UOnlineSubsystemSteamworks_execAddRegisteredControllerDelegate_Params AddRegisteredControllerDelegate_Params;
	memset(&AddRegisteredControllerDelegate_Params, 0, sizeof(AddRegisteredControllerDelegate_Params));
	memcpy_s(&AddRegisteredControllerDelegate_Params.RegisteredControllerDelegate, sizeof(AddRegisteredControllerDelegate_Params.RegisteredControllerDelegate), &RegisteredControllerDelegate, sizeof(RegisteredControllerDelegate));

	this->ProcessEvent(uFnAddRegisteredControllerDelegate, &AddRegisteredControllerDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnInputAPIChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// EInputAPI                      TargetAPI                      (CPF_Parm)

void UOnlineSubsystemSteamworks::OnInputAPIChanged(EInputAPI TargetAPI)
{
	static UFunction* uFnOnInputAPIChanged = nullptr;

	if (!uFnOnInputAPIChanged)
	{
		uFnOnInputAPIChanged = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnInputAPIChanged");
	}

	UOnlineSubsystemSteamworks_execOnInputAPIChanged_Params OnInputAPIChanged_Params;
	memset(&OnInputAPIChanged_Params, 0, sizeof(OnInputAPIChanged_Params));
	memcpy_s(&OnInputAPIChanged_Params.TargetAPI, sizeof(OnInputAPIChanged_Params.TargetAPI), &TargetAPI, sizeof(TargetAPI));

	this->ProcessEvent(uFnOnInputAPIChanged, &OnInputAPIChanged_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnregisteredController
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LocalPlayerNum                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnUnregisteredController(int32_t LocalPlayerNum)
{
	static UFunction* uFnOnUnregisteredController = nullptr;

	if (!uFnOnUnregisteredController)
	{
		uFnOnUnregisteredController = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnregisteredController");
	}

	UOnlineSubsystemSteamworks_execOnUnregisteredController_Params OnUnregisteredController_Params;
	memset(&OnUnregisteredController_Params, 0, sizeof(OnUnregisteredController_Params));
	memcpy_s(&OnUnregisteredController_Params.LocalPlayerNum, sizeof(OnUnregisteredController_Params.LocalPlayerNum), &LocalPlayerNum, sizeof(LocalPlayerNum));

	this->ProcessEvent(uFnOnUnregisteredController, &OnUnregisteredController_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisteredController
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LocalPlayerNum                 (CPF_Parm)
// int32_t                        ControllerId                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnRegisteredController(int32_t LocalPlayerNum, int32_t ControllerId)
{
	static UFunction* uFnOnRegisteredController = nullptr;

	if (!uFnOnRegisteredController)
	{
		uFnOnRegisteredController = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisteredController");
	}

	UOnlineSubsystemSteamworks_execOnRegisteredController_Params OnRegisteredController_Params;
	memset(&OnRegisteredController_Params, 0, sizeof(OnRegisteredController_Params));
	memcpy_s(&OnRegisteredController_Params.LocalPlayerNum, sizeof(OnRegisteredController_Params.LocalPlayerNum), &LocalPlayerNum, sizeof(LocalPlayerNum));
	memcpy_s(&OnRegisteredController_Params.ControllerId, sizeof(OnRegisteredController_Params.ControllerId), &ControllerId, sizeof(ControllerId));

	this->ProcessEvent(uFnOnRegisteredController, &OnRegisteredController_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasIncomingFriendInvite
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            InviteFrom                     (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::HasIncomingFriendInvite(uint8_t LocalUserNum, struct FUniqueNetId InviteFrom)
{
	static UFunction* uFnHasIncomingFriendInvite = nullptr;

	if (!uFnHasIncomingFriendInvite)
	{
		uFnHasIncomingFriendInvite = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasIncomingFriendInvite");
	}

	UOnlineSubsystemSteamworks_execHasIncomingFriendInvite_Params HasIncomingFriendInvite_Params;
	memset(&HasIncomingFriendInvite_Params, 0, sizeof(HasIncomingFriendInvite_Params));
	memcpy_s(&HasIncomingFriendInvite_Params.LocalUserNum, sizeof(HasIncomingFriendInvite_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&HasIncomingFriendInvite_Params.InviteFrom, sizeof(HasIncomingFriendInvite_Params.InviteFrom), &InviteFrom, sizeof(InviteFrom));

	this->ProcessEvent(uFnHasIncomingFriendInvite, &HasIncomingFriendInvite_Params, nullptr);

	return HasIncomingFriendInvite_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasFriendsFunctionality
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::HasFriendsFunctionality()
{
	static UFunction* uFnHasFriendsFunctionality = nullptr;

	if (!uFnHasFriendsFunctionality)
	{
		uFnHasFriendsFunctionality = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasFriendsFunctionality");
	}

	UOnlineSubsystemSteamworks_execHasFriendsFunctionality_Params HasFriendsFunctionality_Params;
	memset(&HasFriendsFunctionality_Params, 0, sizeof(HasFriendsFunctionality_Params));

	this->ProcessEvent(uFnHasFriendsFunctionality, &HasFriendsFunctionality_Params, nullptr);

	return HasFriendsFunctionality_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanSendOfflinePartyInvite
// [0x400020002] (FUNC_Defined | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::CanSendOfflinePartyInvite(struct FUniqueNetId PlayerID)
{
	static UFunction* uFnCanSendOfflinePartyInvite = nullptr;

	if (!uFnCanSendOfflinePartyInvite)
	{
		uFnCanSendOfflinePartyInvite = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanSendOfflinePartyInvite");
	}

	UOnlineSubsystemSteamworks_execCanSendOfflinePartyInvite_Params CanSendOfflinePartyInvite_Params;
	memset(&CanSendOfflinePartyInvite_Params, 0, sizeof(CanSendOfflinePartyInvite_Params));
	memcpy_s(&CanSendOfflinePartyInvite_Params.PlayerID, sizeof(CanSendOfflinePartyInvite_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	this->ProcessEvent(uFnCanSendOfflinePartyInvite, &CanSendOfflinePartyInvite_Params, nullptr);

	return CanSendOfflinePartyInvite_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CheckParentalControlInfo
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// bool                           bShowUi                        (CPF_Parm)

bool UOnlineSubsystemSteamworks::CheckParentalControlInfo(bool bShowUi)
{
	static UFunction* uFnCheckParentalControlInfo = nullptr;

	if (!uFnCheckParentalControlInfo)
	{
		uFnCheckParentalControlInfo = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CheckParentalControlInfo");
	}

	UOnlineSubsystemSteamworks_execCheckParentalControlInfo_Params CheckParentalControlInfo_Params;
	memset(&CheckParentalControlInfo_Params, 0, sizeof(CheckParentalControlInfo_Params));
	CheckParentalControlInfo_Params.bShowUi = bShowUi;

	this->ProcessEvent(uFnCheckParentalControlInfo, &CheckParentalControlInfo_Params, nullptr);

	return CheckParentalControlInfo_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RecordPlayersRecentlyMetKeys
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FFriendHistoryKey> PlayerKeys                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::RecordPlayersRecentlyMetKeys(uint8_t LocalUserNum, TArray<struct FFriendHistoryKey>& PlayerKeys)
{
	static UFunction* uFnRecordPlayersRecentlyMetKeys = nullptr;

	if (!uFnRecordPlayersRecentlyMetKeys)
	{
		uFnRecordPlayersRecentlyMetKeys = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RecordPlayersRecentlyMetKeys");
	}

	UOnlineSubsystemSteamworks_execRecordPlayersRecentlyMetKeys_Params RecordPlayersRecentlyMetKeys_Params;
	memset(&RecordPlayersRecentlyMetKeys_Params, 0, sizeof(RecordPlayersRecentlyMetKeys_Params));
	memcpy_s(&RecordPlayersRecentlyMetKeys_Params.LocalUserNum, sizeof(RecordPlayersRecentlyMetKeys_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&RecordPlayersRecentlyMetKeys_Params.PlayerKeys, sizeof(RecordPlayersRecentlyMetKeys_Params.PlayerKeys), &PlayerKeys, sizeof(PlayerKeys));

	this->ProcessEvent(uFnRecordPlayersRecentlyMetKeys, &RecordPlayersRecentlyMetKeys_Params, nullptr);

	memcpy_s(&PlayerKeys, sizeof(PlayerKeys), &RecordPlayersRecentlyMetKeys_Params.PlayerKeys, sizeof(RecordPlayersRecentlyMetKeys_Params.PlayerKeys));

	return RecordPlayersRecentlyMetKeys_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayHistoryRegistrationKey
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// TArray<uint8_t>                Key                            (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetPlayHistoryRegistrationKey(TArray<uint8_t>& Key)
{
	static UFunction* uFnGetPlayHistoryRegistrationKey = nullptr;

	if (!uFnGetPlayHistoryRegistrationKey)
	{
		uFnGetPlayHistoryRegistrationKey = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayHistoryRegistrationKey");
	}

	UOnlineSubsystemSteamworks_execGetPlayHistoryRegistrationKey_Params GetPlayHistoryRegistrationKey_Params;
	memset(&GetPlayHistoryRegistrationKey_Params, 0, sizeof(GetPlayHistoryRegistrationKey_Params));
	memcpy_s(&GetPlayHistoryRegistrationKey_Params.Key, sizeof(GetPlayHistoryRegistrationKey_Params.Key), &Key, sizeof(Key));

	this->ProcessEvent(uFnGetPlayHistoryRegistrationKey, &GetPlayHistoryRegistrationKey_Params, nullptr);

	memcpy_s(&Key, sizeof(Key), &GetPlayHistoryRegistrationKey_Params.Key, sizeof(GetPlayHistoryRegistrationKey_Params.Key));

	return GetPlayHistoryRegistrationKey_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsOriginalAppOwner
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::IsOriginalAppOwner()
{
	static UFunction* uFnIsOriginalAppOwner = nullptr;

	if (!uFnIsOriginalAppOwner)
	{
		uFnIsOriginalAppOwner = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsOriginalAppOwner");
	}

	UOnlineSubsystemSteamworks_execIsOriginalAppOwner_Params IsOriginalAppOwner_Params;
	memset(&IsOriginalAppOwner_Params, 0, sizeof(IsOriginalAppOwner_Params));

	uFnIsOriginalAppOwner->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsOriginalAppOwner, &IsOriginalAppOwner_Params, nullptr);
	uFnIsOriginalAppOwner->FunctionFlags |= 0x400;

	return IsOriginalAppOwner_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateSessionStatusFromPlayers
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        CurrentPlayerCount             (CPF_Parm)
// int32_t                        numBotPlayers                  (CPF_Parm)

void UOnlineSubsystemSteamworks::UpdateSessionStatusFromPlayers(int32_t CurrentPlayerCount, int32_t numBotPlayers)
{
	static UFunction* uFnUpdateSessionStatusFromPlayers = nullptr;

	if (!uFnUpdateSessionStatusFromPlayers)
	{
		uFnUpdateSessionStatusFromPlayers = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateSessionStatusFromPlayers");
	}

	UOnlineSubsystemSteamworks_execUpdateSessionStatusFromPlayers_Params UpdateSessionStatusFromPlayers_Params;
	memset(&UpdateSessionStatusFromPlayers_Params, 0, sizeof(UpdateSessionStatusFromPlayers_Params));
	memcpy_s(&UpdateSessionStatusFromPlayers_Params.CurrentPlayerCount, sizeof(UpdateSessionStatusFromPlayers_Params.CurrentPlayerCount), &CurrentPlayerCount, sizeof(CurrentPlayerCount));
	memcpy_s(&UpdateSessionStatusFromPlayers_Params.numBotPlayers, sizeof(UpdateSessionStatusFromPlayers_Params.numBotPlayers), &numBotPlayers, sizeof(numBotPlayers));

	this->ProcessEvent(uFnUpdateSessionStatusFromPlayers, &UpdateSessionStatusFromPlayers_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsAchievementUnlocked
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        AchievementId                  (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsAchievementUnlocked(uint8_t LocalUserNum, int32_t AchievementId)
{
	static UFunction* uFnIsAchievementUnlocked = nullptr;

	if (!uFnIsAchievementUnlocked)
	{
		uFnIsAchievementUnlocked = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsAchievementUnlocked");
	}

	UOnlineSubsystemSteamworks_execIsAchievementUnlocked_Params IsAchievementUnlocked_Params;
	memset(&IsAchievementUnlocked_Params, 0, sizeof(IsAchievementUnlocked_Params));
	memcpy_s(&IsAchievementUnlocked_Params.LocalUserNum, sizeof(IsAchievementUnlocked_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&IsAchievementUnlocked_Params.AchievementId, sizeof(IsAchievementUnlocked_Params.AchievementId), &AchievementId, sizeof(AchievementId));

	this->ProcessEvent(uFnIsAchievementUnlocked, &IsAchievementUnlocked_Params, nullptr);

	return IsAchievementUnlocked_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateGameProgress
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalPlayerNum                 (CPF_Parm)
// float                          Progress                       (CPF_Parm)

void UOnlineSubsystemSteamworks::UpdateGameProgress(uint8_t LocalPlayerNum, float Progress)
{
	static UFunction* uFnUpdateGameProgress = nullptr;

	if (!uFnUpdateGameProgress)
	{
		uFnUpdateGameProgress = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateGameProgress");
	}

	UOnlineSubsystemSteamworks_execUpdateGameProgress_Params UpdateGameProgress_Params;
	memset(&UpdateGameProgress_Params, 0, sizeof(UpdateGameProgress_Params));
	memcpy_s(&UpdateGameProgress_Params.LocalPlayerNum, sizeof(UpdateGameProgress_Params.LocalPlayerNum), &LocalPlayerNum, sizeof(LocalPlayerNum));
	memcpy_s(&UpdateGameProgress_Params.Progress, sizeof(UpdateGameProgress_Params.Progress), &Progress, sizeof(Progress));

	this->ProcessEvent(uFnUpdateGameProgress, &UpdateGameProgress_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FinishOnlineGameSession
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  ServerId                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::FinishOnlineGameSession(class FString ServerId)
{
	static UFunction* uFnFinishOnlineGameSession = nullptr;

	if (!uFnFinishOnlineGameSession)
	{
		uFnFinishOnlineGameSession = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FinishOnlineGameSession");
	}

	UOnlineSubsystemSteamworks_execFinishOnlineGameSession_Params FinishOnlineGameSession_Params;
	memset(&FinishOnlineGameSession_Params, 0, sizeof(FinishOnlineGameSession_Params));
	memcpy_s(&FinishOnlineGameSession_Params.ServerId, sizeof(FinishOnlineGameSession_Params.ServerId), &ServerId, sizeof(ServerId));

	this->ProcessEvent(uFnFinishOnlineGameSession, &FinishOnlineGameSession_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartOnlineGameSession
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  ServerId                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::StartOnlineGameSession(class FString ServerId)
{
	static UFunction* uFnStartOnlineGameSession = nullptr;

	if (!uFnStartOnlineGameSession)
	{
		uFnStartOnlineGameSession = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartOnlineGameSession");
	}

	UOnlineSubsystemSteamworks_execStartOnlineGameSession_Params StartOnlineGameSession_Params;
	memset(&StartOnlineGameSession_Params, 0, sizeof(StartOnlineGameSession_Params));
	memcpy_s(&StartOnlineGameSession_Params.ServerId, sizeof(StartOnlineGameSession_Params.ServerId), &ServerId, sizeof(ServerId));

	this->ProcessEvent(uFnStartOnlineGameSession, &StartOnlineGameSession_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSystemUserControllerPairingChangedDelegate
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         PairingChangeDelegate          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearSystemUserControllerPairingChangedDelegate(struct FScriptDelegate PairingChangeDelegate)
{
	static UFunction* uFnClearSystemUserControllerPairingChangedDelegate = nullptr;

	if (!uFnClearSystemUserControllerPairingChangedDelegate)
	{
		uFnClearSystemUserControllerPairingChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSystemUserControllerPairingChangedDelegate");
	}

	UOnlineSubsystemSteamworks_execClearSystemUserControllerPairingChangedDelegate_Params ClearSystemUserControllerPairingChangedDelegate_Params;
	memset(&ClearSystemUserControllerPairingChangedDelegate_Params, 0, sizeof(ClearSystemUserControllerPairingChangedDelegate_Params));
	memcpy_s(&ClearSystemUserControllerPairingChangedDelegate_Params.PairingChangeDelegate, sizeof(ClearSystemUserControllerPairingChangedDelegate_Params.PairingChangeDelegate), &PairingChangeDelegate, sizeof(PairingChangeDelegate));

	this->ProcessEvent(uFnClearSystemUserControllerPairingChangedDelegate, &ClearSystemUserControllerPairingChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSystemUserControllerPairingChangedDelegate
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         PairingChangeDelegate          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddSystemUserControllerPairingChangedDelegate(struct FScriptDelegate PairingChangeDelegate)
{
	static UFunction* uFnAddSystemUserControllerPairingChangedDelegate = nullptr;

	if (!uFnAddSystemUserControllerPairingChangedDelegate)
	{
		uFnAddSystemUserControllerPairingChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSystemUserControllerPairingChangedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddSystemUserControllerPairingChangedDelegate_Params AddSystemUserControllerPairingChangedDelegate_Params;
	memset(&AddSystemUserControllerPairingChangedDelegate_Params, 0, sizeof(AddSystemUserControllerPairingChangedDelegate_Params));
	memcpy_s(&AddSystemUserControllerPairingChangedDelegate_Params.PairingChangeDelegate, sizeof(AddSystemUserControllerPairingChangedDelegate_Params.PairingChangeDelegate), &PairingChangeDelegate, sizeof(PairingChangeDelegate));

	this->ProcessEvent(uFnAddSystemUserControllerPairingChangedDelegate, &AddSystemUserControllerPairingChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSystemUserControllerPairingChanged
// [0x400120000] (FUNC_Public | FUNC_Delegate | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        NewLocalUserNum                (CPF_Parm)
// int32_t                        PreviousLocalUserNum           (CPF_Parm)

void UOnlineSubsystemSteamworks::OnSystemUserControllerPairingChanged(int32_t NewLocalUserNum, int32_t PreviousLocalUserNum)
{
	static UFunction* uFnOnSystemUserControllerPairingChanged = nullptr;

	if (!uFnOnSystemUserControllerPairingChanged)
	{
		uFnOnSystemUserControllerPairingChanged = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSystemUserControllerPairingChanged");
	}

	UOnlineSubsystemSteamworks_execOnSystemUserControllerPairingChanged_Params OnSystemUserControllerPairingChanged_Params;
	memset(&OnSystemUserControllerPairingChanged_Params, 0, sizeof(OnSystemUserControllerPairingChanged_Params));
	memcpy_s(&OnSystemUserControllerPairingChanged_Params.NewLocalUserNum, sizeof(OnSystemUserControllerPairingChanged_Params.NewLocalUserNum), &NewLocalUserNum, sizeof(NewLocalUserNum));
	memcpy_s(&OnSystemUserControllerPairingChanged_Params.PreviousLocalUserNum, sizeof(OnSystemUserControllerPairingChanged_Params.PreviousLocalUserNum), &PreviousLocalUserNum, sizeof(PreviousLocalUserNum));

	this->ProcessEvent(uFnOnSystemUserControllerPairingChanged, &OnSystemUserControllerPairingChanged_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAccountPickerInput
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::ClearAccountPickerInput()
{
	static UFunction* uFnClearAccountPickerInput = nullptr;

	if (!uFnClearAccountPickerInput)
	{
		uFnClearAccountPickerInput = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAccountPickerInput");
	}

	UOnlineSubsystemSteamworks_execClearAccountPickerInput_Params ClearAccountPickerInput_Params;
	memset(&ClearAccountPickerInput_Params, 0, sizeof(ClearAccountPickerInput_Params));

	this->ProcessEvent(uFnClearAccountPickerInput, &ClearAccountPickerInput_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LookForAccountPickerInput
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::LookForAccountPickerInput()
{
	static UFunction* uFnLookForAccountPickerInput = nullptr;

	if (!uFnLookForAccountPickerInput)
	{
		uFnLookForAccountPickerInput = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LookForAccountPickerInput");
	}

	UOnlineSubsystemSteamworks_execLookForAccountPickerInput_Params LookForAccountPickerInput_Params;
	memset(&LookForAccountPickerInput_Params, 0, sizeof(LookForAccountPickerInput_Params));

	this->ProcessEvent(uFnLookForAccountPickerInput, &LookForAccountPickerInput_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerToSession
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        ControllerId                   (CPF_Parm)

void UOnlineSubsystemSteamworks::AddPlayerToSession(uint8_t ControllerId)
{
	static UFunction* uFnAddPlayerToSession = nullptr;

	if (!uFnAddPlayerToSession)
	{
		uFnAddPlayerToSession = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerToSession");
	}

	UOnlineSubsystemSteamworks_execAddPlayerToSession_Params AddPlayerToSession_Params;
	memset(&AddPlayerToSession_Params, 0, sizeof(AddPlayerToSession_Params));
	memcpy_s(&AddPlayerToSession_Params.ControllerId, sizeof(AddPlayerToSession_Params.ControllerId), &ControllerId, sizeof(ControllerId));

	this->ProcessEvent(uFnAddPlayerToSession, &AddPlayerToSession_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPrimaryPlayer
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::ClearPrimaryPlayer()
{
	static UFunction* uFnClearPrimaryPlayer = nullptr;

	if (!uFnClearPrimaryPlayer)
	{
		uFnClearPrimaryPlayer = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPrimaryPlayer");
	}

	UOnlineSubsystemSteamworks_execClearPrimaryPlayer_Params ClearPrimaryPlayer_Params;
	memset(&ClearPrimaryPlayer_Params, 0, sizeof(ClearPrimaryPlayer_Params));

	this->ProcessEvent(uFnClearPrimaryPlayer, &ClearPrimaryPlayer_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveUserAssociation
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        ControllerId                   (CPF_Parm)

void UOnlineSubsystemSteamworks::RemoveUserAssociation(uint8_t ControllerId)
{
	static UFunction* uFnRemoveUserAssociation = nullptr;

	if (!uFnRemoveUserAssociation)
	{
		uFnRemoveUserAssociation = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveUserAssociation");
	}

	UOnlineSubsystemSteamworks_execRemoveUserAssociation_Params RemoveUserAssociation_Params;
	memset(&RemoveUserAssociation_Params, 0, sizeof(RemoveUserAssociation_Params));
	memcpy_s(&RemoveUserAssociation_Params.ControllerId, sizeof(RemoveUserAssociation_Params.ControllerId), &ControllerId, sizeof(ControllerId));

	this->ProcessEvent(uFnRemoveUserAssociation, &RemoveUserAssociation_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MapEnd
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::MapEnd()
{
	static UFunction* uFnMapEnd = nullptr;

	if (!uFnMapEnd)
	{
		uFnMapEnd = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MapEnd");
	}

	UOnlineSubsystemSteamworks_execMapEnd_Params MapEnd_Params;
	memset(&MapEnd_Params, 0, sizeof(MapEnd_Params));

	this->ProcessEvent(uFnMapEnd, &MapEnd_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MapStart
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::MapStart()
{
	static UFunction* uFnMapStart = nullptr;

	if (!uFnMapStart)
	{
		uFnMapStart = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MapStart");
	}

	UOnlineSubsystemSteamworks_execMapStart_Params MapStart_Params;
	memset(&MapStart_Params, 0, sizeof(MapStart_Params));

	this->ProcessEvent(uFnMapStart, &MapStart_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineMatchEnd
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnlineMatchEnd()
{
	static UFunction* uFnOnlineMatchEnd = nullptr;

	if (!uFnOnlineMatchEnd)
	{
		uFnOnlineMatchEnd = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineMatchEnd");
	}

	UOnlineSubsystemSteamworks_execOnlineMatchEnd_Params OnlineMatchEnd_Params;
	memset(&OnlineMatchEnd_Params, 0, sizeof(OnlineMatchEnd_Params));

	this->ProcessEvent(uFnOnlineMatchEnd, &OnlineMatchEnd_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineMatchStart
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  MapName                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnlineMatchStart(class FString MapName)
{
	static UFunction* uFnOnlineMatchStart = nullptr;

	if (!uFnOnlineMatchStart)
	{
		uFnOnlineMatchStart = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineMatchStart");
	}

	UOnlineSubsystemSteamworks_execOnlineMatchStart_Params OnlineMatchStart_Params;
	memset(&OnlineMatchStart_Params, 0, sizeof(OnlineMatchStart_Params));
	memcpy_s(&OnlineMatchStart_Params.MapName, sizeof(OnlineMatchStart_Params.MapName), &MapName, sizeof(MapName));

	this->ProcessEvent(uFnOnlineMatchStart, &OnlineMatchStart_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionDifficultyLevel
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        DifficultyLevel                (CPF_Parm)

void UOnlineSubsystemSteamworks::SetSessionDifficultyLevel(int32_t DifficultyLevel)
{
	static UFunction* uFnSetSessionDifficultyLevel = nullptr;

	if (!uFnSetSessionDifficultyLevel)
	{
		uFnSetSessionDifficultyLevel = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionDifficultyLevel");
	}

	UOnlineSubsystemSteamworks_execSetSessionDifficultyLevel_Params SetSessionDifficultyLevel_Params;
	memset(&SetSessionDifficultyLevel_Params, 0, sizeof(SetSessionDifficultyLevel_Params));
	memcpy_s(&SetSessionDifficultyLevel_Params.DifficultyLevel, sizeof(SetSessionDifficultyLevel_Params.DifficultyLevel), &DifficultyLevel, sizeof(DifficultyLevel));

	this->ProcessEvent(uFnSetSessionDifficultyLevel, &SetSessionDifficultyLevel_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionGameplayModeName
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FName                   GameplayModeName               (CPF_Parm)

void UOnlineSubsystemSteamworks::SetSessionGameplayModeName(struct FName GameplayModeName)
{
	static UFunction* uFnSetSessionGameplayModeName = nullptr;

	if (!uFnSetSessionGameplayModeName)
	{
		uFnSetSessionGameplayModeName = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionGameplayModeName");
	}

	UOnlineSubsystemSteamworks_execSetSessionGameplayModeName_Params SetSessionGameplayModeName_Params;
	memset(&SetSessionGameplayModeName_Params, 0, sizeof(SetSessionGameplayModeName_Params));
	memcpy_s(&SetSessionGameplayModeName_Params.GameplayModeName, sizeof(SetSessionGameplayModeName_Params.GameplayModeName), &GameplayModeName, sizeof(GameplayModeName));

	this->ProcessEvent(uFnSetSessionGameplayModeName, &SetSessionGameplayModeName_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionGameplayMode
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        GameplayMode                   (CPF_Parm)

void UOnlineSubsystemSteamworks::SetSessionGameplayMode(int32_t GameplayMode)
{
	static UFunction* uFnSetSessionGameplayMode = nullptr;

	if (!uFnSetSessionGameplayMode)
	{
		uFnSetSessionGameplayMode = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionGameplayMode");
	}

	UOnlineSubsystemSteamworks_execSetSessionGameplayMode_Params SetSessionGameplayMode_Params;
	memset(&SetSessionGameplayMode_Params, 0, sizeof(SetSessionGameplayMode_Params));
	memcpy_s(&SetSessionGameplayMode_Params.GameplayMode, sizeof(SetSessionGameplayMode_Params.GameplayMode), &GameplayMode, sizeof(GameplayMode));

	this->ProcessEvent(uFnSetSessionGameplayMode, &SetSessionGameplayMode_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSyncedAchievements
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// TArray<bool>                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

TArray<bool> UOnlineSubsystemSteamworks::GetSyncedAchievements(uint8_t LocalUserNum)
{
	static UFunction* uFnGetSyncedAchievements = nullptr;

	if (!uFnGetSyncedAchievements)
	{
		uFnGetSyncedAchievements = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSyncedAchievements");
	}

	UOnlineSubsystemSteamworks_execGetSyncedAchievements_Params GetSyncedAchievements_Params;
	memset(&GetSyncedAchievements_Params, 0, sizeof(GetSyncedAchievements_Params));
	memcpy_s(&GetSyncedAchievements_Params.LocalUserNum, sizeof(GetSyncedAchievements_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnGetSyncedAchievements, &GetSyncedAchievements_Params, nullptr);

	return GetSyncedAchievements_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetPlayedWith
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            PlayerNetId                    (CPF_Const | CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::SetPlayedWith(struct FUniqueNetId PlayerNetId)
{
	static UFunction* uFnSetPlayedWith = nullptr;

	if (!uFnSetPlayedWith)
	{
		uFnSetPlayedWith = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetPlayedWith");
	}

	UOnlineSubsystemSteamworks_execSetPlayedWith_Params SetPlayedWith_Params;
	memset(&SetPlayedWith_Params, 0, sizeof(SetPlayedWith_Params));
	memcpy_s(&SetPlayedWith_Params.PlayerNetId, sizeof(SetPlayedWith_Params.PlayerNetId), &PlayerNetId, sizeof(PlayerNetId));

	uFnSetPlayedWith->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetPlayedWith, &SetPlayedWith_Params, nullptr);
	uFnSetPlayedWith->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleBootMessage
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::HandleBootMessage()
{
	static UFunction* uFnHandleBootMessage = nullptr;

	if (!uFnHandleBootMessage)
	{
		uFnHandleBootMessage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleBootMessage");
	}

	UOnlineSubsystemSteamworks_execHandleBootMessage_Params HandleBootMessage_Params;
	memset(&HandleBootMessage_Params, 0, sizeof(HandleBootMessage_Params));

	uFnHandleBootMessage->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnHandleBootMessage, &HandleBootMessage_Params, nullptr);
	uFnHandleBootMessage->FunctionFlags |= 0x400;

	return HandleBootMessage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearErrorDialogClosedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearErrorDialogClosedDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearErrorDialogClosedDelegate = nullptr;

	if (!uFnClearErrorDialogClosedDelegate)
	{
		uFnClearErrorDialogClosedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearErrorDialogClosedDelegate");
	}

	UOnlineSubsystemSteamworks_execClearErrorDialogClosedDelegate_Params ClearErrorDialogClosedDelegate_Params;
	memset(&ClearErrorDialogClosedDelegate_Params, 0, sizeof(ClearErrorDialogClosedDelegate_Params));
	memcpy_s(&ClearErrorDialogClosedDelegate_Params.InDelegate, sizeof(ClearErrorDialogClosedDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnClearErrorDialogClosedDelegate, &ClearErrorDialogClosedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddErrorDialogClosedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddErrorDialogClosedDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddErrorDialogClosedDelegate = nullptr;

	if (!uFnAddErrorDialogClosedDelegate)
	{
		uFnAddErrorDialogClosedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddErrorDialogClosedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddErrorDialogClosedDelegate_Params AddErrorDialogClosedDelegate_Params;
	memset(&AddErrorDialogClosedDelegate_Params, 0, sizeof(AddErrorDialogClosedDelegate_Params));
	memcpy_s(&AddErrorDialogClosedDelegate_Params.InDelegate, sizeof(AddErrorDialogClosedDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnAddErrorDialogClosedDelegate, &AddErrorDialogClosedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnErrorDialogClosed
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnErrorDialogClosed(int32_t LocalUserNum)
{
	static UFunction* uFnOnErrorDialogClosed = nullptr;

	if (!uFnOnErrorDialogClosed)
	{
		uFnOnErrorDialogClosed = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnErrorDialogClosed");
	}

	UOnlineSubsystemSteamworks_execOnErrorDialogClosed_Params OnErrorDialogClosed_Params;
	memset(&OnErrorDialogClosed_Params, 0, sizeof(OnErrorDialogClosed_Params));
	memcpy_s(&OnErrorDialogClosed_Params.LocalUserNum, sizeof(OnErrorDialogClosed_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnOnErrorDialogClosed, &OnErrorDialogClosed_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCloseKickPlayerDialogDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearCloseKickPlayerDialogDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearCloseKickPlayerDialogDelegate = nullptr;

	if (!uFnClearCloseKickPlayerDialogDelegate)
	{
		uFnClearCloseKickPlayerDialogDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCloseKickPlayerDialogDelegate");
	}

	UOnlineSubsystemSteamworks_execClearCloseKickPlayerDialogDelegate_Params ClearCloseKickPlayerDialogDelegate_Params;
	memset(&ClearCloseKickPlayerDialogDelegate_Params, 0, sizeof(ClearCloseKickPlayerDialogDelegate_Params));
	memcpy_s(&ClearCloseKickPlayerDialogDelegate_Params.InDelegate, sizeof(ClearCloseKickPlayerDialogDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnClearCloseKickPlayerDialogDelegate, &ClearCloseKickPlayerDialogDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCloseKickPlayerDialogDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddCloseKickPlayerDialogDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddCloseKickPlayerDialogDelegate = nullptr;

	if (!uFnAddCloseKickPlayerDialogDelegate)
	{
		uFnAddCloseKickPlayerDialogDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCloseKickPlayerDialogDelegate");
	}

	UOnlineSubsystemSteamworks_execAddCloseKickPlayerDialogDelegate_Params AddCloseKickPlayerDialogDelegate_Params;
	memset(&AddCloseKickPlayerDialogDelegate_Params, 0, sizeof(AddCloseKickPlayerDialogDelegate_Params));
	memcpy_s(&AddCloseKickPlayerDialogDelegate_Params.InDelegate, sizeof(AddCloseKickPlayerDialogDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnAddCloseKickPlayerDialogDelegate, &AddCloseKickPlayerDialogDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCloseKickPlayerDialog
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnCloseKickPlayerDialog()
{
	static UFunction* uFnOnCloseKickPlayerDialog = nullptr;

	if (!uFnOnCloseKickPlayerDialog)
	{
		uFnOnCloseKickPlayerDialog = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCloseKickPlayerDialog");
	}

	UOnlineSubsystemSteamworks_execOnCloseKickPlayerDialog_Params OnCloseKickPlayerDialog_Params;
	memset(&OnCloseKickPlayerDialog_Params, 0, sizeof(OnCloseKickPlayerDialog_Params));

	this->ProcessEvent(uFnOnCloseKickPlayerDialog, &OnCloseKickPlayerDialog_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCommerceDialogClosedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearCommerceDialogClosedDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearCommerceDialogClosedDelegate = nullptr;

	if (!uFnClearCommerceDialogClosedDelegate)
	{
		uFnClearCommerceDialogClosedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCommerceDialogClosedDelegate");
	}

	UOnlineSubsystemSteamworks_execClearCommerceDialogClosedDelegate_Params ClearCommerceDialogClosedDelegate_Params;
	memset(&ClearCommerceDialogClosedDelegate_Params, 0, sizeof(ClearCommerceDialogClosedDelegate_Params));
	memcpy_s(&ClearCommerceDialogClosedDelegate_Params.InDelegate, sizeof(ClearCommerceDialogClosedDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnClearCommerceDialogClosedDelegate, &ClearCommerceDialogClosedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCommerceDialogClosedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddCommerceDialogClosedDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddCommerceDialogClosedDelegate = nullptr;

	if (!uFnAddCommerceDialogClosedDelegate)
	{
		uFnAddCommerceDialogClosedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCommerceDialogClosedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddCommerceDialogClosedDelegate_Params AddCommerceDialogClosedDelegate_Params;
	memset(&AddCommerceDialogClosedDelegate_Params, 0, sizeof(AddCommerceDialogClosedDelegate_Params));
	memcpy_s(&AddCommerceDialogClosedDelegate_Params.InDelegate, sizeof(AddCommerceDialogClosedDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnAddCommerceDialogClosedDelegate, &AddCommerceDialogClosedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCommerceDialogClosed
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnCommerceDialogClosed()
{
	static UFunction* uFnOnCommerceDialogClosed = nullptr;

	if (!uFnOnCommerceDialogClosed)
	{
		uFnOnCommerceDialogClosed = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCommerceDialogClosed");
	}

	UOnlineSubsystemSteamworks_execOnCommerceDialogClosed_Params OnCommerceDialogClosed_Params;
	memset(&OnCommerceDialogClosed_Params, 0, sizeof(OnCommerceDialogClosed_Params));

	this->ProcessEvent(uFnOnCommerceDialogClosed, &OnCommerceDialogClosed_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WordFilterSanitizeString
// [0x00024001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Comment                        (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         SanitizeDelegate               (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            PlayerID                       (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::WordFilterSanitizeString(class FString Comment, struct FScriptDelegate SanitizeDelegate, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnWordFilterSanitizeString = nullptr;

	if (!uFnWordFilterSanitizeString)
	{
		uFnWordFilterSanitizeString = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WordFilterSanitizeString");
	}

	UOnlineSubsystemSteamworks_execWordFilterSanitizeString_Params WordFilterSanitizeString_Params;
	memset(&WordFilterSanitizeString_Params, 0, sizeof(WordFilterSanitizeString_Params));
	memcpy_s(&WordFilterSanitizeString_Params.Comment, sizeof(WordFilterSanitizeString_Params.Comment), &Comment, sizeof(Comment));
	memcpy_s(&WordFilterSanitizeString_Params.SanitizeDelegate, sizeof(WordFilterSanitizeString_Params.SanitizeDelegate), &SanitizeDelegate, sizeof(SanitizeDelegate));
	memcpy_s(&WordFilterSanitizeString_Params.PlayerID, sizeof(WordFilterSanitizeString_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	this->ProcessEvent(uFnWordFilterSanitizeString, &WordFilterSanitizeString_Params, nullptr);

	return WordFilterSanitizeString_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveCanPlayOnlineChangedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::RemoveCanPlayOnlineChangedDelegate(struct FScriptDelegate Callback)
{
	static UFunction* uFnRemoveCanPlayOnlineChangedDelegate = nullptr;

	if (!uFnRemoveCanPlayOnlineChangedDelegate)
	{
		uFnRemoveCanPlayOnlineChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveCanPlayOnlineChangedDelegate");
	}

	UOnlineSubsystemSteamworks_execRemoveCanPlayOnlineChangedDelegate_Params RemoveCanPlayOnlineChangedDelegate_Params;
	memset(&RemoveCanPlayOnlineChangedDelegate_Params, 0, sizeof(RemoveCanPlayOnlineChangedDelegate_Params));
	memcpy_s(&RemoveCanPlayOnlineChangedDelegate_Params.Callback, sizeof(RemoveCanPlayOnlineChangedDelegate_Params.Callback), &Callback, sizeof(Callback));

	this->ProcessEvent(uFnRemoveCanPlayOnlineChangedDelegate, &RemoveCanPlayOnlineChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCanPlayOnlineChangedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddCanPlayOnlineChangedDelegate(struct FScriptDelegate Callback)
{
	static UFunction* uFnAddCanPlayOnlineChangedDelegate = nullptr;

	if (!uFnAddCanPlayOnlineChangedDelegate)
	{
		uFnAddCanPlayOnlineChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCanPlayOnlineChangedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddCanPlayOnlineChangedDelegate_Params AddCanPlayOnlineChangedDelegate_Params;
	memset(&AddCanPlayOnlineChangedDelegate_Params, 0, sizeof(AddCanPlayOnlineChangedDelegate_Params));
	memcpy_s(&AddCanPlayOnlineChangedDelegate_Params.Callback, sizeof(AddCanPlayOnlineChangedDelegate_Params.Callback), &Callback, sizeof(Callback));

	this->ProcessEvent(uFnAddCanPlayOnlineChangedDelegate, &AddCanPlayOnlineChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RecordPlayersRecentlyMet
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  GameDescription                (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FUniqueNetId>    Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::RecordPlayersRecentlyMet(uint8_t LocalUserNum, class FString GameDescription, TArray<struct FUniqueNetId>& Players)
{
	static UFunction* uFnRecordPlayersRecentlyMet = nullptr;

	if (!uFnRecordPlayersRecentlyMet)
	{
		uFnRecordPlayersRecentlyMet = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RecordPlayersRecentlyMet");
	}

	UOnlineSubsystemSteamworks_execRecordPlayersRecentlyMet_Params RecordPlayersRecentlyMet_Params;
	memset(&RecordPlayersRecentlyMet_Params, 0, sizeof(RecordPlayersRecentlyMet_Params));
	memcpy_s(&RecordPlayersRecentlyMet_Params.LocalUserNum, sizeof(RecordPlayersRecentlyMet_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&RecordPlayersRecentlyMet_Params.GameDescription, sizeof(RecordPlayersRecentlyMet_Params.GameDescription), &GameDescription, sizeof(GameDescription));
	memcpy_s(&RecordPlayersRecentlyMet_Params.Players, sizeof(RecordPlayersRecentlyMet_Params.Players), &Players, sizeof(Players));

	this->ProcessEvent(uFnRecordPlayersRecentlyMet, &RecordPlayersRecentlyMet_Params, nullptr);

	memcpy_s(&Players, sizeof(Players), &RecordPlayersRecentlyMet_Params.Players, sizeof(RecordPlayersRecentlyMet_Params.Players));

	return RecordPlayersRecentlyMet_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSaveDataNoSpaceDialogCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearSaveDataNoSpaceDialogCompleteDelegate(struct FScriptDelegate DeviceDelegate)
{
	static UFunction* uFnClearSaveDataNoSpaceDialogCompleteDelegate = nullptr;

	if (!uFnClearSaveDataNoSpaceDialogCompleteDelegate)
	{
		uFnClearSaveDataNoSpaceDialogCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSaveDataNoSpaceDialogCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearSaveDataNoSpaceDialogCompleteDelegate_Params ClearSaveDataNoSpaceDialogCompleteDelegate_Params;
	memset(&ClearSaveDataNoSpaceDialogCompleteDelegate_Params, 0, sizeof(ClearSaveDataNoSpaceDialogCompleteDelegate_Params));
	memcpy_s(&ClearSaveDataNoSpaceDialogCompleteDelegate_Params.DeviceDelegate, sizeof(ClearSaveDataNoSpaceDialogCompleteDelegate_Params.DeviceDelegate), &DeviceDelegate, sizeof(DeviceDelegate));

	this->ProcessEvent(uFnClearSaveDataNoSpaceDialogCompleteDelegate, &ClearSaveDataNoSpaceDialogCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSaveDataNoSpaceDialogCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddSaveDataNoSpaceDialogCompleteDelegate(struct FScriptDelegate DeviceDelegate)
{
	static UFunction* uFnAddSaveDataNoSpaceDialogCompleteDelegate = nullptr;

	if (!uFnAddSaveDataNoSpaceDialogCompleteDelegate)
	{
		uFnAddSaveDataNoSpaceDialogCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSaveDataNoSpaceDialogCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddSaveDataNoSpaceDialogCompleteDelegate_Params AddSaveDataNoSpaceDialogCompleteDelegate_Params;
	memset(&AddSaveDataNoSpaceDialogCompleteDelegate_Params, 0, sizeof(AddSaveDataNoSpaceDialogCompleteDelegate_Params));
	memcpy_s(&AddSaveDataNoSpaceDialogCompleteDelegate_Params.DeviceDelegate, sizeof(AddSaveDataNoSpaceDialogCompleteDelegate_Params.DeviceDelegate), &DeviceDelegate, sizeof(DeviceDelegate));

	this->ProcessEvent(uFnAddSaveDataNoSpaceDialogCompleteDelegate, &AddSaveDataNoSpaceDialogCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSaveDataNoSpaceDialogComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bContinueWithoutSave           (CPF_Parm)

void UOnlineSubsystemSteamworks::OnSaveDataNoSpaceDialogComplete(bool bContinueWithoutSave)
{
	static UFunction* uFnOnSaveDataNoSpaceDialogComplete = nullptr;

	if (!uFnOnSaveDataNoSpaceDialogComplete)
	{
		uFnOnSaveDataNoSpaceDialogComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSaveDataNoSpaceDialogComplete");
	}

	UOnlineSubsystemSteamworks_execOnSaveDataNoSpaceDialogComplete_Params OnSaveDataNoSpaceDialogComplete_Params;
	memset(&OnSaveDataNoSpaceDialogComplete_Params, 0, sizeof(OnSaveDataNoSpaceDialogComplete_Params));
	OnSaveDataNoSpaceDialogComplete_Params.bContinueWithoutSave = bContinueWithoutSave;

	this->ProcessEvent(uFnOnSaveDataNoSpaceDialogComplete, &OnSaveDataNoSpaceDialogComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockedDLCChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUnlockedDLCChangeDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearUnlockedDLCChangeDelegate = nullptr;

	if (!uFnClearUnlockedDLCChangeDelegate)
	{
		uFnClearUnlockedDLCChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockedDLCChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearUnlockedDLCChangeDelegate_Params ClearUnlockedDLCChangeDelegate_Params;
	memset(&ClearUnlockedDLCChangeDelegate_Params, 0, sizeof(ClearUnlockedDLCChangeDelegate_Params));
	memcpy_s(&ClearUnlockedDLCChangeDelegate_Params.InDelegate, sizeof(ClearUnlockedDLCChangeDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnClearUnlockedDLCChangeDelegate, &ClearUnlockedDLCChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockedDLCChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUnlockedDLCChangeDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddUnlockedDLCChangeDelegate = nullptr;

	if (!uFnAddUnlockedDLCChangeDelegate)
	{
		uFnAddUnlockedDLCChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockedDLCChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddUnlockedDLCChangeDelegate_Params AddUnlockedDLCChangeDelegate_Params;
	memset(&AddUnlockedDLCChangeDelegate_Params, 0, sizeof(AddUnlockedDLCChangeDelegate_Params));
	memcpy_s(&AddUnlockedDLCChangeDelegate_Params.InDelegate, sizeof(AddUnlockedDLCChangeDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnAddUnlockedDLCChangeDelegate, &AddUnlockedDLCChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUnlockedDLC
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// TArray<struct FName>           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<struct FName> UOnlineSubsystemSteamworks::GetUnlockedDLC()
{
	static UFunction* uFnGetUnlockedDLC = nullptr;

	if (!uFnGetUnlockedDLC)
	{
		uFnGetUnlockedDLC = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUnlockedDLC");
	}

	UOnlineSubsystemSteamworks_execGetUnlockedDLC_Params GetUnlockedDLC_Params;
	memset(&GetUnlockedDLC_Params, 0, sizeof(GetUnlockedDLC_Params));

	this->ProcessEvent(uFnGetUnlockedDLC, &GetUnlockedDLC_Params, nullptr);

	return GetUnlockedDLC_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockedDLCChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnUnlockedDLCChange()
{
	static UFunction* uFnOnUnlockedDLCChange = nullptr;

	if (!uFnOnUnlockedDLCChange)
	{
		uFnOnUnlockedDLCChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockedDLCChange");
	}

	UOnlineSubsystemSteamworks_execOnUnlockedDLCChange_Params OnUnlockedDLCChange_Params;
	memset(&OnUnlockedDLCChange_Params, 0, sizeof(OnUnlockedDLCChange_Params));

	this->ProcessEvent(uFnOnUnlockedDLCChange, &OnUnlockedDLCChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetOverlayEnabled
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::GetOverlayEnabled()
{
	static UFunction* uFnGetOverlayEnabled = nullptr;

	if (!uFnGetOverlayEnabled)
	{
		uFnGetOverlayEnabled = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetOverlayEnabled");
	}

	UOnlineSubsystemSteamworks_execGetOverlayEnabled_Params GetOverlayEnabled_Params;
	memset(&GetOverlayEnabled_Params, 0, sizeof(GetOverlayEnabled_Params));

	uFnGetOverlayEnabled->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetOverlayEnabled, &GetOverlayEnabled_Params, nullptr);
	uFnGetOverlayEnabled->FunctionFlags |= 0x400;

	return GetOverlayEnabled_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDLCPurchaseTime
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   AppName                        (CPF_Parm)

int32_t UOnlineSubsystemSteamworks::GetDLCPurchaseTime(struct FName AppName)
{
	static UFunction* uFnGetDLCPurchaseTime = nullptr;

	if (!uFnGetDLCPurchaseTime)
	{
		uFnGetDLCPurchaseTime = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDLCPurchaseTime");
	}

	UOnlineSubsystemSteamworks_execGetDLCPurchaseTime_Params GetDLCPurchaseTime_Params;
	memset(&GetDLCPurchaseTime_Params, 0, sizeof(GetDLCPurchaseTime_Params));
	memcpy_s(&GetDLCPurchaseTime_Params.AppName, sizeof(GetDLCPurchaseTime_Params.AppName), &AppName, sizeof(AppName));

	uFnGetDLCPurchaseTime->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetDLCPurchaseTime, &GetDLCPurchaseTime_Params, nullptr);
	uFnGetDLCPurchaseTime->FunctionFlags |= 0x400;

	return GetDLCPurchaseTime_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleGetUserInfoComplete
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// struct FName                   NewCurrency                    (CPF_Parm)
// class FString                  NewCountry                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::HandleGetUserInfoComplete(struct FName NewCurrency, class FString NewCountry)
{
	static UFunction* uFnHandleGetUserInfoComplete = nullptr;

	if (!uFnHandleGetUserInfoComplete)
	{
		uFnHandleGetUserInfoComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleGetUserInfoComplete");
	}

	UOnlineSubsystemSteamworks_execHandleGetUserInfoComplete_Params HandleGetUserInfoComplete_Params;
	memset(&HandleGetUserInfoComplete_Params, 0, sizeof(HandleGetUserInfoComplete_Params));
	memcpy_s(&HandleGetUserInfoComplete_Params.NewCurrency, sizeof(HandleGetUserInfoComplete_Params.NewCurrency), &NewCurrency, sizeof(NewCurrency));
	memcpy_s(&HandleGetUserInfoComplete_Params.NewCountry, sizeof(HandleGetUserInfoComplete_Params.NewCountry), &NewCountry, sizeof(NewCountry));

	this->ProcessEvent(uFnHandleGetUserInfoComplete, &HandleGetUserInfoComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerCountry
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::GetPlayerCountry(uint8_t LocalUserNum)
{
	static UFunction* uFnGetPlayerCountry = nullptr;

	if (!uFnGetPlayerCountry)
	{
		uFnGetPlayerCountry = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerCountry");
	}

	UOnlineSubsystemSteamworks_execGetPlayerCountry_Params GetPlayerCountry_Params;
	memset(&GetPlayerCountry_Params, 0, sizeof(GetPlayerCountry_Params));
	memcpy_s(&GetPlayerCountry_Params.LocalUserNum, sizeof(GetPlayerCountry_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnGetPlayerCountry, &GetPlayerCountry_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerLanguage
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class FString UOnlineSubsystemSteamworks::GetPlayerLanguage(uint8_t LocalUserNum)
{
	static UFunction* uFnGetPlayerLanguage = nullptr;

	if (!uFnGetPlayerLanguage)
	{
		uFnGetPlayerLanguage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerLanguage");
	}

	UOnlineSubsystemSteamworks_execGetPlayerLanguage_Params GetPlayerLanguage_Params;
	memset(&GetPlayerLanguage_Params, 0, sizeof(GetPlayerLanguage_Params));
	memcpy_s(&GetPlayerLanguage_Params.LocalUserNum, sizeof(GetPlayerLanguage_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnGetPlayerLanguage->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetPlayerLanguage, &GetPlayerLanguage_Params, nullptr);
	uFnGetPlayerLanguage->FunctionFlags |= 0x400;

	return GetPlayerLanguage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerCountryDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadPlayerCountryDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadPlayerCountryDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadPlayerCountryDelegate)
{
	static UFunction* uFnClearReadPlayerCountryDelegate = nullptr;

	if (!uFnClearReadPlayerCountryDelegate)
	{
		uFnClearReadPlayerCountryDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerCountryDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadPlayerCountryDelegate_Params ClearReadPlayerCountryDelegate_Params;
	memset(&ClearReadPlayerCountryDelegate_Params, 0, sizeof(ClearReadPlayerCountryDelegate_Params));
	memcpy_s(&ClearReadPlayerCountryDelegate_Params.LocalUserNum, sizeof(ClearReadPlayerCountryDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearReadPlayerCountryDelegate_Params.ReadPlayerCountryDelegate, sizeof(ClearReadPlayerCountryDelegate_Params.ReadPlayerCountryDelegate), &ReadPlayerCountryDelegate, sizeof(ReadPlayerCountryDelegate));

	this->ProcessEvent(uFnClearReadPlayerCountryDelegate, &ClearReadPlayerCountryDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerCountryDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadPlayerCountryDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadPlayerCountryDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadPlayerCountryDelegate)
{
	static UFunction* uFnAddReadPlayerCountryDelegate = nullptr;

	if (!uFnAddReadPlayerCountryDelegate)
	{
		uFnAddReadPlayerCountryDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerCountryDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadPlayerCountryDelegate_Params AddReadPlayerCountryDelegate_Params;
	memset(&AddReadPlayerCountryDelegate_Params, 0, sizeof(AddReadPlayerCountryDelegate_Params));
	memcpy_s(&AddReadPlayerCountryDelegate_Params.LocalUserNum, sizeof(AddReadPlayerCountryDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddReadPlayerCountryDelegate_Params.ReadPlayerCountryDelegate, sizeof(AddReadPlayerCountryDelegate_Params.ReadPlayerCountryDelegate), &ReadPlayerCountryDelegate, sizeof(ReadPlayerCountryDelegate));

	this->ProcessEvent(uFnAddReadPlayerCountryDelegate, &AddReadPlayerCountryDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AnyPlayerChatRestricted
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::AnyPlayerChatRestricted()
{
	static UFunction* uFnAnyPlayerChatRestricted = nullptr;

	if (!uFnAnyPlayerChatRestricted)
	{
		uFnAnyPlayerChatRestricted = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AnyPlayerChatRestricted");
	}

	UOnlineSubsystemSteamworks_execAnyPlayerChatRestricted_Params AnyPlayerChatRestricted_Params;
	memset(&AnyPlayerChatRestricted_Params, 0, sizeof(AnyPlayerChatRestricted_Params));

	uFnAnyPlayerChatRestricted->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAnyPlayerChatRestricted, &AnyPlayerChatRestricted_Params, nullptr);
	uFnAnyPlayerChatRestricted->FunctionFlags |= 0x400;

	return AnyPlayerChatRestricted_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.InitializeTrophyAPI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::InitializeTrophyAPI()
{
	static UFunction* uFnInitializeTrophyAPI = nullptr;

	if (!uFnInitializeTrophyAPI)
	{
		uFnInitializeTrophyAPI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.InitializeTrophyAPI");
	}

	UOnlineSubsystemSteamworks_execInitializeTrophyAPI_Params InitializeTrophyAPI_Params;
	memset(&InitializeTrophyAPI_Params, 0, sizeof(InitializeTrophyAPI_Params));

	this->ProcessEvent(uFnInitializeTrophyAPI, &InitializeTrophyAPI_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForItems
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<class FString>          Targets                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OpenStoreForItems(uint8_t LocalUserNum, TArray<class FString> Targets)
{
	static UFunction* uFnOpenStoreForItems = nullptr;

	if (!uFnOpenStoreForItems)
	{
		uFnOpenStoreForItems = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForItems");
	}

	UOnlineSubsystemSteamworks_execOpenStoreForItems_Params OpenStoreForItems_Params;
	memset(&OpenStoreForItems_Params, 0, sizeof(OpenStoreForItems_Params));
	memcpy_s(&OpenStoreForItems_Params.LocalUserNum, sizeof(OpenStoreForItems_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OpenStoreForItems_Params.Targets, sizeof(OpenStoreForItems_Params.Targets), &Targets, sizeof(Targets));

	uFnOpenStoreForItems->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnOpenStoreForItems, &OpenStoreForItems_Params, nullptr);
	uFnOpenStoreForItems->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForDLC
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FName                   DLC                            (CPF_Parm)

void UOnlineSubsystemSteamworks::OpenStoreForDLC(uint8_t LocalUserNum, struct FName DLC)
{
	static UFunction* uFnOpenStoreForDLC = nullptr;

	if (!uFnOpenStoreForDLC)
	{
		uFnOpenStoreForDLC = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForDLC");
	}

	UOnlineSubsystemSteamworks_execOpenStoreForDLC_Params OpenStoreForDLC_Params;
	memset(&OpenStoreForDLC_Params, 0, sizeof(OpenStoreForDLC_Params));
	memcpy_s(&OpenStoreForDLC_Params.LocalUserNum, sizeof(OpenStoreForDLC_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OpenStoreForDLC_Params.DLC, sizeof(OpenStoreForDLC_Params.DLC), &DLC, sizeof(DLC));

	uFnOpenStoreForDLC->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnOpenStoreForDLC, &OpenStoreForDLC_Params, nullptr);
	uFnOpenStoreForDLC->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForItemsAsync
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<class FString>          Targets                        (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         OnStorePurchaseCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OpenStoreForItemsAsync(uint8_t LocalUserNum, TArray<class FString> Targets, struct FScriptDelegate OnStorePurchaseCompleteDelegate)
{
	static UFunction* uFnOpenStoreForItemsAsync = nullptr;

	if (!uFnOpenStoreForItemsAsync)
	{
		uFnOpenStoreForItemsAsync = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForItemsAsync");
	}

	UOnlineSubsystemSteamworks_execOpenStoreForItemsAsync_Params OpenStoreForItemsAsync_Params;
	memset(&OpenStoreForItemsAsync_Params, 0, sizeof(OpenStoreForItemsAsync_Params));
	memcpy_s(&OpenStoreForItemsAsync_Params.LocalUserNum, sizeof(OpenStoreForItemsAsync_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OpenStoreForItemsAsync_Params.Targets, sizeof(OpenStoreForItemsAsync_Params.Targets), &Targets, sizeof(Targets));
	memcpy_s(&OpenStoreForItemsAsync_Params.OnStorePurchaseCompleteDelegate, sizeof(OpenStoreForItemsAsync_Params.OnStorePurchaseCompleteDelegate), &OnStorePurchaseCompleteDelegate, sizeof(OnStorePurchaseCompleteDelegate));

	this->ProcessEvent(uFnOpenStoreForItemsAsync, &OpenStoreForItemsAsync_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorePurchaseCompleteDelegate
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnStorePurchaseCompleteDelegate()
{
	static UFunction* uFnOnStorePurchaseCompleteDelegate = nullptr;

	if (!uFnOnStorePurchaseCompleteDelegate)
	{
		uFnOnStorePurchaseCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorePurchaseCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execOnStorePurchaseCompleteDelegate_Params OnStorePurchaseCompleteDelegate_Params;
	memset(&OnStorePurchaseCompleteDelegate_Params, 0, sizeof(OnStorePurchaseCompleteDelegate_Params));

	this->ProcessEvent(uFnOnStorePurchaseCompleteDelegate, &OnStorePurchaseCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenErrorDialog
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// EPS4ErrorDialog                ErrorCode                      (CPF_Parm)

void UOnlineSubsystemSteamworks::OpenErrorDialog(uint8_t LocalUserNum, EPS4ErrorDialog ErrorCode)
{
	static UFunction* uFnOpenErrorDialog = nullptr;

	if (!uFnOpenErrorDialog)
	{
		uFnOpenErrorDialog = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenErrorDialog");
	}

	UOnlineSubsystemSteamworks_execOpenErrorDialog_Params OpenErrorDialog_Params;
	memset(&OpenErrorDialog_Params, 0, sizeof(OpenErrorDialog_Params));
	memcpy_s(&OpenErrorDialog_Params.LocalUserNum, sizeof(OpenErrorDialog_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OpenErrorDialog_Params.ErrorCode, sizeof(OpenErrorDialog_Params.ErrorCode), &ErrorCode, sizeof(ErrorCode));

	this->ProcessEvent(uFnOpenErrorDialog, &OpenErrorDialog_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenPS4DisplayMode
// [0x00024001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// EPS4DisplayMode                DisplayMode                    (CPF_Parm)
// TArray<class FString>          Targets                        (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// int32_t                        ServiceLabel                   (CPF_OptionalParm | CPF_Parm)

void UOnlineSubsystemSteamworks::OpenPS4DisplayMode(uint8_t LocalUserNum, EPS4DisplayMode DisplayMode, TArray<class FString> Targets, int32_t ServiceLabel)
{
	static UFunction* uFnOpenPS4DisplayMode = nullptr;

	if (!uFnOpenPS4DisplayMode)
	{
		uFnOpenPS4DisplayMode = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenPS4DisplayMode");
	}

	UOnlineSubsystemSteamworks_execOpenPS4DisplayMode_Params OpenPS4DisplayMode_Params;
	memset(&OpenPS4DisplayMode_Params, 0, sizeof(OpenPS4DisplayMode_Params));
	memcpy_s(&OpenPS4DisplayMode_Params.LocalUserNum, sizeof(OpenPS4DisplayMode_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OpenPS4DisplayMode_Params.DisplayMode, sizeof(OpenPS4DisplayMode_Params.DisplayMode), &DisplayMode, sizeof(DisplayMode));
	memcpy_s(&OpenPS4DisplayMode_Params.Targets, sizeof(OpenPS4DisplayMode_Params.Targets), &Targets, sizeof(Targets));
	memcpy_s(&OpenPS4DisplayMode_Params.ServiceLabel, sizeof(OpenPS4DisplayMode_Params.ServiceLabel), &ServiceLabel, sizeof(ServiceLabel));

	this->ProcessEvent(uFnOpenPS4DisplayMode, &OpenPS4DisplayMode_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetControllerColor
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ControllerId                   (CPF_Parm)

void UOnlineSubsystemSteamworks::ResetControllerColor(int32_t ControllerId)
{
	static UFunction* uFnResetControllerColor = nullptr;

	if (!uFnResetControllerColor)
	{
		uFnResetControllerColor = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetControllerColor");
	}

	UOnlineSubsystemSteamworks_execResetControllerColor_Params ResetControllerColor_Params;
	memset(&ResetControllerColor_Params, 0, sizeof(ResetControllerColor_Params));
	memcpy_s(&ResetControllerColor_Params.ControllerId, sizeof(ResetControllerColor_Params.ControllerId), &ControllerId, sizeof(ControllerId));

	this->ProcessEvent(uFnResetControllerColor, &ResetControllerColor_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetControllerColor
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ControllerId                   (CPF_Parm)
// struct FColor                  NewColor                       (CPF_Parm)

void UOnlineSubsystemSteamworks::SetControllerColor(int32_t ControllerId, struct FColor NewColor)
{
	static UFunction* uFnSetControllerColor = nullptr;

	if (!uFnSetControllerColor)
	{
		uFnSetControllerColor = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetControllerColor");
	}

	UOnlineSubsystemSteamworks_execSetControllerColor_Params SetControllerColor_Params;
	memset(&SetControllerColor_Params, 0, sizeof(SetControllerColor_Params));
	memcpy_s(&SetControllerColor_Params.ControllerId, sizeof(SetControllerColor_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	memcpy_s(&SetControllerColor_Params.NewColor, sizeof(SetControllerColor_Params.NewColor), &NewColor, sizeof(NewColor));

	this->ProcessEvent(uFnSetControllerColor, &SetControllerColor_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddInGamePost
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  InPostID                       (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<class FString>          StringReplaceList              (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::AddInGamePost(class FString InPostID, uint8_t LocalUserNum, TArray<class FString> StringReplaceList)
{
	static UFunction* uFnAddInGamePost = nullptr;

	if (!uFnAddInGamePost)
	{
		uFnAddInGamePost = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddInGamePost");
	}

	UOnlineSubsystemSteamworks_execAddInGamePost_Params AddInGamePost_Params;
	memset(&AddInGamePost_Params, 0, sizeof(AddInGamePost_Params));
	memcpy_s(&AddInGamePost_Params.InPostID, sizeof(AddInGamePost_Params.InPostID), &InPostID, sizeof(InPostID));
	memcpy_s(&AddInGamePost_Params.LocalUserNum, sizeof(AddInGamePost_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddInGamePost_Params.StringReplaceList, sizeof(AddInGamePost_Params.StringReplaceList), &StringReplaceList, sizeof(StringReplaceList));

	this->ProcessEvent(uFnAddInGamePost, &AddInGamePost_Params, nullptr);

	return AddInGamePost_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsEnabled
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::IsEnabled()
{
	static UFunction* uFnIsEnabled = nullptr;

	if (!uFnIsEnabled)
	{
		uFnIsEnabled = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsEnabled");
	}

	UOnlineSubsystemSteamworks_execIsEnabled_Params IsEnabled_Params;
	memset(&IsEnabled_Params, 0, sizeof(IsEnabled_Params));

	uFnIsEnabled->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsEnabled, &IsEnabled_Params, nullptr);
	uFnIsEnabled->FunctionFlags |= 0x400;

	return IsEnabled_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRichPresence
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  PresenceString                 (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GameDataString                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::SetRichPresence(uint8_t LocalUserNum, class FString PresenceString, class FString GameDataString)
{
	static UFunction* uFnSetRichPresence = nullptr;

	if (!uFnSetRichPresence)
	{
		uFnSetRichPresence = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRichPresence");
	}

	UOnlineSubsystemSteamworks_execSetRichPresence_Params SetRichPresence_Params;
	memset(&SetRichPresence_Params, 0, sizeof(SetRichPresence_Params));
	memcpy_s(&SetRichPresence_Params.LocalUserNum, sizeof(SetRichPresence_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&SetRichPresence_Params.PresenceString, sizeof(SetRichPresence_Params.PresenceString), &PresenceString, sizeof(PresenceString));
	memcpy_s(&SetRichPresence_Params.GameDataString, sizeof(SetRichPresence_Params.GameDataString), &GameDataString, sizeof(GameDataString));

	uFnSetRichPresence->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetRichPresence, &SetRichPresence_Params, nullptr);
	uFnSetRichPresence->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAllDelegates
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::ClearAllDelegates()
{
	static UFunction* uFnClearAllDelegates = nullptr;

	if (!uFnClearAllDelegates)
	{
		uFnClearAllDelegates = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAllDelegates");
	}

	UOnlineSubsystemSteamworks_execClearAllDelegates_Params ClearAllDelegates_Params;
	memset(&ClearAllDelegates_Params, 0, sizeof(ClearAllDelegates_Params));

	this->ProcessEvent(uFnClearAllDelegates, &ClearAllDelegates_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteSharedFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         WriteSharedFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWriteSharedFileCompleteDelegate(struct FScriptDelegate WriteSharedFileCompleteDelegate)
{
	static UFunction* uFnClearWriteSharedFileCompleteDelegate = nullptr;

	if (!uFnClearWriteSharedFileCompleteDelegate)
	{
		uFnClearWriteSharedFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteSharedFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearWriteSharedFileCompleteDelegate_Params ClearWriteSharedFileCompleteDelegate_Params;
	memset(&ClearWriteSharedFileCompleteDelegate_Params, 0, sizeof(ClearWriteSharedFileCompleteDelegate_Params));
	memcpy_s(&ClearWriteSharedFileCompleteDelegate_Params.WriteSharedFileCompleteDelegate, sizeof(ClearWriteSharedFileCompleteDelegate_Params.WriteSharedFileCompleteDelegate), &WriteSharedFileCompleteDelegate, sizeof(WriteSharedFileCompleteDelegate));

	this->ProcessEvent(uFnClearWriteSharedFileCompleteDelegate, &ClearWriteSharedFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteSharedFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         WriteSharedFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWriteSharedFileCompleteDelegate(struct FScriptDelegate WriteSharedFileCompleteDelegate)
{
	static UFunction* uFnAddWriteSharedFileCompleteDelegate = nullptr;

	if (!uFnAddWriteSharedFileCompleteDelegate)
	{
		uFnAddWriteSharedFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteSharedFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddWriteSharedFileCompleteDelegate_Params AddWriteSharedFileCompleteDelegate_Params;
	memset(&AddWriteSharedFileCompleteDelegate_Params, 0, sizeof(AddWriteSharedFileCompleteDelegate_Params));
	memcpy_s(&AddWriteSharedFileCompleteDelegate_Params.WriteSharedFileCompleteDelegate, sizeof(AddWriteSharedFileCompleteDelegate_Params.WriteSharedFileCompleteDelegate), &WriteSharedFileCompleteDelegate, sizeof(WriteSharedFileCompleteDelegate));

	this->ProcessEvent(uFnAddWriteSharedFileCompleteDelegate, &AddWriteSharedFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteSharedFile
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                Contents                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::WriteSharedFile(class FString UserId, class FString Filename, TArray<uint8_t>& Contents)
{
	static UFunction* uFnWriteSharedFile = nullptr;

	if (!uFnWriteSharedFile)
	{
		uFnWriteSharedFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteSharedFile");
	}

	UOnlineSubsystemSteamworks_execWriteSharedFile_Params WriteSharedFile_Params;
	memset(&WriteSharedFile_Params, 0, sizeof(WriteSharedFile_Params));
	memcpy_s(&WriteSharedFile_Params.UserId, sizeof(WriteSharedFile_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&WriteSharedFile_Params.Filename, sizeof(WriteSharedFile_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&WriteSharedFile_Params.Contents, sizeof(WriteSharedFile_Params.Contents), &Contents, sizeof(Contents));

	uFnWriteSharedFile->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnWriteSharedFile, &WriteSharedFile_Params, nullptr);
	uFnWriteSharedFile->FunctionFlags |= 0x400;

	memcpy_s(&Contents, sizeof(Contents), &WriteSharedFile_Params.Contents, sizeof(WriteSharedFile_Params.Contents));

	return WriteSharedFile_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteSharedFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SharedHandle                   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnWriteSharedFileComplete(bool bWasSuccessful, class FString UserId, class FString Filename, class FString SharedHandle)
{
	static UFunction* uFnOnWriteSharedFileComplete = nullptr;

	if (!uFnOnWriteSharedFileComplete)
	{
		uFnOnWriteSharedFileComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteSharedFileComplete");
	}

	UOnlineSubsystemSteamworks_execOnWriteSharedFileComplete_Params OnWriteSharedFileComplete_Params;
	memset(&OnWriteSharedFileComplete_Params, 0, sizeof(OnWriteSharedFileComplete_Params));
	OnWriteSharedFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnWriteSharedFileComplete_Params.UserId, sizeof(OnWriteSharedFileComplete_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnWriteSharedFileComplete_Params.Filename, sizeof(OnWriteSharedFileComplete_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&OnWriteSharedFileComplete_Params.SharedHandle, sizeof(OnWriteSharedFileComplete_Params.SharedHandle), &SharedHandle, sizeof(SharedHandle));

	this->ProcessEvent(uFnOnWriteSharedFileComplete, &OnWriteSharedFileComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSharedFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadSharedFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadSharedFileCompleteDelegate(struct FScriptDelegate ReadSharedFileCompleteDelegate)
{
	static UFunction* uFnClearReadSharedFileCompleteDelegate = nullptr;

	if (!uFnClearReadSharedFileCompleteDelegate)
	{
		uFnClearReadSharedFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSharedFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadSharedFileCompleteDelegate_Params ClearReadSharedFileCompleteDelegate_Params;
	memset(&ClearReadSharedFileCompleteDelegate_Params, 0, sizeof(ClearReadSharedFileCompleteDelegate_Params));
	memcpy_s(&ClearReadSharedFileCompleteDelegate_Params.ReadSharedFileCompleteDelegate, sizeof(ClearReadSharedFileCompleteDelegate_Params.ReadSharedFileCompleteDelegate), &ReadSharedFileCompleteDelegate, sizeof(ReadSharedFileCompleteDelegate));

	this->ProcessEvent(uFnClearReadSharedFileCompleteDelegate, &ClearReadSharedFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSharedFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadSharedFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadSharedFileCompleteDelegate(struct FScriptDelegate ReadSharedFileCompleteDelegate)
{
	static UFunction* uFnAddReadSharedFileCompleteDelegate = nullptr;

	if (!uFnAddReadSharedFileCompleteDelegate)
	{
		uFnAddReadSharedFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSharedFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadSharedFileCompleteDelegate_Params AddReadSharedFileCompleteDelegate_Params;
	memset(&AddReadSharedFileCompleteDelegate_Params, 0, sizeof(AddReadSharedFileCompleteDelegate_Params));
	memcpy_s(&AddReadSharedFileCompleteDelegate_Params.ReadSharedFileCompleteDelegate, sizeof(AddReadSharedFileCompleteDelegate_Params.ReadSharedFileCompleteDelegate), &ReadSharedFileCompleteDelegate, sizeof(ReadSharedFileCompleteDelegate));

	this->ProcessEvent(uFnAddReadSharedFileCompleteDelegate, &AddReadSharedFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSharedFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  SharedHandle                   (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ReadSharedFile(class FString SharedHandle)
{
	static UFunction* uFnReadSharedFile = nullptr;

	if (!uFnReadSharedFile)
	{
		uFnReadSharedFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSharedFile");
	}

	UOnlineSubsystemSteamworks_execReadSharedFile_Params ReadSharedFile_Params;
	memset(&ReadSharedFile_Params, 0, sizeof(ReadSharedFile_Params));
	memcpy_s(&ReadSharedFile_Params.SharedHandle, sizeof(ReadSharedFile_Params.SharedHandle), &SharedHandle, sizeof(SharedHandle));

	uFnReadSharedFile->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadSharedFile, &ReadSharedFile_Params, nullptr);
	uFnReadSharedFile->FunctionFlags |= 0x400;

	return ReadSharedFile_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSharedFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)
// class FString                  SharedHandle                   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReadSharedFileComplete(bool bWasSuccessful, class FString SharedHandle)
{
	static UFunction* uFnOnReadSharedFileComplete = nullptr;

	if (!uFnOnReadSharedFileComplete)
	{
		uFnOnReadSharedFileComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSharedFileComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadSharedFileComplete_Params OnReadSharedFileComplete_Params;
	memset(&OnReadSharedFileComplete_Params, 0, sizeof(OnReadSharedFileComplete_Params));
	OnReadSharedFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadSharedFileComplete_Params.SharedHandle, sizeof(OnReadSharedFileComplete_Params.SharedHandle), &SharedHandle, sizeof(SharedHandle));

	this->ProcessEvent(uFnOnReadSharedFileComplete, &OnReadSharedFileComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  SharedHandle                   (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ClearSharedFile(class FString SharedHandle)
{
	static UFunction* uFnClearSharedFile = nullptr;

	if (!uFnClearSharedFile)
	{
		uFnClearSharedFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFile");
	}

	UOnlineSubsystemSteamworks_execClearSharedFile_Params ClearSharedFile_Params;
	memset(&ClearSharedFile_Params, 0, sizeof(ClearSharedFile_Params));
	memcpy_s(&ClearSharedFile_Params.SharedHandle, sizeof(ClearSharedFile_Params.SharedHandle), &SharedHandle, sizeof(SharedHandle));

	uFnClearSharedFile->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnClearSharedFile, &ClearSharedFile_Params, nullptr);
	uFnClearSharedFile->FunctionFlags |= 0x400;

	return ClearSharedFile_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFiles
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ClearSharedFiles()
{
	static UFunction* uFnClearSharedFiles = nullptr;

	if (!uFnClearSharedFiles)
	{
		uFnClearSharedFiles = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFiles");
	}

	UOnlineSubsystemSteamworks_execClearSharedFiles_Params ClearSharedFiles_Params;
	memset(&ClearSharedFiles_Params, 0, sizeof(ClearSharedFiles_Params));

	uFnClearSharedFiles->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnClearSharedFiles, &ClearSharedFiles_Params, nullptr);
	uFnClearSharedFiles->FunctionFlags |= 0x400;

	return ClearSharedFiles_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSharedFileContents
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  SharedHandle                   (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetSharedFileContents(class FString SharedHandle, TArray<uint8_t>& FileContents)
{
	static UFunction* uFnGetSharedFileContents = nullptr;

	if (!uFnGetSharedFileContents)
	{
		uFnGetSharedFileContents = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSharedFileContents");
	}

	UOnlineSubsystemSteamworks_execGetSharedFileContents_Params GetSharedFileContents_Params;
	memset(&GetSharedFileContents_Params, 0, sizeof(GetSharedFileContents_Params));
	memcpy_s(&GetSharedFileContents_Params.SharedHandle, sizeof(GetSharedFileContents_Params.SharedHandle), &SharedHandle, sizeof(SharedHandle));
	memcpy_s(&GetSharedFileContents_Params.FileContents, sizeof(GetSharedFileContents_Params.FileContents), &FileContents, sizeof(FileContents));

	uFnGetSharedFileContents->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetSharedFileContents, &GetSharedFileContents_Params, nullptr);
	uFnGetSharedFileContents->FunctionFlags |= 0x400;

	memcpy_s(&FileContents, sizeof(FileContents), &GetSharedFileContents_Params.FileContents, sizeof(GetSharedFileContents_Params.FileContents));

	return GetSharedFileContents_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeleteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearDeleteUserFileCompleteDelegate(struct FScriptDelegate DeleteUserFileCompleteDelegate)
{
	static UFunction* uFnClearDeleteUserFileCompleteDelegate = nullptr;

	if (!uFnClearDeleteUserFileCompleteDelegate)
	{
		uFnClearDeleteUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeleteUserFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearDeleteUserFileCompleteDelegate_Params ClearDeleteUserFileCompleteDelegate_Params;
	memset(&ClearDeleteUserFileCompleteDelegate_Params, 0, sizeof(ClearDeleteUserFileCompleteDelegate_Params));
	memcpy_s(&ClearDeleteUserFileCompleteDelegate_Params.DeleteUserFileCompleteDelegate, sizeof(ClearDeleteUserFileCompleteDelegate_Params.DeleteUserFileCompleteDelegate), &DeleteUserFileCompleteDelegate, sizeof(DeleteUserFileCompleteDelegate));

	this->ProcessEvent(uFnClearDeleteUserFileCompleteDelegate, &ClearDeleteUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeleteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddDeleteUserFileCompleteDelegate(struct FScriptDelegate DeleteUserFileCompleteDelegate)
{
	static UFunction* uFnAddDeleteUserFileCompleteDelegate = nullptr;

	if (!uFnAddDeleteUserFileCompleteDelegate)
	{
		uFnAddDeleteUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeleteUserFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddDeleteUserFileCompleteDelegate_Params AddDeleteUserFileCompleteDelegate_Params;
	memset(&AddDeleteUserFileCompleteDelegate_Params, 0, sizeof(AddDeleteUserFileCompleteDelegate_Params));
	memcpy_s(&AddDeleteUserFileCompleteDelegate_Params.DeleteUserFileCompleteDelegate, sizeof(AddDeleteUserFileCompleteDelegate_Params.DeleteUserFileCompleteDelegate), &DeleteUserFileCompleteDelegate, sizeof(DeleteUserFileCompleteDelegate));

	this->ProcessEvent(uFnAddDeleteUserFileCompleteDelegate, &AddDeleteUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteUserFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// bool                           bShouldCloudDelete             (CPF_Parm)
// bool                           bShouldLocallyDelete           (CPF_Parm)

bool UOnlineSubsystemSteamworks::DeleteUserFile(class FString UserId, class FString Filename, bool bShouldCloudDelete, bool bShouldLocallyDelete)
{
	static UFunction* uFnDeleteUserFile = nullptr;

	if (!uFnDeleteUserFile)
	{
		uFnDeleteUserFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteUserFile");
	}

	UOnlineSubsystemSteamworks_execDeleteUserFile_Params DeleteUserFile_Params;
	memset(&DeleteUserFile_Params, 0, sizeof(DeleteUserFile_Params));
	memcpy_s(&DeleteUserFile_Params.UserId, sizeof(DeleteUserFile_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&DeleteUserFile_Params.Filename, sizeof(DeleteUserFile_Params.Filename), &Filename, sizeof(Filename));
	DeleteUserFile_Params.bShouldCloudDelete = bShouldCloudDelete;
	DeleteUserFile_Params.bShouldLocallyDelete = bShouldLocallyDelete;

	uFnDeleteUserFile->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDeleteUserFile, &DeleteUserFile_Params, nullptr);
	uFnDeleteUserFile->FunctionFlags |= 0x400;

	return DeleteUserFile_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeleteUserFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnDeleteUserFileComplete(bool bWasSuccessful, class FString UserId, class FString Filename)
{
	static UFunction* uFnOnDeleteUserFileComplete = nullptr;

	if (!uFnOnDeleteUserFileComplete)
	{
		uFnOnDeleteUserFileComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeleteUserFileComplete");
	}

	UOnlineSubsystemSteamworks_execOnDeleteUserFileComplete_Params OnDeleteUserFileComplete_Params;
	memset(&OnDeleteUserFileComplete_Params, 0, sizeof(OnDeleteUserFileComplete_Params));
	OnDeleteUserFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteUserFileComplete_Params.UserId, sizeof(OnDeleteUserFileComplete_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnDeleteUserFileComplete_Params.Filename, sizeof(OnDeleteUserFileComplete_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnOnDeleteUserFileComplete, &OnDeleteUserFileComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWriteUserFileCompleteDelegate(struct FScriptDelegate WriteUserFileCompleteDelegate)
{
	static UFunction* uFnClearWriteUserFileCompleteDelegate = nullptr;

	if (!uFnClearWriteUserFileCompleteDelegate)
	{
		uFnClearWriteUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteUserFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearWriteUserFileCompleteDelegate_Params ClearWriteUserFileCompleteDelegate_Params;
	memset(&ClearWriteUserFileCompleteDelegate_Params, 0, sizeof(ClearWriteUserFileCompleteDelegate_Params));
	memcpy_s(&ClearWriteUserFileCompleteDelegate_Params.WriteUserFileCompleteDelegate, sizeof(ClearWriteUserFileCompleteDelegate_Params.WriteUserFileCompleteDelegate), &WriteUserFileCompleteDelegate, sizeof(WriteUserFileCompleteDelegate));

	this->ProcessEvent(uFnClearWriteUserFileCompleteDelegate, &ClearWriteUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWriteUserFileCompleteDelegate(struct FScriptDelegate WriteUserFileCompleteDelegate)
{
	static UFunction* uFnAddWriteUserFileCompleteDelegate = nullptr;

	if (!uFnAddWriteUserFileCompleteDelegate)
	{
		uFnAddWriteUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteUserFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddWriteUserFileCompleteDelegate_Params AddWriteUserFileCompleteDelegate_Params;
	memset(&AddWriteUserFileCompleteDelegate_Params, 0, sizeof(AddWriteUserFileCompleteDelegate_Params));
	memcpy_s(&AddWriteUserFileCompleteDelegate_Params.WriteUserFileCompleteDelegate, sizeof(AddWriteUserFileCompleteDelegate_Params.WriteUserFileCompleteDelegate), &WriteUserFileCompleteDelegate, sizeof(WriteUserFileCompleteDelegate));

	this->ProcessEvent(uFnAddWriteUserFileCompleteDelegate, &AddWriteUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFile
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                FileContents                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::WriteUserFile(class FString UserId, class FString Filename, TArray<uint8_t>& FileContents)
{
	static UFunction* uFnWriteUserFile = nullptr;

	if (!uFnWriteUserFile)
	{
		uFnWriteUserFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFile");
	}

	UOnlineSubsystemSteamworks_execWriteUserFile_Params WriteUserFile_Params;
	memset(&WriteUserFile_Params, 0, sizeof(WriteUserFile_Params));
	memcpy_s(&WriteUserFile_Params.UserId, sizeof(WriteUserFile_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&WriteUserFile_Params.Filename, sizeof(WriteUserFile_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&WriteUserFile_Params.FileContents, sizeof(WriteUserFile_Params.FileContents), &FileContents, sizeof(FileContents));

	uFnWriteUserFile->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnWriteUserFile, &WriteUserFile_Params, nullptr);
	uFnWriteUserFile->FunctionFlags |= 0x400;

	memcpy_s(&FileContents, sizeof(FileContents), &WriteUserFile_Params.FileContents, sizeof(WriteUserFile_Params.FileContents));

	return WriteUserFile_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteUserFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnWriteUserFileComplete(bool bWasSuccessful, class FString UserId, class FString Filename)
{
	static UFunction* uFnOnWriteUserFileComplete = nullptr;

	if (!uFnOnWriteUserFileComplete)
	{
		uFnOnWriteUserFileComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteUserFileComplete");
	}

	UOnlineSubsystemSteamworks_execOnWriteUserFileComplete_Params OnWriteUserFileComplete_Params;
	memset(&OnWriteUserFileComplete_Params, 0, sizeof(OnWriteUserFileComplete_Params));
	OnWriteUserFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnWriteUserFileComplete_Params.UserId, sizeof(OnWriteUserFileComplete_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnWriteUserFileComplete_Params.Filename, sizeof(OnWriteUserFileComplete_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnOnWriteUserFileComplete, &OnWriteUserFileComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadUserFileCompleteDelegate(struct FScriptDelegate ReadUserFileCompleteDelegate)
{
	static UFunction* uFnClearReadUserFileCompleteDelegate = nullptr;

	if (!uFnClearReadUserFileCompleteDelegate)
	{
		uFnClearReadUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadUserFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadUserFileCompleteDelegate_Params ClearReadUserFileCompleteDelegate_Params;
	memset(&ClearReadUserFileCompleteDelegate_Params, 0, sizeof(ClearReadUserFileCompleteDelegate_Params));
	memcpy_s(&ClearReadUserFileCompleteDelegate_Params.ReadUserFileCompleteDelegate, sizeof(ClearReadUserFileCompleteDelegate_Params.ReadUserFileCompleteDelegate), &ReadUserFileCompleteDelegate, sizeof(ReadUserFileCompleteDelegate));

	this->ProcessEvent(uFnClearReadUserFileCompleteDelegate, &ClearReadUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadUserFileCompleteDelegate(struct FScriptDelegate ReadUserFileCompleteDelegate)
{
	static UFunction* uFnAddReadUserFileCompleteDelegate = nullptr;

	if (!uFnAddReadUserFileCompleteDelegate)
	{
		uFnAddReadUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadUserFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadUserFileCompleteDelegate_Params AddReadUserFileCompleteDelegate_Params;
	memset(&AddReadUserFileCompleteDelegate_Params, 0, sizeof(AddReadUserFileCompleteDelegate_Params));
	memcpy_s(&AddReadUserFileCompleteDelegate_Params.ReadUserFileCompleteDelegate, sizeof(AddReadUserFileCompleteDelegate_Params.ReadUserFileCompleteDelegate), &ReadUserFileCompleteDelegate, sizeof(ReadUserFileCompleteDelegate));

	this->ProcessEvent(uFnAddReadUserFileCompleteDelegate, &AddReadUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadUserFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ReadUserFile(class FString UserId, class FString Filename)
{
	static UFunction* uFnReadUserFile = nullptr;

	if (!uFnReadUserFile)
	{
		uFnReadUserFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadUserFile");
	}

	UOnlineSubsystemSteamworks_execReadUserFile_Params ReadUserFile_Params;
	memset(&ReadUserFile_Params, 0, sizeof(ReadUserFile_Params));
	memcpy_s(&ReadUserFile_Params.UserId, sizeof(ReadUserFile_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&ReadUserFile_Params.Filename, sizeof(ReadUserFile_Params.Filename), &Filename, sizeof(Filename));

	uFnReadUserFile->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadUserFile, &ReadUserFile_Params, nullptr);
	uFnReadUserFile->FunctionFlags |= 0x400;

	return ReadUserFile_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadUserFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReadUserFileComplete(bool bWasSuccessful, class FString UserId, class FString Filename)
{
	static UFunction* uFnOnReadUserFileComplete = nullptr;

	if (!uFnOnReadUserFileComplete)
	{
		uFnOnReadUserFileComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadUserFileComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadUserFileComplete_Params OnReadUserFileComplete_Params;
	memset(&OnReadUserFileComplete_Params, 0, sizeof(OnReadUserFileComplete_Params));
	OnReadUserFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadUserFileComplete_Params.UserId, sizeof(OnReadUserFileComplete_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnReadUserFileComplete_Params.Filename, sizeof(OnReadUserFileComplete_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnOnReadUserFileComplete, &OnReadUserFileComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserFileList
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FEmsFile>        UserFiles                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::GetUserFileList(class FString UserId, TArray<struct FEmsFile>& UserFiles)
{
	static UFunction* uFnGetUserFileList = nullptr;

	if (!uFnGetUserFileList)
	{
		uFnGetUserFileList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserFileList");
	}

	UOnlineSubsystemSteamworks_execGetUserFileList_Params GetUserFileList_Params;
	memset(&GetUserFileList_Params, 0, sizeof(GetUserFileList_Params));
	memcpy_s(&GetUserFileList_Params.UserId, sizeof(GetUserFileList_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&GetUserFileList_Params.UserFiles, sizeof(GetUserFileList_Params.UserFiles), &UserFiles, sizeof(UserFiles));

	uFnGetUserFileList->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetUserFileList, &GetUserFileList_Params, nullptr);
	uFnGetUserFileList->FunctionFlags |= 0x400;

	memcpy_s(&UserFiles, sizeof(UserFiles), &GetUserFileList_Params.UserFiles, sizeof(GetUserFileList_Params.UserFiles));
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearEnumerateUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearEnumerateUserFileCompleteDelegate(struct FScriptDelegate EnumerateUserFileCompleteDelegate)
{
	static UFunction* uFnClearEnumerateUserFileCompleteDelegate = nullptr;

	if (!uFnClearEnumerateUserFileCompleteDelegate)
	{
		uFnClearEnumerateUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearEnumerateUserFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearEnumerateUserFileCompleteDelegate_Params ClearEnumerateUserFileCompleteDelegate_Params;
	memset(&ClearEnumerateUserFileCompleteDelegate_Params, 0, sizeof(ClearEnumerateUserFileCompleteDelegate_Params));
	memcpy_s(&ClearEnumerateUserFileCompleteDelegate_Params.EnumerateUserFileCompleteDelegate, sizeof(ClearEnumerateUserFileCompleteDelegate_Params.EnumerateUserFileCompleteDelegate), &EnumerateUserFileCompleteDelegate, sizeof(EnumerateUserFileCompleteDelegate));

	this->ProcessEvent(uFnClearEnumerateUserFileCompleteDelegate, &ClearEnumerateUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddEnumerateUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddEnumerateUserFileCompleteDelegate(struct FScriptDelegate EnumerateUserFileCompleteDelegate)
{
	static UFunction* uFnAddEnumerateUserFileCompleteDelegate = nullptr;

	if (!uFnAddEnumerateUserFileCompleteDelegate)
	{
		uFnAddEnumerateUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddEnumerateUserFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddEnumerateUserFileCompleteDelegate_Params AddEnumerateUserFileCompleteDelegate_Params;
	memset(&AddEnumerateUserFileCompleteDelegate_Params, 0, sizeof(AddEnumerateUserFileCompleteDelegate_Params));
	memcpy_s(&AddEnumerateUserFileCompleteDelegate_Params.EnumerateUserFileCompleteDelegate, sizeof(AddEnumerateUserFileCompleteDelegate_Params.EnumerateUserFileCompleteDelegate), &EnumerateUserFileCompleteDelegate, sizeof(EnumerateUserFileCompleteDelegate));

	this->ProcessEvent(uFnAddEnumerateUserFileCompleteDelegate, &AddEnumerateUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateUserFiles
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::EnumerateUserFiles(class FString UserId)
{
	static UFunction* uFnEnumerateUserFiles = nullptr;

	if (!uFnEnumerateUserFiles)
	{
		uFnEnumerateUserFiles = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateUserFiles");
	}

	UOnlineSubsystemSteamworks_execEnumerateUserFiles_Params EnumerateUserFiles_Params;
	memset(&EnumerateUserFiles_Params, 0, sizeof(EnumerateUserFiles_Params));
	memcpy_s(&EnumerateUserFiles_Params.UserId, sizeof(EnumerateUserFiles_Params.UserId), &UserId, sizeof(UserId));

	uFnEnumerateUserFiles->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnEnumerateUserFiles, &EnumerateUserFiles_Params, nullptr);
	uFnEnumerateUserFiles->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnEnumerateUserFilesComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnEnumerateUserFilesComplete(bool bWasSuccessful, class FString UserId)
{
	static UFunction* uFnOnEnumerateUserFilesComplete = nullptr;

	if (!uFnOnEnumerateUserFilesComplete)
	{
		uFnOnEnumerateUserFilesComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnEnumerateUserFilesComplete");
	}

	UOnlineSubsystemSteamworks_execOnEnumerateUserFilesComplete_Params OnEnumerateUserFilesComplete_Params;
	memset(&OnEnumerateUserFilesComplete_Params, 0, sizeof(OnEnumerateUserFilesComplete_Params));
	OnEnumerateUserFilesComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnEnumerateUserFilesComplete_Params.UserId, sizeof(OnEnumerateUserFilesComplete_Params.UserId), &UserId, sizeof(UserId));

	this->ProcessEvent(uFnOnEnumerateUserFilesComplete, &OnEnumerateUserFilesComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ClearFile(class FString UserId, class FString Filename)
{
	static UFunction* uFnClearFile = nullptr;

	if (!uFnClearFile)
	{
		uFnClearFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFile");
	}

	UOnlineSubsystemSteamworks_execClearFile_Params ClearFile_Params;
	memset(&ClearFile_Params, 0, sizeof(ClearFile_Params));
	memcpy_s(&ClearFile_Params.UserId, sizeof(ClearFile_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&ClearFile_Params.Filename, sizeof(ClearFile_Params.Filename), &Filename, sizeof(Filename));

	uFnClearFile->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnClearFile, &ClearFile_Params, nullptr);
	uFnClearFile->FunctionFlags |= 0x400;

	return ClearFile_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFiles
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ClearFiles(class FString UserId)
{
	static UFunction* uFnClearFiles = nullptr;

	if (!uFnClearFiles)
	{
		uFnClearFiles = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFiles");
	}

	UOnlineSubsystemSteamworks_execClearFiles_Params ClearFiles_Params;
	memset(&ClearFiles_Params, 0, sizeof(ClearFiles_Params));
	memcpy_s(&ClearFiles_Params.UserId, sizeof(ClearFiles_Params.UserId), &UserId, sizeof(UserId));

	uFnClearFiles->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnClearFiles, &ClearFiles_Params, nullptr);
	uFnClearFiles->FunctionFlags |= 0x400;

	return ClearFiles_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFileContents
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetFileContents(class FString UserId, class FString Filename, TArray<uint8_t>& FileContents)
{
	static UFunction* uFnGetFileContents = nullptr;

	if (!uFnGetFileContents)
	{
		uFnGetFileContents = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFileContents");
	}

	UOnlineSubsystemSteamworks_execGetFileContents_Params GetFileContents_Params;
	memset(&GetFileContents_Params, 0, sizeof(GetFileContents_Params));
	memcpy_s(&GetFileContents_Params.UserId, sizeof(GetFileContents_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&GetFileContents_Params.Filename, sizeof(GetFileContents_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&GetFileContents_Params.FileContents, sizeof(GetFileContents_Params.FileContents), &FileContents, sizeof(FileContents));

	uFnGetFileContents->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetFileContents, &GetFileContents_Params, nullptr);
	uFnGetFileContents->FunctionFlags |= 0x400;

	memcpy_s(&FileContents, sizeof(FileContents), &GetFileContents_Params.FileContents, sizeof(GetFileContents_Params.FileContents));

	return GetFileContents_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFileInternal
// [0x00440401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                FileContents                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::WriteUserFileInternal(class FString UserId, class FString Filename, TArray<uint8_t>& FileContents)
{
	static UFunction* uFnWriteUserFileInternal = nullptr;

	if (!uFnWriteUserFileInternal)
	{
		uFnWriteUserFileInternal = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFileInternal");
	}

	UOnlineSubsystemSteamworks_execWriteUserFileInternal_Params WriteUserFileInternal_Params;
	memset(&WriteUserFileInternal_Params, 0, sizeof(WriteUserFileInternal_Params));
	memcpy_s(&WriteUserFileInternal_Params.UserId, sizeof(WriteUserFileInternal_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&WriteUserFileInternal_Params.Filename, sizeof(WriteUserFileInternal_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&WriteUserFileInternal_Params.FileContents, sizeof(WriteUserFileInternal_Params.FileContents), &FileContents, sizeof(FileContents));

	uFnWriteUserFileInternal->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnWriteUserFileInternal, &WriteUserFileInternal_Params, nullptr);
	uFnWriteUserFileInternal->FunctionFlags |= 0x400;

	memcpy_s(&FileContents, sizeof(FileContents), &WriteUserFileInternal_Params.FileContents, sizeof(WriteUserFileInternal_Params.FileContents));

	return WriteUserFileInternal_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetVoiceReceiveVolume
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          VoiceVolume                    (CPF_Parm)

bool UOnlineSubsystemSteamworks::SetVoiceReceiveVolume(float VoiceVolume)
{
	static UFunction* uFnSetVoiceReceiveVolume = nullptr;

	if (!uFnSetVoiceReceiveVolume)
	{
		uFnSetVoiceReceiveVolume = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetVoiceReceiveVolume");
	}

	UOnlineSubsystemSteamworks_execSetVoiceReceiveVolume_Params SetVoiceReceiveVolume_Params;
	memset(&SetVoiceReceiveVolume_Params, 0, sizeof(SetVoiceReceiveVolume_Params));
	memcpy_s(&SetVoiceReceiveVolume_Params.VoiceVolume, sizeof(SetVoiceReceiveVolume_Params.VoiceVolume), &VoiceVolume, sizeof(VoiceVolume));

	uFnSetVoiceReceiveVolume->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetVoiceReceiveVolume, &SetVoiceReceiveVolume_Params, nullptr);
	uFnSetVoiceReceiveVolume->FunctionFlags |= 0x400;

	return SetVoiceReceiveVolume_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendJoinURL
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            FriendUID                      (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ServerURL                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  ServerUID                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetFriendJoinURL(struct FUniqueNetId FriendUID, class FString& ServerURL, class FString& ServerUID)
{
	static UFunction* uFnGetFriendJoinURL = nullptr;

	if (!uFnGetFriendJoinURL)
	{
		uFnGetFriendJoinURL = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendJoinURL");
	}

	UOnlineSubsystemSteamworks_execGetFriendJoinURL_Params GetFriendJoinURL_Params;
	memset(&GetFriendJoinURL_Params, 0, sizeof(GetFriendJoinURL_Params));
	memcpy_s(&GetFriendJoinURL_Params.FriendUID, sizeof(GetFriendJoinURL_Params.FriendUID), &FriendUID, sizeof(FriendUID));
	memcpy_s(&GetFriendJoinURL_Params.ServerURL, sizeof(GetFriendJoinURL_Params.ServerURL), &ServerURL, sizeof(ServerURL));
	memcpy_s(&GetFriendJoinURL_Params.ServerUID, sizeof(GetFriendJoinURL_Params.ServerUID), &ServerUID, sizeof(ServerUID));

	uFnGetFriendJoinURL->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetFriendJoinURL, &GetFriendJoinURL_Params, nullptr);
	uFnGetFriendJoinURL->FunctionFlags |= 0x400;

	memcpy_s(&ServerURL, sizeof(ServerURL), &GetFriendJoinURL_Params.ServerURL, sizeof(GetFriendJoinURL_Params.ServerURL));
	memcpy_s(&ServerUID, sizeof(ServerUID), &GetFriendJoinURL_Params.ServerUID, sizeof(GetFriendJoinURL_Params.ServerUID));

	return GetFriendJoinURL_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCommandlineJoinURL
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// bool                           bMarkAsJoined                  (CPF_Parm)
// class FString                  ServerURL                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  ServerUID                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetCommandlineJoinURL(bool bMarkAsJoined, class FString& ServerURL, class FString& ServerUID)
{
	static UFunction* uFnGetCommandlineJoinURL = nullptr;

	if (!uFnGetCommandlineJoinURL)
	{
		uFnGetCommandlineJoinURL = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCommandlineJoinURL");
	}

	UOnlineSubsystemSteamworks_execGetCommandlineJoinURL_Params GetCommandlineJoinURL_Params;
	memset(&GetCommandlineJoinURL_Params, 0, sizeof(GetCommandlineJoinURL_Params));
	GetCommandlineJoinURL_Params.bMarkAsJoined = bMarkAsJoined;
	memcpy_s(&GetCommandlineJoinURL_Params.ServerURL, sizeof(GetCommandlineJoinURL_Params.ServerURL), &ServerURL, sizeof(ServerURL));
	memcpy_s(&GetCommandlineJoinURL_Params.ServerUID, sizeof(GetCommandlineJoinURL_Params.ServerUID), &ServerUID, sizeof(ServerUID));

	uFnGetCommandlineJoinURL->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetCommandlineJoinURL, &GetCommandlineJoinURL_Params, nullptr);
	uFnGetCommandlineJoinURL->FunctionFlags |= 0x400;

	memcpy_s(&ServerURL, sizeof(ServerURL), &GetCommandlineJoinURL_Params.ServerURL, sizeof(GetCommandlineJoinURL_Params.ServerURL));
	memcpy_s(&ServerUID, sizeof(ServerUID), &GetCommandlineJoinURL_Params.ServerUID, sizeof(GetCommandlineJoinURL_Params.ServerUID));

	return GetCommandlineJoinURL_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Int64ToUniqueNetId
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UIDString                      (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            OutUID                         (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::Int64ToUniqueNetId(class FString UIDString, struct FUniqueNetId& OutUID)
{
	static UFunction* uFnInt64ToUniqueNetId = nullptr;

	if (!uFnInt64ToUniqueNetId)
	{
		uFnInt64ToUniqueNetId = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Int64ToUniqueNetId");
	}

	UOnlineSubsystemSteamworks_execInt64ToUniqueNetId_Params Int64ToUniqueNetId_Params;
	memset(&Int64ToUniqueNetId_Params, 0, sizeof(Int64ToUniqueNetId_Params));
	memcpy_s(&Int64ToUniqueNetId_Params.UIDString, sizeof(Int64ToUniqueNetId_Params.UIDString), &UIDString, sizeof(UIDString));
	memcpy_s(&Int64ToUniqueNetId_Params.OutUID, sizeof(Int64ToUniqueNetId_Params.OutUID), &OutUID, sizeof(OutUID));

	uFnInt64ToUniqueNetId->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnInt64ToUniqueNetId, &Int64ToUniqueNetId_Params, nullptr);
	uFnInt64ToUniqueNetId->FunctionFlags |= 0x400;

	memcpy_s(&OutUID, sizeof(OutUID), &Int64ToUniqueNetId_Params.OutUID, sizeof(Int64ToUniqueNetId_Params.OutUID));

	return Int64ToUniqueNetId_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToInt64
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FUniqueNetId            Uid                            (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

class FString UOnlineSubsystemSteamworks::UniqueNetIdToInt64(struct FUniqueNetId& Uid)
{
	static UFunction* uFnUniqueNetIdToInt64 = nullptr;

	if (!uFnUniqueNetIdToInt64)
	{
		uFnUniqueNetIdToInt64 = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToInt64");
	}

	UOnlineSubsystemSteamworks_execUniqueNetIdToInt64_Params UniqueNetIdToInt64_Params;
	memset(&UniqueNetIdToInt64_Params, 0, sizeof(UniqueNetIdToInt64_Params));
	memcpy_s(&UniqueNetIdToInt64_Params.Uid, sizeof(UniqueNetIdToInt64_Params.Uid), &Uid, sizeof(Uid));

	uFnUniqueNetIdToInt64->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUniqueNetIdToInt64, &UniqueNetIdToInt64_Params, nullptr);
	uFnUniqueNetIdToInt64->FunctionFlags |= 0x400;

	memcpy_s(&Uid, sizeof(Uid), &UniqueNetIdToInt64_Params.Uid, sizeof(UniqueNetIdToInt64_Params.Uid));

	return UniqueNetIdToInt64_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.NotifyVOIPPlaybackFinished
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UAudioComponent*         VOIPAudioComponent             (CPF_Parm | CPF_EditInline)

void UOnlineSubsystemSteamworks::NotifyVOIPPlaybackFinished(class UAudioComponent* VOIPAudioComponent)
{
	static UFunction* uFnNotifyVOIPPlaybackFinished = nullptr;

	if (!uFnNotifyVOIPPlaybackFinished)
	{
		uFnNotifyVOIPPlaybackFinished = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.NotifyVOIPPlaybackFinished");
	}

	UOnlineSubsystemSteamworks_execNotifyVOIPPlaybackFinished_Params NotifyVOIPPlaybackFinished_Params;
	memset(&NotifyVOIPPlaybackFinished_Params, 0, sizeof(NotifyVOIPPlaybackFinished_Params));
	memcpy_s(&NotifyVOIPPlaybackFinished_Params.VOIPAudioComponent, sizeof(NotifyVOIPPlaybackFinished_Params.VOIPAudioComponent), &VOIPAudioComponent, sizeof(VOIPAudioComponent));

	uFnNotifyVOIPPlaybackFinished->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnNotifyVOIPPlaybackFinished, &NotifyVOIPPlaybackFinished_Params, nullptr);
	uFnNotifyVOIPPlaybackFinished->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnVOIPPlaybackFinished
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UAudioComponent*         AC                             (CPF_Parm | CPF_EditInline)

void UOnlineSubsystemSteamworks::OnVOIPPlaybackFinished(class UAudioComponent* AC)
{
	static UFunction* uFnOnVOIPPlaybackFinished = nullptr;

	if (!uFnOnVOIPPlaybackFinished)
	{
		uFnOnVOIPPlaybackFinished = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnVOIPPlaybackFinished");
	}

	UOnlineSubsystemSteamworks_execOnVOIPPlaybackFinished_Params OnVOIPPlaybackFinished_Params;
	memset(&OnVOIPPlaybackFinished_Params, 0, sizeof(OnVOIPPlaybackFinished_Params));
	memcpy_s(&OnVOIPPlaybackFinished_Params.AC, sizeof(OnVOIPPlaybackFinished_Params.AC), &AC, sizeof(AC));

	this->ProcessEvent(uFnOnVOIPPlaybackFinished, &OnVOIPPlaybackFinished_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProfileUI
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  SubURL                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            PlayerUID                      (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowProfileUI(uint8_t LocalUserNum, class FString SubURL, struct FUniqueNetId PlayerUID)
{
	static UFunction* uFnShowProfileUI = nullptr;

	if (!uFnShowProfileUI)
	{
		uFnShowProfileUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProfileUI");
	}

	UOnlineSubsystemSteamworks_execShowProfileUI_Params ShowProfileUI_Params;
	memset(&ShowProfileUI_Params, 0, sizeof(ShowProfileUI_Params));
	memcpy_s(&ShowProfileUI_Params.LocalUserNum, sizeof(ShowProfileUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowProfileUI_Params.SubURL, sizeof(ShowProfileUI_Params.SubURL), &SubURL, sizeof(SubURL));
	memcpy_s(&ShowProfileUI_Params.PlayerUID, sizeof(ShowProfileUI_Params.PlayerUID), &PlayerUID, sizeof(PlayerUID));

	uFnShowProfileUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowProfileUI, &ShowProfileUI_Params, nullptr);
	uFnShowProfileUI->FunctionFlags |= 0x400;

	return ShowProfileUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToPlayerName
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FUniqueNetId            Uid                            (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

class FString UOnlineSubsystemSteamworks::UniqueNetIdToPlayerName(struct FUniqueNetId& Uid)
{
	static UFunction* uFnUniqueNetIdToPlayerName = nullptr;

	if (!uFnUniqueNetIdToPlayerName)
	{
		uFnUniqueNetIdToPlayerName = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToPlayerName");
	}

	UOnlineSubsystemSteamworks_execUniqueNetIdToPlayerName_Params UniqueNetIdToPlayerName_Params;
	memset(&UniqueNetIdToPlayerName_Params, 0, sizeof(UniqueNetIdToPlayerName_Params));
	memcpy_s(&UniqueNetIdToPlayerName_Params.Uid, sizeof(UniqueNetIdToPlayerName_Params.Uid), &Uid, sizeof(Uid));

	uFnUniqueNetIdToPlayerName->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUniqueNetIdToPlayerName, &UniqueNetIdToPlayerName_Params, nullptr);
	uFnUniqueNetIdToPlayerName->FunctionFlags |= 0x400;

	memcpy_s(&Uid, sizeof(Uid), &UniqueNetIdToPlayerName_Params.Uid, sizeof(UniqueNetIdToPlayerName_Params.Uid));

	return UniqueNetIdToPlayerName_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DisplayAchievementProgress
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        AchievementId                  (CPF_Parm)
// int32_t                        ProgressCount                  (CPF_Parm)
// int32_t                        MaxProgress                    (CPF_Parm)

bool UOnlineSubsystemSteamworks::DisplayAchievementProgress(int32_t AchievementId, int32_t ProgressCount, int32_t MaxProgress)
{
	static UFunction* uFnDisplayAchievementProgress = nullptr;

	if (!uFnDisplayAchievementProgress)
	{
		uFnDisplayAchievementProgress = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DisplayAchievementProgress");
	}

	UOnlineSubsystemSteamworks_execDisplayAchievementProgress_Params DisplayAchievementProgress_Params;
	memset(&DisplayAchievementProgress_Params, 0, sizeof(DisplayAchievementProgress_Params));
	memcpy_s(&DisplayAchievementProgress_Params.AchievementId, sizeof(DisplayAchievementProgress_Params.AchievementId), &AchievementId, sizeof(AchievementId));
	memcpy_s(&DisplayAchievementProgress_Params.ProgressCount, sizeof(DisplayAchievementProgress_Params.ProgressCount), &ProgressCount, sizeof(ProgressCount));
	memcpy_s(&DisplayAchievementProgress_Params.MaxProgress, sizeof(DisplayAchievementProgress_Params.MaxProgress), &MaxProgress, sizeof(MaxProgress));

	uFnDisplayAchievementProgress->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDisplayAchievementProgress, &DisplayAchievementProgress_Params, nullptr);
	uFnDisplayAchievementProgress->FunctionFlags |= 0x400;

	return DisplayAchievementProgress_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  LeaderboardName                (CPF_Parm | CPF_NeedCtorLink)
// ELeaderboardSortType           SortType                       (CPF_Parm)
// ELeaderboardFormat             DisplayFormat                  (CPF_Parm)

bool UOnlineSubsystemSteamworks::CreateLeaderboard(class FString LeaderboardName, ELeaderboardSortType SortType, ELeaderboardFormat DisplayFormat)
{
	static UFunction* uFnCreateLeaderboard = nullptr;

	if (!uFnCreateLeaderboard)
	{
		uFnCreateLeaderboard = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard");
	}

	UOnlineSubsystemSteamworks_execCreateLeaderboard_Params CreateLeaderboard_Params;
	memset(&CreateLeaderboard_Params, 0, sizeof(CreateLeaderboard_Params));
	memcpy_s(&CreateLeaderboard_Params.LeaderboardName, sizeof(CreateLeaderboard_Params.LeaderboardName), &LeaderboardName, sizeof(LeaderboardName));
	memcpy_s(&CreateLeaderboard_Params.SortType, sizeof(CreateLeaderboard_Params.SortType), &SortType, sizeof(SortType));
	memcpy_s(&CreateLeaderboard_Params.DisplayFormat, sizeof(CreateLeaderboard_Params.DisplayFormat), &DisplayFormat, sizeof(DisplayFormat));

	uFnCreateLeaderboard->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCreateLeaderboard, &CreateLeaderboard_Params, nullptr);
	uFnCreateLeaderboard->FunctionFlags |= 0x400;

	return CreateLeaderboard_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetStats
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// bool                           bResetAchievements             (CPF_Parm)

bool UOnlineSubsystemSteamworks::ResetStats(bool bResetAchievements)
{
	static UFunction* uFnResetStats = nullptr;

	if (!uFnResetStats)
	{
		uFnResetStats = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetStats");
	}

	UOnlineSubsystemSteamworks_execResetStats_Params ResetStats_Params;
	memset(&ResetStats_Params, 0, sizeof(ResetStats_Params));
	ResetStats_Params.bResetAchievements = bResetAchievements;

	uFnResetStats->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnResetStats, &ResetStats_Params, nullptr);
	uFnResetStats->FunctionFlags |= 0x400;

	return ResetStats_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomMessageUI
// [0x00424001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  MessageTitle                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  NonEditableMessage             (CPF_Parm | CPF_NeedCtorLink)
// class FString                  EditableMessage                (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FUniqueNetId>    Recipients                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowCustomMessageUI(uint8_t LocalUserNum, class FString MessageTitle, class FString NonEditableMessage, class FString EditableMessage, TArray<struct FUniqueNetId>& Recipients)
{
	static UFunction* uFnShowCustomMessageUI = nullptr;

	if (!uFnShowCustomMessageUI)
	{
		uFnShowCustomMessageUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomMessageUI");
	}

	UOnlineSubsystemSteamworks_execShowCustomMessageUI_Params ShowCustomMessageUI_Params;
	memset(&ShowCustomMessageUI_Params, 0, sizeof(ShowCustomMessageUI_Params));
	memcpy_s(&ShowCustomMessageUI_Params.LocalUserNum, sizeof(ShowCustomMessageUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowCustomMessageUI_Params.MessageTitle, sizeof(ShowCustomMessageUI_Params.MessageTitle), &MessageTitle, sizeof(MessageTitle));
	memcpy_s(&ShowCustomMessageUI_Params.NonEditableMessage, sizeof(ShowCustomMessageUI_Params.NonEditableMessage), &NonEditableMessage, sizeof(NonEditableMessage));
	memcpy_s(&ShowCustomMessageUI_Params.EditableMessage, sizeof(ShowCustomMessageUI_Params.EditableMessage), &EditableMessage, sizeof(EditableMessage));
	memcpy_s(&ShowCustomMessageUI_Params.Recipients, sizeof(ShowCustomMessageUI_Params.Recipients), &Recipients, sizeof(Recipients));

	this->ProcessEvent(uFnShowCustomMessageUI, &ShowCustomMessageUI_Params, nullptr);

	memcpy_s(&Recipients, sizeof(Recipients), &ShowCustomMessageUI_Params.Recipients, sizeof(ShowCustomMessageUI_Params.Recipients));

	return ShowCustomMessageUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleProfileSettings
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_Parm)

void UOnlineSubsystemSteamworks::ClearCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId)
{
	static UFunction* uFnClearCrossTitleProfileSettings = nullptr;

	if (!uFnClearCrossTitleProfileSettings)
	{
		uFnClearCrossTitleProfileSettings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleProfileSettings");
	}

	UOnlineSubsystemSteamworks_execClearCrossTitleProfileSettings_Params ClearCrossTitleProfileSettings_Params;
	memset(&ClearCrossTitleProfileSettings_Params, 0, sizeof(ClearCrossTitleProfileSettings_Params));
	memcpy_s(&ClearCrossTitleProfileSettings_Params.LocalUserNum, sizeof(ClearCrossTitleProfileSettings_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearCrossTitleProfileSettings_Params.TitleId, sizeof(ClearCrossTitleProfileSettings_Params.TitleId), &TitleId, sizeof(TitleId));

	this->ProcessEvent(uFnClearCrossTitleProfileSettings, &ClearCrossTitleProfileSettings_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleProfileSettings
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOnlineProfileSettings*  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_Parm)

class UOnlineProfileSettings* UOnlineSubsystemSteamworks::GetCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId)
{
	static UFunction* uFnGetCrossTitleProfileSettings = nullptr;

	if (!uFnGetCrossTitleProfileSettings)
	{
		uFnGetCrossTitleProfileSettings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleProfileSettings");
	}

	UOnlineSubsystemSteamworks_execGetCrossTitleProfileSettings_Params GetCrossTitleProfileSettings_Params;
	memset(&GetCrossTitleProfileSettings_Params, 0, sizeof(GetCrossTitleProfileSettings_Params));
	memcpy_s(&GetCrossTitleProfileSettings_Params.LocalUserNum, sizeof(GetCrossTitleProfileSettings_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&GetCrossTitleProfileSettings_Params.TitleId, sizeof(GetCrossTitleProfileSettings_Params.TitleId), &TitleId, sizeof(TitleId));

	this->ProcessEvent(uFnGetCrossTitleProfileSettings, &GetCrossTitleProfileSettings_Params, nullptr);

	return GetCrossTitleProfileSettings_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadCrossTitleProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate)
{
	static UFunction* uFnClearReadCrossTitleProfileSettingsCompleteDelegate = nullptr;

	if (!uFnClearReadCrossTitleProfileSettingsCompleteDelegate)
	{
		uFnClearReadCrossTitleProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleProfileSettingsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadCrossTitleProfileSettingsCompleteDelegate_Params ClearReadCrossTitleProfileSettingsCompleteDelegate_Params;
	memset(&ClearReadCrossTitleProfileSettingsCompleteDelegate_Params, 0, sizeof(ClearReadCrossTitleProfileSettingsCompleteDelegate_Params));
	memcpy_s(&ClearReadCrossTitleProfileSettingsCompleteDelegate_Params.LocalUserNum, sizeof(ClearReadCrossTitleProfileSettingsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearReadCrossTitleProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate, sizeof(ClearReadCrossTitleProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate), &ReadProfileSettingsCompleteDelegate, sizeof(ReadProfileSettingsCompleteDelegate));

	this->ProcessEvent(uFnClearReadCrossTitleProfileSettingsCompleteDelegate, &ClearReadCrossTitleProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadCrossTitleProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate)
{
	static UFunction* uFnAddReadCrossTitleProfileSettingsCompleteDelegate = nullptr;

	if (!uFnAddReadCrossTitleProfileSettingsCompleteDelegate)
	{
		uFnAddReadCrossTitleProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleProfileSettingsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadCrossTitleProfileSettingsCompleteDelegate_Params AddReadCrossTitleProfileSettingsCompleteDelegate_Params;
	memset(&AddReadCrossTitleProfileSettingsCompleteDelegate_Params, 0, sizeof(AddReadCrossTitleProfileSettingsCompleteDelegate_Params));
	memcpy_s(&AddReadCrossTitleProfileSettingsCompleteDelegate_Params.LocalUserNum, sizeof(AddReadCrossTitleProfileSettingsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddReadCrossTitleProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate, sizeof(AddReadCrossTitleProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate), &ReadProfileSettingsCompleteDelegate, sizeof(ReadProfileSettingsCompleteDelegate));

	this->ProcessEvent(uFnAddReadCrossTitleProfileSettingsCompleteDelegate, &AddReadCrossTitleProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleProfileSettingsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadCrossTitleProfileSettingsComplete(uint8_t LocalUserNum, int32_t TitleId, bool bWasSuccessful)
{
	static UFunction* uFnOnReadCrossTitleProfileSettingsComplete = nullptr;

	if (!uFnOnReadCrossTitleProfileSettingsComplete)
	{
		uFnOnReadCrossTitleProfileSettingsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleProfileSettingsComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadCrossTitleProfileSettingsComplete_Params OnReadCrossTitleProfileSettingsComplete_Params;
	memset(&OnReadCrossTitleProfileSettingsComplete_Params, 0, sizeof(OnReadCrossTitleProfileSettingsComplete_Params));
	memcpy_s(&OnReadCrossTitleProfileSettingsComplete_Params.LocalUserNum, sizeof(OnReadCrossTitleProfileSettingsComplete_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OnReadCrossTitleProfileSettingsComplete_Params.TitleId, sizeof(OnReadCrossTitleProfileSettingsComplete_Params.TitleId), &TitleId, sizeof(TitleId));
	OnReadCrossTitleProfileSettingsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadCrossTitleProfileSettingsComplete, &OnReadCrossTitleProfileSettingsComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleProfileSettings
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_Parm)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId, class UOnlineProfileSettings* ProfileSettings)
{
	static UFunction* uFnReadCrossTitleProfileSettings = nullptr;

	if (!uFnReadCrossTitleProfileSettings)
	{
		uFnReadCrossTitleProfileSettings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleProfileSettings");
	}

	UOnlineSubsystemSteamworks_execReadCrossTitleProfileSettings_Params ReadCrossTitleProfileSettings_Params;
	memset(&ReadCrossTitleProfileSettings_Params, 0, sizeof(ReadCrossTitleProfileSettings_Params));
	memcpy_s(&ReadCrossTitleProfileSettings_Params.LocalUserNum, sizeof(ReadCrossTitleProfileSettings_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadCrossTitleProfileSettings_Params.TitleId, sizeof(ReadCrossTitleProfileSettings_Params.TitleId), &TitleId, sizeof(TitleId));
	memcpy_s(&ReadCrossTitleProfileSettings_Params.ProfileSettings, sizeof(ReadCrossTitleProfileSettings_Params.ProfileSettings), &ProfileSettings, sizeof(ProfileSettings));

	this->ProcessEvent(uFnReadCrossTitleProfileSettings, &ReadCrossTitleProfileSettings_Params, nullptr);

	return ReadCrossTitleProfileSettings_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamClanData
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// TArray<struct FSteamPlayerClanData> Results                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::GetSteamClanData(TArray<struct FSteamPlayerClanData>& Results)
{
	static UFunction* uFnGetSteamClanData = nullptr;

	if (!uFnGetSteamClanData)
	{
		uFnGetSteamClanData = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamClanData");
	}

	UOnlineSubsystemSteamworks_execGetSteamClanData_Params GetSteamClanData_Params;
	memset(&GetSteamClanData_Params, 0, sizeof(GetSteamClanData_Params));
	memcpy_s(&GetSteamClanData_Params.Results, sizeof(GetSteamClanData_Params.Results), &Results, sizeof(Results));

	uFnGetSteamClanData->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetSteamClanData, &GetSteamClanData_Params, nullptr);
	uFnGetSteamClanData->FunctionFlags |= 0x400;

	memcpy_s(&Results, sizeof(Results), &GetSteamClanData_Params.Results, sizeof(GetSteamClanData_Params.Results));
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearGetNumberOfCurrentPlayersCompleteDelegate(struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate)
{
	static UFunction* uFnClearGetNumberOfCurrentPlayersCompleteDelegate = nullptr;

	if (!uFnClearGetNumberOfCurrentPlayersCompleteDelegate)
	{
		uFnClearGetNumberOfCurrentPlayersCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearGetNumberOfCurrentPlayersCompleteDelegate_Params ClearGetNumberOfCurrentPlayersCompleteDelegate_Params;
	memset(&ClearGetNumberOfCurrentPlayersCompleteDelegate_Params, 0, sizeof(ClearGetNumberOfCurrentPlayersCompleteDelegate_Params));
	memcpy_s(&ClearGetNumberOfCurrentPlayersCompleteDelegate_Params.GetNumberOfCurrentPlayersCompleteDelegate, sizeof(ClearGetNumberOfCurrentPlayersCompleteDelegate_Params.GetNumberOfCurrentPlayersCompleteDelegate), &GetNumberOfCurrentPlayersCompleteDelegate, sizeof(GetNumberOfCurrentPlayersCompleteDelegate));

	this->ProcessEvent(uFnClearGetNumberOfCurrentPlayersCompleteDelegate, &ClearGetNumberOfCurrentPlayersCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddGetNumberOfCurrentPlayersCompleteDelegate(struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate)
{
	static UFunction* uFnAddGetNumberOfCurrentPlayersCompleteDelegate = nullptr;

	if (!uFnAddGetNumberOfCurrentPlayersCompleteDelegate)
	{
		uFnAddGetNumberOfCurrentPlayersCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddGetNumberOfCurrentPlayersCompleteDelegate_Params AddGetNumberOfCurrentPlayersCompleteDelegate_Params;
	memset(&AddGetNumberOfCurrentPlayersCompleteDelegate_Params, 0, sizeof(AddGetNumberOfCurrentPlayersCompleteDelegate_Params));
	memcpy_s(&AddGetNumberOfCurrentPlayersCompleteDelegate_Params.GetNumberOfCurrentPlayersCompleteDelegate, sizeof(AddGetNumberOfCurrentPlayersCompleteDelegate_Params.GetNumberOfCurrentPlayersCompleteDelegate), &GetNumberOfCurrentPlayersCompleteDelegate, sizeof(GetNumberOfCurrentPlayersCompleteDelegate));

	this->ProcessEvent(uFnAddGetNumberOfCurrentPlayersCompleteDelegate, &AddGetNumberOfCurrentPlayersCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        TotalPlayers                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnGetNumberOfCurrentPlayersComplete(int32_t TotalPlayers)
{
	static UFunction* uFnOnGetNumberOfCurrentPlayersComplete = nullptr;

	if (!uFnOnGetNumberOfCurrentPlayersComplete)
	{
		uFnOnGetNumberOfCurrentPlayersComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete");
	}

	UOnlineSubsystemSteamworks_execOnGetNumberOfCurrentPlayersComplete_Params OnGetNumberOfCurrentPlayersComplete_Params;
	memset(&OnGetNumberOfCurrentPlayersComplete_Params, 0, sizeof(OnGetNumberOfCurrentPlayersComplete_Params));
	memcpy_s(&OnGetNumberOfCurrentPlayersComplete_Params.TotalPlayers, sizeof(OnGetNumberOfCurrentPlayersComplete_Params.TotalPlayers), &TotalPlayers, sizeof(TotalPlayers));

	this->ProcessEvent(uFnOnGetNumberOfCurrentPlayersComplete, &OnGetNumberOfCurrentPlayersComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::GetNumberOfCurrentPlayers()
{
	static UFunction* uFnGetNumberOfCurrentPlayers = nullptr;

	if (!uFnGetNumberOfCurrentPlayers)
	{
		uFnGetNumberOfCurrentPlayers = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers");
	}

	UOnlineSubsystemSteamworks_execGetNumberOfCurrentPlayers_Params GetNumberOfCurrentPlayers_Params;
	memset(&GetNumberOfCurrentPlayers_Params, 0, sizeof(GetNumberOfCurrentPlayers_Params));

	uFnGetNumberOfCurrentPlayers->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetNumberOfCurrentPlayers, &GetNumberOfCurrentPlayers_Params, nullptr);
	uFnGetNumberOfCurrentPlayers->FunctionFlags |= 0x400;

	return GetNumberOfCurrentPlayers_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatars
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// EAvatarSize                    Size                           (CPF_Parm)
// struct FScriptDelegate         ReadOnlineAvatarCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FUniqueNetId>    PlayerNetIds                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ReadOnlineAvatars(EAvatarSize Size, struct FScriptDelegate ReadOnlineAvatarCompleteDelegate, TArray<struct FUniqueNetId>& PlayerNetIds)
{
	static UFunction* uFnReadOnlineAvatars = nullptr;

	if (!uFnReadOnlineAvatars)
	{
		uFnReadOnlineAvatars = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatars");
	}

	UOnlineSubsystemSteamworks_execReadOnlineAvatars_Params ReadOnlineAvatars_Params;
	memset(&ReadOnlineAvatars_Params, 0, sizeof(ReadOnlineAvatars_Params));
	memcpy_s(&ReadOnlineAvatars_Params.Size, sizeof(ReadOnlineAvatars_Params.Size), &Size, sizeof(Size));
	memcpy_s(&ReadOnlineAvatars_Params.ReadOnlineAvatarCompleteDelegate, sizeof(ReadOnlineAvatars_Params.ReadOnlineAvatarCompleteDelegate), &ReadOnlineAvatarCompleteDelegate, sizeof(ReadOnlineAvatarCompleteDelegate));
	memcpy_s(&ReadOnlineAvatars_Params.PlayerNetIds, sizeof(ReadOnlineAvatars_Params.PlayerNetIds), &PlayerNetIds, sizeof(PlayerNetIds));

	uFnReadOnlineAvatars->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadOnlineAvatars, &ReadOnlineAvatars_Params, nullptr);
	uFnReadOnlineAvatars->FunctionFlags |= 0x400;

	memcpy_s(&PlayerNetIds, sizeof(PlayerNetIds), &ReadOnlineAvatars_Params.PlayerNetIds, sizeof(ReadOnlineAvatars_Params.PlayerNetIds));
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  Title                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Description                    (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FUniqueNetId>    Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowCustomPlayersUI(uint8_t LocalUserNum, class FString Title, class FString Description, TArray<struct FUniqueNetId>& Players)
{
	static UFunction* uFnShowCustomPlayersUI = nullptr;

	if (!uFnShowCustomPlayersUI)
	{
		uFnShowCustomPlayersUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI");
	}

	UOnlineSubsystemSteamworks_execShowCustomPlayersUI_Params ShowCustomPlayersUI_Params;
	memset(&ShowCustomPlayersUI_Params, 0, sizeof(ShowCustomPlayersUI_Params));
	memcpy_s(&ShowCustomPlayersUI_Params.LocalUserNum, sizeof(ShowCustomPlayersUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowCustomPlayersUI_Params.Title, sizeof(ShowCustomPlayersUI_Params.Title), &Title, sizeof(Title));
	memcpy_s(&ShowCustomPlayersUI_Params.Description, sizeof(ShowCustomPlayersUI_Params.Description), &Description, sizeof(Description));
	memcpy_s(&ShowCustomPlayersUI_Params.Players, sizeof(ShowCustomPlayersUI_Params.Players), &Players, sizeof(Players));

	uFnShowCustomPlayersUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowCustomPlayersUI, &ShowCustomPlayersUI_Params, nullptr);
	uFnShowCustomPlayersUI->FunctionFlags |= 0x400;

	memcpy_s(&Players, sizeof(Players), &ShowCustomPlayersUI_Params.Players, sizeof(ShowCustomPlayersUI_Params.Players));

	return ShowCustomPlayersUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// EOnlineEnumerationReadState    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_OptionalParm | CPF_Parm)
// TArray<struct FAchievementDetails> Achievements                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

EOnlineEnumerationReadState UOnlineSubsystemSteamworks::GetAchievements(uint8_t LocalUserNum, int32_t TitleId, TArray<struct FAchievementDetails>& Achievements)
{
	static UFunction* uFnGetAchievements = nullptr;

	if (!uFnGetAchievements)
	{
		uFnGetAchievements = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements");
	}

	UOnlineSubsystemSteamworks_execGetAchievements_Params GetAchievements_Params;
	memset(&GetAchievements_Params, 0, sizeof(GetAchievements_Params));
	memcpy_s(&GetAchievements_Params.LocalUserNum, sizeof(GetAchievements_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&GetAchievements_Params.TitleId, sizeof(GetAchievements_Params.TitleId), &TitleId, sizeof(TitleId));
	memcpy_s(&GetAchievements_Params.Achievements, sizeof(GetAchievements_Params.Achievements), &Achievements, sizeof(Achievements));

	uFnGetAchievements->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetAchievements, &GetAchievements_Params, nullptr);
	uFnGetAchievements->FunctionFlags |= 0x400;

	memcpy_s(&Achievements, sizeof(Achievements), &GetAchievements_Params.Achievements, sizeof(GetAchievements_Params.Achievements));

	return GetAchievements_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadAchievementsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadAchievementsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate)
{
	static UFunction* uFnClearReadAchievementsCompleteDelegate = nullptr;

	if (!uFnClearReadAchievementsCompleteDelegate)
	{
		uFnClearReadAchievementsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadAchievementsCompleteDelegate_Params ClearReadAchievementsCompleteDelegate_Params;
	memset(&ClearReadAchievementsCompleteDelegate_Params, 0, sizeof(ClearReadAchievementsCompleteDelegate_Params));
	memcpy_s(&ClearReadAchievementsCompleteDelegate_Params.LocalUserNum, sizeof(ClearReadAchievementsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearReadAchievementsCompleteDelegate_Params.ReadAchievementsCompleteDelegate, sizeof(ClearReadAchievementsCompleteDelegate_Params.ReadAchievementsCompleteDelegate), &ReadAchievementsCompleteDelegate, sizeof(ReadAchievementsCompleteDelegate));

	this->ProcessEvent(uFnClearReadAchievementsCompleteDelegate, &ClearReadAchievementsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadAchievementsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadAchievementsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate)
{
	static UFunction* uFnAddReadAchievementsCompleteDelegate = nullptr;

	if (!uFnAddReadAchievementsCompleteDelegate)
	{
		uFnAddReadAchievementsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadAchievementsCompleteDelegate_Params AddReadAchievementsCompleteDelegate_Params;
	memset(&AddReadAchievementsCompleteDelegate_Params, 0, sizeof(AddReadAchievementsCompleteDelegate_Params));
	memcpy_s(&AddReadAchievementsCompleteDelegate_Params.LocalUserNum, sizeof(AddReadAchievementsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddReadAchievementsCompleteDelegate_Params.ReadAchievementsCompleteDelegate, sizeof(AddReadAchievementsCompleteDelegate_Params.ReadAchievementsCompleteDelegate), &ReadAchievementsCompleteDelegate, sizeof(ReadAchievementsCompleteDelegate));

	this->ProcessEvent(uFnAddReadAchievementsCompleteDelegate, &AddReadAchievementsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        TitleId                        (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadAchievementsComplete(int32_t TitleId)
{
	static UFunction* uFnOnReadAchievementsComplete = nullptr;

	if (!uFnOnReadAchievementsComplete)
	{
		uFnOnReadAchievementsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadAchievementsComplete_Params OnReadAchievementsComplete_Params;
	memset(&OnReadAchievementsComplete_Params, 0, sizeof(OnReadAchievementsComplete_Params));
	memcpy_s(&OnReadAchievementsComplete_Params.TitleId, sizeof(OnReadAchievementsComplete_Params.TitleId), &TitleId, sizeof(TitleId));

	this->ProcessEvent(uFnOnReadAchievementsComplete, &OnReadAchievementsComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_OptionalParm | CPF_Parm)
// bool                           bShouldReadText                (CPF_OptionalParm | CPF_Parm)
// bool                           bShouldReadImages              (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadAchievements(uint8_t LocalUserNum, int32_t TitleId, bool bShouldReadText, bool bShouldReadImages)
{
	static UFunction* uFnReadAchievements = nullptr;

	if (!uFnReadAchievements)
	{
		uFnReadAchievements = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements");
	}

	UOnlineSubsystemSteamworks_execReadAchievements_Params ReadAchievements_Params;
	memset(&ReadAchievements_Params, 0, sizeof(ReadAchievements_Params));
	memcpy_s(&ReadAchievements_Params.LocalUserNum, sizeof(ReadAchievements_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadAchievements_Params.TitleId, sizeof(ReadAchievements_Params.TitleId), &TitleId, sizeof(TitleId));
	ReadAchievements_Params.bShouldReadText = bShouldReadText;
	ReadAchievements_Params.bShouldReadImages = bShouldReadImages;

	uFnReadAchievements->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadAchievements, &ReadAchievements_Params, nullptr);
	uFnReadAchievements->FunctionFlags |= 0x400;

	return ReadAchievements_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowPlayersUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowPlayersUI = nullptr;

	if (!uFnShowPlayersUI)
	{
		uFnShowPlayersUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI");
	}

	UOnlineSubsystemSteamworks_execShowPlayersUI_Params ShowPlayersUI_Params;
	memset(&ShowPlayersUI_Params, 0, sizeof(ShowPlayersUI_Params));
	memcpy_s(&ShowPlayersUI_Params.LocalUserNum, sizeof(ShowPlayersUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnShowPlayersUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowPlayersUI, &ShowPlayersUI_Params, nullptr);
	uFnShowPlayersUI->FunctionFlags |= 0x400;

	return ShowPlayersUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowFriendsInviteUI(uint8_t LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnShowFriendsInviteUI = nullptr;

	if (!uFnShowFriendsInviteUI)
	{
		uFnShowFriendsInviteUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI");
	}

	UOnlineSubsystemSteamworks_execShowFriendsInviteUI_Params ShowFriendsInviteUI_Params;
	memset(&ShowFriendsInviteUI_Params, 0, sizeof(ShowFriendsInviteUI_Params));
	memcpy_s(&ShowFriendsInviteUI_Params.LocalUserNum, sizeof(ShowFriendsInviteUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowFriendsInviteUI_Params.PlayerID, sizeof(ShowFriendsInviteUI_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	uFnShowFriendsInviteUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowFriendsInviteUI, &ShowFriendsInviteUI_Params, nullptr);
	uFnShowFriendsInviteUI->FunctionFlags |= 0x400;

	return ShowFriendsInviteUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowFriendsUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowFriendsUI = nullptr;

	if (!uFnShowFriendsUI)
	{
		uFnShowFriendsUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI");
	}

	UOnlineSubsystemSteamworks_execShowFriendsUI_Params ShowFriendsUI_Params;
	memset(&ShowFriendsUI_Params, 0, sizeof(ShowFriendsUI_Params));
	memcpy_s(&ShowFriendsUI_Params.LocalUserNum, sizeof(ShowFriendsUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnShowFriendsUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowFriendsUI, &ShowFriendsUI_Params, nullptr);
	uFnShowFriendsUI->FunctionFlags |= 0x400;

	return ShowFriendsUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ProfileDataChangedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearProfileDataChangedDelegate(uint8_t LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate)
{
	static UFunction* uFnClearProfileDataChangedDelegate = nullptr;

	if (!uFnClearProfileDataChangedDelegate)
	{
		uFnClearProfileDataChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate");
	}

	UOnlineSubsystemSteamworks_execClearProfileDataChangedDelegate_Params ClearProfileDataChangedDelegate_Params;
	memset(&ClearProfileDataChangedDelegate_Params, 0, sizeof(ClearProfileDataChangedDelegate_Params));
	memcpy_s(&ClearProfileDataChangedDelegate_Params.LocalUserNum, sizeof(ClearProfileDataChangedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearProfileDataChangedDelegate_Params.ProfileDataChangedDelegate, sizeof(ClearProfileDataChangedDelegate_Params.ProfileDataChangedDelegate), &ProfileDataChangedDelegate, sizeof(ProfileDataChangedDelegate));

	this->ProcessEvent(uFnClearProfileDataChangedDelegate, &ClearProfileDataChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ProfileDataChangedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddProfileDataChangedDelegate(uint8_t LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate)
{
	static UFunction* uFnAddProfileDataChangedDelegate = nullptr;

	if (!uFnAddProfileDataChangedDelegate)
	{
		uFnAddProfileDataChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddProfileDataChangedDelegate_Params AddProfileDataChangedDelegate_Params;
	memset(&AddProfileDataChangedDelegate_Params, 0, sizeof(AddProfileDataChangedDelegate_Params));
	memcpy_s(&AddProfileDataChangedDelegate_Params.LocalUserNum, sizeof(AddProfileDataChangedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddProfileDataChangedDelegate_Params.ProfileDataChangedDelegate, sizeof(AddProfileDataChangedDelegate_Params.ProfileDataChangedDelegate), &ProfileDataChangedDelegate, sizeof(ProfileDataChangedDelegate));

	this->ProcessEvent(uFnAddProfileDataChangedDelegate, &AddProfileDataChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnProfileDataChanged()
{
	static UFunction* uFnOnProfileDataChanged = nullptr;

	if (!uFnOnProfileDataChanged)
	{
		uFnOnProfileDataChanged = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged");
	}

	UOnlineSubsystemSteamworks_execOnProfileDataChanged_Params OnProfileDataChanged_Params;
	memset(&OnProfileDataChanged_Params, 0, sizeof(OnProfileDataChanged_Params));

	this->ProcessEvent(uFnOnProfileDataChanged, &OnProfileDataChanged_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        PictureId                      (CPF_Parm)

bool UOnlineSubsystemSteamworks::UnlockGamerPicture(uint8_t LocalUserNum, int32_t PictureId)
{
	static UFunction* uFnUnlockGamerPicture = nullptr;

	if (!uFnUnlockGamerPicture)
	{
		uFnUnlockGamerPicture = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture");
	}

	UOnlineSubsystemSteamworks_execUnlockGamerPicture_Params UnlockGamerPicture_Params;
	memset(&UnlockGamerPicture_Params, 0, sizeof(UnlockGamerPicture_Params));
	memcpy_s(&UnlockGamerPicture_Params.LocalUserNum, sizeof(UnlockGamerPicture_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&UnlockGamerPicture_Params.PictureId, sizeof(UnlockGamerPicture_Params.PictureId), &PictureId, sizeof(PictureId));

	this->ProcessEvent(uFnUnlockGamerPicture, &UnlockGamerPicture_Params, nullptr);

	return UnlockGamerPicture_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         UnlockAchievementCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUnlockAchievementCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate)
{
	static UFunction* uFnClearUnlockAchievementCompleteDelegate = nullptr;

	if (!uFnClearUnlockAchievementCompleteDelegate)
	{
		uFnClearUnlockAchievementCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearUnlockAchievementCompleteDelegate_Params ClearUnlockAchievementCompleteDelegate_Params;
	memset(&ClearUnlockAchievementCompleteDelegate_Params, 0, sizeof(ClearUnlockAchievementCompleteDelegate_Params));
	memcpy_s(&ClearUnlockAchievementCompleteDelegate_Params.LocalUserNum, sizeof(ClearUnlockAchievementCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearUnlockAchievementCompleteDelegate_Params.UnlockAchievementCompleteDelegate, sizeof(ClearUnlockAchievementCompleteDelegate_Params.UnlockAchievementCompleteDelegate), &UnlockAchievementCompleteDelegate, sizeof(UnlockAchievementCompleteDelegate));

	this->ProcessEvent(uFnClearUnlockAchievementCompleteDelegate, &ClearUnlockAchievementCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         UnlockAchievementCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUnlockAchievementCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate)
{
	static UFunction* uFnAddUnlockAchievementCompleteDelegate = nullptr;

	if (!uFnAddUnlockAchievementCompleteDelegate)
	{
		uFnAddUnlockAchievementCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddUnlockAchievementCompleteDelegate_Params AddUnlockAchievementCompleteDelegate_Params;
	memset(&AddUnlockAchievementCompleteDelegate_Params, 0, sizeof(AddUnlockAchievementCompleteDelegate_Params));
	memcpy_s(&AddUnlockAchievementCompleteDelegate_Params.LocalUserNum, sizeof(AddUnlockAchievementCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddUnlockAchievementCompleteDelegate_Params.UnlockAchievementCompleteDelegate, sizeof(AddUnlockAchievementCompleteDelegate_Params.UnlockAchievementCompleteDelegate), &UnlockAchievementCompleteDelegate, sizeof(UnlockAchievementCompleteDelegate));

	this->ProcessEvent(uFnAddUnlockAchievementCompleteDelegate, &AddUnlockAchievementCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnUnlockAchievementComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnUnlockAchievementComplete = nullptr;

	if (!uFnOnUnlockAchievementComplete)
	{
		uFnOnUnlockAchievementComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete");
	}

	UOnlineSubsystemSteamworks_execOnUnlockAchievementComplete_Params OnUnlockAchievementComplete_Params;
	memset(&OnUnlockAchievementComplete_Params, 0, sizeof(OnUnlockAchievementComplete_Params));
	OnUnlockAchievementComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnUnlockAchievementComplete, &OnUnlockAchievementComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        AchievementId                  (CPF_Parm)
// float                          PercentComplete                (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::UnlockAchievement(uint8_t LocalUserNum, int32_t AchievementId, float PercentComplete)
{
	static UFunction* uFnUnlockAchievement = nullptr;

	if (!uFnUnlockAchievement)
	{
		uFnUnlockAchievement = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement");
	}

	UOnlineSubsystemSteamworks_execUnlockAchievement_Params UnlockAchievement_Params;
	memset(&UnlockAchievement_Params, 0, sizeof(UnlockAchievement_Params));
	memcpy_s(&UnlockAchievement_Params.LocalUserNum, sizeof(UnlockAchievement_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&UnlockAchievement_Params.AchievementId, sizeof(UnlockAchievement_Params.AchievementId), &AchievementId, sizeof(AchievementId));
	memcpy_s(&UnlockAchievement_Params.PercentComplete, sizeof(UnlockAchievement_Params.PercentComplete), &PercentComplete, sizeof(PercentComplete));

	uFnUnlockAchievement->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUnlockAchievement, &UnlockAchievement_Params, nullptr);
	uFnUnlockAchievement->FunctionFlags |= 0x400;

	return UnlockAchievement_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateStat
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FName                   StatName                       (CPF_Parm)
// int32_t                        Points                         (CPF_Parm)

bool UOnlineSubsystemSteamworks::UpdateStat(uint8_t LocalUserNum, struct FName StatName, int32_t Points)
{
	static UFunction* uFnUpdateStat = nullptr;

	if (!uFnUpdateStat)
	{
		uFnUpdateStat = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateStat");
	}

	UOnlineSubsystemSteamworks_execUpdateStat_Params UpdateStat_Params;
	memset(&UpdateStat_Params, 0, sizeof(UpdateStat_Params));
	memcpy_s(&UpdateStat_Params.LocalUserNum, sizeof(UpdateStat_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&UpdateStat_Params.StatName, sizeof(UpdateStat_Params.StatName), &StatName, sizeof(StatName));
	memcpy_s(&UpdateStat_Params.Points, sizeof(UpdateStat_Params.Points), &Points, sizeof(Points));

	this->ProcessEvent(uFnUpdateStat, &UpdateStat_Params, nullptr);

	return UpdateStat_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid
// [0x00024001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        DeviceID                       (CPF_Parm)
// int32_t                        SizeNeeded                     (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::IsDeviceValid(int32_t DeviceID, int32_t SizeNeeded)
{
	static UFunction* uFnIsDeviceValid = nullptr;

	if (!uFnIsDeviceValid)
	{
		uFnIsDeviceValid = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid");
	}

	UOnlineSubsystemSteamworks_execIsDeviceValid_Params IsDeviceValid_Params;
	memset(&IsDeviceValid_Params, 0, sizeof(IsDeviceValid_Params));
	memcpy_s(&IsDeviceValid_Params.DeviceID, sizeof(IsDeviceValid_Params.DeviceID), &DeviceID, sizeof(DeviceID));
	memcpy_s(&IsDeviceValid_Params.SizeNeeded, sizeof(IsDeviceValid_Params.SizeNeeded), &SizeNeeded, sizeof(SizeNeeded));

	this->ProcessEvent(uFnIsDeviceValid, &IsDeviceValid_Params, nullptr);

	return IsDeviceValid_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  DeviceName                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

int32_t UOnlineSubsystemSteamworks::GetDeviceSelectionResults(uint8_t LocalUserNum, class FString& DeviceName)
{
	static UFunction* uFnGetDeviceSelectionResults = nullptr;

	if (!uFnGetDeviceSelectionResults)
	{
		uFnGetDeviceSelectionResults = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults");
	}

	UOnlineSubsystemSteamworks_execGetDeviceSelectionResults_Params GetDeviceSelectionResults_Params;
	memset(&GetDeviceSelectionResults_Params, 0, sizeof(GetDeviceSelectionResults_Params));
	memcpy_s(&GetDeviceSelectionResults_Params.LocalUserNum, sizeof(GetDeviceSelectionResults_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&GetDeviceSelectionResults_Params.DeviceName, sizeof(GetDeviceSelectionResults_Params.DeviceName), &DeviceName, sizeof(DeviceName));

	this->ProcessEvent(uFnGetDeviceSelectionResults, &GetDeviceSelectionResults_Params, nullptr);

	memcpy_s(&DeviceName, sizeof(DeviceName), &GetDeviceSelectionResults_Params.DeviceName, sizeof(GetDeviceSelectionResults_Params.DeviceName));

	return GetDeviceSelectionResults_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearDeviceSelectionDoneDelegate(uint8_t LocalUserNum, struct FScriptDelegate DeviceDelegate)
{
	static UFunction* uFnClearDeviceSelectionDoneDelegate = nullptr;

	if (!uFnClearDeviceSelectionDoneDelegate)
	{
		uFnClearDeviceSelectionDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate");
	}

	UOnlineSubsystemSteamworks_execClearDeviceSelectionDoneDelegate_Params ClearDeviceSelectionDoneDelegate_Params;
	memset(&ClearDeviceSelectionDoneDelegate_Params, 0, sizeof(ClearDeviceSelectionDoneDelegate_Params));
	memcpy_s(&ClearDeviceSelectionDoneDelegate_Params.LocalUserNum, sizeof(ClearDeviceSelectionDoneDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearDeviceSelectionDoneDelegate_Params.DeviceDelegate, sizeof(ClearDeviceSelectionDoneDelegate_Params.DeviceDelegate), &DeviceDelegate, sizeof(DeviceDelegate));

	this->ProcessEvent(uFnClearDeviceSelectionDoneDelegate, &ClearDeviceSelectionDoneDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddDeviceSelectionDoneDelegate(uint8_t LocalUserNum, struct FScriptDelegate DeviceDelegate)
{
	static UFunction* uFnAddDeviceSelectionDoneDelegate = nullptr;

	if (!uFnAddDeviceSelectionDoneDelegate)
	{
		uFnAddDeviceSelectionDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate");
	}

	UOnlineSubsystemSteamworks_execAddDeviceSelectionDoneDelegate_Params AddDeviceSelectionDoneDelegate_Params;
	memset(&AddDeviceSelectionDoneDelegate_Params, 0, sizeof(AddDeviceSelectionDoneDelegate_Params));
	memcpy_s(&AddDeviceSelectionDoneDelegate_Params.LocalUserNum, sizeof(AddDeviceSelectionDoneDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddDeviceSelectionDoneDelegate_Params.DeviceDelegate, sizeof(AddDeviceSelectionDoneDelegate_Params.DeviceDelegate), &DeviceDelegate, sizeof(DeviceDelegate));

	this->ProcessEvent(uFnAddDeviceSelectionDoneDelegate, &AddDeviceSelectionDoneDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnDeviceSelectionComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnDeviceSelectionComplete = nullptr;

	if (!uFnOnDeviceSelectionComplete)
	{
		uFnOnDeviceSelectionComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete");
	}

	UOnlineSubsystemSteamworks_execOnDeviceSelectionComplete_Params OnDeviceSelectionComplete_Params;
	memset(&OnDeviceSelectionComplete_Params, 0, sizeof(OnDeviceSelectionComplete_Params));
	OnDeviceSelectionComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnDeviceSelectionComplete, &OnDeviceSelectionComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI
// [0x00024001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        SizeNeeded                     (CPF_Parm)
// bool                           bManageStorage                 (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowDeviceSelectionUI(uint8_t LocalUserNum, int32_t SizeNeeded, bool bManageStorage)
{
	static UFunction* uFnShowDeviceSelectionUI = nullptr;

	if (!uFnShowDeviceSelectionUI)
	{
		uFnShowDeviceSelectionUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI");
	}

	UOnlineSubsystemSteamworks_execShowDeviceSelectionUI_Params ShowDeviceSelectionUI_Params;
	memset(&ShowDeviceSelectionUI_Params, 0, sizeof(ShowDeviceSelectionUI_Params));
	memcpy_s(&ShowDeviceSelectionUI_Params.LocalUserNum, sizeof(ShowDeviceSelectionUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowDeviceSelectionUI_Params.SizeNeeded, sizeof(ShowDeviceSelectionUI_Params.SizeNeeded), &SizeNeeded, sizeof(SizeNeeded));
	ShowDeviceSelectionUI_Params.bManageStorage = bManageStorage;

	this->ProcessEvent(uFnShowDeviceSelectionUI, &ShowDeviceSelectionUI_Params, nullptr);

	return ShowDeviceSelectionUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        CategoryMask                   (CPF_OptionalParm | CPF_Parm)
// int32_t                        OfferId                        (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowContentMarketplaceUI(uint8_t LocalUserNum, int32_t CategoryMask, int32_t OfferId)
{
	static UFunction* uFnShowContentMarketplaceUI = nullptr;

	if (!uFnShowContentMarketplaceUI)
	{
		uFnShowContentMarketplaceUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI");
	}

	UOnlineSubsystemSteamworks_execShowContentMarketplaceUI_Params ShowContentMarketplaceUI_Params;
	memset(&ShowContentMarketplaceUI_Params, 0, sizeof(ShowContentMarketplaceUI_Params));
	memcpy_s(&ShowContentMarketplaceUI_Params.LocalUserNum, sizeof(ShowContentMarketplaceUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowContentMarketplaceUI_Params.CategoryMask, sizeof(ShowContentMarketplaceUI_Params.CategoryMask), &CategoryMask, sizeof(CategoryMask));
	memcpy_s(&ShowContentMarketplaceUI_Params.OfferId, sizeof(ShowContentMarketplaceUI_Params.OfferId), &OfferId, sizeof(OfferId));

	uFnShowContentMarketplaceUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowContentMarketplaceUI, &ShowContentMarketplaceUI_Params, nullptr);
	uFnShowContentMarketplaceUI->FunctionFlags |= 0x400;

	return ShowContentMarketplaceUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  InviteText                     (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowInviteUI(uint8_t LocalUserNum, class FString InviteText)
{
	static UFunction* uFnShowInviteUI = nullptr;

	if (!uFnShowInviteUI)
	{
		uFnShowInviteUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI");
	}

	UOnlineSubsystemSteamworks_execShowInviteUI_Params ShowInviteUI_Params;
	memset(&ShowInviteUI_Params, 0, sizeof(ShowInviteUI_Params));
	memcpy_s(&ShowInviteUI_Params.LocalUserNum, sizeof(ShowInviteUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowInviteUI_Params.InviteText, sizeof(ShowInviteUI_Params.InviteText), &InviteText, sizeof(InviteText));

	uFnShowInviteUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowInviteUI, &ShowInviteUI_Params, nullptr);
	uFnShowInviteUI->FunctionFlags |= 0x400;

	return ShowInviteUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowAchievementsUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowAchievementsUI = nullptr;

	if (!uFnShowAchievementsUI)
	{
		uFnShowAchievementsUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI");
	}

	UOnlineSubsystemSteamworks_execShowAchievementsUI_Params ShowAchievementsUI_Params;
	memset(&ShowAchievementsUI_Params, 0, sizeof(ShowAchievementsUI_Params));
	memcpy_s(&ShowAchievementsUI_Params.LocalUserNum, sizeof(ShowAchievementsUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnShowAchievementsUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowAchievementsUI, &ShowAchievementsUI_Params, nullptr);
	uFnShowAchievementsUI->FunctionFlags |= 0x400;

	return ShowAchievementsUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowMessagesUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowMessagesUI = nullptr;

	if (!uFnShowMessagesUI)
	{
		uFnShowMessagesUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI");
	}

	UOnlineSubsystemSteamworks_execShowMessagesUI_Params ShowMessagesUI_Params;
	memset(&ShowMessagesUI_Params, 0, sizeof(ShowMessagesUI_Params));
	memcpy_s(&ShowMessagesUI_Params.LocalUserNum, sizeof(ShowMessagesUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnShowMessagesUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowMessagesUI, &ShowMessagesUI_Params, nullptr);
	uFnShowMessagesUI->FunctionFlags |= 0x400;

	return ShowMessagesUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            UniqueId                       (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// class FString                  PlayerName                     (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowGamerCardUI(uint8_t LocalUserNum, struct FUniqueNetId UniqueId, class FString PlayerName)
{
	static UFunction* uFnShowGamerCardUI = nullptr;

	if (!uFnShowGamerCardUI)
	{
		uFnShowGamerCardUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI");
	}

	UOnlineSubsystemSteamworks_execShowGamerCardUI_Params ShowGamerCardUI_Params;
	memset(&ShowGamerCardUI_Params, 0, sizeof(ShowGamerCardUI_Params));
	memcpy_s(&ShowGamerCardUI_Params.LocalUserNum, sizeof(ShowGamerCardUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowGamerCardUI_Params.UniqueId, sizeof(ShowGamerCardUI_Params.UniqueId), &UniqueId, sizeof(UniqueId));
	memcpy_s(&ShowGamerCardUI_Params.PlayerName, sizeof(ShowGamerCardUI_Params.PlayerName), &PlayerName, sizeof(PlayerName));

	uFnShowGamerCardUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowGamerCardUI, &ShowGamerCardUI_Params, nullptr);
	uFnShowGamerCardUI->FunctionFlags |= 0x400;

	return ShowGamerCardUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowFeedbackUI(uint8_t LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnShowFeedbackUI = nullptr;

	if (!uFnShowFeedbackUI)
	{
		uFnShowFeedbackUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI");
	}

	UOnlineSubsystemSteamworks_execShowFeedbackUI_Params ShowFeedbackUI_Params;
	memset(&ShowFeedbackUI_Params, 0, sizeof(ShowFeedbackUI_Params));
	memcpy_s(&ShowFeedbackUI_Params.LocalUserNum, sizeof(ShowFeedbackUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowFeedbackUI_Params.PlayerID, sizeof(ShowFeedbackUI_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	uFnShowFeedbackUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowFeedbackUI, &ShowFeedbackUI_Params, nullptr);
	uFnShowFeedbackUI->FunctionFlags |= 0x400;

	return ShowFeedbackUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        MessageIndex                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::DeleteMessage(uint8_t LocalUserNum, int32_t MessageIndex)
{
	static UFunction* uFnDeleteMessage = nullptr;

	if (!uFnDeleteMessage)
	{
		uFnDeleteMessage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage");
	}

	UOnlineSubsystemSteamworks_execDeleteMessage_Params DeleteMessage_Params;
	memset(&DeleteMessage_Params, 0, sizeof(DeleteMessage_Params));
	memcpy_s(&DeleteMessage_Params.LocalUserNum, sizeof(DeleteMessage_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&DeleteMessage_Params.MessageIndex, sizeof(DeleteMessage_Params.MessageIndex), &MessageIndex, sizeof(MessageIndex));

	this->ProcessEvent(uFnDeleteMessage, &DeleteMessage_Params, nullptr);

	return DeleteMessage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::UnmuteAll(uint8_t LocalUserNum)
{
	static UFunction* uFnUnmuteAll = nullptr;

	if (!uFnUnmuteAll)
	{
		uFnUnmuteAll = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll");
	}

	UOnlineSubsystemSteamworks_execUnmuteAll_Params UnmuteAll_Params;
	memset(&UnmuteAll_Params, 0, sizeof(UnmuteAll_Params));
	memcpy_s(&UnmuteAll_Params.LocalUserNum, sizeof(UnmuteAll_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnUnmuteAll, &UnmuteAll_Params, nullptr);

	return UnmuteAll_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAllowFriends                  (CPF_Parm)

bool UOnlineSubsystemSteamworks::MuteAll(uint8_t LocalUserNum, bool bAllowFriends)
{
	static UFunction* uFnMuteAll = nullptr;

	if (!uFnMuteAll)
	{
		uFnMuteAll = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll");
	}

	UOnlineSubsystemSteamworks_execMuteAll_Params MuteAll_Params;
	memset(&MuteAll_Params, 0, sizeof(MuteAll_Params));
	memcpy_s(&MuteAll_Params.LocalUserNum, sizeof(MuteAll_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	MuteAll_Params.bAllowFriends = bAllowFriends;

	this->ProcessEvent(uFnMuteAll, &MuteAll_Params, nullptr);

	return MuteAll_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ClientStatGuid                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::RegisterStatGuid(struct FUniqueNetId PlayerID, class FString& ClientStatGuid)
{
	static UFunction* uFnRegisterStatGuid = nullptr;

	if (!uFnRegisterStatGuid)
	{
		uFnRegisterStatGuid = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid");
	}

	UOnlineSubsystemSteamworks_execRegisterStatGuid_Params RegisterStatGuid_Params;
	memset(&RegisterStatGuid_Params, 0, sizeof(RegisterStatGuid_Params));
	memcpy_s(&RegisterStatGuid_Params.PlayerID, sizeof(RegisterStatGuid_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	memcpy_s(&RegisterStatGuid_Params.ClientStatGuid, sizeof(RegisterStatGuid_Params.ClientStatGuid), &ClientStatGuid, sizeof(ClientStatGuid));

	this->ProcessEvent(uFnRegisterStatGuid, &RegisterStatGuid_Params, nullptr);

	memcpy_s(&ClientStatGuid, sizeof(ClientStatGuid), &RegisterStatGuid_Params.ClientStatGuid, sizeof(RegisterStatGuid_Params.ClientStatGuid));

	return RegisterStatGuid_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UOnlineSubsystemSteamworks::GetClientStatGuid()
{
	static UFunction* uFnGetClientStatGuid = nullptr;

	if (!uFnGetClientStatGuid)
	{
		uFnGetClientStatGuid = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid");
	}

	UOnlineSubsystemSteamworks_execGetClientStatGuid_Params GetClientStatGuid_Params;
	memset(&GetClientStatGuid_Params, 0, sizeof(GetClientStatGuid_Params));

	this->ProcessEvent(uFnGetClientStatGuid, &GetClientStatGuid_Params, nullptr);

	return GetClientStatGuid_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearRegisterHostStatGuidCompleteDelegateDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate)
{
	static UFunction* uFnClearRegisterHostStatGuidCompleteDelegateDelegate = nullptr;

	if (!uFnClearRegisterHostStatGuidCompleteDelegateDelegate)
	{
		uFnClearRegisterHostStatGuidCompleteDelegateDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate");
	}

	UOnlineSubsystemSteamworks_execClearRegisterHostStatGuidCompleteDelegateDelegate_Params ClearRegisterHostStatGuidCompleteDelegateDelegate_Params;
	memset(&ClearRegisterHostStatGuidCompleteDelegateDelegate_Params, 0, sizeof(ClearRegisterHostStatGuidCompleteDelegateDelegate_Params));
	memcpy_s(&ClearRegisterHostStatGuidCompleteDelegateDelegate_Params.RegisterHostStatGuidCompleteDelegate, sizeof(ClearRegisterHostStatGuidCompleteDelegateDelegate_Params.RegisterHostStatGuidCompleteDelegate), &RegisterHostStatGuidCompleteDelegate, sizeof(RegisterHostStatGuidCompleteDelegate));

	this->ProcessEvent(uFnClearRegisterHostStatGuidCompleteDelegateDelegate, &ClearRegisterHostStatGuidCompleteDelegateDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddRegisterHostStatGuidCompleteDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate)
{
	static UFunction* uFnAddRegisterHostStatGuidCompleteDelegate = nullptr;

	if (!uFnAddRegisterHostStatGuidCompleteDelegate)
	{
		uFnAddRegisterHostStatGuidCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddRegisterHostStatGuidCompleteDelegate_Params AddRegisterHostStatGuidCompleteDelegate_Params;
	memset(&AddRegisterHostStatGuidCompleteDelegate_Params, 0, sizeof(AddRegisterHostStatGuidCompleteDelegate_Params));
	memcpy_s(&AddRegisterHostStatGuidCompleteDelegate_Params.RegisterHostStatGuidCompleteDelegate, sizeof(AddRegisterHostStatGuidCompleteDelegate_Params.RegisterHostStatGuidCompleteDelegate), &RegisterHostStatGuidCompleteDelegate, sizeof(RegisterHostStatGuidCompleteDelegate));

	this->ProcessEvent(uFnAddRegisterHostStatGuidCompleteDelegate, &AddRegisterHostStatGuidCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnRegisterHostStatGuidComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnRegisterHostStatGuidComplete = nullptr;

	if (!uFnOnRegisterHostStatGuidComplete)
	{
		uFnOnRegisterHostStatGuidComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete");
	}

	UOnlineSubsystemSteamworks_execOnRegisterHostStatGuidComplete_Params OnRegisterHostStatGuidComplete_Params;
	memset(&OnRegisterHostStatGuidComplete_Params, 0, sizeof(OnRegisterHostStatGuidComplete_Params));
	OnRegisterHostStatGuidComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnRegisterHostStatGuidComplete, &OnRegisterHostStatGuidComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  HostStatGuid                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::RegisterHostStatGuid(class FString& HostStatGuid)
{
	static UFunction* uFnRegisterHostStatGuid = nullptr;

	if (!uFnRegisterHostStatGuid)
	{
		uFnRegisterHostStatGuid = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid");
	}

	UOnlineSubsystemSteamworks_execRegisterHostStatGuid_Params RegisterHostStatGuid_Params;
	memset(&RegisterHostStatGuid_Params, 0, sizeof(RegisterHostStatGuid_Params));
	memcpy_s(&RegisterHostStatGuid_Params.HostStatGuid, sizeof(RegisterHostStatGuid_Params.HostStatGuid), &HostStatGuid, sizeof(HostStatGuid));

	this->ProcessEvent(uFnRegisterHostStatGuid, &RegisterHostStatGuid_Params, nullptr);

	memcpy_s(&HostStatGuid, sizeof(HostStatGuid), &RegisterHostStatGuid_Params.HostStatGuid, sizeof(RegisterHostStatGuid_Params.HostStatGuid));

	return RegisterHostStatGuid_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UOnlineSubsystemSteamworks::GetHostStatGuid()
{
	static UFunction* uFnGetHostStatGuid = nullptr;

	if (!uFnGetHostStatGuid)
	{
		uFnGetHostStatGuid = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid");
	}

	UOnlineSubsystemSteamworks_execGetHostStatGuid_Params GetHostStatGuid_Params;
	memset(&GetHostStatGuid_Params, 0, sizeof(GetHostStatGuid_Params));

	this->ProcessEvent(uFnGetHostStatGuid, &GetHostStatGuid_Params, nullptr);

	return GetHostStatGuid_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         MessageDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendMessageReceivedDelegate(uint8_t LocalUserNum, struct FScriptDelegate MessageDelegate)
{
	static UFunction* uFnClearFriendMessageReceivedDelegate = nullptr;

	if (!uFnClearFriendMessageReceivedDelegate)
	{
		uFnClearFriendMessageReceivedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate");
	}

	UOnlineSubsystemSteamworks_execClearFriendMessageReceivedDelegate_Params ClearFriendMessageReceivedDelegate_Params;
	memset(&ClearFriendMessageReceivedDelegate_Params, 0, sizeof(ClearFriendMessageReceivedDelegate_Params));
	memcpy_s(&ClearFriendMessageReceivedDelegate_Params.LocalUserNum, sizeof(ClearFriendMessageReceivedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearFriendMessageReceivedDelegate_Params.MessageDelegate, sizeof(ClearFriendMessageReceivedDelegate_Params.MessageDelegate), &MessageDelegate, sizeof(MessageDelegate));

	this->ProcessEvent(uFnClearFriendMessageReceivedDelegate, &ClearFriendMessageReceivedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         MessageDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendMessageReceivedDelegate(uint8_t LocalUserNum, struct FScriptDelegate MessageDelegate)
{
	static UFunction* uFnAddFriendMessageReceivedDelegate = nullptr;

	if (!uFnAddFriendMessageReceivedDelegate)
	{
		uFnAddFriendMessageReceivedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddFriendMessageReceivedDelegate_Params AddFriendMessageReceivedDelegate_Params;
	memset(&AddFriendMessageReceivedDelegate_Params, 0, sizeof(AddFriendMessageReceivedDelegate_Params));
	memcpy_s(&AddFriendMessageReceivedDelegate_Params.LocalUserNum, sizeof(AddFriendMessageReceivedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddFriendMessageReceivedDelegate_Params.MessageDelegate, sizeof(AddFriendMessageReceivedDelegate_Params.MessageDelegate), &MessageDelegate, sizeof(MessageDelegate));

	this->ProcessEvent(uFnAddFriendMessageReceivedDelegate, &AddFriendMessageReceivedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            SendingPlayer                  (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SendingNick                    (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnFriendMessageReceived(uint8_t LocalUserNum, struct FUniqueNetId SendingPlayer, class FString SendingNick, class FString Message)
{
	static UFunction* uFnOnFriendMessageReceived = nullptr;

	if (!uFnOnFriendMessageReceived)
	{
		uFnOnFriendMessageReceived = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived");
	}

	UOnlineSubsystemSteamworks_execOnFriendMessageReceived_Params OnFriendMessageReceived_Params;
	memset(&OnFriendMessageReceived_Params, 0, sizeof(OnFriendMessageReceived_Params));
	memcpy_s(&OnFriendMessageReceived_Params.LocalUserNum, sizeof(OnFriendMessageReceived_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OnFriendMessageReceived_Params.SendingPlayer, sizeof(OnFriendMessageReceived_Params.SendingPlayer), &SendingPlayer, sizeof(SendingPlayer));
	memcpy_s(&OnFriendMessageReceived_Params.SendingNick, sizeof(OnFriendMessageReceived_Params.SendingNick), &SendingNick, sizeof(SendingNick));
	memcpy_s(&OnFriendMessageReceived_Params.Message, sizeof(OnFriendMessageReceived_Params.Message), &Message, sizeof(Message));

	this->ProcessEvent(uFnOnFriendMessageReceived, &OnFriendMessageReceived_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages
// [0x00420003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FOnlineFriendMessage> FriendMessages                 (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::GetFriendMessages(uint8_t LocalUserNum, TArray<struct FOnlineFriendMessage>& FriendMessages)
{
	static UFunction* uFnGetFriendMessages = nullptr;

	if (!uFnGetFriendMessages)
	{
		uFnGetFriendMessages = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages");
	}

	UOnlineSubsystemSteamworks_execGetFriendMessages_Params GetFriendMessages_Params;
	memset(&GetFriendMessages_Params, 0, sizeof(GetFriendMessages_Params));
	memcpy_s(&GetFriendMessages_Params.LocalUserNum, sizeof(GetFriendMessages_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&GetFriendMessages_Params.FriendMessages, sizeof(GetFriendMessages_Params.FriendMessages), &FriendMessages, sizeof(FriendMessages));

	this->ProcessEvent(uFnGetFriendMessages, &GetFriendMessages_Params, nullptr);

	memcpy_s(&FriendMessages, sizeof(FriendMessages), &GetFriendMessages_Params.FriendMessages, sizeof(GetFriendMessages_Params.FriendMessages));
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearJoinFriendGameCompleteDelegate(struct FScriptDelegate JoinFriendGameCompleteDelegate)
{
	static UFunction* uFnClearJoinFriendGameCompleteDelegate = nullptr;

	if (!uFnClearJoinFriendGameCompleteDelegate)
	{
		uFnClearJoinFriendGameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearJoinFriendGameCompleteDelegate_Params ClearJoinFriendGameCompleteDelegate_Params;
	memset(&ClearJoinFriendGameCompleteDelegate_Params, 0, sizeof(ClearJoinFriendGameCompleteDelegate_Params));
	memcpy_s(&ClearJoinFriendGameCompleteDelegate_Params.JoinFriendGameCompleteDelegate, sizeof(ClearJoinFriendGameCompleteDelegate_Params.JoinFriendGameCompleteDelegate), &JoinFriendGameCompleteDelegate, sizeof(JoinFriendGameCompleteDelegate));

	this->ProcessEvent(uFnClearJoinFriendGameCompleteDelegate, &ClearJoinFriendGameCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddJoinFriendGameCompleteDelegate(struct FScriptDelegate JoinFriendGameCompleteDelegate)
{
	static UFunction* uFnAddJoinFriendGameCompleteDelegate = nullptr;

	if (!uFnAddJoinFriendGameCompleteDelegate)
	{
		uFnAddJoinFriendGameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddJoinFriendGameCompleteDelegate_Params AddJoinFriendGameCompleteDelegate_Params;
	memset(&AddJoinFriendGameCompleteDelegate_Params, 0, sizeof(AddJoinFriendGameCompleteDelegate_Params));
	memcpy_s(&AddJoinFriendGameCompleteDelegate_Params.JoinFriendGameCompleteDelegate, sizeof(AddJoinFriendGameCompleteDelegate_Params.JoinFriendGameCompleteDelegate), &JoinFriendGameCompleteDelegate, sizeof(JoinFriendGameCompleteDelegate));

	this->ProcessEvent(uFnAddJoinFriendGameCompleteDelegate, &AddJoinFriendGameCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnJoinFriendGameComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnJoinFriendGameComplete = nullptr;

	if (!uFnOnJoinFriendGameComplete)
	{
		uFnOnJoinFriendGameComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete");
	}

	UOnlineSubsystemSteamworks_execOnJoinFriendGameComplete_Params OnJoinFriendGameComplete_Params;
	memset(&OnJoinFriendGameComplete_Params, 0, sizeof(OnJoinFriendGameComplete_Params));
	OnJoinFriendGameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnJoinFriendGameComplete, &OnJoinFriendGameComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            Friend                         (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::JoinFriendGame(uint8_t LocalUserNum, struct FUniqueNetId Friend)
{
	static UFunction* uFnJoinFriendGame = nullptr;

	if (!uFnJoinFriendGame)
	{
		uFnJoinFriendGame = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame");
	}

	UOnlineSubsystemSteamworks_execJoinFriendGame_Params JoinFriendGame_Params;
	memset(&JoinFriendGame_Params, 0, sizeof(JoinFriendGame_Params));
	memcpy_s(&JoinFriendGame_Params.LocalUserNum, sizeof(JoinFriendGame_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&JoinFriendGame_Params.Friend, sizeof(JoinFriendGame_Params.Friend), &Friend, sizeof(Friend));

	uFnJoinFriendGame->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnJoinFriendGame, &JoinFriendGame_Params, nullptr);
	uFnJoinFriendGame->FunctionFlags |= 0x400;

	return JoinFriendGame_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReceivedGameInviteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate)
{
	static UFunction* uFnClearReceivedGameInviteDelegate = nullptr;

	if (!uFnClearReceivedGameInviteDelegate)
	{
		uFnClearReceivedGameInviteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReceivedGameInviteDelegate_Params ClearReceivedGameInviteDelegate_Params;
	memset(&ClearReceivedGameInviteDelegate_Params, 0, sizeof(ClearReceivedGameInviteDelegate_Params));
	memcpy_s(&ClearReceivedGameInviteDelegate_Params.LocalUserNum, sizeof(ClearReceivedGameInviteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearReceivedGameInviteDelegate_Params.ReceivedGameInviteDelegate, sizeof(ClearReceivedGameInviteDelegate_Params.ReceivedGameInviteDelegate), &ReceivedGameInviteDelegate, sizeof(ReceivedGameInviteDelegate));

	this->ProcessEvent(uFnClearReceivedGameInviteDelegate, &ClearReceivedGameInviteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReceivedGameInviteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate)
{
	static UFunction* uFnAddReceivedGameInviteDelegate = nullptr;

	if (!uFnAddReceivedGameInviteDelegate)
	{
		uFnAddReceivedGameInviteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReceivedGameInviteDelegate_Params AddReceivedGameInviteDelegate_Params;
	memset(&AddReceivedGameInviteDelegate_Params, 0, sizeof(AddReceivedGameInviteDelegate_Params));
	memcpy_s(&AddReceivedGameInviteDelegate_Params.LocalUserNum, sizeof(AddReceivedGameInviteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddReceivedGameInviteDelegate_Params.ReceivedGameInviteDelegate, sizeof(AddReceivedGameInviteDelegate_Params.ReceivedGameInviteDelegate), &ReceivedGameInviteDelegate, sizeof(ReceivedGameInviteDelegate));

	this->ProcessEvent(uFnAddReceivedGameInviteDelegate, &AddReceivedGameInviteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  InviterName                    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReceivedGameInvite(uint8_t LocalUserNum, class FString InviterName)
{
	static UFunction* uFnOnReceivedGameInvite = nullptr;

	if (!uFnOnReceivedGameInvite)
	{
		uFnOnReceivedGameInvite = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite");
	}

	UOnlineSubsystemSteamworks_execOnReceivedGameInvite_Params OnReceivedGameInvite_Params;
	memset(&OnReceivedGameInvite_Params, 0, sizeof(OnReceivedGameInvite_Params));
	memcpy_s(&OnReceivedGameInvite_Params.LocalUserNum, sizeof(OnReceivedGameInvite_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OnReceivedGameInvite_Params.InviterName, sizeof(OnReceivedGameInvite_Params.InviterName), &InviterName, sizeof(InviterName));

	this->ProcessEvent(uFnOnReceivedGameInvite, &OnReceivedGameInvite_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FUniqueNetId>    Friends                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Text                           (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::SendGameInviteToFriends(uint8_t LocalUserNum, TArray<struct FUniqueNetId> Friends, class FString Text)
{
	static UFunction* uFnSendGameInviteToFriends = nullptr;

	if (!uFnSendGameInviteToFriends)
	{
		uFnSendGameInviteToFriends = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends");
	}

	UOnlineSubsystemSteamworks_execSendGameInviteToFriends_Params SendGameInviteToFriends_Params;
	memset(&SendGameInviteToFriends_Params, 0, sizeof(SendGameInviteToFriends_Params));
	memcpy_s(&SendGameInviteToFriends_Params.LocalUserNum, sizeof(SendGameInviteToFriends_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&SendGameInviteToFriends_Params.Friends, sizeof(SendGameInviteToFriends_Params.Friends), &Friends, sizeof(Friends));
	memcpy_s(&SendGameInviteToFriends_Params.Text, sizeof(SendGameInviteToFriends_Params.Text), &Text, sizeof(Text));

	uFnSendGameInviteToFriends->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSendGameInviteToFriends, &SendGameInviteToFriends_Params, nullptr);
	uFnSendGameInviteToFriends->FunctionFlags |= 0x400;

	return SendGameInviteToFriends_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            Friend                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Text                           (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::SendGameInviteToFriend(uint8_t LocalUserNum, struct FUniqueNetId Friend, class FString Text)
{
	static UFunction* uFnSendGameInviteToFriend = nullptr;

	if (!uFnSendGameInviteToFriend)
	{
		uFnSendGameInviteToFriend = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend");
	}

	UOnlineSubsystemSteamworks_execSendGameInviteToFriend_Params SendGameInviteToFriend_Params;
	memset(&SendGameInviteToFriend_Params, 0, sizeof(SendGameInviteToFriend_Params));
	memcpy_s(&SendGameInviteToFriend_Params.LocalUserNum, sizeof(SendGameInviteToFriend_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&SendGameInviteToFriend_Params.Friend, sizeof(SendGameInviteToFriend_Params.Friend), &Friend, sizeof(Friend));
	memcpy_s(&SendGameInviteToFriend_Params.Text, sizeof(SendGameInviteToFriend_Params.Text), &Text, sizeof(Text));

	uFnSendGameInviteToFriend->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSendGameInviteToFriend, &SendGameInviteToFriend_Params, nullptr);
	uFnSendGameInviteToFriend->FunctionFlags |= 0x400;

	return SendGameInviteToFriend_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            Friend                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::SendMessageToFriendW(uint8_t LocalUserNum, struct FUniqueNetId Friend, class FString Message)
{
	static UFunction* uFnSendMessageToFriendW = nullptr;

	if (!uFnSendMessageToFriendW)
	{
		uFnSendMessageToFriendW = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend");
	}

	UOnlineSubsystemSteamworks_execSendMessageToFriendW_Params SendMessageToFriendW_Params;
	memset(&SendMessageToFriendW_Params, 0, sizeof(SendMessageToFriendW_Params));
	memcpy_s(&SendMessageToFriendW_Params.LocalUserNum, sizeof(SendMessageToFriendW_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&SendMessageToFriendW_Params.Friend, sizeof(SendMessageToFriendW_Params.Friend), &Friend, sizeof(Friend));
	memcpy_s(&SendMessageToFriendW_Params.Message, sizeof(SendMessageToFriendW_Params.Message), &Message, sizeof(Message));

	uFnSendMessageToFriendW->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSendMessageToFriendW, &SendMessageToFriendW_Params, nullptr);
	uFnSendMessageToFriendW->FunctionFlags |= 0x400;

	return SendMessageToFriendW_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteCanceledDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendInviteCanceledDelegate(uint8_t LocalUserNum, struct FScriptDelegate InviteDelegate)
{
	static UFunction* uFnClearFriendInviteCanceledDelegate = nullptr;

	if (!uFnClearFriendInviteCanceledDelegate)
	{
		uFnClearFriendInviteCanceledDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteCanceledDelegate");
	}

	UOnlineSubsystemSteamworks_execClearFriendInviteCanceledDelegate_Params ClearFriendInviteCanceledDelegate_Params;
	memset(&ClearFriendInviteCanceledDelegate_Params, 0, sizeof(ClearFriendInviteCanceledDelegate_Params));
	memcpy_s(&ClearFriendInviteCanceledDelegate_Params.LocalUserNum, sizeof(ClearFriendInviteCanceledDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearFriendInviteCanceledDelegate_Params.InviteDelegate, sizeof(ClearFriendInviteCanceledDelegate_Params.InviteDelegate), &InviteDelegate, sizeof(InviteDelegate));

	this->ProcessEvent(uFnClearFriendInviteCanceledDelegate, &ClearFriendInviteCanceledDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteCanceledDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendInviteCanceledDelegate(uint8_t LocalUserNum, struct FScriptDelegate InviteDelegate)
{
	static UFunction* uFnAddFriendInviteCanceledDelegate = nullptr;

	if (!uFnAddFriendInviteCanceledDelegate)
	{
		uFnAddFriendInviteCanceledDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteCanceledDelegate");
	}

	UOnlineSubsystemSteamworks_execAddFriendInviteCanceledDelegate_Params AddFriendInviteCanceledDelegate_Params;
	memset(&AddFriendInviteCanceledDelegate_Params, 0, sizeof(AddFriendInviteCanceledDelegate_Params));
	memcpy_s(&AddFriendInviteCanceledDelegate_Params.LocalUserNum, sizeof(AddFriendInviteCanceledDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddFriendInviteCanceledDelegate_Params.InviteDelegate, sizeof(AddFriendInviteCanceledDelegate_Params.InviteDelegate), &InviteDelegate, sizeof(InviteDelegate));

	this->ProcessEvent(uFnAddFriendInviteCanceledDelegate, &AddFriendInviteCanceledDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteCanceled
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            CanceledUserId                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnFriendInviteCanceled(uint8_t LocalUserNum, struct FUniqueNetId CanceledUserId)
{
	static UFunction* uFnOnFriendInviteCanceled = nullptr;

	if (!uFnOnFriendInviteCanceled)
	{
		uFnOnFriendInviteCanceled = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteCanceled");
	}

	UOnlineSubsystemSteamworks_execOnFriendInviteCanceled_Params OnFriendInviteCanceled_Params;
	memset(&OnFriendInviteCanceled_Params, 0, sizeof(OnFriendInviteCanceled_Params));
	memcpy_s(&OnFriendInviteCanceled_Params.LocalUserNum, sizeof(OnFriendInviteCanceled_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OnFriendInviteCanceled_Params.CanceledUserId, sizeof(OnFriendInviteCanceled_Params.CanceledUserId), &CanceledUserId, sizeof(CanceledUserId));

	this->ProcessEvent(uFnOnFriendInviteCanceled, &OnFriendInviteCanceled_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendInviteReceivedDelegate(uint8_t LocalUserNum, struct FScriptDelegate InviteDelegate)
{
	static UFunction* uFnClearFriendInviteReceivedDelegate = nullptr;

	if (!uFnClearFriendInviteReceivedDelegate)
	{
		uFnClearFriendInviteReceivedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate");
	}

	UOnlineSubsystemSteamworks_execClearFriendInviteReceivedDelegate_Params ClearFriendInviteReceivedDelegate_Params;
	memset(&ClearFriendInviteReceivedDelegate_Params, 0, sizeof(ClearFriendInviteReceivedDelegate_Params));
	memcpy_s(&ClearFriendInviteReceivedDelegate_Params.LocalUserNum, sizeof(ClearFriendInviteReceivedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearFriendInviteReceivedDelegate_Params.InviteDelegate, sizeof(ClearFriendInviteReceivedDelegate_Params.InviteDelegate), &InviteDelegate, sizeof(InviteDelegate));

	this->ProcessEvent(uFnClearFriendInviteReceivedDelegate, &ClearFriendInviteReceivedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendInviteReceivedDelegate(uint8_t LocalUserNum, struct FScriptDelegate InviteDelegate)
{
	static UFunction* uFnAddFriendInviteReceivedDelegate = nullptr;

	if (!uFnAddFriendInviteReceivedDelegate)
	{
		uFnAddFriendInviteReceivedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddFriendInviteReceivedDelegate_Params AddFriendInviteReceivedDelegate_Params;
	memset(&AddFriendInviteReceivedDelegate_Params, 0, sizeof(AddFriendInviteReceivedDelegate_Params));
	memcpy_s(&AddFriendInviteReceivedDelegate_Params.LocalUserNum, sizeof(AddFriendInviteReceivedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddFriendInviteReceivedDelegate_Params.InviteDelegate, sizeof(AddFriendInviteReceivedDelegate_Params.InviteDelegate), &InviteDelegate, sizeof(InviteDelegate));

	this->ProcessEvent(uFnAddFriendInviteReceivedDelegate, &AddFriendInviteReceivedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            RequestingPlayer               (CPF_Parm | CPF_NeedCtorLink)
// class FString                  RequestingNick                 (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnFriendInviteReceived(uint8_t LocalUserNum, struct FUniqueNetId RequestingPlayer, class FString RequestingNick, class FString Message)
{
	static UFunction* uFnOnFriendInviteReceived = nullptr;

	if (!uFnOnFriendInviteReceived)
	{
		uFnOnFriendInviteReceived = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived");
	}

	UOnlineSubsystemSteamworks_execOnFriendInviteReceived_Params OnFriendInviteReceived_Params;
	memset(&OnFriendInviteReceived_Params, 0, sizeof(OnFriendInviteReceived_Params));
	memcpy_s(&OnFriendInviteReceived_Params.LocalUserNum, sizeof(OnFriendInviteReceived_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OnFriendInviteReceived_Params.RequestingPlayer, sizeof(OnFriendInviteReceived_Params.RequestingPlayer), &RequestingPlayer, sizeof(RequestingPlayer));
	memcpy_s(&OnFriendInviteReceived_Params.RequestingNick, sizeof(OnFriendInviteReceived_Params.RequestingNick), &RequestingNick, sizeof(RequestingNick));
	memcpy_s(&OnFriendInviteReceived_Params.Message, sizeof(OnFriendInviteReceived_Params.Message), &Message, sizeof(Message));

	this->ProcessEvent(uFnOnFriendInviteReceived, &OnFriendInviteReceived_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            RequestingPlayer               (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::DenyFriendInvite(uint8_t LocalUserNum, struct FUniqueNetId RequestingPlayer)
{
	static UFunction* uFnDenyFriendInvite = nullptr;

	if (!uFnDenyFriendInvite)
	{
		uFnDenyFriendInvite = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite");
	}

	UOnlineSubsystemSteamworks_execDenyFriendInvite_Params DenyFriendInvite_Params;
	memset(&DenyFriendInvite_Params, 0, sizeof(DenyFriendInvite_Params));
	memcpy_s(&DenyFriendInvite_Params.LocalUserNum, sizeof(DenyFriendInvite_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&DenyFriendInvite_Params.RequestingPlayer, sizeof(DenyFriendInvite_Params.RequestingPlayer), &RequestingPlayer, sizeof(RequestingPlayer));

	uFnDenyFriendInvite->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDenyFriendInvite, &DenyFriendInvite_Params, nullptr);
	uFnDenyFriendInvite->FunctionFlags |= 0x400;

	return DenyFriendInvite_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDenyFriendInviteCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearDenyFriendInviteCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnClearDenyFriendInviteCompleteDelegate = nullptr;

	if (!uFnClearDenyFriendInviteCompleteDelegate)
	{
		uFnClearDenyFriendInviteCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDenyFriendInviteCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearDenyFriendInviteCompleteDelegate_Params ClearDenyFriendInviteCompleteDelegate_Params;
	memset(&ClearDenyFriendInviteCompleteDelegate_Params, 0, sizeof(ClearDenyFriendInviteCompleteDelegate_Params));
	memcpy_s(&ClearDenyFriendInviteCompleteDelegate_Params.LocalUserNum, sizeof(ClearDenyFriendInviteCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearDenyFriendInviteCompleteDelegate_Params.FriendDelegate, sizeof(ClearDenyFriendInviteCompleteDelegate_Params.FriendDelegate), &FriendDelegate, sizeof(FriendDelegate));

	this->ProcessEvent(uFnClearDenyFriendInviteCompleteDelegate, &ClearDenyFriendInviteCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDenyFriendInviteCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddDenyFriendInviteCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnAddDenyFriendInviteCompleteDelegate = nullptr;

	if (!uFnAddDenyFriendInviteCompleteDelegate)
	{
		uFnAddDenyFriendInviteCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDenyFriendInviteCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddDenyFriendInviteCompleteDelegate_Params AddDenyFriendInviteCompleteDelegate_Params;
	memset(&AddDenyFriendInviteCompleteDelegate_Params, 0, sizeof(AddDenyFriendInviteCompleteDelegate_Params));
	memcpy_s(&AddDenyFriendInviteCompleteDelegate_Params.LocalUserNum, sizeof(AddDenyFriendInviteCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddDenyFriendInviteCompleteDelegate_Params.FriendDelegate, sizeof(AddDenyFriendInviteCompleteDelegate_Params.FriendDelegate), &FriendDelegate, sizeof(FriendDelegate));

	this->ProcessEvent(uFnAddDenyFriendInviteCompleteDelegate, &AddDenyFriendInviteCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDenyFriendInviteComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            FriendId                       (CPF_Parm | CPF_NeedCtorLink)
// class UError*                  Error                          (CPF_Const | CPF_Parm)

void UOnlineSubsystemSteamworks::OnDenyFriendInviteComplete(struct FUniqueNetId FriendId, class UError* Error)
{
	static UFunction* uFnOnDenyFriendInviteComplete = nullptr;

	if (!uFnOnDenyFriendInviteComplete)
	{
		uFnOnDenyFriendInviteComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDenyFriendInviteComplete");
	}

	UOnlineSubsystemSteamworks_execOnDenyFriendInviteComplete_Params OnDenyFriendInviteComplete_Params;
	memset(&OnDenyFriendInviteComplete_Params, 0, sizeof(OnDenyFriendInviteComplete_Params));
	memcpy_s(&OnDenyFriendInviteComplete_Params.FriendId, sizeof(OnDenyFriendInviteComplete_Params.FriendId), &FriendId, sizeof(FriendId));
	memcpy_s(&OnDenyFriendInviteComplete_Params.Error, sizeof(OnDenyFriendInviteComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnDenyFriendInviteComplete, &OnDenyFriendInviteComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            RequestingPlayer               (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::AcceptFriendInvite(uint8_t LocalUserNum, struct FUniqueNetId RequestingPlayer)
{
	static UFunction* uFnAcceptFriendInvite = nullptr;

	if (!uFnAcceptFriendInvite)
	{
		uFnAcceptFriendInvite = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite");
	}

	UOnlineSubsystemSteamworks_execAcceptFriendInvite_Params AcceptFriendInvite_Params;
	memset(&AcceptFriendInvite_Params, 0, sizeof(AcceptFriendInvite_Params));
	memcpy_s(&AcceptFriendInvite_Params.LocalUserNum, sizeof(AcceptFriendInvite_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AcceptFriendInvite_Params.RequestingPlayer, sizeof(AcceptFriendInvite_Params.RequestingPlayer), &RequestingPlayer, sizeof(RequestingPlayer));

	uFnAcceptFriendInvite->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAcceptFriendInvite, &AcceptFriendInvite_Params, nullptr);
	uFnAcceptFriendInvite->FunctionFlags |= 0x400;

	return AcceptFriendInvite_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAcceptFriendInviteCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearAcceptFriendInviteCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnClearAcceptFriendInviteCompleteDelegate = nullptr;

	if (!uFnClearAcceptFriendInviteCompleteDelegate)
	{
		uFnClearAcceptFriendInviteCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAcceptFriendInviteCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearAcceptFriendInviteCompleteDelegate_Params ClearAcceptFriendInviteCompleteDelegate_Params;
	memset(&ClearAcceptFriendInviteCompleteDelegate_Params, 0, sizeof(ClearAcceptFriendInviteCompleteDelegate_Params));
	memcpy_s(&ClearAcceptFriendInviteCompleteDelegate_Params.LocalUserNum, sizeof(ClearAcceptFriendInviteCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearAcceptFriendInviteCompleteDelegate_Params.FriendDelegate, sizeof(ClearAcceptFriendInviteCompleteDelegate_Params.FriendDelegate), &FriendDelegate, sizeof(FriendDelegate));

	this->ProcessEvent(uFnClearAcceptFriendInviteCompleteDelegate, &ClearAcceptFriendInviteCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAcceptFriendInviteCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddAcceptFriendInviteCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnAddAcceptFriendInviteCompleteDelegate = nullptr;

	if (!uFnAddAcceptFriendInviteCompleteDelegate)
	{
		uFnAddAcceptFriendInviteCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAcceptFriendInviteCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddAcceptFriendInviteCompleteDelegate_Params AddAcceptFriendInviteCompleteDelegate_Params;
	memset(&AddAcceptFriendInviteCompleteDelegate_Params, 0, sizeof(AddAcceptFriendInviteCompleteDelegate_Params));
	memcpy_s(&AddAcceptFriendInviteCompleteDelegate_Params.LocalUserNum, sizeof(AddAcceptFriendInviteCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddAcceptFriendInviteCompleteDelegate_Params.FriendDelegate, sizeof(AddAcceptFriendInviteCompleteDelegate_Params.FriendDelegate), &FriendDelegate, sizeof(FriendDelegate));

	this->ProcessEvent(uFnAddAcceptFriendInviteCompleteDelegate, &AddAcceptFriendInviteCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAcceptFriendInviteComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            FriendId                       (CPF_Parm | CPF_NeedCtorLink)
// class UError*                  Error                          (CPF_Const | CPF_Parm)

void UOnlineSubsystemSteamworks::OnAcceptFriendInviteComplete(struct FUniqueNetId FriendId, class UError* Error)
{
	static UFunction* uFnOnAcceptFriendInviteComplete = nullptr;

	if (!uFnOnAcceptFriendInviteComplete)
	{
		uFnOnAcceptFriendInviteComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAcceptFriendInviteComplete");
	}

	UOnlineSubsystemSteamworks_execOnAcceptFriendInviteComplete_Params OnAcceptFriendInviteComplete_Params;
	memset(&OnAcceptFriendInviteComplete_Params, 0, sizeof(OnAcceptFriendInviteComplete_Params));
	memcpy_s(&OnAcceptFriendInviteComplete_Params.FriendId, sizeof(OnAcceptFriendInviteComplete_Params.FriendId), &FriendId, sizeof(FriendId));
	memcpy_s(&OnAcceptFriendInviteComplete_Params.Error, sizeof(OnAcceptFriendInviteComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnAcceptFriendInviteComplete, &OnAcceptFriendInviteComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            FormerFriend                   (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::RemoveFriend(uint8_t LocalUserNum, struct FUniqueNetId FormerFriend)
{
	static UFunction* uFnRemoveFriend = nullptr;

	if (!uFnRemoveFriend)
	{
		uFnRemoveFriend = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend");
	}

	UOnlineSubsystemSteamworks_execRemoveFriend_Params RemoveFriend_Params;
	memset(&RemoveFriend_Params, 0, sizeof(RemoveFriend_Params));
	memcpy_s(&RemoveFriend_Params.LocalUserNum, sizeof(RemoveFriend_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&RemoveFriend_Params.FormerFriend, sizeof(RemoveFriend_Params.FormerFriend), &FormerFriend, sizeof(FormerFriend));

	uFnRemoveFriend->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRemoveFriend, &RemoveFriend_Params, nullptr);
	uFnRemoveFriend->FunctionFlags |= 0x400;

	return RemoveFriend_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRemoveFriendCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RemoveFriendDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearRemoveFriendCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RemoveFriendDelegate)
{
	static UFunction* uFnClearRemoveFriendCompleteDelegate = nullptr;

	if (!uFnClearRemoveFriendCompleteDelegate)
	{
		uFnClearRemoveFriendCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRemoveFriendCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearRemoveFriendCompleteDelegate_Params ClearRemoveFriendCompleteDelegate_Params;
	memset(&ClearRemoveFriendCompleteDelegate_Params, 0, sizeof(ClearRemoveFriendCompleteDelegate_Params));
	memcpy_s(&ClearRemoveFriendCompleteDelegate_Params.LocalUserNum, sizeof(ClearRemoveFriendCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearRemoveFriendCompleteDelegate_Params.RemoveFriendDelegate, sizeof(ClearRemoveFriendCompleteDelegate_Params.RemoveFriendDelegate), &RemoveFriendDelegate, sizeof(RemoveFriendDelegate));

	this->ProcessEvent(uFnClearRemoveFriendCompleteDelegate, &ClearRemoveFriendCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRemoveFriendCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RemoveFriendDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddRemoveFriendCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RemoveFriendDelegate)
{
	static UFunction* uFnAddRemoveFriendCompleteDelegate = nullptr;

	if (!uFnAddRemoveFriendCompleteDelegate)
	{
		uFnAddRemoveFriendCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRemoveFriendCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddRemoveFriendCompleteDelegate_Params AddRemoveFriendCompleteDelegate_Params;
	memset(&AddRemoveFriendCompleteDelegate_Params, 0, sizeof(AddRemoveFriendCompleteDelegate_Params));
	memcpy_s(&AddRemoveFriendCompleteDelegate_Params.LocalUserNum, sizeof(AddRemoveFriendCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddRemoveFriendCompleteDelegate_Params.RemoveFriendDelegate, sizeof(AddRemoveFriendCompleteDelegate_Params.RemoveFriendDelegate), &RemoveFriendDelegate, sizeof(RemoveFriendDelegate));

	this->ProcessEvent(uFnAddRemoveFriendCompleteDelegate, &AddRemoveFriendCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRemoveFriendComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FUniqueNetId            RemovedID                      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnRemoveFriendComplete(bool bWasSuccessful, struct FUniqueNetId RemovedID)
{
	static UFunction* uFnOnRemoveFriendComplete = nullptr;

	if (!uFnOnRemoveFriendComplete)
	{
		uFnOnRemoveFriendComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRemoveFriendComplete");
	}

	UOnlineSubsystemSteamworks_execOnRemoveFriendComplete_Params OnRemoveFriendComplete_Params;
	memset(&OnRemoveFriendComplete_Params, 0, sizeof(OnRemoveFriendComplete_Params));
	OnRemoveFriendComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnRemoveFriendComplete_Params.RemovedID, sizeof(OnRemoveFriendComplete_Params.RemovedID), &RemovedID, sizeof(RemovedID));

	this->ProcessEvent(uFnOnRemoveFriendComplete, &OnRemoveFriendComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearAddFriendByNameCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnClearAddFriendByNameCompleteDelegate = nullptr;

	if (!uFnClearAddFriendByNameCompleteDelegate)
	{
		uFnClearAddFriendByNameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearAddFriendByNameCompleteDelegate_Params ClearAddFriendByNameCompleteDelegate_Params;
	memset(&ClearAddFriendByNameCompleteDelegate_Params, 0, sizeof(ClearAddFriendByNameCompleteDelegate_Params));
	memcpy_s(&ClearAddFriendByNameCompleteDelegate_Params.LocalUserNum, sizeof(ClearAddFriendByNameCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearAddFriendByNameCompleteDelegate_Params.FriendDelegate, sizeof(ClearAddFriendByNameCompleteDelegate_Params.FriendDelegate), &FriendDelegate, sizeof(FriendDelegate));

	this->ProcessEvent(uFnClearAddFriendByNameCompleteDelegate, &ClearAddFriendByNameCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddAddFriendByNameCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnAddAddFriendByNameCompleteDelegate = nullptr;

	if (!uFnAddAddFriendByNameCompleteDelegate)
	{
		uFnAddAddFriendByNameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddAddFriendByNameCompleteDelegate_Params AddAddFriendByNameCompleteDelegate_Params;
	memset(&AddAddFriendByNameCompleteDelegate_Params, 0, sizeof(AddAddFriendByNameCompleteDelegate_Params));
	memcpy_s(&AddAddFriendByNameCompleteDelegate_Params.LocalUserNum, sizeof(AddAddFriendByNameCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddAddFriendByNameCompleteDelegate_Params.FriendDelegate, sizeof(AddAddFriendByNameCompleteDelegate_Params.FriendDelegate), &FriendDelegate, sizeof(FriendDelegate));

	this->ProcessEvent(uFnAddAddFriendByNameCompleteDelegate, &AddAddFriendByNameCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnAddFriendByNameComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnAddFriendByNameComplete = nullptr;

	if (!uFnOnAddFriendByNameComplete)
	{
		uFnOnAddFriendByNameComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete");
	}

	UOnlineSubsystemSteamworks_execOnAddFriendByNameComplete_Params OnAddFriendByNameComplete_Params;
	memset(&OnAddFriendByNameComplete_Params, 0, sizeof(OnAddFriendByNameComplete_Params));
	OnAddFriendByNameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnAddFriendByNameComplete, &OnAddFriendByNameComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  FriendName                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::AddFriendByName(uint8_t LocalUserNum, class FString FriendName, class FString Message)
{
	static UFunction* uFnAddFriendByName = nullptr;

	if (!uFnAddFriendByName)
	{
		uFnAddFriendByName = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName");
	}

	UOnlineSubsystemSteamworks_execAddFriendByName_Params AddFriendByName_Params;
	memset(&AddFriendByName_Params, 0, sizeof(AddFriendByName_Params));
	memcpy_s(&AddFriendByName_Params.LocalUserNum, sizeof(AddFriendByName_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddFriendByName_Params.FriendName, sizeof(AddFriendByName_Params.FriendName), &FriendName, sizeof(FriendName));
	memcpy_s(&AddFriendByName_Params.Message, sizeof(AddFriendByName_Params.Message), &Message, sizeof(Message));

	uFnAddFriendByName->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAddFriendByName, &AddFriendByName_Params, nullptr);
	uFnAddFriendByName->FunctionFlags |= 0x400;

	return AddFriendByName_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueryUserByDisplayName
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  DisplayName                    (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::QueryUserByDisplayName(uint8_t LocalUserNum, class FString DisplayName)
{
	static UFunction* uFnQueryUserByDisplayName = nullptr;

	if (!uFnQueryUserByDisplayName)
	{
		uFnQueryUserByDisplayName = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueryUserByDisplayName");
	}

	UOnlineSubsystemSteamworks_execQueryUserByDisplayName_Params QueryUserByDisplayName_Params;
	memset(&QueryUserByDisplayName_Params, 0, sizeof(QueryUserByDisplayName_Params));
	memcpy_s(&QueryUserByDisplayName_Params.LocalUserNum, sizeof(QueryUserByDisplayName_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&QueryUserByDisplayName_Params.DisplayName, sizeof(QueryUserByDisplayName_Params.DisplayName), &DisplayName, sizeof(DisplayName));

	this->ProcessEvent(uFnQueryUserByDisplayName, &QueryUserByDisplayName_Params, nullptr);

	return QueryUserByDisplayName_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearQueryUserByDisplayNameCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         QueryDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearQueryUserByDisplayNameCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate QueryDelegate)
{
	static UFunction* uFnClearQueryUserByDisplayNameCompleteDelegate = nullptr;

	if (!uFnClearQueryUserByDisplayNameCompleteDelegate)
	{
		uFnClearQueryUserByDisplayNameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearQueryUserByDisplayNameCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearQueryUserByDisplayNameCompleteDelegate_Params ClearQueryUserByDisplayNameCompleteDelegate_Params;
	memset(&ClearQueryUserByDisplayNameCompleteDelegate_Params, 0, sizeof(ClearQueryUserByDisplayNameCompleteDelegate_Params));
	memcpy_s(&ClearQueryUserByDisplayNameCompleteDelegate_Params.LocalUserNum, sizeof(ClearQueryUserByDisplayNameCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearQueryUserByDisplayNameCompleteDelegate_Params.QueryDelegate, sizeof(ClearQueryUserByDisplayNameCompleteDelegate_Params.QueryDelegate), &QueryDelegate, sizeof(QueryDelegate));

	this->ProcessEvent(uFnClearQueryUserByDisplayNameCompleteDelegate, &ClearQueryUserByDisplayNameCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddQueryUserByDisplayNameCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         QueryDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddQueryUserByDisplayNameCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate QueryDelegate)
{
	static UFunction* uFnAddQueryUserByDisplayNameCompleteDelegate = nullptr;

	if (!uFnAddQueryUserByDisplayNameCompleteDelegate)
	{
		uFnAddQueryUserByDisplayNameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddQueryUserByDisplayNameCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddQueryUserByDisplayNameCompleteDelegate_Params AddQueryUserByDisplayNameCompleteDelegate_Params;
	memset(&AddQueryUserByDisplayNameCompleteDelegate_Params, 0, sizeof(AddQueryUserByDisplayNameCompleteDelegate_Params));
	memcpy_s(&AddQueryUserByDisplayNameCompleteDelegate_Params.LocalUserNum, sizeof(AddQueryUserByDisplayNameCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddQueryUserByDisplayNameCompleteDelegate_Params.QueryDelegate, sizeof(AddQueryUserByDisplayNameCompleteDelegate_Params.QueryDelegate), &QueryDelegate, sizeof(QueryDelegate));

	this->ProcessEvent(uFnAddQueryUserByDisplayNameCompleteDelegate, &AddQueryUserByDisplayNameCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnQueryUserByDisplayName
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)
// class FString                  QueriedDisplayName             (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            UserId                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnQueryUserByDisplayName(bool bWasSuccessful, class FString QueriedDisplayName, struct FUniqueNetId UserId)
{
	static UFunction* uFnOnQueryUserByDisplayName = nullptr;

	if (!uFnOnQueryUserByDisplayName)
	{
		uFnOnQueryUserByDisplayName = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnQueryUserByDisplayName");
	}

	UOnlineSubsystemSteamworks_execOnQueryUserByDisplayName_Params OnQueryUserByDisplayName_Params;
	memset(&OnQueryUserByDisplayName_Params, 0, sizeof(OnQueryUserByDisplayName_Params));
	OnQueryUserByDisplayName_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryUserByDisplayName_Params.QueriedDisplayName, sizeof(OnQueryUserByDisplayName_Params.QueriedDisplayName), &QueriedDisplayName, sizeof(QueriedDisplayName));
	memcpy_s(&OnQueryUserByDisplayName_Params.UserId, sizeof(OnQueryUserByDisplayName_Params.UserId), &UserId, sizeof(UserId));

	this->ProcessEvent(uFnOnQueryUserByDisplayName, &OnQueryUserByDisplayName_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            NewFriend                      (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::AddFriend(uint8_t LocalUserNum, struct FUniqueNetId NewFriend, class FString Message)
{
	static UFunction* uFnAddFriend = nullptr;

	if (!uFnAddFriend)
	{
		uFnAddFriend = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend");
	}

	UOnlineSubsystemSteamworks_execAddFriend_Params AddFriend_Params;
	memset(&AddFriend_Params, 0, sizeof(AddFriend_Params));
	memcpy_s(&AddFriend_Params.LocalUserNum, sizeof(AddFriend_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddFriend_Params.NewFriend, sizeof(AddFriend_Params.NewFriend), &NewFriend, sizeof(NewFriend));
	memcpy_s(&AddFriend_Params.Message, sizeof(AddFriend_Params.Message), &Message, sizeof(Message));

	uFnAddFriend->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAddFriend, &AddFriend_Params, nullptr);
	uFnAddFriend->FunctionFlags |= 0x400;

	return AddFriend_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearAddFriendCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnClearAddFriendCompleteDelegate = nullptr;

	if (!uFnClearAddFriendCompleteDelegate)
	{
		uFnClearAddFriendCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearAddFriendCompleteDelegate_Params ClearAddFriendCompleteDelegate_Params;
	memset(&ClearAddFriendCompleteDelegate_Params, 0, sizeof(ClearAddFriendCompleteDelegate_Params));
	memcpy_s(&ClearAddFriendCompleteDelegate_Params.LocalUserNum, sizeof(ClearAddFriendCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearAddFriendCompleteDelegate_Params.FriendDelegate, sizeof(ClearAddFriendCompleteDelegate_Params.FriendDelegate), &FriendDelegate, sizeof(FriendDelegate));

	this->ProcessEvent(uFnClearAddFriendCompleteDelegate, &ClearAddFriendCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddAddFriendCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnAddAddFriendCompleteDelegate = nullptr;

	if (!uFnAddAddFriendCompleteDelegate)
	{
		uFnAddAddFriendCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddAddFriendCompleteDelegate_Params AddAddFriendCompleteDelegate_Params;
	memset(&AddAddFriendCompleteDelegate_Params, 0, sizeof(AddAddFriendCompleteDelegate_Params));
	memcpy_s(&AddAddFriendCompleteDelegate_Params.LocalUserNum, sizeof(AddAddFriendCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddAddFriendCompleteDelegate_Params.FriendDelegate, sizeof(AddAddFriendCompleteDelegate_Params.FriendDelegate), &FriendDelegate, sizeof(FriendDelegate));

	this->ProcessEvent(uFnAddAddFriendCompleteDelegate, &AddAddFriendCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            NewFriendId                    (CPF_Parm | CPF_NeedCtorLink)
// class UError*                  Error                          (CPF_Const | CPF_Parm)

void UOnlineSubsystemSteamworks::OnAddFriendComplete(struct FUniqueNetId NewFriendId, class UError* Error)
{
	static UFunction* uFnOnAddFriendComplete = nullptr;

	if (!uFnOnAddFriendComplete)
	{
		uFnOnAddFriendComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendComplete");
	}

	UOnlineSubsystemSteamworks_execOnAddFriendComplete_Params OnAddFriendComplete_Params;
	memset(&OnAddFriendComplete_Params, 0, sizeof(OnAddFriendComplete_Params));
	memcpy_s(&OnAddFriendComplete_Params.NewFriendId, sizeof(OnAddFriendComplete_Params.NewFriendId), &NewFriendId, sizeof(NewFriendId));
	memcpy_s(&OnAddFriendComplete_Params.Error, sizeof(OnAddFriendComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnAddFriendComplete, &OnAddFriendComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults
// [0x00420003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        bWasCanceled                   (CPF_Parm | CPF_OutParm)

class FString UOnlineSubsystemSteamworks::GetKeyboardInputResults(uint8_t& bWasCanceled)
{
	static UFunction* uFnGetKeyboardInputResults = nullptr;

	if (!uFnGetKeyboardInputResults)
	{
		uFnGetKeyboardInputResults = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults");
	}

	UOnlineSubsystemSteamworks_execGetKeyboardInputResults_Params GetKeyboardInputResults_Params;
	memset(&GetKeyboardInputResults_Params, 0, sizeof(GetKeyboardInputResults_Params));
	memcpy_s(&GetKeyboardInputResults_Params.bWasCanceled, sizeof(GetKeyboardInputResults_Params.bWasCanceled), &bWasCanceled, sizeof(bWasCanceled));

	this->ProcessEvent(uFnGetKeyboardInputResults, &GetKeyboardInputResults_Params, nullptr);

	memcpy_s(&bWasCanceled, sizeof(bWasCanceled), &GetKeyboardInputResults_Params.bWasCanceled, sizeof(GetKeyboardInputResults_Params.bWasCanceled));

	return GetKeyboardInputResults_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InputDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearKeyboardInputDoneDelegate(struct FScriptDelegate InputDelegate)
{
	static UFunction* uFnClearKeyboardInputDoneDelegate = nullptr;

	if (!uFnClearKeyboardInputDoneDelegate)
	{
		uFnClearKeyboardInputDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate");
	}

	UOnlineSubsystemSteamworks_execClearKeyboardInputDoneDelegate_Params ClearKeyboardInputDoneDelegate_Params;
	memset(&ClearKeyboardInputDoneDelegate_Params, 0, sizeof(ClearKeyboardInputDoneDelegate_Params));
	memcpy_s(&ClearKeyboardInputDoneDelegate_Params.InputDelegate, sizeof(ClearKeyboardInputDoneDelegate_Params.InputDelegate), &InputDelegate, sizeof(InputDelegate));

	this->ProcessEvent(uFnClearKeyboardInputDoneDelegate, &ClearKeyboardInputDoneDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InputDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddKeyboardInputDoneDelegate(struct FScriptDelegate InputDelegate)
{
	static UFunction* uFnAddKeyboardInputDoneDelegate = nullptr;

	if (!uFnAddKeyboardInputDoneDelegate)
	{
		uFnAddKeyboardInputDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate");
	}

	UOnlineSubsystemSteamworks_execAddKeyboardInputDoneDelegate_Params AddKeyboardInputDoneDelegate_Params;
	memset(&AddKeyboardInputDoneDelegate_Params, 0, sizeof(AddKeyboardInputDoneDelegate_Params));
	memcpy_s(&AddKeyboardInputDoneDelegate_Params.InputDelegate, sizeof(AddKeyboardInputDoneDelegate_Params.InputDelegate), &InputDelegate, sizeof(InputDelegate));

	this->ProcessEvent(uFnAddKeyboardInputDoneDelegate, &AddKeyboardInputDoneDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnKeyboardInputComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnKeyboardInputComplete = nullptr;

	if (!uFnOnKeyboardInputComplete)
	{
		uFnOnKeyboardInputComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete");
	}

	UOnlineSubsystemSteamworks_execOnKeyboardInputComplete_Params OnKeyboardInputComplete_Params;
	memset(&OnKeyboardInputComplete_Params, 0, sizeof(OnKeyboardInputComplete_Params));
	OnKeyboardInputComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnKeyboardInputComplete, &OnKeyboardInputComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HideKeyboardUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::HideKeyboardUI(uint8_t LocalUserNum)
{
	static UFunction* uFnHideKeyboardUI = nullptr;

	if (!uFnHideKeyboardUI)
	{
		uFnHideKeyboardUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HideKeyboardUI");
	}

	UOnlineSubsystemSteamworks_execHideKeyboardUI_Params HideKeyboardUI_Params;
	memset(&HideKeyboardUI_Params, 0, sizeof(HideKeyboardUI_Params));
	memcpy_s(&HideKeyboardUI_Params.LocalUserNum, sizeof(HideKeyboardUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnHideKeyboardUI, &HideKeyboardUI_Params, nullptr);

	return HideKeyboardUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  TitleText                      (CPF_Parm | CPF_NeedCtorLink)
// class FString                  DescriptionText                (CPF_Parm | CPF_NeedCtorLink)
// bool                           bIsPassword                    (CPF_OptionalParm | CPF_Parm)
// bool                           bShouldValidate                (CPF_OptionalParm | CPF_Parm)
// class FString                  DefaultText                    (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// int32_t                        MaxResultLength                (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowKeyboardUI(uint8_t LocalUserNum, class FString TitleText, class FString DescriptionText, bool bIsPassword, bool bShouldValidate, class FString DefaultText, int32_t MaxResultLength)
{
	static UFunction* uFnShowKeyboardUI = nullptr;

	if (!uFnShowKeyboardUI)
	{
		uFnShowKeyboardUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI");
	}

	UOnlineSubsystemSteamworks_execShowKeyboardUI_Params ShowKeyboardUI_Params;
	memset(&ShowKeyboardUI_Params, 0, sizeof(ShowKeyboardUI_Params));
	memcpy_s(&ShowKeyboardUI_Params.LocalUserNum, sizeof(ShowKeyboardUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowKeyboardUI_Params.TitleText, sizeof(ShowKeyboardUI_Params.TitleText), &TitleText, sizeof(TitleText));
	memcpy_s(&ShowKeyboardUI_Params.DescriptionText, sizeof(ShowKeyboardUI_Params.DescriptionText), &DescriptionText, sizeof(DescriptionText));
	ShowKeyboardUI_Params.bIsPassword = bIsPassword;
	ShowKeyboardUI_Params.bShouldValidate = bShouldValidate;
	memcpy_s(&ShowKeyboardUI_Params.DefaultText, sizeof(ShowKeyboardUI_Params.DefaultText), &DefaultText, sizeof(DefaultText));
	memcpy_s(&ShowKeyboardUI_Params.MaxResultLength, sizeof(ShowKeyboardUI_Params.MaxResultLength), &MaxResultLength, sizeof(MaxResultLength));

	uFnShowKeyboardUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowKeyboardUI, &ShowKeyboardUI_Params, nullptr);
	uFnShowKeyboardUI->FunctionFlags |= 0x400;

	return ShowKeyboardUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        StatusId                       (CPF_Parm)
// TArray<struct FLocalizedStringSetting> LocalizedStringSettings        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<struct FSettingsProperty> Properties                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::SetOnlineStatus(uint8_t LocalUserNum, int32_t StatusId, TArray<struct FLocalizedStringSetting>& LocalizedStringSettings, TArray<struct FSettingsProperty>& Properties)
{
	static UFunction* uFnSetOnlineStatus = nullptr;

	if (!uFnSetOnlineStatus)
	{
		uFnSetOnlineStatus = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus");
	}

	UOnlineSubsystemSteamworks_execSetOnlineStatus_Params SetOnlineStatus_Params;
	memset(&SetOnlineStatus_Params, 0, sizeof(SetOnlineStatus_Params));
	memcpy_s(&SetOnlineStatus_Params.LocalUserNum, sizeof(SetOnlineStatus_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&SetOnlineStatus_Params.StatusId, sizeof(SetOnlineStatus_Params.StatusId), &StatusId, sizeof(StatusId));
	memcpy_s(&SetOnlineStatus_Params.LocalizedStringSettings, sizeof(SetOnlineStatus_Params.LocalizedStringSettings), &LocalizedStringSettings, sizeof(LocalizedStringSettings));
	memcpy_s(&SetOnlineStatus_Params.Properties, sizeof(SetOnlineStatus_Params.Properties), &Properties, sizeof(Properties));

	uFnSetOnlineStatus->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetOnlineStatus, &SetOnlineStatus_Params, nullptr);
	uFnSetOnlineStatus->FunctionFlags |= 0x400;

	memcpy_s(&LocalizedStringSettings, sizeof(LocalizedStringSettings), &SetOnlineStatus_Params.LocalizedStringSettings, sizeof(SetOnlineStatus_Params.LocalizedStringSettings));
	memcpy_s(&Properties, sizeof(Properties), &SetOnlineStatus_Params.Properties, sizeof(SetOnlineStatus_Params.Properties));
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EOnlineEnumerationReadState    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

EOnlineEnumerationReadState UOnlineSubsystemSteamworks::GetTitleFileState(class FString Filename)
{
	static UFunction* uFnGetTitleFileState = nullptr;

	if (!uFnGetTitleFileState)
	{
		uFnGetTitleFileState = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState");
	}

	UOnlineSubsystemSteamworks_execGetTitleFileState_Params GetTitleFileState_Params;
	memset(&GetTitleFileState_Params, 0, sizeof(GetTitleFileState_Params));
	memcpy_s(&GetTitleFileState_Params.Filename, sizeof(GetTitleFileState_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnGetTitleFileState, &GetTitleFileState_Params, nullptr);

	return GetTitleFileState_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetTitleFileContents(class FString Filename, TArray<uint8_t>& FileContents)
{
	static UFunction* uFnGetTitleFileContents = nullptr;

	if (!uFnGetTitleFileContents)
	{
		uFnGetTitleFileContents = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents");
	}

	UOnlineSubsystemSteamworks_execGetTitleFileContents_Params GetTitleFileContents_Params;
	memset(&GetTitleFileContents_Params, 0, sizeof(GetTitleFileContents_Params));
	memcpy_s(&GetTitleFileContents_Params.Filename, sizeof(GetTitleFileContents_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&GetTitleFileContents_Params.FileContents, sizeof(GetTitleFileContents_Params.FileContents), &FileContents, sizeof(FileContents));

	uFnGetTitleFileContents->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetTitleFileContents, &GetTitleFileContents_Params, nullptr);
	uFnGetTitleFileContents->FunctionFlags |= 0x400;

	memcpy_s(&FileContents, sizeof(FileContents), &GetTitleFileContents_Params.FileContents, sizeof(GetTitleFileContents_Params.FileContents));

	return GetTitleFileContents_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadTitleFileCompleteDelegate(struct FScriptDelegate ReadTitleFileCompleteDelegate)
{
	static UFunction* uFnClearReadTitleFileCompleteDelegate = nullptr;

	if (!uFnClearReadTitleFileCompleteDelegate)
	{
		uFnClearReadTitleFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadTitleFileCompleteDelegate_Params ClearReadTitleFileCompleteDelegate_Params;
	memset(&ClearReadTitleFileCompleteDelegate_Params, 0, sizeof(ClearReadTitleFileCompleteDelegate_Params));
	memcpy_s(&ClearReadTitleFileCompleteDelegate_Params.ReadTitleFileCompleteDelegate, sizeof(ClearReadTitleFileCompleteDelegate_Params.ReadTitleFileCompleteDelegate), &ReadTitleFileCompleteDelegate, sizeof(ReadTitleFileCompleteDelegate));

	this->ProcessEvent(uFnClearReadTitleFileCompleteDelegate, &ClearReadTitleFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadTitleFileCompleteDelegate(struct FScriptDelegate ReadTitleFileCompleteDelegate)
{
	static UFunction* uFnAddReadTitleFileCompleteDelegate = nullptr;

	if (!uFnAddReadTitleFileCompleteDelegate)
	{
		uFnAddReadTitleFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadTitleFileCompleteDelegate_Params AddReadTitleFileCompleteDelegate_Params;
	memset(&AddReadTitleFileCompleteDelegate_Params, 0, sizeof(AddReadTitleFileCompleteDelegate_Params));
	memcpy_s(&AddReadTitleFileCompleteDelegate_Params.ReadTitleFileCompleteDelegate, sizeof(AddReadTitleFileCompleteDelegate_Params.ReadTitleFileCompleteDelegate), &ReadTitleFileCompleteDelegate, sizeof(ReadTitleFileCompleteDelegate));

	this->ProcessEvent(uFnAddReadTitleFileCompleteDelegate, &AddReadTitleFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  FileToRead                     (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ReadTitleFile(class FString FileToRead)
{
	static UFunction* uFnReadTitleFile = nullptr;

	if (!uFnReadTitleFile)
	{
		uFnReadTitleFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile");
	}

	UOnlineSubsystemSteamworks_execReadTitleFile_Params ReadTitleFile_Params;
	memset(&ReadTitleFile_Params, 0, sizeof(ReadTitleFile_Params));
	memcpy_s(&ReadTitleFile_Params.FileToRead, sizeof(ReadTitleFile_Params.FileToRead), &FileToRead, sizeof(FileToRead));

	uFnReadTitleFile->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadTitleFile, &ReadTitleFile_Params, nullptr);
	uFnReadTitleFile->FunctionFlags |= 0x400;

	return ReadTitleFile_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReadTitleFileComplete(bool bWasSuccessful, class FString Filename)
{
	static UFunction* uFnOnReadTitleFileComplete = nullptr;

	if (!uFnOnReadTitleFileComplete)
	{
		uFnOnReadTitleFileComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadTitleFileComplete_Params OnReadTitleFileComplete_Params;
	memset(&OnReadTitleFileComplete_Params, 0, sizeof(OnReadTitleFileComplete_Params));
	OnReadTitleFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadTitleFileComplete_Params.Filename, sizeof(OnReadTitleFileComplete_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnOnReadTitleFileComplete, &OnReadTitleFileComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearStorageDeviceChangeDelegate(struct FScriptDelegate StorageDeviceChangeDelegate)
{
	static UFunction* uFnClearStorageDeviceChangeDelegate = nullptr;

	if (!uFnClearStorageDeviceChangeDelegate)
	{
		uFnClearStorageDeviceChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearStorageDeviceChangeDelegate_Params ClearStorageDeviceChangeDelegate_Params;
	memset(&ClearStorageDeviceChangeDelegate_Params, 0, sizeof(ClearStorageDeviceChangeDelegate_Params));
	memcpy_s(&ClearStorageDeviceChangeDelegate_Params.StorageDeviceChangeDelegate, sizeof(ClearStorageDeviceChangeDelegate_Params.StorageDeviceChangeDelegate), &StorageDeviceChangeDelegate, sizeof(StorageDeviceChangeDelegate));

	this->ProcessEvent(uFnClearStorageDeviceChangeDelegate, &ClearStorageDeviceChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddStorageDeviceChangeDelegate(struct FScriptDelegate StorageDeviceChangeDelegate)
{
	static UFunction* uFnAddStorageDeviceChangeDelegate = nullptr;

	if (!uFnAddStorageDeviceChangeDelegate)
	{
		uFnAddStorageDeviceChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddStorageDeviceChangeDelegate_Params AddStorageDeviceChangeDelegate_Params;
	memset(&AddStorageDeviceChangeDelegate_Params, 0, sizeof(AddStorageDeviceChangeDelegate_Params));
	memcpy_s(&AddStorageDeviceChangeDelegate_Params.StorageDeviceChangeDelegate, sizeof(AddStorageDeviceChangeDelegate_Params.StorageDeviceChangeDelegate), &StorageDeviceChangeDelegate, sizeof(StorageDeviceChangeDelegate));

	this->ProcessEvent(uFnAddStorageDeviceChangeDelegate, &AddStorageDeviceChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnStorageDeviceChange()
{
	static UFunction* uFnOnStorageDeviceChange = nullptr;

	if (!uFnOnStorageDeviceChange)
	{
		uFnOnStorageDeviceChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange");
	}

	UOnlineSubsystemSteamworks_execOnStorageDeviceChange_Params OnStorageDeviceChange_Params;
	memset(&OnStorageDeviceChange_Params, 0, sizeof(OnStorageDeviceChange_Params));

	this->ProcessEvent(uFnOnStorageDeviceChange, &OnStorageDeviceChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// ENATType                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

ENATType UOnlineSubsystemSteamworks::GetNATType()
{
	static UFunction* uFnGetNATType = nullptr;

	if (!uFnGetNATType)
	{
		uFnGetNATType = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType");
	}

	UOnlineSubsystemSteamworks_execGetNATType_Params GetNATType_Params;
	memset(&GetNATType_Params, 0, sizeof(GetNATType_Params));

	uFnGetNATType->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetNATType, &GetNATType_Params, nullptr);
	uFnGetNATType->FunctionFlags |= 0x400;

	return GetNATType_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ConnectionStatusDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearConnectionStatusChangeDelegate(struct FScriptDelegate ConnectionStatusDelegate)
{
	static UFunction* uFnClearConnectionStatusChangeDelegate = nullptr;

	if (!uFnClearConnectionStatusChangeDelegate)
	{
		uFnClearConnectionStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearConnectionStatusChangeDelegate_Params ClearConnectionStatusChangeDelegate_Params;
	memset(&ClearConnectionStatusChangeDelegate_Params, 0, sizeof(ClearConnectionStatusChangeDelegate_Params));
	memcpy_s(&ClearConnectionStatusChangeDelegate_Params.ConnectionStatusDelegate, sizeof(ClearConnectionStatusChangeDelegate_Params.ConnectionStatusDelegate), &ConnectionStatusDelegate, sizeof(ConnectionStatusDelegate));

	this->ProcessEvent(uFnClearConnectionStatusChangeDelegate, &ClearConnectionStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ConnectionStatusDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddConnectionStatusChangeDelegate(struct FScriptDelegate ConnectionStatusDelegate)
{
	static UFunction* uFnAddConnectionStatusChangeDelegate = nullptr;

	if (!uFnAddConnectionStatusChangeDelegate)
	{
		uFnAddConnectionStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddConnectionStatusChangeDelegate_Params AddConnectionStatusChangeDelegate_Params;
	memset(&AddConnectionStatusChangeDelegate_Params, 0, sizeof(AddConnectionStatusChangeDelegate_Params));
	memcpy_s(&AddConnectionStatusChangeDelegate_Params.ConnectionStatusDelegate, sizeof(AddConnectionStatusChangeDelegate_Params.ConnectionStatusDelegate), &ConnectionStatusDelegate, sizeof(ConnectionStatusDelegate));

	this->ProcessEvent(uFnAddConnectionStatusChangeDelegate, &AddConnectionStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// EOnlineServerConnectionStatus  ConnectionStatus               (CPF_Parm)

void UOnlineSubsystemSteamworks::OnConnectionStatusChange(EOnlineServerConnectionStatus ConnectionStatus)
{
	static UFunction* uFnOnConnectionStatusChange = nullptr;

	if (!uFnOnConnectionStatusChange)
	{
		uFnOnConnectionStatusChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange");
	}

	UOnlineSubsystemSteamworks_execOnConnectionStatusChange_Params OnConnectionStatusChange_Params;
	memset(&OnConnectionStatusChange_Params, 0, sizeof(OnConnectionStatusChange_Params));
	memcpy_s(&OnConnectionStatusChange_Params.ConnectionStatus, sizeof(OnConnectionStatusChange_Params.ConnectionStatus), &ConnectionStatus, sizeof(ConnectionStatus));

	this->ProcessEvent(uFnOnConnectionStatusChange, &OnConnectionStatusChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCurrentConnectionStatus
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EOnlineServerConnectionStatus  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

EOnlineServerConnectionStatus UOnlineSubsystemSteamworks::GetCurrentConnectionStatus()
{
	static UFunction* uFnGetCurrentConnectionStatus = nullptr;

	if (!uFnGetCurrentConnectionStatus)
	{
		uFnGetCurrentConnectionStatus = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCurrentConnectionStatus");
	}

	UOnlineSubsystemSteamworks_execGetCurrentConnectionStatus_Params GetCurrentConnectionStatus_Params;
	memset(&GetCurrentConnectionStatus_Params, 0, sizeof(GetCurrentConnectionStatus_Params));

	this->ProcessEvent(uFnGetCurrentConnectionStatus, &GetCurrentConnectionStatus_Params, nullptr);

	return GetCurrentConnectionStatus_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsControllerConnected(int32_t ControllerId)
{
	static UFunction* uFnIsControllerConnected = nullptr;

	if (!uFnIsControllerConnected)
	{
		uFnIsControllerConnected = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected");
	}

	UOnlineSubsystemSteamworks_execIsControllerConnected_Params IsControllerConnected_Params;
	memset(&IsControllerConnected_Params, 0, sizeof(IsControllerConnected_Params));
	memcpy_s(&IsControllerConnected_Params.ControllerId, sizeof(IsControllerConnected_Params.ControllerId), &ControllerId, sizeof(ControllerId));

	this->ProcessEvent(uFnIsControllerConnected, &IsControllerConnected_Params, nullptr);

	return IsControllerConnected_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserRestoredDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UserRestoredDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUserRestoredDelegate(struct FScriptDelegate UserRestoredDelegate)
{
	static UFunction* uFnClearUserRestoredDelegate = nullptr;

	if (!uFnClearUserRestoredDelegate)
	{
		uFnClearUserRestoredDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserRestoredDelegate");
	}

	UOnlineSubsystemSteamworks_execClearUserRestoredDelegate_Params ClearUserRestoredDelegate_Params;
	memset(&ClearUserRestoredDelegate_Params, 0, sizeof(ClearUserRestoredDelegate_Params));
	memcpy_s(&ClearUserRestoredDelegate_Params.UserRestoredDelegate, sizeof(ClearUserRestoredDelegate_Params.UserRestoredDelegate), &UserRestoredDelegate, sizeof(UserRestoredDelegate));

	this->ProcessEvent(uFnClearUserRestoredDelegate, &ClearUserRestoredDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserRestoredDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UserRestoredDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUserRestoredDelegate(struct FScriptDelegate UserRestoredDelegate)
{
	static UFunction* uFnAddUserRestoredDelegate = nullptr;

	if (!uFnAddUserRestoredDelegate)
	{
		uFnAddUserRestoredDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserRestoredDelegate");
	}

	UOnlineSubsystemSteamworks_execAddUserRestoredDelegate_Params AddUserRestoredDelegate_Params;
	memset(&AddUserRestoredDelegate_Params, 0, sizeof(AddUserRestoredDelegate_Params));
	memcpy_s(&AddUserRestoredDelegate_Params.UserRestoredDelegate, sizeof(AddUserRestoredDelegate_Params.UserRestoredDelegate), &UserRestoredDelegate, sizeof(UserRestoredDelegate));

	this->ProcessEvent(uFnAddUserRestoredDelegate, &AddUserRestoredDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserRestored
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        ControllerId                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnUserRestored(uint8_t ControllerId)
{
	static UFunction* uFnOnUserRestored = nullptr;

	if (!uFnOnUserRestored)
	{
		uFnOnUserRestored = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserRestored");
	}

	UOnlineSubsystemSteamworks_execOnUserRestored_Params OnUserRestored_Params;
	memset(&OnUserRestored_Params, 0, sizeof(OnUserRestored_Params));
	memcpy_s(&OnUserRestored_Params.ControllerId, sizeof(OnUserRestored_Params.ControllerId), &ControllerId, sizeof(ControllerId));

	this->ProcessEvent(uFnOnUserRestored, &OnUserRestored_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserOrphanedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UserOrphanedDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUserOrphanedDelegate(struct FScriptDelegate UserOrphanedDelegate)
{
	static UFunction* uFnClearUserOrphanedDelegate = nullptr;

	if (!uFnClearUserOrphanedDelegate)
	{
		uFnClearUserOrphanedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserOrphanedDelegate");
	}

	UOnlineSubsystemSteamworks_execClearUserOrphanedDelegate_Params ClearUserOrphanedDelegate_Params;
	memset(&ClearUserOrphanedDelegate_Params, 0, sizeof(ClearUserOrphanedDelegate_Params));
	memcpy_s(&ClearUserOrphanedDelegate_Params.UserOrphanedDelegate, sizeof(ClearUserOrphanedDelegate_Params.UserOrphanedDelegate), &UserOrphanedDelegate, sizeof(UserOrphanedDelegate));

	this->ProcessEvent(uFnClearUserOrphanedDelegate, &ClearUserOrphanedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserOrphanedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UserOrphanedDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUserOrphanedDelegate(struct FScriptDelegate UserOrphanedDelegate)
{
	static UFunction* uFnAddUserOrphanedDelegate = nullptr;

	if (!uFnAddUserOrphanedDelegate)
	{
		uFnAddUserOrphanedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserOrphanedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddUserOrphanedDelegate_Params AddUserOrphanedDelegate_Params;
	memset(&AddUserOrphanedDelegate_Params, 0, sizeof(AddUserOrphanedDelegate_Params));
	memcpy_s(&AddUserOrphanedDelegate_Params.UserOrphanedDelegate, sizeof(AddUserOrphanedDelegate_Params.UserOrphanedDelegate), &UserOrphanedDelegate, sizeof(UserOrphanedDelegate));

	this->ProcessEvent(uFnAddUserOrphanedDelegate, &AddUserOrphanedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserOrphaned
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        ControllerId                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnUserOrphaned(uint8_t ControllerId)
{
	static UFunction* uFnOnUserOrphaned = nullptr;

	if (!uFnOnUserOrphaned)
	{
		uFnOnUserOrphaned = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserOrphaned");
	}

	UOnlineSubsystemSteamworks_execOnUserOrphaned_Params OnUserOrphaned_Params;
	memset(&OnUserOrphaned_Params, 0, sizeof(OnUserOrphaned_Params));
	memcpy_s(&OnUserOrphaned_Params.ControllerId, sizeof(OnUserOrphaned_Params.ControllerId), &ControllerId, sizeof(ControllerId));

	this->ProcessEvent(uFnOnUserOrphaned, &OnUserOrphaned_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ControllerChangeDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearControllerChangeDelegate(struct FScriptDelegate ControllerChangeDelegate)
{
	static UFunction* uFnClearControllerChangeDelegate = nullptr;

	if (!uFnClearControllerChangeDelegate)
	{
		uFnClearControllerChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearControllerChangeDelegate_Params ClearControllerChangeDelegate_Params;
	memset(&ClearControllerChangeDelegate_Params, 0, sizeof(ClearControllerChangeDelegate_Params));
	memcpy_s(&ClearControllerChangeDelegate_Params.ControllerChangeDelegate, sizeof(ClearControllerChangeDelegate_Params.ControllerChangeDelegate), &ControllerChangeDelegate, sizeof(ControllerChangeDelegate));

	this->ProcessEvent(uFnClearControllerChangeDelegate, &ClearControllerChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ControllerChangeDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddControllerChangeDelegate(struct FScriptDelegate ControllerChangeDelegate)
{
	static UFunction* uFnAddControllerChangeDelegate = nullptr;

	if (!uFnAddControllerChangeDelegate)
	{
		uFnAddControllerChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddControllerChangeDelegate_Params AddControllerChangeDelegate_Params;
	memset(&AddControllerChangeDelegate_Params, 0, sizeof(AddControllerChangeDelegate_Params));
	memcpy_s(&AddControllerChangeDelegate_Params.ControllerChangeDelegate, sizeof(AddControllerChangeDelegate_Params.ControllerChangeDelegate), &ControllerChangeDelegate, sizeof(ControllerChangeDelegate));

	this->ProcessEvent(uFnAddControllerChangeDelegate, &AddControllerChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ControllerId                   (CPF_Parm)
// bool                           bIsConnected                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnControllerChange(int32_t ControllerId, bool bIsConnected)
{
	static UFunction* uFnOnControllerChange = nullptr;

	if (!uFnOnControllerChange)
	{
		uFnOnControllerChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange");
	}

	UOnlineSubsystemSteamworks_execOnControllerChange_Params OnControllerChange_Params;
	memset(&OnControllerChange_Params, 0, sizeof(OnControllerChange_Params));
	memcpy_s(&OnControllerChange_Params.ControllerId, sizeof(OnControllerChange_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	OnControllerChange_Params.bIsConnected = bIsConnected;

	this->ProcessEvent(uFnOnControllerChange, &OnControllerChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// ENetworkNotificationPosition   NewPos                         (CPF_Parm)

void UOnlineSubsystemSteamworks::SetNetworkNotificationPosition(ENetworkNotificationPosition NewPos)
{
	static UFunction* uFnSetNetworkNotificationPosition = nullptr;

	if (!uFnSetNetworkNotificationPosition)
	{
		uFnSetNetworkNotificationPosition = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition");
	}

	UOnlineSubsystemSteamworks_execSetNetworkNotificationPosition_Params SetNetworkNotificationPosition_Params;
	memset(&SetNetworkNotificationPosition_Params, 0, sizeof(SetNetworkNotificationPosition_Params));
	memcpy_s(&SetNetworkNotificationPosition_Params.NewPos, sizeof(SetNetworkNotificationPosition_Params.NewPos), &NewPos, sizeof(NewPos));

	uFnSetNetworkNotificationPosition->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetNetworkNotificationPosition, &SetNetworkNotificationPosition_Params, nullptr);
	uFnSetNetworkNotificationPosition->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// ENetworkNotificationPosition   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

ENetworkNotificationPosition UOnlineSubsystemSteamworks::GetNetworkNotificationPosition()
{
	static UFunction* uFnGetNetworkNotificationPosition = nullptr;

	if (!uFnGetNetworkNotificationPosition)
	{
		uFnGetNetworkNotificationPosition = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition");
	}

	UOnlineSubsystemSteamworks_execGetNetworkNotificationPosition_Params GetNetworkNotificationPosition_Params;
	memset(&GetNetworkNotificationPosition_Params, 0, sizeof(GetNetworkNotificationPosition_Params));

	this->ProcessEvent(uFnGetNetworkNotificationPosition, &GetNetworkNotificationPosition_Params, nullptr);

	return GetNetworkNotificationPosition_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ExternalUIDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearExternalUIChangeDelegate(struct FScriptDelegate ExternalUIDelegate)
{
	static UFunction* uFnClearExternalUIChangeDelegate = nullptr;

	if (!uFnClearExternalUIChangeDelegate)
	{
		uFnClearExternalUIChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearExternalUIChangeDelegate_Params ClearExternalUIChangeDelegate_Params;
	memset(&ClearExternalUIChangeDelegate_Params, 0, sizeof(ClearExternalUIChangeDelegate_Params));
	memcpy_s(&ClearExternalUIChangeDelegate_Params.ExternalUIDelegate, sizeof(ClearExternalUIChangeDelegate_Params.ExternalUIDelegate), &ExternalUIDelegate, sizeof(ExternalUIDelegate));

	this->ProcessEvent(uFnClearExternalUIChangeDelegate, &ClearExternalUIChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ExternalUIDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddExternalUIChangeDelegate(struct FScriptDelegate ExternalUIDelegate)
{
	static UFunction* uFnAddExternalUIChangeDelegate = nullptr;

	if (!uFnAddExternalUIChangeDelegate)
	{
		uFnAddExternalUIChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddExternalUIChangeDelegate_Params AddExternalUIChangeDelegate_Params;
	memset(&AddExternalUIChangeDelegate_Params, 0, sizeof(AddExternalUIChangeDelegate_Params));
	memcpy_s(&AddExternalUIChangeDelegate_Params.ExternalUIDelegate, sizeof(AddExternalUIChangeDelegate_Params.ExternalUIDelegate), &ExternalUIDelegate, sizeof(ExternalUIDelegate));

	this->ProcessEvent(uFnAddExternalUIChangeDelegate, &AddExternalUIChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bIsOpening                     (CPF_Parm)

void UOnlineSubsystemSteamworks::OnExternalUIChange(bool bIsOpening)
{
	static UFunction* uFnOnExternalUIChange = nullptr;

	if (!uFnOnExternalUIChange)
	{
		uFnOnExternalUIChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange");
	}

	UOnlineSubsystemSteamworks_execOnExternalUIChange_Params OnExternalUIChange_Params;
	memset(&OnExternalUIChange_Params, 0, sizeof(OnExternalUIChange_Params));
	OnExternalUIChange_Params.bIsOpening = bIsOpening;

	this->ProcessEvent(uFnOnExternalUIChange, &OnExternalUIChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LinkStatusDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLinkStatusChangeDelegate(struct FScriptDelegate LinkStatusDelegate)
{
	static UFunction* uFnClearLinkStatusChangeDelegate = nullptr;

	if (!uFnClearLinkStatusChangeDelegate)
	{
		uFnClearLinkStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearLinkStatusChangeDelegate_Params ClearLinkStatusChangeDelegate_Params;
	memset(&ClearLinkStatusChangeDelegate_Params, 0, sizeof(ClearLinkStatusChangeDelegate_Params));
	memcpy_s(&ClearLinkStatusChangeDelegate_Params.LinkStatusDelegate, sizeof(ClearLinkStatusChangeDelegate_Params.LinkStatusDelegate), &LinkStatusDelegate, sizeof(LinkStatusDelegate));

	this->ProcessEvent(uFnClearLinkStatusChangeDelegate, &ClearLinkStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LinkStatusDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLinkStatusChangeDelegate(struct FScriptDelegate LinkStatusDelegate)
{
	static UFunction* uFnAddLinkStatusChangeDelegate = nullptr;

	if (!uFnAddLinkStatusChangeDelegate)
	{
		uFnAddLinkStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddLinkStatusChangeDelegate_Params AddLinkStatusChangeDelegate_Params;
	memset(&AddLinkStatusChangeDelegate_Params, 0, sizeof(AddLinkStatusChangeDelegate_Params));
	memcpy_s(&AddLinkStatusChangeDelegate_Params.LinkStatusDelegate, sizeof(AddLinkStatusChangeDelegate_Params.LinkStatusDelegate), &LinkStatusDelegate, sizeof(LinkStatusDelegate));

	this->ProcessEvent(uFnAddLinkStatusChangeDelegate, &AddLinkStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bIsConnected                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLinkStatusChange(bool bIsConnected)
{
	static UFunction* uFnOnLinkStatusChange = nullptr;

	if (!uFnOnLinkStatusChange)
	{
		uFnOnLinkStatusChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange");
	}

	UOnlineSubsystemSteamworks_execOnLinkStatusChange_Params OnLinkStatusChange_Params;
	memset(&OnLinkStatusChange_Params, 0, sizeof(OnLinkStatusChange_Params));
	OnLinkStatusChange_Params.bIsConnected = bIsConnected;

	this->ProcessEvent(uFnOnLinkStatusChange, &OnLinkStatusChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::HasLinkConnection()
{
	static UFunction* uFnHasLinkConnection = nullptr;

	if (!uFnHasLinkConnection)
	{
		uFnHasLinkConnection = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection");
	}

	UOnlineSubsystemSteamworks_execHasLinkConnection_Params HasLinkConnection_Params;
	memset(&HasLinkConnection_Params, 0, sizeof(HasLinkConnection_Params));

	uFnHasLinkConnection->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnHasLinkConnection, &HasLinkConnection_Params, nullptr);
	uFnHasLinkConnection->FunctionFlags |= 0x400;

	return HasLinkConnection_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex
// [0x400020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        UserIndex                      (CPF_Parm)

class FString UOnlineSubsystemSteamworks::eventGetPlayerNicknameFromIndex(int32_t UserIndex)
{
	static UFunction* uFnGetPlayerNicknameFromIndex = nullptr;

	if (!uFnGetPlayerNicknameFromIndex)
	{
		uFnGetPlayerNicknameFromIndex = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex");
	}

	UOnlineSubsystemSteamworks_eventGetPlayerNicknameFromIndex_Params GetPlayerNicknameFromIndex_Params;
	memset(&GetPlayerNicknameFromIndex_Params, 0, sizeof(GetPlayerNicknameFromIndex_Params));
	memcpy_s(&GetPlayerNicknameFromIndex_Params.UserIndex, sizeof(GetPlayerNicknameFromIndex_Params.UserIndex), &UserIndex, sizeof(UserIndex));

	this->ProcessEvent(uFnGetPlayerNicknameFromIndex, &GetPlayerNicknameFromIndex_Params, nullptr);

	return GetPlayerNicknameFromIndex_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// int32_t                        LeaderboardId                  (CPF_Parm)
// TArray<struct FOnlinePlayerScore> PlayerScores                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::WriteOnlinePlayerScores(struct FName SessionName, int32_t LeaderboardId, TArray<struct FOnlinePlayerScore>& PlayerScores)
{
	static UFunction* uFnWriteOnlinePlayerScores = nullptr;

	if (!uFnWriteOnlinePlayerScores)
	{
		uFnWriteOnlinePlayerScores = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores");
	}

	UOnlineSubsystemSteamworks_execWriteOnlinePlayerScores_Params WriteOnlinePlayerScores_Params;
	memset(&WriteOnlinePlayerScores_Params, 0, sizeof(WriteOnlinePlayerScores_Params));
	memcpy_s(&WriteOnlinePlayerScores_Params.SessionName, sizeof(WriteOnlinePlayerScores_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&WriteOnlinePlayerScores_Params.LeaderboardId, sizeof(WriteOnlinePlayerScores_Params.LeaderboardId), &LeaderboardId, sizeof(LeaderboardId));
	memcpy_s(&WriteOnlinePlayerScores_Params.PlayerScores, sizeof(WriteOnlinePlayerScores_Params.PlayerScores), &PlayerScores, sizeof(PlayerScores));

	uFnWriteOnlinePlayerScores->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnWriteOnlinePlayerScores, &WriteOnlinePlayerScores_Params, nullptr);
	uFnWriteOnlinePlayerScores->FunctionFlags |= 0x400;

	memcpy_s(&PlayerScores, sizeof(PlayerScores), &WriteOnlinePlayerScores_Params.PlayerScores, sizeof(WriteOnlinePlayerScores_Params.PlayerScores));

	return WriteOnlinePlayerScores_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFlushOnlineStatsCompleteDelegate(struct FScriptDelegate FlushOnlineStatsCompleteDelegate)
{
	static UFunction* uFnClearFlushOnlineStatsCompleteDelegate = nullptr;

	if (!uFnClearFlushOnlineStatsCompleteDelegate)
	{
		uFnClearFlushOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearFlushOnlineStatsCompleteDelegate_Params ClearFlushOnlineStatsCompleteDelegate_Params;
	memset(&ClearFlushOnlineStatsCompleteDelegate_Params, 0, sizeof(ClearFlushOnlineStatsCompleteDelegate_Params));
	memcpy_s(&ClearFlushOnlineStatsCompleteDelegate_Params.FlushOnlineStatsCompleteDelegate, sizeof(ClearFlushOnlineStatsCompleteDelegate_Params.FlushOnlineStatsCompleteDelegate), &FlushOnlineStatsCompleteDelegate, sizeof(FlushOnlineStatsCompleteDelegate));

	this->ProcessEvent(uFnClearFlushOnlineStatsCompleteDelegate, &ClearFlushOnlineStatsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFlushOnlineStatsCompleteDelegate(struct FScriptDelegate FlushOnlineStatsCompleteDelegate)
{
	static UFunction* uFnAddFlushOnlineStatsCompleteDelegate = nullptr;

	if (!uFnAddFlushOnlineStatsCompleteDelegate)
	{
		uFnAddFlushOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddFlushOnlineStatsCompleteDelegate_Params AddFlushOnlineStatsCompleteDelegate_Params;
	memset(&AddFlushOnlineStatsCompleteDelegate_Params, 0, sizeof(AddFlushOnlineStatsCompleteDelegate_Params));
	memcpy_s(&AddFlushOnlineStatsCompleteDelegate_Params.FlushOnlineStatsCompleteDelegate, sizeof(AddFlushOnlineStatsCompleteDelegate_Params.FlushOnlineStatsCompleteDelegate), &FlushOnlineStatsCompleteDelegate, sizeof(FlushOnlineStatsCompleteDelegate));

	this->ProcessEvent(uFnAddFlushOnlineStatsCompleteDelegate, &AddFlushOnlineStatsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FName                   SessionName                    (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnFlushOnlineStatsComplete(struct FName SessionName, bool bWasSuccessful)
{
	static UFunction* uFnOnFlushOnlineStatsComplete = nullptr;

	if (!uFnOnFlushOnlineStatsComplete)
	{
		uFnOnFlushOnlineStatsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete");
	}

	UOnlineSubsystemSteamworks_execOnFlushOnlineStatsComplete_Params OnFlushOnlineStatsComplete_Params;
	memset(&OnFlushOnlineStatsComplete_Params, 0, sizeof(OnFlushOnlineStatsComplete_Params));
	memcpy_s(&OnFlushOnlineStatsComplete_Params.SessionName, sizeof(OnFlushOnlineStatsComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	OnFlushOnlineStatsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnFlushOnlineStatsComplete, &OnFlushOnlineStatsComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)

bool UOnlineSubsystemSteamworks::FlushOnlineStats(struct FName SessionName)
{
	static UFunction* uFnFlushOnlineStats = nullptr;

	if (!uFnFlushOnlineStats)
	{
		uFnFlushOnlineStats = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats");
	}

	UOnlineSubsystemSteamworks_execFlushOnlineStats_Params FlushOnlineStats_Params;
	memset(&FlushOnlineStats_Params, 0, sizeof(FlushOnlineStats_Params));
	memcpy_s(&FlushOnlineStats_Params.SessionName, sizeof(FlushOnlineStats_Params.SessionName), &SessionName, sizeof(SessionName));

	uFnFlushOnlineStats->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnFlushOnlineStats, &FlushOnlineStats_Params, nullptr);
	uFnFlushOnlineStats->FunctionFlags |= 0x400;

	return FlushOnlineStats_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            Player                         (CPF_Parm | CPF_NeedCtorLink)
// class UOnlineStatsWrite*       StatsWrite                     (CPF_Parm)

bool UOnlineSubsystemSteamworks::WriteOnlineStats(struct FName SessionName, struct FUniqueNetId Player, class UOnlineStatsWrite* StatsWrite)
{
	static UFunction* uFnWriteOnlineStats = nullptr;

	if (!uFnWriteOnlineStats)
	{
		uFnWriteOnlineStats = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats");
	}

	UOnlineSubsystemSteamworks_execWriteOnlineStats_Params WriteOnlineStats_Params;
	memset(&WriteOnlineStats_Params, 0, sizeof(WriteOnlineStats_Params));
	memcpy_s(&WriteOnlineStats_Params.SessionName, sizeof(WriteOnlineStats_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&WriteOnlineStats_Params.Player, sizeof(WriteOnlineStats_Params.Player), &Player, sizeof(Player));
	memcpy_s(&WriteOnlineStats_Params.StatsWrite, sizeof(WriteOnlineStats_Params.StatsWrite), &StatsWrite, sizeof(StatsWrite));

	uFnWriteOnlineStats->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnWriteOnlineStats, &WriteOnlineStats_Params, nullptr);
	uFnWriteOnlineStats->FunctionFlags |= 0x400;

	return WriteOnlineStats_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)

void UOnlineSubsystemSteamworks::FreeStats(class UOnlineStatsRead* StatsRead)
{
	static UFunction* uFnFreeStats = nullptr;

	if (!uFnFreeStats)
	{
		uFnFreeStats = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats");
	}

	UOnlineSubsystemSteamworks_execFreeStats_Params FreeStats_Params;
	memset(&FreeStats_Params, 0, sizeof(FreeStats_Params));
	memcpy_s(&FreeStats_Params.StatsRead, sizeof(FreeStats_Params.StatsRead), &StatsRead, sizeof(StatsRead));

	uFnFreeStats->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnFreeStats, &FreeStats_Params, nullptr);
	uFnFreeStats->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate)
{
	static UFunction* uFnClearReadOnlineStatsCompleteDelegate = nullptr;

	if (!uFnClearReadOnlineStatsCompleteDelegate)
	{
		uFnClearReadOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadOnlineStatsCompleteDelegate_Params ClearReadOnlineStatsCompleteDelegate_Params;
	memset(&ClearReadOnlineStatsCompleteDelegate_Params, 0, sizeof(ClearReadOnlineStatsCompleteDelegate_Params));
	memcpy_s(&ClearReadOnlineStatsCompleteDelegate_Params.ReadOnlineStatsCompleteDelegate, sizeof(ClearReadOnlineStatsCompleteDelegate_Params.ReadOnlineStatsCompleteDelegate), &ReadOnlineStatsCompleteDelegate, sizeof(ReadOnlineStatsCompleteDelegate));

	this->ProcessEvent(uFnClearReadOnlineStatsCompleteDelegate, &ClearReadOnlineStatsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate)
{
	static UFunction* uFnAddReadOnlineStatsCompleteDelegate = nullptr;

	if (!uFnAddReadOnlineStatsCompleteDelegate)
	{
		uFnAddReadOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadOnlineStatsCompleteDelegate_Params AddReadOnlineStatsCompleteDelegate_Params;
	memset(&AddReadOnlineStatsCompleteDelegate_Params, 0, sizeof(AddReadOnlineStatsCompleteDelegate_Params));
	memcpy_s(&AddReadOnlineStatsCompleteDelegate_Params.ReadOnlineStatsCompleteDelegate, sizeof(AddReadOnlineStatsCompleteDelegate_Params.ReadOnlineStatsCompleteDelegate), &ReadOnlineStatsCompleteDelegate, sizeof(ReadOnlineStatsCompleteDelegate));

	this->ProcessEvent(uFnAddReadOnlineStatsCompleteDelegate, &AddReadOnlineStatsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadOnlineStatsComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnReadOnlineStatsComplete = nullptr;

	if (!uFnOnReadOnlineStatsComplete)
	{
		uFnOnReadOnlineStatsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadOnlineStatsComplete_Params OnReadOnlineStatsComplete_Params;
	memset(&OnReadOnlineStatsComplete_Params, 0, sizeof(OnReadOnlineStatsComplete_Params));
	OnReadOnlineStatsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadOnlineStatsComplete, &OnReadOnlineStatsComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// int32_t                        NumRows                        (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadOnlineStatsByRankAroundPlayer(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead, int32_t NumRows)
{
	static UFunction* uFnReadOnlineStatsByRankAroundPlayer = nullptr;

	if (!uFnReadOnlineStatsByRankAroundPlayer)
	{
		uFnReadOnlineStatsByRankAroundPlayer = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer");
	}

	UOnlineSubsystemSteamworks_execReadOnlineStatsByRankAroundPlayer_Params ReadOnlineStatsByRankAroundPlayer_Params;
	memset(&ReadOnlineStatsByRankAroundPlayer_Params, 0, sizeof(ReadOnlineStatsByRankAroundPlayer_Params));
	memcpy_s(&ReadOnlineStatsByRankAroundPlayer_Params.LocalUserNum, sizeof(ReadOnlineStatsByRankAroundPlayer_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadOnlineStatsByRankAroundPlayer_Params.StatsRead, sizeof(ReadOnlineStatsByRankAroundPlayer_Params.StatsRead), &StatsRead, sizeof(StatsRead));
	memcpy_s(&ReadOnlineStatsByRankAroundPlayer_Params.NumRows, sizeof(ReadOnlineStatsByRankAroundPlayer_Params.NumRows), &NumRows, sizeof(NumRows));

	uFnReadOnlineStatsByRankAroundPlayer->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadOnlineStatsByRankAroundPlayer, &ReadOnlineStatsByRankAroundPlayer_Params, nullptr);
	uFnReadOnlineStatsByRankAroundPlayer->FunctionFlags |= 0x400;

	return ReadOnlineStatsByRankAroundPlayer_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// int32_t                        StartIndex                     (CPF_OptionalParm | CPF_Parm)
// int32_t                        NumToRead                      (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadOnlineStatsByRank(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead, int32_t StartIndex, int32_t NumToRead)
{
	static UFunction* uFnReadOnlineStatsByRank = nullptr;

	if (!uFnReadOnlineStatsByRank)
	{
		uFnReadOnlineStatsByRank = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank");
	}

	UOnlineSubsystemSteamworks_execReadOnlineStatsByRank_Params ReadOnlineStatsByRank_Params;
	memset(&ReadOnlineStatsByRank_Params, 0, sizeof(ReadOnlineStatsByRank_Params));
	memcpy_s(&ReadOnlineStatsByRank_Params.LocalUserNum, sizeof(ReadOnlineStatsByRank_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadOnlineStatsByRank_Params.StatsRead, sizeof(ReadOnlineStatsByRank_Params.StatsRead), &StatsRead, sizeof(StatsRead));
	memcpy_s(&ReadOnlineStatsByRank_Params.StartIndex, sizeof(ReadOnlineStatsByRank_Params.StartIndex), &StartIndex, sizeof(StartIndex));
	memcpy_s(&ReadOnlineStatsByRank_Params.NumToRead, sizeof(ReadOnlineStatsByRank_Params.NumToRead), &NumToRead, sizeof(NumToRead));

	uFnReadOnlineStatsByRank->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadOnlineStatsByRank, &ReadOnlineStatsByRank_Params, nullptr);
	uFnReadOnlineStatsByRank->FunctionFlags |= 0x400;

	return ReadOnlineStatsByRank_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadOnlineStatsForFriends(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead)
{
	static UFunction* uFnReadOnlineStatsForFriends = nullptr;

	if (!uFnReadOnlineStatsForFriends)
	{
		uFnReadOnlineStatsForFriends = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends");
	}

	UOnlineSubsystemSteamworks_execReadOnlineStatsForFriends_Params ReadOnlineStatsForFriends_Params;
	memset(&ReadOnlineStatsForFriends_Params, 0, sizeof(ReadOnlineStatsForFriends_Params));
	memcpy_s(&ReadOnlineStatsForFriends_Params.LocalUserNum, sizeof(ReadOnlineStatsForFriends_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadOnlineStatsForFriends_Params.StatsRead, sizeof(ReadOnlineStatsForFriends_Params.StatsRead), &StatsRead, sizeof(StatsRead));

	uFnReadOnlineStatsForFriends->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadOnlineStatsForFriends, &ReadOnlineStatsForFriends_Params, nullptr);
	uFnReadOnlineStatsForFriends->FunctionFlags |= 0x400;

	return ReadOnlineStatsForFriends_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// TArray<struct FUniqueNetId>    Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ReadOnlineStats(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>& Players)
{
	static UFunction* uFnReadOnlineStats = nullptr;

	if (!uFnReadOnlineStats)
	{
		uFnReadOnlineStats = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats");
	}

	UOnlineSubsystemSteamworks_execReadOnlineStats_Params ReadOnlineStats_Params;
	memset(&ReadOnlineStats_Params, 0, sizeof(ReadOnlineStats_Params));
	memcpy_s(&ReadOnlineStats_Params.LocalUserNum, sizeof(ReadOnlineStats_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadOnlineStats_Params.StatsRead, sizeof(ReadOnlineStats_Params.StatsRead), &StatsRead, sizeof(StatsRead));
	memcpy_s(&ReadOnlineStats_Params.Players, sizeof(ReadOnlineStats_Params.Players), &Players, sizeof(Players));

	uFnReadOnlineStats->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadOnlineStats, &ReadOnlineStats_Params, nullptr);
	uFnReadOnlineStats->FunctionFlags |= 0x400;

	memcpy_s(&Players, sizeof(Players), &ReadOnlineStats_Params.Players, sizeof(ReadOnlineStats_Params.Players));

	return ReadOnlineStats_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class USpeechRecognition*      SpeechRecogObj                 (CPF_Parm)

bool UOnlineSubsystemSteamworks::SetSpeechRecognitionObject(uint8_t LocalUserNum, class USpeechRecognition* SpeechRecogObj)
{
	static UFunction* uFnSetSpeechRecognitionObject = nullptr;

	if (!uFnSetSpeechRecognitionObject)
	{
		uFnSetSpeechRecognitionObject = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject");
	}

	UOnlineSubsystemSteamworks_execSetSpeechRecognitionObject_Params SetSpeechRecognitionObject_Params;
	memset(&SetSpeechRecognitionObject_Params, 0, sizeof(SetSpeechRecognitionObject_Params));
	memcpy_s(&SetSpeechRecognitionObject_Params.LocalUserNum, sizeof(SetSpeechRecognitionObject_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&SetSpeechRecognitionObject_Params.SpeechRecogObj, sizeof(SetSpeechRecognitionObject_Params.SpeechRecogObj), &SpeechRecogObj, sizeof(SpeechRecogObj));

	uFnSetSpeechRecognitionObject->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetSpeechRecognitionObject, &SetSpeechRecognitionObject_Params, nullptr);
	uFnSetSpeechRecognitionObject->FunctionFlags |= 0x400;

	return SetSpeechRecognitionObject_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        VocabularyId                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::SelectVocabulary(uint8_t LocalUserNum, int32_t VocabularyId)
{
	static UFunction* uFnSelectVocabulary = nullptr;

	if (!uFnSelectVocabulary)
	{
		uFnSelectVocabulary = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary");
	}

	UOnlineSubsystemSteamworks_execSelectVocabulary_Params SelectVocabulary_Params;
	memset(&SelectVocabulary_Params, 0, sizeof(SelectVocabulary_Params));
	memcpy_s(&SelectVocabulary_Params.LocalUserNum, sizeof(SelectVocabulary_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&SelectVocabulary_Params.VocabularyId, sizeof(SelectVocabulary_Params.VocabularyId), &VocabularyId, sizeof(VocabularyId));

	uFnSelectVocabulary->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSelectVocabulary, &SelectVocabulary_Params, nullptr);
	uFnSelectVocabulary->FunctionFlags |= 0x400;

	return SelectVocabulary_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RecognitionDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearRecognitionCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RecognitionDelegate)
{
	static UFunction* uFnClearRecognitionCompleteDelegate = nullptr;

	if (!uFnClearRecognitionCompleteDelegate)
	{
		uFnClearRecognitionCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearRecognitionCompleteDelegate_Params ClearRecognitionCompleteDelegate_Params;
	memset(&ClearRecognitionCompleteDelegate_Params, 0, sizeof(ClearRecognitionCompleteDelegate_Params));
	memcpy_s(&ClearRecognitionCompleteDelegate_Params.LocalUserNum, sizeof(ClearRecognitionCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearRecognitionCompleteDelegate_Params.RecognitionDelegate, sizeof(ClearRecognitionCompleteDelegate_Params.RecognitionDelegate), &RecognitionDelegate, sizeof(RecognitionDelegate));

	this->ProcessEvent(uFnClearRecognitionCompleteDelegate, &ClearRecognitionCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RecognitionDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddRecognitionCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RecognitionDelegate)
{
	static UFunction* uFnAddRecognitionCompleteDelegate = nullptr;

	if (!uFnAddRecognitionCompleteDelegate)
	{
		uFnAddRecognitionCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddRecognitionCompleteDelegate_Params AddRecognitionCompleteDelegate_Params;
	memset(&AddRecognitionCompleteDelegate_Params, 0, sizeof(AddRecognitionCompleteDelegate_Params));
	memcpy_s(&AddRecognitionCompleteDelegate_Params.LocalUserNum, sizeof(AddRecognitionCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddRecognitionCompleteDelegate_Params.RecognitionDelegate, sizeof(AddRecognitionCompleteDelegate_Params.RecognitionDelegate), &RecognitionDelegate, sizeof(RecognitionDelegate));

	this->ProcessEvent(uFnAddRecognitionCompleteDelegate, &AddRecognitionCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnRecognitionComplete()
{
	static UFunction* uFnOnRecognitionComplete = nullptr;

	if (!uFnOnRecognitionComplete)
	{
		uFnOnRecognitionComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete");
	}

	UOnlineSubsystemSteamworks_execOnRecognitionComplete_Params OnRecognitionComplete_Params;
	memset(&OnRecognitionComplete_Params, 0, sizeof(OnRecognitionComplete_Params));

	this->ProcessEvent(uFnOnRecognitionComplete, &OnRecognitionComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FSpeechRecognizedWord> Words                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetRecognitionResults(uint8_t LocalUserNum, TArray<struct FSpeechRecognizedWord>& Words)
{
	static UFunction* uFnGetRecognitionResults = nullptr;

	if (!uFnGetRecognitionResults)
	{
		uFnGetRecognitionResults = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults");
	}

	UOnlineSubsystemSteamworks_execGetRecognitionResults_Params GetRecognitionResults_Params;
	memset(&GetRecognitionResults_Params, 0, sizeof(GetRecognitionResults_Params));
	memcpy_s(&GetRecognitionResults_Params.LocalUserNum, sizeof(GetRecognitionResults_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&GetRecognitionResults_Params.Words, sizeof(GetRecognitionResults_Params.Words), &Words, sizeof(Words));

	uFnGetRecognitionResults->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetRecognitionResults, &GetRecognitionResults_Params, nullptr);
	uFnGetRecognitionResults->FunctionFlags |= 0x400;

	memcpy_s(&Words, sizeof(Words), &GetRecognitionResults_Params.Words, sizeof(GetRecognitionResults_Params.Words));

	return GetRecognitionResults_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::StopSpeechRecognition(uint8_t LocalUserNum)
{
	static UFunction* uFnStopSpeechRecognition = nullptr;

	if (!uFnStopSpeechRecognition)
	{
		uFnStopSpeechRecognition = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition");
	}

	UOnlineSubsystemSteamworks_execStopSpeechRecognition_Params StopSpeechRecognition_Params;
	memset(&StopSpeechRecognition_Params, 0, sizeof(StopSpeechRecognition_Params));
	memcpy_s(&StopSpeechRecognition_Params.LocalUserNum, sizeof(StopSpeechRecognition_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnStopSpeechRecognition->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStopSpeechRecognition, &StopSpeechRecognition_Params, nullptr);
	uFnStopSpeechRecognition->FunctionFlags |= 0x400;

	return StopSpeechRecognition_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::StartSpeechRecognition(uint8_t LocalUserNum)
{
	static UFunction* uFnStartSpeechRecognition = nullptr;

	if (!uFnStartSpeechRecognition)
	{
		uFnStartSpeechRecognition = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition");
	}

	UOnlineSubsystemSteamworks_execStartSpeechRecognition_Params StartSpeechRecognition_Params;
	memset(&StartSpeechRecognition_Params, 0, sizeof(StartSpeechRecognition_Params));
	memcpy_s(&StartSpeechRecognition_Params.LocalUserNum, sizeof(StartSpeechRecognition_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnStartSpeechRecognition->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStartSpeechRecognition, &StartSpeechRecognition_Params, nullptr);
	uFnStartSpeechRecognition->FunctionFlags |= 0x400;

	return StartSpeechRecognition_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::StopNetworkedVoice(uint8_t LocalUserNum)
{
	static UFunction* uFnStopNetworkedVoice = nullptr;

	if (!uFnStopNetworkedVoice)
	{
		uFnStopNetworkedVoice = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice");
	}

	UOnlineSubsystemSteamworks_execStopNetworkedVoice_Params StopNetworkedVoice_Params;
	memset(&StopNetworkedVoice_Params, 0, sizeof(StopNetworkedVoice_Params));
	memcpy_s(&StopNetworkedVoice_Params.LocalUserNum, sizeof(StopNetworkedVoice_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnStopNetworkedVoice->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStopNetworkedVoice, &StopNetworkedVoice_Params, nullptr);
	uFnStopNetworkedVoice->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::StartNetworkedVoice(uint8_t LocalUserNum)
{
	static UFunction* uFnStartNetworkedVoice = nullptr;

	if (!uFnStartNetworkedVoice)
	{
		uFnStartNetworkedVoice = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice");
	}

	UOnlineSubsystemSteamworks_execStartNetworkedVoice_Params StartNetworkedVoice_Params;
	memset(&StartNetworkedVoice_Params, 0, sizeof(StartNetworkedVoice_Params));
	memcpy_s(&StartNetworkedVoice_Params.LocalUserNum, sizeof(StartNetworkedVoice_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnStartNetworkedVoice->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStartNetworkedVoice, &StartNetworkedVoice_Params, nullptr);
	uFnStartNetworkedVoice->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         TalkerDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate)
{
	static UFunction* uFnClearPlayerTalkingDelegate = nullptr;

	if (!uFnClearPlayerTalkingDelegate)
	{
		uFnClearPlayerTalkingDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegate");
	}

	UOnlineSubsystemSteamworks_execClearPlayerTalkingDelegate_Params ClearPlayerTalkingDelegate_Params;
	memset(&ClearPlayerTalkingDelegate_Params, 0, sizeof(ClearPlayerTalkingDelegate_Params));
	memcpy_s(&ClearPlayerTalkingDelegate_Params.TalkerDelegate, sizeof(ClearPlayerTalkingDelegate_Params.TalkerDelegate), &TalkerDelegate, sizeof(TalkerDelegate));

	this->ProcessEvent(uFnClearPlayerTalkingDelegate, &ClearPlayerTalkingDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerTalkingDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         TalkerDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate)
{
	static UFunction* uFnAddPlayerTalkingDelegate = nullptr;

	if (!uFnAddPlayerTalkingDelegate)
	{
		uFnAddPlayerTalkingDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerTalkingDelegate");
	}

	UOnlineSubsystemSteamworks_execAddPlayerTalkingDelegate_Params AddPlayerTalkingDelegate_Params;
	memset(&AddPlayerTalkingDelegate_Params, 0, sizeof(AddPlayerTalkingDelegate_Params));
	memcpy_s(&AddPlayerTalkingDelegate_Params.TalkerDelegate, sizeof(AddPlayerTalkingDelegate_Params.TalkerDelegate), &TalkerDelegate, sizeof(TalkerDelegate));

	this->ProcessEvent(uFnAddPlayerTalkingDelegate, &AddPlayerTalkingDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerTalkingStateChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            Player                         (CPF_Parm | CPF_NeedCtorLink)
// bool                           bIsTalking                     (CPF_Parm)

void UOnlineSubsystemSteamworks::OnPlayerTalkingStateChange(struct FUniqueNetId Player, bool bIsTalking)
{
	static UFunction* uFnOnPlayerTalkingStateChange = nullptr;

	if (!uFnOnPlayerTalkingStateChange)
	{
		uFnOnPlayerTalkingStateChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerTalkingStateChange");
	}

	UOnlineSubsystemSteamworks_execOnPlayerTalkingStateChange_Params OnPlayerTalkingStateChange_Params;
	memset(&OnPlayerTalkingStateChange_Params, 0, sizeof(OnPlayerTalkingStateChange_Params));
	memcpy_s(&OnPlayerTalkingStateChange_Params.Player, sizeof(OnPlayerTalkingStateChange_Params.Player), &Player, sizeof(Player));
	OnPlayerTalkingStateChange_Params.bIsTalking = bIsTalking;

	this->ProcessEvent(uFnOnPlayerTalkingStateChange, &OnPlayerTalkingStateChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// bool                           bIsSystemWide                  (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::UnmuteRemoteTalker(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, bool bIsSystemWide)
{
	static UFunction* uFnUnmuteRemoteTalker = nullptr;

	if (!uFnUnmuteRemoteTalker)
	{
		uFnUnmuteRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker");
	}

	UOnlineSubsystemSteamworks_execUnmuteRemoteTalker_Params UnmuteRemoteTalker_Params;
	memset(&UnmuteRemoteTalker_Params, 0, sizeof(UnmuteRemoteTalker_Params));
	memcpy_s(&UnmuteRemoteTalker_Params.LocalUserNum, sizeof(UnmuteRemoteTalker_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&UnmuteRemoteTalker_Params.PlayerID, sizeof(UnmuteRemoteTalker_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	UnmuteRemoteTalker_Params.bIsSystemWide = bIsSystemWide;

	uFnUnmuteRemoteTalker->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUnmuteRemoteTalker, &UnmuteRemoteTalker_Params, nullptr);
	uFnUnmuteRemoteTalker->FunctionFlags |= 0x400;

	return UnmuteRemoteTalker_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// bool                           bIsSystemWide                  (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::MuteRemoteTalker(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, bool bIsSystemWide)
{
	static UFunction* uFnMuteRemoteTalker = nullptr;

	if (!uFnMuteRemoteTalker)
	{
		uFnMuteRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker");
	}

	UOnlineSubsystemSteamworks_execMuteRemoteTalker_Params MuteRemoteTalker_Params;
	memset(&MuteRemoteTalker_Params, 0, sizeof(MuteRemoteTalker_Params));
	memcpy_s(&MuteRemoteTalker_Params.LocalUserNum, sizeof(MuteRemoteTalker_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&MuteRemoteTalker_Params.PlayerID, sizeof(MuteRemoteTalker_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	MuteRemoteTalker_Params.bIsSystemWide = bIsSystemWide;

	uFnMuteRemoteTalker->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnMuteRemoteTalker, &MuteRemoteTalker_Params, nullptr);
	uFnMuteRemoteTalker->FunctionFlags |= 0x400;

	return MuteRemoteTalker_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Priority                       (CPF_Parm)

bool UOnlineSubsystemSteamworks::SetRemoteTalkerPriority(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, int32_t Priority)
{
	static UFunction* uFnSetRemoteTalkerPriority = nullptr;

	if (!uFnSetRemoteTalkerPriority)
	{
		uFnSetRemoteTalkerPriority = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority");
	}

	UOnlineSubsystemSteamworks_execSetRemoteTalkerPriority_Params SetRemoteTalkerPriority_Params;
	memset(&SetRemoteTalkerPriority_Params, 0, sizeof(SetRemoteTalkerPriority_Params));
	memcpy_s(&SetRemoteTalkerPriority_Params.LocalUserNum, sizeof(SetRemoteTalkerPriority_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&SetRemoteTalkerPriority_Params.PlayerID, sizeof(SetRemoteTalkerPriority_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	memcpy_s(&SetRemoteTalkerPriority_Params.Priority, sizeof(SetRemoteTalkerPriority_Params.Priority), &Priority, sizeof(Priority));

	uFnSetRemoteTalkerPriority->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetRemoteTalkerPriority, &SetRemoteTalkerPriority_Params, nullptr);
	uFnSetRemoteTalkerPriority->FunctionFlags |= 0x400;

	return SetRemoteTalkerPriority_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsHeadsetPresent(uint8_t LocalUserNum)
{
	static UFunction* uFnIsHeadsetPresent = nullptr;

	if (!uFnIsHeadsetPresent)
	{
		uFnIsHeadsetPresent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent");
	}

	UOnlineSubsystemSteamworks_execIsHeadsetPresent_Params IsHeadsetPresent_Params;
	memset(&IsHeadsetPresent_Params, 0, sizeof(IsHeadsetPresent_Params));
	memcpy_s(&IsHeadsetPresent_Params.LocalUserNum, sizeof(IsHeadsetPresent_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnIsHeadsetPresent->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsHeadsetPresent, &IsHeadsetPresent_Params, nullptr);
	uFnIsHeadsetPresent->FunctionFlags |= 0x400;

	return IsHeadsetPresent_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::IsRemotePlayerTalking(struct FUniqueNetId PlayerID)
{
	static UFunction* uFnIsRemotePlayerTalking = nullptr;

	if (!uFnIsRemotePlayerTalking)
	{
		uFnIsRemotePlayerTalking = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking");
	}

	UOnlineSubsystemSteamworks_execIsRemotePlayerTalking_Params IsRemotePlayerTalking_Params;
	memset(&IsRemotePlayerTalking_Params, 0, sizeof(IsRemotePlayerTalking_Params));
	memcpy_s(&IsRemotePlayerTalking_Params.PlayerID, sizeof(IsRemotePlayerTalking_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	uFnIsRemotePlayerTalking->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsRemotePlayerTalking, &IsRemotePlayerTalking_Params, nullptr);
	uFnIsRemotePlayerTalking->FunctionFlags |= 0x400;

	return IsRemotePlayerTalking_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsLocalPlayerTalking(uint8_t LocalUserNum)
{
	static UFunction* uFnIsLocalPlayerTalking = nullptr;

	if (!uFnIsLocalPlayerTalking)
	{
		uFnIsLocalPlayerTalking = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking");
	}

	UOnlineSubsystemSteamworks_execIsLocalPlayerTalking_Params IsLocalPlayerTalking_Params;
	memset(&IsLocalPlayerTalking_Params, 0, sizeof(IsLocalPlayerTalking_Params));
	memcpy_s(&IsLocalPlayerTalking_Params.LocalUserNum, sizeof(IsLocalPlayerTalking_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnIsLocalPlayerTalking->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsLocalPlayerTalking, &IsLocalPlayerTalking_Params, nullptr);
	uFnIsLocalPlayerTalking->FunctionFlags |= 0x400;

	return IsLocalPlayerTalking_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::UnregisterRemoteTalker(struct FUniqueNetId PlayerID)
{
	static UFunction* uFnUnregisterRemoteTalker = nullptr;

	if (!uFnUnregisterRemoteTalker)
	{
		uFnUnregisterRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker");
	}

	UOnlineSubsystemSteamworks_execUnregisterRemoteTalker_Params UnregisterRemoteTalker_Params;
	memset(&UnregisterRemoteTalker_Params, 0, sizeof(UnregisterRemoteTalker_Params));
	memcpy_s(&UnregisterRemoteTalker_Params.PlayerID, sizeof(UnregisterRemoteTalker_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	uFnUnregisterRemoteTalker->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUnregisterRemoteTalker, &UnregisterRemoteTalker_Params, nullptr);
	uFnUnregisterRemoteTalker->FunctionFlags |= 0x400;

	return UnregisterRemoteTalker_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::RegisterRemoteTalker(struct FUniqueNetId PlayerID)
{
	static UFunction* uFnRegisterRemoteTalker = nullptr;

	if (!uFnRegisterRemoteTalker)
	{
		uFnRegisterRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker");
	}

	UOnlineSubsystemSteamworks_execRegisterRemoteTalker_Params RegisterRemoteTalker_Params;
	memset(&RegisterRemoteTalker_Params, 0, sizeof(RegisterRemoteTalker_Params));
	memcpy_s(&RegisterRemoteTalker_Params.PlayerID, sizeof(RegisterRemoteTalker_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	uFnRegisterRemoteTalker->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRegisterRemoteTalker, &RegisterRemoteTalker_Params, nullptr);
	uFnRegisterRemoteTalker->FunctionFlags |= 0x400;

	return RegisterRemoteTalker_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::UnregisterLocalTalker(uint8_t LocalUserNum)
{
	static UFunction* uFnUnregisterLocalTalker = nullptr;

	if (!uFnUnregisterLocalTalker)
	{
		uFnUnregisterLocalTalker = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker");
	}

	UOnlineSubsystemSteamworks_execUnregisterLocalTalker_Params UnregisterLocalTalker_Params;
	memset(&UnregisterLocalTalker_Params, 0, sizeof(UnregisterLocalTalker_Params));
	memcpy_s(&UnregisterLocalTalker_Params.LocalUserNum, sizeof(UnregisterLocalTalker_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnUnregisterLocalTalker->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUnregisterLocalTalker, &UnregisterLocalTalker_Params, nullptr);
	uFnUnregisterLocalTalker->FunctionFlags |= 0x400;

	return UnregisterLocalTalker_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::RegisterLocalTalker(uint8_t LocalUserNum)
{
	static UFunction* uFnRegisterLocalTalker = nullptr;

	if (!uFnRegisterLocalTalker)
	{
		uFnRegisterLocalTalker = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker");
	}

	UOnlineSubsystemSteamworks_execRegisterLocalTalker_Params RegisterLocalTalker_Params;
	memset(&RegisterLocalTalker_Params, 0, sizeof(RegisterLocalTalker_Params));
	memcpy_s(&RegisterLocalTalker_Params.LocalUserNum, sizeof(RegisterLocalTalker_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnRegisterLocalTalker->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRegisterLocalTalker, &RegisterLocalTalker_Params, nullptr);
	uFnRegisterLocalTalker->FunctionFlags |= 0x400;

	return RegisterLocalTalker_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// EOnlineEnumerationReadState    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        Count                          (CPF_OptionalParm | CPF_Parm)
// int32_t                        StartingAt                     (CPF_OptionalParm | CPF_Parm)
// TArray<struct FOnlineFriend>   Friends                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

EOnlineEnumerationReadState UOnlineSubsystemSteamworks::GetFriendsList(uint8_t LocalUserNum, int32_t Count, int32_t StartingAt, TArray<struct FOnlineFriend>& Friends)
{
	static UFunction* uFnGetFriendsList = nullptr;

	if (!uFnGetFriendsList)
	{
		uFnGetFriendsList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList");
	}

	UOnlineSubsystemSteamworks_execGetFriendsList_Params GetFriendsList_Params;
	memset(&GetFriendsList_Params, 0, sizeof(GetFriendsList_Params));
	memcpy_s(&GetFriendsList_Params.LocalUserNum, sizeof(GetFriendsList_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&GetFriendsList_Params.Count, sizeof(GetFriendsList_Params.Count), &Count, sizeof(Count));
	memcpy_s(&GetFriendsList_Params.StartingAt, sizeof(GetFriendsList_Params.StartingAt), &StartingAt, sizeof(StartingAt));
	memcpy_s(&GetFriendsList_Params.Friends, sizeof(GetFriendsList_Params.Friends), &Friends, sizeof(Friends));

	uFnGetFriendsList->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetFriendsList, &GetFriendsList_Params, nullptr);
	uFnGetFriendsList->FunctionFlags |= 0x400;

	memcpy_s(&Friends, sizeof(Friends), &GetFriendsList_Params.Friends, sizeof(GetFriendsList_Params.Friends));

	return GetFriendsList_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadFriendsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate)
{
	static UFunction* uFnClearReadFriendsCompleteDelegate = nullptr;

	if (!uFnClearReadFriendsCompleteDelegate)
	{
		uFnClearReadFriendsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadFriendsCompleteDelegate_Params ClearReadFriendsCompleteDelegate_Params;
	memset(&ClearReadFriendsCompleteDelegate_Params, 0, sizeof(ClearReadFriendsCompleteDelegate_Params));
	memcpy_s(&ClearReadFriendsCompleteDelegate_Params.LocalUserNum, sizeof(ClearReadFriendsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearReadFriendsCompleteDelegate_Params.ReadFriendsCompleteDelegate, sizeof(ClearReadFriendsCompleteDelegate_Params.ReadFriendsCompleteDelegate), &ReadFriendsCompleteDelegate, sizeof(ReadFriendsCompleteDelegate));

	this->ProcessEvent(uFnClearReadFriendsCompleteDelegate, &ClearReadFriendsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadFriendsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate)
{
	static UFunction* uFnAddReadFriendsCompleteDelegate = nullptr;

	if (!uFnAddReadFriendsCompleteDelegate)
	{
		uFnAddReadFriendsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadFriendsCompleteDelegate_Params AddReadFriendsCompleteDelegate_Params;
	memset(&AddReadFriendsCompleteDelegate_Params, 0, sizeof(AddReadFriendsCompleteDelegate_Params));
	memcpy_s(&AddReadFriendsCompleteDelegate_Params.LocalUserNum, sizeof(AddReadFriendsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddReadFriendsCompleteDelegate_Params.ReadFriendsCompleteDelegate, sizeof(AddReadFriendsCompleteDelegate_Params.ReadFriendsCompleteDelegate), &ReadFriendsCompleteDelegate, sizeof(ReadFriendsCompleteDelegate));

	this->ProcessEvent(uFnAddReadFriendsCompleteDelegate, &AddReadFriendsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadFriendsComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnReadFriendsComplete = nullptr;

	if (!uFnOnReadFriendsComplete)
	{
		uFnOnReadFriendsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadFriendsComplete_Params OnReadFriendsComplete_Params;
	memset(&OnReadFriendsComplete_Params, 0, sizeof(OnReadFriendsComplete_Params));
	OnReadFriendsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadFriendsComplete, &OnReadFriendsComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        Count                          (CPF_OptionalParm | CPF_Parm)
// int32_t                        StartingAt                     (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadFriendsList(uint8_t LocalUserNum, int32_t Count, int32_t StartingAt)
{
	static UFunction* uFnReadFriendsList = nullptr;

	if (!uFnReadFriendsList)
	{
		uFnReadFriendsList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList");
	}

	UOnlineSubsystemSteamworks_execReadFriendsList_Params ReadFriendsList_Params;
	memset(&ReadFriendsList_Params, 0, sizeof(ReadFriendsList_Params));
	memcpy_s(&ReadFriendsList_Params.LocalUserNum, sizeof(ReadFriendsList_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadFriendsList_Params.Count, sizeof(ReadFriendsList_Params.Count), &Count, sizeof(Count));
	memcpy_s(&ReadFriendsList_Params.StartingAt, sizeof(ReadFriendsList_Params.StartingAt), &StartingAt, sizeof(StartingAt));

	uFnReadFriendsList->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadFriendsList, &ReadFriendsList_Params, nullptr);
	uFnReadFriendsList->FunctionFlags |= 0x400;

	return ReadFriendsList_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWritePlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate)
{
	static UFunction* uFnClearWritePlayerStorageCompleteDelegate = nullptr;

	if (!uFnClearWritePlayerStorageCompleteDelegate)
	{
		uFnClearWritePlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearWritePlayerStorageCompleteDelegate_Params ClearWritePlayerStorageCompleteDelegate_Params;
	memset(&ClearWritePlayerStorageCompleteDelegate_Params, 0, sizeof(ClearWritePlayerStorageCompleteDelegate_Params));
	memcpy_s(&ClearWritePlayerStorageCompleteDelegate_Params.LocalUserNum, sizeof(ClearWritePlayerStorageCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearWritePlayerStorageCompleteDelegate_Params.WritePlayerStorageCompleteDelegate, sizeof(ClearWritePlayerStorageCompleteDelegate_Params.WritePlayerStorageCompleteDelegate), &WritePlayerStorageCompleteDelegate, sizeof(WritePlayerStorageCompleteDelegate));

	this->ProcessEvent(uFnClearWritePlayerStorageCompleteDelegate, &ClearWritePlayerStorageCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWritePlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate)
{
	static UFunction* uFnAddWritePlayerStorageCompleteDelegate = nullptr;

	if (!uFnAddWritePlayerStorageCompleteDelegate)
	{
		uFnAddWritePlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddWritePlayerStorageCompleteDelegate_Params AddWritePlayerStorageCompleteDelegate_Params;
	memset(&AddWritePlayerStorageCompleteDelegate_Params, 0, sizeof(AddWritePlayerStorageCompleteDelegate_Params));
	memcpy_s(&AddWritePlayerStorageCompleteDelegate_Params.LocalUserNum, sizeof(AddWritePlayerStorageCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddWritePlayerStorageCompleteDelegate_Params.WritePlayerStorageCompleteDelegate, sizeof(AddWritePlayerStorageCompleteDelegate_Params.WritePlayerStorageCompleteDelegate), &WritePlayerStorageCompleteDelegate, sizeof(WritePlayerStorageCompleteDelegate));

	this->ProcessEvent(uFnAddWritePlayerStorageCompleteDelegate, &AddWritePlayerStorageCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnWritePlayerStorageComplete(uint8_t LocalUserNum, bool bWasSuccessful)
{
	static UFunction* uFnOnWritePlayerStorageComplete = nullptr;

	if (!uFnOnWritePlayerStorageComplete)
	{
		uFnOnWritePlayerStorageComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete");
	}

	UOnlineSubsystemSteamworks_execOnWritePlayerStorageComplete_Params OnWritePlayerStorageComplete_Params;
	memset(&OnWritePlayerStorageComplete_Params, 0, sizeof(OnWritePlayerStorageComplete_Params));
	memcpy_s(&OnWritePlayerStorageComplete_Params.LocalUserNum, sizeof(OnWritePlayerStorageComplete_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	OnWritePlayerStorageComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnWritePlayerStorageComplete, &OnWritePlayerStorageComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage
// [0x00024001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)
// int32_t                        DeviceID                       (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::WritePlayerStorage(uint8_t LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int32_t DeviceID)
{
	static UFunction* uFnWritePlayerStorage = nullptr;

	if (!uFnWritePlayerStorage)
	{
		uFnWritePlayerStorage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage");
	}

	UOnlineSubsystemSteamworks_execWritePlayerStorage_Params WritePlayerStorage_Params;
	memset(&WritePlayerStorage_Params, 0, sizeof(WritePlayerStorage_Params));
	memcpy_s(&WritePlayerStorage_Params.LocalUserNum, sizeof(WritePlayerStorage_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&WritePlayerStorage_Params.PlayerStorage, sizeof(WritePlayerStorage_Params.PlayerStorage), &PlayerStorage, sizeof(PlayerStorage));
	memcpy_s(&WritePlayerStorage_Params.DeviceID, sizeof(WritePlayerStorage_Params.DeviceID), &DeviceID, sizeof(DeviceID));

	this->ProcessEvent(uFnWritePlayerStorage, &WritePlayerStorage_Params, nullptr);

	return WritePlayerStorage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOnlinePlayerStorage*    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class UOnlinePlayerStorage* UOnlineSubsystemSteamworks::GetPlayerStorage(uint8_t LocalUserNum)
{
	static UFunction* uFnGetPlayerStorage = nullptr;

	if (!uFnGetPlayerStorage)
	{
		uFnGetPlayerStorage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage");
	}

	UOnlineSubsystemSteamworks_execGetPlayerStorage_Params GetPlayerStorage_Params;
	memset(&GetPlayerStorage_Params, 0, sizeof(GetPlayerStorage_Params));
	memcpy_s(&GetPlayerStorage_Params.LocalUserNum, sizeof(GetPlayerStorage_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnGetPlayerStorage, &GetPlayerStorage_Params, nullptr);

	return GetPlayerStorage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            NetId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageForNetIdCompleteDelegate(struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate)
{
	static UFunction* uFnClearReadPlayerStorageForNetIdCompleteDelegate = nullptr;

	if (!uFnClearReadPlayerStorageForNetIdCompleteDelegate)
	{
		uFnClearReadPlayerStorageForNetIdCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadPlayerStorageForNetIdCompleteDelegate_Params ClearReadPlayerStorageForNetIdCompleteDelegate_Params;
	memset(&ClearReadPlayerStorageForNetIdCompleteDelegate_Params, 0, sizeof(ClearReadPlayerStorageForNetIdCompleteDelegate_Params));
	memcpy_s(&ClearReadPlayerStorageForNetIdCompleteDelegate_Params.NetId, sizeof(ClearReadPlayerStorageForNetIdCompleteDelegate_Params.NetId), &NetId, sizeof(NetId));
	memcpy_s(&ClearReadPlayerStorageForNetIdCompleteDelegate_Params.ReadPlayerStorageForNetIdCompleteDelegate, sizeof(ClearReadPlayerStorageForNetIdCompleteDelegate_Params.ReadPlayerStorageForNetIdCompleteDelegate), &ReadPlayerStorageForNetIdCompleteDelegate, sizeof(ReadPlayerStorageForNetIdCompleteDelegate));

	this->ProcessEvent(uFnClearReadPlayerStorageForNetIdCompleteDelegate, &ClearReadPlayerStorageForNetIdCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            NetId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadPlayerStorageForNetIdCompleteDelegate(struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate)
{
	static UFunction* uFnAddReadPlayerStorageForNetIdCompleteDelegate = nullptr;

	if (!uFnAddReadPlayerStorageForNetIdCompleteDelegate)
	{
		uFnAddReadPlayerStorageForNetIdCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadPlayerStorageForNetIdCompleteDelegate_Params AddReadPlayerStorageForNetIdCompleteDelegate_Params;
	memset(&AddReadPlayerStorageForNetIdCompleteDelegate_Params, 0, sizeof(AddReadPlayerStorageForNetIdCompleteDelegate_Params));
	memcpy_s(&AddReadPlayerStorageForNetIdCompleteDelegate_Params.NetId, sizeof(AddReadPlayerStorageForNetIdCompleteDelegate_Params.NetId), &NetId, sizeof(NetId));
	memcpy_s(&AddReadPlayerStorageForNetIdCompleteDelegate_Params.ReadPlayerStorageForNetIdCompleteDelegate, sizeof(AddReadPlayerStorageForNetIdCompleteDelegate_Params.ReadPlayerStorageForNetIdCompleteDelegate), &ReadPlayerStorageForNetIdCompleteDelegate, sizeof(ReadPlayerStorageForNetIdCompleteDelegate));

	this->ProcessEvent(uFnAddReadPlayerStorageForNetIdCompleteDelegate, &AddReadPlayerStorageForNetIdCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            NetId                          (CPF_Parm | CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadPlayerStorageForNetIdComplete(struct FUniqueNetId NetId, bool bWasSuccessful)
{
	static UFunction* uFnOnReadPlayerStorageForNetIdComplete = nullptr;

	if (!uFnOnReadPlayerStorageForNetIdComplete)
	{
		uFnOnReadPlayerStorageForNetIdComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadPlayerStorageForNetIdComplete_Params OnReadPlayerStorageForNetIdComplete_Params;
	memset(&OnReadPlayerStorageForNetIdComplete_Params, 0, sizeof(OnReadPlayerStorageForNetIdComplete_Params));
	memcpy_s(&OnReadPlayerStorageForNetIdComplete_Params.NetId, sizeof(OnReadPlayerStorageForNetIdComplete_Params.NetId), &NetId, sizeof(NetId));
	OnReadPlayerStorageForNetIdComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadPlayerStorageForNetIdComplete, &OnReadPlayerStorageForNetIdComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            NetId                          (CPF_Parm | CPF_NeedCtorLink)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadPlayerStorageForNetId(uint8_t LocalUserNum, struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage)
{
	static UFunction* uFnReadPlayerStorageForNetId = nullptr;

	if (!uFnReadPlayerStorageForNetId)
	{
		uFnReadPlayerStorageForNetId = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId");
	}

	UOnlineSubsystemSteamworks_execReadPlayerStorageForNetId_Params ReadPlayerStorageForNetId_Params;
	memset(&ReadPlayerStorageForNetId_Params, 0, sizeof(ReadPlayerStorageForNetId_Params));
	memcpy_s(&ReadPlayerStorageForNetId_Params.LocalUserNum, sizeof(ReadPlayerStorageForNetId_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadPlayerStorageForNetId_Params.NetId, sizeof(ReadPlayerStorageForNetId_Params.NetId), &NetId, sizeof(NetId));
	memcpy_s(&ReadPlayerStorageForNetId_Params.PlayerStorage, sizeof(ReadPlayerStorageForNetId_Params.PlayerStorage), &PlayerStorage, sizeof(PlayerStorage));

	this->ProcessEvent(uFnReadPlayerStorageForNetId, &ReadPlayerStorageForNetId_Params, nullptr);

	return ReadPlayerStorageForNetId_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate)
{
	static UFunction* uFnClearReadPlayerStorageCompleteDelegate = nullptr;

	if (!uFnClearReadPlayerStorageCompleteDelegate)
	{
		uFnClearReadPlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadPlayerStorageCompleteDelegate_Params ClearReadPlayerStorageCompleteDelegate_Params;
	memset(&ClearReadPlayerStorageCompleteDelegate_Params, 0, sizeof(ClearReadPlayerStorageCompleteDelegate_Params));
	memcpy_s(&ClearReadPlayerStorageCompleteDelegate_Params.LocalUserNum, sizeof(ClearReadPlayerStorageCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearReadPlayerStorageCompleteDelegate_Params.ReadPlayerStorageCompleteDelegate, sizeof(ClearReadPlayerStorageCompleteDelegate_Params.ReadPlayerStorageCompleteDelegate), &ReadPlayerStorageCompleteDelegate, sizeof(ReadPlayerStorageCompleteDelegate));

	this->ProcessEvent(uFnClearReadPlayerStorageCompleteDelegate, &ClearReadPlayerStorageCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadPlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate)
{
	static UFunction* uFnAddReadPlayerStorageCompleteDelegate = nullptr;

	if (!uFnAddReadPlayerStorageCompleteDelegate)
	{
		uFnAddReadPlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadPlayerStorageCompleteDelegate_Params AddReadPlayerStorageCompleteDelegate_Params;
	memset(&AddReadPlayerStorageCompleteDelegate_Params, 0, sizeof(AddReadPlayerStorageCompleteDelegate_Params));
	memcpy_s(&AddReadPlayerStorageCompleteDelegate_Params.LocalUserNum, sizeof(AddReadPlayerStorageCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddReadPlayerStorageCompleteDelegate_Params.ReadPlayerStorageCompleteDelegate, sizeof(AddReadPlayerStorageCompleteDelegate_Params.ReadPlayerStorageCompleteDelegate), &ReadPlayerStorageCompleteDelegate, sizeof(ReadPlayerStorageCompleteDelegate));

	this->ProcessEvent(uFnAddReadPlayerStorageCompleteDelegate, &AddReadPlayerStorageCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadPlayerStorageComplete(uint8_t LocalUserNum, bool bWasSuccessful)
{
	static UFunction* uFnOnReadPlayerStorageComplete = nullptr;

	if (!uFnOnReadPlayerStorageComplete)
	{
		uFnOnReadPlayerStorageComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadPlayerStorageComplete_Params OnReadPlayerStorageComplete_Params;
	memset(&OnReadPlayerStorageComplete_Params, 0, sizeof(OnReadPlayerStorageComplete_Params));
	memcpy_s(&OnReadPlayerStorageComplete_Params.LocalUserNum, sizeof(OnReadPlayerStorageComplete_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	OnReadPlayerStorageComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadPlayerStorageComplete, &OnReadPlayerStorageComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage
// [0x00024001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)
// int32_t                        DeviceID                       (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadPlayerStorage(uint8_t LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int32_t DeviceID)
{
	static UFunction* uFnReadPlayerStorage = nullptr;

	if (!uFnReadPlayerStorage)
	{
		uFnReadPlayerStorage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage");
	}

	UOnlineSubsystemSteamworks_execReadPlayerStorage_Params ReadPlayerStorage_Params;
	memset(&ReadPlayerStorage_Params, 0, sizeof(ReadPlayerStorage_Params));
	memcpy_s(&ReadPlayerStorage_Params.LocalUserNum, sizeof(ReadPlayerStorage_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadPlayerStorage_Params.PlayerStorage, sizeof(ReadPlayerStorage_Params.PlayerStorage), &PlayerStorage, sizeof(PlayerStorage));
	memcpy_s(&ReadPlayerStorage_Params.DeviceID, sizeof(ReadPlayerStorage_Params.DeviceID), &DeviceID, sizeof(DeviceID));

	this->ProcessEvent(uFnReadPlayerStorage, &ReadPlayerStorage_Params, nullptr);

	return ReadPlayerStorage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWriteProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate)
{
	static UFunction* uFnClearWriteProfileSettingsCompleteDelegate = nullptr;

	if (!uFnClearWriteProfileSettingsCompleteDelegate)
	{
		uFnClearWriteProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearWriteProfileSettingsCompleteDelegate_Params ClearWriteProfileSettingsCompleteDelegate_Params;
	memset(&ClearWriteProfileSettingsCompleteDelegate_Params, 0, sizeof(ClearWriteProfileSettingsCompleteDelegate_Params));
	memcpy_s(&ClearWriteProfileSettingsCompleteDelegate_Params.LocalUserNum, sizeof(ClearWriteProfileSettingsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearWriteProfileSettingsCompleteDelegate_Params.WriteProfileSettingsCompleteDelegate, sizeof(ClearWriteProfileSettingsCompleteDelegate_Params.WriteProfileSettingsCompleteDelegate), &WriteProfileSettingsCompleteDelegate, sizeof(WriteProfileSettingsCompleteDelegate));

	this->ProcessEvent(uFnClearWriteProfileSettingsCompleteDelegate, &ClearWriteProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWriteProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate)
{
	static UFunction* uFnAddWriteProfileSettingsCompleteDelegate = nullptr;

	if (!uFnAddWriteProfileSettingsCompleteDelegate)
	{
		uFnAddWriteProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddWriteProfileSettingsCompleteDelegate_Params AddWriteProfileSettingsCompleteDelegate_Params;
	memset(&AddWriteProfileSettingsCompleteDelegate_Params, 0, sizeof(AddWriteProfileSettingsCompleteDelegate_Params));
	memcpy_s(&AddWriteProfileSettingsCompleteDelegate_Params.LocalUserNum, sizeof(AddWriteProfileSettingsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddWriteProfileSettingsCompleteDelegate_Params.WriteProfileSettingsCompleteDelegate, sizeof(AddWriteProfileSettingsCompleteDelegate_Params.WriteProfileSettingsCompleteDelegate), &WriteProfileSettingsCompleteDelegate, sizeof(WriteProfileSettingsCompleteDelegate));

	this->ProcessEvent(uFnAddWriteProfileSettingsCompleteDelegate, &AddWriteProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnWriteProfileSettingsComplete(uint8_t LocalUserNum, bool bWasSuccessful)
{
	static UFunction* uFnOnWriteProfileSettingsComplete = nullptr;

	if (!uFnOnWriteProfileSettingsComplete)
	{
		uFnOnWriteProfileSettingsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete");
	}

	UOnlineSubsystemSteamworks_execOnWriteProfileSettingsComplete_Params OnWriteProfileSettingsComplete_Params;
	memset(&OnWriteProfileSettingsComplete_Params, 0, sizeof(OnWriteProfileSettingsComplete_Params));
	memcpy_s(&OnWriteProfileSettingsComplete_Params.LocalUserNum, sizeof(OnWriteProfileSettingsComplete_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	OnWriteProfileSettingsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnWriteProfileSettingsComplete, &OnWriteProfileSettingsComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)

bool UOnlineSubsystemSteamworks::WriteProfileSettings(uint8_t LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static UFunction* uFnWriteProfileSettings = nullptr;

	if (!uFnWriteProfileSettings)
	{
		uFnWriteProfileSettings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings");
	}

	UOnlineSubsystemSteamworks_execWriteProfileSettings_Params WriteProfileSettings_Params;
	memset(&WriteProfileSettings_Params, 0, sizeof(WriteProfileSettings_Params));
	memcpy_s(&WriteProfileSettings_Params.LocalUserNum, sizeof(WriteProfileSettings_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&WriteProfileSettings_Params.ProfileSettings, sizeof(WriteProfileSettings_Params.ProfileSettings), &ProfileSettings, sizeof(ProfileSettings));

	uFnWriteProfileSettings->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnWriteProfileSettings, &WriteProfileSettings_Params, nullptr);
	uFnWriteProfileSettings->FunctionFlags |= 0x400;

	return WriteProfileSettings_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOnlineProfileSettings*  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class UOnlineProfileSettings* UOnlineSubsystemSteamworks::GetProfileSettings(uint8_t LocalUserNum)
{
	static UFunction* uFnGetProfileSettings = nullptr;

	if (!uFnGetProfileSettings)
	{
		uFnGetProfileSettings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings");
	}

	UOnlineSubsystemSteamworks_execGetProfileSettings_Params GetProfileSettings_Params;
	memset(&GetProfileSettings_Params, 0, sizeof(GetProfileSettings_Params));
	memcpy_s(&GetProfileSettings_Params.LocalUserNum, sizeof(GetProfileSettings_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnGetProfileSettings, &GetProfileSettings_Params, nullptr);

	return GetProfileSettings_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate)
{
	static UFunction* uFnClearReadProfileSettingsCompleteDelegate = nullptr;

	if (!uFnClearReadProfileSettingsCompleteDelegate)
	{
		uFnClearReadProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadProfileSettingsCompleteDelegate_Params ClearReadProfileSettingsCompleteDelegate_Params;
	memset(&ClearReadProfileSettingsCompleteDelegate_Params, 0, sizeof(ClearReadProfileSettingsCompleteDelegate_Params));
	memcpy_s(&ClearReadProfileSettingsCompleteDelegate_Params.LocalUserNum, sizeof(ClearReadProfileSettingsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearReadProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate, sizeof(ClearReadProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate), &ReadProfileSettingsCompleteDelegate, sizeof(ReadProfileSettingsCompleteDelegate));

	this->ProcessEvent(uFnClearReadProfileSettingsCompleteDelegate, &ClearReadProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate)
{
	static UFunction* uFnAddReadProfileSettingsCompleteDelegate = nullptr;

	if (!uFnAddReadProfileSettingsCompleteDelegate)
	{
		uFnAddReadProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadProfileSettingsCompleteDelegate_Params AddReadProfileSettingsCompleteDelegate_Params;
	memset(&AddReadProfileSettingsCompleteDelegate_Params, 0, sizeof(AddReadProfileSettingsCompleteDelegate_Params));
	memcpy_s(&AddReadProfileSettingsCompleteDelegate_Params.LocalUserNum, sizeof(AddReadProfileSettingsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddReadProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate, sizeof(AddReadProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate), &ReadProfileSettingsCompleteDelegate, sizeof(ReadProfileSettingsCompleteDelegate));

	this->ProcessEvent(uFnAddReadProfileSettingsCompleteDelegate, &AddReadProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadProfileSettingsComplete(uint8_t LocalUserNum, bool bWasSuccessful)
{
	static UFunction* uFnOnReadProfileSettingsComplete = nullptr;

	if (!uFnOnReadProfileSettingsComplete)
	{
		uFnOnReadProfileSettingsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadProfileSettingsComplete_Params OnReadProfileSettingsComplete_Params;
	memset(&OnReadProfileSettingsComplete_Params, 0, sizeof(OnReadProfileSettingsComplete_Params));
	memcpy_s(&OnReadProfileSettingsComplete_Params.LocalUserNum, sizeof(OnReadProfileSettingsComplete_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	OnReadProfileSettingsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadProfileSettingsComplete, &OnReadProfileSettingsComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadProfileSettings(uint8_t LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static UFunction* uFnReadProfileSettings = nullptr;

	if (!uFnReadProfileSettings)
	{
		uFnReadProfileSettings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings");
	}

	UOnlineSubsystemSteamworks_execReadProfileSettings_Params ReadProfileSettings_Params;
	memset(&ReadProfileSettings_Params, 0, sizeof(ReadProfileSettings_Params));
	memcpy_s(&ReadProfileSettings_Params.LocalUserNum, sizeof(ReadProfileSettings_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadProfileSettings_Params.ProfileSettings, sizeof(ReadProfileSettings_Params.ProfileSettings), &ProfileSettings, sizeof(ProfileSettings));

	uFnReadProfileSettings->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadProfileSettings, &ReadProfileSettings_Params, nullptr);
	uFnReadProfileSettings->FunctionFlags |= 0x400;

	return ReadProfileSettings_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendsDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendsChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendsDelegate)
{
	static UFunction* uFnClearFriendsChangeDelegate = nullptr;

	if (!uFnClearFriendsChangeDelegate)
	{
		uFnClearFriendsChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearFriendsChangeDelegate_Params ClearFriendsChangeDelegate_Params;
	memset(&ClearFriendsChangeDelegate_Params, 0, sizeof(ClearFriendsChangeDelegate_Params));
	memcpy_s(&ClearFriendsChangeDelegate_Params.LocalUserNum, sizeof(ClearFriendsChangeDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearFriendsChangeDelegate_Params.FriendsDelegate, sizeof(ClearFriendsChangeDelegate_Params.FriendsDelegate), &FriendsDelegate, sizeof(FriendsDelegate));

	this->ProcessEvent(uFnClearFriendsChangeDelegate, &ClearFriendsChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAvatarChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         AvatarDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearAvatarChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate AvatarDelegate)
{
	static UFunction* uFnClearAvatarChangeDelegate = nullptr;

	if (!uFnClearAvatarChangeDelegate)
	{
		uFnClearAvatarChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAvatarChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearAvatarChangeDelegate_Params ClearAvatarChangeDelegate_Params;
	memset(&ClearAvatarChangeDelegate_Params, 0, sizeof(ClearAvatarChangeDelegate_Params));
	memcpy_s(&ClearAvatarChangeDelegate_Params.LocalUserNum, sizeof(ClearAvatarChangeDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearAvatarChangeDelegate_Params.AvatarDelegate, sizeof(ClearAvatarChangeDelegate_Params.AvatarDelegate), &AvatarDelegate, sizeof(AvatarDelegate));

	this->ProcessEvent(uFnClearAvatarChangeDelegate, &ClearAvatarChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAvatarChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         AvatarDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddAvatarChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate AvatarDelegate)
{
	static UFunction* uFnAddAvatarChangeDelegate = nullptr;

	if (!uFnAddAvatarChangeDelegate)
	{
		uFnAddAvatarChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAvatarChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddAvatarChangeDelegate_Params AddAvatarChangeDelegate_Params;
	memset(&AddAvatarChangeDelegate_Params, 0, sizeof(AddAvatarChangeDelegate_Params));
	memcpy_s(&AddAvatarChangeDelegate_Params.LocalUserNum, sizeof(AddAvatarChangeDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddAvatarChangeDelegate_Params.AvatarDelegate, sizeof(AddAvatarChangeDelegate_Params.AvatarDelegate), &AvatarDelegate, sizeof(AvatarDelegate));

	this->ProcessEvent(uFnAddAvatarChangeDelegate, &AddAvatarChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendPresence
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FOnlineFriend           FriendData                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::GetFriendPresence(struct FOnlineFriend& FriendData)
{
	static UFunction* uFnGetFriendPresence = nullptr;

	if (!uFnGetFriendPresence)
	{
		uFnGetFriendPresence = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendPresence");
	}

	UOnlineSubsystemSteamworks_execGetFriendPresence_Params GetFriendPresence_Params;
	memset(&GetFriendPresence_Params, 0, sizeof(GetFriendPresence_Params));
	memcpy_s(&GetFriendPresence_Params.FriendData, sizeof(GetFriendPresence_Params.FriendData), &FriendData, sizeof(FriendData));

	uFnGetFriendPresence->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetFriendPresence, &GetFriendPresence_Params, nullptr);
	uFnGetFriendPresence->FunctionFlags |= 0x400;

	memcpy_s(&FriendData, sizeof(FriendData), &GetFriendPresence_Params.FriendData, sizeof(GetFriendPresence_Params.FriendData));
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendPresenceChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         PresenceDelegate               (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendPresenceChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate PresenceDelegate)
{
	static UFunction* uFnClearFriendPresenceChangeDelegate = nullptr;

	if (!uFnClearFriendPresenceChangeDelegate)
	{
		uFnClearFriendPresenceChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendPresenceChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearFriendPresenceChangeDelegate_Params ClearFriendPresenceChangeDelegate_Params;
	memset(&ClearFriendPresenceChangeDelegate_Params, 0, sizeof(ClearFriendPresenceChangeDelegate_Params));
	memcpy_s(&ClearFriendPresenceChangeDelegate_Params.LocalUserNum, sizeof(ClearFriendPresenceChangeDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearFriendPresenceChangeDelegate_Params.PresenceDelegate, sizeof(ClearFriendPresenceChangeDelegate_Params.PresenceDelegate), &PresenceDelegate, sizeof(PresenceDelegate));

	this->ProcessEvent(uFnClearFriendPresenceChangeDelegate, &ClearFriendPresenceChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendPresenceChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         PresenceDelegate               (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendPresenceChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate PresenceDelegate)
{
	static UFunction* uFnAddFriendPresenceChangeDelegate = nullptr;

	if (!uFnAddFriendPresenceChangeDelegate)
	{
		uFnAddFriendPresenceChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendPresenceChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddFriendPresenceChangeDelegate_Params AddFriendPresenceChangeDelegate_Params;
	memset(&AddFriendPresenceChangeDelegate_Params, 0, sizeof(AddFriendPresenceChangeDelegate_Params));
	memcpy_s(&AddFriendPresenceChangeDelegate_Params.LocalUserNum, sizeof(AddFriendPresenceChangeDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddFriendPresenceChangeDelegate_Params.PresenceDelegate, sizeof(AddFriendPresenceChangeDelegate_Params.PresenceDelegate), &PresenceDelegate, sizeof(PresenceDelegate));

	this->ProcessEvent(uFnAddFriendPresenceChangeDelegate, &AddFriendPresenceChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendsDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendsChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendsDelegate)
{
	static UFunction* uFnAddFriendsChangeDelegate = nullptr;

	if (!uFnAddFriendsChangeDelegate)
	{
		uFnAddFriendsChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddFriendsChangeDelegate_Params AddFriendsChangeDelegate_Params;
	memset(&AddFriendsChangeDelegate_Params, 0, sizeof(AddFriendsChangeDelegate_Params));
	memcpy_s(&AddFriendsChangeDelegate_Params.LocalUserNum, sizeof(AddFriendsChangeDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddFriendsChangeDelegate_Params.FriendsDelegate, sizeof(AddFriendsChangeDelegate_Params.FriendsDelegate), &FriendsDelegate, sizeof(FriendsDelegate));

	this->ProcessEvent(uFnAddFriendsChangeDelegate, &AddFriendsChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         MutingDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearMutingChangeDelegate(struct FScriptDelegate MutingDelegate)
{
	static UFunction* uFnClearMutingChangeDelegate = nullptr;

	if (!uFnClearMutingChangeDelegate)
	{
		uFnClearMutingChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearMutingChangeDelegate_Params ClearMutingChangeDelegate_Params;
	memset(&ClearMutingChangeDelegate_Params, 0, sizeof(ClearMutingChangeDelegate_Params));
	memcpy_s(&ClearMutingChangeDelegate_Params.MutingDelegate, sizeof(ClearMutingChangeDelegate_Params.MutingDelegate), &MutingDelegate, sizeof(MutingDelegate));

	this->ProcessEvent(uFnClearMutingChangeDelegate, &ClearMutingChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         MutingDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddMutingChangeDelegate(struct FScriptDelegate MutingDelegate)
{
	static UFunction* uFnAddMutingChangeDelegate = nullptr;

	if (!uFnAddMutingChangeDelegate)
	{
		uFnAddMutingChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddMutingChangeDelegate_Params AddMutingChangeDelegate_Params;
	memset(&AddMutingChangeDelegate_Params, 0, sizeof(AddMutingChangeDelegate_Params));
	memcpy_s(&AddMutingChangeDelegate_Params.MutingDelegate, sizeof(AddMutingChangeDelegate_Params.MutingDelegate), &MutingDelegate, sizeof(MutingDelegate));

	this->ProcessEvent(uFnAddMutingChangeDelegate, &AddMutingChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         CancelledDelegate              (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLoginCancelledDelegate(struct FScriptDelegate CancelledDelegate)
{
	static UFunction* uFnClearLoginCancelledDelegate = nullptr;

	if (!uFnClearLoginCancelledDelegate)
	{
		uFnClearLoginCancelledDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate");
	}

	UOnlineSubsystemSteamworks_execClearLoginCancelledDelegate_Params ClearLoginCancelledDelegate_Params;
	memset(&ClearLoginCancelledDelegate_Params, 0, sizeof(ClearLoginCancelledDelegate_Params));
	memcpy_s(&ClearLoginCancelledDelegate_Params.CancelledDelegate, sizeof(ClearLoginCancelledDelegate_Params.CancelledDelegate), &CancelledDelegate, sizeof(CancelledDelegate));

	this->ProcessEvent(uFnClearLoginCancelledDelegate, &ClearLoginCancelledDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         CancelledDelegate              (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLoginCancelledDelegate(struct FScriptDelegate CancelledDelegate)
{
	static UFunction* uFnAddLoginCancelledDelegate = nullptr;

	if (!uFnAddLoginCancelledDelegate)
	{
		uFnAddLoginCancelledDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate");
	}

	UOnlineSubsystemSteamworks_execAddLoginCancelledDelegate_Params AddLoginCancelledDelegate_Params;
	memset(&AddLoginCancelledDelegate_Params, 0, sizeof(AddLoginCancelledDelegate_Params));
	memcpy_s(&AddLoginCancelledDelegate_Params.CancelledDelegate, sizeof(AddLoginCancelledDelegate_Params.CancelledDelegate), &CancelledDelegate, sizeof(CancelledDelegate));

	this->ProcessEvent(uFnAddLoginCancelledDelegate, &AddLoginCancelledDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LoginStatusDelegate            (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::ClearLoginStatusChangeDelegate(struct FScriptDelegate LoginStatusDelegate, uint8_t LocalUserNum)
{
	static UFunction* uFnClearLoginStatusChangeDelegate = nullptr;

	if (!uFnClearLoginStatusChangeDelegate)
	{
		uFnClearLoginStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearLoginStatusChangeDelegate_Params ClearLoginStatusChangeDelegate_Params;
	memset(&ClearLoginStatusChangeDelegate_Params, 0, sizeof(ClearLoginStatusChangeDelegate_Params));
	memcpy_s(&ClearLoginStatusChangeDelegate_Params.LoginStatusDelegate, sizeof(ClearLoginStatusChangeDelegate_Params.LoginStatusDelegate), &LoginStatusDelegate, sizeof(LoginStatusDelegate));
	memcpy_s(&ClearLoginStatusChangeDelegate_Params.LocalUserNum, sizeof(ClearLoginStatusChangeDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnClearLoginStatusChangeDelegate, &ClearLoginStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LoginStatusDelegate            (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::AddLoginStatusChangeDelegate(struct FScriptDelegate LoginStatusDelegate, uint8_t LocalUserNum)
{
	static UFunction* uFnAddLoginStatusChangeDelegate = nullptr;

	if (!uFnAddLoginStatusChangeDelegate)
	{
		uFnAddLoginStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddLoginStatusChangeDelegate_Params AddLoginStatusChangeDelegate_Params;
	memset(&AddLoginStatusChangeDelegate_Params, 0, sizeof(AddLoginStatusChangeDelegate_Params));
	memcpy_s(&AddLoginStatusChangeDelegate_Params.LoginStatusDelegate, sizeof(AddLoginStatusChangeDelegate_Params.LoginStatusDelegate), &LoginStatusDelegate, sizeof(LoginStatusDelegate));
	memcpy_s(&AddLoginStatusChangeDelegate_Params.LocalUserNum, sizeof(AddLoginStatusChangeDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnAddLoginStatusChangeDelegate, &AddLoginStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// ELoginStatus                   NewStatus                      (CPF_Parm)
// struct FUniqueNetId            NewId                          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnLoginStatusChange(ELoginStatus NewStatus, struct FUniqueNetId NewId)
{
	static UFunction* uFnOnLoginStatusChange = nullptr;

	if (!uFnOnLoginStatusChange)
	{
		uFnOnLoginStatusChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange");
	}

	UOnlineSubsystemSteamworks_execOnLoginStatusChange_Params OnLoginStatusChange_Params;
	memset(&OnLoginStatusChange_Params, 0, sizeof(OnLoginStatusChange_Params));
	memcpy_s(&OnLoginStatusChange_Params.NewStatus, sizeof(OnLoginStatusChange_Params.NewStatus), &NewStatus, sizeof(NewStatus));
	memcpy_s(&OnLoginStatusChange_Params.NewId, sizeof(OnLoginStatusChange_Params.NewId), &NewId, sizeof(NewId));

	this->ProcessEvent(uFnOnLoginStatusChange, &OnLoginStatusChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LoginDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLoginChangeDelegate(struct FScriptDelegate LoginDelegate)
{
	static UFunction* uFnClearLoginChangeDelegate = nullptr;

	if (!uFnClearLoginChangeDelegate)
	{
		uFnClearLoginChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearLoginChangeDelegate_Params ClearLoginChangeDelegate_Params;
	memset(&ClearLoginChangeDelegate_Params, 0, sizeof(ClearLoginChangeDelegate_Params));
	memcpy_s(&ClearLoginChangeDelegate_Params.LoginDelegate, sizeof(ClearLoginChangeDelegate_Params.LoginDelegate), &LoginDelegate, sizeof(LoginDelegate));

	this->ProcessEvent(uFnClearLoginChangeDelegate, &ClearLoginChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LoginDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLoginChangeDelegate(struct FScriptDelegate LoginDelegate)
{
	static UFunction* uFnAddLoginChangeDelegate = nullptr;

	if (!uFnAddLoginChangeDelegate)
	{
		uFnAddLoginChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddLoginChangeDelegate_Params AddLoginChangeDelegate_Params;
	memset(&AddLoginChangeDelegate_Params, 0, sizeof(AddLoginChangeDelegate_Params));
	memcpy_s(&AddLoginChangeDelegate_Params.LoginDelegate, sizeof(AddLoginChangeDelegate_Params.LoginDelegate), &LoginDelegate, sizeof(LoginDelegate));

	this->ProcessEvent(uFnAddLoginChangeDelegate, &AddLoginChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserSignInCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UserSignInCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUserSignInCompleteDelegate(struct FScriptDelegate UserSignInCompleteDelegate)
{
	static UFunction* uFnClearUserSignInCompleteDelegate = nullptr;

	if (!uFnClearUserSignInCompleteDelegate)
	{
		uFnClearUserSignInCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserSignInCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearUserSignInCompleteDelegate_Params ClearUserSignInCompleteDelegate_Params;
	memset(&ClearUserSignInCompleteDelegate_Params, 0, sizeof(ClearUserSignInCompleteDelegate_Params));
	memcpy_s(&ClearUserSignInCompleteDelegate_Params.UserSignInCompleteDelegate, sizeof(ClearUserSignInCompleteDelegate_Params.UserSignInCompleteDelegate), &UserSignInCompleteDelegate, sizeof(UserSignInCompleteDelegate));

	this->ProcessEvent(uFnClearUserSignInCompleteDelegate, &ClearUserSignInCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserSignInCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UserSignInCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUserSignInCompleteDelegate(struct FScriptDelegate UserSignInCompleteDelegate)
{
	static UFunction* uFnAddUserSignInCompleteDelegate = nullptr;

	if (!uFnAddUserSignInCompleteDelegate)
	{
		uFnAddUserSignInCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserSignInCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddUserSignInCompleteDelegate_Params AddUserSignInCompleteDelegate_Params;
	memset(&AddUserSignInCompleteDelegate_Params, 0, sizeof(AddUserSignInCompleteDelegate_Params));
	memcpy_s(&AddUserSignInCompleteDelegate_Params.UserSignInCompleteDelegate, sizeof(AddUserSignInCompleteDelegate_Params.UserSignInCompleteDelegate), &UserSignInCompleteDelegate, sizeof(UserSignInCompleteDelegate));

	this->ProcessEvent(uFnAddUserSignInCompleteDelegate, &AddUserSignInCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserSwitchCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UserSwitchCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUserSwitchCompleteDelegate(struct FScriptDelegate UserSwitchCompleteDelegate)
{
	static UFunction* uFnClearUserSwitchCompleteDelegate = nullptr;

	if (!uFnClearUserSwitchCompleteDelegate)
	{
		uFnClearUserSwitchCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserSwitchCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearUserSwitchCompleteDelegate_Params ClearUserSwitchCompleteDelegate_Params;
	memset(&ClearUserSwitchCompleteDelegate_Params, 0, sizeof(ClearUserSwitchCompleteDelegate_Params));
	memcpy_s(&ClearUserSwitchCompleteDelegate_Params.UserSwitchCompleteDelegate, sizeof(ClearUserSwitchCompleteDelegate_Params.UserSwitchCompleteDelegate), &UserSwitchCompleteDelegate, sizeof(UserSwitchCompleteDelegate));

	this->ProcessEvent(uFnClearUserSwitchCompleteDelegate, &ClearUserSwitchCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserSwitchCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UserSwitchCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUserSwitchCompleteDelegate(struct FScriptDelegate UserSwitchCompleteDelegate)
{
	static UFunction* uFnAddUserSwitchCompleteDelegate = nullptr;

	if (!uFnAddUserSwitchCompleteDelegate)
	{
		uFnAddUserSwitchCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserSwitchCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddUserSwitchCompleteDelegate_Params AddUserSwitchCompleteDelegate_Params;
	memset(&AddUserSwitchCompleteDelegate_Params, 0, sizeof(AddUserSwitchCompleteDelegate_Params));
	memcpy_s(&AddUserSwitchCompleteDelegate_Params.UserSwitchCompleteDelegate, sizeof(AddUserSwitchCompleteDelegate_Params.UserSwitchCompleteDelegate), &UserSwitchCompleteDelegate, sizeof(UserSwitchCompleteDelegate));

	this->ProcessEvent(uFnAddUserSwitchCompleteDelegate, &AddUserSwitchCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetPrimaryPlayerGamepadToLastInput
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::SetPrimaryPlayerGamepadToLastInput()
{
	static UFunction* uFnSetPrimaryPlayerGamepadToLastInput = nullptr;

	if (!uFnSetPrimaryPlayerGamepadToLastInput)
	{
		uFnSetPrimaryPlayerGamepadToLastInput = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetPrimaryPlayerGamepadToLastInput");
	}

	UOnlineSubsystemSteamworks_execSetPrimaryPlayerGamepadToLastInput_Params SetPrimaryPlayerGamepadToLastInput_Params;
	memset(&SetPrimaryPlayerGamepadToLastInput_Params, 0, sizeof(SetPrimaryPlayerGamepadToLastInput_Params));

	this->ProcessEvent(uFnSetPrimaryPlayerGamepadToLastInput, &SetPrimaryPlayerGamepadToLastInput_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::IsMuted(uint8_t LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnIsMuted = nullptr;

	if (!uFnIsMuted)
	{
		uFnIsMuted = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted");
	}

	UOnlineSubsystemSteamworks_execIsMuted_Params IsMuted_Params;
	memset(&IsMuted_Params, 0, sizeof(IsMuted_Params));
	memcpy_s(&IsMuted_Params.LocalUserNum, sizeof(IsMuted_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&IsMuted_Params.PlayerID, sizeof(IsMuted_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	this->ProcessEvent(uFnIsMuted, &IsMuted_Params, nullptr);

	return IsMuted_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FFriendsQuery>   Query                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::AreAnyFriends(uint8_t LocalUserNum, TArray<struct FFriendsQuery>& Query)
{
	static UFunction* uFnAreAnyFriends = nullptr;

	if (!uFnAreAnyFriends)
	{
		uFnAreAnyFriends = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends");
	}

	UOnlineSubsystemSteamworks_execAreAnyFriends_Params AreAnyFriends_Params;
	memset(&AreAnyFriends_Params, 0, sizeof(AreAnyFriends_Params));
	memcpy_s(&AreAnyFriends_Params.LocalUserNum, sizeof(AreAnyFriends_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AreAnyFriends_Params.Query, sizeof(AreAnyFriends_Params.Query), &Query, sizeof(Query));

	uFnAreAnyFriends->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAreAnyFriends, &AreAnyFriends_Params, nullptr);
	uFnAreAnyFriends->FunctionFlags |= 0x400;

	memcpy_s(&Query, sizeof(Query), &AreAnyFriends_Params.Query, sizeof(AreAnyFriends_Params.Query));

	return AreAnyFriends_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::IsFriend(uint8_t LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnIsFriend = nullptr;

	if (!uFnIsFriend)
	{
		uFnIsFriend = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend");
	}

	UOnlineSubsystemSteamworks_execIsFriend_Params IsFriend_Params;
	memset(&IsFriend_Params, 0, sizeof(IsFriend_Params));
	memcpy_s(&IsFriend_Params.LocalUserNum, sizeof(IsFriend_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&IsFriend_Params.PlayerID, sizeof(IsFriend_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	uFnIsFriend->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsFriend, &IsFriend_Params, nullptr);
	uFnIsFriend->FunctionFlags |= 0x400;

	return IsFriend_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RequestRestrictedFeatureMessaging
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// EFeaturePrivilege              RestrictedFeature              (CPF_Parm)

void UOnlineSubsystemSteamworks::RequestRestrictedFeatureMessaging(uint8_t LocalUserNum, EFeaturePrivilege RestrictedFeature)
{
	static UFunction* uFnRequestRestrictedFeatureMessaging = nullptr;

	if (!uFnRequestRestrictedFeatureMessaging)
	{
		uFnRequestRestrictedFeatureMessaging = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RequestRestrictedFeatureMessaging");
	}

	UOnlineSubsystemSteamworks_execRequestRestrictedFeatureMessaging_Params RequestRestrictedFeatureMessaging_Params;
	memset(&RequestRestrictedFeatureMessaging_Params, 0, sizeof(RequestRestrictedFeatureMessaging_Params));
	memcpy_s(&RequestRestrictedFeatureMessaging_Params.LocalUserNum, sizeof(RequestRestrictedFeatureMessaging_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&RequestRestrictedFeatureMessaging_Params.RestrictedFeature, sizeof(RequestRestrictedFeatureMessaging_Params.RestrictedFeature), &RestrictedFeature, sizeof(RestrictedFeature));

	this->ProcessEvent(uFnRequestRestrictedFeatureMessaging, &RequestRestrictedFeatureMessaging_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUploadFitnessData
// [0x00424001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanUploadFitnessData(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanUploadFitnessData = nullptr;

	if (!uFnCanUploadFitnessData)
	{
		uFnCanUploadFitnessData = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUploadFitnessData");
	}

	UOnlineSubsystemSteamworks_execCanUploadFitnessData_Params CanUploadFitnessData_Params;
	memset(&CanUploadFitnessData_Params, 0, sizeof(CanUploadFitnessData_Params));
	memcpy_s(&CanUploadFitnessData_Params.LocalUserNum, sizeof(CanUploadFitnessData_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanUploadFitnessData_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanUploadFitnessData_Params.Reason, sizeof(CanUploadFitnessData_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanUploadFitnessData_Params.PrivilegeLevelHint, sizeof(CanUploadFitnessData_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanUploadFitnessData, &CanUploadFitnessData_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanUploadFitnessData_Params.PrivilegeLevelHint, sizeof(CanUploadFitnessData_Params.PrivilegeLevelHint));

	return CanUploadFitnessData_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareKinectContent
// [0x00424001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanShareKinectContent(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanShareKinectContent = nullptr;

	if (!uFnCanShareKinectContent)
	{
		uFnCanShareKinectContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareKinectContent");
	}

	UOnlineSubsystemSteamworks_execCanShareKinectContent_Params CanShareKinectContent_Params;
	memset(&CanShareKinectContent_Params, 0, sizeof(CanShareKinectContent_Params));
	memcpy_s(&CanShareKinectContent_Params.LocalUserNum, sizeof(CanShareKinectContent_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanShareKinectContent_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanShareKinectContent_Params.Reason, sizeof(CanShareKinectContent_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanShareKinectContent_Params.PrivilegeLevelHint, sizeof(CanShareKinectContent_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanShareKinectContent, &CanShareKinectContent_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanShareKinectContent_Params.PrivilegeLevelHint, sizeof(CanShareKinectContent_Params.PrivilegeLevelHint));

	return CanShareKinectContent_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareWithSocialNetwork
// [0x00424001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanShareWithSocialNetwork(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanShareWithSocialNetwork = nullptr;

	if (!uFnCanShareWithSocialNetwork)
	{
		uFnCanShareWithSocialNetwork = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareWithSocialNetwork");
	}

	UOnlineSubsystemSteamworks_execCanShareWithSocialNetwork_Params CanShareWithSocialNetwork_Params;
	memset(&CanShareWithSocialNetwork_Params, 0, sizeof(CanShareWithSocialNetwork_Params));
	memcpy_s(&CanShareWithSocialNetwork_Params.LocalUserNum, sizeof(CanShareWithSocialNetwork_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanShareWithSocialNetwork_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanShareWithSocialNetwork_Params.Reason, sizeof(CanShareWithSocialNetwork_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanShareWithSocialNetwork_Params.PrivilegeLevelHint, sizeof(CanShareWithSocialNetwork_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanShareWithSocialNetwork, &CanShareWithSocialNetwork_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanShareWithSocialNetwork_Params.PrivilegeLevelHint, sizeof(CanShareWithSocialNetwork_Params.PrivilegeLevelHint));

	return CanShareWithSocialNetwork_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanBrowseInternet
// [0x00424001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanBrowseInternet(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanBrowseInternet = nullptr;

	if (!uFnCanBrowseInternet)
	{
		uFnCanBrowseInternet = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanBrowseInternet");
	}

	UOnlineSubsystemSteamworks_execCanBrowseInternet_Params CanBrowseInternet_Params;
	memset(&CanBrowseInternet_Params, 0, sizeof(CanBrowseInternet_Params));
	memcpy_s(&CanBrowseInternet_Params.LocalUserNum, sizeof(CanBrowseInternet_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanBrowseInternet_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanBrowseInternet_Params.Reason, sizeof(CanBrowseInternet_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanBrowseInternet_Params.PrivilegeLevelHint, sizeof(CanBrowseInternet_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanBrowseInternet, &CanBrowseInternet_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanBrowseInternet_Params.PrivilegeLevelHint, sizeof(CanBrowseInternet_Params.PrivilegeLevelHint));

	return CanBrowseInternet_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumVideoContent
// [0x00424001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanAccessPremiumVideoContent(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanAccessPremiumVideoContent = nullptr;

	if (!uFnCanAccessPremiumVideoContent)
	{
		uFnCanAccessPremiumVideoContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumVideoContent");
	}

	UOnlineSubsystemSteamworks_execCanAccessPremiumVideoContent_Params CanAccessPremiumVideoContent_Params;
	memset(&CanAccessPremiumVideoContent_Params, 0, sizeof(CanAccessPremiumVideoContent_Params));
	memcpy_s(&CanAccessPremiumVideoContent_Params.LocalUserNum, sizeof(CanAccessPremiumVideoContent_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanAccessPremiumVideoContent_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanAccessPremiumVideoContent_Params.Reason, sizeof(CanAccessPremiumVideoContent_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanAccessPremiumVideoContent_Params.PrivilegeLevelHint, sizeof(CanAccessPremiumVideoContent_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanAccessPremiumVideoContent, &CanAccessPremiumVideoContent_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanAccessPremiumVideoContent_Params.PrivilegeLevelHint, sizeof(CanAccessPremiumVideoContent_Params.PrivilegeLevelHint));

	return CanAccessPremiumVideoContent_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumContent
// [0x00424001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanAccessPremiumContent(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanAccessPremiumContent = nullptr;

	if (!uFnCanAccessPremiumContent)
	{
		uFnCanAccessPremiumContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumContent");
	}

	UOnlineSubsystemSteamworks_execCanAccessPremiumContent_Params CanAccessPremiumContent_Params;
	memset(&CanAccessPremiumContent_Params, 0, sizeof(CanAccessPremiumContent_Params));
	memcpy_s(&CanAccessPremiumContent_Params.LocalUserNum, sizeof(CanAccessPremiumContent_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanAccessPremiumContent_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanAccessPremiumContent_Params.Reason, sizeof(CanAccessPremiumContent_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanAccessPremiumContent_Params.PrivilegeLevelHint, sizeof(CanAccessPremiumContent_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanAccessPremiumContent, &CanAccessPremiumContent_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanAccessPremiumContent_Params.PrivilegeLevelHint, sizeof(CanAccessPremiumContent_Params.PrivilegeLevelHint));

	return CanAccessPremiumContent_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUseCloudStorage
// [0x00424001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanUseCloudStorage(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanUseCloudStorage = nullptr;

	if (!uFnCanUseCloudStorage)
	{
		uFnCanUseCloudStorage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUseCloudStorage");
	}

	UOnlineSubsystemSteamworks_execCanUseCloudStorage_Params CanUseCloudStorage_Params;
	memset(&CanUseCloudStorage_Params, 0, sizeof(CanUseCloudStorage_Params));
	memcpy_s(&CanUseCloudStorage_Params.LocalUserNum, sizeof(CanUseCloudStorage_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanUseCloudStorage_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanUseCloudStorage_Params.Reason, sizeof(CanUseCloudStorage_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanUseCloudStorage_Params.PrivilegeLevelHint, sizeof(CanUseCloudStorage_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanUseCloudStorage, &CanUseCloudStorage_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanUseCloudStorage_Params.PrivilegeLevelHint, sizeof(CanUseCloudStorage_Params.PrivilegeLevelHint));

	return CanUseCloudStorage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanRecordDVRClips
// [0x00424001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanRecordDVRClips(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanRecordDVRClips = nullptr;

	if (!uFnCanRecordDVRClips)
	{
		uFnCanRecordDVRClips = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanRecordDVRClips");
	}

	UOnlineSubsystemSteamworks_execCanRecordDVRClips_Params CanRecordDVRClips_Params;
	memset(&CanRecordDVRClips_Params, 0, sizeof(CanRecordDVRClips_Params));
	memcpy_s(&CanRecordDVRClips_Params.LocalUserNum, sizeof(CanRecordDVRClips_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanRecordDVRClips_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanRecordDVRClips_Params.Reason, sizeof(CanRecordDVRClips_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanRecordDVRClips_Params.PrivilegeLevelHint, sizeof(CanRecordDVRClips_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanRecordDVRClips, &CanRecordDVRClips_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanRecordDVRClips_Params.PrivilegeLevelHint, sizeof(CanRecordDVRClips_Params.PrivilegeLevelHint));

	return CanRecordDVRClips_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation
// [0x00424003] (FUNC_Final | FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanShowPresenceInformation(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanShowPresenceInformation = nullptr;

	if (!uFnCanShowPresenceInformation)
	{
		uFnCanShowPresenceInformation = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation");
	}

	UOnlineSubsystemSteamworks_execCanShowPresenceInformation_Params CanShowPresenceInformation_Params;
	memset(&CanShowPresenceInformation_Params, 0, sizeof(CanShowPresenceInformation_Params));
	memcpy_s(&CanShowPresenceInformation_Params.LocalUserNum, sizeof(CanShowPresenceInformation_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanShowPresenceInformation_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanShowPresenceInformation_Params.Reason, sizeof(CanShowPresenceInformation_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanShowPresenceInformation_Params.PrivilegeLevelHint, sizeof(CanShowPresenceInformation_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanShowPresenceInformation, &CanShowPresenceInformation_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanShowPresenceInformation_Params.PrivilegeLevelHint, sizeof(CanShowPresenceInformation_Params.PrivilegeLevelHint));

	return CanShowPresenceInformation_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles
// [0x00424003] (FUNC_Final | FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanViewPlayerProfiles(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanViewPlayerProfiles = nullptr;

	if (!uFnCanViewPlayerProfiles)
	{
		uFnCanViewPlayerProfiles = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles");
	}

	UOnlineSubsystemSteamworks_execCanViewPlayerProfiles_Params CanViewPlayerProfiles_Params;
	memset(&CanViewPlayerProfiles_Params, 0, sizeof(CanViewPlayerProfiles_Params));
	memcpy_s(&CanViewPlayerProfiles_Params.LocalUserNum, sizeof(CanViewPlayerProfiles_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanViewPlayerProfiles_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanViewPlayerProfiles_Params.Reason, sizeof(CanViewPlayerProfiles_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanViewPlayerProfiles_Params.PrivilegeLevelHint, sizeof(CanViewPlayerProfiles_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanViewPlayerProfiles, &CanViewPlayerProfiles_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanViewPlayerProfiles_Params.PrivilegeLevelHint, sizeof(CanViewPlayerProfiles_Params.PrivilegeLevelHint));

	return CanViewPlayerProfiles_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent
// [0x00424003] (FUNC_Final | FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanPurchaseContent(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanPurchaseContent = nullptr;

	if (!uFnCanPurchaseContent)
	{
		uFnCanPurchaseContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent");
	}

	UOnlineSubsystemSteamworks_execCanPurchaseContent_Params CanPurchaseContent_Params;
	memset(&CanPurchaseContent_Params, 0, sizeof(CanPurchaseContent_Params));
	memcpy_s(&CanPurchaseContent_Params.LocalUserNum, sizeof(CanPurchaseContent_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanPurchaseContent_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanPurchaseContent_Params.Reason, sizeof(CanPurchaseContent_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanPurchaseContent_Params.PrivilegeLevelHint, sizeof(CanPurchaseContent_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanPurchaseContent, &CanPurchaseContent_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanPurchaseContent_Params.PrivilegeLevelHint, sizeof(CanPurchaseContent_Params.PrivilegeLevelHint));

	return CanPurchaseContent_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanDownloadUserContent
// [0x00424003] (FUNC_Final | FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanDownloadUserContent(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanDownloadUserContent = nullptr;

	if (!uFnCanDownloadUserContent)
	{
		uFnCanDownloadUserContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanDownloadUserContent");
	}

	UOnlineSubsystemSteamworks_execCanDownloadUserContent_Params CanDownloadUserContent_Params;
	memset(&CanDownloadUserContent_Params, 0, sizeof(CanDownloadUserContent_Params));
	memcpy_s(&CanDownloadUserContent_Params.LocalUserNum, sizeof(CanDownloadUserContent_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanDownloadUserContent_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanDownloadUserContent_Params.Reason, sizeof(CanDownloadUserContent_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanDownloadUserContent_Params.PrivilegeLevelHint, sizeof(CanDownloadUserContent_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanDownloadUserContent, &CanDownloadUserContent_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanDownloadUserContent_Params.PrivilegeLevelHint, sizeof(CanDownloadUserContent_Params.PrivilegeLevelHint));

	return CanDownloadUserContent_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareUserCreatedContent
// [0x00424001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanShareUserCreatedContent(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanShareUserCreatedContent = nullptr;

	if (!uFnCanShareUserCreatedContent)
	{
		uFnCanShareUserCreatedContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareUserCreatedContent");
	}

	UOnlineSubsystemSteamworks_execCanShareUserCreatedContent_Params CanShareUserCreatedContent_Params;
	memset(&CanShareUserCreatedContent_Params, 0, sizeof(CanShareUserCreatedContent_Params));
	memcpy_s(&CanShareUserCreatedContent_Params.LocalUserNum, sizeof(CanShareUserCreatedContent_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanShareUserCreatedContent_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanShareUserCreatedContent_Params.Reason, sizeof(CanShareUserCreatedContent_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanShareUserCreatedContent_Params.PrivilegeLevelHint, sizeof(CanShareUserCreatedContent_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanShareUserCreatedContent, &CanShareUserCreatedContent_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanShareUserCreatedContent_Params.PrivilegeLevelHint, sizeof(CanShareUserCreatedContent_Params.PrivilegeLevelHint));

	return CanShareUserCreatedContent_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVoice
// [0x00424001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanCommunicateVoice(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanCommunicateVoice = nullptr;

	if (!uFnCanCommunicateVoice)
	{
		uFnCanCommunicateVoice = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVoice");
	}

	UOnlineSubsystemSteamworks_execCanCommunicateVoice_Params CanCommunicateVoice_Params;
	memset(&CanCommunicateVoice_Params, 0, sizeof(CanCommunicateVoice_Params));
	memcpy_s(&CanCommunicateVoice_Params.LocalUserNum, sizeof(CanCommunicateVoice_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanCommunicateVoice_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanCommunicateVoice_Params.Reason, sizeof(CanCommunicateVoice_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanCommunicateVoice_Params.PrivilegeLevelHint, sizeof(CanCommunicateVoice_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanCommunicateVoice, &CanCommunicateVoice_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanCommunicateVoice_Params.PrivilegeLevelHint, sizeof(CanCommunicateVoice_Params.PrivilegeLevelHint));

	return CanCommunicateVoice_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVideo
// [0x00424001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanCommunicateVideo(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanCommunicateVideo = nullptr;

	if (!uFnCanCommunicateVideo)
	{
		uFnCanCommunicateVideo = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVideo");
	}

	UOnlineSubsystemSteamworks_execCanCommunicateVideo_Params CanCommunicateVideo_Params;
	memset(&CanCommunicateVideo_Params, 0, sizeof(CanCommunicateVideo_Params));
	memcpy_s(&CanCommunicateVideo_Params.LocalUserNum, sizeof(CanCommunicateVideo_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanCommunicateVideo_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanCommunicateVideo_Params.Reason, sizeof(CanCommunicateVideo_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanCommunicateVideo_Params.PrivilegeLevelHint, sizeof(CanCommunicateVideo_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanCommunicateVideo, &CanCommunicateVideo_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanCommunicateVideo_Params.PrivilegeLevelHint, sizeof(CanCommunicateVideo_Params.PrivilegeLevelHint));

	return CanCommunicateVideo_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateText
// [0x00424001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanCommunicateText(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanCommunicateText = nullptr;

	if (!uFnCanCommunicateText)
	{
		uFnCanCommunicateText = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateText");
	}

	UOnlineSubsystemSteamworks_execCanCommunicateText_Params CanCommunicateText_Params;
	memset(&CanCommunicateText_Params, 0, sizeof(CanCommunicateText_Params));
	memcpy_s(&CanCommunicateText_Params.LocalUserNum, sizeof(CanCommunicateText_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanCommunicateText_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanCommunicateText_Params.Reason, sizeof(CanCommunicateText_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanCommunicateText_Params.PrivilegeLevelHint, sizeof(CanCommunicateText_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	this->ProcessEvent(uFnCanCommunicateText, &CanCommunicateText_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanCommunicateText_Params.PrivilegeLevelHint, sizeof(CanCommunicateText_Params.PrivilegeLevelHint));

	return CanCommunicateText_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EFeaturePrivilegeLevel         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// ECommunicationMethod           CommMethod                     (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)

EFeaturePrivilegeLevel UOnlineSubsystemSteamworks::CanCommunicate(uint8_t LocalUserNum, ECommunicationMethod CommMethod, bool bAttemptToResolve)
{
	static UFunction* uFnCanCommunicate = nullptr;

	if (!uFnCanCommunicate)
	{
		uFnCanCommunicate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate");
	}

	UOnlineSubsystemSteamworks_execCanCommunicate_Params CanCommunicate_Params;
	memset(&CanCommunicate_Params, 0, sizeof(CanCommunicate_Params));
	memcpy_s(&CanCommunicate_Params.LocalUserNum, sizeof(CanCommunicate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&CanCommunicate_Params.CommMethod, sizeof(CanCommunicate_Params.CommMethod), &CommMethod, sizeof(CommMethod));
	CanCommunicate_Params.bAttemptToResolve = bAttemptToResolve;

	uFnCanCommunicate->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCanCommunicate, &CanCommunicate_Params, nullptr);
	uFnCanCommunicate->FunctionFlags |= 0x400;

	return CanCommunicate_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// EFeaturePrivilegeLevel         PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanPlayOnline(uint8_t LocalUserNum, bool bAttemptToResolve, class FString Reason, EFeaturePrivilegeLevel& PrivilegeLevelHint)
{
	static UFunction* uFnCanPlayOnline = nullptr;

	if (!uFnCanPlayOnline)
	{
		uFnCanPlayOnline = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline");
	}

	UOnlineSubsystemSteamworks_execCanPlayOnline_Params CanPlayOnline_Params;
	memset(&CanPlayOnline_Params, 0, sizeof(CanPlayOnline_Params));
	memcpy_s(&CanPlayOnline_Params.LocalUserNum, sizeof(CanPlayOnline_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	CanPlayOnline_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanPlayOnline_Params.Reason, sizeof(CanPlayOnline_Params.Reason), &Reason, sizeof(Reason));
	memcpy_s(&CanPlayOnline_Params.PrivilegeLevelHint, sizeof(CanPlayOnline_Params.PrivilegeLevelHint), &PrivilegeLevelHint, sizeof(PrivilegeLevelHint));

	uFnCanPlayOnline->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCanPlayOnline, &CanPlayOnline_Params, nullptr);
	uFnCanPlayOnline->FunctionFlags |= 0x400;

	memcpy_s(&PrivilegeLevelHint, sizeof(PrivilegeLevelHint), &CanPlayOnline_Params.PrivilegeLevelHint, sizeof(CanPlayOnline_Params.PrivilegeLevelHint));

	return CanPlayOnline_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class FString UOnlineSubsystemSteamworks::GetPlayerNickname(uint8_t LocalUserNum)
{
	static UFunction* uFnGetPlayerNickname = nullptr;

	if (!uFnGetPlayerNickname)
	{
		uFnGetPlayerNickname = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname");
	}

	UOnlineSubsystemSteamworks_execGetPlayerNickname_Params GetPlayerNickname_Params;
	memset(&GetPlayerNickname_Params, 0, sizeof(GetPlayerNickname_Params));
	memcpy_s(&GetPlayerNickname_Params.LocalUserNum, sizeof(GetPlayerNickname_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnGetPlayerNickname, &GetPlayerNickname_Params, nullptr);

	return GetPlayerNickname_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId
// [0x00420003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetUniquePlayerId(uint8_t LocalUserNum, struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnGetUniquePlayerId = nullptr;

	if (!uFnGetUniquePlayerId)
	{
		uFnGetUniquePlayerId = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId");
	}

	UOnlineSubsystemSteamworks_execGetUniquePlayerId_Params GetUniquePlayerId_Params;
	memset(&GetUniquePlayerId_Params, 0, sizeof(GetUniquePlayerId_Params));
	memcpy_s(&GetUniquePlayerId_Params.LocalUserNum, sizeof(GetUniquePlayerId_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&GetUniquePlayerId_Params.PlayerID, sizeof(GetUniquePlayerId_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	this->ProcessEvent(uFnGetUniquePlayerId, &GetUniquePlayerId_Params, nullptr);

	memcpy_s(&PlayerID, sizeof(PlayerID), &GetUniquePlayerId_Params.PlayerID, sizeof(GetUniquePlayerId_Params.PlayerID));

	return GetUniquePlayerId_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsGuestLogin(uint8_t LocalUserNum)
{
	static UFunction* uFnIsGuestLogin = nullptr;

	if (!uFnIsGuestLogin)
	{
		uFnIsGuestLogin = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin");
	}

	UOnlineSubsystemSteamworks_execIsGuestLogin_Params IsGuestLogin_Params;
	memset(&IsGuestLogin_Params, 0, sizeof(IsGuestLogin_Params));
	memcpy_s(&IsGuestLogin_Params.LocalUserNum, sizeof(IsGuestLogin_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnIsGuestLogin, &IsGuestLogin_Params, nullptr);

	return IsGuestLogin_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// ELoginStatus                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

ELoginStatus UOnlineSubsystemSteamworks::GetLoginStatus(uint8_t LocalUserNum)
{
	static UFunction* uFnGetLoginStatus = nullptr;

	if (!uFnGetLoginStatus)
	{
		uFnGetLoginStatus = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus");
	}

	UOnlineSubsystemSteamworks_execGetLoginStatus_Params GetLoginStatus_Params;
	memset(&GetLoginStatus_Params, 0, sizeof(GetLoginStatus_Params));
	memcpy_s(&GetLoginStatus_Params.LocalUserNum, sizeof(GetLoginStatus_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnGetLoginStatus->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetLoginStatus, &GetLoginStatus_Params, nullptr);
	uFnGetLoginStatus->FunctionFlags |= 0x400;

	return GetLoginStatus_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LogoutDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLogoutCompletedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LogoutDelegate)
{
	static UFunction* uFnClearLogoutCompletedDelegate = nullptr;

	if (!uFnClearLogoutCompletedDelegate)
	{
		uFnClearLogoutCompletedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate");
	}

	UOnlineSubsystemSteamworks_execClearLogoutCompletedDelegate_Params ClearLogoutCompletedDelegate_Params;
	memset(&ClearLogoutCompletedDelegate_Params, 0, sizeof(ClearLogoutCompletedDelegate_Params));
	memcpy_s(&ClearLogoutCompletedDelegate_Params.LocalUserNum, sizeof(ClearLogoutCompletedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearLogoutCompletedDelegate_Params.LogoutDelegate, sizeof(ClearLogoutCompletedDelegate_Params.LogoutDelegate), &LogoutDelegate, sizeof(LogoutDelegate));

	this->ProcessEvent(uFnClearLogoutCompletedDelegate, &ClearLogoutCompletedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LogoutDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLogoutCompletedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LogoutDelegate)
{
	static UFunction* uFnAddLogoutCompletedDelegate = nullptr;

	if (!uFnAddLogoutCompletedDelegate)
	{
		uFnAddLogoutCompletedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddLogoutCompletedDelegate_Params AddLogoutCompletedDelegate_Params;
	memset(&AddLogoutCompletedDelegate_Params, 0, sizeof(AddLogoutCompletedDelegate_Params));
	memcpy_s(&AddLogoutCompletedDelegate_Params.LocalUserNum, sizeof(AddLogoutCompletedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddLogoutCompletedDelegate_Params.LogoutDelegate, sizeof(AddLogoutCompletedDelegate_Params.LogoutDelegate), &LogoutDelegate, sizeof(LogoutDelegate));

	this->ProcessEvent(uFnAddLogoutCompletedDelegate, &AddLogoutCompletedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLogoutCompleted(bool bWasSuccessful)
{
	static UFunction* uFnOnLogoutCompleted = nullptr;

	if (!uFnOnLogoutCompleted)
	{
		uFnOnLogoutCompleted = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted");
	}

	UOnlineSubsystemSteamworks_execOnLogoutCompleted_Params OnLogoutCompleted_Params;
	memset(&OnLogoutCompleted_Params, 0, sizeof(OnLogoutCompleted_Params));
	OnLogoutCompleted_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnLogoutCompleted, &OnLogoutCompleted_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::Logout(uint8_t LocalUserNum)
{
	static UFunction* uFnLogout = nullptr;

	if (!uFnLogout)
	{
		uFnLogout = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout");
	}

	UOnlineSubsystemSteamworks_execLogout_Params Logout_Params;
	memset(&Logout_Params, 0, sizeof(Logout_Params));
	memcpy_s(&Logout_Params.LocalUserNum, sizeof(Logout_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnLogout, &Logout_Params, nullptr);

	return Logout_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LoginFailedDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLoginFailedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LoginFailedDelegate)
{
	static UFunction* uFnClearLoginFailedDelegate = nullptr;

	if (!uFnClearLoginFailedDelegate)
	{
		uFnClearLoginFailedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate");
	}

	UOnlineSubsystemSteamworks_execClearLoginFailedDelegate_Params ClearLoginFailedDelegate_Params;
	memset(&ClearLoginFailedDelegate_Params, 0, sizeof(ClearLoginFailedDelegate_Params));
	memcpy_s(&ClearLoginFailedDelegate_Params.LocalUserNum, sizeof(ClearLoginFailedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearLoginFailedDelegate_Params.LoginFailedDelegate, sizeof(ClearLoginFailedDelegate_Params.LoginFailedDelegate), &LoginFailedDelegate, sizeof(LoginFailedDelegate));

	this->ProcessEvent(uFnClearLoginFailedDelegate, &ClearLoginFailedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LoginFailedDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLoginFailedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LoginFailedDelegate)
{
	static UFunction* uFnAddLoginFailedDelegate = nullptr;

	if (!uFnAddLoginFailedDelegate)
	{
		uFnAddLoginFailedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddLoginFailedDelegate_Params AddLoginFailedDelegate_Params;
	memset(&AddLoginFailedDelegate_Params, 0, sizeof(AddLoginFailedDelegate_Params));
	memcpy_s(&AddLoginFailedDelegate_Params.LocalUserNum, sizeof(AddLoginFailedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddLoginFailedDelegate_Params.LoginFailedDelegate, sizeof(AddLoginFailedDelegate_Params.LoginFailedDelegate), &LoginFailedDelegate, sizeof(LoginFailedDelegate));

	this->ProcessEvent(uFnAddLoginFailedDelegate, &AddLoginFailedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// EOnlineServerConnectionStatus  ErrorCode                      (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLoginFailed(uint8_t LocalUserNum, EOnlineServerConnectionStatus ErrorCode)
{
	static UFunction* uFnOnLoginFailed = nullptr;

	if (!uFnOnLoginFailed)
	{
		uFnOnLoginFailed = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed");
	}

	UOnlineSubsystemSteamworks_execOnLoginFailed_Params OnLoginFailed_Params;
	memset(&OnLoginFailed_Params, 0, sizeof(OnLoginFailed_Params));
	memcpy_s(&OnLoginFailed_Params.LocalUserNum, sizeof(OnLoginFailed_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OnLoginFailed_Params.ErrorCode, sizeof(OnLoginFailed_Params.ErrorCode), &ErrorCode, sizeof(ErrorCode));

	this->ProcessEvent(uFnOnLoginFailed, &OnLoginFailed_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::AutoLogin()
{
	static UFunction* uFnAutoLogin = nullptr;

	if (!uFnAutoLogin)
	{
		uFnAutoLogin = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin");
	}

	UOnlineSubsystemSteamworks_execAutoLogin_Params AutoLogin_Params;
	memset(&AutoLogin_Params, 0, sizeof(AutoLogin_Params));

	uFnAutoLogin->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAutoLogin, &AutoLogin_Params, nullptr);
	uFnAutoLogin->FunctionFlags |= 0x400;

	return AutoLogin_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  LoginName                      (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Password                       (CPF_Parm | CPF_NeedCtorLink)
// bool                           bWantsLocalOnly                (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::Login(uint8_t LocalUserNum, class FString LoginName, class FString Password, bool bWantsLocalOnly)
{
	static UFunction* uFnLogin = nullptr;

	if (!uFnLogin)
	{
		uFnLogin = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login");
	}

	UOnlineSubsystemSteamworks_execLogin_Params Login_Params;
	memset(&Login_Params, 0, sizeof(Login_Params));
	memcpy_s(&Login_Params.LocalUserNum, sizeof(Login_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&Login_Params.LoginName, sizeof(Login_Params.LoginName), &LoginName, sizeof(LoginName));
	memcpy_s(&Login_Params.Password, sizeof(Login_Params.Password), &Password, sizeof(Password));
	Login_Params.bWantsLocalOnly = bWantsLocalOnly;

	uFnLogin->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnLogin, &Login_Params, nullptr);
	uFnLogin->FunctionFlags |= 0x400;

	return Login_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetKickPlayerDialogActive
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           Active                         (CPF_Parm)

void UOnlineSubsystemSteamworks::SetKickPlayerDialogActive(bool Active)
{
	static UFunction* uFnSetKickPlayerDialogActive = nullptr;

	if (!uFnSetKickPlayerDialogActive)
	{
		uFnSetKickPlayerDialogActive = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetKickPlayerDialogActive");
	}

	UOnlineSubsystemSteamworks_execSetKickPlayerDialogActive_Params SetKickPlayerDialogActive_Params;
	memset(&SetKickPlayerDialogActive_Params, 0, sizeof(SetKickPlayerDialogActive_Params));
	SetKickPlayerDialogActive_Params.Active = Active;

	this->ProcessEvent(uFnSetKickPlayerDialogActive, &SetKickPlayerDialogActive_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsUserSwitchActive
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::IsUserSwitchActive()
{
	static UFunction* uFnIsUserSwitchActive = nullptr;

	if (!uFnIsUserSwitchActive)
	{
		uFnIsUserSwitchActive = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsUserSwitchActive");
	}

	UOnlineSubsystemSteamworks_execIsUserSwitchActive_Params IsUserSwitchActive_Params;
	memset(&IsUserSwitchActive_Params, 0, sizeof(IsUserSwitchActive_Params));

	this->ProcessEvent(uFnIsUserSwitchActive, &IsUserSwitchActive_Params, nullptr);

	return IsUserSwitchActive_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetKickPreviousUser
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::SetKickPreviousUser(uint8_t LocalUserNum)
{
	static UFunction* uFnSetKickPreviousUser = nullptr;

	if (!uFnSetKickPreviousUser)
	{
		uFnSetKickPreviousUser = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetKickPreviousUser");
	}

	UOnlineSubsystemSteamworks_execSetKickPreviousUser_Params SetKickPreviousUser_Params;
	memset(&SetKickPreviousUser_Params, 0, sizeof(SetKickPreviousUser_Params));
	memcpy_s(&SetKickPreviousUser_Params.LocalUserNum, sizeof(SetKickPreviousUser_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnSetKickPreviousUser, &SetKickPreviousUser_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SupportInGameLogin
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::SupportInGameLogin()
{
	static UFunction* uFnSupportInGameLogin = nullptr;

	if (!uFnSupportInGameLogin)
	{
		uFnSupportInGameLogin = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SupportInGameLogin");
	}

	UOnlineSubsystemSteamworks_execSupportInGameLogin_Params SupportInGameLogin_Params;
	memset(&SupportInGameLogin_Params, 0, sizeof(SupportInGameLogin_Params));

	this->ProcessEvent(uFnSupportInGameLogin, &SupportInGameLogin_Params, nullptr);

	return SupportInGameLogin_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowControllerUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ShowControllerUI()
{
	static UFunction* uFnShowControllerUI = nullptr;

	if (!uFnShowControllerUI)
	{
		uFnShowControllerUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowControllerUI");
	}

	UOnlineSubsystemSteamworks_execShowControllerUI_Params ShowControllerUI_Params;
	memset(&ShowControllerUI_Params, 0, sizeof(ShowControllerUI_Params));

	this->ProcessEvent(uFnShowControllerUI, &ShowControllerUI_Params, nullptr);

	return ShowControllerUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUIForOrphanedUser
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowLoginUIForOrphanedUser(uint8_t LocalUserNum)
{
	static UFunction* uFnShowLoginUIForOrphanedUser = nullptr;

	if (!uFnShowLoginUIForOrphanedUser)
	{
		uFnShowLoginUIForOrphanedUser = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUIForOrphanedUser");
	}

	UOnlineSubsystemSteamworks_execShowLoginUIForOrphanedUser_Params ShowLoginUIForOrphanedUser_Params;
	memset(&ShowLoginUIForOrphanedUser_Params, 0, sizeof(ShowLoginUIForOrphanedUser_Params));
	memcpy_s(&ShowLoginUIForOrphanedUser_Params.LocalUserNum, sizeof(ShowLoginUIForOrphanedUser_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnShowLoginUIForOrphanedUser, &ShowLoginUIForOrphanedUser_Params, nullptr);

	return ShowLoginUIForOrphanedUser_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI
// [0x00024001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// bool                           bShowOnlineOnly                (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowLoginUI(uint8_t LocalUserNum, bool bShowOnlineOnly)
{
	static UFunction* uFnShowLoginUI = nullptr;

	if (!uFnShowLoginUI)
	{
		uFnShowLoginUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI");
	}

	UOnlineSubsystemSteamworks_execShowLoginUI_Params ShowLoginUI_Params;
	memset(&ShowLoginUI_Params, 0, sizeof(ShowLoginUI_Params));
	memcpy_s(&ShowLoginUI_Params.LocalUserNum, sizeof(ShowLoginUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	ShowLoginUI_Params.bShowOnlineOnly = bShowOnlineOnly;

	this->ProcessEvent(uFnShowLoginUI, &ShowLoginUI_Params, nullptr);

	return ShowLoginUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAvatarChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnAvatarChange(struct FUniqueNetId PlayerID)
{
	static UFunction* uFnOnAvatarChange = nullptr;

	if (!uFnOnAvatarChange)
	{
		uFnOnAvatarChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAvatarChange");
	}

	UOnlineSubsystemSteamworks_execOnAvatarChange_Params OnAvatarChange_Params;
	memset(&OnAvatarChange_Params, 0, sizeof(OnAvatarChange_Params));
	memcpy_s(&OnAvatarChange_Params.PlayerID, sizeof(OnAvatarChange_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	this->ProcessEvent(uFnOnAvatarChange, &OnAvatarChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FriendPresenceChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::FriendPresenceChange(struct FUniqueNetId PlayerID)
{
	static UFunction* uFnFriendPresenceChange = nullptr;

	if (!uFnFriendPresenceChange)
	{
		uFnFriendPresenceChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FriendPresenceChange");
	}

	UOnlineSubsystemSteamworks_execFriendPresenceChange_Params FriendPresenceChange_Params;
	memset(&FriendPresenceChange_Params, 0, sizeof(FriendPresenceChange_Params));
	memcpy_s(&FriendPresenceChange_Params.PlayerID, sizeof(FriendPresenceChange_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	this->ProcessEvent(uFnFriendPresenceChange, &FriendPresenceChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteAcceptedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteAccepted                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendInviteAcceptedDelegate(uint8_t LocalUserNum, struct FScriptDelegate InviteAccepted)
{
	static UFunction* uFnAddFriendInviteAcceptedDelegate = nullptr;

	if (!uFnAddFriendInviteAcceptedDelegate)
	{
		uFnAddFriendInviteAcceptedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteAcceptedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddFriendInviteAcceptedDelegate_Params AddFriendInviteAcceptedDelegate_Params;
	memset(&AddFriendInviteAcceptedDelegate_Params, 0, sizeof(AddFriendInviteAcceptedDelegate_Params));
	memcpy_s(&AddFriendInviteAcceptedDelegate_Params.LocalUserNum, sizeof(AddFriendInviteAcceptedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddFriendInviteAcceptedDelegate_Params.InviteAccepted, sizeof(AddFriendInviteAcceptedDelegate_Params.InviteAccepted), &InviteAccepted, sizeof(InviteAccepted));

	this->ProcessEvent(uFnAddFriendInviteAcceptedDelegate, &AddFriendInviteAcceptedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteAccepted
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            AcceptingPlayerId              (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnFriendInviteAccepted(struct FUniqueNetId AcceptingPlayerId)
{
	static UFunction* uFnOnFriendInviteAccepted = nullptr;

	if (!uFnOnFriendInviteAccepted)
	{
		uFnOnFriendInviteAccepted = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteAccepted");
	}

	UOnlineSubsystemSteamworks_execOnFriendInviteAccepted_Params OnFriendInviteAccepted_Params;
	memset(&OnFriendInviteAccepted_Params, 0, sizeof(OnFriendInviteAccepted_Params));
	memcpy_s(&OnFriendInviteAccepted_Params.AcceptingPlayerId, sizeof(OnFriendInviteAccepted_Params.AcceptingPlayerId), &AcceptingPlayerId, sizeof(AcceptingPlayerId));

	this->ProcessEvent(uFnOnFriendInviteAccepted, &OnFriendInviteAccepted_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnFriendsChange()
{
	static UFunction* uFnOnFriendsChange = nullptr;

	if (!uFnOnFriendsChange)
	{
		uFnOnFriendsChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange");
	}

	UOnlineSubsystemSteamworks_execOnFriendsChange_Params OnFriendsChange_Params;
	memset(&OnFriendsChange_Params, 0, sizeof(OnFriendsChange_Params));

	this->ProcessEvent(uFnOnFriendsChange, &OnFriendsChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnMutingChange()
{
	static UFunction* uFnOnMutingChange = nullptr;

	if (!uFnOnMutingChange)
	{
		uFnOnMutingChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange");
	}

	UOnlineSubsystemSteamworks_execOnMutingChange_Params OnMutingChange_Params;
	memset(&OnMutingChange_Params, 0, sizeof(OnMutingChange_Params));

	this->ProcessEvent(uFnOnMutingChange, &OnMutingChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnLoginCancelled()
{
	static UFunction* uFnOnLoginCancelled = nullptr;

	if (!uFnOnLoginCancelled)
	{
		uFnOnLoginCancelled = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled");
	}

	UOnlineSubsystemSteamworks_execOnLoginCancelled_Params OnLoginCancelled_Params;
	memset(&OnLoginCancelled_Params, 0, sizeof(OnLoginCancelled_Params));

	this->ProcessEvent(uFnOnLoginCancelled, &OnLoginCancelled_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLoginChange(uint8_t LocalUserNum)
{
	static UFunction* uFnOnLoginChange = nullptr;

	if (!uFnOnLoginChange)
	{
		uFnOnLoginChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange");
	}

	UOnlineSubsystemSteamworks_execOnLoginChange_Params OnLoginChange_Params;
	memset(&OnLoginChange_Params, 0, sizeof(OnLoginChange_Params));
	memcpy_s(&OnLoginChange_Params.LocalUserNum, sizeof(OnLoginChange_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnOnLoginChange, &OnLoginChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserSignInComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnUserSignInComplete(uint8_t LocalUserNum)
{
	static UFunction* uFnOnUserSignInComplete = nullptr;

	if (!uFnOnUserSignInComplete)
	{
		uFnOnUserSignInComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserSignInComplete");
	}

	UOnlineSubsystemSteamworks_execOnUserSignInComplete_Params OnUserSignInComplete_Params;
	memset(&OnUserSignInComplete_Params, 0, sizeof(OnUserSignInComplete_Params));
	memcpy_s(&OnUserSignInComplete_Params.LocalUserNum, sizeof(OnUserSignInComplete_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnOnUserSignInComplete, &OnUserSignInComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserSwitchComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnUserSwitchComplete(uint8_t LocalUserNum)
{
	static UFunction* uFnOnUserSwitchComplete = nullptr;

	if (!uFnOnUserSwitchComplete)
	{
		uFnOnUserSwitchComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserSwitchComplete");
	}

	UOnlineSubsystemSteamworks_execOnUserSwitchComplete_Params OnUserSwitchComplete_Params;
	memset(&OnUserSwitchComplete_Params, 0, sizeof(OnUserSwitchComplete_Params));
	memcpy_s(&OnUserSwitchComplete_Params.LocalUserNum, sizeof(OnUserSwitchComplete_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnOnUserSwitchComplete, &OnUserSwitchComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit
// [0x400020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::eventExit()
{
	static UFunction* uFnExit = nullptr;

	if (!uFnExit)
	{
		uFnExit = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit");
	}

	UOnlineSubsystemSteamworks_eventExit_Params Exit_Params;
	memset(&Exit_Params, 0, sizeof(Exit_Params));

	uFnExit->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnExit, &Exit_Params, nullptr);
	uFnExit->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PostInit
// [0x400020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::eventPostInit()
{
	static UFunction* uFnPostInit = nullptr;

	if (!uFnPostInit)
	{
		uFnPostInit = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PostInit");
	}

	UOnlineSubsystemSteamworks_eventPostInit_Params PostInit_Params;
	memset(&PostInit_Params, 0, sizeof(PostInit_Params));

	this->ProcessEvent(uFnPostInit, &PostInit_Params, nullptr);

	return PostInit_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init
// [0x400020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::eventInit()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init");
	}

	UOnlineSubsystemSteamworks_eventInit_Params Init_Params;
	memset(&Init_Params, 0, sizeof(Init_Params));

	uFnInit->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
	uFnInit->FunctionFlags |= 0x400;

	return Init_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnlineChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::CanPlayOnlineChanged(uint8_t LocalUserNum)
{
	static UFunction* uFnCanPlayOnlineChanged = nullptr;

	if (!uFnCanPlayOnlineChanged)
	{
		uFnCanPlayOnlineChanged = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnlineChanged");
	}

	UOnlineSubsystemSteamworks_execCanPlayOnlineChanged_Params CanPlayOnlineChanged_Params;
	memset(&CanPlayOnlineChanged_Params, 0, sizeof(CanPlayOnlineChanged_Params));
	memcpy_s(&CanPlayOnlineChanged_Params.LocalUserNum, sizeof(CanPlayOnlineChanged_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnCanPlayOnlineChanged, &CanPlayOnlineChanged_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.ClearMicroTxnResponseDelegate
// [0x400020002] (FUNC_Defined | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ResponseMicroTxnDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePurchaseInterfaceSteamworks::ClearMicroTxnResponseDelegate(struct FScriptDelegate ResponseMicroTxnDelegate)
{
	static UFunction* uFnClearMicroTxnResponseDelegate = nullptr;

	if (!uFnClearMicroTxnResponseDelegate)
	{
		uFnClearMicroTxnResponseDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.ClearMicroTxnResponseDelegate");
	}

	UOnlinePurchaseInterfaceSteamworks_execClearMicroTxnResponseDelegate_Params ClearMicroTxnResponseDelegate_Params;
	memset(&ClearMicroTxnResponseDelegate_Params, 0, sizeof(ClearMicroTxnResponseDelegate_Params));
	memcpy_s(&ClearMicroTxnResponseDelegate_Params.ResponseMicroTxnDelegate, sizeof(ClearMicroTxnResponseDelegate_Params.ResponseMicroTxnDelegate), &ResponseMicroTxnDelegate, sizeof(ResponseMicroTxnDelegate));

	this->ProcessEvent(uFnClearMicroTxnResponseDelegate, &ClearMicroTxnResponseDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AddMicroTxnResponseDelegate
// [0x400020002] (FUNC_Defined | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ResponseMicroTxnDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePurchaseInterfaceSteamworks::AddMicroTxnResponseDelegate(struct FScriptDelegate ResponseMicroTxnDelegate)
{
	static UFunction* uFnAddMicroTxnResponseDelegate = nullptr;

	if (!uFnAddMicroTxnResponseDelegate)
	{
		uFnAddMicroTxnResponseDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AddMicroTxnResponseDelegate");
	}

	UOnlinePurchaseInterfaceSteamworks_execAddMicroTxnResponseDelegate_Params AddMicroTxnResponseDelegate_Params;
	memset(&AddMicroTxnResponseDelegate_Params, 0, sizeof(AddMicroTxnResponseDelegate_Params));
	memcpy_s(&AddMicroTxnResponseDelegate_Params.ResponseMicroTxnDelegate, sizeof(AddMicroTxnResponseDelegate_Params.ResponseMicroTxnDelegate), &ResponseMicroTxnDelegate, sizeof(ResponseMicroTxnDelegate));

	this->ProcessEvent(uFnAddMicroTxnResponseDelegate, &AddMicroTxnResponseDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.FormatCurrency
// [0x400020002] (FUNC_Defined | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Currency                       (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Price                          (CPF_Parm)

class FString UOnlinePurchaseInterfaceSteamworks::FormatCurrency(class FString Currency, int32_t Price)
{
	static UFunction* uFnFormatCurrency = nullptr;

	if (!uFnFormatCurrency)
	{
		uFnFormatCurrency = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.FormatCurrency");
	}

	UOnlinePurchaseInterfaceSteamworks_execFormatCurrency_Params FormatCurrency_Params;
	memset(&FormatCurrency_Params, 0, sizeof(FormatCurrency_Params));
	memcpy_s(&FormatCurrency_Params.Currency, sizeof(FormatCurrency_Params.Currency), &Currency, sizeof(Currency));
	memcpy_s(&FormatCurrency_Params.Price, sizeof(FormatCurrency_Params.Price), &Price, sizeof(Price));

	this->ProcessEvent(uFnFormatCurrency, &FormatCurrency_Params, nullptr);

	return FormatCurrency_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.HandleGetAppPriceInfoComplete
// [0x00840003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bDidSucceed                    (CPF_Parm)

void UOnlinePurchaseInterfaceSteamworks::HandleGetAppPriceInfoComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bDidSucceed)
{
	static UFunction* uFnHandleGetAppPriceInfoComplete = nullptr;

	if (!uFnHandleGetAppPriceInfoComplete)
	{
		uFnHandleGetAppPriceInfoComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.HandleGetAppPriceInfoComplete");
	}

	UOnlinePurchaseInterfaceSteamworks_execHandleGetAppPriceInfoComplete_Params HandleGetAppPriceInfoComplete_Params;
	memset(&HandleGetAppPriceInfoComplete_Params, 0, sizeof(HandleGetAppPriceInfoComplete_Params));
	memcpy_s(&HandleGetAppPriceInfoComplete_Params.Request, sizeof(HandleGetAppPriceInfoComplete_Params.Request), &Request, sizeof(Request));
	memcpy_s(&HandleGetAppPriceInfoComplete_Params.Response, sizeof(HandleGetAppPriceInfoComplete_Params.Response), &Response, sizeof(Response));
	HandleGetAppPriceInfoComplete_Params.bDidSucceed = bDidSucceed;

	this->ProcessEvent(uFnHandleGetAppPriceInfoComplete, &HandleGetAppPriceInfoComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.GetAppPriceInfo
// [0x400C20002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            PlayerID                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<struct FName>           AppNames                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePurchaseInterfaceSteamworks::GetAppPriceInfo(struct FScriptDelegate Callback, struct FUniqueNetId& PlayerID, TArray<struct FName>& AppNames)
{
	static UFunction* uFnGetAppPriceInfo = nullptr;

	if (!uFnGetAppPriceInfo)
	{
		uFnGetAppPriceInfo = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.GetAppPriceInfo");
	}

	UOnlinePurchaseInterfaceSteamworks_execGetAppPriceInfo_Params GetAppPriceInfo_Params;
	memset(&GetAppPriceInfo_Params, 0, sizeof(GetAppPriceInfo_Params));
	memcpy_s(&GetAppPriceInfo_Params.Callback, sizeof(GetAppPriceInfo_Params.Callback), &Callback, sizeof(Callback));
	memcpy_s(&GetAppPriceInfo_Params.PlayerID, sizeof(GetAppPriceInfo_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	memcpy_s(&GetAppPriceInfo_Params.AppNames, sizeof(GetAppPriceInfo_Params.AppNames), &AppNames, sizeof(AppNames));

	this->ProcessEvent(uFnGetAppPriceInfo, &GetAppPriceInfo_Params, nullptr);

	memcpy_s(&PlayerID, sizeof(PlayerID), &GetAppPriceInfo_Params.PlayerID, sizeof(GetAppPriceInfo_Params.PlayerID));
	memcpy_s(&AppNames, sizeof(AppNames), &GetAppPriceInfo_Params.AppNames, sizeof(GetAppPriceInfo_Params.AppNames));

	return GetAppPriceInfo_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AppIdToName
// [0x00424003] (FUNC_Final | FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  AppID                          (CPF_Parm | CPF_NeedCtorLink)
// bool                           bOptional                      (CPF_OptionalParm | CPF_Parm)
// struct FName                   AppName                        (CPF_Parm | CPF_OutParm)

bool UOnlinePurchaseInterfaceSteamworks::AppIdToName(class FString AppID, bool bOptional, struct FName& AppName)
{
	static UFunction* uFnAppIdToName = nullptr;

	if (!uFnAppIdToName)
	{
		uFnAppIdToName = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AppIdToName");
	}

	UOnlinePurchaseInterfaceSteamworks_execAppIdToName_Params AppIdToName_Params;
	memset(&AppIdToName_Params, 0, sizeof(AppIdToName_Params));
	memcpy_s(&AppIdToName_Params.AppID, sizeof(AppIdToName_Params.AppID), &AppID, sizeof(AppID));
	AppIdToName_Params.bOptional = bOptional;
	memcpy_s(&AppIdToName_Params.AppName, sizeof(AppIdToName_Params.AppName), &AppName, sizeof(AppName));

	this->ProcessEvent(uFnAppIdToName, &AppIdToName_Params, nullptr);

	memcpy_s(&AppName, sizeof(AppName), &AppIdToName_Params.AppName, sizeof(AppIdToName_Params.AppName));

	return AppIdToName_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AppNameToId
// [0x00424003] (FUNC_Final | FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   AppName                        (CPF_Parm)
// bool                           bOptional                      (CPF_OptionalParm | CPF_Parm)
// class FString                  AppID                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePurchaseInterfaceSteamworks::AppNameToId(struct FName AppName, bool bOptional, class FString& AppID)
{
	static UFunction* uFnAppNameToId = nullptr;

	if (!uFnAppNameToId)
	{
		uFnAppNameToId = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AppNameToId");
	}

	UOnlinePurchaseInterfaceSteamworks_execAppNameToId_Params AppNameToId_Params;
	memset(&AppNameToId_Params, 0, sizeof(AppNameToId_Params));
	memcpy_s(&AppNameToId_Params.AppName, sizeof(AppNameToId_Params.AppName), &AppName, sizeof(AppName));
	AppNameToId_Params.bOptional = bOptional;
	memcpy_s(&AppNameToId_Params.AppID, sizeof(AppNameToId_Params.AppID), &AppID, sizeof(AppID));

	this->ProcessEvent(uFnAppNameToId, &AppNameToId_Params, nullptr);

	memcpy_s(&AppID, sizeof(AppID), &AppNameToId_Params.AppID, sizeof(AppNameToId_Params.AppID));

	return AppNameToId_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.SteamWorkshopCommandlet.Init
// [0x00020803] (FUNC_Final | FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool USteamWorkshopCommandlet::eventInit()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function OnlineSubsystemSteamworks.SteamWorkshopCommandlet.Init");
	}

	USteamWorkshopCommandlet_eventInit_Params Init_Params;
	memset(&Init_Params, 0, sizeof(Init_Params));

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);

	return Init_Params.ReturnValue;
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
