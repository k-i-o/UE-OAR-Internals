#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_Police_base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "NPCBase_classes.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass NPC_Police_base.NPC_Police_base_C
// 0x00C0 (0x0600 - 0x0540)
#pragma pack(push, 0x1)
class alignas(0x10) ANPC_Police_base_C : public ANPCBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_NPC_Police_base_C;                  // 0x0540(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USteamStatComponent_C*                  SteamStatComponent;                                // 0x0548(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Head;                                              // 0x0550(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0558(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        StunArrow;                                         // 0x0560(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   GunActor;                                          // 0x0568(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        GunLocation;                                       // 0x0570(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPawnSensingComponent*                  PawnSensing;                                       // 0x0578(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_Alpha_E96F43CF40DEF6227CC9E1889C83F4E0; // 0x0580(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_E96F43CF40DEF6227CC9E1889C83F4E0; // 0x0584(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20F4[0x3];                                     // 0x0585(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0588(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetPlayer;                                      // 0x0590(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Sensing_;                                          // 0x0598(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Rifle_;                                            // 0x0599(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Shooting_;                                         // 0x059A(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_20F5[0x5];                                     // 0x059B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Gun;                                               // 0x05A0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         HitChance;                                         // 0x05A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20F6[0x4];                                     // 0x05AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APoliceGunBase_C*                       PoliceGun;                                         // 0x05B0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HeadStunned_;                                      // 0x05B8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InCover_;                                          // 0x05B9(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          GoingCover_;                                       // 0x05BA(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          BodyStunned_;                                      // 0x05BB(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                StunLocation;                                      // 0x05BC(0x000C)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DroppedAmmo;                                       // 0x05C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20F7[0x4];                                     // 0x05CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APowerbox_C*                            TargetPowerBox;                                    // 0x05D0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OverlappedPlayer;                                  // 0x05D8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARobberGameState_C*                     As_Robber_Game_State;                              // 0x05E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HeadStunChanceVar;                                 // 0x05E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BodyStunChance;                                    // 0x05EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanGoCover_;                                       // 0x05F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_NPC_Police_base(int32 EntryPoint);
	void StopWarningPowerbox();
	void BndEvt__NPC_Police_base_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void StartWarningPowerBox();
	void Body_stun(class FName Bone, const struct FVector& Location);
	void PoliceUncrouch();
	void PoliceCrouch();
	void SmoothRotate(const struct FRotator& Rotation);
	void MoveToCover(const struct FVector& Location);
	void LeaveCover();
	void LooseHat();
	void HeadStun();
	void HeadStunChance();
	void BndEvt__NPC_Police_base_DamageComponent_K2Node_ComponentBoundEvent_1_Damage__DelegateSignature(int32 Amount, class FName Bone, const struct FVector& HitLocation, const struct FVector& StartLocation, class AActor* Param_Instigator);
	void DropAmmo();
	void MoveNearTarget(float Radius);
	void PoliceDie(class AActor* Player);
	void Shoot();
	void SetTarget(class AActor* Target);
	void BndEvt__NPC_Police_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Pawn);
	void OnSuccess_D72A09BB4846C507EDCEE78EF2293331(EPathFollowingResult MovementResult);
	void OnFail_D72A09BB4846C507EDCEE78EF2293331(EPathFollowingResult MovementResult);
	void OnSuccess_FFD927C649BBA39C366E5BA4336B9B80(EPathFollowingResult MovementResult);
	void OnFail_FFD927C649BBA39C366E5BA4336B9B80(EPathFollowingResult MovementResult);
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void UserConstructionScript();
	void ShootPlayer();
	void FindNonMinusDownedPlayer(class AActor** Player, bool* Found_);
	void CheckCover(bool* Will_take_cover_, struct FVector* Cover_location);
	void CheckClearView();
	void CheckIfPointIsOnPlayerLevel(const struct FVector& Player_location, const struct FVector& PointLocation, bool* OnLevel_);
	void FindActivePowerbox();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NPC_Police_base_C">();
	}
	static class ANPC_Police_base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANPC_Police_base_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ANPC_Police_base_C) == 0x000010, "Wrong alignment on ANPC_Police_base_C");
