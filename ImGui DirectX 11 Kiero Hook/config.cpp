#include <Windows.h>
#include <iostream>

#include "config.h"

void Config::Hotkeys()
{
	if (GetAsyncKeyState(menu.keyEnable) & 1)
	{
		menu.enabled = !menu.enabled;
	}
}
