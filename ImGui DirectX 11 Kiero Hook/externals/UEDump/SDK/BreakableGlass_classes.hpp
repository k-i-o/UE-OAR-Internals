#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BreakableGlass

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BreakableGlass.BreakableGlass_C
// 0x0058 (0x0278 - 0x0220)
class ABreakableGlass_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Glass;                                             // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara;                                           // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAlertComponent_C*                      AlertComponent;                                    // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDamageComponent_C*                     DamageComponent;                                   // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             BreakSound;                                        // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          TwoHitBreak_;                                      // 0x0250(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_1EAA[0x7];                                     // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             GlassDestroyed;                                    // 0x0258(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Alarm_;                                            // 0x0268(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_1EAB[0x3];                                     // 0x0269(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ParticleAmount;                                    // 0x026C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Broken_;                                           // 0x0270(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1EAC[0x3];                                     // 0x0271(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Health;                                            // 0x0274(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void GlassDestroyed__DelegateSignature();
	void ExecuteUbergraph_BreakableGlass(int32 EntryPoint);
	void BreakGlass();
	void ForceDestroyGlass();
	void DamageGlass();
	void BndEvt__BreakableGlass_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature(int32 Amount, class FName Bone, const struct FVector& HitLocation, const struct FVector& StartLocation, class AActor* Param_Instigator);
	void SetShatteredMat();
	void DestroyGlassServer();
	void DestroyGlass();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BreakableGlass_C">();
	}
	static class ABreakableGlass_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABreakableGlass_C>();
	}
};
static_assert(alignof(ABreakableGlass_C) == 0x000008, "Wrong alignment on ABreakableGlass_C");
static_assert(sizeof(ABreakableGlass_C) == 0x000278, "Wrong size on ABreakableGlass_C");
static_assert(offsetof(ABreakableGlass_C, UberGraphFrame) == 0x000220, "Member 'ABreakableGlass_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABreakableGlass_C, Glass) == 0x000228, "Member 'ABreakableGlass_C::Glass' has a wrong offset!");
static_assert(offsetof(ABreakableGlass_C, Niagara) == 0x000230, "Member 'ABreakableGlass_C::Niagara' has a wrong offset!");
static_assert(offsetof(ABreakableGlass_C, AlertComponent) == 0x000238, "Member 'ABreakableGlass_C::AlertComponent' has a wrong offset!");
static_assert(offsetof(ABreakableGlass_C, DamageComponent) == 0x000240, "Member 'ABreakableGlass_C::DamageComponent' has a wrong offset!");
static_assert(offsetof(ABreakableGlass_C, BreakSound) == 0x000248, "Member 'ABreakableGlass_C::BreakSound' has a wrong offset!");
static_assert(offsetof(ABreakableGlass_C, TwoHitBreak_) == 0x000250, "Member 'ABreakableGlass_C::TwoHitBreak_' has a wrong offset!");
static_assert(offsetof(ABreakableGlass_C, GlassDestroyed) == 0x000258, "Member 'ABreakableGlass_C::GlassDestroyed' has a wrong offset!");
static_assert(offsetof(ABreakableGlass_C, Alarm_) == 0x000268, "Member 'ABreakableGlass_C::Alarm_' has a wrong offset!");
static_assert(offsetof(ABreakableGlass_C, ParticleAmount) == 0x00026C, "Member 'ABreakableGlass_C::ParticleAmount' has a wrong offset!");
static_assert(offsetof(ABreakableGlass_C, Broken_) == 0x000270, "Member 'ABreakableGlass_C::Broken_' has a wrong offset!");
static_assert(offsetof(ABreakableGlass_C, Health) == 0x000274, "Member 'ABreakableGlass_C::Health' has a wrong offset!");

}

