#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Instruction_base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "InstructionStruct_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Instruction_base.Instruction_base_C
// 0x0050 (0x0270 - 0x0220)
class AInstruction_base_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInstructionStruct>             Instructions;                                      // 0x0230(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FInstructionStruct                     CurrentInstruction;                                // 0x0240(0x0030)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Instruction_base(int32 EntryPoint);
	void ReceiveBeginPlay();
	void AnnounceNewInstructionWidget(const class FString& Title);
	void OverrideInstruction();
	void NewInstruction();
	void Next_Instruction(int32 CompletedInstruction, bool* NextInstrFound_);
	void SetInstruction(int32 ID);
	void CompleteInstruction(int32 ID);
	void Announce_Instruction(const class FString& Title);
	void GetCurrentInstruction(struct FInstructionStruct* Instruction);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Instruction_base_C">();
	}
	static class AInstruction_base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AInstruction_base_C>();
	}
};
static_assert(alignof(AInstruction_base_C) == 0x000008, "Wrong alignment on AInstruction_base_C");
static_assert(sizeof(AInstruction_base_C) == 0x000270, "Wrong size on AInstruction_base_C");
static_assert(offsetof(AInstruction_base_C, UberGraphFrame) == 0x000220, "Member 'AInstruction_base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AInstruction_base_C, DefaultSceneRoot) == 0x000228, "Member 'AInstruction_base_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AInstruction_base_C, Instructions) == 0x000230, "Member 'AInstruction_base_C::Instructions' has a wrong offset!");
static_assert(offsetof(AInstruction_base_C, CurrentInstruction) == 0x000240, "Member 'AInstruction_base_C::CurrentInstruction' has a wrong offset!");

}

