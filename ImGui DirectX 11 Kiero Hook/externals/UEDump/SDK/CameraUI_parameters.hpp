#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CameraUI

#include "Basic.hpp"


namespace SDK::Params
{

// Function CameraUI.CameraUI_C.ExecuteUbergraph_CameraUI
// 0x0004 (0x0004 - 0x0000)
struct CameraUI_C_ExecuteUbergraph_CameraUI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CameraUI_C_ExecuteUbergraph_CameraUI) == 0x000004, "Wrong alignment on CameraUI_C_ExecuteUbergraph_CameraUI");
static_assert(sizeof(CameraUI_C_ExecuteUbergraph_CameraUI) == 0x000004, "Wrong size on CameraUI_C_ExecuteUbergraph_CameraUI");
static_assert(offsetof(CameraUI_C_ExecuteUbergraph_CameraUI, EntryPoint) == 0x000000, "Member 'CameraUI_C_ExecuteUbergraph_CameraUI::EntryPoint' has a wrong offset!");

// Function CameraUI.CameraUI_C.GetText_0
// 0x0058 (0x0058 - 0x0000)
struct CameraUI_C_GetText_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E1E[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
};
static_assert(alignof(CameraUI_C_GetText_0) == 0x000008, "Wrong alignment on CameraUI_C_GetText_0");
static_assert(sizeof(CameraUI_C_GetText_0) == 0x000058, "Wrong size on CameraUI_C_GetText_0");
static_assert(offsetof(CameraUI_C_GetText_0, ReturnValue) == 0x000000, "Member 'CameraUI_C_GetText_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraUI_C_GetText_0, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'CameraUI_C_GetText_0::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraUI_C_GetText_0, CallFunc_Conv_IntToString_ReturnValue) == 0x000020, "Member 'CameraUI_C_GetText_0::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraUI_C_GetText_0, CallFunc_Concat_StrStr_ReturnValue) == 0x000030, "Member 'CameraUI_C_GetText_0::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraUI_C_GetText_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'CameraUI_C_GetText_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

