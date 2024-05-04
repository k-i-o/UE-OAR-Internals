#include "manager.h"
#include "variables.h"
#include "hacks.h"


// Main
void KFNHacks::RunHacks()
{
	SpeedHack();
	LevelHack();
}


// Hacks
void KFNHacks::SpeedHack()
{
	if (!manager->m_pConfig->speed.enabled)
		return;
	if (!Vars::CharacterClass)
		return;

	Vars::CharacterClass->CharacterMovement->MaxWalkSpeed = manager->m_pConfig->speed.speed;
	Vars::CharacterClass->CharacterMovement->MaxAcceleration = manager->m_pConfig->speed.speed;
}

void KFNHacks::LevelHack()
{
	if (!manager->m_pConfig->levelHack.setLevel)
		return;
	if (!Vars::CharacterClass->PCController)
		return;
	if (!Vars::CharacterClass->PCController->Level)
		return;

	Vars::CharacterClass->PCController->Level = static_cast<UC::int32>(manager->m_pConfig->levelHack.level);
	Vars::CharacterClass->PCController->SaveLevel();
}
