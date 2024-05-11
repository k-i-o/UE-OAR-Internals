#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AdvancedSteamSessions

#include "Basic.hpp"

#include "AdvancedSessions_structs.hpp"


namespace SDK
{

// Enum AdvancedSteamSessions.FBPWorkshopFileType
// NumValues: 0x0011
enum class EFBPWorkshopFileType : uint8
{
	K_EWorkshopFileTypeCommunity             = 0,
	K_EWorkshopFileTypeMicrotransaction      = 1,
	K_EWorkshopFileTypeCollection            = 2,
	K_EWorkshopFileTypeArt                   = 3,
	K_EWorkshopFileTypeVideo                 = 4,
	K_EWorkshopFileTypeScreenshot            = 5,
	K_EWorkshopFileTypeGame                  = 6,
	K_EWorkshopFileTypeSoftware              = 7,
	K_EWorkshopFileTypeConcept               = 8,
	K_EWorkshopFileTypeWebGuide              = 9,
	K_EWorkshopFileTypeIntegratedGuide       = 10,
	K_EWorkshopFileTypeMerch                 = 11,
	K_EWorkshopFileTypeControllerBinding     = 12,
	K_EWorkshopFileTypeSteamworksAccessInvite = 13,
	K_EWorkshopFileTypeSteamVideo            = 14,
	K_EWorkshopFileTypeMax                   = 15,
	K_MAX                                    = 16,
};

// Enum AdvancedSteamSessions.FBPSteamResult
// NumValues: 0x005C
enum class EFBPSteamResult : uint8
{
	K_EResultInvalid                         = 0,
	K_EResultOK                              = 1,
	K_EResultFail                            = 2,
	K_EResultNoConnection                    = 3,
	K_EResultInvalidPassword                 = 5,
	K_EResultLoggedInElsewhere               = 6,
	K_EResultInvalidProtocolVer              = 7,
	K_EResultInvalidParam                    = 8,
	K_EResultFileNotFound                    = 9,
	K_EResultBusy                            = 10,
	K_EResultInvalidState                    = 11,
	K_EResultInvalidName                     = 12,
	K_EResultInvalidEmail                    = 13,
	K_EResultDuplicateName                   = 14,
	K_EResultAccessDenied                    = 15,
	K_EResultTimeout                         = 16,
	K_EResultBanned                          = 17,
	K_EResultAccountNotFound                 = 18,
	K_EResultInvalidSteamID                  = 19,
	K_EResultServiceUnavailable              = 20,
	K_EResultNotLoggedOn                     = 21,
	K_EResultPending                         = 22,
	K_EResultEncryptionFailure               = 23,
	K_EResultInsufficientPrivilege           = 24,
	K_EResultLimitExceeded                   = 25,
	K_EResultRevoked                         = 26,
	K_EResultExpired                         = 27,
	K_EResultAlreadyRedeemed                 = 28,
	K_EResultDuplicateRequest                = 29,
	K_EResultAlreadyOwned                    = 30,
	K_EResultIPNotFound                      = 31,
	K_EResultPersistFailed                   = 32,
	K_EResultLockingFailed                   = 33,
	K_EResultLogonSessionReplaced            = 34,
	K_EResultConnectFailed                   = 35,
	K_EResultHandshakeFailed                 = 36,
	K_EResultIOFailure                       = 37,
	K_EResultRemoteDisconnect                = 38,
	K_EResultShoppingCartNotFound            = 39,
	K_EResultBlocked                         = 40,
	K_EResultIgnored                         = 41,
	K_EResultNoMatch                         = 42,
	K_EResultAccountDisabled                 = 43,
	K_EResultServiceReadOnly                 = 44,
	K_EResultAccountNotFeatured              = 45,
	K_EResultAdministratorOK                 = 46,
	K_EResultContentVersion                  = 47,
	K_EResultTryAnotherCM                    = 48,
	K_EResultPasswordRequiredToKickSession   = 49,
	K_EResultAlreadyLoggedInElsewhere        = 50,
	K_EResultSuspended                       = 51,
	K_EResultCancelled                       = 52,
	K_EResultDataCorruption                  = 53,
	K_EResultDiskFull                        = 54,
	K_EResultRemoteCallFailed                = 55,
	K_EResultPasswordUnset                   = 56,
	K_EResultExternalAccountUnlinked         = 57,
	K_EResultPSNTicketInvalid                = 58,
	K_EResultExternalAccountAlreadyLinked    = 59,
	K_EResultRemoteFileConflict              = 60,
	K_EResultIllegalPassword                 = 61,
	K_EResultSameAsPreviousValue             = 62,
	K_EResultAccountLogonDenied              = 63,
	K_EResultCannotUseOldPassword            = 64,
	K_EResultInvalidLoginAuthCode            = 65,
	K_EResultAccountLogonDeniedNoMail        = 66,
	K_EResultHardwareNotCapableOfIPT         = 67,
	K_EResultIPTInitError                    = 68,
	K_EResultParentalControlRestricted       = 69,
	K_EResultFacebookQueryError              = 70,
	K_EResultExpiredLoginAuthCode            = 71,
	K_EResultIPLoginRestrictionFailed        = 72,
	K_EResultAccountLockedDown               = 73,
	K_EResultAccountLogonDeniedVerifiedEmailRequired = 74,
	K_EResultNoMatchingURL                   = 75,
	K_EResultBadResponse                     = 76,
	K_EResultRequirePasswordReEntry          = 77,
	K_EResultValueOutOfRange                 = 78,
	K_EResultUnexpectedError                 = 79,
	K_EResultDisabled                        = 80,
	K_EResultInvalidCEGSubmission            = 81,
	K_EResultRestrictedDevice                = 82,
	K_EResultRegionLocked                    = 83,
	K_EResultRateLimitExceeded               = 84,
	K_EResultAccountLoginDeniedNeedTwoFactor = 85,
	K_EResultItemDeleted                     = 86,
	K_EResultAccountLoginDeniedThrottle      = 87,
	K_EResultTwoFactorCodeMismatch           = 88,
	K_EResultTwoFactorActivationCodeMismatch = 89,
	K_EResultAccountAssociatedToMultiplePartners = 90,
	K_EResultNotModified                     = 91,
	FBPSteamResult_MAX                       = 92,
};

// Enum AdvancedSteamSessions.EBPTextFilteringContext
// NumValues: 0x0005
enum class EBPTextFilteringContext : uint8
{
	FContext_Unknown                         = 0,
	FContext_GameContent                     = 1,
	FContext_Chat                            = 2,
	FContext_Name                            = 3,
	FContext_MAX                             = 4,
};

// Enum AdvancedSteamSessions.ESteamUserOverlayType
// NumValues: 0x000A
enum class ESteamUserOverlayType : uint8
{
	Steamid                                  = 0,
	Chat                                     = 1,
	Jointrade                                = 2,
	Stats                                    = 3,
	Achievements                             = 4,
	Friendadd                                = 5,
	Friendremove                             = 6,
	Friendrequestaccept                      = 7,
	Friendrequestignore                      = 8,
	ESteamUserOverlayType_MAX                = 9,
};

// Enum AdvancedSteamSessions.SteamAvatarSize
// NumValues: 0x0005
enum class ESteamAvatarSize : uint8
{
	SteamAvatar_INVALID                      = 0,
	SteamAvatar_Small                        = 1,
	SteamAvatar_Medium                       = 2,
	SteamAvatar_Large                        = 3,
	SteamAvatar_MAX                          = 4,
};

// ScriptStruct AdvancedSteamSessions.BPSteamGroupOfficer
// 0x0028 (0x0028 - 0x0000)
struct FBPSteamGroupOfficer final
{
public:
	struct FBPUniqueNetId                         OfficerUniqueNetID;                                // 0x0000(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                          bIsOwner;                                          // 0x0020(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10DA[0x7];                                     // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FBPSteamGroupOfficer) == 0x000008, "Wrong alignment on FBPSteamGroupOfficer");
static_assert(sizeof(FBPSteamGroupOfficer) == 0x000028, "Wrong size on FBPSteamGroupOfficer");
static_assert(offsetof(FBPSteamGroupOfficer, OfficerUniqueNetID) == 0x000000, "Member 'FBPSteamGroupOfficer::OfficerUniqueNetID' has a wrong offset!");
static_assert(offsetof(FBPSteamGroupOfficer, bIsOwner) == 0x000020, "Member 'FBPSteamGroupOfficer::bIsOwner' has a wrong offset!");

// ScriptStruct AdvancedSteamSessions.BPSteamWorkshopItemDetails
// 0x0060 (0x0060 - 0x0000)
struct FBPSteamWorkshopItemDetails final
{
public:
	EFBPSteamResult                               ResultOfRequest;                                   // 0x0000(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFBPWorkshopFileType                          FileType;                                          // 0x0001(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10DB[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CreatorAppID;                                      // 0x0004(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ConsumerAppID;                                     // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10DC[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Title;                                             // 0x0010(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Description;                                       // 0x0020(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ItemUrl;                                           // 0x0030(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         VotesUp;                                           // 0x0040(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         VotesDown;                                         // 0x0044(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CalculatedScore;                                   // 0x0048(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bBanned;                                           // 0x004C(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAcceptedForUse;                                   // 0x004D(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bTagsTruncated;                                    // 0x004E(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10DD[0x1];                                     // 0x004F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CreatorSteamID;                                    // 0x0050(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FBPSteamWorkshopItemDetails) == 0x000008, "Wrong alignment on FBPSteamWorkshopItemDetails");
static_assert(sizeof(FBPSteamWorkshopItemDetails) == 0x000060, "Wrong size on FBPSteamWorkshopItemDetails");
static_assert(offsetof(FBPSteamWorkshopItemDetails, ResultOfRequest) == 0x000000, "Member 'FBPSteamWorkshopItemDetails::ResultOfRequest' has a wrong offset!");
static_assert(offsetof(FBPSteamWorkshopItemDetails, FileType) == 0x000001, "Member 'FBPSteamWorkshopItemDetails::FileType' has a wrong offset!");
static_assert(offsetof(FBPSteamWorkshopItemDetails, CreatorAppID) == 0x000004, "Member 'FBPSteamWorkshopItemDetails::CreatorAppID' has a wrong offset!");
static_assert(offsetof(FBPSteamWorkshopItemDetails, ConsumerAppID) == 0x000008, "Member 'FBPSteamWorkshopItemDetails::ConsumerAppID' has a wrong offset!");
static_assert(offsetof(FBPSteamWorkshopItemDetails, Title) == 0x000010, "Member 'FBPSteamWorkshopItemDetails::Title' has a wrong offset!");
static_assert(offsetof(FBPSteamWorkshopItemDetails, Description) == 0x000020, "Member 'FBPSteamWorkshopItemDetails::Description' has a wrong offset!");
static_assert(offsetof(FBPSteamWorkshopItemDetails, ItemUrl) == 0x000030, "Member 'FBPSteamWorkshopItemDetails::ItemUrl' has a wrong offset!");
static_assert(offsetof(FBPSteamWorkshopItemDetails, VotesUp) == 0x000040, "Member 'FBPSteamWorkshopItemDetails::VotesUp' has a wrong offset!");
static_assert(offsetof(FBPSteamWorkshopItemDetails, VotesDown) == 0x000044, "Member 'FBPSteamWorkshopItemDetails::VotesDown' has a wrong offset!");
static_assert(offsetof(FBPSteamWorkshopItemDetails, CalculatedScore) == 0x000048, "Member 'FBPSteamWorkshopItemDetails::CalculatedScore' has a wrong offset!");
static_assert(offsetof(FBPSteamWorkshopItemDetails, bBanned) == 0x00004C, "Member 'FBPSteamWorkshopItemDetails::bBanned' has a wrong offset!");
static_assert(offsetof(FBPSteamWorkshopItemDetails, bAcceptedForUse) == 0x00004D, "Member 'FBPSteamWorkshopItemDetails::bAcceptedForUse' has a wrong offset!");
static_assert(offsetof(FBPSteamWorkshopItemDetails, bTagsTruncated) == 0x00004E, "Member 'FBPSteamWorkshopItemDetails::bTagsTruncated' has a wrong offset!");
static_assert(offsetof(FBPSteamWorkshopItemDetails, CreatorSteamID) == 0x000050, "Member 'FBPSteamWorkshopItemDetails::CreatorSteamID' has a wrong offset!");

// ScriptStruct AdvancedSteamSessions.BPSteamGroupInfo
// 0x0050 (0x0050 - 0x0000)
struct FBPSteamGroupInfo final
{
public:
	struct FBPUniqueNetId                         GroupID;                                           // 0x0000(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                 GroupName;                                         // 0x0020(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 GroupTag;                                          // 0x0030(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumOnline;                                         // 0x0040(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumInGame;                                         // 0x0044(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumChatting;                                       // 0x0048(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10DE[0x4];                                     // 0x004C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FBPSteamGroupInfo) == 0x000008, "Wrong alignment on FBPSteamGroupInfo");
static_assert(sizeof(FBPSteamGroupInfo) == 0x000050, "Wrong size on FBPSteamGroupInfo");
static_assert(offsetof(FBPSteamGroupInfo, GroupID) == 0x000000, "Member 'FBPSteamGroupInfo::GroupID' has a wrong offset!");
static_assert(offsetof(FBPSteamGroupInfo, GroupName) == 0x000020, "Member 'FBPSteamGroupInfo::GroupName' has a wrong offset!");
static_assert(offsetof(FBPSteamGroupInfo, GroupTag) == 0x000030, "Member 'FBPSteamGroupInfo::GroupTag' has a wrong offset!");
static_assert(offsetof(FBPSteamGroupInfo, NumOnline) == 0x000040, "Member 'FBPSteamGroupInfo::NumOnline' has a wrong offset!");
static_assert(offsetof(FBPSteamGroupInfo, NumInGame) == 0x000044, "Member 'FBPSteamGroupInfo::NumInGame' has a wrong offset!");
static_assert(offsetof(FBPSteamGroupInfo, NumChatting) == 0x000048, "Member 'FBPSteamGroupInfo::NumChatting' has a wrong offset!");

// ScriptStruct AdvancedSteamSessions.BPSteamWorkshopID
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) FBPSteamWorkshopID final
{
public:
	uint8                                         Pad_10DF[0x8];                                     // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FBPSteamWorkshopID) == 0x000008, "Wrong alignment on FBPSteamWorkshopID");
static_assert(sizeof(FBPSteamWorkshopID) == 0x000008, "Wrong size on FBPSteamWorkshopID");

}

