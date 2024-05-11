#pragma once

class KFNEsp
{
public:
	void RenderESP();

private:
	void ActorsLoop();
	void EspPolice(SDK::AActor* currActor);

	// Base
	float GetPlayerHeight(ImVec2 head, ImVec2 feet)
	{
		const float temp1 = powf(head.x - feet.x, 2.f);
		const float temp2 = powf(head.y - feet.y, 2.f);
		const float height = sqrtf(temp1 + temp2);
		return height;
	}
	void RenderNameplate(SDK::FVector2D pos, std::string name);
};
