#include "manager.h"
#include "variables.h"
#include "hacks.h"


// Main
void KFNHacks::RunHacks()
{
	SpeedHack();
	LevelHack();
	CashHack();
	MiscHacks();
}


// Hacks
void KFNHacks::SpeedHack()
{
	if (!manager->m_pConfig->speed.enabled)
		return;
	if (!Vars::CharacterClass)
		return;
	if (!Vars::CharacterClass->HasLoaded_)
		return;

	Vars::CharacterClass->CharacterMovement->MaxWalkSpeed = manager->m_pConfig->speed.speed;
	Vars::CharacterClass->CharacterMovement->MaxAcceleration = manager->m_pConfig->speed.speed;
}

void KFNHacks::LevelHack()
{
	if (!manager->m_pConfig->levelHack.setLevel)
		return;
	if (!Vars::CharacterClass)
		return;
	if (!Vars::CharacterClass->HasLoaded_)
		return;
	if (!Vars::CharacterClass->PCController)
		return;
	if (!Vars::CharacterClass->PCController->Level)
		return;

	Vars::CharacterClass->PCController->Level = static_cast<UC::int32>(manager->m_pConfig->levelHack.level);
	Vars::CharacterClass->PCController->SaveLevel();
	manager->m_pConfig->levelHack.setLevel = false;
}

void KFNHacks::CashHack()
{
	if (!manager->m_pConfig->cashHack.setCash)
		return;
	if (!Vars::CharacterClass)
		return;
	if (!Vars::CharacterClass->HasLoaded_)
		return;
	if (!Vars::CharacterClass->PCController)
		return;
	if (!Vars::CharacterClass->PCController->Cash)
		return;

	Vars::CharacterClass->PCController->Cash = static_cast<UC::int32>(manager->m_pConfig->cashHack.cashValue);
	Vars::CharacterClass->PCController->SaveCash();
	manager->m_pConfig->cashHack.setCash = false;
}

void KFNHacks::MiscHacks()
{
	if (!manager->m_pConfig->miscHacks.enabled)
		return;
	if (!Vars::CharacterClass)
		return;
	if (!Vars::CharacterClass->HasLoaded_)
		return;

	if (manager->m_pConfig->miscHacks.addedGuardPhoneTime)
		Vars::CharacterClass->AddedGuardPhoneTime = manager->m_pConfig->miscHacks.phoneTime;

	if (manager->m_pConfig->miscHacks.addedAccuracy)
		Vars::CharacterClass->AddedAccuracy = static_cast<float>(manager->m_pConfig->miscHacks.accuracy);

	if (manager->m_pConfig->miscHacks.addedDrillImmunityTime)
		Vars::CharacterClass->DrillImmunityTime = static_cast<float>(manager->m_pConfig->miscHacks.drillImmunityTime);

	if (manager->m_pConfig->miscHacks.addedLastBulletsDmg)
		Vars::CharacterClass->LastBulletsExtraDamage = manager->m_pConfig->miscHacks.lastBulletsDmg;

	if (manager->m_pConfig->miscHacks.addedDamageImmunity)
		Vars::CharacterClass->DamageImmunity = manager->m_pConfig->miscHacks.damageImmunity;
}
