#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AdvancedSessions

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AdvancedSessions_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class AdvancedSessions.AdvancedVoiceLibrary
// 0x0000 (0x0028 - 0x0028)
class UAdvancedVoiceLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void GetNumLocalTalkers(int32* NumLocalTalkers);
	static void IsHeadsetPresent(bool* bHasHeadset, uint8 LocalPlayerNum);
	static bool IsLocalPlayerTalking(uint8 LocalPlayerNum);
	static bool IsPlayerMuted(uint8 LocalUserNumChecking, const struct FBPUniqueNetId& UniqueNetId);
	static bool IsRemotePlayerTalking(const struct FBPUniqueNetId& UniqueNetId);
	static bool MuteRemoteTalker(uint8 LocalUserNum, const struct FBPUniqueNetId& UniqueNetId, bool bIsSystemWide);
	static void RegisterAllLocalTalkers();
	static bool RegisterLocalTalker(uint8 LocalPlayerNum);
	static bool RegisterRemoteTalker(const struct FBPUniqueNetId& UniqueNetId);
	static void RemoveAllRemoteTalkers();
	static void StartNetworkedVoice(uint8 LocalPlayerNum);
	static void StopNetworkedVoice(uint8 LocalPlayerNum);
	static bool UnMuteRemoteTalker(uint8 LocalUserNum, const struct FBPUniqueNetId& UniqueNetId, bool bIsSystemWide);
	static void UnRegisterAllLocalTalkers();
	static void UnRegisterLocalTalker(uint8 LocalPlayerNum);
	static bool UnRegisterRemoteTalker(const struct FBPUniqueNetId& UniqueNetId);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AdvancedVoiceLibrary">();
	}
	static class UAdvancedVoiceLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAdvancedVoiceLibrary>();
	}
};
// static_assert(alignof(UAdvancedVoiceLibrary) == 0x000008, "Wrong alignment on UAdvancedVoiceLibrary");
// static_assert(sizeof(UAdvancedVoiceLibrary) == 0x000028, "Wrong size on UAdvancedVoiceLibrary");

// Class AdvancedSessions.AdvancedExternalUILibrary
// 0x0000 (0x0028 - 0x0028)
class UAdvancedExternalUILibrary final : public UBlueprintFunctionLibrary
{
public:
	static void CloseWebURLUI();
	static void ShowAccountUpgradeUI(const struct FBPUniqueNetId& PlayerRequestingAccountUpgradeUI, EBlueprintResultSwitch* Result);
	static void ShowFriendsUI(class APlayerController* PlayerController, EBlueprintResultSwitch* Result);
	static void ShowInviteUI(class APlayerController* PlayerController, EBlueprintResultSwitch* Result);
	static void ShowLeaderBoardUI(const class FString& LeaderboardName, EBlueprintResultSwitch* Result);
	static void ShowProfileUI(const struct FBPUniqueNetId& PlayerViewingProfile, const struct FBPUniqueNetId& PlayerToViewProfileOf, EBlueprintResultSwitch* Result);
	static void ShowWebURLUI(const class FString& URLToShow, EBlueprintResultSwitch* Result, TArray<class FString>* AllowedDomains, bool bEmbedded, bool bShowBackground, bool bShowCloseButton, int32 OffsetX, int32 OffsetY, int32 SizeX, int32 SizeY);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AdvancedExternalUILibrary">();
	}
	static class UAdvancedExternalUILibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAdvancedExternalUILibrary>();
	}
};
// static_assert(alignof(UAdvancedExternalUILibrary) == 0x000008, "Wrong alignment on UAdvancedExternalUILibrary");
// static_assert(sizeof(UAdvancedExternalUILibrary) == 0x000028, "Wrong size on UAdvancedExternalUILibrary");

