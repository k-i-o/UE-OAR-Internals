#include "kfn_manager.h"
#include "kfn_esp.h"

void KFNEsp::RenderESP()
{
	if (!manager->m_pConfig->esp.enabled)
		return;
	ActorsLoop();
}

void KFNEsp::ActorsLoop()
{
	if (!Vars::MyController)
		return;
	if (!Vars::MyController->PlayerCameraManager)
		return;
	if (Vars::World->Levels.Num() == 0)
		return;

	// Get current level
	SDK::ULevel* currLevel = Vars::World->Levels[0];
	if (!currLevel)
		return;

	for (int j = 0; j < currLevel->Actors.Num(); j++)
	{
		SDK::AActor* currActor = currLevel->Actors[j];

		// Continue if actor is bad
		if (!currActor)
			continue;
		if (!currActor->RootComponent)
			continue;
		if (Fns::IsBadPoint(currActor))
			continue;

		// Continue if invalid location
		const auto location = currActor->K2_GetActorLocation();
		if (location.X == 0.f || location.Y == 0.f || location.Z == 0.f)
			continue;

		EspPolice(currActor);
	}
}


void KFNEsp::EspPolice(SDK::AActor* currActor)
{
	// Todo: Return if police ESP is disabled

	// Actor isn't police
	if (currActor->GetFullName().find("NPC_Police") == std::string::npos && currActor->GetFullName().find("NPC_Guard") == std::string::npos)
		return;

	// Get important information
	SDK::FVector footLocation;
	SDK::FVector boxExtent;
	currActor->GetActorBounds(true, &footLocation, &boxExtent, false);
	SDK::FVector headLocation = { footLocation.X, footLocation.Y, footLocation.Z + boxExtent.Z * 0.5f };

	// Do W2S
	SDK::FVector2D footPos{};
	SDK::FVector2D headPos{};
	if (!Vars::MyController->ProjectWorldLocationToScreen(footLocation, &footPos, false))
		return;
	if (!Vars::MyController->ProjectWorldLocationToScreen(headLocation, &headPos, false))
		return;

	// Render ESP
	RenderNameplate(footPos, currActor->GetName());
	RenderBox(headPos, footPos);
}
