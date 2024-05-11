#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_hair_base

#include "Basic.hpp"

#include "NPC_hair_base_classes.hpp"
#include "NPC_hair_base_parameters.hpp"


namespace SDK
{

// Function NPC_hair_base.NPC_hair_base_C.DecideColors
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ANPC_hair_base_C::DecideColors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_hair_base_C", "DecideColors");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_hair_base.NPC_hair_base_C.ApplyClothing
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ANPC_hair_base_C::ApplyClothing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_hair_base_C", "ApplyClothing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_hair_base.NPC_hair_base_C.ExecuteUbergraph_NPC_hair_base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_hair_base_C::ExecuteUbergraph_NPC_hair_base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_hair_base_C", "ExecuteUbergraph_NPC_hair_base");

	Params::NPC_hair_base_C_ExecuteUbergraph_NPC_hair_base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

