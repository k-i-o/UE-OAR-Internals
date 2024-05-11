#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SelectedMapUI

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function SelectedMapUI.SelectedMapUI_C.ExecuteUbergraph_SelectedMapUI
// 0x0070 (0x0070 - 0x0000)
struct SelectedMapUI_C_ExecuteUbergraph_SelectedMapUI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2390[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMapSelectUI_C*>                 CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class UMainMenuUI_C*>                  CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;      // 0x0028(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2391[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMainMenuUI_C*                          CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2392[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapSelectUI_C*                         CallFunc_Create_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainMenuPlayer_C*                      K2Node_DynamicCast_AsMain_Menu_Player;             // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SelectedMapUI_C_ExecuteUbergraph_SelectedMapUI) == 0x000008, "Wrong alignment on SelectedMapUI_C_ExecuteUbergraph_SelectedMapUI");
static_assert(sizeof(SelectedMapUI_C_ExecuteUbergraph_SelectedMapUI) == 0x000070, "Wrong size on SelectedMapUI_C_ExecuteUbergraph_SelectedMapUI");
static_assert(offsetof(SelectedMapUI_C_ExecuteUbergraph_SelectedMapUI, EntryPoint) == 0x000000, "Member 'SelectedMapUI_C_ExecuteUbergraph_SelectedMapUI::EntryPoint' has a wrong offset!");
static_assert(offsetof(SelectedMapUI_C_ExecuteUbergraph_SelectedMapUI, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SelectedMapUI_C_ExecuteUbergraph_SelectedMapUI::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectedMapUI_C_ExecuteUbergraph_SelectedMapUI, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'SelectedMapUI_C_ExecuteUbergraph_SelectedMapUI::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectedMapUI_C_ExecuteUbergraph_SelectedMapUI, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000018, "Member 'SelectedMapUI_C_ExecuteUbergraph_SelectedMapUI::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(SelectedMapUI_C_ExecuteUbergraph_SelectedMapUI, CallFunc_GetAllWidgetsOfClass_FoundWidgets_1) == 0x000028, "Member 'SelectedMapUI_C_ExecuteUbergraph_SelectedMapUI::CallFunc_GetAllWidgetsOfClass_FoundWidgets_1' has a wrong offset!");
static_assert(offsetof(SelectedMapUI_C_ExecuteUbergraph_SelectedMapUI, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'SelectedMapUI_C_ExecuteUbergraph_SelectedMapUI::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectedMapUI_C_ExecuteUbergraph_SelectedMapUI, CallFunc_Array_Get_Item) == 0x000040, "Member 'SelectedMapUI_C_ExecuteUbergraph_SelectedMapUI::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SelectedMapUI_C_ExecuteUbergraph_SelectedMapUI, CallFunc_Greater_IntInt_ReturnValue) == 0x000048, "Member 'SelectedMapUI_C_ExecuteUbergraph_SelectedMapUI::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectedMapUI_C_ExecuteUbergraph_SelectedMapUI, CallFunc_Create_ReturnValue) == 0x000050, "Member 'SelectedMapUI_C_ExecuteUbergraph_SelectedMapUI::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectedMapUI_C_ExecuteUbergraph_SelectedMapUI, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000058, "Member 'SelectedMapUI_C_ExecuteUbergraph_SelectedMapUI::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectedMapUI_C_ExecuteUbergraph_SelectedMapUI, K2Node_DynamicCast_AsMain_Menu_Player) == 0x000060, "Member 'SelectedMapUI_C_ExecuteUbergraph_SelectedMapUI::K2Node_DynamicCast_AsMain_Menu_Player' has a wrong offset!");
static_assert(offsetof(SelectedMapUI_C_ExecuteUbergraph_SelectedMapUI, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'SelectedMapUI_C_ExecuteUbergraph_SelectedMapUI::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function SelectedMapUI.SelectedMapUI_C.GetBackground_0
// 0x0110 (0x0110 - 0x0000)
struct SelectedMapUI_C_GetBackground_0 final
{
public:
	struct FSlateBrush                            ReturnValue;                                       // 0x0000(0x0088)(Parm, OutParm, ReturnParm)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0088(0x0088)()
};
static_assert(alignof(SelectedMapUI_C_GetBackground_0) == 0x000008, "Wrong alignment on SelectedMapUI_C_GetBackground_0");
static_assert(sizeof(SelectedMapUI_C_GetBackground_0) == 0x000110, "Wrong size on SelectedMapUI_C_GetBackground_0");
static_assert(offsetof(SelectedMapUI_C_GetBackground_0, ReturnValue) == 0x000000, "Member 'SelectedMapUI_C_GetBackground_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectedMapUI_C_GetBackground_0, K2Node_MakeStruct_SlateBrush) == 0x000088, "Member 'SelectedMapUI_C_GetBackground_0::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

// Function SelectedMapUI.SelectedMapUI_C.GetText_0
// 0x0030 (0x0030 - 0x0000)
struct SelectedMapUI_C_GetText_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(SelectedMapUI_C_GetText_0) == 0x000008, "Wrong alignment on SelectedMapUI_C_GetText_0");
static_assert(sizeof(SelectedMapUI_C_GetText_0) == 0x000030, "Wrong size on SelectedMapUI_C_GetText_0");
static_assert(offsetof(SelectedMapUI_C_GetText_0, ReturnValue) == 0x000000, "Member 'SelectedMapUI_C_GetText_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectedMapUI_C_GetText_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'SelectedMapUI_C_GetText_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