static_assert(sizeof(ANPC_Police_base_C) == 0x000600, "Wrong size on ANPC_Police_base_C");
static_assert(offsetof(ANPC_Police_base_C, UberGraphFrame_NPC_Police_base_C) == 0x000540, "Member 'ANPC_Police_base_C::UberGraphFrame_NPC_Police_base_C' has a wrong offset!");
static_assert(offsetof(ANPC_Police_base_C, SteamStatComponent) == 0x000548, "Member 'ANPC_Police_base_C::SteamStatComponent' has a wrong offset!");
static_assert(offsetof(ANPC_Police_base_C, Head) == 0x000550, "Member 'ANPC_Police_base_C::Head' has a wrong offset!");
static_assert(offsetof(ANPC_Police_base_C, Sphere) == 0x000558, "Member 'ANPC_Police_base_C::Sphere' has a wrong offset!");
static_assert(offsetof(ANPC_Police_base_C, StunArrow) == 0x000560, "Member 'ANPC_Police_base_C::StunArrow' has a wrong offset!");
static_assert(offsetof(ANPC_Police_base_C, GunActor) == 0x000568, "Member 'ANPC_Police_base_C::GunActor' has a wrong offset!");
static_assert(offsetof(ANPC_Police_base_C, GunLocation) == 0x000570, "Member 'ANPC_Police_base_C::GunLocation' has a wrong offset!");
static_assert(offsetof(ANPC_Police_base_C, PawnSensing) == 0x000578, "Member 'ANPC_Police_base_C::PawnSensing' has a wrong offset!");
static_assert(offsetof(ANPC_Police_base_C, Timeline_0_Alpha_E96F43CF40DEF6227CC9E1889C83F4E0) == 0x000580, "Member 'ANPC_Police_base_C::Timeline_0_Alpha_E96F43CF40DEF6227CC9E1889C83F4E0' has a wrong offset!");
static_assert(offsetof(ANPC_Police_base_C, Timeline_0__Direction_E96F43CF40DEF6227CC9E1889C83F4E0) == 0x000584, "Member 'ANPC_Police_base_C::Timeline_0__Direction_E96F43CF40DEF6227CC9E1889C83F4E0' has a wrong offset!");
static_assert(offsetof(ANPC_Police_base_C, Timeline_0) == 0x000588, "Member 'ANPC_Police_base_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ANPC_Police_base_C, TargetPlayer) == 0x000590, "Member 'ANPC_Police_base_C::TargetPlayer' has a wrong offset!");
static_assert(offsetof(ANPC_Police_base_C, Sensing_) == 0x000598, "Member 'ANPC_Police_base_C::Sensing_' has a wrong offset!");
static_assert(offsetof(ANPC_Police_base_C, Rifle_) == 0x000599, "Member 'ANPC_Police_base_C::Rifle_' has a wrong offset!");
static_assert(offsetof(ANPC_Police_base_C, Shooting_) == 0x00059A, "Member 'ANPC_Police_base_C::Shooting_' has a wrong offset!");
static_assert(offsetof(ANPC_Police_base_C, Gun) == 0x0005A0, "Member 'ANPC_Police_base_C::Gun' has a wrong offset!");
static_assert(offsetof(ANPC_Police_base_C, HitChance) == 0x0005A8, "Member 'ANPC_Police_base_C::HitChance' has a wrong offset!");
static_assert(offsetof(ANPC_Police_base_C, PoliceGun) == 0x0005B0, "Member 'ANPC_Police_base_C::PoliceGun' has a wrong offset!");
static_assert(offsetof(ANPC_Police_base_C, HeadStunned_) == 0x0005B8, "Member 'ANPC_Police_base_C::HeadStunned_' has a wrong offset!");
static_assert(offsetof(ANPC_Police_base_C, InCover_) == 0x0005B9, "Member 'ANPC_Police_base_C::InCover_' has a wrong offset!");
static_assert(offsetof(ANPC_Police_base_C, GoingCover_) == 0x0005BA, "Member 'ANPC_Police_base_C::GoingCover_' has a wrong offset!");
static_assert(offsetof(ANPC_Police_base_C, BodyStunned_) == 0x0005BB, "Member 'ANPC_Police_base_C::BodyStunned_' has a wrong offset!");
static_assert(offsetof(ANPC_Police_base_C, StunLocation) == 0x0005BC, "Member 'ANPC_Police_base_C::StunLocation' has a wrong offset!");
static_assert(offsetof(ANPC_Police_base_C, DroppedAmmo) == 0x0005C8, "Member 'ANPC_Police_base_C::DroppedAmmo' has a wrong offset!");
static_assert(offsetof(ANPC_Police_base_C, TargetPowerBox) == 0x0005D0, "Member 'ANPC_Police_base_C::TargetPowerBox' has a wrong offset!");
static_assert(offsetof(ANPC_Police_base_C, OverlappedPlayer) == 0x0005D8, "Member 'ANPC_Police_base_C::OverlappedPlayer' has a wrong offset!");
static_assert(offsetof(ANPC_Police_base_C, As_Robber_Game_State) == 0x0005E0, "Member 'ANPC_Police_base_C::As_Robber_Game_State' has a wrong offset!");
static_assert(offsetof(ANPC_Police_base_C, HeadStunChanceVar) == 0x0005E8, "Member 'ANPC_Police_base_C::HeadStunChanceVar' has a wrong offset!");
static_assert(offsetof(ANPC_Police_base_C, BodyStunChance) == 0x0005EC, "Member 'ANPC_Police_base_C::BodyStunChance' has a wrong offset!");
static_assert(offsetof(ANPC_Police_base_C, CanGoCover_) == 0x0005F0, "Member 'ANPC_Police_base_C::CanGoCover_' has a wrong offset!");

}

