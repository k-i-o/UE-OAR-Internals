#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PickupItem_base

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function PickupItem_base.PickupItem_base_C.ExecuteUbergraph_PickupItem_base
// 0x0098 (0x0098 - 0x0000)
struct PickupItem_base_C_ExecuteUbergraph_PickupItem_base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FD8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IPoliceTargetInterface_C> K2Node_DynamicCast_AsPolice_Target_Interface;      // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue;       // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FD9[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetHoldingActor_HoldingActor;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckIfOverlappingPlayer_Overlapping_;    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FDA[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IPoliceTargetInterface_C> K2Node_DynamicCast_AsPolice_Target_Interface_1;    // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue_1;     // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FDB[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetHoldingActor_HoldingActor_1;           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FDC[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_ComponentBoundEvent_Player;                 // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_Pickuplocation;         // 0x0070(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_ComponentBoundEvent_PickupRotation;         // 0x007C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                K2Node_ComponentBoundEvent_HitLocation;            // 0x0088(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PickupItem_base_C_ExecuteUbergraph_PickupItem_base) == 0x000008, "Wrong alignment on PickupItem_base_C_ExecuteUbergraph_PickupItem_base");
static_assert(sizeof(PickupItem_base_C_ExecuteUbergraph_PickupItem_base) == 0x000098, "Wrong size on PickupItem_base_C_ExecuteUbergraph_PickupItem_base");
static_assert(offsetof(PickupItem_base_C_ExecuteUbergraph_PickupItem_base, EntryPoint) == 0x000000, "Member 'PickupItem_base_C_ExecuteUbergraph_PickupItem_base::EntryPoint' has a wrong offset!");
static_assert(offsetof(PickupItem_base_C_ExecuteUbergraph_PickupItem_base, K2Node_Event_OtherActor) == 0x000008, "Member 'PickupItem_base_C_ExecuteUbergraph_PickupItem_base::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(PickupItem_base_C_ExecuteUbergraph_PickupItem_base, K2Node_DynamicCast_AsPolice_Target_Interface) == 0x000010, "Member 'PickupItem_base_C_ExecuteUbergraph_PickupItem_base::K2Node_DynamicCast_AsPolice_Target_Interface' has a wrong offset!");
static_assert(offsetof(PickupItem_base_C_ExecuteUbergraph_PickupItem_base, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'PickupItem_base_C_ExecuteUbergraph_PickupItem_base::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PickupItem_base_C_ExecuteUbergraph_PickupItem_base, CallFunc_DoesImplementInterface_ReturnValue) == 0x000021, "Member 'PickupItem_base_C_ExecuteUbergraph_PickupItem_base::CallFunc_DoesImplementInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(PickupItem_base_C_ExecuteUbergraph_PickupItem_base, CallFunc_GetHoldingActor_HoldingActor) == 0x000028, "Member 'PickupItem_base_C_ExecuteUbergraph_PickupItem_base::CallFunc_GetHoldingActor_HoldingActor' has a wrong offset!");
static_assert(offsetof(PickupItem_base_C_ExecuteUbergraph_PickupItem_base, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000030, "Member 'PickupItem_base_C_ExecuteUbergraph_PickupItem_base::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PickupItem_base_C_ExecuteUbergraph_PickupItem_base, CallFunc_CheckIfOverlappingPlayer_Overlapping_) == 0x000031, "Member 'PickupItem_base_C_ExecuteUbergraph_PickupItem_base::CallFunc_CheckIfOverlappingPlayer_Overlapping_' has a wrong offset!");
static_assert(offsetof(PickupItem_base_C_ExecuteUbergraph_PickupItem_base, CallFunc_GetOwner_ReturnValue) == 0x000038, "Member 'PickupItem_base_C_ExecuteUbergraph_PickupItem_base::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(PickupItem_base_C_ExecuteUbergraph_PickupItem_base, K2Node_DynamicCast_AsPolice_Target_Interface_1) == 0x000040, "Member 'PickupItem_base_C_ExecuteUbergraph_PickupItem_base::K2Node_DynamicCast_AsPolice_Target_Interface_1' has a wrong offset!");
static_assert(offsetof(PickupItem_base_C_ExecuteUbergraph_PickupItem_base, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'PickupItem_base_C_ExecuteUbergraph_PickupItem_base::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(PickupItem_base_C_ExecuteUbergraph_PickupItem_base, CallFunc_DoesImplementInterface_ReturnValue_1) == 0x000051, "Member 'PickupItem_base_C_ExecuteUbergraph_PickupItem_base::CallFunc_DoesImplementInterface_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PickupItem_base_C_ExecuteUbergraph_PickupItem_base, CallFunc_GetHoldingActor_HoldingActor_1) == 0x000058, "Member 'PickupItem_base_C_ExecuteUbergraph_PickupItem_base::CallFunc_GetHoldingActor_HoldingActor_1' has a wrong offset!");
static_assert(offsetof(PickupItem_base_C_ExecuteUbergraph_PickupItem_base, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000060, "Member 'PickupItem_base_C_ExecuteUbergraph_PickupItem_base::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PickupItem_base_C_ExecuteUbergraph_PickupItem_base, K2Node_ComponentBoundEvent_Player) == 0x000068, "Member 'PickupItem_base_C_ExecuteUbergraph_PickupItem_base::K2Node_ComponentBoundEvent_Player' has a wrong offset!");
static_assert(offsetof(PickupItem_base_C_ExecuteUbergraph_PickupItem_base, K2Node_ComponentBoundEvent_Pickuplocation) == 0x000070, "Member 'PickupItem_base_C_ExecuteUbergraph_PickupItem_base::K2Node_ComponentBoundEvent_Pickuplocation' has a wrong offset!");
static_assert(offsetof(PickupItem_base_C_ExecuteUbergraph_PickupItem_base, K2Node_ComponentBoundEvent_PickupRotation) == 0x00007C, "Member 'PickupItem_base_C_ExecuteUbergraph_PickupItem_base::K2Node_ComponentBoundEvent_PickupRotation' has a wrong offset!");
static_assert(offsetof(PickupItem_base_C_ExecuteUbergraph_PickupItem_base, K2Node_ComponentBoundEvent_HitLocation) == 0x000088, "Member 'PickupItem_base_C_ExecuteUbergraph_PickupItem_base::K2Node_ComponentBoundEvent_HitLocation' has a wrong offset!");

// Function PickupItem_base.PickupItem_base_C.BndEvt__PickupItem_base_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature
// 0x0030 (0x0030 - 0x0000)
struct PickupItem_base_C_BndEvt__PickupItem_base_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature final
{
public:
	class AActor*                                 Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Pickuplocation;                                    // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               PickupRotation;                                    // 0x0014(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                HitLocation;                                       // 0x0020(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PickupItem_base_C_BndEvt__PickupItem_base_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature) == 0x000008, "Wrong alignment on PickupItem_base_C_BndEvt__PickupItem_base_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature");
static_assert(sizeof(PickupItem_base_C_BndEvt__PickupItem_base_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature) == 0x000030, "Wrong size on PickupItem_base_C_BndEvt__PickupItem_base_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature");
static_assert(offsetof(PickupItem_base_C_BndEvt__PickupItem_base_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature, Player) == 0x000000, "Member 'PickupItem_base_C_BndEvt__PickupItem_base_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature::Player' has a wrong offset!");
static_assert(offsetof(PickupItem_base_C_BndEvt__PickupItem_base_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature, Pickuplocation) == 0x000008, "Member 'PickupItem_base_C_BndEvt__PickupItem_base_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature::Pickuplocation' has a wrong offset!");
static_assert(offsetof(PickupItem_base_C_BndEvt__PickupItem_base_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature, PickupRotation) == 0x000014, "Member 'PickupItem_base_C_BndEvt__PickupItem_base_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature::PickupRotation' has a wrong offset!");
static_assert(offsetof(PickupItem_base_C_BndEvt__PickupItem_base_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature, HitLocation) == 0x000020, "Member 'PickupItem_base_C_BndEvt__PickupItem_base_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature::HitLocation' has a wrong offset!");

// Function PickupItem_base.PickupItem_base_C.ReceiveActorEndOverlap
// 0x0008 (0x0008 - 0x0000)
struct PickupItem_base_C_ReceiveActorEndOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PickupItem_base_C_ReceiveActorEndOverlap) == 0x000008, "Wrong alignment on PickupItem_base_C_ReceiveActorEndOverlap");
static_assert(sizeof(PickupItem_base_C_ReceiveActorEndOverlap) == 0x000008, "Wrong size on PickupItem_base_C_ReceiveActorEndOverlap");
static_assert(offsetof(PickupItem_base_C_ReceiveActorEndOverlap, OtherActor) == 0x000000, "Member 'PickupItem_base_C_ReceiveActorEndOverlap::OtherActor' has a wrong offset!");

// Function PickupItem_base.PickupItem_base_C.CheckIfOverlappingPlayer
// 0x0038 (0x0038 - 0x0000)
struct PickupItem_base_C_CheckIfOverlappingPlayer final
{
public:
	bool                                          Overlapping_;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FDD[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0010(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FDE[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue;       // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PickupItem_base_C_CheckIfOverlappingPlayer) == 0x000008, "Wrong alignment on PickupItem_base_C_CheckIfOverlappingPlayer");
static_assert(sizeof(PickupItem_base_C_CheckIfOverlappingPlayer) == 0x000038, "Wrong size on PickupItem_base_C_CheckIfOverlappingPlayer");
static_assert(offsetof(PickupItem_base_C_CheckIfOverlappingPlayer, Overlapping_) == 0x000000, "Member 'PickupItem_base_C_CheckIfOverlappingPlayer::Overlapping_' has a wrong offset!");
static_assert(offsetof(PickupItem_base_C_CheckIfOverlappingPlayer, Temp_int_Array_Index_Variable) == 0x000004, "Member 'PickupItem_base_C_CheckIfOverlappingPlayer::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PickupItem_base_C_CheckIfOverlappingPlayer, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'PickupItem_base_C_CheckIfOverlappingPlayer::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PickupItem_base_C_CheckIfOverlappingPlayer, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'PickupItem_base_C_CheckIfOverlappingPlayer::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PickupItem_base_C_CheckIfOverlappingPlayer, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000010, "Member 'PickupItem_base_C_CheckIfOverlappingPlayer::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(PickupItem_base_C_CheckIfOverlappingPlayer, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'PickupItem_base_C_CheckIfOverlappingPlayer::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PickupItem_base_C_CheckIfOverlappingPlayer, CallFunc_Array_Get_Item) == 0x000028, "Member 'PickupItem_base_C_CheckIfOverlappingPlayer::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PickupItem_base_C_CheckIfOverlappingPlayer, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'PickupItem_base_C_CheckIfOverlappingPlayer::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PickupItem_base_C_CheckIfOverlappingPlayer, CallFunc_DoesImplementInterface_ReturnValue) == 0x000031, "Member 'PickupItem_base_C_CheckIfOverlappingPlayer::CallFunc_DoesImplementInterface_ReturnValue' has a wrong offset!");

}
