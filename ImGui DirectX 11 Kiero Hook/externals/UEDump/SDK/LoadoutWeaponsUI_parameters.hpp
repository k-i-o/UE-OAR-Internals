#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoadoutWeaponsUI

#include "Basic.hpp"

#include "ShopItemCategory_structs.hpp"


namespace SDK::Params
{

// Function LoadoutWeaponsUI.LoadoutWeaponsUI_C.ExecuteUbergraph_LoadoutWeaponsUI
// 0x0030 (0x0030 - 0x0000)
struct LoadoutWeaponsUI_C_ExecuteUbergraph_LoadoutWeaponsUI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DCC[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UEquippedWeaponSlot_C*                  CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEquippedWeaponSlot_C*                  CallFunc_Create_ReturnValue_1;                     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EShopItemCategory                             K2Node_Event_Category_1;                           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EShopItemCategory                             K2Node_Event_Category;                             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DCD[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_Event_ItemInfo;                             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SalePrice;                            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoadoutWeaponsUI_C_ExecuteUbergraph_LoadoutWeaponsUI) == 0x000008, "Wrong alignment on LoadoutWeaponsUI_C_ExecuteUbergraph_LoadoutWeaponsUI");
static_assert(sizeof(LoadoutWeaponsUI_C_ExecuteUbergraph_LoadoutWeaponsUI) == 0x000030, "Wrong size on LoadoutWeaponsUI_C_ExecuteUbergraph_LoadoutWeaponsUI");
static_assert(offsetof(LoadoutWeaponsUI_C_ExecuteUbergraph_LoadoutWeaponsUI, EntryPoint) == 0x000000, "Member 'LoadoutWeaponsUI_C_ExecuteUbergraph_LoadoutWeaponsUI::EntryPoint' has a wrong offset!");
static_assert(offsetof(LoadoutWeaponsUI_C_ExecuteUbergraph_LoadoutWeaponsUI, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'LoadoutWeaponsUI_C_ExecuteUbergraph_LoadoutWeaponsUI::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadoutWeaponsUI_C_ExecuteUbergraph_LoadoutWeaponsUI, CallFunc_Create_ReturnValue) == 0x000008, "Member 'LoadoutWeaponsUI_C_ExecuteUbergraph_LoadoutWeaponsUI::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadoutWeaponsUI_C_ExecuteUbergraph_LoadoutWeaponsUI, CallFunc_Create_ReturnValue_1) == 0x000010, "Member 'LoadoutWeaponsUI_C_ExecuteUbergraph_LoadoutWeaponsUI::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoadoutWeaponsUI_C_ExecuteUbergraph_LoadoutWeaponsUI, K2Node_Event_Category_1) == 0x000018, "Member 'LoadoutWeaponsUI_C_ExecuteUbergraph_LoadoutWeaponsUI::K2Node_Event_Category_1' has a wrong offset!");
static_assert(offsetof(LoadoutWeaponsUI_C_ExecuteUbergraph_LoadoutWeaponsUI, K2Node_Event_Category) == 0x000019, "Member 'LoadoutWeaponsUI_C_ExecuteUbergraph_LoadoutWeaponsUI::K2Node_Event_Category' has a wrong offset!");
static_assert(offsetof(LoadoutWeaponsUI_C_ExecuteUbergraph_LoadoutWeaponsUI, K2Node_Event_ItemInfo) == 0x000020, "Member 'LoadoutWeaponsUI_C_ExecuteUbergraph_LoadoutWeaponsUI::K2Node_Event_ItemInfo' has a wrong offset!");
static_assert(offsetof(LoadoutWeaponsUI_C_ExecuteUbergraph_LoadoutWeaponsUI, K2Node_Event_SalePrice) == 0x000028, "Member 'LoadoutWeaponsUI_C_ExecuteUbergraph_LoadoutWeaponsUI::K2Node_Event_SalePrice' has a wrong offset!");

// Function LoadoutWeaponsUI.LoadoutWeaponsUI_C.PreviewItem
// 0x0010 (0x0010 - 0x0000)
struct LoadoutWeaponsUI_C_PreviewItem final
{
public:
	class UClass*                                 ItemInfo;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SalePrice;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoadoutWeaponsUI_C_PreviewItem) == 0x000008, "Wrong alignment on LoadoutWeaponsUI_C_PreviewItem");
static_assert(sizeof(LoadoutWeaponsUI_C_PreviewItem) == 0x000010, "Wrong size on LoadoutWeaponsUI_C_PreviewItem");
static_assert(offsetof(LoadoutWeaponsUI_C_PreviewItem, ItemInfo) == 0x000000, "Member 'LoadoutWeaponsUI_C_PreviewItem::ItemInfo' has a wrong offset!");
static_assert(offsetof(LoadoutWeaponsUI_C_PreviewItem, SalePrice) == 0x000008, "Member 'LoadoutWeaponsUI_C_PreviewItem::SalePrice' has a wrong offset!");

// Function LoadoutWeaponsUI.LoadoutWeaponsUI_C.DragItemFromCategory
// 0x0001 (0x0001 - 0x0000)
struct LoadoutWeaponsUI_C_DragItemFromCategory final
{
public:
	EShopItemCategory                             Category;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoadoutWeaponsUI_C_DragItemFromCategory) == 0x000001, "Wrong alignment on LoadoutWeaponsUI_C_DragItemFromCategory");
static_assert(sizeof(LoadoutWeaponsUI_C_DragItemFromCategory) == 0x000001, "Wrong size on LoadoutWeaponsUI_C_DragItemFromCategory");
static_assert(offsetof(LoadoutWeaponsUI_C_DragItemFromCategory, Category) == 0x000000, "Member 'LoadoutWeaponsUI_C_DragItemFromCategory::Category' has a wrong offset!");

// Function LoadoutWeaponsUI.LoadoutWeaponsUI_C.ChangeCategory
// 0x0001 (0x0001 - 0x0000)
struct LoadoutWeaponsUI_C_ChangeCategory final
{
public:
	EShopItemCategory                             Category;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoadoutWeaponsUI_C_ChangeCategory) == 0x000001, "Wrong alignment on LoadoutWeaponsUI_C_ChangeCategory");
static_assert(sizeof(LoadoutWeaponsUI_C_ChangeCategory) == 0x000001, "Wrong size on LoadoutWeaponsUI_C_ChangeCategory");
static_assert(offsetof(LoadoutWeaponsUI_C_ChangeCategory, Category) == 0x000000, "Member 'LoadoutWeaponsUI_C_ChangeCategory::Category' has a wrong offset!");

}
