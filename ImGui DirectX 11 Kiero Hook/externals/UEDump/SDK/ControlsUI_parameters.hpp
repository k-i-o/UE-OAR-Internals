#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ControlsUI

#include "Basic.hpp"

#include "Slate_structs.hpp"
#include "Engine_structs.hpp"
#include "InputSettingStruct_structs.hpp"


namespace SDK::Params
{

// Function ControlsUI.ControlsUI_C.ExecuteUbergraph_ControlsUI
// 0x0190 (0x0190 - 0x0000)
struct ControlsUI_C_ExecuteUbergraph_ControlsUI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F3B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UInputSettings*                         CallFunc_GetInputSettings_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UControlsUI_C*                          CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputSettingStruct                    CallFunc_Array_Get_Item;                           // 0x0028(0x0060)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F3C[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UInputSettings*                         CallFunc_GetInputSettings_ReturnValue_1;           // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputActionKeyMapping>         CallFunc_GetActionMappingByName_OutMappings;       // 0x0098(0x0010)(ReferenceParm)
	struct FInputAxisKeyMapping                   K2Node_MakeStruct_InputAxisKeyMapping;             // 0x00A8(0x0028)()
	struct FInputActionKeyMapping                 CallFunc_Array_Get_Item_1;                         // 0x00D0(0x0028)()
	class UInputSettings*                         CallFunc_GetInputSettings_ReturnValue_2;           // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionKeyMapping                 K2Node_MakeStruct_InputActionKeyMapping;           // 0x0100(0x0028)()
	TArray<struct FInputAxisKeyMapping>           CallFunc_GetAxisMappingByName_OutMappings;         // 0x0128(0x0010)(ReferenceParm)
	struct FInputAxisKeyMapping                   CallFunc_Array_Get_Item_2;                         // 0x0138(0x0028)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x0165(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F3D[0x2];                                     // 0x0166(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UInputSettings*                         CallFunc_GetInputSettings_ReturnValue_3;           // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARobberController_C*                    K2Node_DynamicCast_AsRobber_Controller;            // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F3E[0x3];                                     // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F3F[0x3];                                     // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ControlsUI_C_ExecuteUbergraph_ControlsUI) == 0x000008, "Wrong alignment on ControlsUI_C_ExecuteUbergraph_ControlsUI");
static_assert(sizeof(ControlsUI_C_ExecuteUbergraph_ControlsUI) == 0x000190, "Wrong size on ControlsUI_C_ExecuteUbergraph_ControlsUI");
static_assert(offsetof(ControlsUI_C_ExecuteUbergraph_ControlsUI, EntryPoint) == 0x000000, "Member 'ControlsUI_C_ExecuteUbergraph_ControlsUI::EntryPoint' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_ExecuteUbergraph_ControlsUI, CallFunc_GetInputSettings_ReturnValue) == 0x000008, "Member 'ControlsUI_C_ExecuteUbergraph_ControlsUI::CallFunc_GetInputSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_ExecuteUbergraph_ControlsUI, Temp_int_Array_Index_Variable) == 0x000010, "Member 'ControlsUI_C_ExecuteUbergraph_ControlsUI::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_ExecuteUbergraph_ControlsUI, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'ControlsUI_C_ExecuteUbergraph_ControlsUI::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_ExecuteUbergraph_ControlsUI, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'ControlsUI_C_ExecuteUbergraph_ControlsUI::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_ExecuteUbergraph_ControlsUI, Temp_int_Array_Index_Variable_1) == 0x00001C, "Member 'ControlsUI_C_ExecuteUbergraph_ControlsUI::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_ExecuteUbergraph_ControlsUI, CallFunc_Create_ReturnValue) == 0x000020, "Member 'ControlsUI_C_ExecuteUbergraph_ControlsUI::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_ExecuteUbergraph_ControlsUI, CallFunc_Array_Get_Item) == 0x000028, "Member 'ControlsUI_C_ExecuteUbergraph_ControlsUI::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_ExecuteUbergraph_ControlsUI, CallFunc_Array_Length_ReturnValue) == 0x000088, "Member 'ControlsUI_C_ExecuteUbergraph_ControlsUI::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_ExecuteUbergraph_ControlsUI, CallFunc_GetInputSettings_ReturnValue_1) == 0x000090, "Member 'ControlsUI_C_ExecuteUbergraph_ControlsUI::CallFunc_GetInputSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_ExecuteUbergraph_ControlsUI, CallFunc_GetActionMappingByName_OutMappings) == 0x000098, "Member 'ControlsUI_C_ExecuteUbergraph_ControlsUI::CallFunc_GetActionMappingByName_OutMappings' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_ExecuteUbergraph_ControlsUI, K2Node_MakeStruct_InputAxisKeyMapping) == 0x0000A8, "Member 'ControlsUI_C_ExecuteUbergraph_ControlsUI::K2Node_MakeStruct_InputAxisKeyMapping' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_ExecuteUbergraph_ControlsUI, CallFunc_Array_Get_Item_1) == 0x0000D0, "Member 'ControlsUI_C_ExecuteUbergraph_ControlsUI::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_ExecuteUbergraph_ControlsUI, CallFunc_GetInputSettings_ReturnValue_2) == 0x0000F8, "Member 'ControlsUI_C_ExecuteUbergraph_ControlsUI::CallFunc_GetInputSettings_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_ExecuteUbergraph_ControlsUI, K2Node_MakeStruct_InputActionKeyMapping) == 0x000100, "Member 'ControlsUI_C_ExecuteUbergraph_ControlsUI::K2Node_MakeStruct_InputActionKeyMapping' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_ExecuteUbergraph_ControlsUI, CallFunc_GetAxisMappingByName_OutMappings) == 0x000128, "Member 'ControlsUI_C_ExecuteUbergraph_ControlsUI::CallFunc_GetAxisMappingByName_OutMappings' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_ExecuteUbergraph_ControlsUI, CallFunc_Array_Get_Item_2) == 0x000138, "Member 'ControlsUI_C_ExecuteUbergraph_ControlsUI::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_ExecuteUbergraph_ControlsUI, CallFunc_Array_Length_ReturnValue_1) == 0x000160, "Member 'ControlsUI_C_ExecuteUbergraph_ControlsUI::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_ExecuteUbergraph_ControlsUI, CallFunc_Less_IntInt_ReturnValue) == 0x000164, "Member 'ControlsUI_C_ExecuteUbergraph_ControlsUI::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_ExecuteUbergraph_ControlsUI, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x000165, "Member 'ControlsUI_C_ExecuteUbergraph_ControlsUI::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_ExecuteUbergraph_ControlsUI, CallFunc_GetInputSettings_ReturnValue_3) == 0x000168, "Member 'ControlsUI_C_ExecuteUbergraph_ControlsUI::CallFunc_GetInputSettings_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_ExecuteUbergraph_ControlsUI, CallFunc_GetPlayerController_ReturnValue) == 0x000170, "Member 'ControlsUI_C_ExecuteUbergraph_ControlsUI::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_ExecuteUbergraph_ControlsUI, K2Node_DynamicCast_AsRobber_Controller) == 0x000178, "Member 'ControlsUI_C_ExecuteUbergraph_ControlsUI::K2Node_DynamicCast_AsRobber_Controller' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_ExecuteUbergraph_ControlsUI, K2Node_DynamicCast_bSuccess) == 0x000180, "Member 'ControlsUI_C_ExecuteUbergraph_ControlsUI::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_ExecuteUbergraph_ControlsUI, Temp_int_Loop_Counter_Variable_1) == 0x000184, "Member 'ControlsUI_C_ExecuteUbergraph_ControlsUI::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_ExecuteUbergraph_ControlsUI, CallFunc_Less_IntInt_ReturnValue_1) == 0x000188, "Member 'ControlsUI_C_ExecuteUbergraph_ControlsUI::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_ExecuteUbergraph_ControlsUI, CallFunc_Add_IntInt_ReturnValue_1) == 0x00018C, "Member 'ControlsUI_C_ExecuteUbergraph_ControlsUI::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function ControlsUI.ControlsUI_C.UpdateBinding
// 0x00D8 (0x00D8 - 0x0000)
struct ControlsUI_C_UpdateBinding final
{
public:
	struct FInputChord                            InputChord;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                          Axis_mapping_;                                     // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F40[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInputActionKeyMapping                 Input_action;                                      // 0x0028(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FInputAxisKeyMapping                   Input_axis;                                        // 0x0050(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UInputSettings*                         CallFunc_GetInputSettings_ReturnValue;             // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputAxisKeyMapping                   K2Node_MakeStruct_InputAxisKeyMapping;             // 0x0080(0x0028)()
	struct FInputActionKeyMapping                 K2Node_MakeStruct_InputActionKeyMapping;           // 0x00A8(0x0028)()
	class UInputSettings*                         CallFunc_GetInputSettings_ReturnValue_1;           // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ControlsUI_C_UpdateBinding) == 0x000008, "Wrong alignment on ControlsUI_C_UpdateBinding");
static_assert(sizeof(ControlsUI_C_UpdateBinding) == 0x0000D8, "Wrong size on ControlsUI_C_UpdateBinding");
static_assert(offsetof(ControlsUI_C_UpdateBinding, InputChord) == 0x000000, "Member 'ControlsUI_C_UpdateBinding::InputChord' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_UpdateBinding, Axis_mapping_) == 0x000020, "Member 'ControlsUI_C_UpdateBinding::Axis_mapping_' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_UpdateBinding, Input_action) == 0x000028, "Member 'ControlsUI_C_UpdateBinding::Input_action' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_UpdateBinding, Input_axis) == 0x000050, "Member 'ControlsUI_C_UpdateBinding::Input_axis' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_UpdateBinding, CallFunc_GetInputSettings_ReturnValue) == 0x000078, "Member 'ControlsUI_C_UpdateBinding::CallFunc_GetInputSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_UpdateBinding, K2Node_MakeStruct_InputAxisKeyMapping) == 0x000080, "Member 'ControlsUI_C_UpdateBinding::K2Node_MakeStruct_InputAxisKeyMapping' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_UpdateBinding, K2Node_MakeStruct_InputActionKeyMapping) == 0x0000A8, "Member 'ControlsUI_C_UpdateBinding::K2Node_MakeStruct_InputActionKeyMapping' has a wrong offset!");
static_assert(offsetof(ControlsUI_C_UpdateBinding, CallFunc_GetInputSettings_ReturnValue_1) == 0x0000D0, "Member 'ControlsUI_C_UpdateBinding::CallFunc_GetInputSettings_ReturnValue_1' has a wrong offset!");

}