// Class AdvancedSessions.AdvancedFriendsGameInstance
// 0x0080 (0x0228 - 0x01A8)
class UAdvancedFriendsGameInstance : public UGameInstance
{
public:
	bool                                          bCallFriendInterfaceEventsOnPlayerControllers;     // 0x01A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCallIdentityInterfaceEventsOnPlayerControllers;   // 0x01A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCallVoiceInterfaceEventsOnPlayerControllers;      // 0x01AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableTalkingStatusDelegate;                      // 0x01AB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1099[0x7C];                                    // 0x01AC(0x007C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnPlayerLoginChanged(int32 PlayerNum);
	void OnPlayerLoginStatusChanged(int32 PlayerNum, EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, const struct FBPUniqueNetId& NewPlayerUniqueNetID);
	void OnPlayerTalkingStateChanged(const struct FBPUniqueNetId& PlayerId, bool bIsTalking);
	void OnSessionInviteAccepted(int32 LocalPlayerNum, const struct FBPUniqueNetId& PersonInvited, const struct FBlueprintSessionResult& SessionToJoin);
	void OnSessionInviteReceived(int32 LocalPlayerNum, const struct FBPUniqueNetId& PersonInviting, const class FString& AppID, const struct FBlueprintSessionResult& SessionToJoin);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AdvancedFriendsGameInstance">();
	}
	static class UAdvancedFriendsGameInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAdvancedFriendsGameInstance>();
	}
};
// static_assert(alignof(UAdvancedFriendsGameInstance) == 0x000008, "Wrong alignment on UAdvancedFriendsGameInstance");
// static_assert(sizeof(UAdvancedFriendsGameInstance) == 0x000228, "Wrong size on UAdvancedFriendsGameInstance");
// static_assert(offsetof(UAdvancedFriendsGameInstance, bCallFriendInterfaceEventsOnPlayerControllers) == 0x0001A8, "Member 'UAdvancedFriendsGameInstance::bCallFriendInterfaceEventsOnPlayerControllers' has a wrong offset!");
// static_assert(offsetof(UAdvancedFriendsGameInstance, bCallIdentityInterfaceEventsOnPlayerControllers) == 0x0001A9, "Member 'UAdvancedFriendsGameInstance::bCallIdentityInterfaceEventsOnPlayerControllers' has a wrong offset!");
// static_assert(offsetof(UAdvancedFriendsGameInstance, bCallVoiceInterfaceEventsOnPlayerControllers) == 0x0001AA, "Member 'UAdvancedFriendsGameInstance::bCallVoiceInterfaceEventsOnPlayerControllers' has a wrong offset!");
// static_assert(offsetof(UAdvancedFriendsGameInstance, bEnableTalkingStatusDelegate) == 0x0001AB, "Member 'UAdvancedFriendsGameInstance::bEnableTalkingStatusDelegate' has a wrong offset!");

// Class AdvancedSessions.AdvancedFriendsInterface
// 0x0000 (0x0028 - 0x0028)
class IAdvancedFriendsInterface final : public IInterface
{
public:
	void OnPlayerLoginChanged(int32 PlayerNum);
	void OnPlayerLoginStatusChanged(EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, const struct FBPUniqueNetId& PlayerUniqueNetID);
	void OnPlayerVoiceStateChanged(const struct FBPUniqueNetId& PlayerId, bool bIsTalking);
	void OnSessionInviteAccepted(const struct FBPUniqueNetId& PersonInvited, const struct FBlueprintSessionResult& SearchResult);
	void OnSessionInviteReceived(const struct FBPUniqueNetId& PersonInviting, const struct FBlueprintSessionResult& SearchResult);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AdvancedFriendsInterface">();
	}
	static class IAdvancedFriendsInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IAdvancedFriendsInterface>();
	}
};
// static_assert(alignof(IAdvancedFriendsInterface) == 0x000008, "Wrong alignment on IAdvancedFriendsInterface");
// static_assert(sizeof(IAdvancedFriendsInterface) == 0x000028, "Wrong size on IAdvancedFriendsInterface");

// Class AdvancedSessions.AdvancedFriendsLibrary
// 0x0000 (0x0028 - 0x0028)
class UAdvancedFriendsLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void GetFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId, struct FBPFriendInfo* Friend);
	static void GetStoredFriendsList(class APlayerController* PlayerController, TArray<struct FBPFriendInfo>* FriendsList);
	static void GetStoredRecentPlayersList(const struct FBPUniqueNetId& UniqueNetId, TArray<struct FBPOnlineRecentPlayer>* PlayersList);
	static void IsAFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& UniqueNetId, bool* IsFriend);
	static void SendSessionInviteToFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId, EBlueprintResultSwitch* Result);
	static void SendSessionInviteToFriends(class APlayerController* PlayerController, const TArray<struct FBPUniqueNetId>& Friends, EBlueprintResultSwitch* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AdvancedFriendsLibrary">();
	}
	static class UAdvancedFriendsLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAdvancedFriendsLibrary>();
	}
};
// static_assert(alignof(UAdvancedFriendsLibrary) == 0x000008, "Wrong alignment on UAdvancedFriendsLibrary");
// static_assert(sizeof(UAdvancedFriendsLibrary) == 0x000028, "Wrong size on UAdvancedFriendsLibrary");

