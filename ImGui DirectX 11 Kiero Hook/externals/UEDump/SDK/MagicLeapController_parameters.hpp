#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MagicLeapController

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "MagicLeapController_structs.hpp"


namespace SDK::Params
{

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping
// 0x0008 (0x0008 - 0x0000)
struct MagicLeapControllerFunctionLibrary_GetControllerMapping final
{
public:
	int32                                         ControllerIndex;                                   // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EControllerHand                               Hand;                                              // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0005(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_158F[0x2];                                     // 0x0006(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MagicLeapControllerFunctionLibrary_GetControllerMapping) == 0x000004, "Wrong alignment on MagicLeapControllerFunctionLibrary_GetControllerMapping");
static_assert(sizeof(MagicLeapControllerFunctionLibrary_GetControllerMapping) == 0x000008, "Wrong size on MagicLeapControllerFunctionLibrary_GetControllerMapping");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_GetControllerMapping, ControllerIndex) == 0x000000, "Member 'MagicLeapControllerFunctionLibrary_GetControllerMapping::ControllerIndex' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_GetControllerMapping, Hand) == 0x000004, "Member 'MagicLeapControllerFunctionLibrary_GetControllerMapping::Hand' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_GetControllerMapping, ReturnValue) == 0x000005, "Member 'MagicLeapControllerFunctionLibrary_GetControllerMapping::ReturnValue' has a wrong offset!");

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode
// 0x0001 (0x0001 - 0x0000)
struct MagicLeapControllerFunctionLibrary_GetControllerTrackingMode final
{
public:
	EMagicLeapControllerTrackingMode              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MagicLeapControllerFunctionLibrary_GetControllerTrackingMode) == 0x000001, "Wrong alignment on MagicLeapControllerFunctionLibrary_GetControllerTrackingMode");
static_assert(sizeof(MagicLeapControllerFunctionLibrary_GetControllerTrackingMode) == 0x000001, "Wrong size on MagicLeapControllerFunctionLibrary_GetControllerTrackingMode");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_GetControllerTrackingMode, ReturnValue) == 0x000000, "Member 'MagicLeapControllerFunctionLibrary_GetControllerTrackingMode::ReturnValue' has a wrong offset!");

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType
// 0x000C (0x000C - 0x0000)
struct MagicLeapControllerFunctionLibrary_GetControllerType final
{
public:
	class FName                                   MotionSource;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapControllerType                      ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1590[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MagicLeapControllerFunctionLibrary_GetControllerType) == 0x000004, "Wrong alignment on MagicLeapControllerFunctionLibrary_GetControllerType");
static_assert(sizeof(MagicLeapControllerFunctionLibrary_GetControllerType) == 0x00000C, "Wrong size on MagicLeapControllerFunctionLibrary_GetControllerType");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_GetControllerType, MotionSource) == 0x000000, "Member 'MagicLeapControllerFunctionLibrary_GetControllerType::MotionSource' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_GetControllerType, ReturnValue) == 0x000008, "Member 'MagicLeapControllerFunctionLibrary_GetControllerType::ReturnValue' has a wrong offset!");

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource
// 0x000C (0x000C - 0x0000)
struct MagicLeapControllerFunctionLibrary_GetHandForMotionSource final
{
public:
	class FName                                   MotionSource;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EControllerHand                               ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1591[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MagicLeapControllerFunctionLibrary_GetHandForMotionSource) == 0x000004, "Wrong alignment on MagicLeapControllerFunctionLibrary_GetHandForMotionSource");
