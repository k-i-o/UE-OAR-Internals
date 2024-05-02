#pragma once

//#include "externals/UEDump/SDK/Basic.hpp"
//#include "externals/UEDump/SDK/Engine_classes.hpp"
#include "externals/UEDump/SDK.hpp"

namespace Vars {
	bool Debug = true;
	bool ShowMenu = true;

	SDK::UEngine* Engine{};
	SDK::UWorld* World{};
	//inline SDK::AActor* actor{};
	//inline SDK::FVector location{};
	SDK::APlayerController* MyController{};
	//inline SDK::TArray<SDK::AActor*> actors{};
	//inline SDK::AActor* LocalP{};
	SDK::APlayerCharacter_C* CharacterClass{};
	SDK::APawn* MyPawn{};
	SDK::TArray<class SDK::APlayerState*> PlayerArray{};
}