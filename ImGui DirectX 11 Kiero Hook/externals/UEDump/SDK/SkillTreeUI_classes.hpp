#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SkillTreeUI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "ShopItemCategory_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SkillTreeUI.SkillTreeUI_C
// 0x0080 (0x02E0 - 0x0260)
class USkillTreeUI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                CategoryButton;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                CategoryButton_1;                                  // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                CategoryButton_2;                                  // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                CategoryButton_3;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         SkillsBox;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 PreviewedSkill;                                    // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                         GunSkills;                                         // 0x0298(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                         SurvivorSkills;                                    // 0x02A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                         BreachSkills;                                      // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                         StealthSkills;                                     // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ARobberController_C*                    As_Robber_Controller;                              // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SkillTreeUI(int32 EntryPoint);
	void BndEvt__SkillTreeUI_CategoryButton_3_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SkillTreeUI_CategoryButton_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SkillTreeUI_CategoryButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SkillTreeUI_CategoryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreviewItem(class UClass* ItemInfo, int32 SalePrice);
	void Remove();
	void Construct();
	void CancelDrag();
	void DragItemFromCategory(EShopItemCategory Category);
	void ChangeCategory(EShopItemCategory Category);
	void RemoveloadoutCategory();
	void RefreshInventory();
	class FText GetText_0();
	class FText GetText_1();
	class FText GetText_2();
	ESlateVisibility Get_PriceBorder_Visibility_0();
	void AddSkillCategory(TArray<class UClass*>& Category);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SkillTreeUI_C">();
	}
	static class USkillTreeUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkillTreeUI_C>();
	}
};
static_assert(alignof(USkillTreeUI_C) == 0x000008, "Wrong alignment on USkillTreeUI_C");
static_assert(sizeof(USkillTreeUI_C) == 0x0002E0, "Wrong size on USkillTreeUI_C");
static_assert(offsetof(USkillTreeUI_C, UberGraphFrame) == 0x000260, "Member 'USkillTreeUI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USkillTreeUI_C, CategoryButton) == 0x000268, "Member 'USkillTreeUI_C::CategoryButton' has a wrong offset!");
static_assert(offsetof(USkillTreeUI_C, CategoryButton_1) == 0x000270, "Member 'USkillTreeUI_C::CategoryButton_1' has a wrong offset!");
static_assert(offsetof(USkillTreeUI_C, CategoryButton_2) == 0x000278, "Member 'USkillTreeUI_C::CategoryButton_2' has a wrong offset!");
static_assert(offsetof(USkillTreeUI_C, CategoryButton_3) == 0x000280, "Member 'USkillTreeUI_C::CategoryButton_3' has a wrong offset!");
static_assert(offsetof(USkillTreeUI_C, SkillsBox) == 0x000288, "Member 'USkillTreeUI_C::SkillsBox' has a wrong offset!");
static_assert(offsetof(USkillTreeUI_C, PreviewedSkill) == 0x000290, "Member 'USkillTreeUI_C::PreviewedSkill' has a wrong offset!");
static_assert(offsetof(USkillTreeUI_C, GunSkills) == 0x000298, "Member 'USkillTreeUI_C::GunSkills' has a wrong offset!");
static_assert(offsetof(USkillTreeUI_C, SurvivorSkills) == 0x0002A8, "Member 'USkillTreeUI_C::SurvivorSkills' has a wrong offset!");
static_assert(offsetof(USkillTreeUI_C, BreachSkills) == 0x0002B8, "Member 'USkillTreeUI_C::BreachSkills' has a wrong offset!");
static_assert(offsetof(USkillTreeUI_C, StealthSkills) == 0x0002C8, "Member 'USkillTreeUI_C::StealthSkills' has a wrong offset!");
static_assert(offsetof(USkillTreeUI_C, As_Robber_Controller) == 0x0002D8, "Member 'USkillTreeUI_C::As_Robber_Controller' has a wrong offset!");

}

