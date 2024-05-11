#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Wall

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Wall.Wall_C.UserConstructionScript
// 0x0120 (0x0120 - 0x0000)
struct Wall_C_UserConstructionScript final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2588[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2589[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_258A[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   CallFunc_AddComponent_ReturnValue;                 // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_258B[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0078(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TArray<class UMaterialInterface*>             CallFunc_GetMaterials_ReturnValue;                 // 0x0100(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0115(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Wall_C_UserConstructionScript) == 0x000010, "Wrong alignment on Wall_C_UserConstructionScript");
static_assert(sizeof(Wall_C_UserConstructionScript) == 0x000120, "Wrong size on Wall_C_UserConstructionScript");
static_assert(offsetof(Wall_C_UserConstructionScript, Temp_int_Variable) == 0x000000, "Member 'Wall_C_UserConstructionScript::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Wall_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'Wall_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wall_C_UserConstructionScript, Temp_int_Variable_1) == 0x000008, "Member 'Wall_C_UserConstructionScript::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Wall_C_UserConstructionScript, CallFunc_Array_Get_Item) == 0x000010, "Member 'Wall_C_UserConstructionScript::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Wall_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue_1) == 0x000018, "Member 'Wall_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Wall_C_UserConstructionScript, CallFunc_Multiply_IntFloat_ReturnValue) == 0x00001C, "Member 'Wall_C_UserConstructionScript::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wall_C_UserConstructionScript, CallFunc_MakeVector_ReturnValue) == 0x000020, "Member 'Wall_C_UserConstructionScript::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wall_C_UserConstructionScript, CallFunc_MakeTransform_ReturnValue) == 0x000030, "Member 'Wall_C_UserConstructionScript::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wall_C_UserConstructionScript, CallFunc_Subtract_IntInt_ReturnValue) == 0x000060, "Member 'Wall_C_UserConstructionScript::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wall_C_UserConstructionScript, CallFunc_AddComponent_ReturnValue) == 0x000068, "Member 'Wall_C_UserConstructionScript::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wall_C_UserConstructionScript, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000070, "Member 'Wall_C_UserConstructionScript::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wall_C_UserConstructionScript, CallFunc_Array_Add_ReturnValue) == 0x000074, "Member 'Wall_C_UserConstructionScript::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wall_C_UserConstructionScript, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000078, "Member 'Wall_C_UserConstructionScript::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Wall_C_UserConstructionScript, CallFunc_GetMaterials_ReturnValue) == 0x000100, "Member 'Wall_C_UserConstructionScript::CallFunc_GetMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wall_C_UserConstructionScript, CallFunc_Array_LastIndex_ReturnValue) == 0x000110, "Member 'Wall_C_UserConstructionScript::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wall_C_UserConstructionScript, CallFunc_SetStaticMesh_ReturnValue) == 0x000114, "Member 'Wall_C_UserConstructionScript::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wall_C_UserConstructionScript, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000115, "Member 'Wall_C_UserConstructionScript::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");

// Function Wall.Wall_C.SetMats
// 0x0050 (0x0050 - 0x0000)
struct Wall_C_SetMats final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_258C[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             CallFunc_GetMaterials_ReturnValue;                 // 0x0028(0x0010)(ReferenceParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_258D[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_258E[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     CallFunc_Array_Get_Item_1;                         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Wall_C_SetMats) == 0x000008, "Wrong alignment on Wall_C_SetMats");
static_assert(sizeof(Wall_C_SetMats) == 0x000050, "Wrong size on Wall_C_SetMats");
static_assert(offsetof(Wall_C_SetMats, Temp_int_Array_Index_Variable) == 0x000000, "Member 'Wall_C_SetMats::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Wall_C_SetMats, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'Wall_C_SetMats::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Wall_C_SetMats, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'Wall_C_SetMats::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wall_C_SetMats, Temp_int_Array_Index_Variable_1) == 0x00000C, "Member 'Wall_C_SetMats::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(Wall_C_SetMats, Temp_int_Loop_Counter_Variable_1) == 0x000010, "Member 'Wall_C_SetMats::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(Wall_C_SetMats, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'Wall_C_SetMats::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Wall_C_SetMats, CallFunc_Array_Get_Item) == 0x000018, "Member 'Wall_C_SetMats::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Wall_C_SetMats, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'Wall_C_SetMats::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wall_C_SetMats, CallFunc_GetMaterials_ReturnValue) == 0x000028, "Member 'Wall_C_SetMats::CallFunc_GetMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wall_C_SetMats, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'Wall_C_SetMats::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wall_C_SetMats, CallFunc_Array_Length_ReturnValue_1) == 0x00003C, "Member 'Wall_C_SetMats::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Wall_C_SetMats, CallFunc_Less_IntInt_ReturnValue_1) == 0x000040, "Member 'Wall_C_SetMats::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Wall_C_SetMats, CallFunc_Array_Get_Item_1) == 0x000048, "Member 'Wall_C_SetMats::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function Wall.Wall_C.FetchMats
// 0x0018 (0x0018 - 0x0000)
struct Wall_C_FetchMats final
{
public:
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item;                           // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>             CallFunc_GetMaterials_ReturnValue;                 // 0x0008(0x0010)(ReferenceParm)
};
static_assert(alignof(Wall_C_FetchMats) == 0x000008, "Wrong alignment on Wall_C_FetchMats");
static_assert(sizeof(Wall_C_FetchMats) == 0x000018, "Wrong size on Wall_C_FetchMats");
static_assert(offsetof(Wall_C_FetchMats, CallFunc_Array_Get_Item) == 0x000000, "Member 'Wall_C_FetchMats::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Wall_C_FetchMats, CallFunc_GetMaterials_ReturnValue) == 0x000008, "Member 'Wall_C_FetchMats::CallFunc_GetMaterials_ReturnValue' has a wrong offset!");

}

