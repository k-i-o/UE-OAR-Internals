#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProceduralMeshComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ProceduralMeshComponent_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetProceduralMeshLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void CalculateTangentsForMesh(const TArray<struct FVector>& Vertices, const TArray<int32>& Triangles, const TArray<struct FVector2D>& UVs, TArray<struct FVector>* Normals, TArray<struct FProcMeshTangent>* Tangents);
	static void ConvertQuadToTriangles(TArray<int32>& Triangles, int32 Vert0, int32 Vert1, int32 Vert2, int32 Vert3);
	static void CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent, int32 LODIndex, class UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision);
	static void CreateGridMeshSplit(int32 NumX, int32 NumY, TArray<int32>* Triangles, TArray<struct FVector>* Vertices, TArray<struct FVector2D>* UVs, TArray<struct FVector2D>* UV1s, float GridSpacing);
	static void CreateGridMeshTriangles(int32 NumX, int32 NumY, bool bWinding, TArray<int32>* Triangles);
	static void CreateGridMeshWelded(int32 NumX, int32 NumY, TArray<int32>* Triangles, TArray<struct FVector>* Vertices, TArray<struct FVector2D>* UVs, float GridSpacing);
	static void GenerateBoxMesh(const struct FVector& BoxRadius, TArray<struct FVector>* Vertices, TArray<int32>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents);
	static void GetSectionFromProceduralMesh(class UProceduralMeshComponent* InProcMesh, int32 SectionIndex, TArray<struct FVector>* Vertices, TArray<int32>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents);
	static void GetSectionFromStaticMesh(class UStaticMesh* InMesh, int32 LODIndex, int32 SectionIndex, TArray<struct FVector>* Vertices, TArray<int32>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents);
	static void SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, const struct FVector& PlanePosition, const struct FVector& PlaneNormal, bool bCreateOtherHalf, class UProceduralMeshComponent** OutOtherHalfProcMesh, EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KismetProceduralMeshLibrary">();
	}
	static class UKismetProceduralMeshLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKismetProceduralMeshLibrary>();
	}
};
static_assert(alignof(UKismetProceduralMeshLibrary) == 0x000008, "Wrong alignment on UKismetProceduralMeshLibrary");
static_assert(sizeof(UKismetProceduralMeshLibrary) == 0x000028, "Wrong size on UKismetProceduralMeshLibrary");

// Class ProceduralMeshComponent.ProceduralMeshComponent
// 0x0060 (0x04E0 - 0x0480)
class UProceduralMeshComponent final : public UMeshComponent
{
public:
	uint8                                         Pad_1378[0x8];                                     // 0x0478(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bUseComplexAsSimpleCollision;                      // 0x0480(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseAsyncCooking;                                  // 0x0481(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1379[0x6];                                     // 0x0482(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBodySetup*                             ProcMeshBodySetup;                                 // 0x0488(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FProcMeshSection>               ProcMeshSections;                                  // 0x0490(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FKConvexElem>                   CollisionConvexElems;                              // 0x04A0(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FBoxSphereBounds                       LocalBounds;                                       // 0x04B0(0x001C)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_137A[0x4];                                     // 0x04CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UBodySetup*>                     AsyncBodySetupQueue;                               // 0x04D0(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

public:
	void AddCollisionConvexMesh(const TArray<struct FVector>& ConvexVerts);
	void ClearAllMeshSections();
	void ClearCollisionConvexMeshes();
	void ClearMeshSection(int32 SectionIndex);
	void CreateMeshSection(int32 SectionIndex, const TArray<struct FVector>& Vertices, const TArray<int32>& Triangles, const TArray<struct FVector>& Normals, const TArray<struct FVector2D>& UV0, const TArray<struct FColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision);
	void CreateMeshSection_LinearColor(int32 SectionIndex, const TArray<struct FVector>& Vertices, const TArray<int32>& Triangles, const TArray<struct FVector>& Normals, const TArray<struct FVector2D>& UV0, const TArray<struct FVector2D>& UV1, const TArray<struct FVector2D>& UV2, const TArray<struct FVector2D>& UV3, const TArray<struct FLinearColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision);
	void SetMeshSectionVisible(int32 SectionIndex, bool bNewVisibility);
	void UpdateMeshSection(int32 SectionIndex, const TArray<struct FVector>& Vertices, const TArray<struct FVector>& Normals, const TArray<struct FVector2D>& UV0, const TArray<struct FColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents);
	void UpdateMeshSection_LinearColor(int32 SectionIndex, const TArray<struct FVector>& Vertices, const TArray<struct FVector>& Normals, const TArray<struct FVector2D>& UV0, const TArray<struct FVector2D>& UV1, const TArray<struct FVector2D>& UV2, const TArray<struct FVector2D>& UV3, const TArray<struct FLinearColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents);

	int32 GetNumSections() const;
	bool IsMeshSectionVisible(int32 SectionIndex) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralMeshComponent">();
	}
	static class UProceduralMeshComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralMeshComponent>();
	}
};
static_assert(alignof(UProceduralMeshComponent) == 0x000010, "Wrong alignment on UProceduralMeshComponent");
static_assert(sizeof(UProceduralMeshComponent) == 0x0004E0, "Wrong size on UProceduralMeshComponent");
static_assert(offsetof(UProceduralMeshComponent, bUseComplexAsSimpleCollision) == 0x000480, "Member 'UProceduralMeshComponent::bUseComplexAsSimpleCollision' has a wrong offset!");
static_assert(offsetof(UProceduralMeshComponent, bUseAsyncCooking) == 0x000481, "Member 'UProceduralMeshComponent::bUseAsyncCooking' has a wrong offset!");
static_assert(offsetof(UProceduralMeshComponent, ProcMeshBodySetup) == 0x000488, "Member 'UProceduralMeshComponent::ProcMeshBodySetup' has a wrong offset!");
static_assert(offsetof(UProceduralMeshComponent, ProcMeshSections) == 0x000490, "Member 'UProceduralMeshComponent::ProcMeshSections' has a wrong offset!");
static_assert(offsetof(UProceduralMeshComponent, CollisionConvexElems) == 0x0004A0, "Member 'UProceduralMeshComponent::CollisionConvexElems' has a wrong offset!");
static_assert(offsetof(UProceduralMeshComponent, LocalBounds) == 0x0004B0, "Member 'UProceduralMeshComponent::LocalBounds' has a wrong offset!");
static_assert(offsetof(UProceduralMeshComponent, AsyncBodySetupQueue) == 0x0004D0, "Member 'UProceduralMeshComponent::AsyncBodySetupQueue' has a wrong offset!");

}