// Class AdvancedSessions.AdvancedGameSession
// 0x0050 (0x0288 - 0x0238)
class AAdvancedGameSession final : public AGameSession
{
public:
	TMap<struct FUniqueNetIdRepl, class FText>    BanList;                                           // 0x0238(0x0050)(Transient, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AdvancedGameSession">();
	}
	static class AAdvancedGameSession* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAdvancedGameSession>();
	}
};
// static_assert(alignof(AAdvancedGameSession) == 0x000008, "Wrong alignment on AAdvancedGameSession");
// static_assert(sizeof(AAdvancedGameSession) == 0x000288, "Wrong size on AAdvancedGameSession");
// static_assert(offsetof(AAdvancedGameSession, BanList) == 0x000238, "Member 'AAdvancedGameSession::BanList' has a wrong offset!");

// Class AdvancedSessions.AdvancedIdentityLibrary
// 0x0000 (0x0028 - 0x0028)
class UAdvancedIdentityLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void GetAllUserAccounts(TArray<struct FBPUserOnlineAccount>* AccountInfos, EBlueprintResultSwitch* Result);
	static void GetLoginStatus(const struct FBPUniqueNetId& UniqueNetId, EBPLoginStatus* LoginStatus, EBlueprintResultSwitch* Result);
	static void GetPlayerAuthToken(class APlayerController* PlayerController, class FString* AuthToken, EBlueprintResultSwitch* Result);
	static void GetPlayerNickname(const struct FBPUniqueNetId& UniqueNetId, class FString* PlayerNickname);
	static void GetUserAccount(const struct FBPUniqueNetId& UniqueNetId, struct FBPUserOnlineAccount* AccountInfo, EBlueprintResultSwitch* Result);
	static void GetUserAccountAccessToken(const struct FBPUserOnlineAccount& AccountInfo, class FString* AccessToken);
	static void GetUserAccountAttribute(const struct FBPUserOnlineAccount& AccountInfo, const class FString& AttributeName, class FString* AttributeValue, EBlueprintResultSwitch* Result);
	static void GetUserAccountAuthAttribute(const struct FBPUserOnlineAccount& AccountInfo, const class FString& AttributeName, class FString* AuthAttribute, EBlueprintResultSwitch* Result);
	static void GetUserAccountDisplayName(const struct FBPUserOnlineAccount& AccountInfo, class FString* DisplayName);
	static void GetUserAccountRealName(const struct FBPUserOnlineAccount& AccountInfo, class FString* Username);
	static void GetUserID(const struct FBPUserOnlineAccount& AccountInfo, struct FBPUniqueNetId* UniqueNetId);
	static void SetUserAccountAttribute(const struct FBPUserOnlineAccount& AccountInfo, const class FString& AttributeName, const class FString& NewAttributeValue, EBlueprintResultSwitch* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AdvancedIdentityLibrary">();
	}
	static class UAdvancedIdentityLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAdvancedIdentityLibrary>();
	}
};
// static_assert(alignof(UAdvancedIdentityLibrary) == 0x000008, "Wrong alignment on UAdvancedIdentityLibrary");
// static_assert(sizeof(UAdvancedIdentityLibrary) == 0x000028, "Wrong size on UAdvancedIdentityLibrary");

