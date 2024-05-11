#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Window_Openable

#include "Basic.hpp"

#include "Window_Openable_classes.hpp"
#include "Window_Openable_parameters.hpp"


namespace SDK
{

// Function Window_Openable.Window_Openable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWindow_Openable_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Window_Openable_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Window_Openable.Window_Openable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWindow_Openable_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Window_Openable_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Window_Openable.Window_Openable_C.BreakWindow
// (BlueprintCallable, BlueprintEvent)

void AWindow_Openable_C::BreakWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Window_Openable_C", "BreakWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Window_Openable.Window_Openable_C.BndEvt__Window_Openable_InteractComponent_K2Node_ComponentBoundEvent_0_Interact__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                           Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWindow_Openable_C::BndEvt__Window_Openable_InteractComponent_K2Node_ComponentBoundEvent_0_Interact__DelegateSignature(class AActor* Player, class UPrimitiveComponent* HitComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Window_Openable_C", "BndEvt__Window_Openable_InteractComponent_K2Node_ComponentBoundEvent_0_Interact__DelegateSignature");

	Params::Window_Openable_C_BndEvt__Window_Openable_InteractComponent_K2Node_ComponentBoundEvent_0_Interact__DelegateSignature Parms{};

	Parms.Player = Player;
	Parms.HitComponent = HitComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Window_Openable.Window_Openable_C.OpenWindowServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AWindow_Openable_C::OpenWindowServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Window_Openable_C", "OpenWindowServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Window_Openable.Window_Openable_C.OpenWindowMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Open_                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWindow_Openable_C::OpenWindowMulti(bool Param_Open_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Window_Openable_C", "OpenWindowMulti");

	Params::Window_Openable_C_OpenWindowMulti Parms{};

	Parms.Param_Open_ = Param_Open_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Window_Openable.Window_Openable_C.BndEvt__Window_Openable_DamageComponent_K2Node_ComponentBoundEvent_1_Damage__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Bone                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          StartLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Param_Instigator                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWindow_Openable_C::BndEvt__Window_Openable_DamageComponent_K2Node_ComponentBoundEvent_1_Damage__DelegateSignature(int32 Amount, class FName Bone, const struct FVector& HitLocation, const struct FVector& StartLocation, class AActor* Param_Instigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Window_Openable_C", "BndEvt__Window_Openable_DamageComponent_K2Node_ComponentBoundEvent_1_Damage__DelegateSignature");

	Params::Window_Openable_C_BndEvt__Window_Openable_DamageComponent_K2Node_ComponentBoundEvent_1_Damage__DelegateSignature Parms{};

	Parms.Amount = Amount;
	Parms.Bone = Bone;
	Parms.HitLocation = std::move(HitLocation);
	Parms.StartLocation = std::move(StartLocation);
	Parms.Param_Instigator = Param_Instigator;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Window_Openable.Window_Openable_C.TopBreak
// (BlueprintCallable, BlueprintEvent)

void AWindow_Openable_C::TopBreak()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Window_Openable_C", "TopBreak");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Window_Openable.Window_Openable_C.BottomBreakMulti
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AWindow_Openable_C::BottomBreakMulti()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Window_Openable_C", "BottomBreakMulti");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Window_Openable.Window_Openable_C.TopBreakMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AWindow_Openable_C::TopBreakMulti()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Window_Openable_C", "TopBreakMulti");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Window_Openable.Window_Openable_C.BreakGlass
// (Public, BlueprintCallable, BlueprintEvent)

void AWindow_Openable_C::BreakGlass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Window_Openable_C", "BreakGlass");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Window_Openable.Window_Openable_C.ExecuteUbergraph_Window_Openable
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWindow_Openable_C::ExecuteUbergraph_Window_Openable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Window_Openable_C", "ExecuteUbergraph_Window_Openable");

	Params::Window_Openable_C_ExecuteUbergraph_Window_Openable Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
