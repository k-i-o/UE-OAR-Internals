#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeistCoins_Popup

#include "Basic.hpp"

#include "HeistCoins_Popup_classes.hpp"
#include "HeistCoins_Popup_parameters.hpp"


namespace SDK
{

// Function HeistCoins_Popup.HeistCoins_Popup_C.ExecuteUbergraph_HeistCoins_Popup
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeistCoins_Popup_C::ExecuteUbergraph_HeistCoins_Popup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeistCoins_Popup_C", "ExecuteUbergraph_HeistCoins_Popup");

	Params::HeistCoins_Popup_C_ExecuteUbergraph_HeistCoins_Popup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeistCoins_Popup.HeistCoins_Popup_C.BndEvt__HeistCoins_Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHeistCoins_Popup_C::BndEvt__HeistCoins_Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeistCoins_Popup_C", "BndEvt__HeistCoins_Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeistCoins_Popup.HeistCoins_Popup_C.GetText_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UHeistCoins_Popup_C::GetText_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeistCoins_Popup_C", "GetText_0");

	Params::HeistCoins_Popup_C_GetText_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function HeistCoins_Popup.HeistCoins_Popup_C.GetBrush_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateBrush UHeistCoins_Popup_C::GetBrush_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeistCoins_Popup_C", "GetBrush_0");

	Params::HeistCoins_Popup_C_GetBrush_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

