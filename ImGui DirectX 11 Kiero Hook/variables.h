#pragma once

#include "externals/UEDump/SDK.hpp"

namespace Vars {
	inline bool Debug = true;
	inline bool ShowMenu = true;

	inline float rainbowColor[3]{};
	inline bool rainbow = true;
	inline bool rainbowChams = false;
	inline bool rainbowESP = false;

	inline bool isVIsible{};
	inline ImDrawList* draw_list{};

	inline SDK::UEngine* Engine{};
	inline SDK::UWorld* World{};
	//inline SDK::AActor* actor{};
	//inline SDK::FVector location{};
	inline SDK::APlayerController* MyController{};
	//inline SDK::TArray<SDK::AActor*> actors{};
	//inline SDK::AActor* LocalP{};
	inline SDK::APlayerCharacter_C* CharacterClass{};
	inline SDK::APawn* MyPawn{};
	inline SDK::TArray<class SDK::APlayerState*> PlayersArray{};
	inline SDK::TArray<class SDK::AActor*> ActorsArray{};
}