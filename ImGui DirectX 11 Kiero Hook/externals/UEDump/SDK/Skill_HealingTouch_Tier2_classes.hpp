#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_HealingTouch_Tier2

#include "Basic.hpp"

#include "Skill_HealingTouch_Tier1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_HealingTouch_Tier2.Skill_HealingTouch_Tier2_C
// 0x0000 (0x00E0 - 0x00E0)
class USkill_HealingTouch_Tier2_C final : public USkill_HealingTouch_Tier1_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_HealingTouch_Tier2_C">();
	}
	static class USkill_HealingTouch_Tier2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_HealingTouch_Tier2_C>();
	}
};
static_assert(alignof(USkill_HealingTouch_Tier2_C) == 0x000008, "Wrong alignment on USkill_HealingTouch_Tier2_C");
static_assert(sizeof(USkill_HealingTouch_Tier2_C) == 0x0000E0, "Wrong size on USkill_HealingTouch_Tier2_C");

}

