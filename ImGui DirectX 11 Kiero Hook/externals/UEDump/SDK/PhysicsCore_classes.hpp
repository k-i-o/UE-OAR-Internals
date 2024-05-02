#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PhysicsCore

#include "Basic.hpp"

#include "PhysicsCore_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Chaos_structs.hpp"
#include "DeveloperSettings_classes.hpp"


namespace SDK
{

// Class PhysicsCore.BodySetupCore
// 0x0020 (0x0048 - 0x0028)
class UBodySetupCore : public UObject
{
public:
	class FName                                   BoneName;                                          // 0x0028(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPhysicsType                                  PhysicsType;                                       // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECollisionTraceFlag                           CollisionTraceFlag;                                // 0x0031(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBodyCollisionResponse                        CollisionReponse;                                  // 0x0032(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19C6[0x15];                                    // 0x0033(0x0015)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BodySetupCore">();
	}
	static class UBodySetupCore* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBodySetupCore>();
	}
};
static_assert(alignof(UBodySetupCore) == 0x000008, "Wrong alignment on UBodySetupCore");
static_assert(sizeof(UBodySetupCore) == 0x000048, "Wrong size on UBodySetupCore");
static_assert(offsetof(UBodySetupCore, BoneName) == 0x000028, "Member 'UBodySetupCore::BoneName' has a wrong offset!");
static_assert(offsetof(UBodySetupCore, PhysicsType) == 0x000030, "Member 'UBodySetupCore::PhysicsType' has a wrong offset!");
static_assert(offsetof(UBodySetupCore, CollisionTraceFlag) == 0x000031, "Member 'UBodySetupCore::CollisionTraceFlag' has a wrong offset!");
static_assert(offsetof(UBodySetupCore, CollisionReponse) == 0x000032, "Member 'UBodySetupCore::CollisionReponse' has a wrong offset!");

// Class PhysicsCore.ChaosPhysicalMaterial
// 0x0020 (0x0048 - 0x0028)
class UChaosPhysicalMaterial final : public UObject
{
public:
	float                                         Friction;                                          // 0x0028(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StaticFriction;                                    // 0x002C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Restitution;                                       // 0x0030(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LinearEtherDrag;                                   // 0x0034(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AngularEtherDrag;                                  // 0x0038(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SleepingLinearVelocityThreshold;                   // 0x003C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SleepingAngularVelocityThreshold;                  // 0x0040(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19C7[0x4];                                     // 0x0044(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosPhysicalMaterial">();
	}
	static class UChaosPhysicalMaterial* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosPhysicalMaterial>();
	}
};
static_assert(alignof(UChaosPhysicalMaterial) == 0x000008, "Wrong alignment on UChaosPhysicalMaterial");
static_assert(sizeof(UChaosPhysicalMaterial) == 0x000048, "Wrong size on UChaosPhysicalMaterial");
static_assert(offsetof(UChaosPhysicalMaterial, Friction) == 0x000028, "Member 'UChaosPhysicalMaterial::Friction' has a wrong offset!");
static_assert(offsetof(UChaosPhysicalMaterial, StaticFriction) == 0x00002C, "Member 'UChaosPhysicalMaterial::StaticFriction' has a wrong offset!");
static_assert(offsetof(UChaosPhysicalMaterial, Restitution) == 0x000030, "Member 'UChaosPhysicalMaterial::Restitution' has a wrong offset!");
static_assert(offsetof(UChaosPhysicalMaterial, LinearEtherDrag) == 0x000034, "Member 'UChaosPhysicalMaterial::LinearEtherDrag' has a wrong offset!");
static_assert(offsetof(UChaosPhysicalMaterial, AngularEtherDrag) == 0x000038, "Member 'UChaosPhysicalMaterial::AngularEtherDrag' has a wrong offset!");
static_assert(offsetof(UChaosPhysicalMaterial, SleepingLinearVelocityThreshold) == 0x00003C, "Member 'UChaosPhysicalMaterial::SleepingLinearVelocityThreshold' has a wrong offset!");
static_assert(offsetof(UChaosPhysicalMaterial, SleepingAngularVelocityThreshold) == 0x000040, "Member 'UChaosPhysicalMaterial::SleepingAngularVelocityThreshold' has a wrong offset!");

