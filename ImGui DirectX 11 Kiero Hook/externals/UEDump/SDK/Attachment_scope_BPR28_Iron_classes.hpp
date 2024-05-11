#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Attachment_scope_BPR28_Iron

#include "Basic.hpp"

#include "Attachment_scope_base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Attachment_scope_BPR28_Iron.Attachment_scope_BPR28_Iron_C
// 0x0018 (0x0288 - 0x0270)
class AAttachment_scope_BPR28_Iron_C final : public AAttachment_scope_base_C
{
public:
	class UStaticMeshComponent*                   SM_Wep_Mod_A_Ironsight_Rear_02;                    // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Wep_Mod_A_IronSight_Post_02;                    // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Attachment_scope_BPR28_Iron_C">();
	}
	static class AAttachment_scope_BPR28_Iron_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAttachment_scope_BPR28_Iron_C>();
	}
};
static_assert(alignof(AAttachment_scope_BPR28_Iron_C) == 0x000008, "Wrong alignment on AAttachment_scope_BPR28_Iron_C");
static_assert(sizeof(AAttachment_scope_BPR28_Iron_C) == 0x000288, "Wrong size on AAttachment_scope_BPR28_Iron_C");
static_assert(offsetof(AAttachment_scope_BPR28_Iron_C, SM_Wep_Mod_A_Ironsight_Rear_02) == 0x000270, "Member 'AAttachment_scope_BPR28_Iron_C::SM_Wep_Mod_A_Ironsight_Rear_02' has a wrong offset!");
static_assert(offsetof(AAttachment_scope_BPR28_Iron_C, SM_Wep_Mod_A_IronSight_Post_02) == 0x000278, "Member 'AAttachment_scope_BPR28_Iron_C::SM_Wep_Mod_A_IronSight_Post_02' has a wrong offset!");
static_assert(offsetof(AAttachment_scope_BPR28_Iron_C, Arrow) == 0x000280, "Member 'AAttachment_scope_BPR28_Iron_C::Arrow' has a wrong offset!");

}

