#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RestrictedAreaVolume

#include "Basic.hpp"


namespace SDK::Params
{

// Function RestrictedAreaVolume.RestrictedAreaVolume_C.ExecuteUbergraph_RestrictedAreaVolume
// 0x0080 (0x0080 - 0x0000)
struct RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor_1;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter_C*                     K2Node_DynamicCast_AsPlayer_Character;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FCE[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCharacter_C*                     K2Node_DynamicCast_AsPlayer_Character_1;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInSuperRestricted__Arrest_;             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInSuperRestricted__In_restricted_;      // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FCF[0x5];                                     // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0038(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FD0[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCharacter_C*                     K2Node_DynamicCast_AsPlayer_Character_2;           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FD1[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FD2[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APoliceWaveSpawner_C*                   CallFunc_GetActorOfClass_ReturnValue;              // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APoliceWaveSpawner_C*                   CallFunc_GetActorOfClass_ReturnValue_1;            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume) == 0x000008, "Wrong alignment on RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume");
static_assert(sizeof(RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume) == 0x000080, "Wrong size on RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume");
static_assert(offsetof(RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume, EntryPoint) == 0x000000, "Member 'RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume::EntryPoint' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume, Temp_int_Array_Index_Variable) == 0x000004, "Member 'RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume, K2Node_Event_OtherActor_1) == 0x000008, "Member 'RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume::K2Node_Event_OtherActor_1' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume, K2Node_Event_OtherActor) == 0x000010, "Member 'RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume, K2Node_DynamicCast_AsPlayer_Character) == 0x000018, "Member 'RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume::K2Node_DynamicCast_AsPlayer_Character' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume, K2Node_DynamicCast_AsPlayer_Character_1) == 0x000028, "Member 'RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume::K2Node_DynamicCast_AsPlayer_Character_1' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume, CallFunc_IsInSuperRestricted__Arrest_) == 0x000031, "Member 'RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume::CallFunc_IsInSuperRestricted__Arrest_' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume, CallFunc_IsInSuperRestricted__In_restricted_) == 0x000032, "Member 'RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume::CallFunc_IsInSuperRestricted__In_restricted_' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000038, "Member 'RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume, CallFunc_Array_Get_Item) == 0x000048, "Member 'RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume, K2Node_DynamicCast_AsPlayer_Character_2) == 0x000058, "Member 'RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume::K2Node_DynamicCast_AsPlayer_Character_2' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume, K2Node_DynamicCast_bSuccess_2) == 0x000060, "Member 'RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume, Temp_int_Loop_Counter_Variable) == 0x000064, "Member 'RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume, CallFunc_Add_IntInt_ReturnValue) == 0x00006C, "Member 'RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume, CallFunc_GetActorOfClass_ReturnValue) == 0x000070, "Member 'RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume::CallFunc_GetActorOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume, CallFunc_GetActorOfClass_ReturnValue_1) == 0x000078, "Member 'RestrictedAreaVolume_C_ExecuteUbergraph_RestrictedAreaVolume::CallFunc_GetActorOfClass_ReturnValue_1' has a wrong offset!");

// Function RestrictedAreaVolume.RestrictedAreaVolume_C.ReceiveActorEndOverlap
// 0x0008 (0x0008 - 0x0000)
struct RestrictedAreaVolume_C_ReceiveActorEndOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RestrictedAreaVolume_C_ReceiveActorEndOverlap) == 0x000008, "Wrong alignment on RestrictedAreaVolume_C_ReceiveActorEndOverlap");
static_assert(sizeof(RestrictedAreaVolume_C_ReceiveActorEndOverlap) == 0x000008, "Wrong size on RestrictedAreaVolume_C_ReceiveActorEndOverlap");
static_assert(offsetof(RestrictedAreaVolume_C_ReceiveActorEndOverlap, OtherActor) == 0x000000, "Member 'RestrictedAreaVolume_C_ReceiveActorEndOverlap::OtherActor' has a wrong offset!");

