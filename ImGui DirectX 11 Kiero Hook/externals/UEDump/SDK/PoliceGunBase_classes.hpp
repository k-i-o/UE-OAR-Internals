#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PoliceGunBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PoliceGunBase.PoliceGunBase_C
// 0x0058 (0x0278 - 0x0220)
class APoliceGunBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        Muzzle;                                            // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Ejector;                                           // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Gunmesh;                                           // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Rifle_;                                            // 0x0248(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1EC7[0x7];                                     // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            CasingMesh;                                        // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             GunSound;                                          // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          ShootAnim;                                         // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Damage;                                            // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Firerate;                                          // 0x026C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LongPause;                                         // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PoliceGunBase(int32 EntryPoint);
	void Shoot(const struct FHitResult& Hit);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PoliceGunBase_C">();
	}
	static class APoliceGunBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APoliceGunBase_C>();
	}
};
static_assert(alignof(APoliceGunBase_C) == 0x000008, "Wrong alignment on APoliceGunBase_C");
static_assert(sizeof(APoliceGunBase_C) == 0x000278, "Wrong size on APoliceGunBase_C");
static_assert(offsetof(APoliceGunBase_C, UberGraphFrame) == 0x000220, "Member 'APoliceGunBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APoliceGunBase_C, Muzzle) == 0x000228, "Member 'APoliceGunBase_C::Muzzle' has a wrong offset!");
static_assert(offsetof(APoliceGunBase_C, Ejector) == 0x000230, "Member 'APoliceGunBase_C::Ejector' has a wrong offset!");
static_assert(offsetof(APoliceGunBase_C, Box) == 0x000238, "Member 'APoliceGunBase_C::Box' has a wrong offset!");
static_assert(offsetof(APoliceGunBase_C, Gunmesh) == 0x000240, "Member 'APoliceGunBase_C::Gunmesh' has a wrong offset!");
static_assert(offsetof(APoliceGunBase_C, Rifle_) == 0x000248, "Member 'APoliceGunBase_C::Rifle_' has a wrong offset!");
static_assert(offsetof(APoliceGunBase_C, CasingMesh) == 0x000250, "Member 'APoliceGunBase_C::CasingMesh' has a wrong offset!");
static_assert(offsetof(APoliceGunBase_C, GunSound) == 0x000258, "Member 'APoliceGunBase_C::GunSound' has a wrong offset!");
static_assert(offsetof(APoliceGunBase_C, ShootAnim) == 0x000260, "Member 'APoliceGunBase_C::ShootAnim' has a wrong offset!");
static_assert(offsetof(APoliceGunBase_C, Damage) == 0x000268, "Member 'APoliceGunBase_C::Damage' has a wrong offset!");
static_assert(offsetof(APoliceGunBase_C, Firerate) == 0x00026C, "Member 'APoliceGunBase_C::Firerate' has a wrong offset!");
static_assert(offsetof(APoliceGunBase_C, LongPause) == 0x000270, "Member 'APoliceGunBase_C::LongPause' has a wrong offset!");

}