// Class AdvancedSessions.AdvancedSessionsLibrary
// 0x0000 (0x0028 - 0x0028)
class UAdvancedSessionsLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void AddOrModifyExtraSettings(TArray<struct FSessionPropertyKeyPair>& SettingsArray, TArray<struct FSessionPropertyKeyPair>& NewOrChangedSettings, TArray<struct FSessionPropertyKeyPair>* ModifiedSettingsArray);
	static bool BanPlayer(class UObject* WorldContextObject, class APlayerController* PlayerToBan, const class FText& BanReason);
	static bool EqualEqual_UNetIDUnetID(const struct FBPUniqueNetId& A, const struct FBPUniqueNetId& B);
	static void FindSessionPropertyByName(const TArray<struct FSessionPropertyKeyPair>& ExtraSettings, class FName SettingsName, EBlueprintResultSwitch* Result, struct FSessionPropertyKeyPair* OutProperty);
	static void FindSessionPropertyIndexByName(const TArray<struct FSessionPropertyKeyPair>& ExtraSettings, class FName SettingName, EBlueprintResultSwitch* Result, int32* OutIndex);
	static void GetCurrentSessionID_AsString(class UObject* WorldContextObject, class FString* SessionID);
	static void GetCurrentUniqueBuildID(int32* UniqueBuildId);
	static void GetExtraSettings(const struct FBlueprintSessionResult& SessionResult, TArray<struct FSessionPropertyKeyPair>* ExtraSettings);
	static void GetNetPlayerIndex(class APlayerController* PlayerController, int32* NetPlayerIndex);
	static void GetNumberOfNetworkPlayers(class UObject* WorldContextObject, int32* NumNetPlayers);
	static void GetPlayerName(class APlayerController* PlayerController, class FString* PlayerName);
	static void GetSessionID_AsString(const struct FBlueprintSessionResult& SessionResult, class FString* SessionID);
	static void GetSessionPropertyBool(const TArray<struct FSessionPropertyKeyPair>& ExtraSettings, class FName SettingName, ESessionSettingSearchResult* SearchResult, bool* SettingValue);
	static void GetSessionPropertyByte(const TArray<struct FSessionPropertyKeyPair>& ExtraSettings, class FName SettingName, ESessionSettingSearchResult* SearchResult, uint8* SettingValue);
	static void GetSessionPropertyFloat(const TArray<struct FSessionPropertyKeyPair>& ExtraSettings, class FName SettingName, ESessionSettingSearchResult* SearchResult, float* SettingValue);
	static void GetSessionPropertyInt(const TArray<struct FSessionPropertyKeyPair>& ExtraSettings, class FName SettingName, ESessionSettingSearchResult* SearchResult, int32* SettingValue);
	static class FName GetSessionPropertyKey(const struct FSessionPropertyKeyPair& SessionProperty);
	static void GetSessionPropertyString(const TArray<struct FSessionPropertyKeyPair>& ExtraSettings, class FName SettingName, ESessionSettingSearchResult* SearchResult, class FString* SettingValue);
	static void GetSessionSettings(class UObject* WorldContextObject, int32* NumConnections, int32* NumPrivateConnections, bool* bIsLAN, bool* bIsDedicated, bool* bAllowInvites, bool* bAllowJoinInProgress, bool* bIsAnticheatEnabled, int32* BuildUniqueID, TArray<struct FSessionPropertyKeyPair>* ExtraSettings, EBlueprintResultSwitch* Result);
	static void GetSessionState(class UObject* WorldContextObject, EBPOnlineSessionState* SessionState);
	static void GetUniqueBuildID(const struct FBlueprintSessionResult& SessionResult, int32* UniqueBuildId);
	static void GetUniqueNetID(class APlayerController* PlayerController, struct FBPUniqueNetId* UniqueNetId);
	static void GetUniqueNetIDFromPlayerState(class APlayerState* PlayerState, struct FBPUniqueNetId* UniqueNetId);
	static bool HasOnlineSubsystem(class FName SubSystemName);
	static void IsPlayerInSession(class UObject* WorldContextObject, const struct FBPUniqueNetId& PlayerToCheck, bool* bIsInSession);
	static bool IsValidSession(const struct FBlueprintSessionResult& SessionResult);
	static bool IsValidUniqueNetID(const struct FBPUniqueNetId& UniqueNetId);
	static bool KickPlayer(class UObject* WorldContextObject, class APlayerController* PlayerToKick, const class FText& KickReason);
	static struct FSessionPropertyKeyPair MakeLiteralSessionPropertyBool(class FName Key, bool Value);
	static struct FSessionPropertyKeyPair MakeLiteralSessionPropertyByte(class FName Key, uint8 Value);
	static struct FSessionPropertyKeyPair MakeLiteralSessionPropertyFloat(class FName Key, float Value);
	static struct FSessionPropertyKeyPair MakeLiteralSessionPropertyInt(class FName Key, int32 Value);
	static struct FSessionPropertyKeyPair MakeLiteralSessionPropertyString(class FName Key, const class FString& Value);
	static struct FSessionsSearchSetting MakeLiteralSessionSearchProperty(const struct FSessionPropertyKeyPair& SessionSearchProperty, EOnlineComparisonOpRedux ComparisonOp);
	static void SetPlayerName(class APlayerController* PlayerController, const class FString& PlayerName);
	static void UniqueNetIdToString(const struct FBPUniqueNetId& UniqueNetId, class FString* String);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AdvancedSessionsLibrary">();
	}
	static class UAdvancedSessionsLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAdvancedSessionsLibrary>();
	}
};
// static_assert(alignof(UAdvancedSessionsLibrary) == 0x000008, "Wrong alignment on UAdvancedSessionsLibrary");
// static_assert(sizeof(UAdvancedSessionsLibrary) == 0x000028, "Wrong size on UAdvancedSessionsLibrary");

