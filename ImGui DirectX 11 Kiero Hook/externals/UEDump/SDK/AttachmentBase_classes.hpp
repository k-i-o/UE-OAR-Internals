#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AttachmentBase

#include "Basic.hpp"

#include "ShopItemCategory_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AttachmentBase.AttachmentBase_C
// 0x0030 (0x0250 - 0x0220)
class AAttachmentBase_C : public AActor
{
public:
	class UStaticMeshComponent*                   AttachmentMesh;                                    // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	EShopItemCategory                             Category;                                          // 0x0230(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22F2[0x3];                                     // 0x0231(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ZoomFOVIn_;                                        // 0x0234(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RecoilChange_;                                     // 0x0238(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AccuracyChange_;                                   // 0x023C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BulletsChangeAmount;                               // 0x0240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReloadTimeChange_;                                 // 0x0244(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DamageChange_;                                     // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AttachmentBase_C">();
	}
	static class AAttachmentBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAttachmentBase_C>();
	}
};
static_assert(alignof(AAttachmentBase_C) == 0x000008, "Wrong alignment on AAttachmentBase_C");
static_assert(sizeof(AAttachmentBase_C) == 0x000250, "Wrong size on AAttachmentBase_C");
static_assert(offsetof(AAttachmentBase_C, AttachmentMesh) == 0x000220, "Member 'AAttachmentBase_C::AttachmentMesh' has a wrong offset!");
static_assert(offsetof(AAttachmentBase_C, DefaultSceneRoot) == 0x000228, "Member 'AAttachmentBase_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AAttachmentBase_C, Category) == 0x000230, "Member 'AAttachmentBase_C::Category' has a wrong offset!");
static_assert(offsetof(AAttachmentBase_C, ZoomFOVIn_) == 0x000234, "Member 'AAttachmentBase_C::ZoomFOVIn_' has a wrong offset!");
static_assert(offsetof(AAttachmentBase_C, RecoilChange_) == 0x000238, "Member 'AAttachmentBase_C::RecoilChange_' has a wrong offset!");
static_assert(offsetof(AAttachmentBase_C, AccuracyChange_) == 0x00023C, "Member 'AAttachmentBase_C::AccuracyChange_' has a wrong offset!");
static_assert(offsetof(AAttachmentBase_C, BulletsChangeAmount) == 0x000240, "Member 'AAttachmentBase_C::BulletsChangeAmount' has a wrong offset!");
static_assert(offsetof(AAttachmentBase_C, ReloadTimeChange_) == 0x000244, "Member 'AAttachmentBase_C::ReloadTimeChange_' has a wrong offset!");
static_assert(offsetof(AAttachmentBase_C, DamageChange_) == 0x000248, "Member 'AAttachmentBase_C::DamageChange_' has a wrong offset!");

}
