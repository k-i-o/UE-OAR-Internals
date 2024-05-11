#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BreakableGlass

#include "Basic.hpp"

#include "BreakableGlass_classes.hpp"
#include "BreakableGlass_parameters.hpp"


namespace SDK
{

// Function BreakableGlass.BreakableGlass_C.GlassDestroyed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABreakableGlass_C::GlassDestroyed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BreakableGlass_C", "GlassDestroyed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BreakableGlass.BreakableGlass_C.ExecuteUbergraph_BreakableGlass
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABreakableGlass_C::ExecuteUbergraph_BreakableGlass(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BreakableGlass_C", "ExecuteUbergraph_BreakableGlass");

	Params::BreakableGlass_C_ExecuteUbergraph_BreakableGlass Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BreakableGlass.BreakableGlass_C.BreakGlass
// (Public, BlueprintCallable, BlueprintEvent)

void ABreakableGlass_C::BreakGlass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BreakableGlass_C", "BreakGlass");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BreakableGlass.BreakableGlass_C.ForceDestroyGlass
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABreakableGlass_C::ForceDestroyGlass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BreakableGlass_C", "ForceDestroyGlass");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BreakableGlass.BreakableGlass_C.DamageGlass
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABreakableGlass_C::DamageGlass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BreakableGlass_C", "DamageGlass");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BreakableGlass.BreakableGlass_C.BndEvt__BreakableGlass_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Bone                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          StartLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Param_Instigator                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABreakableGlass_C::BndEvt__BreakableGlass_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature(int32 Amount, class FName Bone, const struct FVector& HitLocation, const struct FVector& StartLocation, class AActor* Param_Instigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BreakableGlass_C", "BndEvt__BreakableGlass_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature");

	Params::BreakableGlass_C_BndEvt__BreakableGlass_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature Parms{};

	Parms.Amount = Amount;
	Parms.Bone = Bone;
	Parms.HitLocation = std::move(HitLocation);
	Parms.StartLocation = std::move(StartLocation);
	Parms.Param_Instigator = Param_Instigator;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BreakableGlass.BreakableGlass_C.SetShatteredMat
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABreakableGlass_C::SetShatteredMat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BreakableGlass_C", "SetShatteredMat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BreakableGlass.BreakableGlass_C.DestroyGlassServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABreakableGlass_C::DestroyGlassServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BreakableGlass_C", "DestroyGlassServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BreakableGlass.BreakableGlass_C.DestroyGlass
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABreakableGlass_C::DestroyGlass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BreakableGlass_C", "DestroyGlass");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BreakableGlass.BreakableGlass_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABreakableGlass_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BreakableGlass_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