// Class AdvancedSessions.CancelFindSessionsCallbackProxy
// 0x0048 (0x0078 - 0x0030)
class UCancelFindSessionsCallbackProxy final : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_             OnSuccess;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnFailure;                                         // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_10C4[0x28];                                    // 0x0050(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UCancelFindSessionsCallbackProxy* CancelFindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CancelFindSessionsCallbackProxy">();
	}
	static class UCancelFindSessionsCallbackProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCancelFindSessionsCallbackProxy>();
	}
};
// static_assert(alignof(UCancelFindSessionsCallbackProxy) == 0x000008, "Wrong alignment on UCancelFindSessionsCallbackProxy");
// static_assert(sizeof(UCancelFindSessionsCallbackProxy) == 0x000078, "Wrong size on UCancelFindSessionsCallbackProxy");
// static_assert(offsetof(UCancelFindSessionsCallbackProxy, OnSuccess) == 0x000030, "Member 'UCancelFindSessionsCallbackProxy::OnSuccess' has a wrong offset!");
// static_assert(offsetof(UCancelFindSessionsCallbackProxy, OnFailure) == 0x000040, "Member 'UCancelFindSessionsCallbackProxy::OnFailure' has a wrong offset!");

// Class AdvancedSessions.CreateSessionCallbackProxyAdvanced
// 0x0088 (0x00B8 - 0x0030)
class UCreateSessionCallbackProxyAdvanced final : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_             OnSuccess;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnFailure;                                         // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_10C5[0x68];                                    // 0x0050(0x0068)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UCreateSessionCallbackProxyAdvanced* CreateAdvancedSession(class UObject* WorldContextObject, const TArray<struct FSessionPropertyKeyPair>& ExtraSettings, class APlayerController* PlayerController, int32 PublicConnections, int32 PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bIsDedicatedServer, bool bUsePresence, bool bUseLobbiesIfAvailable, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreateSessionCallbackProxyAdvanced">();
	}
	static class UCreateSessionCallbackProxyAdvanced* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreateSessionCallbackProxyAdvanced>();
	}
};
// static_assert(alignof(UCreateSessionCallbackProxyAdvanced) == 0x000008, "Wrong alignment on UCreateSessionCallbackProxyAdvanced");
// static_assert(sizeof(UCreateSessionCallbackProxyAdvanced) == 0x0000B8, "Wrong size on UCreateSessionCallbackProxyAdvanced");
// static_assert(offsetof(UCreateSessionCallbackProxyAdvanced, OnSuccess) == 0x000030, "Member 'UCreateSessionCallbackProxyAdvanced::OnSuccess' has a wrong offset!");
// static_assert(offsetof(UCreateSessionCallbackProxyAdvanced, OnFailure) == 0x000040, "Member 'UCreateSessionCallbackProxyAdvanced::OnFailure' has a wrong offset!");

// Class AdvancedSessions.EndSessionCallbackProxy
// 0x0048 (0x0078 - 0x0030)
class UEndSessionCallbackProxy final : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_             OnSuccess;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnFailure;                                         // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_10C7[0x28];                                    // 0x0050(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UEndSessionCallbackProxy* EndSession(class UObject* WorldContextObject, class APlayerController* PlayerController);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EndSessionCallbackProxy">();
	}
	static class UEndSessionCallbackProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEndSessionCallbackProxy>();
	}
};
// static_assert(alignof(UEndSessionCallbackProxy) == 0x000008, "Wrong alignment on UEndSessionCallbackProxy");
// static_assert(sizeof(UEndSessionCallbackProxy) == 0x000078, "Wrong size on UEndSessionCallbackProxy");
// static_assert(offsetof(UEndSessionCallbackProxy, OnSuccess) == 0x000030, "Member 'UEndSessionCallbackProxy::OnSuccess' has a wrong offset!");
// static_assert(offsetof(UEndSessionCallbackProxy, OnFailure) == 0x000040, "Member 'UEndSessionCallbackProxy::OnFailure' has a wrong offset!");

