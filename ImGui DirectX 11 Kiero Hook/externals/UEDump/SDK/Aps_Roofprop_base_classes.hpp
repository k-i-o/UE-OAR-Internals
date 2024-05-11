#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Aps_Roofprop_base

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Aps_Roofprop_base.Aps_Roofprop_base_C
// 0x0010 (0x0230 - 0x0220)
class AAps_Roofprop_base_C : public AActor
{
public:
	class UStaticMeshComponent*                   HiddenRoof;                                        // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Aps_Roofprop_base_C">();
	}
	static class AAps_Roofprop_base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAps_Roofprop_base_C>();
	}
};
static_assert(alignof(AAps_Roofprop_base_C) == 0x000008, "Wrong alignment on AAps_Roofprop_base_C");
static_assert(sizeof(AAps_Roofprop_base_C) == 0x000230, "Wrong size on AAps_Roofprop_base_C");
static_assert(offsetof(AAps_Roofprop_base_C, HiddenRoof) == 0x000220, "Member 'AAps_Roofprop_base_C::HiddenRoof' has a wrong offset!");
static_assert(offsetof(AAps_Roofprop_base_C, DefaultSceneRoot) == 0x000228, "Member 'AAps_Roofprop_base_C::DefaultSceneRoot' has a wrong offset!");

}

