#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerInterface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerInterface.PlayerInterface_C
// 0x0000 (0x0028 - 0x0028)
class IPlayerInterface_C final : public IInterface
{
public:
	void AddEXP(float Amount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerInterface_C">();
	}
	static class IPlayerInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IPlayerInterface_C>();
	}
};
static_assert(alignof(IPlayerInterface_C) == 0x000008, "Wrong alignment on IPlayerInterface_C");
static_assert(sizeof(IPlayerInterface_C) == 0x000028, "Wrong size on IPlayerInterface_C");

}
