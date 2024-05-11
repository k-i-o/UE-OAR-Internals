#include "manager.h"
#include "esp.h"

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
}


void KFNEsp::EspPolice(SDK::AActor* currActor)
{
	// Todo: Return if police ESP is disabled

	// Actor isn't police
	std::string actorName = currActor->GetFullName();
	if (actorName.find("NPC_Police") == std::string::npos && actorName.find("NPC_Guard") == std::string::npos)
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
	if (!Vars::MyController->ProjectWorldLocationToScreen(footLocation, &headPos, false))
		return;

	// Render ESP
	RenderNameplate(footPos, currActor->GetName());
	RenderBox(headPos, footPos);
}


// Base
void KFNEsp::RenderNameplate(SDK::FVector2D pos, std::string name)
{
	// Centered nameplate
	pos.X -= ImGui::CalcTextSize(name.c_str()).x * 0.5f;
	ImGui::GetBackgroundDrawList()->AddText(ImVec2{ pos.X, pos.Y }, IM_COL32(255, 0, 0, 255), name.c_str());
}

void KFNEsp::RenderBox(SDK::FVector2D headPos, SDK::FVector2D footPos)
{
	const float height = GetPlayerHeight(ImVec2{ headPos.X, headPos.Y }, ImVec2{ footPos.X, footPos.Y });
	const float width = height * 0.5f;

	const ImVec2 upperLeft = { footPos.X - width * 0.5f, footPos.Y - height };
	const ImVec2 lowerRight = { footPos.X + width * 0.5f, footPos.Y };
	ImGui::GetBackgroundDrawList()->AddRect(upperLeft,
		lowerRight,
		IM_COL32(0, 0, 0, 225.f),
		0.f,
		ImDrawCornerFlags_All,
		2.5f);
	ImGui::GetBackgroundDrawList()->AddRect(upperLeft, lowerRight, IM_COL32(255, 0, 0, 255), 0.f, ImDrawCornerFlags_All, 1.5f);
}
