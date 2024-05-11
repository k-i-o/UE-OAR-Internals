#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BlockingVolume

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BlockingVolume.BlockingVolume_C.ExecuteUbergraph_BlockingVolume
// 0x00F0 (0x00F0 - 0x0000)
struct BlockingVolume_C_ExecuteUbergraph_BlockingVolume final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_259C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_259D[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCharacter_C*                     K2Node_DynamicCast_AsPlayer_Character;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_259E[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_259F[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0058(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class APlayerCharacter_C*                     K2Node_DynamicCast_AsPlayer_Character_1;           // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BlockingVolume_C_ExecuteUbergraph_BlockingVolume) == 0x000008, "Wrong alignment on BlockingVolume_C_ExecuteUbergraph_BlockingVolume");
static_assert(sizeof(BlockingVolume_C_ExecuteUbergraph_BlockingVolume) == 0x0000F0, "Wrong size on BlockingVolume_C_ExecuteUbergraph_BlockingVolume");
static_assert(offsetof(BlockingVolume_C_ExecuteUbergraph_BlockingVolume, EntryPoint) == 0x000000, "Member 'BlockingVolume_C_ExecuteUbergraph_BlockingVolume::EntryPoint' has a wrong offset!");
static_assert(offsetof(BlockingVolume_C_ExecuteUbergraph_BlockingVolume, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000008, "Member 'BlockingVolume_C_ExecuteUbergraph_BlockingVolume::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BlockingVolume_C_ExecuteUbergraph_BlockingVolume, K2Node_ComponentBoundEvent_OtherActor) == 0x000010, "Member 'BlockingVolume_C_ExecuteUbergraph_BlockingVolume::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BlockingVolume_C_ExecuteUbergraph_BlockingVolume, K2Node_ComponentBoundEvent_OtherComp) == 0x000018, "Member 'BlockingVolume_C_ExecuteUbergraph_BlockingVolume::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BlockingVolume_C_ExecuteUbergraph_BlockingVolume, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000020, "Member 'BlockingVolume_C_ExecuteUbergraph_BlockingVolume::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BlockingVolume_C_ExecuteUbergraph_BlockingVolume, K2Node_DynamicCast_AsPlayer_Character) == 0x000028, "Member 'BlockingVolume_C_ExecuteUbergraph_BlockingVolume::K2Node_DynamicCast_AsPlayer_Character' has a wrong offset!");
static_assert(offsetof(BlockingVolume_C_ExecuteUbergraph_BlockingVolume, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BlockingVolume_C_ExecuteUbergraph_BlockingVolume::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BlockingVolume_C_ExecuteUbergraph_BlockingVolume, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000038, "Member 'BlockingVolume_C_ExecuteUbergraph_BlockingVolume::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(BlockingVolume_C_ExecuteUbergraph_BlockingVolume, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000040, "Member 'BlockingVolume_C_ExecuteUbergraph_BlockingVolume::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BlockingVolume_C_ExecuteUbergraph_BlockingVolume, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000048, "Member 'BlockingVolume_C_ExecuteUbergraph_BlockingVolume::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(BlockingVolume_C_ExecuteUbergraph_BlockingVolume, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000050, "Member 'BlockingVolume_C_ExecuteUbergraph_BlockingVolume::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(BlockingVolume_C_ExecuteUbergraph_BlockingVolume, K2Node_ComponentBoundEvent_bFromSweep) == 0x000054, "Member 'BlockingVolume_C_ExecuteUbergraph_BlockingVolume::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BlockingVolume_C_ExecuteUbergraph_BlockingVolume, K2Node_ComponentBoundEvent_SweepResult) == 0x000058, "Member 'BlockingVolume_C_ExecuteUbergraph_BlockingVolume::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BlockingVolume_C_ExecuteUbergraph_BlockingVolume, K2Node_DynamicCast_AsPlayer_Character_1) == 0x0000E0, "Member 'BlockingVolume_C_ExecuteUbergraph_BlockingVolume::K2Node_DynamicCast_AsPlayer_Character_1' has a wrong offset!");
static_assert(offsetof(BlockingVolume_C_ExecuteUbergraph_BlockingVolume, K2Node_DynamicCast_bSuccess_1) == 0x0000E8, "Member 'BlockingVolume_C_ExecuteUbergraph_BlockingVolume::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BlockingVolume.BlockingVolume_C.BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BlockingVolume_C_BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BlockingVolume_C_BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BlockingVolume_C_BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(BlockingVolume_C_BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on BlockingVolume_C_BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(BlockingVolume_C_BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BlockingVolume_C_BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BlockingVolume_C_BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BlockingVolume_C_BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BlockingVolume_C_BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BlockingVolume_C_BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BlockingVolume_C_BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BlockingVolume_C_BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function BlockingVolume.BlockingVolume_C.BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct BlockingVolume_C_BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25A0[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BlockingVolume_C_BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BlockingVolume_C_BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BlockingVolume_C_BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on BlockingVolume_C_BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BlockingVolume_C_BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BlockingVolume_C_BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BlockingVolume_C_BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BlockingVolume_C_BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BlockingVolume_C_BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BlockingVolume_C_BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BlockingVolume_C_BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BlockingVolume_C_BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BlockingVolume_C_BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BlockingVolume_C_BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BlockingVolume_C_BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BlockingVolume_C_BndEvt__BlockingVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BlockingVolume.BlockingVolume_C.PostProcessSettings
// 0x0020 (0x0020 - 0x0000)
struct BlockingVolume_C_PostProcessSettings final
{
public:
	class APlayerCharacter_C*                     Self2;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Weight;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                               K2Node_MakeStruct_Vector4;                         // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BlockingVolume_C_PostProcessSettings) == 0x000010, "Wrong alignment on BlockingVolume_C_PostProcessSettings");
static_assert(sizeof(BlockingVolume_C_PostProcessSettings) == 0x000020, "Wrong size on BlockingVolume_C_PostProcessSettings");
static_assert(offsetof(BlockingVolume_C_PostProcessSettings, Self2) == 0x000000, "Member 'BlockingVolume_C_PostProcessSettings::Self2' has a wrong offset!");
static_assert(offsetof(BlockingVolume_C_PostProcessSettings, Weight) == 0x000008, "Member 'BlockingVolume_C_PostProcessSettings::Weight' has a wrong offset!");
static_assert(offsetof(BlockingVolume_C_PostProcessSettings, CallFunc_Lerp_ReturnValue) == 0x00000C, "Member 'BlockingVolume_C_PostProcessSettings::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BlockingVolume_C_PostProcessSettings, K2Node_MakeStruct_Vector4) == 0x000010, "Member 'BlockingVolume_C_PostProcessSettings::K2Node_MakeStruct_Vector4' has a wrong offset!");

}
