#include "manager.h"

MainManager::MainManager() noexcept :
    m_pGui(std::make_unique<GUI>()),
	m_pConfig(std::make_unique<Config>()) {}
