#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Shop_SkillBase

#include "Basic.hpp"

#include "ShopItem_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Shop_SkillBase.Shop_SkillBase_C
// 0x0018 (0x0288 - 0x0270)
class AShop_SkillBase_C : public AShopItem_Base_C
{
public:
	TArray<class UClass*>                         SkillComponent;                                    // 0x0270(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         RequiredProgress;                                  // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Shop_SkillBase_C">();
	}
	static class AShop_SkillBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AShop_SkillBase_C>();
	}
};
static_assert(alignof(AShop_SkillBase_C) == 0x000008, "Wrong alignment on AShop_SkillBase_C");
static_assert(sizeof(AShop_SkillBase_C) == 0x000288, "Wrong size on AShop_SkillBase_C");
static_assert(offsetof(AShop_SkillBase_C, SkillComponent) == 0x000270, "Member 'AShop_SkillBase_C::SkillComponent' has a wrong offset!");
static_assert(offsetof(AShop_SkillBase_C, RequiredProgress) == 0x000280, "Member 'AShop_SkillBase_C::RequiredProgress' has a wrong offset!");

}