static_assert(sizeof(MagicLeapControllerFunctionLibrary_GetHandForMotionSource) == 0x00000C, "Wrong size on MagicLeapControllerFunctionLibrary_GetHandForMotionSource");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_GetHandForMotionSource, MotionSource) == 0x000000, "Member 'MagicLeapControllerFunctionLibrary_GetHandForMotionSource::MotionSource' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_GetHandForMotionSource, ReturnValue) == 0x000008, "Member 'MagicLeapControllerFunctionLibrary_GetHandForMotionSource::ReturnValue' has a wrong offset!");

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType
// 0x0002 (0x0002 - 0x0000)
struct MagicLeapControllerFunctionLibrary_GetMLControllerType final
{
public:
	EControllerHand                               Hand;                                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapControllerType                      ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MagicLeapControllerFunctionLibrary_GetMLControllerType) == 0x000001, "Wrong alignment on MagicLeapControllerFunctionLibrary_GetMLControllerType");
static_assert(sizeof(MagicLeapControllerFunctionLibrary_GetMLControllerType) == 0x000002, "Wrong size on MagicLeapControllerFunctionLibrary_GetMLControllerType");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_GetMLControllerType, Hand) == 0x000000, "Member 'MagicLeapControllerFunctionLibrary_GetMLControllerType::Hand' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_GetMLControllerType, ReturnValue) == 0x000001, "Member 'MagicLeapControllerFunctionLibrary_GetMLControllerType::ReturnValue' has a wrong offset!");

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand
// 0x000C (0x000C - 0x0000)
struct MagicLeapControllerFunctionLibrary_GetMotionSourceForHand final
{
public:
	EControllerHand                               Hand;                                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1592[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ReturnValue;                                       // 0x0004(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MagicLeapControllerFunctionLibrary_GetMotionSourceForHand) == 0x000004, "Wrong alignment on MagicLeapControllerFunctionLibrary_GetMotionSourceForHand");
static_assert(sizeof(MagicLeapControllerFunctionLibrary_GetMotionSourceForHand) == 0x00000C, "Wrong size on MagicLeapControllerFunctionLibrary_GetMotionSourceForHand");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_GetMotionSourceForHand, Hand) == 0x000000, "Member 'MagicLeapControllerFunctionLibrary_GetMotionSourceForHand::Hand' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_GetMotionSourceForHand, ReturnValue) == 0x000004, "Member 'MagicLeapControllerFunctionLibrary_GetMotionSourceForHand::ReturnValue' has a wrong offset!");

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected
// 0x000C (0x000C - 0x0000)
struct MagicLeapControllerFunctionLibrary_IsMLControllerConnected final
{
public:
	class FName                                   MotionSource;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1593[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MagicLeapControllerFunctionLibrary_IsMLControllerConnected) == 0x000004, "Wrong alignment on MagicLeapControllerFunctionLibrary_IsMLControllerConnected");
static_assert(sizeof(MagicLeapControllerFunctionLibrary_IsMLControllerConnected) == 0x00000C, "Wrong size on MagicLeapControllerFunctionLibrary_IsMLControllerConnected");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_IsMLControllerConnected, MotionSource) == 0x000000, "Member 'MagicLeapControllerFunctionLibrary_IsMLControllerConnected::MotionSource' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_IsMLControllerConnected, ReturnValue) == 0x000008, "Member 'MagicLeapControllerFunctionLibrary_IsMLControllerConnected::ReturnValue' has a wrong offset!");

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers
// 0x0004 (0x0004 - 0x0000)
struct MagicLeapControllerFunctionLibrary_MaxSupportedMagicLeapControllers final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MagicLeapControllerFunctionLibrary_MaxSupportedMagicLeapControllers) == 0x000004, "Wrong alignment on MagicLeapControllerFunctionLibrary_MaxSupportedMagicLeapControllers");
static_assert(sizeof(MagicLeapControllerFunctionLibrary_MaxSupportedMagicLeapControllers) == 0x000004, "Wrong size on MagicLeapControllerFunctionLibrary_MaxSupportedMagicLeapControllers");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_MaxSupportedMagicLeapControllers, ReturnValue) == 0x000000, "Member 'MagicLeapControllerFunctionLibrary_MaxSupportedMagicLeapControllers::ReturnValue' has a wrong offset!");

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback
// 0x0004 (0x0004 - 0x0000)
struct MagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback final
{
public:
	EControllerHand                               Hand;                                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapControllerHapticPattern             HapticPattern;                                     // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapControllerHapticIntensity           Intensity;                                         // 0x0002(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0003(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback) == 0x000001, "Wrong alignment on MagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback");
static_assert(sizeof(MagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback) == 0x000004, "Wrong size on MagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback, Hand) == 0x000000, "Member 'MagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback::Hand' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback, HapticPattern) == 0x000001, "Member 'MagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback::HapticPattern' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback, Intensity) == 0x000002, "Member 'MagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback::Intensity' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback, ReturnValue) == 0x000003, "Member 'MagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback::ReturnValue' has a wrong offset!");

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED
// 0x000C (0x000C - 0x0000)
struct MagicLeapControllerFunctionLibrary_PlayControllerLED final
{
public:
	EControllerHand                               Hand;                                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapControllerLEDPattern                LEDPattern;                                        // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapControllerLEDColor                  LEDColor;                                          // 0x0002(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1594[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DurationInSec;                                     // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1595[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MagicLeapControllerFunctionLibrary_PlayControllerLED) == 0x000004, "Wrong alignment on MagicLeapControllerFunctionLibrary_PlayControllerLED");
static_assert(sizeof(MagicLeapControllerFunctionLibrary_PlayControllerLED) == 0x00000C, "Wrong size on MagicLeapControllerFunctionLibrary_PlayControllerLED");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayControllerLED, Hand) == 0x000000, "Member 'MagicLeapControllerFunctionLibrary_PlayControllerLED::Hand' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayControllerLED, LEDPattern) == 0x000001, "Member 'MagicLeapControllerFunctionLibrary_PlayControllerLED::LEDPattern' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayControllerLED, LEDColor) == 0x000002, "Member 'MagicLeapControllerFunctionLibrary_PlayControllerLED::LEDColor' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayControllerLED, DurationInSec) == 0x000004, "Member 'MagicLeapControllerFunctionLibrary_PlayControllerLED::DurationInSec' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayControllerLED, ReturnValue) == 0x000008, "Member 'MagicLeapControllerFunctionLibrary_PlayControllerLED::ReturnValue' has a wrong offset!");

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect
// 0x0010 (0x0010 - 0x0000)
struct MagicLeapControllerFunctionLibrary_PlayControllerLEDEffect final
{
public:
	EControllerHand                               Hand;                                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapControllerLEDEffect                 LEDEffect;                                         // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapControllerLEDSpeed                  LEDSpeed;                                          // 0x0002(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapControllerLEDPattern                LEDPattern;                                        // 0x0003(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapControllerLEDColor                  LEDColor;                                          // 0x0004(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1596[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DurationInSec;                                     // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1597[0x3];                                     // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MagicLeapControllerFunctionLibrary_PlayControllerLEDEffect) == 0x000004, "Wrong alignment on MagicLeapControllerFunctionLibrary_PlayControllerLEDEffect");
static_assert(sizeof(MagicLeapControllerFunctionLibrary_PlayControllerLEDEffect) == 0x000010, "Wrong size on MagicLeapControllerFunctionLibrary_PlayControllerLEDEffect");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayControllerLEDEffect, Hand) == 0x000000, "Member 'MagicLeapControllerFunctionLibrary_PlayControllerLEDEffect::Hand' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayControllerLEDEffect, LEDEffect) == 0x000001, "Member 'MagicLeapControllerFunctionLibrary_PlayControllerLEDEffect::LEDEffect' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayControllerLEDEffect, LEDSpeed) == 0x000002, "Member 'MagicLeapControllerFunctionLibrary_PlayControllerLEDEffect::LEDSpeed' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayControllerLEDEffect, LEDPattern) == 0x000003, "Member 'MagicLeapControllerFunctionLibrary_PlayControllerLEDEffect::LEDPattern' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayControllerLEDEffect, LEDColor) == 0x000004, "Member 'MagicLeapControllerFunctionLibrary_PlayControllerLEDEffect::LEDColor' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayControllerLEDEffect, DurationInSec) == 0x000008, "Member 'MagicLeapControllerFunctionLibrary_PlayControllerLEDEffect::DurationInSec' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayControllerLEDEffect, ReturnValue) == 0x00000C, "Member 'MagicLeapControllerFunctionLibrary_PlayControllerLEDEffect::ReturnValue' has a wrong offset!");

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern
// 0x000C (0x000C - 0x0000)
struct MagicLeapControllerFunctionLibrary_PlayHapticPattern final
{
public:
	class FName                                   MotionSource;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapControllerHapticPattern             HapticPattern;                                     // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapControllerHapticIntensity           Intensity;                                         // 0x0009(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x000A(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1598[0x1];                                     // 0x000B(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MagicLeapControllerFunctionLibrary_PlayHapticPattern) == 0x000004, "Wrong alignment on MagicLeapControllerFunctionLibrary_PlayHapticPattern");
static_assert(sizeof(MagicLeapControllerFunctionLibrary_PlayHapticPattern) == 0x00000C, "Wrong size on MagicLeapControllerFunctionLibrary_PlayHapticPattern");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayHapticPattern, MotionSource) == 0x000000, "Member 'MagicLeapControllerFunctionLibrary_PlayHapticPattern::MotionSource' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayHapticPattern, HapticPattern) == 0x000008, "Member 'MagicLeapControllerFunctionLibrary_PlayHapticPattern::HapticPattern' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayHapticPattern, Intensity) == 0x000009, "Member 'MagicLeapControllerFunctionLibrary_PlayHapticPattern::Intensity' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayHapticPattern, ReturnValue) == 0x00000A, "Member 'MagicLeapControllerFunctionLibrary_PlayHapticPattern::ReturnValue' has a wrong offset!");

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect
// 0x0014 (0x0014 - 0x0000)
struct MagicLeapControllerFunctionLibrary_PlayLEDEffect final
{
public:
	class FName                                   MotionSource;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapControllerLEDEffect                 LEDEffect;                                         // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapControllerLEDSpeed                  LEDSpeed;                                          // 0x0009(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapControllerLEDPattern                LEDPattern;                                        // 0x000A(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapControllerLEDColor                  LEDColor;                                          // 0x000B(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DurationInSec;                                     // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1599[0x3];                                     // 0x0011(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MagicLeapControllerFunctionLibrary_PlayLEDEffect) == 0x000004, "Wrong alignment on MagicLeapControllerFunctionLibrary_PlayLEDEffect");
static_assert(sizeof(MagicLeapControllerFunctionLibrary_PlayLEDEffect) == 0x000014, "Wrong size on MagicLeapControllerFunctionLibrary_PlayLEDEffect");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayLEDEffect, MotionSource) == 0x000000, "Member 'MagicLeapControllerFunctionLibrary_PlayLEDEffect::MotionSource' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayLEDEffect, LEDEffect) == 0x000008, "Member 'MagicLeapControllerFunctionLibrary_PlayLEDEffect::LEDEffect' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayLEDEffect, LEDSpeed) == 0x000009, "Member 'MagicLeapControllerFunctionLibrary_PlayLEDEffect::LEDSpeed' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayLEDEffect, LEDPattern) == 0x00000A, "Member 'MagicLeapControllerFunctionLibrary_PlayLEDEffect::LEDPattern' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayLEDEffect, LEDColor) == 0x00000B, "Member 'MagicLeapControllerFunctionLibrary_PlayLEDEffect::LEDColor' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayLEDEffect, DurationInSec) == 0x00000C, "Member 'MagicLeapControllerFunctionLibrary_PlayLEDEffect::DurationInSec' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayLEDEffect, ReturnValue) == 0x000010, "Member 'MagicLeapControllerFunctionLibrary_PlayLEDEffect::ReturnValue' has a wrong offset!");

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern
// 0x0014 (0x0014 - 0x0000)
struct MagicLeapControllerFunctionLibrary_PlayLEDPattern final
{
public:
	class FName                                   MotionSource;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapControllerLEDPattern                LEDPattern;                                        // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapControllerLEDColor                  LEDColor;                                          // 0x0009(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_159A[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DurationInSec;                                     // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_159B[0x3];                                     // 0x0011(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MagicLeapControllerFunctionLibrary_PlayLEDPattern) == 0x000004, "Wrong alignment on MagicLeapControllerFunctionLibrary_PlayLEDPattern");
static_assert(sizeof(MagicLeapControllerFunctionLibrary_PlayLEDPattern) == 0x000014, "Wrong size on MagicLeapControllerFunctionLibrary_PlayLEDPattern");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayLEDPattern, MotionSource) == 0x000000, "Member 'MagicLeapControllerFunctionLibrary_PlayLEDPattern::MotionSource' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayLEDPattern, LEDPattern) == 0x000008, "Member 'MagicLeapControllerFunctionLibrary_PlayLEDPattern::LEDPattern' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayLEDPattern, LEDColor) == 0x000009, "Member 'MagicLeapControllerFunctionLibrary_PlayLEDPattern::LEDColor' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayLEDPattern, DurationInSec) == 0x00000C, "Member 'MagicLeapControllerFunctionLibrary_PlayLEDPattern::DurationInSec' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_PlayLEDPattern, ReturnValue) == 0x000010, "Member 'MagicLeapControllerFunctionLibrary_PlayLEDPattern::ReturnValue' has a wrong offset!");

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode
// 0x0002 (0x0002 - 0x0000)
struct MagicLeapControllerFunctionLibrary_SetControllerTrackingMode final
{
public:
	EMagicLeapControllerTrackingMode              TrackingMode;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MagicLeapControllerFunctionLibrary_SetControllerTrackingMode) == 0x000001, "Wrong alignment on MagicLeapControllerFunctionLibrary_SetControllerTrackingMode");