// Class PhysicsCore.PhysicalMaterial
// 0x0058 (0x0080 - 0x0028)
class UPhysicalMaterial final : public UObject
{
public:
	float                                         Friction;                                          // 0x0028(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StaticFriction;                                    // 0x002C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFrictionCombineMode                          FrictionCombineMode;                               // 0x0030(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverrideFrictionCombineMode;                      // 0x0031(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19C8[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Restitution;                                       // 0x0034(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFrictionCombineMode                          RestitutionCombineMode;                            // 0x0038(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverrideRestitutionCombineMode;                   // 0x0039(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19C9[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Density;                                           // 0x003C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SleepLinearVelocityThreshold;                      // 0x0040(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SleepAngularVelocityThreshold;                     // 0x0044(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SleepCounterThreshold;                             // 0x0048(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RaiseMassToPower;                                  // 0x004C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DestructibleDamageThresholdScale;                  // 0x0050(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19CA[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterialPropertyBase*          PhysicalMaterialProperty;                          // 0x0058(0x0008)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPhysicalSurface                              SurfaceType;                                       // 0x0060(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19CB[0x1F];                                    // 0x0061(0x001F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PhysicalMaterial">();
	}
	static class UPhysicalMaterial* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhysicalMaterial>();
	}
};
static_assert(alignof(UPhysicalMaterial) == 0x000008, "Wrong alignment on UPhysicalMaterial");
static_assert(sizeof(UPhysicalMaterial) == 0x000080, "Wrong size on UPhysicalMaterial");
static_assert(offsetof(UPhysicalMaterial, Friction) == 0x000028, "Member 'UPhysicalMaterial::Friction' has a wrong offset!");
static_assert(offsetof(UPhysicalMaterial, StaticFriction) == 0x00002C, "Member 'UPhysicalMaterial::StaticFriction' has a wrong offset!");
static_assert(offsetof(UPhysicalMaterial, FrictionCombineMode) == 0x000030, "Member 'UPhysicalMaterial::FrictionCombineMode' has a wrong offset!");
static_assert(offsetof(UPhysicalMaterial, bOverrideFrictionCombineMode) == 0x000031, "Member 'UPhysicalMaterial::bOverrideFrictionCombineMode' has a wrong offset!");
static_assert(offsetof(UPhysicalMaterial, Restitution) == 0x000034, "Member 'UPhysicalMaterial::Restitution' has a wrong offset!");
static_assert(offsetof(UPhysicalMaterial, RestitutionCombineMode) == 0x000038, "Member 'UPhysicalMaterial::RestitutionCombineMode' has a wrong offset!");
static_assert(offsetof(UPhysicalMaterial, bOverrideRestitutionCombineMode) == 0x000039, "Member 'UPhysicalMaterial::bOverrideRestitutionCombineMode' has a wrong offset!");
static_assert(offsetof(UPhysicalMaterial, Density) == 0x00003C, "Member 'UPhysicalMaterial::Density' has a wrong offset!");
static_assert(offsetof(UPhysicalMaterial, SleepLinearVelocityThreshold) == 0x000040, "Member 'UPhysicalMaterial::SleepLinearVelocityThreshold' has a wrong offset!");
static_assert(offsetof(UPhysicalMaterial, SleepAngularVelocityThreshold) == 0x000044, "Member 'UPhysicalMaterial::SleepAngularVelocityThreshold' has a wrong offset!");
static_assert(offsetof(UPhysicalMaterial, SleepCounterThreshold) == 0x000048, "Member 'UPhysicalMaterial::SleepCounterThreshold' has a wrong offset!");
static_assert(offsetof(UPhysicalMaterial, RaiseMassToPower) == 0x00004C, "Member 'UPhysicalMaterial::RaiseMassToPower' has a wrong offset!");
static_assert(offsetof(UPhysicalMaterial, DestructibleDamageThresholdScale) == 0x000050, "Member 'UPhysicalMaterial::DestructibleDamageThresholdScale' has a wrong offset!");
static_assert(offsetof(UPhysicalMaterial, PhysicalMaterialProperty) == 0x000058, "Member 'UPhysicalMaterial::PhysicalMaterialProperty' has a wrong offset!");
static_assert(offsetof(UPhysicalMaterial, SurfaceType) == 0x000060, "Member 'UPhysicalMaterial::SurfaceType' has a wrong offset!");

// Class PhysicsCore.PhysicalMaterialPropertyBase
// 0x0000 (0x0028 - 0x0028)
class UPhysicalMaterialPropertyBase final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PhysicalMaterialPropertyBase">();
	}
	static class UPhysicalMaterialPropertyBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhysicalMaterialPropertyBase>();
	}
};
static_assert(alignof(UPhysicalMaterialPropertyBase) == 0x000008, "Wrong alignment on UPhysicalMaterialPropertyBase");
static_assert(sizeof(UPhysicalMaterialPropertyBase) == 0x000028, "Wrong size on UPhysicalMaterialPropertyBase");

