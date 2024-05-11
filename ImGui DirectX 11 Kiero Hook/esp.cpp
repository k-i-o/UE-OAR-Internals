#include "manager.h"
#include "esp.h"


void KFNEsp::RenderESP()
{
	if (!manager->m_pConfig->esp.enabled)
		return;
	RenderNameplates();
}

void KFNEsp::RenderNameplates()
{
	if (!Vars::MyController) 
		return;
	if (!Vars::MyController->PlayerCameraManager) 
		return;

	for (int i = 0; i < Vars::World->Levels.Num(); i++) 
	{
		const auto currLevel = Vars::World->Levels[i];

		if (!currLevel) 
			continue;

		for (int j = 0; j < currLevel->Actors.Num(); j++) 
		{
			const auto currActor = currLevel->Actors[j];

			// Continue if actor is bad
			if (!currActor) 
				continue;
			if(!currActor->RootComponent)
				continue;
			if (Fns::IsBadPoint(currActor)) 
				continue;

			// Continue if actor isn't police
			std::string actor_name = currActor->GetFullName();
			if (actor_name.find("NPC_Police") == std::string::npos && actor_name.find("NPC_Guard") == std::string::npos) 
				continue;

			const auto location = currActor->K2_GetActorLocation();

			if (location.X == 0.f || location.Y == 0.f || location.Z == 0.f) 
				continue;

			// SDK::FVector origin;
			// SDK::FVector boxExtent;
			// currActor->GetActorBounds(true, &origin, &boxExtent, false);
			// SDK::FVector footLocation = { origin.X, origin.Y, origin.Z };
			// SDK::FVector headLocation = { origin.X, origin.Y, origin.Z + boxExtent.Z * 0.5f };
			SDK::FVector footLocation;
			SDK::FVector boxExtent;
			currActor->GetActorBounds(true, &footLocation, &boxExtent, false);

			SDK::FVector2D w2sPos{};
			if (!Vars::MyController->ProjectWorldLocationToScreen(footLocation, &w2sPos, false))
				continue;

			w2sPos.X -= ImGui::CalcTextSize(currActor->GetName().c_str()).x * 0.5f;
			ImGui::GetBackgroundDrawList()->AddText(ImVec2{ w2sPos.X, w2sPos.Y }, IM_COL32(255, 0, 0, 255), currActor->GetName().c_str());

		}

	}
}
