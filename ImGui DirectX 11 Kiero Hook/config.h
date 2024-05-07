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
		float speed{ 2500.f };
	} speed;

	struct LevelHack
	{
		bool setLevel{ false };
		int level = 1;
	} levelHack;

	struct MiscHacks
	{
		bool enabled{ false };

		bool addedGuardPhoneTime{ false };
		int phoneTime{ 15 };

		bool addedAccuracy{ false };
		int accuracy{ 99 };

		bool addedDrillImmunityTime{ false };
		int drillImmunityTime{ false };

		bool addedLastBulletsDmg{ false };
		int lastBulletsDmg{ 99 };

		bool addedDamageImmunity{ false };
		int damageImmunity{ 99 };
	} miscHacks;

	struct CashHack
	{
		bool setCash{ false };
		int cashValue{ 694200 };
	} cashHack;

	struct FlyHack
	{
		bool enabled{ false };
		bool noclip{ false };
	} flyHack;

	struct GunHacks
	{
		bool enabled{ false };
	} gunHacks;

	struct JumpHack
	{
		bool enabled{ false };
		int value{ 1 };
	} jumpHack;
};
