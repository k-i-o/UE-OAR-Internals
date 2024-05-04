#include "manager.h"

MainManager::MainManager() noexcept :
    m_pGui(std::make_unique<GUI>()),
	m_pConfig(std::make_unique<Config>()) {}

void MainManager::InitSDK()
{
	Vars::World = SDK::UWorld::GetWorld();
	Vars::Engine = SDK::UEngine::GetEngine();

	Vars::PlayerArray = Vars::World->GameState->PlayerArray;
	Vars::MyController = Vars::World->OwningGameInstance->LocalPlayers[0]->PlayerController;
}
