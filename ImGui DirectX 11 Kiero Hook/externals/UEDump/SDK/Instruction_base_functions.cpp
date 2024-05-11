#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Instruction_base

#include "Basic.hpp"

#include "Instruction_base_classes.hpp"
#include "Instruction_base_parameters.hpp"


namespace SDK
{

// Function Instruction_base.Instruction_base_C.ExecuteUbergraph_Instruction_base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInstruction_base_C::ExecuteUbergraph_Instruction_base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Instruction_base_C", "ExecuteUbergraph_Instruction_base");

	Params::Instruction_base_C_ExecuteUbergraph_Instruction_base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Instruction_base.Instruction_base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AInstruction_base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Instruction_base_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Instruction_base.Instruction_base_C.AnnounceNewInstructionWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Title                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AInstruction_base_C::AnnounceNewInstructionWidget(const class FString& Title)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Instruction_base_C", "AnnounceNewInstructionWidget");

	Params::Instruction_base_C_AnnounceNewInstructionWidget Parms{};

	Parms.Title = std::move(Title);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Instruction_base.Instruction_base_C.OverrideInstruction
// (Public, BlueprintCallable, BlueprintEvent)

void AInstruction_base_C::OverrideInstruction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Instruction_base_C", "OverrideInstruction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Instruction_base.Instruction_base_C.NewInstruction
// (Public, BlueprintCallable, BlueprintEvent)

void AInstruction_base_C::NewInstruction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Instruction_base_C", "NewInstruction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Instruction_base.Instruction_base_C.Next Instruction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CompletedInstruction                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NextInstrFound_                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AInstruction_base_C::Next_Instruction(int32 CompletedInstruction, bool* NextInstrFound_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Instruction_base_C", "Next Instruction");

	Params::Instruction_base_C_Next_Instruction Parms{};

	Parms.CompletedInstruction = CompletedInstruction;

	UObject::ProcessEvent(Func, &Parms);

	if (NextInstrFound_ != nullptr)
		*NextInstrFound_ = Parms.NextInstrFound_;
}


// Function Instruction_base.Instruction_base_C.SetInstruction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInstruction_base_C::SetInstruction(int32 ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Instruction_base_C", "SetInstruction");

	Params::Instruction_base_C_SetInstruction Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Instruction_base.Instruction_base_C.CompleteInstruction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInstruction_base_C::CompleteInstruction(int32 ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Instruction_base_C", "CompleteInstruction");

	Params::Instruction_base_C_CompleteInstruction Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Instruction_base.Instruction_base_C.Announce Instruction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Title                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AInstruction_base_C::Announce_Instruction(const class FString& Title)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Instruction_base_C", "Announce Instruction");

	Params::Instruction_base_C_Announce_Instruction Parms{};

	Parms.Title = std::move(Title);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Instruction_base.Instruction_base_C.GetCurrentInstruction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInstructionStruct               Instruction                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void AInstruction_base_C::GetCurrentInstruction(struct FInstructionStruct* Instruction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Instruction_base_C", "GetCurrentInstruction");

	Params::Instruction_base_C_GetCurrentInstruction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Instruction != nullptr)
		*Instruction = std::move(Parms.Instruction);
}

}

