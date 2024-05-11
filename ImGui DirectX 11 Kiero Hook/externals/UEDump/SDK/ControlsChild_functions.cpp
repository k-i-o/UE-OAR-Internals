#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ControlsChild

#include "Basic.hpp"

#include "ControlsChild_classes.hpp"
#include "ControlsChild_parameters.hpp"


namespace SDK
{

// Function ControlsChild.ControlsChild_C.ExecuteUbergraph_ControlsChild
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UControlsChild_C::ExecuteUbergraph_ControlsChild(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlsChild_C", "ExecuteUbergraph_ControlsChild");

	Params::ControlsChild_C_ExecuteUbergraph_ControlsChild Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ControlsChild.ControlsChild_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UControlsChild_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlsChild_C", "PreConstruct");

	Params::ControlsChild_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ControlsChild.ControlsChild_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UControlsChild_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlsChild_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ControlsChild.ControlsChild_C.BndEvt__ContolsChild_InputKeySelector_133_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                      SelectedKey                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UControlsChild_C::BndEvt__ContolsChild_InputKeySelector_133_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlsChild_C", "BndEvt__ContolsChild_InputKeySelector_133_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature");

	Params::ControlsChild_C_BndEvt__ContolsChild_InputKeySelector_133_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature Parms{};

	Parms.SelectedKey = std::move(SelectedKey);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ControlsChild.ControlsChild_C.UpdateBinding
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputChord                      InputChord                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UControlsChild_C::UpdateBinding(const struct FInputChord& InputChord)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlsChild_C", "UpdateBinding");

	Params::ControlsChild_C_UpdateBinding Parms{};

	Parms.InputChord = std::move(InputChord);

	UObject::ProcessEvent(Func, &Parms);
}

}

