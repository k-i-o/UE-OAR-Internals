#pragma once

class KFNEsp
{
public:
	void RenderESP();

private:
	void ActorsLoop();
	void EspPolice(SDK::AActor* currActor);

	// Base
	void RenderNameplate(SDK::FVector2D pos, std::string name);
};
