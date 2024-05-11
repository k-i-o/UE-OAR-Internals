#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EquippedInventorySlot

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "RarityNum_structs.hpp"
#include "SlateCore_structs.hpp"
#include "ShopItemCategory_structs.hpp"


namespace SDK::Params
{

// Function EquippedInventorySlot.EquippedInventorySlot_C.ExecuteUbergraph_EquippedInventorySlot
// 0x00D8 (0x00D8 - 0x0000)
struct EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EShopItemCategory                             K2Node_Event_Category_1;                           // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DD2[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_Event_ItemInfo;                             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SalePrice;                            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DD3[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARobberController_C*                    K2Node_DynamicCast_AsRobber_Controller;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EShopItemCategory                             CallFunc_Array_Get_Item;                           // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DD4[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_CustomEvent_ItemInfo;                       // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_Find_Equipped_Item_from_Category_Function_Item; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EShopItemCategory                             CallFunc_Array_Get_Item_1;                         // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DD5[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UUserWidget*>                    CallFunc_GetAllWidgetsWithInterface_FoundWidgets;  // 0x0060(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class AActor*>                         CallFunc_GetAllActorsWithInterface_OutActors;      // 0x0070(0x0010)(ReferenceParm)
	class UUserWidget*                            CallFunc_Array_Get_Item_2;                         // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item_3;                         // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IMenuUIInteraface_C>   K2Node_DynamicCast_AsMenu_UIInteraface;            // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DD6[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IMenuUIInteraface_C>   K2Node_DynamicCast_AsMenu_UIInteraface_1;          // 0x00A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DD7[0x3];                                     // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EShopItemCategory                             K2Node_Event_Category;                             // 0x00C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x00C7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot) == 0x000008, "Wrong alignment on EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot");
static_assert(sizeof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot) == 0x0000D8, "Wrong size on EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, EntryPoint) == 0x000000, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::EntryPoint' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, Temp_int_Array_Index_Variable) == 0x000008, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, Temp_int_Loop_Counter_Variable_1) == 0x000010, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, Temp_int_Array_Index_Variable_1) == 0x000018, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, K2Node_Event_Category_1) == 0x00001C, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::K2Node_Event_Category_1' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, K2Node_Event_ItemInfo) == 0x000020, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::K2Node_Event_ItemInfo' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, K2Node_Event_SalePrice) == 0x000028, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::K2Node_Event_SalePrice' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, CallFunc_GetPlayerController_ReturnValue) == 0x000030, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, K2Node_DynamicCast_AsRobber_Controller) == 0x000038, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::K2Node_DynamicCast_AsRobber_Controller' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, CallFunc_Array_Get_Item) == 0x000041, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, K2Node_CustomEvent_ItemInfo) == 0x000048, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::K2Node_CustomEvent_ItemInfo' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, CallFunc_Find_Equipped_Item_from_Category_Function_Item) == 0x000050, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::CallFunc_Find_Equipped_Item_from_Category_Function_Item' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, CallFunc_Array_Get_Item_1) == 0x000058, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, CallFunc_GetAllWidgetsWithInterface_FoundWidgets) == 0x000060, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::CallFunc_GetAllWidgetsWithInterface_FoundWidgets' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, CallFunc_GetAllActorsWithInterface_OutActors) == 0x000070, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::CallFunc_GetAllActorsWithInterface_OutActors' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, CallFunc_Array_Get_Item_2) == 0x000080, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, CallFunc_Array_Get_Item_3) == 0x000088, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, K2Node_DynamicCast_AsMenu_UIInteraface) == 0x000090, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::K2Node_DynamicCast_AsMenu_UIInteraface' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, K2Node_DynamicCast_bSuccess_1) == 0x0000A0, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, K2Node_DynamicCast_AsMenu_UIInteraface_1) == 0x0000A8, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::K2Node_DynamicCast_AsMenu_UIInteraface_1' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, K2Node_DynamicCast_bSuccess_2) == 0x0000B8, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, CallFunc_Array_Length_ReturnValue) == 0x0000BC, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, CallFunc_Array_Length_ReturnValue_1) == 0x0000C0, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, CallFunc_Less_IntInt_ReturnValue) == 0x0000C4, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000C5, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, K2Node_Event_Category) == 0x0000C6, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::K2Node_Event_Category' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, CallFunc_Array_Contains_ReturnValue) == 0x0000C7, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, CallFunc_PlayAnimation_ReturnValue) == 0x0000C8, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000D0, "Member 'EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function EquippedInventorySlot.EquippedInventorySlot_C.DragItemFromCategory
// 0x0001 (0x0001 - 0x0000)
struct EquippedInventorySlot_C_DragItemFromCategory final
{
public:
	EShopItemCategory                             Category;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EquippedInventorySlot_C_DragItemFromCategory) == 0x000001, "Wrong alignment on EquippedInventorySlot_C_DragItemFromCategory");
