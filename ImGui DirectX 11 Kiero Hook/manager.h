#pragma once

#include <memory>

#include "gui.h"
#include "config.h"
#include "hacks.h"

#define ASSERT(x) { MessageBoxA(NULL, NULL, x, NULL); exit(0); }

class MainManager
{
public:
	MainManager() noexcept;

	bool UpdateSDK();
	void DumpUObjects();

	std::unique_ptr<KFNGUI>    m_pGui;
	std::unique_ptr<KFNConfig> m_pConfig;
	std::unique_ptr<KFNHacks>  m_pHacks;
};

extern std::unique_ptr<MainManager> manager;
