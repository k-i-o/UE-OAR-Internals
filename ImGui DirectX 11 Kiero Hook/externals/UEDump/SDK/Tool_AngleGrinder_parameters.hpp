#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tool_AngleGrinder

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Tool_AngleGrinder.Tool_AngleGrinder_C.ExecuteUbergraph_Tool_AngleGrinder
// 0x0020 (0x0020 - 0x0000)
struct Tool_AngleGrinder_C_ExecuteUbergraph_Tool_AngleGrinder final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FE0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Tool_AngleGrinder_C_ExecuteUbergraph_Tool_AngleGrinder) == 0x000008, "Wrong alignment on Tool_AngleGrinder_C_ExecuteUbergraph_Tool_AngleGrinder");
static_assert(sizeof(Tool_AngleGrinder_C_ExecuteUbergraph_Tool_AngleGrinder) == 0x000020, "Wrong size on Tool_AngleGrinder_C_ExecuteUbergraph_Tool_AngleGrinder");
static_assert(offsetof(Tool_AngleGrinder_C_ExecuteUbergraph_Tool_AngleGrinder, EntryPoint) == 0x000000, "Member 'Tool_AngleGrinder_C_ExecuteUbergraph_Tool_AngleGrinder::EntryPoint' has a wrong offset!");
static_assert(offsetof(Tool_AngleGrinder_C_ExecuteUbergraph_Tool_AngleGrinder, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'Tool_AngleGrinder_C_ExecuteUbergraph_Tool_AngleGrinder::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tool_AngleGrinder_C_ExecuteUbergraph_Tool_AngleGrinder, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'Tool_AngleGrinder_C_ExecuteUbergraph_Tool_AngleGrinder::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");

}

