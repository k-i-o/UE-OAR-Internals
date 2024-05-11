#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tool_BatteringRam

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Tool_BatteringRam.Tool_BatteringRam_C.ExecuteUbergraph_Tool_BatteringRam
// 0x0138 (0x0138 - 0x0000)
struct Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FE1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FE2[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_Event_MyComp;                               // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_Other;                                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_Event_OtherComp;                            // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bSelfMoved;                           // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FE3[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Event_HitLocation;                          // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_HitNormal;                            // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_NormalImpulse;                        // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_Hit;                                  // 0x0060(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                 K2Node_CustomEvent_HitObject;                      // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x00F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FE4[0x4];                                     // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGlassInterface_C>     K2Node_DynamicCast_AsGlass_Interface;              // 0x0100(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FE5[0x3];                                     // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue;       // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FE6[0x3];                                     // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FE7[0x3];                                     // 0x0125(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UDamageComponent_C*                     CallFunc_GetComponentByClass_ReturnValue;          // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue_1;     // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam) == 0x000008, "Wrong alignment on Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam");
static_assert(sizeof(Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam) == 0x000138, "Wrong size on Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam");
static_assert(offsetof(Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam, EntryPoint) == 0x000000, "Member 'Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam::EntryPoint' has a wrong offset!");
static_assert(offsetof(Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam, Temp_bool_Has_Been_Initd_Variable) == 0x00001C, "Member 'Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam, Temp_bool_IsClosed_Variable) == 0x00001D, "Member 'Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam, K2Node_Event_MyComp) == 0x000020, "Member 'Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam::K2Node_Event_MyComp' has a wrong offset!");
static_assert(offsetof(Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam, K2Node_Event_Other) == 0x000028, "Member 'Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam::K2Node_Event_Other' has a wrong offset!");
static_assert(offsetof(Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam, K2Node_Event_OtherComp) == 0x000030, "Member 'Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam::K2Node_Event_OtherComp' has a wrong offset!");
static_assert(offsetof(Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam, K2Node_Event_bSelfMoved) == 0x000038, "Member 'Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam::K2Node_Event_bSelfMoved' has a wrong offset!");
static_assert(offsetof(Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam, K2Node_Event_HitLocation) == 0x00003C, "Member 'Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam::K2Node_Event_HitLocation' has a wrong offset!");
static_assert(offsetof(Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam, K2Node_Event_HitNormal) == 0x000048, "Member 'Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam::K2Node_Event_HitNormal' has a wrong offset!");
static_assert(offsetof(Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam, K2Node_Event_NormalImpulse) == 0x000054, "Member 'Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam::K2Node_Event_NormalImpulse' has a wrong offset!");
static_assert(offsetof(Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam, K2Node_Event_Hit) == 0x000060, "Member 'Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam, K2Node_CustomEvent_HitObject) == 0x0000E8, "Member 'Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam::K2Node_CustomEvent_HitObject' has a wrong offset!");
static_assert(offsetof(Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam, CallFunc_GetVelocity_ReturnValue) == 0x0000F0, "Member 'Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam, K2Node_DynamicCast_AsGlass_Interface) == 0x000100, "Member 'Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam::K2Node_DynamicCast_AsGlass_Interface' has a wrong offset!");
static_assert(offsetof(Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam, K2Node_DynamicCast_bSuccess) == 0x000110, "Member 'Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam, CallFunc_VSize_ReturnValue) == 0x000114, "Member 'Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000118, "Member 'Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam, CallFunc_DoesImplementInterface_ReturnValue) == 0x00011C, "Member 'Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam::CallFunc_DoesImplementInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam, CallFunc_FTrunc_ReturnValue) == 0x000120, "Member 'Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam, CallFunc_IsValid_ReturnValue) == 0x000124, "Member 'Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam, CallFunc_GetComponentByClass_ReturnValue) == 0x000128, "Member 'Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam, CallFunc_IsValid_ReturnValue_1) == 0x000130, "Member 'Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam, CallFunc_DoesImplementInterface_ReturnValue_1) == 0x000131, "Member 'Tool_BatteringRam_C_ExecuteUbergraph_Tool_BatteringRam::CallFunc_DoesImplementInterface_ReturnValue_1' has a wrong offset!");

// Function Tool_BatteringRam.Tool_BatteringRam_C.HitDoor
// 0x0008 (0x0008 - 0x0000)
struct Tool_BatteringRam_C_HitDoor final
{
public:
	class AActor*                                 HitObject;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Tool_BatteringRam_C_HitDoor) == 0x000008, "Wrong alignment on Tool_BatteringRam_C_HitDoor");
static_assert(sizeof(Tool_BatteringRam_C_HitDoor) == 0x000008, "Wrong size on Tool_BatteringRam_C_HitDoor");
static_assert(offsetof(Tool_BatteringRam_C_HitDoor, HitObject) == 0x000000, "Member 'Tool_BatteringRam_C_HitDoor::HitObject' has a wrong offset!");

// Function Tool_BatteringRam.Tool_BatteringRam_C.ReceiveHit
// 0x00C8 (0x00C8 - 0x0000)
struct Tool_BatteringRam_C_ReceiveHit final
{
public:
	class UPrimitiveComponent*                    MyComp;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Other;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSelfMoved;                                        // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FE8[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                HitLocation;                                       // 0x001C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormal;                                         // 0x0028(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0034(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0040(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Tool_BatteringRam_C_ReceiveHit) == 0x000008, "Wrong alignment on Tool_BatteringRam_C_ReceiveHit");
static_assert(sizeof(Tool_BatteringRam_C_ReceiveHit) == 0x0000C8, "Wrong size on Tool_BatteringRam_C_ReceiveHit");
static_assert(offsetof(Tool_BatteringRam_C_ReceiveHit, MyComp) == 0x000000, "Member 'Tool_BatteringRam_C_ReceiveHit::MyComp' has a wrong offset!");
static_assert(offsetof(Tool_BatteringRam_C_ReceiveHit, Other) == 0x000008, "Member 'Tool_BatteringRam_C_ReceiveHit::Other' has a wrong offset!");
static_assert(offsetof(Tool_BatteringRam_C_ReceiveHit, OtherComp) == 0x000010, "Member 'Tool_BatteringRam_C_ReceiveHit::OtherComp' has a wrong offset!");
static_assert(offsetof(Tool_BatteringRam_C_ReceiveHit, bSelfMoved) == 0x000018, "Member 'Tool_BatteringRam_C_ReceiveHit::bSelfMoved' has a wrong offset!");
static_assert(offsetof(Tool_BatteringRam_C_ReceiveHit, HitLocation) == 0x00001C, "Member 'Tool_BatteringRam_C_ReceiveHit::HitLocation' has a wrong offset!");
static_assert(offsetof(Tool_BatteringRam_C_ReceiveHit, HitNormal) == 0x000028, "Member 'Tool_BatteringRam_C_ReceiveHit::HitNormal' has a wrong offset!");
static_assert(offsetof(Tool_BatteringRam_C_ReceiveHit, NormalImpulse) == 0x000034, "Member 'Tool_BatteringRam_C_ReceiveHit::NormalImpulse' has a wrong offset!");
static_assert(offsetof(Tool_BatteringRam_C_ReceiveHit, Hit) == 0x000040, "Member 'Tool_BatteringRam_C_ReceiveHit::Hit' has a wrong offset!");

}

