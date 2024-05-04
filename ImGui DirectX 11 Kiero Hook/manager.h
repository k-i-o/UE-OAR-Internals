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

	void InitSDK();

	std::unique_ptr<GUI>    m_pGui;
	std::unique_ptr<Config> m_pConfig;
	std::unique_ptr<Hacks>  m_pHacks;
};

extern std::unique_ptr<MainManager> manager;
