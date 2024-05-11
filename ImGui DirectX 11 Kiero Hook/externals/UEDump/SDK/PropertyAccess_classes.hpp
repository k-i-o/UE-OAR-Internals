#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PropertyAccess

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class PropertyAccess.PropertyAccess
// 0x0000 (0x0028 - 0x0028)
class IPropertyAccess final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PropertyAccess">();
	}
	static class IPropertyAccess* GetDefaultObj()
	{
		return GetDefaultObjImpl<IPropertyAccess>();
	}
};
static_assert(alignof(IPropertyAccess) == 0x000008, "Wrong alignment on IPropertyAccess");
static_assert(sizeof(IPropertyAccess) == 0x000028, "Wrong size on IPropertyAccess");

// Class PropertyAccess.PropertyEventBroadcaster
// 0x0000 (0x0028 - 0x0028)
class IPropertyEventBroadcaster final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PropertyEventBroadcaster">();
	}
	static class IPropertyEventBroadcaster* GetDefaultObj()
	{
		return GetDefaultObjImpl<IPropertyEventBroadcaster>();
	}
};
static_assert(alignof(IPropertyEventBroadcaster) == 0x000008, "Wrong alignment on IPropertyEventBroadcaster");
static_assert(sizeof(IPropertyEventBroadcaster) == 0x000028, "Wrong size on IPropertyEventBroadcaster");

// Class PropertyAccess.PropertyEventSubscriber
// 0x0000 (0x0028 - 0x0028)
class IPropertyEventSubscriber final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PropertyEventSubscriber">();
	}
	static class IPropertyEventSubscriber* GetDefaultObj()
	{
		return GetDefaultObjImpl<IPropertyEventSubscriber>();
	}
};
static_assert(alignof(IPropertyEventSubscriber) == 0x000008, "Wrong alignment on IPropertyEventSubscriber");
static_assert(sizeof(IPropertyEventSubscriber) == 0x000028, "Wrong size on IPropertyEventSubscriber");

}

