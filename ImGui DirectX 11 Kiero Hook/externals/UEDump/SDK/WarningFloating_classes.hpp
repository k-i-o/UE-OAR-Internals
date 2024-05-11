#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WarningFloating

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WarningFloating.WarningFloating_C
// 0x0030 (0x0290 - 0x0260)
class UWarningFloating_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_52;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AActor*                                 Actor;                                             // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Time;                                              // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_1ECD[0x4];                                     // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    Component;                                         // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Question_;                                         // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_WarningFloating(int32 EntryPoint);
	void Construct();
	struct FSlateBrush GetBrush_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WarningFloating_C">();
	}
	static class UWarningFloating_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWarningFloating_C>();
	}
};
static_assert(alignof(UWarningFloating_C) == 0x000008, "Wrong alignment on UWarningFloating_C");
static_assert(sizeof(UWarningFloating_C) == 0x000290, "Wrong size on UWarningFloating_C");
static_assert(offsetof(UWarningFloating_C, UberGraphFrame) == 0x000260, "Member 'UWarningFloating_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWarningFloating_C, Image_52) == 0x000268, "Member 'UWarningFloating_C::Image_52' has a wrong offset!");
static_assert(offsetof(UWarningFloating_C, Actor) == 0x000270, "Member 'UWarningFloating_C::Actor' has a wrong offset!");
static_assert(offsetof(UWarningFloating_C, Time) == 0x000278, "Member 'UWarningFloating_C::Time' has a wrong offset!");
static_assert(offsetof(UWarningFloating_C, Component) == 0x000280, "Member 'UWarningFloating_C::Component' has a wrong offset!");
static_assert(offsetof(UWarningFloating_C, Question_) == 0x000288, "Member 'UWarningFloating_C::Question_' has a wrong offset!");

}

