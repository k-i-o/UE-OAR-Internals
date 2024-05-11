#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tool_StickyDrill

#include "Basic.hpp"

#include "Tool_StickyDrill_classes.hpp"
#include "Tool_StickyDrill_parameters.hpp"


namespace SDK
{

// Function Tool_StickyDrill.Tool_StickyDrill_C.ExecuteUbergraph_Tool_StickyDrill
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATool_StickyDrill_C::ExecuteUbergraph_Tool_StickyDrill(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tool_StickyDrill_C", "ExecuteUbergraph_Tool_StickyDrill");

	Params::Tool_StickyDrill_C_ExecuteUbergraph_Tool_StickyDrill Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Tool_StickyDrill.Tool_StickyDrill_C.BndEvt__DrillBP_ToolComponent_K2Node_ComponentBoundEvent_1_DeactivateTool__DelegateSignature
// (BlueprintEvent)

void ATool_StickyDrill_C::BndEvt__DrillBP_ToolComponent_K2Node_ComponentBoundEvent_1_DeactivateTool__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tool_StickyDrill_C", "BndEvt__DrillBP_ToolComponent_K2Node_ComponentBoundEvent_1_DeactivateTool__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Tool_StickyDrill.Tool_StickyDrill_C.BndEvt__DrillBP_ToolComponent_K2Node_ComponentBoundEvent_0_ActivateTool__DelegateSignature
// (BlueprintEvent)

void ATool_StickyDrill_C::BndEvt__DrillBP_ToolComponent_K2Node_ComponentBoundEvent_0_ActivateTool__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tool_StickyDrill_C", "BndEvt__DrillBP_ToolComponent_K2Node_ComponentBoundEvent_0_ActivateTool__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Tool_StickyDrill.Tool_StickyDrill_C.DeactivateDrill
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ATool_StickyDrill_C::DeactivateDrill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tool_StickyDrill_C", "DeactivateDrill");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Tool_StickyDrill.Tool_StickyDrill_C.ActivateDrill
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ATool_StickyDrill_C::ActivateDrill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tool_StickyDrill_C", "ActivateDrill");

	UObject::ProcessEvent(Func, nullptr);
}

}

