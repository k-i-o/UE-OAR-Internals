#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SessionMessages

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
// 0x0001 (0x0001 - 0x0000)
struct FSessionServiceLogUnsubscribe final
{
public:
	uint8                                         Pad_1CC4[0x1];                                     // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSessionServiceLogUnsubscribe) == 0x000001, "Wrong alignment on FSessionServiceLogUnsubscribe");
static_assert(sizeof(FSessionServiceLogUnsubscribe) == 0x000001, "Wrong size on FSessionServiceLogUnsubscribe");

// ScriptStruct SessionMessages.SessionServiceLogSubscribe
// 0x0001 (0x0001 - 0x0000)
struct FSessionServiceLogSubscribe final
{
public:
	uint8                                         Pad_1CC5[0x1];                                     // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSessionServiceLogSubscribe) == 0x000001, "Wrong alignment on FSessionServiceLogSubscribe");
static_assert(sizeof(FSessionServiceLogSubscribe) == 0x000001, "Wrong size on FSessionServiceLogSubscribe");

// ScriptStruct SessionMessages.SessionServiceLog
// 0x0038 (0x0038 - 0x0000)
struct FSessionServiceLog final
{
public:
	class FName                                   Category;                                          // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Data;                                              // 0x0008(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  InstanceID;                                        // 0x0018(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        TimeSeconds;                                       // 0x0028(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Verbosity;                                         // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CC6[0x7];                                     // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSessionServiceLog) == 0x000008, "Wrong alignment on FSessionServiceLog");
static_assert(sizeof(FSessionServiceLog) == 0x000038, "Wrong size on FSessionServiceLog");
static_assert(offsetof(FSessionServiceLog, Category) == 0x000000, "Member 'FSessionServiceLog::Category' has a wrong offset!");
static_assert(offsetof(FSessionServiceLog, Data) == 0x000008, "Member 'FSessionServiceLog::Data' has a wrong offset!");
static_assert(offsetof(FSessionServiceLog, InstanceID) == 0x000018, "Member 'FSessionServiceLog::InstanceID' has a wrong offset!");
static_assert(offsetof(FSessionServiceLog, TimeSeconds) == 0x000028, "Member 'FSessionServiceLog::TimeSeconds' has a wrong offset!");
static_assert(offsetof(FSessionServiceLog, Verbosity) == 0x000030, "Member 'FSessionServiceLog::Verbosity' has a wrong offset!");

// ScriptStruct SessionMessages.SessionServicePong
// 0x0090 (0x0090 - 0x0000)
struct FSessionServicePong final
{
public:
	bool                                          Authorized;                                        // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CC7[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 BuildDate;                                         // 0x0008(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DeviceName;                                        // 0x0018(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  InstanceID;                                        // 0x0028(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 InstanceName;                                      // 0x0038(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PlatformName;                                      // 0x0048(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  SessionID;                                         // 0x0058(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SessionName;                                       // 0x0068(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SessionOwner;                                      // 0x0078(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Standalone;                                        // 0x0088(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CC8[0x7];                                     // 0x0089(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSessionServicePong) == 0x000008, "Wrong alignment on FSessionServicePong");
static_assert(sizeof(FSessionServicePong) == 0x000090, "Wrong size on FSessionServicePong");
static_assert(offsetof(FSessionServicePong, Authorized) == 0x000000, "Member 'FSessionServicePong::Authorized' has a wrong offset!");
static_assert(offsetof(FSessionServicePong, BuildDate) == 0x000008, "Member 'FSessionServicePong::BuildDate' has a wrong offset!");
static_assert(offsetof(FSessionServicePong, DeviceName) == 0x000018, "Member 'FSessionServicePong::DeviceName' has a wrong offset!");
static_assert(offsetof(FSessionServicePong, InstanceID) == 0x000028, "Member 'FSessionServicePong::InstanceID' has a wrong offset!");
static_assert(offsetof(FSessionServicePong, InstanceName) == 0x000038, "Member 'FSessionServicePong::InstanceName' has a wrong offset!");
static_assert(offsetof(FSessionServicePong, PlatformName) == 0x000048, "Member 'FSessionServicePong::PlatformName' has a wrong offset!");
static_assert(offsetof(FSessionServicePong, SessionID) == 0x000058, "Member 'FSessionServicePong::SessionID' has a wrong offset!");
static_assert(offsetof(FSessionServicePong, SessionName) == 0x000068, "Member 'FSessionServicePong::SessionName' has a wrong offset!");
static_assert(offsetof(FSessionServicePong, SessionOwner) == 0x000078, "Member 'FSessionServicePong::SessionOwner' has a wrong offset!");
static_assert(offsetof(FSessionServicePong, Standalone) == 0x000088, "Member 'FSessionServicePong::Standalone' has a wrong offset!");

// ScriptStruct SessionMessages.SessionServicePing
// 0x0010 (0x0010 - 0x0000)
struct FSessionServicePing final
{
public:
	class FString                                 Username;                                          // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSessionServicePing) == 0x000008, "Wrong alignment on FSessionServicePing");
static_assert(sizeof(FSessionServicePing) == 0x000010, "Wrong size on FSessionServicePing");
static_assert(offsetof(FSessionServicePing, Username) == 0x000000, "Member 'FSessionServicePing::Username' has a wrong offset!");

}

