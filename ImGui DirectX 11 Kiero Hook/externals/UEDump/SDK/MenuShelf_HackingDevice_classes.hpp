#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MenuShelf_HackingDevice

#include "Basic.hpp"

#include "MenuShelf_base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MenuShelf_HackingDevice.MenuShelf_HackingDevice_C
// 0x0008 (0x0240 - 0x0238)
class AMenuShelf_HackingDevice_C final : public AMenuShelf_base_C
{
public:
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MenuShelf_HackingDevice_C">();
	}
	static class AMenuShelf_HackingDevice_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMenuShelf_HackingDevice_C>();
	}
};
static_assert(alignof(AMenuShelf_HackingDevice_C) == 0x000008, "Wrong alignment on AMenuShelf_HackingDevice_C");
static_assert(sizeof(AMenuShelf_HackingDevice_C) == 0x000240, "Wrong size on AMenuShelf_HackingDevice_C");
static_assert(offsetof(AMenuShelf_HackingDevice_C, StaticMesh1) == 0x000238, "Member 'AMenuShelf_HackingDevice_C::StaticMesh1' has a wrong offset!");

}
