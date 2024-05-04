#include "manager.h"

MainManager::MainManager() noexcept :
    m_pGui(std::make_unique<KFNGUI>()),
	m_pConfig(std::make_unique<KFNConfig>()),
	m_pHacks(std::make_unique<KFNHacks>()) {}

void MainManager::InitSDK()
{
	Vars::World = SDK::UWorld::GetWorld();
	Vars::Engine = SDK::UEngine::GetEngine();

	Vars::PlayerArray = Vars::World->GameState->PlayerArray;
	Vars::MyController = Vars::World->OwningGameInstance->LocalPlayers[0]->PlayerController;
}
