#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OldOfficeBuilding

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function OldOfficeBuilding.OldOfficeBuilding_C.UserConstructionScript
// 0x0170 (0x0170 - 0x0000)
struct OldOfficeBuilding_C_UserConstructionScript final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_256D[0xC];                                     // 0x0024(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetRelativeTransform_ReturnValue;         // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_256E[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0064(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0070(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x007C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_256F[0x8];                                     // 0x0088(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0090(0x0030)(IsPlainOldData, NoDestructor)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddInstance_ReturnValue;                  // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x00CC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x00D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x00E4(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(OldOfficeBuilding_C_UserConstructionScript) == 0x000010, "Wrong alignment on OldOfficeBuilding_C_UserConstructionScript");
static_assert(sizeof(OldOfficeBuilding_C_UserConstructionScript) == 0x000170, "Wrong size on OldOfficeBuilding_C_UserConstructionScript");
static_assert(offsetof(OldOfficeBuilding_C_UserConstructionScript, Temp_int_Variable) == 0x000000, "Member 'OldOfficeBuilding_C_UserConstructionScript::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(OldOfficeBuilding_C_UserConstructionScript, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000004, "Member 'OldOfficeBuilding_C_UserConstructionScript::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(OldOfficeBuilding_C_UserConstructionScript, CallFunc_MakeVector_ReturnValue) == 0x000008, "Member 'OldOfficeBuilding_C_UserConstructionScript::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(OldOfficeBuilding_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'OldOfficeBuilding_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OldOfficeBuilding_C_UserConstructionScript, CallFunc_Add_VectorVector_ReturnValue) == 0x000018, "Member 'OldOfficeBuilding_C_UserConstructionScript::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(OldOfficeBuilding_C_UserConstructionScript, CallFunc_GetRelativeTransform_ReturnValue) == 0x000030, "Member 'OldOfficeBuilding_C_UserConstructionScript::CallFunc_GetRelativeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(OldOfficeBuilding_C_UserConstructionScript, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000060, "Member 'OldOfficeBuilding_C_UserConstructionScript::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OldOfficeBuilding_C_UserConstructionScript, CallFunc_BreakTransform_Location) == 0x000064, "Member 'OldOfficeBuilding_C_UserConstructionScript::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(OldOfficeBuilding_C_UserConstructionScript, CallFunc_BreakTransform_Rotation) == 0x000070, "Member 'OldOfficeBuilding_C_UserConstructionScript::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(OldOfficeBuilding_C_UserConstructionScript, CallFunc_BreakTransform_Scale) == 0x00007C, "Member 'OldOfficeBuilding_C_UserConstructionScript::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(OldOfficeBuilding_C_UserConstructionScript, CallFunc_MakeTransform_ReturnValue) == 0x000090, "Member 'OldOfficeBuilding_C_UserConstructionScript::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(OldOfficeBuilding_C_UserConstructionScript, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x0000C0, "Member 'OldOfficeBuilding_C_UserConstructionScript::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OldOfficeBuilding_C_UserConstructionScript, CallFunc_AddInstance_ReturnValue) == 0x0000C4, "Member 'OldOfficeBuilding_C_UserConstructionScript::CallFunc_AddInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(OldOfficeBuilding_C_UserConstructionScript, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000C8, "Member 'OldOfficeBuilding_C_UserConstructionScript::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(OldOfficeBuilding_C_UserConstructionScript, CallFunc_MakeVector_ReturnValue_1) == 0x0000CC, "Member 'OldOfficeBuilding_C_UserConstructionScript::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OldOfficeBuilding_C_UserConstructionScript, CallFunc_Add_VectorVector_ReturnValue_1) == 0x0000D8, "Member 'OldOfficeBuilding_C_UserConstructionScript::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OldOfficeBuilding_C_UserConstructionScript, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x0000E4, "Member 'OldOfficeBuilding_C_UserConstructionScript::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");

}