static_assert(sizeof(EquippedInventorySlot_C_DragItemFromCategory) == 0x000001, "Wrong size on EquippedInventorySlot_C_DragItemFromCategory");
static_assert(offsetof(EquippedInventorySlot_C_DragItemFromCategory, Category) == 0x000000, "Member 'EquippedInventorySlot_C_DragItemFromCategory::Category' has a wrong offset!");

// Function EquippedInventorySlot.EquippedInventorySlot_C.SetNewItem
// 0x0008 (0x0008 - 0x0000)
struct EquippedInventorySlot_C_SetNewItem final
{
public:
	class UClass*                                 ItemInfo;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EquippedInventorySlot_C_SetNewItem) == 0x000008, "Wrong alignment on EquippedInventorySlot_C_SetNewItem");
static_assert(sizeof(EquippedInventorySlot_C_SetNewItem) == 0x000008, "Wrong size on EquippedInventorySlot_C_SetNewItem");
static_assert(offsetof(EquippedInventorySlot_C_SetNewItem, ItemInfo) == 0x000000, "Member 'EquippedInventorySlot_C_SetNewItem::ItemInfo' has a wrong offset!");

// Function EquippedInventorySlot.EquippedInventorySlot_C.PreviewItem
// 0x0010 (0x0010 - 0x0000)
struct EquippedInventorySlot_C_PreviewItem final
{
public:
	class UClass*                                 ItemInfo;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SalePrice;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EquippedInventorySlot_C_PreviewItem) == 0x000008, "Wrong alignment on EquippedInventorySlot_C_PreviewItem");
static_assert(sizeof(EquippedInventorySlot_C_PreviewItem) == 0x000010, "Wrong size on EquippedInventorySlot_C_PreviewItem");
static_assert(offsetof(EquippedInventorySlot_C_PreviewItem, ItemInfo) == 0x000000, "Member 'EquippedInventorySlot_C_PreviewItem::ItemInfo' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_PreviewItem, SalePrice) == 0x000008, "Member 'EquippedInventorySlot_C_PreviewItem::SalePrice' has a wrong offset!");

// Function EquippedInventorySlot.EquippedInventorySlot_C.ChangeCategory
// 0x0001 (0x0001 - 0x0000)
struct EquippedInventorySlot_C_ChangeCategory final
{
public:
	EShopItemCategory                             Category;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EquippedInventorySlot_C_ChangeCategory) == 0x000001, "Wrong alignment on EquippedInventorySlot_C_ChangeCategory");
static_assert(sizeof(EquippedInventorySlot_C_ChangeCategory) == 0x000001, "Wrong size on EquippedInventorySlot_C_ChangeCategory");
static_assert(offsetof(EquippedInventorySlot_C_ChangeCategory, Category) == 0x000000, "Member 'EquippedInventorySlot_C_ChangeCategory::Category' has a wrong offset!");

// Function EquippedInventorySlot.EquippedInventorySlot_C.OnDragOver
// 0x00B8 (0x00B8 - 0x0000)
struct EquippedInventorySlot_C_OnDragOver final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          PointerEvent;                                      // 0x0038(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                     Operation;                                         // 0x00A8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x00B0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquippedInventorySlot_C_OnDragOver) == 0x000008, "Wrong alignment on EquippedInventorySlot_C_OnDragOver");
static_assert(sizeof(EquippedInventorySlot_C_OnDragOver) == 0x0000B8, "Wrong size on EquippedInventorySlot_C_OnDragOver");
static_assert(offsetof(EquippedInventorySlot_C_OnDragOver, MyGeometry) == 0x000000, "Member 'EquippedInventorySlot_C_OnDragOver::MyGeometry' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_OnDragOver, PointerEvent) == 0x000038, "Member 'EquippedInventorySlot_C_OnDragOver::PointerEvent' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_OnDragOver, Operation) == 0x0000A8, "Member 'EquippedInventorySlot_C_OnDragOver::Operation' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_OnDragOver, ReturnValue) == 0x0000B0, "Member 'EquippedInventorySlot_C_OnDragOver::ReturnValue' has a wrong offset!");

// Function EquippedInventorySlot.EquippedInventorySlot_C.OnDrop
// 0x00C8 (0x00C8 - 0x0000)
struct EquippedInventorySlot_C_OnDrop final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          PointerEvent;                                      // 0x0038(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                     Operation;                                         // 0x00A8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x00B0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DD8[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UInventoryItem_C*                       K2Node_DynamicCast_AsInventory_Item;               // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquippedInventorySlot_C_OnDrop) == 0x000008, "Wrong alignment on EquippedInventorySlot_C_OnDrop");
static_assert(sizeof(EquippedInventorySlot_C_OnDrop) == 0x0000C8, "Wrong size on EquippedInventorySlot_C_OnDrop");
static_assert(offsetof(EquippedInventorySlot_C_OnDrop, MyGeometry) == 0x000000, "Member 'EquippedInventorySlot_C_OnDrop::MyGeometry' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_OnDrop, PointerEvent) == 0x000038, "Member 'EquippedInventorySlot_C_OnDrop::PointerEvent' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_OnDrop, Operation) == 0x0000A8, "Member 'EquippedInventorySlot_C_OnDrop::Operation' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_OnDrop, ReturnValue) == 0x0000B0, "Member 'EquippedInventorySlot_C_OnDrop::ReturnValue' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_OnDrop, K2Node_DynamicCast_AsInventory_Item) == 0x0000B8, "Member 'EquippedInventorySlot_C_OnDrop::K2Node_DynamicCast_AsInventory_Item' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_OnDrop, K2Node_DynamicCast_bSuccess) == 0x0000C0, "Member 'EquippedInventorySlot_C_OnDrop::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_OnDrop, CallFunc_Array_Contains_ReturnValue) == 0x0000C1, "Member 'EquippedInventorySlot_C_OnDrop::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");