// Class AdvancedSessions.FindFriendSessionCallbackProxy
// 0x0068 (0x0098 - 0x0030)
class UFindFriendSessionCallbackProxy final : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_             OnSuccess;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnFailure;                                         // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_10C8[0x48];                                    // 0x0050(0x0048)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UFindFriendSessionCallbackProxy* FindFriendSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FindFriendSessionCallbackProxy">();
	}
	static class UFindFriendSessionCallbackProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFindFriendSessionCallbackProxy>();
	}
};
// static_assert(alignof(UFindFriendSessionCallbackProxy) == 0x000008, "Wrong alignment on UFindFriendSessionCallbackProxy");
// static_assert(sizeof(UFindFriendSessionCallbackProxy) == 0x000098, "Wrong size on UFindFriendSessionCallbackProxy");
// static_assert(offsetof(UFindFriendSessionCallbackProxy, OnSuccess) == 0x000030, "Member 'UFindFriendSessionCallbackProxy::OnSuccess' has a wrong offset!");
// static_assert(offsetof(UFindFriendSessionCallbackProxy, OnFailure) == 0x000040, "Member 'UFindFriendSessionCallbackProxy::OnFailure' has a wrong offset!");

// Class AdvancedSessions.FindSessionsCallbackProxyAdvanced
// 0x00A0 (0x00D0 - 0x0030)
class UFindSessionsCallbackProxyAdvanced final : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_             OnSuccess;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnFailure;                                         // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_10C9[0x80];                                    // 0x0050(0x0080)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static void FilterSessionResults(const TArray<struct FBlueprintSessionResult>& SessionResults, const TArray<struct FSessionsSearchSetting>& Filters, TArray<struct FBlueprintSessionResult>* FilteredResults);
	static class UFindSessionsCallbackProxyAdvanced* FindSessionsAdvanced(class UObject* WorldContextObject, class APlayerController* PlayerController, int32 MaxResults, bool bUseLAN, EBPServerPresenceSearchType ServerTypeToSearch, const TArray<struct FSessionsSearchSetting>& Filters, bool bEmptyServersOnly, bool bNonEmptyServersOnly, bool bSecureServersOnly, bool bSearchLobbies, int32 MinSlotsAvailable);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FindSessionsCallbackProxyAdvanced">();
	}
	static class UFindSessionsCallbackProxyAdvanced* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFindSessionsCallbackProxyAdvanced>();
	}
};
// static_assert(alignof(UFindSessionsCallbackProxyAdvanced) == 0x000008, "Wrong alignment on UFindSessionsCallbackProxyAdvanced");
// static_assert(sizeof(UFindSessionsCallbackProxyAdvanced) == 0x0000D0, "Wrong size on UFindSessionsCallbackProxyAdvanced");
// static_assert(offsetof(UFindSessionsCallbackProxyAdvanced, OnSuccess) == 0x000030, "Member 'UFindSessionsCallbackProxyAdvanced::OnSuccess' has a wrong offset!");
// static_assert(offsetof(UFindSessionsCallbackProxyAdvanced, OnFailure) == 0x000040, "Member 'UFindSessionsCallbackProxyAdvanced::OnFailure' has a wrong offset!");

