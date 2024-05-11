#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SoundFields

#include "Basic.hpp"

#include "AudioExtensions_classes.hpp"


namespace SDK
{

// Class SoundFields.AmbisonicsEncodingSettings
// 0x0008 (0x0030 - 0x0028)
class UAmbisonicsEncodingSettings final : public USoundfieldEncodingSettingsBase
{
public:
	int32                                         AmbisonicsOrder;                                   // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_17F0[0x4];                                     // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AmbisonicsEncodingSettings">();
	}
	static class UAmbisonicsEncodingSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAmbisonicsEncodingSettings>();
	}
};
static_assert(alignof(UAmbisonicsEncodingSettings) == 0x000008, "Wrong alignment on UAmbisonicsEncodingSettings");
static_assert(sizeof(UAmbisonicsEncodingSettings) == 0x000030, "Wrong size on UAmbisonicsEncodingSettings");
static_assert(offsetof(UAmbisonicsEncodingSettings, AmbisonicsOrder) == 0x000028, "Member 'UAmbisonicsEncodingSettings::AmbisonicsOrder' has a wrong offset!");

}

