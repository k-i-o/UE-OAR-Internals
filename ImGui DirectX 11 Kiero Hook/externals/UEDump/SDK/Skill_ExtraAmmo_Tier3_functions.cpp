#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_ExtraAmmo_Tier3

#include "Basic.hpp"

#include "Skill_ExtraAmmo_Tier3_classes.hpp"
#include "Skill_ExtraAmmo_Tier3_parameters.hpp"


namespace SDK
{

// Function Skill_ExtraAmmo_Tier3.Skill_ExtraAmmo_Tier3_C.ExecuteUbergraph_Skill_ExtraAmmo_Tier3
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_ExtraAmmo_Tier3_C::ExecuteUbergraph_Skill_ExtraAmmo_Tier3(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_ExtraAmmo_Tier3_C", "ExecuteUbergraph_Skill_ExtraAmmo_Tier3");

	Params::Skill_ExtraAmmo_Tier3_C_ExecuteUbergraph_Skill_ExtraAmmo_Tier3 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_ExtraAmmo_Tier3.Skill_ExtraAmmo_Tier3_C.SetupSkill
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void USkill_ExtraAmmo_Tier3_C::SetupSkill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_ExtraAmmo_Tier3_C", "SetupSkill");

	UObject::ProcessEvent(Func, nullptr);
}

}

