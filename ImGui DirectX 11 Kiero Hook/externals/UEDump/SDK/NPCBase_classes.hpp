#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPCBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NPCBase.NPCBase_C
// 0x0080 (0x0540 - 0x04C0)
class ANPCBase_C : public ACharacter
{
public:
	uint8                                         Pad_2062[0x8];                                     // 0x04B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        Arrow1;                                            // 0x04C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDamageComponent_C*                     DamageComponent;                                   // 0x04D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicalAnimationComponent*            PhysicalAnimation;                                 // 0x04D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Health;                                            // 0x04E0(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BloodHits;                                         // 0x04E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Dead_;                                             // 0x04E8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2063[0x7];                                     // 0x04E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             Death;                                             // 0x04F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             NPCDamage;                                         // 0x0500(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          CanBePushed_;                                      // 0x0510(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          PickedUp_;                                         // 0x0511(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2064[0x6];                                     // 0x0512(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             CallGesture;                                       // 0x0518(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             CallStopGesture;                                   // 0x0528(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          PoliceAlerted_;                                    // 0x0538(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TiedUp_;                                           // 0x0539(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void Death__DelegateSignature(class AActor* Player);
	void NPCDamage__DelegateSignature();
	void CallGesture__DelegateSignature(class UAnimSequenceBase* Anim, bool Loops_);
	void CallStopGesture__DelegateSignature();
	void ExecuteUbergraph_NPCBase(int32 EntryPoint);
	void PoliceAlerted();
	void RagdollPickedUp(bool Picked_up_);
	void StopAnimGesture();
	void PlayAnimGesture(class UAnimSequenceBase* Anim, bool Loops_);
	void ReceiveTick(float DeltaSeconds);
	void BloodSplatMulti(const struct FVector& HitLocation, const struct FVector& StartLocation, bool Downsplat_);
	void BndEvt__NPCBase_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature(int32 Amount, class FName Bone, const struct FVector& HitLocation, const struct FVector& StartLocation, class AActor* Param_Instigator);
	void Die(class AActor* Player);
	void TakeDamage(int32 Damage, class AActor* Player);
	void ReceiveBeginPlay();
	void DestroyOldestPoliceBody();
	void SpawnAmmo(const struct FVector& Location, int32 Amount);
	void CantOpenDoor();
	void DamageMultiplier(class FName Bone_name, float* Multiplier);
	void BloodSplat(const struct FVector& HitLoc, const struct FVector& StartLoc, bool Downsplat_);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NPCBase_C">();
	}
	static class ANPCBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANPCBase_C>();
	}
};
static_assert(alignof(ANPCBase_C) == 0x000010, "Wrong alignment on ANPCBase_C");
static_assert(sizeof(ANPCBase_C) == 0x000540, "Wrong size on ANPCBase_C");
static_assert(offsetof(ANPCBase_C, UberGraphFrame) == 0x0004C0, "Member 'ANPCBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ANPCBase_C, Arrow1) == 0x0004C8, "Member 'ANPCBase_C::Arrow1' has a wrong offset!");
static_assert(offsetof(ANPCBase_C, DamageComponent) == 0x0004D0, "Member 'ANPCBase_C::DamageComponent' has a wrong offset!");
static_assert(offsetof(ANPCBase_C, PhysicalAnimation) == 0x0004D8, "Member 'ANPCBase_C::PhysicalAnimation' has a wrong offset!");
static_assert(offsetof(ANPCBase_C, Health) == 0x0004E0, "Member 'ANPCBase_C::Health' has a wrong offset!");
static_assert(offsetof(ANPCBase_C, BloodHits) == 0x0004E4, "Member 'ANPCBase_C::BloodHits' has a wrong offset!");
static_assert(offsetof(ANPCBase_C, Dead_) == 0x0004E8, "Member 'ANPCBase_C::Dead_' has a wrong offset!");
static_assert(offsetof(ANPCBase_C, Death) == 0x0004F0, "Member 'ANPCBase_C::Death' has a wrong offset!");
static_assert(offsetof(ANPCBase_C, NPCDamage) == 0x000500, "Member 'ANPCBase_C::NPCDamage' has a wrong offset!");
static_assert(offsetof(ANPCBase_C, CanBePushed_) == 0x000510, "Member 'ANPCBase_C::CanBePushed_' has a wrong offset!");
static_assert(offsetof(ANPCBase_C, PickedUp_) == 0x000511, "Member 'ANPCBase_C::PickedUp_' has a wrong offset!");
static_assert(offsetof(ANPCBase_C, CallGesture) == 0x000518, "Member 'ANPCBase_C::CallGesture' has a wrong offset!");
static_assert(offsetof(ANPCBase_C, CallStopGesture) == 0x000528, "Member 'ANPCBase_C::CallStopGesture' has a wrong offset!");
static_assert(offsetof(ANPCBase_C, PoliceAlerted_) == 0x000538, "Member 'ANPCBase_C::PoliceAlerted_' has a wrong offset!");
static_assert(offsetof(ANPCBase_C, TiedUp_) == 0x000539, "Member 'ANPCBase_C::TiedUp_' has a wrong offset!");

}
