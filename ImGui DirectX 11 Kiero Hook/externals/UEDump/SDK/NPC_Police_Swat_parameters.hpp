#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_Police_Swat

#include "Basic.hpp"


namespace SDK::Params
{

// Function NPC_Police_Swat.NPC_Police_Swat_C.ExecuteUbergraph_NPC_Police_Swat
// 0x0020 (0x0020 - 0x0000)
struct NPC_Police_Swat_C_ExecuteUbergraph_NPC_Police_Swat final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_213A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NPC_Police_Swat_C_ExecuteUbergraph_NPC_Police_Swat) == 0x000008, "Wrong alignment on NPC_Police_Swat_C_ExecuteUbergraph_NPC_Police_Swat");
static_assert(sizeof(NPC_Police_Swat_C_ExecuteUbergraph_NPC_Police_Swat) == 0x000020, "Wrong size on NPC_Police_Swat_C_ExecuteUbergraph_NPC_Police_Swat");
static_assert(offsetof(NPC_Police_Swat_C_ExecuteUbergraph_NPC_Police_Swat, EntryPoint) == 0x000000, "Member 'NPC_Police_Swat_C_ExecuteUbergraph_NPC_Police_Swat::EntryPoint' has a wrong offset!");
static_assert(offsetof(NPC_Police_Swat_C_ExecuteUbergraph_NPC_Police_Swat, CallFunc_Conv_IntToString_ReturnValue) == 0x000008, "Member 'NPC_Police_Swat_C_ExecuteUbergraph_NPC_Police_Swat::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Police_Swat_C_ExecuteUbergraph_NPC_Police_Swat, CallFunc_FTrunc_ReturnValue) == 0x000018, "Member 'NPC_Police_Swat_C_ExecuteUbergraph_NPC_Police_Swat::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Police_Swat_C_ExecuteUbergraph_NPC_Police_Swat, CallFunc_Multiply_IntInt_ReturnValue) == 0x00001C, "Member 'NPC_Police_Swat_C_ExecuteUbergraph_NPC_Police_Swat::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");

}
