#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HackingPoint

#include "Basic.hpp"

#include "HackingPoint_classes.hpp"
#include "HackingPoint_parameters.hpp"


namespace SDK
{

// Function HackingPoint.HackingPoint_C.ExecuteUbergraph_HackingPoint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHackingPoint_C::ExecuteUbergraph_HackingPoint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HackingPoint_C", "ExecuteUbergraph_HackingPoint");

	Params::HackingPoint_C_ExecuteUbergraph_HackingPoint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HackingPoint.HackingPoint_C.BndEvt__HackingPoint_AlertComponent_K2Node_ComponentBoundEvent_0_OnAlarmtriggered__DelegateSignature
// (BlueprintEvent)

void AHackingPoint_C::BndEvt__HackingPoint_AlertComponent_K2Node_ComponentBoundEvent_0_OnAlarmtriggered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HackingPoint_C", "BndEvt__HackingPoint_AlertComponent_K2Node_ComponentBoundEvent_0_OnAlarmtriggered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HackingPoint.HackingPoint_C.BndEvt__HackingPoint_KeycardOverlapper_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AHackingPoint_C::BndEvt__HackingPoint_KeycardOverlapper_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HackingPoint_C", "BndEvt__HackingPoint_KeycardOverlapper_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::HackingPoint_C_BndEvt__HackingPoint_KeycardOverlapper_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HackingPoint.HackingPoint_C.KeycardLight
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Correct_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHackingPoint_C::KeycardLight(bool Correct_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HackingPoint_C", "KeycardLight");

	Params::HackingPoint_C_KeycardLight Parms{};

	Parms.Correct_ = Correct_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HackingPoint.HackingPoint_C.CheckKeycard
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHackingPoint_C::CheckKeycard(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HackingPoint_C", "CheckKeycard");

	Params::HackingPoint_C_CheckKeycard Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HackingPoint.HackingPoint_C.HackItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AHackingPoint_C::HackItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HackingPoint_C", "HackItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HackingPoint.HackingPoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHackingPoint_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HackingPoint_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