// Class AdvancedSessions.GetFriendsCallbackProxy
// 0x0040 (0x0070 - 0x0030)
class UGetFriendsCallbackProxy final : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_             OnSuccess;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnFailure;                                         // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_10CB[0x20];                                    // 0x0050(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UGetFriendsCallbackProxy* GetAndStoreFriendsList(class UObject* WorldContextObject, class APlayerController* PlayerController);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GetFriendsCallbackProxy">();
	}
	static class UGetFriendsCallbackProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGetFriendsCallbackProxy>();
	}
};
// static_assert(alignof(UGetFriendsCallbackProxy) == 0x000008, "Wrong alignment on UGetFriendsCallbackProxy");
// static_assert(sizeof(UGetFriendsCallbackProxy) == 0x000070, "Wrong size on UGetFriendsCallbackProxy");
// static_assert(offsetof(UGetFriendsCallbackProxy, OnSuccess) == 0x000030, "Member 'UGetFriendsCallbackProxy::OnSuccess' has a wrong offset!");
// static_assert(offsetof(UGetFriendsCallbackProxy, OnFailure) == 0x000040, "Member 'UGetFriendsCallbackProxy::OnFailure' has a wrong offset!");

// Class AdvancedSessions.GetRecentPlayersCallbackProxy
// 0x0060 (0x0090 - 0x0030)
class UGetRecentPlayersCallbackProxy final : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_             OnSuccess;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnFailure;                                         // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_10CC[0x40];                                    // 0x0050(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UGetRecentPlayersCallbackProxy* GetAndStoreRecentPlayersList(class UObject* WorldContextObject, const struct FBPUniqueNetId& UniqueNetId);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GetRecentPlayersCallbackProxy">();
	}
	static class UGetRecentPlayersCallbackProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGetRecentPlayersCallbackProxy>();
	}
};
// static_assert(alignof(UGetRecentPlayersCallbackProxy) == 0x000008, "Wrong alignment on UGetRecentPlayersCallbackProxy");
// static_assert(sizeof(UGetRecentPlayersCallbackProxy) == 0x000090, "Wrong size on UGetRecentPlayersCallbackProxy");
// static_assert(offsetof(UGetRecentPlayersCallbackProxy, OnSuccess) == 0x000030, "Member 'UGetRecentPlayersCallbackProxy::OnSuccess' has a wrong offset!");
// static_assert(offsetof(UGetRecentPlayersCallbackProxy, OnFailure) == 0x000040, "Member 'UGetRecentPlayersCallbackProxy::OnFailure' has a wrong offset!");

// Class AdvancedSessions.GetUserPrivilegeCallbackProxy
// 0x0050 (0x0080 - 0x0030)
class UGetUserPrivilegeCallbackProxy final : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_             OnSuccess;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnFailure;                                         // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_10CD[0x30];                                    // 0x0050(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UGetUserPrivilegeCallbackProxy* GetUserPrivilege(class UObject* WorldContextObject, const EBPUserPrivileges& PrivilegeToCheck, const struct FBPUniqueNetId& PlayerUniqueNetID);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GetUserPrivilegeCallbackProxy">();
	}
	static class UGetUserPrivilegeCallbackProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGetUserPrivilegeCallbackProxy>();
	}
};
// static_assert(alignof(UGetUserPrivilegeCallbackProxy) == 0x000008, "Wrong alignment on UGetUserPrivilegeCallbackProxy");
// static_assert(sizeof(UGetUserPrivilegeCallbackProxy) == 0x000080, "Wrong size on UGetUserPrivilegeCallbackProxy");
// static_assert(offsetof(UGetUserPrivilegeCallbackProxy, OnSuccess) == 0x000030, "Member 'UGetUserPrivilegeCallbackProxy::OnSuccess' has a wrong offset!");
// static_assert(offsetof(UGetUserPrivilegeCallbackProxy, OnFailure) == 0x000040, "Member 'UGetUserPrivilegeCallbackProxy::OnFailure' has a wrong offset!");

// Class AdvancedSessions.LoginUserCallbackProxy
// 0x0068 (0x0098 - 0x0030)
class ULoginUserCallbackProxy final : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_             OnSuccess;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnFailure;                                         // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_10CF[0x48];                                    // 0x0050(0x0048)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class ULoginUserCallbackProxy* LoginUser(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& UserId, const class FString& UserToken);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LoginUserCallbackProxy">();
	}
	static class ULoginUserCallbackProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoginUserCallbackProxy>();
	}
};
// static_assert(alignof(ULoginUserCallbackProxy) == 0x000008, "Wrong alignment on ULoginUserCallbackProxy");
// static_assert(sizeof(ULoginUserCallbackProxy) == 0x000098, "Wrong size on ULoginUserCallbackProxy");
// static_assert(offsetof(ULoginUserCallbackProxy, OnSuccess) == 0x000030, "Member 'ULoginUserCallbackProxy::OnSuccess' has a wrong offset!");
// static_assert(offsetof(ULoginUserCallbackProxy, OnFailure) == 0x000040, "Member 'ULoginUserCallbackProxy::OnFailure' has a wrong offset!");

