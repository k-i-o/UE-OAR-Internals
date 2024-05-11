#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MenuUIInteraface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "ShopItemCategory_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass menuUIInteraface.menuUIInteraface_C
// 0x0000 (0x0028 - 0x0028)
class IMenuUIInteraface_C final : public IInterface
{
public:
	void Remove();
	void RefreshInventory();
	void RemoveloadoutCategory();
	void ChangeCategory(EShopItemCategory Category);
	void DragItemFromCategory(EShopItemCategory Category);
	void CancelDrag();
	void PreviewItem(class UClass* ItemInfo, int32 SalePrice);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"menuUIInteraface_C">();
	}
	static class IMenuUIInteraface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMenuUIInteraface_C>();
	}
};
static_assert(alignof(IMenuUIInteraface_C) == 0x000008, "Wrong alignment on IMenuUIInteraface_C");
static_assert(sizeof(IMenuUIInteraface_C) == 0x000028, "Wrong size on IMenuUIInteraface_C");

}

