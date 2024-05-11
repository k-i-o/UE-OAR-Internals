#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AmbientSoundZone

#include "Basic.hpp"

#include "AmbientSoundStruct_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AmbientSoundZone.AmbientSoundZone_C.ExecuteUbergraph_AmbientSoundZone
// 0x01A0 (0x01A0 - 0x0000)
struct AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E45[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E46[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0048(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E47[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCharacter_C*                     K2Node_DynamicCast_AsPlayer_Character;             // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E48[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCharacter_C*                     K2Node_DynamicCast_AsPlayer_Character_1;           // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E49[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCharacter_C*                     K2Node_CustomEvent_Player_1;                       // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter_C*                     K2Node_CustomEvent_Player;                         // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_1;        // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E4A[0x2];                                     // 0x0122(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E4B[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAmbientSoundStruct                    CallFunc_Array_Get_Item;                           // 0x0130(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E4C[0x3];                                     // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;                 // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E4D[0x3];                                     // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E4E[0x4];                                     // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_Array_Get_Item_1;                         // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E4F[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAmbientSoundStruct                    CallFunc_Array_Get_Item_2;                         // 0x0170(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_Array_Get_Item_3;                         // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E50[0x3];                                     // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E51[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAmbienceSoundController_C*             CallFunc_GetActorOfClass_ReturnValue;              // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone) == 0x000008, "Wrong alignment on AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone");
static_assert(sizeof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone) == 0x0001A0, "Wrong size on AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, EntryPoint) == 0x000000, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::EntryPoint' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, Temp_int_Loop_Counter_Variable_1) == 0x000008, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, CallFunc_Add_IntInt_ReturnValue_1) == 0x000010, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, Temp_int_Array_Index_Variable) == 0x000014, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, Temp_int_Loop_Counter_Variable_2) == 0x000018, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, CallFunc_Add_IntInt_ReturnValue_2) == 0x00001C, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, Temp_int_Array_Index_Variable_1) == 0x000020, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000028, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000030, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000038, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000040, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, K2Node_ComponentBoundEvent_bFromSweep) == 0x000044, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, K2Node_ComponentBoundEvent_SweepResult) == 0x000048, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x0000D0, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, K2Node_ComponentBoundEvent_OtherActor) == 0x0000D8, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, K2Node_ComponentBoundEvent_OtherComp) == 0x0000E0, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x0000E8, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, K2Node_DynamicCast_AsPlayer_Character) == 0x0000F0, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::K2Node_DynamicCast_AsPlayer_Character' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, K2Node_DynamicCast_bSuccess) == 0x0000F8, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, K2Node_DynamicCast_AsPlayer_Character_1) == 0x000100, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::K2Node_DynamicCast_AsPlayer_Character_1' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, K2Node_DynamicCast_bSuccess_1) == 0x000108, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, K2Node_CustomEvent_Player_1) == 0x000110, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::K2Node_CustomEvent_Player_1' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, K2Node_CustomEvent_Player) == 0x000118, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::K2Node_CustomEvent_Player' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, CallFunc_IsLocallyControlled_ReturnValue) == 0x000120, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, CallFunc_IsLocallyControlled_ReturnValue_1) == 0x000121, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::CallFunc_IsLocallyControlled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, CallFunc_Array_Length_ReturnValue) == 0x000124, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, CallFunc_Less_IntInt_ReturnValue) == 0x000128, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, CallFunc_Array_Get_Item) == 0x000130, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, CallFunc_Array_Length_ReturnValue_1) == 0x000140, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, CallFunc_Less_IntInt_ReturnValue_1) == 0x000144, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, CallFunc_SpawnSound2D_ReturnValue) == 0x000148, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, CallFunc_Array_Add_ReturnValue) == 0x000150, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, CallFunc_BooleanAND_ReturnValue) == 0x000154, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, Temp_int_Array_Index_Variable_2) == 0x000158, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, CallFunc_Array_Get_Item_1) == 0x000160, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, CallFunc_IsValid_ReturnValue) == 0x000168, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, CallFunc_Array_Get_Item_2) == 0x000170, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, CallFunc_Array_Get_Item_3) == 0x000180, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, CallFunc_IsValid_ReturnValue_1) == 0x000188, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, CallFunc_Array_Length_ReturnValue_2) == 0x00018C, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, CallFunc_Less_IntInt_ReturnValue_2) == 0x000190, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone, CallFunc_GetActorOfClass_ReturnValue) == 0x000198, "Member 'AmbientSoundZone_C_ExecuteUbergraph_AmbientSoundZone::CallFunc_GetActorOfClass_ReturnValue' has a wrong offset!");

// Function AmbientSoundZone.AmbientSoundZone_C.StopAllSounds
// 0x0008 (0x0008 - 0x0000)
struct AmbientSoundZone_C_StopAllSounds final
{
public:
	class APlayerCharacter_C*                     Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AmbientSoundZone_C_StopAllSounds) == 0x000008, "Wrong alignment on AmbientSoundZone_C_StopAllSounds");
static_assert(sizeof(AmbientSoundZone_C_StopAllSounds) == 0x000008, "Wrong size on AmbientSoundZone_C_StopAllSounds");
static_assert(offsetof(AmbientSoundZone_C_StopAllSounds, Player) == 0x000000, "Member 'AmbientSoundZone_C_StopAllSounds::Player' has a wrong offset!");

// Function AmbientSoundZone.AmbientSoundZone_C.SpawnSounds
// 0x0008 (0x0008 - 0x0000)
struct AmbientSoundZone_C_SpawnSounds final
{
public:
	class APlayerCharacter_C*                     Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AmbientSoundZone_C_SpawnSounds) == 0x000008, "Wrong alignment on AmbientSoundZone_C_SpawnSounds");
static_assert(sizeof(AmbientSoundZone_C_SpawnSounds) == 0x000008, "Wrong size on AmbientSoundZone_C_SpawnSounds");
static_assert(offsetof(AmbientSoundZone_C_SpawnSounds, Player) == 0x000000, "Member 'AmbientSoundZone_C_SpawnSounds::Player' has a wrong offset!");

// Function AmbientSoundZone.AmbientSoundZone_C.BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct AmbientSoundZone_C_BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AmbientSoundZone_C_BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on AmbientSoundZone_C_BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(AmbientSoundZone_C_BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on AmbientSoundZone_C_BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(AmbientSoundZone_C_BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'AmbientSoundZone_C_BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'AmbientSoundZone_C_BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'AmbientSoundZone_C_BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'AmbientSoundZone_C_BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function AmbientSoundZone.AmbientSoundZone_C.BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct AmbientSoundZone_C_BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E52[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(AmbientSoundZone_C_BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on AmbientSoundZone_C_BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(AmbientSoundZone_C_BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on AmbientSoundZone_C_BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(AmbientSoundZone_C_BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'AmbientSoundZone_C_BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'AmbientSoundZone_C_BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'AmbientSoundZone_C_BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'AmbientSoundZone_C_BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'AmbientSoundZone_C_BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(AmbientSoundZone_C_BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'AmbientSoundZone_C_BndEvt__AmbientSoundZone_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

}