// Class AdvancedSessions.LogoutUserCallbackProxy
// 0x0048 (0x0078 - 0x0030)
class ULogoutUserCallbackProxy final : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_             OnSuccess;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnFailure;                                         // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_10D0[0x28];                                    // 0x0050(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class ULogoutUserCallbackProxy* LogoutUser(class UObject* WorldContextObject, class APlayerController* PlayerController);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LogoutUserCallbackProxy">();
	}
	static class ULogoutUserCallbackProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULogoutUserCallbackProxy>();
	}
};
// static_assert(alignof(ULogoutUserCallbackProxy) == 0x000008, "Wrong alignment on ULogoutUserCallbackProxy");
// static_assert(sizeof(ULogoutUserCallbackProxy) == 0x000078, "Wrong size on ULogoutUserCallbackProxy");
// static_assert(offsetof(ULogoutUserCallbackProxy, OnSuccess) == 0x000030, "Member 'ULogoutUserCallbackProxy::OnSuccess' has a wrong offset!");
// static_assert(offsetof(ULogoutUserCallbackProxy, OnFailure) == 0x000040, "Member 'ULogoutUserCallbackProxy::OnFailure' has a wrong offset!");

// Class AdvancedSessions.SendFriendInviteCallbackProxy
// 0x0060 (0x0090 - 0x0030)
class USendFriendInviteCallbackProxy final : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_             OnSuccess;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnFailure;                                         // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_10D1[0x40];                                    // 0x0050(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class USendFriendInviteCallbackProxy* SendFriendInvite(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBPUniqueNetId& UniqueNetIDInvited);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SendFriendInviteCallbackProxy">();
	}
	static class USendFriendInviteCallbackProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<USendFriendInviteCallbackProxy>();
	}
};
// static_assert(alignof(USendFriendInviteCallbackProxy) == 0x000008, "Wrong alignment on USendFriendInviteCallbackProxy");
// static_assert(sizeof(USendFriendInviteCallbackProxy) == 0x000090, "Wrong size on USendFriendInviteCallbackProxy");
// static_assert(offsetof(USendFriendInviteCallbackProxy, OnSuccess) == 0x000030, "Member 'USendFriendInviteCallbackProxy::OnSuccess' has a wrong offset!");
// static_assert(offsetof(USendFriendInviteCallbackProxy, OnFailure) == 0x000040, "Member 'USendFriendInviteCallbackProxy::OnFailure' has a wrong offset!");

// Class AdvancedSessions.UpdateSessionCallbackProxyAdvanced
// 0x0068 (0x0098 - 0x0030)
class UUpdateSessionCallbackProxyAdvanced final : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_             OnSuccess;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnFailure;                                         // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_10D2[0x48];                                    // 0x0050(0x0048)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UUpdateSessionCallbackProxyAdvanced* UpdateSession(class UObject* WorldContextObject, const TArray<struct FSessionPropertyKeyPair>& ExtraSettings, int32 PublicConnections, int32 PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bAllowJoinInProgress, bool bRefreshOnlineData, bool bIsDedicatedServer);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UpdateSessionCallbackProxyAdvanced">();
	}
	static class UUpdateSessionCallbackProxyAdvanced* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUpdateSessionCallbackProxyAdvanced>();
	}
};
// static_assert(alignof(UUpdateSessionCallbackProxyAdvanced) == 0x000008, "Wrong alignment on UUpdateSessionCallbackProxyAdvanced");
// static_assert(sizeof(UUpdateSessionCallbackProxyAdvanced) == 0x000098, "Wrong size on UUpdateSessionCallbackProxyAdvanced");
// static_assert(offsetof(UUpdateSessionCallbackProxyAdvanced, OnSuccess) == 0x000030, "Member 'UUpdateSessionCallbackProxyAdvanced::OnSuccess' has a wrong offset!");
// static_assert(offsetof(UUpdateSessionCallbackProxyAdvanced, OnFailure) == 0x000040, "Member 'UUpdateSessionCallbackProxyAdvanced::OnFailure' has a wrong offset!");

}
