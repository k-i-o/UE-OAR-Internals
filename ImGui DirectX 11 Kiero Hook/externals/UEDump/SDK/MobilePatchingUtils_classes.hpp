#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MobilePatchingUtils

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class MobilePatchingUtils.MobileInstalledContent
// 0x0020 (0x0048 - 0x0028)
class UMobileInstalledContent : public UObject
{
public:
	uint8                                         Pad_17D1[0x20];                                    // 0x0028(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	float GetDiskFreeSpace();
	float GetInstalledContentSize();
	bool Mount(int32 PakOrder, const class FString& MountPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MobileInstalledContent">();
	}
	static class UMobileInstalledContent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMobileInstalledContent>();
	}
};
static_assert(alignof(UMobileInstalledContent) == 0x000008, "Wrong alignment on UMobileInstalledContent");
static_assert(sizeof(UMobileInstalledContent) == 0x000048, "Wrong size on UMobileInstalledContent");

// Class MobilePatchingUtils.MobilePendingContent
// 0x0040 (0x0088 - 0x0048)
class UMobilePendingContent final : public UMobileInstalledContent
{
public:
	uint8                                         Pad_17D4[0x40];                                    // 0x0048(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	float GetDownloadSize();
	float GetDownloadSpeed();
	class FText GetDownloadStatusText();
	float GetInstallProgress();
	float GetRequiredDiskSpace();
	float GetTotalDownloadedSize();
	void StartInstall(TDelegate<void()> OnSucceeded, TDelegate<void(class FText ErrorText, int32 ErrorCode)> OnFailed);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MobilePendingContent">();
	}
	static class UMobilePendingContent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMobilePendingContent>();
	}
};
static_assert(alignof(UMobilePendingContent) == 0x000008, "Wrong alignment on UMobilePendingContent");
static_assert(sizeof(UMobilePendingContent) == 0x000088, "Wrong size on UMobilePendingContent");

// Class MobilePatchingUtils.MobilePatchingLibrary
// 0x0000 (0x0028 - 0x0028)
class UMobilePatchingLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class FString GetActiveDeviceProfileName();
	static class UMobileInstalledContent* GetInstalledContent(const class FString& InstallDirectory);
	static TArray<class FString> GetSupportedPlatformNames();
	static bool HasActiveWiFiConnection();
	static void RequestContent(const class FString& RemoteManifestURL, const class FString& CloudURL, const class FString& InstallDirectory, TDelegate<void(class UMobilePendingContent* MobilePendingContent)> OnSucceeded, TDelegate<void(class FText ErrorText, int32 ErrorCode)> OnFailed);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MobilePatchingLibrary">();
	}
	static class UMobilePatchingLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMobilePatchingLibrary>();
	}
};
static_assert(alignof(UMobilePatchingLibrary) == 0x000008, "Wrong alignment on UMobilePatchingLibrary");
static_assert(sizeof(UMobilePatchingLibrary) == 0x000028, "Wrong size on UMobilePatchingLibrary");

}