// Function RestrictedAreaVolume.RestrictedAreaVolume_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct RestrictedAreaVolume_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RestrictedAreaVolume_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on RestrictedAreaVolume_C_ReceiveActorBeginOverlap");
static_assert(sizeof(RestrictedAreaVolume_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on RestrictedAreaVolume_C_ReceiveActorBeginOverlap");
static_assert(offsetof(RestrictedAreaVolume_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'RestrictedAreaVolume_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

// Function RestrictedAreaVolume.RestrictedAreaVolume_C.IsInSuperRestricted?
// 0x0068 (0x0068 - 0x0000)
struct RestrictedAreaVolume_C_IsInSuperRestricted_ final
{
public:
	class APlayerCharacter_C*                     Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Arrest_;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          In_restricted_;                                    // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FD3[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0010(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FD4[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARestrictedAreaVolume_C*                K2Node_DynamicCast_AsRestricted_Area_Volume;       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FD5[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ARestrictedAreaVolume_C*                K2Node_DynamicCast_AsRestricted_Area_Volume_1;     // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FD6[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FD7[0x2];                                     // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RestrictedAreaVolume_C_IsInSuperRestricted_) == 0x000008, "Wrong alignment on RestrictedAreaVolume_C_IsInSuperRestricted_");
static_assert(sizeof(RestrictedAreaVolume_C_IsInSuperRestricted_) == 0x000068, "Wrong size on RestrictedAreaVolume_C_IsInSuperRestricted_");
static_assert(offsetof(RestrictedAreaVolume_C_IsInSuperRestricted_, Player) == 0x000000, "Member 'RestrictedAreaVolume_C_IsInSuperRestricted_::Player' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_IsInSuperRestricted_, Arrest_) == 0x000008, "Member 'RestrictedAreaVolume_C_IsInSuperRestricted_::Arrest_' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_IsInSuperRestricted_, In_restricted_) == 0x000009, "Member 'RestrictedAreaVolume_C_IsInSuperRestricted_::In_restricted_' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_IsInSuperRestricted_, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000010, "Member 'RestrictedAreaVolume_C_IsInSuperRestricted_::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_IsInSuperRestricted_, Temp_int_Array_Index_Variable) == 0x000020, "Member 'RestrictedAreaVolume_C_IsInSuperRestricted_::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_IsInSuperRestricted_, CallFunc_Array_Get_Item) == 0x000028, "Member 'RestrictedAreaVolume_C_IsInSuperRestricted_::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_IsInSuperRestricted_, CallFunc_Array_Get_Item_1) == 0x000030, "Member 'RestrictedAreaVolume_C_IsInSuperRestricted_::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_IsInSuperRestricted_, K2Node_DynamicCast_AsRestricted_Area_Volume) == 0x000038, "Member 'RestrictedAreaVolume_C_IsInSuperRestricted_::K2Node_DynamicCast_AsRestricted_Area_Volume' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_IsInSuperRestricted_, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'RestrictedAreaVolume_C_IsInSuperRestricted_::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_IsInSuperRestricted_, K2Node_DynamicCast_AsRestricted_Area_Volume_1) == 0x000048, "Member 'RestrictedAreaVolume_C_IsInSuperRestricted_::K2Node_DynamicCast_AsRestricted_Area_Volume_1' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_IsInSuperRestricted_, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'RestrictedAreaVolume_C_IsInSuperRestricted_::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_IsInSuperRestricted_, CallFunc_Array_Length_ReturnValue) == 0x000054, "Member 'RestrictedAreaVolume_C_IsInSuperRestricted_::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_IsInSuperRestricted_, CallFunc_Array_Length_ReturnValue_1) == 0x000058, "Member 'RestrictedAreaVolume_C_IsInSuperRestricted_::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_IsInSuperRestricted_, Temp_int_Loop_Counter_Variable) == 0x00005C, "Member 'RestrictedAreaVolume_C_IsInSuperRestricted_::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_IsInSuperRestricted_, CallFunc_Greater_IntInt_ReturnValue) == 0x000060, "Member 'RestrictedAreaVolume_C_IsInSuperRestricted_::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_IsInSuperRestricted_, CallFunc_Less_IntInt_ReturnValue) == 0x000061, "Member 'RestrictedAreaVolume_C_IsInSuperRestricted_::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RestrictedAreaVolume_C_IsInSuperRestricted_, CallFunc_Add_IntInt_ReturnValue) == 0x000064, "Member 'RestrictedAreaVolume_C_IsInSuperRestricted_::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}

