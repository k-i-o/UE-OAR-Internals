#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SmoothSyncPlugin

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function SmoothSyncPlugin.SmoothSync.ClientSendsTransformToServer
// 0x0010 (0x0010 - 0x0000)
struct SmoothSync_ClientSendsTransformToServer final
{
public:
	TArray<uint8>                                 Value;                                             // 0x0000(0x0010)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(SmoothSync_ClientSendsTransformToServer) == 0x000008, "Wrong alignment on SmoothSync_ClientSendsTransformToServer");
static_assert(sizeof(SmoothSync_ClientSendsTransformToServer) == 0x000010, "Wrong size on SmoothSync_ClientSendsTransformToServer");
static_assert(offsetof(SmoothSync_ClientSendsTransformToServer, Value) == 0x000000, "Member 'SmoothSync_ClientSendsTransformToServer::Value' has a wrong offset!");

// Function SmoothSyncPlugin.SmoothSync.enableSmoothSync
// 0x0001 (0x0001 - 0x0000)
struct SmoothSync_EnableSmoothSync final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SmoothSync_EnableSmoothSync) == 0x000001, "Wrong alignment on SmoothSync_EnableSmoothSync");
static_assert(sizeof(SmoothSync_EnableSmoothSync) == 0x000001, "Wrong size on SmoothSync_EnableSmoothSync");
static_assert(offsetof(SmoothSync_EnableSmoothSync, Enable) == 0x000000, "Member 'SmoothSync_EnableSmoothSync::Enable' has a wrong offset!");

// Function SmoothSyncPlugin.SmoothSync.ServerSendsTransformToEveryone
// 0x0010 (0x0010 - 0x0000)
struct SmoothSync_ServerSendsTransformToEveryone final
{
public:
	TArray<uint8>                                 Value;                                             // 0x0000(0x0010)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(SmoothSync_ServerSendsTransformToEveryone) == 0x000008, "Wrong alignment on SmoothSync_ServerSendsTransformToEveryone");
static_assert(sizeof(SmoothSync_ServerSendsTransformToEveryone) == 0x000010, "Wrong size on SmoothSync_ServerSendsTransformToEveryone");
static_assert(offsetof(SmoothSync_ServerSendsTransformToEveryone, Value) == 0x000000, "Member 'SmoothSync_ServerSendsTransformToEveryone::Value' has a wrong offset!");

// Function SmoothSyncPlugin.SmoothSync.setSceneComponentToSync
// 0x0008 (0x0008 - 0x0000)
struct SmoothSync_SetSceneComponentToSync final
{
public:
	class USceneComponent*                        TheComponent;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SmoothSync_SetSceneComponentToSync) == 0x000008, "Wrong alignment on SmoothSync_SetSceneComponentToSync");
static_assert(sizeof(SmoothSync_SetSceneComponentToSync) == 0x000008, "Wrong size on SmoothSync_SetSceneComponentToSync");
static_assert(offsetof(SmoothSync_SetSceneComponentToSync, TheComponent) == 0x000000, "Member 'SmoothSync_SetSceneComponentToSync::TheComponent' has a wrong offset!");

// Function SmoothSyncPlugin.SmoothSync.SmoothSyncEnableClientToServer
// 0x0001 (0x0001 - 0x0000)
struct SmoothSync_SmoothSyncEnableClientToServer final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SmoothSync_SmoothSyncEnableClientToServer) == 0x000001, "Wrong alignment on SmoothSync_SmoothSyncEnableClientToServer");
static_assert(sizeof(SmoothSync_SmoothSyncEnableClientToServer) == 0x000001, "Wrong size on SmoothSync_SmoothSyncEnableClientToServer");
static_assert(offsetof(SmoothSync_SmoothSyncEnableClientToServer, Enable) == 0x000000, "Member 'SmoothSync_SmoothSyncEnableClientToServer::Enable' has a wrong offset!");

