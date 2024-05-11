#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReviveProgressUI

#include "Basic.hpp"


namespace SDK::Params
{

// Function ReviveProgressUI.ReviveProgressUI_C.ExecuteUbergraph_ReviveProgressUI
// 0x0028 (0x0028 - 0x0000)
struct ReviveProgressUI_C_ExecuteUbergraph_ReviveProgressUI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F5B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter_C*                     K2Node_DynamicCast_AsPlayer_Character;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F5C[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ReviveProgressUI_C_ExecuteUbergraph_ReviveProgressUI) == 0x000008, "Wrong alignment on ReviveProgressUI_C_ExecuteUbergraph_ReviveProgressUI");
static_assert(sizeof(ReviveProgressUI_C_ExecuteUbergraph_ReviveProgressUI) == 0x000028, "Wrong size on ReviveProgressUI_C_ExecuteUbergraph_ReviveProgressUI");
static_assert(offsetof(ReviveProgressUI_C_ExecuteUbergraph_ReviveProgressUI, EntryPoint) == 0x000000, "Member 'ReviveProgressUI_C_ExecuteUbergraph_ReviveProgressUI::EntryPoint' has a wrong offset!");
static_assert(offsetof(ReviveProgressUI_C_ExecuteUbergraph_ReviveProgressUI, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000008, "Member 'ReviveProgressUI_C_ExecuteUbergraph_ReviveProgressUI::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReviveProgressUI_C_ExecuteUbergraph_ReviveProgressUI, K2Node_DynamicCast_AsPlayer_Character) == 0x000010, "Member 'ReviveProgressUI_C_ExecuteUbergraph_ReviveProgressUI::K2Node_DynamicCast_AsPlayer_Character' has a wrong offset!");
static_assert(offsetof(ReviveProgressUI_C_ExecuteUbergraph_ReviveProgressUI, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ReviveProgressUI_C_ExecuteUbergraph_ReviveProgressUI::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ReviveProgressUI_C_ExecuteUbergraph_ReviveProgressUI, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00001C, "Member 'ReviveProgressUI_C_ExecuteUbergraph_ReviveProgressUI::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReviveProgressUI_C_ExecuteUbergraph_ReviveProgressUI, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'ReviveProgressUI_C_ExecuteUbergraph_ReviveProgressUI::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}