// Function EquippedInventorySlot.EquippedInventorySlot_C.UpdateItemInfo
// 0x0020 (0x0020 - 0x0000)
struct EquippedInventorySlot_C_UpdateItemInfo final
{
public:
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DD9[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0008(0x0018)()
};
static_assert(alignof(EquippedInventorySlot_C_UpdateItemInfo) == 0x000008, "Wrong alignment on EquippedInventorySlot_C_UpdateItemInfo");
static_assert(sizeof(EquippedInventorySlot_C_UpdateItemInfo) == 0x000020, "Wrong size on EquippedInventorySlot_C_UpdateItemInfo");
static_assert(offsetof(EquippedInventorySlot_C_UpdateItemInfo, CallFunc_IsValidClass_ReturnValue) == 0x000000, "Member 'EquippedInventorySlot_C_UpdateItemInfo::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_UpdateItemInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000008, "Member 'EquippedInventorySlot_C_UpdateItemInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function EquippedInventorySlot.EquippedInventorySlot_C.GetBrush_0
// 0x0118 (0x0118 - 0x0000)
struct EquippedInventorySlot_C_GetBrush_0 final
{
public:
	struct FSlateBrush                            ReturnValue;                                       // 0x0000(0x0088)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DDA[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0090(0x0088)()
};
static_assert(alignof(EquippedInventorySlot_C_GetBrush_0) == 0x000008, "Wrong alignment on EquippedInventorySlot_C_GetBrush_0");
static_assert(sizeof(EquippedInventorySlot_C_GetBrush_0) == 0x000118, "Wrong size on EquippedInventorySlot_C_GetBrush_0");
static_assert(offsetof(EquippedInventorySlot_C_GetBrush_0, ReturnValue) == 0x000000, "Member 'EquippedInventorySlot_C_GetBrush_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_GetBrush_0, CallFunc_IsValidClass_ReturnValue) == 0x000088, "Member 'EquippedInventorySlot_C_GetBrush_0::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_GetBrush_0, K2Node_MakeStruct_SlateBrush) == 0x000090, "Member 'EquippedInventorySlot_C_GetBrush_0::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

// Function EquippedInventorySlot.EquippedInventorySlot_C.Get_Rarity_ColorAndOpacity_0
// 0x0064 (0x0064 - 0x0000)
struct EquippedInventorySlot_C_Get_Rarity_ColorAndOpacity_0 final
{
public:
	struct FLinearColor                           ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERarityNum                                    Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DDB[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_2;                            // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_3;                            // 0x0044(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0054(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EquippedInventorySlot_C_Get_Rarity_ColorAndOpacity_0) == 0x000004, "Wrong alignment on EquippedInventorySlot_C_Get_Rarity_ColorAndOpacity_0");
static_assert(sizeof(EquippedInventorySlot_C_Get_Rarity_ColorAndOpacity_0) == 0x000064, "Wrong size on EquippedInventorySlot_C_Get_Rarity_ColorAndOpacity_0");
static_assert(offsetof(EquippedInventorySlot_C_Get_Rarity_ColorAndOpacity_0, ReturnValue) == 0x000000, "Member 'EquippedInventorySlot_C_Get_Rarity_ColorAndOpacity_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_Get_Rarity_ColorAndOpacity_0, Temp_byte_Variable) == 0x000010, "Member 'EquippedInventorySlot_C_Get_Rarity_ColorAndOpacity_0::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_Get_Rarity_ColorAndOpacity_0, Temp_struct_Variable) == 0x000014, "Member 'EquippedInventorySlot_C_Get_Rarity_ColorAndOpacity_0::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_Get_Rarity_ColorAndOpacity_0, Temp_struct_Variable_1) == 0x000024, "Member 'EquippedInventorySlot_C_Get_Rarity_ColorAndOpacity_0::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_Get_Rarity_ColorAndOpacity_0, Temp_struct_Variable_2) == 0x000034, "Member 'EquippedInventorySlot_C_Get_Rarity_ColorAndOpacity_0::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_Get_Rarity_ColorAndOpacity_0, Temp_struct_Variable_3) == 0x000044, "Member 'EquippedInventorySlot_C_Get_Rarity_ColorAndOpacity_0::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(EquippedInventorySlot_C_Get_Rarity_ColorAndOpacity_0, K2Node_Select_Default) == 0x000054, "Member 'EquippedInventorySlot_C_Get_Rarity_ColorAndOpacity_0::K2Node_Select_Default' has a wrong offset!");

}

