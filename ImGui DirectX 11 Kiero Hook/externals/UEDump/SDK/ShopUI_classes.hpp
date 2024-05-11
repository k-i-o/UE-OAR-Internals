#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShopUI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ShopItemCategory_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShopUI.ShopUI_C
// 0x0170 (0x03D0 - 0x0260)
class UShopUI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       SwipeOut;                                          // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       MoveOut;                                           // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Appearence;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                BuyBorder;                                         // 0x0280(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                CashBuyButton;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         CategoryBox;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                CoinBuyButton;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                DescriptionBorder;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                EquipButton;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGunInfoPanel_C*                        GunInfoPanel;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_124;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             InventoryScroll;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               InventoryWrap;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x02D0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_0;                                       // 0x02D8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_3;                                       // 0x02E0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_4;                                       // 0x02E8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_6;                                       // 0x02F0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Tools;                                             // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Weapons;                                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               WrapBox_70;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UClass*>                         PrimaryWeapons;                                    // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                         SecondaryWeapons;                                  // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                         BreachTools;                                       // 0x0330(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                         StealthTools;                                      // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                         OtherTools;                                        // 0x0350(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                         Masks;                                             // 0x0360(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                         Outfits;                                           // 0x0370(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                         Emotes;                                            // 0x0380(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                         Armor;                                             // 0x0390(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ARobberController_C*                    As_Robber_Controller;                              // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 SelectedItem;                                      // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EShopItemCategory                             CurrentCategory;                                   // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_236A[0x7];                                     // 0x03B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EShopItemCategory>                     CurrentCatArray;                                   // 0x03B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         SelectedSalePrice;                                 // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ShopUI(int32 EntryPoint);
	void OpenSkinShop();
	void BndEvt__ShopUI_EquipButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void AddItemsFromCategory(EShopItemCategory Category);
	void UnhighlightAll();
	void HighlightButton(class UButton* Button);
	void RefreshInventory();
	void BndEvt__ShopUI_CoinBuyButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ShopUI_CashBuyButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void PreviewItem(class UClass* ItemInfo, int32 SalePrice);
	void ChangeCategory(EShopItemCategory Category);
	void ShowGuns();
	void BndEvt__ShopUI_Appearence_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ShopUI_Tools_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ShopUI_Weapons_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void AddCategories(const TArray<EShopItemCategory>& Categories);
	void Remove();
	void Construct();
	void CancelDrag();
	void DragItemFromCategory(EShopItemCategory Category);
	void RemoveloadoutCategory();
	class FText GetText_0();
	class FText GetText_1();
	ESlateVisibility Get_DescriptionBorder_Visibility_0();
	ESlateVisibility CoinCostVisibile();
	ESlateVisibility CashCostVisible();
	ESlateVisibility GetVisibility_0();
	class FText GetText_2();
	class FText GetText_3();
	struct FSlateColor GetColorAndOpacity_0();
	class FText GetText_4();
	void GetShopItemsFromCategoryFunc(EShopItemCategory Category, TArray<class UClass*>* Items);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShopUI_C">();
	}
	static class UShopUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShopUI_C>();
	}
};
static_assert(alignof(UShopUI_C) == 0x000008, "Wrong alignment on UShopUI_C");
static_assert(sizeof(UShopUI_C) == 0x0003D0, "Wrong size on UShopUI_C");
static_assert(offsetof(UShopUI_C, UberGraphFrame) == 0x000260, "Member 'UShopUI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShopUI_C, SwipeOut) == 0x000268, "Member 'UShopUI_C::SwipeOut' has a wrong offset!");
static_assert(offsetof(UShopUI_C, MoveOut) == 0x000270, "Member 'UShopUI_C::MoveOut' has a wrong offset!");
static_assert(offsetof(UShopUI_C, Appearence) == 0x000278, "Member 'UShopUI_C::Appearence' has a wrong offset!");
static_assert(offsetof(UShopUI_C, BuyBorder) == 0x000280, "Member 'UShopUI_C::BuyBorder' has a wrong offset!");
static_assert(offsetof(UShopUI_C, CashBuyButton) == 0x000288, "Member 'UShopUI_C::CashBuyButton' has a wrong offset!");
static_assert(offsetof(UShopUI_C, CategoryBox) == 0x000290, "Member 'UShopUI_C::CategoryBox' has a wrong offset!");
static_assert(offsetof(UShopUI_C, CoinBuyButton) == 0x000298, "Member 'UShopUI_C::CoinBuyButton' has a wrong offset!");
static_assert(offsetof(UShopUI_C, DescriptionBorder) == 0x0002A0, "Member 'UShopUI_C::DescriptionBorder' has a wrong offset!");
static_assert(offsetof(UShopUI_C, EquipButton) == 0x0002A8, "Member 'UShopUI_C::EquipButton' has a wrong offset!");
static_assert(offsetof(UShopUI_C, GunInfoPanel) == 0x0002B0, "Member 'UShopUI_C::GunInfoPanel' has a wrong offset!");
static_assert(offsetof(UShopUI_C, Image_124) == 0x0002B8, "Member 'UShopUI_C::Image_124' has a wrong offset!");
static_assert(offsetof(UShopUI_C, InventoryScroll) == 0x0002C0, "Member 'UShopUI_C::InventoryScroll' has a wrong offset!");
static_assert(offsetof(UShopUI_C, InventoryWrap) == 0x0002C8, "Member 'UShopUI_C::InventoryWrap' has a wrong offset!");
static_assert(offsetof(UShopUI_C, TextBlock) == 0x0002D0, "Member 'UShopUI_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UShopUI_C, TextBlock_0) == 0x0002D8, "Member 'UShopUI_C::TextBlock_0' has a wrong offset!");
static_assert(offsetof(UShopUI_C, TextBlock_3) == 0x0002E0, "Member 'UShopUI_C::TextBlock_3' has a wrong offset!");
static_assert(offsetof(UShopUI_C, TextBlock_4) == 0x0002E8, "Member 'UShopUI_C::TextBlock_4' has a wrong offset!");
static_assert(offsetof(UShopUI_C, TextBlock_6) == 0x0002F0, "Member 'UShopUI_C::TextBlock_6' has a wrong offset!");
static_assert(offsetof(UShopUI_C, Tools) == 0x0002F8, "Member 'UShopUI_C::Tools' has a wrong offset!");
static_assert(offsetof(UShopUI_C, Weapons) == 0x000300, "Member 'UShopUI_C::Weapons' has a wrong offset!");
static_assert(offsetof(UShopUI_C, WrapBox_70) == 0x000308, "Member 'UShopUI_C::WrapBox_70' has a wrong offset!");
static_assert(offsetof(UShopUI_C, PrimaryWeapons) == 0x000310, "Member 'UShopUI_C::PrimaryWeapons' has a wrong offset!");
static_assert(offsetof(UShopUI_C, SecondaryWeapons) == 0x000320, "Member 'UShopUI_C::SecondaryWeapons' has a wrong offset!");
static_assert(offsetof(UShopUI_C, BreachTools) == 0x000330, "Member 'UShopUI_C::BreachTools' has a wrong offset!");
static_assert(offsetof(UShopUI_C, StealthTools) == 0x000340, "Member 'UShopUI_C::StealthTools' has a wrong offset!");
static_assert(offsetof(UShopUI_C, OtherTools) == 0x000350, "Member 'UShopUI_C::OtherTools' has a wrong offset!");
static_assert(offsetof(UShopUI_C, Masks) == 0x000360, "Member 'UShopUI_C::Masks' has a wrong offset!");
static_assert(offsetof(UShopUI_C, Outfits) == 0x000370, "Member 'UShopUI_C::Outfits' has a wrong offset!");
static_assert(offsetof(UShopUI_C, Emotes) == 0x000380, "Member 'UShopUI_C::Emotes' has a wrong offset!");
static_assert(offsetof(UShopUI_C, Armor) == 0x000390, "Member 'UShopUI_C::Armor' has a wrong offset!");
static_assert(offsetof(UShopUI_C, As_Robber_Controller) == 0x0003A0, "Member 'UShopUI_C::As_Robber_Controller' has a wrong offset!");
static_assert(offsetof(UShopUI_C, SelectedItem) == 0x0003A8, "Member 'UShopUI_C::SelectedItem' has a wrong offset!");
static_assert(offsetof(UShopUI_C, CurrentCategory) == 0x0003B0, "Member 'UShopUI_C::CurrentCategory' has a wrong offset!");
static_assert(offsetof(UShopUI_C, CurrentCatArray) == 0x0003B8, "Member 'UShopUI_C::CurrentCatArray' has a wrong offset!");
static_assert(offsetof(UShopUI_C, SelectedSalePrice) == 0x0003C8, "Member 'UShopUI_C::SelectedSalePrice' has a wrong offset!");

}

