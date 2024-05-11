#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mask_Pirate

#include "Basic.hpp"

#include "Mask_base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Mask_Pirate.Mask_Pirate_C
// 0x0000 (0x0230 - 0x0230)
class AMask_Pirate_C final : public AMask_base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Mask_Pirate_C">();
	}
	static class AMask_Pirate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMask_Pirate_C>();
	}
};
static_assert(alignof(AMask_Pirate_C) == 0x000008, "Wrong alignment on AMask_Pirate_C");
static_assert(sizeof(AMask_Pirate_C) == 0x000230, "Wrong size on AMask_Pirate_C");

}

