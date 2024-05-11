#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EmoteBPBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EmoteBPBase.EmoteBPBase_C
// 0x0020 (0x0240 - 0x0220)
class AEmoteBPBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EmoteBPBase(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EmoteBPBase_C">();
	}
	static class AEmoteBPBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEmoteBPBase_C>();
	}
};
static_assert(alignof(AEmoteBPBase_C) == 0x000008, "Wrong alignment on AEmoteBPBase_C");
static_assert(sizeof(AEmoteBPBase_C) == 0x000240, "Wrong size on AEmoteBPBase_C");
static_assert(offsetof(AEmoteBPBase_C, UberGraphFrame) == 0x000220, "Member 'AEmoteBPBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AEmoteBPBase_C, SkeletalMesh) == 0x000228, "Member 'AEmoteBPBase_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(AEmoteBPBase_C, DefaultSceneRoot) == 0x000230, "Member 'AEmoteBPBase_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AEmoteBPBase_C, Animation) == 0x000238, "Member 'AEmoteBPBase_C::Animation' has a wrong offset!");

}
