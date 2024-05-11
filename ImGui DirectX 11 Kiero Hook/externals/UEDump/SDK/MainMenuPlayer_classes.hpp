#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenuPlayer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MainMenuPlayer.MainMenuPlayer_C
// 0x0070 (0x0530 - 0x04C0)
class AMainMenuPlayer_C final : public ACharacter
{
public:
	uint8                                         Pad_2500[0x8];                                     // 0x04B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetInteractionComponent*            WidgetInteraction;                                 // 0x04C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Camera;                                            // 0x04D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FString                                 CurrentTab;                                        // 0x04D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          Ready_;                                            // 0x04E8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2501[0x3];                                     // 0x04E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PlayerLevel;                                       // 0x04EC(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARobberController_C*                    As_Robber_Controller;                              // 0x04F0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 TabName;                                           // 0x04F8(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             StartEmote;                                        // 0x0508(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             ShopOpened;                                        // 0x0518(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void StartEmote__DelegateSignature();
	void ShopOpened__DelegateSignature(class UShopUI_C* Widget);
	void ExecuteUbergraph_MainMenuPlayer(int32 EntryPoint);
	void OpenSetups(class UClass* SelectedMap);
	void OpenSkills();
	void CallEmote();
	void ReceiveBeginPlay();
	void Setup();
	void LeaveGame(const class FString& Reason);
	void SetCurrentTabName(const class FString& Param_Name);
	void SetupInfo(class ARobberController_C* Param_Controller);
	void Unready();
	void ToggleReady();
	void LoadEquippedItems();
	void ReceiveTick(float DeltaSeconds);
	void OpenShop();
	void OpenPlay();
	void OpenLoadout();
	void InpActEvt_Emote_K2Node_InputActionEvent_0(const struct FKey& Key);
	void SetViewToCam(const class FString& CamName);
	void SpawnPlayer();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainMenuPlayer_C">();
	}
	static class AMainMenuPlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMainMenuPlayer_C>();
	}
};
static_assert(alignof(AMainMenuPlayer_C) == 0x000010, "Wrong alignment on AMainMenuPlayer_C");
static_assert(sizeof(AMainMenuPlayer_C) == 0x000530, "Wrong size on AMainMenuPlayer_C");
static_assert(offsetof(AMainMenuPlayer_C, UberGraphFrame) == 0x0004C0, "Member 'AMainMenuPlayer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AMainMenuPlayer_C, WidgetInteraction) == 0x0004C8, "Member 'AMainMenuPlayer_C::WidgetInteraction' has a wrong offset!");
static_assert(offsetof(AMainMenuPlayer_C, Camera) == 0x0004D0, "Member 'AMainMenuPlayer_C::Camera' has a wrong offset!");
static_assert(offsetof(AMainMenuPlayer_C, CurrentTab) == 0x0004D8, "Member 'AMainMenuPlayer_C::CurrentTab' has a wrong offset!");
static_assert(offsetof(AMainMenuPlayer_C, Ready_) == 0x0004E8, "Member 'AMainMenuPlayer_C::Ready_' has a wrong offset!");
static_assert(offsetof(AMainMenuPlayer_C, PlayerLevel) == 0x0004EC, "Member 'AMainMenuPlayer_C::PlayerLevel' has a wrong offset!");
static_assert(offsetof(AMainMenuPlayer_C, As_Robber_Controller) == 0x0004F0, "Member 'AMainMenuPlayer_C::As_Robber_Controller' has a wrong offset!");
static_assert(offsetof(AMainMenuPlayer_C, TabName) == 0x0004F8, "Member 'AMainMenuPlayer_C::TabName' has a wrong offset!");
static_assert(offsetof(AMainMenuPlayer_C, StartEmote) == 0x000508, "Member 'AMainMenuPlayer_C::StartEmote' has a wrong offset!");
static_assert(offsetof(AMainMenuPlayer_C, ShopOpened) == 0x000518, "Member 'AMainMenuPlayer_C::ShopOpened' has a wrong offset!");

}

