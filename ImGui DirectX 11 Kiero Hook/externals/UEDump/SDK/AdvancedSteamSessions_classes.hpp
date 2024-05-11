#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AdvancedSteamSessions

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "AdvancedSteamSessions_structs.hpp"
#include "AdvancedSessions_structs.hpp"


namespace SDK
{

// Class AdvancedSteamSessions.AdvancedSteamFriendsLibrary
// 0x0000 (0x0028 - 0x0028)
class UAdvancedSteamFriendsLibrary final : public UBlueprintFunctionLibrary
{
public:
	static struct FBPUniqueNetId CreateSteamIDFromString(const class FString& SteamID64);
	static bool FilterText(const class FString& TextToFilter, EBPTextFilteringContext Context, const struct FBPUniqueNetId& TextSourceID, class FString* FilteredText);
	static int32 GetFriendSteamLevel(const struct FBPUniqueNetId& UniqueNetId);
	static struct FBPUniqueNetId GetLocalSteamIDFromSteam();
	static class UTexture2D* GetSteamFriendAvatar(const struct FBPUniqueNetId& UniqueNetId, EBlueprintAsyncResultSwitch* Result, ESteamAvatarSize AvatarSize);
	static void GetSteamFriendGamePlayed(const struct FBPUniqueNetId& UniqueNetId, EBlueprintResultSwitch* Result, int32* AppID);
	static void GetSteamGroups(TArray<struct FBPSteamGroupInfo>* SteamGroups);
	static class FString GetSteamPersonaName(const struct FBPUniqueNetId& UniqueNetId);
	static bool InitTextFiltering();
	static bool IsOverlayEnabled();
	static bool IsSteamInBigPictureMode();
	static bool OpenSteamUserOverlay(const struct FBPUniqueNetId& UniqueNetId, ESteamUserOverlayType DialogType);
	static bool RequestSteamFriendInfo(const struct FBPUniqueNetId& UniqueNetId, bool bRequireNameOnly);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AdvancedSteamFriendsLibrary">();
	}
	static class UAdvancedSteamFriendsLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAdvancedSteamFriendsLibrary>();
	}
};
static_assert(alignof(UAdvancedSteamFriendsLibrary) == 0x000008, "Wrong alignment on UAdvancedSteamFriendsLibrary");
static_assert(sizeof(UAdvancedSteamFriendsLibrary) == 0x000028, "Wrong size on UAdvancedSteamFriendsLibrary");

// Class AdvancedSteamSessions.AdvancedSteamWorkshopLibrary
// 0x0000 (0x0028 - 0x0028)
class UAdvancedSteamWorkshopLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void GetNumSubscribedWorkshopItems(int32* NumberOfItems);
	static TArray<struct FBPSteamWorkshopID> GetSubscribedWorkshopItems(int32* NumberOfItems);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AdvancedSteamWorkshopLibrary">();
	}
	static class UAdvancedSteamWorkshopLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAdvancedSteamWorkshopLibrary>();
	}
};
static_assert(alignof(UAdvancedSteamWorkshopLibrary) == 0x000008, "Wrong alignment on UAdvancedSteamWorkshopLibrary");
static_assert(sizeof(UAdvancedSteamWorkshopLibrary) == 0x000028, "Wrong size on UAdvancedSteamWorkshopLibrary");

// Class AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy
// 0x0070 (0x00A0 - 0x0030)
class USteamRequestGroupOfficersCallbackProxy final : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_             OnSuccess;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnFailure;                                         // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_10F1[0x50];                                    // 0x0050(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class USteamRequestGroupOfficersCallbackProxy* GetSteamGroupOfficerList(class UObject* WorldContextObject, const struct FBPUniqueNetId& GroupUniqueNetID);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SteamRequestGroupOfficersCallbackProxy">();
	}
	static class USteamRequestGroupOfficersCallbackProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<USteamRequestGroupOfficersCallbackProxy>();
	}
};
static_assert(alignof(USteamRequestGroupOfficersCallbackProxy) == 0x000008, "Wrong alignment on USteamRequestGroupOfficersCallbackProxy");
static_assert(sizeof(USteamRequestGroupOfficersCallbackProxy) == 0x0000A0, "Wrong size on USteamRequestGroupOfficersCallbackProxy");
static_assert(offsetof(USteamRequestGroupOfficersCallbackProxy, OnSuccess) == 0x000030, "Member 'USteamRequestGroupOfficersCallbackProxy::OnSuccess' has a wrong offset!");
static_assert(offsetof(USteamRequestGroupOfficersCallbackProxy, OnFailure) == 0x000040, "Member 'USteamRequestGroupOfficersCallbackProxy::OnFailure' has a wrong offset!");

// Class AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy
// 0x0058 (0x0088 - 0x0030)
class USteamWSRequestUGCDetailsCallbackProxy final : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_             OnSuccess;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnFailure;                                         // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_10F2[0x38];                                    // 0x0050(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class USteamWSRequestUGCDetailsCallbackProxy* GetWorkshopItemDetails(class UObject* WorldContextObject, const struct FBPSteamWorkshopID& WorkShopID);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SteamWSRequestUGCDetailsCallbackProxy">();
	}
	static class USteamWSRequestUGCDetailsCallbackProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<USteamWSRequestUGCDetailsCallbackProxy>();
	}
};
static_assert(alignof(USteamWSRequestUGCDetailsCallbackProxy) == 0x000008, "Wrong alignment on USteamWSRequestUGCDetailsCallbackProxy");
static_assert(sizeof(USteamWSRequestUGCDetailsCallbackProxy) == 0x000088, "Wrong size on USteamWSRequestUGCDetailsCallbackProxy");
static_assert(offsetof(USteamWSRequestUGCDetailsCallbackProxy, OnSuccess) == 0x000030, "Member 'USteamWSRequestUGCDetailsCallbackProxy::OnSuccess' has a wrong offset!");
static_assert(offsetof(USteamWSRequestUGCDetailsCallbackProxy, OnFailure) == 0x000040, "Member 'USteamWSRequestUGCDetailsCallbackProxy::OnFailure' has a wrong offset!");

}

