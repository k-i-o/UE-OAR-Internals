#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Aps_StreetProp_Mailbox

#include "Basic.hpp"

#include "Aps_StreetProp_base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Aps_StreetProp_Mailbox.Aps_StreetProp_Mailbox_C
// 0x0008 (0x0240 - 0x0238)
class AAps_StreetProp_Mailbox_C final : public AAps_StreetProp_base_C
{
public:
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Aps_StreetProp_Mailbox_C">();
	}
	static class AAps_StreetProp_Mailbox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAps_StreetProp_Mailbox_C>();
	}
};
static_assert(alignof(AAps_StreetProp_Mailbox_C) == 0x000008, "Wrong alignment on AAps_StreetProp_Mailbox_C");
static_assert(sizeof(AAps_StreetProp_Mailbox_C) == 0x000240, "Wrong size on AAps_StreetProp_Mailbox_C");
static_assert(offsetof(AAps_StreetProp_Mailbox_C, StaticMesh) == 0x000238, "Member 'AAps_StreetProp_Mailbox_C::StaticMesh' has a wrong offset!");

}

