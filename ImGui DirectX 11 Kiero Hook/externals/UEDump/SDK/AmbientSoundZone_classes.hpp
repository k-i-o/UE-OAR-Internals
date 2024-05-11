#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AmbientSoundZone

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AmbientSoundStruct_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AmbientSoundZone.AmbientSoundZone_C
// 0x0048 (0x0268 - 0x0220)
class AAmbientSoundZone_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAmbientSoundStruct>            Sounds;                                            // 0x0238(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x0248(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class AAmbienceSoundController_C*             AmbienceSoundController;                           // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AlarmTriggered_;                                   // 0x0260(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_AmbientSoundZone(int32 EntryPoint);
	void AlarmTriggeredInterfaceCall();
	void StopSoundsOnAlarm();
	void StopAllSounds(class APlayerCharacter_C* Player);
	void SpawnSounds(class APlayerCharacter_C* Player);
	void BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveBeginPlay();
	void AlarmDisabledInterfaceCall();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AmbientSoundZone_C">();
	}
	static class AAmbientSoundZone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAmbientSoundZone_C>();
	}
};
static_assert(alignof(AAmbientSoundZone_C) == 0x000008, "Wrong alignment on AAmbientSoundZone_C");
static_assert(sizeof(AAmbientSoundZone_C) == 0x000268, "Wrong size on AAmbientSoundZone_C");
static_assert(offsetof(AAmbientSoundZone_C, UberGraphFrame) == 0x000220, "Member 'AAmbientSoundZone_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAmbientSoundZone_C, Box) == 0x000228, "Member 'AAmbientSoundZone_C::Box' has a wrong offset!");
static_assert(offsetof(AAmbientSoundZone_C, DefaultSceneRoot) == 0x000230, "Member 'AAmbientSoundZone_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AAmbientSoundZone_C, Sounds) == 0x000238, "Member 'AAmbientSoundZone_C::Sounds' has a wrong offset!");
static_assert(offsetof(AAmbientSoundZone_C, AudioComponents) == 0x000248, "Member 'AAmbientSoundZone_C::AudioComponents' has a wrong offset!");
static_assert(offsetof(AAmbientSoundZone_C, AmbienceSoundController) == 0x000258, "Member 'AAmbientSoundZone_C::AmbienceSoundController' has a wrong offset!");
static_assert(offsetof(AAmbientSoundZone_C, AlarmTriggered_) == 0x000260, "Member 'AAmbientSoundZone_C::AlarmTriggered_' has a wrong offset!");

}

