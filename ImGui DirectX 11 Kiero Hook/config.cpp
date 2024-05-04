#include <Windows.h>
#include <iostream>

#include "config.h"

void KFNConfig::Hotkeys()
{
	if (GetAsyncKeyState(menu.keyEnable) & 1)
	{
		menu.enabled = !menu.enabled;
	}
}
