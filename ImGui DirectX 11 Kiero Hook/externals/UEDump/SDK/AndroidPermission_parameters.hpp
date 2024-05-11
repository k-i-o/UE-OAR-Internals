#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AndroidPermission

#include "Basic.hpp"


namespace SDK::Params
{

// Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions
// 0x0018 (0x0018 - 0x0000)
struct AndroidPermissionFunctionLibrary_AcquirePermissions final
{
public:
	TArray<class FString>                         Permissions;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class UAndroidPermissionCallbackProxy*        ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AndroidPermissionFunctionLibrary_AcquirePermissions) == 0x000008, "Wrong alignment on AndroidPermissionFunctionLibrary_AcquirePermissions");
static_assert(sizeof(AndroidPermissionFunctionLibrary_AcquirePermissions) == 0x000018, "Wrong size on AndroidPermissionFunctionLibrary_AcquirePermissions");
static_assert(offsetof(AndroidPermissionFunctionLibrary_AcquirePermissions, Permissions) == 0x000000, "Member 'AndroidPermissionFunctionLibrary_AcquirePermissions::Permissions' has a wrong offset!");
static_assert(offsetof(AndroidPermissionFunctionLibrary_AcquirePermissions, ReturnValue) == 0x000010, "Member 'AndroidPermissionFunctionLibrary_AcquirePermissions::ReturnValue' has a wrong offset!");

// Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission
// 0x0018 (0x0018 - 0x0000)
struct AndroidPermissionFunctionLibrary_CheckPermission final
{
public:
	class FString                                 Permission;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_167F[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AndroidPermissionFunctionLibrary_CheckPermission) == 0x000008, "Wrong alignment on AndroidPermissionFunctionLibrary_CheckPermission");
static_assert(sizeof(AndroidPermissionFunctionLibrary_CheckPermission) == 0x000018, "Wrong size on AndroidPermissionFunctionLibrary_CheckPermission");
static_assert(offsetof(AndroidPermissionFunctionLibrary_CheckPermission, Permission) == 0x000000, "Member 'AndroidPermissionFunctionLibrary_CheckPermission::Permission' has a wrong offset!");
static_assert(offsetof(AndroidPermissionFunctionLibrary_CheckPermission, ReturnValue) == 0x000010, "Member 'AndroidPermissionFunctionLibrary_CheckPermission::ReturnValue' has a wrong offset!");

}

