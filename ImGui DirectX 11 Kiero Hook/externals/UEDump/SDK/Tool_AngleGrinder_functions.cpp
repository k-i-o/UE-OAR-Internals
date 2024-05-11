#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tool_AngleGrinder

#include "Basic.hpp"

#include "Tool_AngleGrinder_classes.hpp"
#include "Tool_AngleGrinder_parameters.hpp"


namespace SDK
{

// Function Tool_AngleGrinder.Tool_AngleGrinder_C.ExecuteUbergraph_Tool_AngleGrinder
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATool_AngleGrinder_C::ExecuteUbergraph_Tool_AngleGrinder(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tool_AngleGrinder_C", "ExecuteUbergraph_Tool_AngleGrinder");

	Params::Tool_AngleGrinder_C_ExecuteUbergraph_Tool_AngleGrinder Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Tool_AngleGrinder.Tool_AngleGrinder_C.BndEvt__DrillBP_ToolComponent_K2Node_ComponentBoundEvent_1_DeactivateTool__DelegateSignature
// (BlueprintEvent)

void ATool_AngleGrinder_C::BndEvt__DrillBP_ToolComponent_K2Node_ComponentBoundEvent_1_DeactivateTool__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tool_AngleGrinder_C", "BndEvt__DrillBP_ToolComponent_K2Node_ComponentBoundEvent_1_DeactivateTool__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Tool_AngleGrinder.Tool_AngleGrinder_C.BndEvt__DrillBP_ToolComponent_K2Node_ComponentBoundEvent_0_ActivateTool__DelegateSignature
// (BlueprintEvent)

void ATool_AngleGrinder_C::BndEvt__DrillBP_ToolComponent_K2Node_ComponentBoundEvent_0_ActivateTool__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tool_AngleGrinder_C", "BndEvt__DrillBP_ToolComponent_K2Node_ComponentBoundEvent_0_ActivateTool__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Tool_AngleGrinder.Tool_AngleGrinder_C.DeactivateDrill
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ATool_AngleGrinder_C::DeactivateDrill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tool_AngleGrinder_C", "DeactivateDrill");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Tool_AngleGrinder.Tool_AngleGrinder_C.ActivateDrill
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ATool_AngleGrinder_C::ActivateDrill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tool_AngleGrinder_C", "ActivateDrill");

	UObject::ProcessEvent(Func, nullptr);
}

}

