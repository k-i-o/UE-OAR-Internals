#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MapBuyUI

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function MapBuyUI.MapBuyUI_C.ExecuteUbergraph_MapBuyUI
// 0x0088 (0x0088 - 0x0000)
struct MapBuyUI_C_ExecuteUbergraph_MapBuyUI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_23B7[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARobberController_C*                    K2Node_DynamicCast_AsRobber_Controller;            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_23B8[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class UUserWidget*>                    CallFunc_GetAllWidgetsWithInterface_FoundWidgets;  // 0x0050(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UUserWidget*                            CallFunc_Array_Get_Item;                           // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23B9[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IMenuUIInteraface_C>   K2Node_DynamicCast_AsMenu_UIInteraface;            // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Consume_Coins_Success_;                   // 0x0083(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapBuyUI_C_ExecuteUbergraph_MapBuyUI) == 0x000008, "Wrong alignment on MapBuyUI_C_ExecuteUbergraph_MapBuyUI");
static_assert(sizeof(MapBuyUI_C_ExecuteUbergraph_MapBuyUI) == 0x000088, "Wrong size on MapBuyUI_C_ExecuteUbergraph_MapBuyUI");
static_assert(offsetof(MapBuyUI_C_ExecuteUbergraph_MapBuyUI, EntryPoint) == 0x000000, "Member 'MapBuyUI_C_ExecuteUbergraph_MapBuyUI::EntryPoint' has a wrong offset!");
static_assert(offsetof(MapBuyUI_C_ExecuteUbergraph_MapBuyUI, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'MapBuyUI_C_ExecuteUbergraph_MapBuyUI::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MapBuyUI_C_ExecuteUbergraph_MapBuyUI, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'MapBuyUI_C_ExecuteUbergraph_MapBuyUI::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapBuyUI_C_ExecuteUbergraph_MapBuyUI, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'MapBuyUI_C_ExecuteUbergraph_MapBuyUI::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapBuyUI_C_ExecuteUbergraph_MapBuyUI, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'MapBuyUI_C_ExecuteUbergraph_MapBuyUI::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapBuyUI_C_ExecuteUbergraph_MapBuyUI, Temp_bool_IsClosed_Variable) == 0x000020, "Member 'MapBuyUI_C_ExecuteUbergraph_MapBuyUI::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(MapBuyUI_C_ExecuteUbergraph_MapBuyUI, CallFunc_GetPlayerController_ReturnValue) == 0x000028, "Member 'MapBuyUI_C_ExecuteUbergraph_MapBuyUI::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapBuyUI_C_ExecuteUbergraph_MapBuyUI, K2Node_DynamicCast_AsRobber_Controller) == 0x000030, "Member 'MapBuyUI_C_ExecuteUbergraph_MapBuyUI::K2Node_DynamicCast_AsRobber_Controller' has a wrong offset!");
static_assert(offsetof(MapBuyUI_C_ExecuteUbergraph_MapBuyUI, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'MapBuyUI_C_ExecuteUbergraph_MapBuyUI::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapBuyUI_C_ExecuteUbergraph_MapBuyUI, CallFunc_Concat_StrStr_ReturnValue) == 0x000040, "Member 'MapBuyUI_C_ExecuteUbergraph_MapBuyUI::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapBuyUI_C_ExecuteUbergraph_MapBuyUI, CallFunc_GetAllWidgetsWithInterface_FoundWidgets) == 0x000050, "Member 'MapBuyUI_C_ExecuteUbergraph_MapBuyUI::CallFunc_GetAllWidgetsWithInterface_FoundWidgets' has a wrong offset!");
static_assert(offsetof(MapBuyUI_C_ExecuteUbergraph_MapBuyUI, CallFunc_Array_Get_Item) == 0x000060, "Member 'MapBuyUI_C_ExecuteUbergraph_MapBuyUI::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapBuyUI_C_ExecuteUbergraph_MapBuyUI, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'MapBuyUI_C_ExecuteUbergraph_MapBuyUI::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapBuyUI_C_ExecuteUbergraph_MapBuyUI, K2Node_DynamicCast_AsMenu_UIInteraface) == 0x000070, "Member 'MapBuyUI_C_ExecuteUbergraph_MapBuyUI::K2Node_DynamicCast_AsMenu_UIInteraface' has a wrong offset!");
static_assert(offsetof(MapBuyUI_C_ExecuteUbergraph_MapBuyUI, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'MapBuyUI_C_ExecuteUbergraph_MapBuyUI::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(MapBuyUI_C_ExecuteUbergraph_MapBuyUI, CallFunc_Less_IntInt_ReturnValue) == 0x000081, "Member 'MapBuyUI_C_ExecuteUbergraph_MapBuyUI::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapBuyUI_C_ExecuteUbergraph_MapBuyUI, CallFunc_Array_Contains_ReturnValue) == 0x000082, "Member 'MapBuyUI_C_ExecuteUbergraph_MapBuyUI::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapBuyUI_C_ExecuteUbergraph_MapBuyUI, CallFunc_Consume_Coins_Success_) == 0x000083, "Member 'MapBuyUI_C_ExecuteUbergraph_MapBuyUI::CallFunc_Consume_Coins_Success_' has a wrong offset!");
static_assert(offsetof(MapBuyUI_C_ExecuteUbergraph_MapBuyUI, Temp_bool_Has_Been_Initd_Variable) == 0x000084, "Member 'MapBuyUI_C_ExecuteUbergraph_MapBuyUI::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");

// Function MapBuyUI.MapBuyUI_C.GetText_0
// 0x0050 (0x0050 - 0x0000)
struct MapBuyUI_C_GetText_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
};
static_assert(alignof(MapBuyUI_C_GetText_0) == 0x000008, "Wrong alignment on MapBuyUI_C_GetText_0");
static_assert(sizeof(MapBuyUI_C_GetText_0) == 0x000050, "Wrong size on MapBuyUI_C_GetText_0");
static_assert(offsetof(MapBuyUI_C_GetText_0, ReturnValue) == 0x000000, "Member 'MapBuyUI_C_GetText_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(MapBuyUI_C_GetText_0, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'MapBuyUI_C_GetText_0::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapBuyUI_C_GetText_0, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000028, "Member 'MapBuyUI_C_GetText_0::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapBuyUI_C_GetText_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'MapBuyUI_C_GetText_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function MapBuyUI.MapBuyUI_C.GetText_1
// 0x0030 (0x0030 - 0x0000)
struct MapBuyUI_C_GetText_1 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
};
static_assert(alignof(MapBuyUI_C_GetText_1) == 0x000008, "Wrong alignment on MapBuyUI_C_GetText_1");
static_assert(sizeof(MapBuyUI_C_GetText_1) == 0x000030, "Wrong size on MapBuyUI_C_GetText_1");
static_assert(offsetof(MapBuyUI_C_GetText_1, ReturnValue) == 0x000000, "Member 'MapBuyUI_C_GetText_1::ReturnValue' has a wrong offset!");
static_assert(offsetof(MapBuyUI_C_GetText_1, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'MapBuyUI_C_GetText_1::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function MapBuyUI.MapBuyUI_C.HiddenWhenPurchased
// 0x0001 (0x0001 - 0x0000)
struct MapBuyUI_C_HiddenWhenPurchased final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapBuyUI_C_HiddenWhenPurchased) == 0x000001, "Wrong alignment on MapBuyUI_C_HiddenWhenPurchased");
static_assert(sizeof(MapBuyUI_C_HiddenWhenPurchased) == 0x000001, "Wrong size on MapBuyUI_C_HiddenWhenPurchased");
static_assert(offsetof(MapBuyUI_C_HiddenWhenPurchased, ReturnValue) == 0x000000, "Member 'MapBuyUI_C_HiddenWhenPurchased::ReturnValue' has a wrong offset!");

}

