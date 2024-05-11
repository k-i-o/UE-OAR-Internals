#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PoliceTrap_BarbedWire

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PoliceTrap_BarbedWire.PoliceTrap_BarbedWire_C
// 0x0078 (0x0298 - 0x0220)
class APoliceTrap_BarbedWire_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USteamAchievementComponent_C*           SteamAchievementComponent;                         // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        BarbedWireMovementSound;                           // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULookatInfoComponent_C*                 LookatInfoComponent;                               // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDamageComponent_C*                     DamageComponent;                                   // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh6;                                       // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh5;                                       // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh4;                                       // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh3;                                       // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh2;                                       // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Health;                                            // 0x0290(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PoliceTrap_BarbedWire(int32 EntryPoint);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void DestroyTrapMulti();
	void BndEvt__PoliceTrap_BarbedWire_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature(int32 Amount, class FName Bone, const struct FVector& HitLocation, const struct FVector& StartLocation, class AActor* Param_Instigator);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PoliceTrap_BarbedWire_C">();
	}
	static class APoliceTrap_BarbedWire_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APoliceTrap_BarbedWire_C>();
	}
};
static_assert(alignof(APoliceTrap_BarbedWire_C) == 0x000008, "Wrong alignment on APoliceTrap_BarbedWire_C");
static_assert(sizeof(APoliceTrap_BarbedWire_C) == 0x000298, "Wrong size on APoliceTrap_BarbedWire_C");
static_assert(offsetof(APoliceTrap_BarbedWire_C, UberGraphFrame) == 0x000220, "Member 'APoliceTrap_BarbedWire_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APoliceTrap_BarbedWire_C, SteamAchievementComponent) == 0x000228, "Member 'APoliceTrap_BarbedWire_C::SteamAchievementComponent' has a wrong offset!");
static_assert(offsetof(APoliceTrap_BarbedWire_C, BarbedWireMovementSound) == 0x000230, "Member 'APoliceTrap_BarbedWire_C::BarbedWireMovementSound' has a wrong offset!");
static_assert(offsetof(APoliceTrap_BarbedWire_C, LookatInfoComponent) == 0x000238, "Member 'APoliceTrap_BarbedWire_C::LookatInfoComponent' has a wrong offset!");
static_assert(offsetof(APoliceTrap_BarbedWire_C, DamageComponent) == 0x000240, "Member 'APoliceTrap_BarbedWire_C::DamageComponent' has a wrong offset!");
static_assert(offsetof(APoliceTrap_BarbedWire_C, Box) == 0x000248, "Member 'APoliceTrap_BarbedWire_C::Box' has a wrong offset!");
static_assert(offsetof(APoliceTrap_BarbedWire_C, StaticMesh6) == 0x000250, "Member 'APoliceTrap_BarbedWire_C::StaticMesh6' has a wrong offset!");
static_assert(offsetof(APoliceTrap_BarbedWire_C, StaticMesh5) == 0x000258, "Member 'APoliceTrap_BarbedWire_C::StaticMesh5' has a wrong offset!");
static_assert(offsetof(APoliceTrap_BarbedWire_C, StaticMesh4) == 0x000260, "Member 'APoliceTrap_BarbedWire_C::StaticMesh4' has a wrong offset!");
static_assert(offsetof(APoliceTrap_BarbedWire_C, StaticMesh3) == 0x000268, "Member 'APoliceTrap_BarbedWire_C::StaticMesh3' has a wrong offset!");
static_assert(offsetof(APoliceTrap_BarbedWire_C, StaticMesh2) == 0x000270, "Member 'APoliceTrap_BarbedWire_C::StaticMesh2' has a wrong offset!");
static_assert(offsetof(APoliceTrap_BarbedWire_C, StaticMesh1) == 0x000278, "Member 'APoliceTrap_BarbedWire_C::StaticMesh1' has a wrong offset!");
static_assert(offsetof(APoliceTrap_BarbedWire_C, StaticMesh) == 0x000280, "Member 'APoliceTrap_BarbedWire_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(APoliceTrap_BarbedWire_C, DefaultSceneRoot) == 0x000288, "Member 'APoliceTrap_BarbedWire_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(APoliceTrap_BarbedWire_C, Health) == 0x000290, "Member 'APoliceTrap_BarbedWire_C::Health' has a wrong offset!");

}