static_assert(sizeof(MagicLeapControllerFunctionLibrary_SetControllerTrackingMode) == 0x000002, "Wrong size on MagicLeapControllerFunctionLibrary_SetControllerTrackingMode");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_SetControllerTrackingMode, TrackingMode) == 0x000000, "Member 'MagicLeapControllerFunctionLibrary_SetControllerTrackingMode::TrackingMode' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_SetControllerTrackingMode, ReturnValue) == 0x000001, "Member 'MagicLeapControllerFunctionLibrary_SetControllerTrackingMode::ReturnValue' has a wrong offset!");

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand
// 0x0010 (0x0010 - 0x0000)
struct MagicLeapControllerFunctionLibrary_SetMotionSourceForHand final
{
public:
	EControllerHand                               Hand;                                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_159C[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   MotionSource;                                      // 0x0004(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_159D[0x3];                                     // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MagicLeapControllerFunctionLibrary_SetMotionSourceForHand) == 0x000004, "Wrong alignment on MagicLeapControllerFunctionLibrary_SetMotionSourceForHand");
static_assert(sizeof(MagicLeapControllerFunctionLibrary_SetMotionSourceForHand) == 0x000010, "Wrong size on MagicLeapControllerFunctionLibrary_SetMotionSourceForHand");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_SetMotionSourceForHand, Hand) == 0x000000, "Member 'MagicLeapControllerFunctionLibrary_SetMotionSourceForHand::Hand' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_SetMotionSourceForHand, MotionSource) == 0x000004, "Member 'MagicLeapControllerFunctionLibrary_SetMotionSourceForHand::MotionSource' has a wrong offset!");
static_assert(offsetof(MagicLeapControllerFunctionLibrary_SetMotionSourceForHand, ReturnValue) == 0x00000C, "Member 'MagicLeapControllerFunctionLibrary_SetMotionSourceForHand::ReturnValue' has a wrong offset!");

}

