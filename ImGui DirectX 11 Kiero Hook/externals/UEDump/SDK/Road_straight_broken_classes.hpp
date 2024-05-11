#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Road_straight_broken

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Road_straight_broken.Road_straight_broken_C
// 0x00B0 (0x02D0 - 0x0220)
class ARoad_straight_broken_C final : public AActor
{
public:
	class UStaticMeshComponent*                   StaticMesh6;                                       // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh5;                                       // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh4;                                       // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight;                                         // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StreetLight;                                       // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh15;                                      // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh14;                                      // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh13;                                      // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh12;                                      // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh11;                                      // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh10;                                      // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh9;                                       // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh8;                                       // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh7;                                       // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SidewalkLeft4;                                     // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SidewalkLeft2;                                     // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh3;                                       // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh2;                                       // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SidewalkLeft1;                                     // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Light;                                             // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Road_straight_broken_C">();
	}
	static class ARoad_straight_broken_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARoad_straight_broken_C>();
	}
};
static_assert(alignof(ARoad_straight_broken_C) == 0x000008, "Wrong alignment on ARoad_straight_broken_C");
static_assert(sizeof(ARoad_straight_broken_C) == 0x0002D0, "Wrong size on ARoad_straight_broken_C");
static_assert(offsetof(ARoad_straight_broken_C, StaticMesh6) == 0x000220, "Member 'ARoad_straight_broken_C::StaticMesh6' has a wrong offset!");
static_assert(offsetof(ARoad_straight_broken_C, StaticMesh5) == 0x000228, "Member 'ARoad_straight_broken_C::StaticMesh5' has a wrong offset!");
static_assert(offsetof(ARoad_straight_broken_C, StaticMesh4) == 0x000230, "Member 'ARoad_straight_broken_C::StaticMesh4' has a wrong offset!");
static_assert(offsetof(ARoad_straight_broken_C, SpotLight) == 0x000238, "Member 'ARoad_straight_broken_C::SpotLight' has a wrong offset!");
static_assert(offsetof(ARoad_straight_broken_C, StreetLight) == 0x000240, "Member 'ARoad_straight_broken_C::StreetLight' has a wrong offset!");
static_assert(offsetof(ARoad_straight_broken_C, StaticMesh15) == 0x000248, "Member 'ARoad_straight_broken_C::StaticMesh15' has a wrong offset!");
static_assert(offsetof(ARoad_straight_broken_C, StaticMesh14) == 0x000250, "Member 'ARoad_straight_broken_C::StaticMesh14' has a wrong offset!");
static_assert(offsetof(ARoad_straight_broken_C, StaticMesh13) == 0x000258, "Member 'ARoad_straight_broken_C::StaticMesh13' has a wrong offset!");
static_assert(offsetof(ARoad_straight_broken_C, StaticMesh12) == 0x000260, "Member 'ARoad_straight_broken_C::StaticMesh12' has a wrong offset!");
static_assert(offsetof(ARoad_straight_broken_C, StaticMesh11) == 0x000268, "Member 'ARoad_straight_broken_C::StaticMesh11' has a wrong offset!");
static_assert(offsetof(ARoad_straight_broken_C, StaticMesh10) == 0x000270, "Member 'ARoad_straight_broken_C::StaticMesh10' has a wrong offset!");
static_assert(offsetof(ARoad_straight_broken_C, StaticMesh9) == 0x000278, "Member 'ARoad_straight_broken_C::StaticMesh9' has a wrong offset!");
static_assert(offsetof(ARoad_straight_broken_C, StaticMesh8) == 0x000280, "Member 'ARoad_straight_broken_C::StaticMesh8' has a wrong offset!");
static_assert(offsetof(ARoad_straight_broken_C, StaticMesh7) == 0x000288, "Member 'ARoad_straight_broken_C::StaticMesh7' has a wrong offset!");
static_assert(offsetof(ARoad_straight_broken_C, SidewalkLeft4) == 0x000290, "Member 'ARoad_straight_broken_C::SidewalkLeft4' has a wrong offset!");
static_assert(offsetof(ARoad_straight_broken_C, SidewalkLeft2) == 0x000298, "Member 'ARoad_straight_broken_C::SidewalkLeft2' has a wrong offset!");
static_assert(offsetof(ARoad_straight_broken_C, StaticMesh3) == 0x0002A0, "Member 'ARoad_straight_broken_C::StaticMesh3' has a wrong offset!");
static_assert(offsetof(ARoad_straight_broken_C, StaticMesh2) == 0x0002A8, "Member 'ARoad_straight_broken_C::StaticMesh2' has a wrong offset!");
static_assert(offsetof(ARoad_straight_broken_C, StaticMesh1) == 0x0002B0, "Member 'ARoad_straight_broken_C::StaticMesh1' has a wrong offset!");
static_assert(offsetof(ARoad_straight_broken_C, SidewalkLeft1) == 0x0002B8, "Member 'ARoad_straight_broken_C::SidewalkLeft1' has a wrong offset!");
static_assert(offsetof(ARoad_straight_broken_C, DefaultSceneRoot) == 0x0002C0, "Member 'ARoad_straight_broken_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ARoad_straight_broken_C, Light) == 0x0002C8, "Member 'ARoad_straight_broken_C::Light' has a wrong offset!");

}
