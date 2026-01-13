/*
#############################################################################################
# Rocket League SDK (RLSDK) Season 20 (v2.61)
# Generated with CodeRedGenerator v1.1.5 on 11/05/2025 07:11PM
# ========================================================================================= #
# File: OnlineSubsystemEOS_structs.hpp
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

// ScriptStruct OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnlineStatusMappingEOS
// Size: 0x0018
struct FOnlineStatusMappingEOS
{
	int32_t                                            StatusId;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                          UnknownData00[0x4];                            // 0x0004 (0x0004) MISSED OFFSET
	class FString                                      StatusString;                                  // 0x0008 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.LoginDelegates
// Size: 0x0010
struct FLoginDelegates
{
	class TArray<struct FScriptDelegate>               Delegates;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