// Function SmoothSyncPlugin.SmoothSync.SmoothSyncEnableServerToClients
// 0x0001 (0x0001 - 0x0000)
struct SmoothSync_SmoothSyncEnableServerToClients final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SmoothSync_SmoothSyncEnableServerToClients) == 0x000001, "Wrong alignment on SmoothSync_SmoothSyncEnableServerToClients");
static_assert(sizeof(SmoothSync_SmoothSyncEnableServerToClients) == 0x000001, "Wrong size on SmoothSync_SmoothSyncEnableServerToClients");
static_assert(offsetof(SmoothSync_SmoothSyncEnableServerToClients, Enable) == 0x000000, "Member 'SmoothSync_SmoothSyncEnableServerToClients::Enable' has a wrong offset!");

// Function SmoothSyncPlugin.SmoothSync.SmoothSyncTeleportClientToServer
// 0x0028 (0x0028 - 0x0000)
struct SmoothSync_SmoothSyncTeleportClientToServer final
{
public:
	struct FVector                                Position;                                          // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Rotation;                                          // 0x000C(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Scale;                                             // 0x0018(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TempOwnerTime;                                     // 0x0024(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SmoothSync_SmoothSyncTeleportClientToServer) == 0x000004, "Wrong alignment on SmoothSync_SmoothSyncTeleportClientToServer");
static_assert(sizeof(SmoothSync_SmoothSyncTeleportClientToServer) == 0x000028, "Wrong size on SmoothSync_SmoothSyncTeleportClientToServer");
static_assert(offsetof(SmoothSync_SmoothSyncTeleportClientToServer, Position) == 0x000000, "Member 'SmoothSync_SmoothSyncTeleportClientToServer::Position' has a wrong offset!");
static_assert(offsetof(SmoothSync_SmoothSyncTeleportClientToServer, Rotation) == 0x00000C, "Member 'SmoothSync_SmoothSyncTeleportClientToServer::Rotation' has a wrong offset!");
static_assert(offsetof(SmoothSync_SmoothSyncTeleportClientToServer, Scale) == 0x000018, "Member 'SmoothSync_SmoothSyncTeleportClientToServer::Scale' has a wrong offset!");
static_assert(offsetof(SmoothSync_SmoothSyncTeleportClientToServer, TempOwnerTime) == 0x000024, "Member 'SmoothSync_SmoothSyncTeleportClientToServer::TempOwnerTime' has a wrong offset!");

// Function SmoothSyncPlugin.SmoothSync.SmoothSyncTeleportServerToClients
// 0x0028 (0x0028 - 0x0000)
struct SmoothSync_SmoothSyncTeleportServerToClients final
{
public:
	struct FVector                                Position;                                          // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Rotation;                                          // 0x000C(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Scale;                                             // 0x0018(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TempOwnerTime;                                     // 0x0024(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SmoothSync_SmoothSyncTeleportServerToClients) == 0x000004, "Wrong alignment on SmoothSync_SmoothSyncTeleportServerToClients");
static_assert(sizeof(SmoothSync_SmoothSyncTeleportServerToClients) == 0x000028, "Wrong size on SmoothSync_SmoothSyncTeleportServerToClients");
static_assert(offsetof(SmoothSync_SmoothSyncTeleportServerToClients, Position) == 0x000000, "Member 'SmoothSync_SmoothSyncTeleportServerToClients::Position' has a wrong offset!");
static_assert(offsetof(SmoothSync_SmoothSyncTeleportServerToClients, Rotation) == 0x00000C, "Member 'SmoothSync_SmoothSyncTeleportServerToClients::Rotation' has a wrong offset!");
static_assert(offsetof(SmoothSync_SmoothSyncTeleportServerToClients, Scale) == 0x000018, "Member 'SmoothSync_SmoothSyncTeleportServerToClients::Scale' has a wrong offset!");
static_assert(offsetof(SmoothSync_SmoothSyncTeleportServerToClients, TempOwnerTime) == 0x000024, "Member 'SmoothSync_SmoothSyncTeleportServerToClients::TempOwnerTime' has a wrong offset!");

}

