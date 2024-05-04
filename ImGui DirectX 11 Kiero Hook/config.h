#pragma once

#include <Windows.h>

class KFNConfig
{
public:
	void Hotkeys();

	struct Menu
	{
		bool enabled{ false };
		bool injected{ true };
		int keyEnable{ VK_INSERT };
		int keyUnload{ VK_END };
	} menu;

	struct Speed
	{
		bool enabled{ false };
		float speed{ 5000.f };
	} speed;

	struct LevelHack
	{
		bool setLevel{ false };
		int level = 1;
	} levelHack;

};
