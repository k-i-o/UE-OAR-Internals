#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GuardPhone

#include "Basic.hpp"

#include "PickupItem_base_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GuardPhone.GuardPhone_C
// 0x0038 (0x0290 - 0x0258)
class AGuardPhone_C final : public APickupItem_base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GuardPhone_C;                       // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Audio;                                             // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   TextRender;                                        // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpottedHighlightcomponent_C*           SpottedHighlightcomponent;                         // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHighlightWhenHolding_C*                HighlightWhenHolding;                              // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAlertComponent_C*                      AlertComponent;                                    // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Active_;                                           // 0x0288(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F5D[0x3];                                     // 0x0289(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SecondsToAlert;                                    // 0x028C(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GuardPhone(int32 EntryPoint);
	void AlertGuardMulti();
	void BndEvt__GuardPhone_AlertComponent_K2Node_ComponentBoundEvent_1_OnAlarmtriggered__DelegateSignature();
	void CountdownText(const class FText& Text);
	void ReceiveBeginPlay();
	void StopPhoneAlert();
	void StopAlertMulti();
	void StartPhoneAlert();
	void StartAlertHighlight();
	void BndEvt__GuardPhone_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature(class AActor* Player, const struct FVector& Pickuplocation, const struct FRotator& PickupRotation, const struct FVector& HitLocation);
	void AlertGuards();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuardPhone_C">();
	}
	static class AGuardPhone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGuardPhone_C>();
	}
};
static_assert(alignof(AGuardPhone_C) == 0x000008, "Wrong alignment on AGuardPhone_C");
static_assert(sizeof(AGuardPhone_C) == 0x000290, "Wrong size on AGuardPhone_C");
static_assert(offsetof(AGuardPhone_C, UberGraphFrame_GuardPhone_C) == 0x000258, "Member 'AGuardPhone_C::UberGraphFrame_GuardPhone_C' has a wrong offset!");
static_assert(offsetof(AGuardPhone_C, Audio) == 0x000260, "Member 'AGuardPhone_C::Audio' has a wrong offset!");
static_assert(offsetof(AGuardPhone_C, TextRender) == 0x000268, "Member 'AGuardPhone_C::TextRender' has a wrong offset!");
static_assert(offsetof(AGuardPhone_C, SpottedHighlightcomponent) == 0x000270, "Member 'AGuardPhone_C::SpottedHighlightcomponent' has a wrong offset!");
static_assert(offsetof(AGuardPhone_C, HighlightWhenHolding) == 0x000278, "Member 'AGuardPhone_C::HighlightWhenHolding' has a wrong offset!");
static_assert(offsetof(AGuardPhone_C, AlertComponent) == 0x000280, "Member 'AGuardPhone_C::AlertComponent' has a wrong offset!");
static_assert(offsetof(AGuardPhone_C, Active_) == 0x000288, "Member 'AGuardPhone_C::Active_' has a wrong offset!");
static_assert(offsetof(AGuardPhone_C, SecondsToAlert) == 0x00028C, "Member 'AGuardPhone_C::SecondsToAlert' has a wrong offset!");

}