// Class PhysicsCore.PhysicsSettingsCore
// 0x00A8 (0x00E0 - 0x0038)
class UPhysicsSettingsCore : public UDeveloperSettings
{
public:
	float                                         DefaultGravityZ;                                   // 0x0038(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DefaultTerminalVelocity;                           // 0x003C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DefaultFluidFriction;                              // 0x0040(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SimulateScratchMemorySize;                         // 0x0044(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         RagdollAggregateThreshold;                         // 0x0048(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TriangleMeshTriangleMinAreaThreshold;              // 0x004C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableShapeSharing;                               // 0x0050(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnablePCM;                                        // 0x0051(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableStabilization;                              // 0x0052(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bWarnMissingLocks;                                 // 0x0053(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnable2DPhysics;                                  // 0x0054(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDefaultHasComplexCollision;                       // 0x0055(0x0001)(ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19CC[0x2];                                     // 0x0056(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BounceThresholdVelocity;                           // 0x0058(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFrictionCombineMode                          FrictionCombineMode;                               // 0x005C(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFrictionCombineMode                          RestitutionCombineMode;                            // 0x005D(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19CD[0x2];                                     // 0x005E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxAngularVelocity;                                // 0x0060(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxDepenetrationVelocity;                          // 0x0064(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ContactOffsetMultiplier;                           // 0x0068(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinContactOffset;                                  // 0x006C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxContactOffset;                                  // 0x0070(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSimulateSkeletalMeshOnDedicatedServer;            // 0x0074(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECollisionTraceFlag                           DefaultShapeComplexity;                            // 0x0075(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19CE[0x2];                                     // 0x0076(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FChaosSolverConfiguration              SolverOptions;                                     // 0x0078(0x0068)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PhysicsSettingsCore">();
	}
	static class UPhysicsSettingsCore* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhysicsSettingsCore>();
	}
};
static_assert(alignof(UPhysicsSettingsCore) == 0x000008, "Wrong alignment on UPhysicsSettingsCore");
static_assert(sizeof(UPhysicsSettingsCore) == 0x0000E0, "Wrong size on UPhysicsSettingsCore");
static_assert(offsetof(UPhysicsSettingsCore, DefaultGravityZ) == 0x000038, "Member 'UPhysicsSettingsCore::DefaultGravityZ' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, DefaultTerminalVelocity) == 0x00003C, "Member 'UPhysicsSettingsCore::DefaultTerminalVelocity' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, DefaultFluidFriction) == 0x000040, "Member 'UPhysicsSettingsCore::DefaultFluidFriction' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, SimulateScratchMemorySize) == 0x000044, "Member 'UPhysicsSettingsCore::SimulateScratchMemorySize' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, RagdollAggregateThreshold) == 0x000048, "Member 'UPhysicsSettingsCore::RagdollAggregateThreshold' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, TriangleMeshTriangleMinAreaThreshold) == 0x00004C, "Member 'UPhysicsSettingsCore::TriangleMeshTriangleMinAreaThreshold' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, bEnableShapeSharing) == 0x000050, "Member 'UPhysicsSettingsCore::bEnableShapeSharing' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, bEnablePCM) == 0x000051, "Member 'UPhysicsSettingsCore::bEnablePCM' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, bEnableStabilization) == 0x000052, "Member 'UPhysicsSettingsCore::bEnableStabilization' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, bWarnMissingLocks) == 0x000053, "Member 'UPhysicsSettingsCore::bWarnMissingLocks' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, bEnable2DPhysics) == 0x000054, "Member 'UPhysicsSettingsCore::bEnable2DPhysics' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, bDefaultHasComplexCollision) == 0x000055, "Member 'UPhysicsSettingsCore::bDefaultHasComplexCollision' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, BounceThresholdVelocity) == 0x000058, "Member 'UPhysicsSettingsCore::BounceThresholdVelocity' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, FrictionCombineMode) == 0x00005C, "Member 'UPhysicsSettingsCore::FrictionCombineMode' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, RestitutionCombineMode) == 0x00005D, "Member 'UPhysicsSettingsCore::RestitutionCombineMode' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, MaxAngularVelocity) == 0x000060, "Member 'UPhysicsSettingsCore::MaxAngularVelocity' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, MaxDepenetrationVelocity) == 0x000064, "Member 'UPhysicsSettingsCore::MaxDepenetrationVelocity' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, ContactOffsetMultiplier) == 0x000068, "Member 'UPhysicsSettingsCore::ContactOffsetMultiplier' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, MinContactOffset) == 0x00006C, "Member 'UPhysicsSettingsCore::MinContactOffset' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, MaxContactOffset) == 0x000070, "Member 'UPhysicsSettingsCore::MaxContactOffset' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, bSimulateSkeletalMeshOnDedicatedServer) == 0x000074, "Member 'UPhysicsSettingsCore::bSimulateSkeletalMeshOnDedicatedServer' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, DefaultShapeComplexity) == 0x000075, "Member 'UPhysicsSettingsCore::DefaultShapeComplexity' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, SolverOptions) == 0x000078, "Member 'UPhysicsSettingsCore::SolverOptions' has a wrong offset!");

}

