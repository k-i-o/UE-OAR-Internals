#include "manager.h"
#include "variables.h"
#include "hacks.h"

#include "externals/UEDump/SDK/GunBase_classes.hpp"


// Main
void KFNHacks::RunHacks()
{
	if (!Vars::CharacterClass->HasLoaded_)
		return;

	SpeedHack();
	LevelHack();
	CashHack();
	MiscHacks();
	FlyHack();
	GunHacks();
	JumpHack();
}


// Hacks
void KFNHacks::SpeedHack()
{
	static bool speedState = false;
	if (manager->m_pConfig->speed.enabled)
	{
		Vars::CharacterClass->CharacterMovement->MaxWalkSpeed = manager->m_pConfig->speed.speed;
		Vars::CharacterClass->CharacterMovement->MaxAcceleration = manager->m_pConfig->speed.speed;
	}
	else if(!manager->m_pConfig->speed.enabled && speedState)
	{
		speedState = false;
	}
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
	manager->m_pConfig->levelHack.setLevel = false;
}

void KFNHacks::CashHack()
{
	if (!manager->m_pConfig->cashHack.setCash)
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

	if (manager->m_pConfig->miscHacks.addedGuardPhoneTime)
		Vars::CharacterClass->AddedGuardPhoneTime = manager->m_pConfig->miscHacks.phoneTime;

	if (manager->m_pConfig->miscHacks.addedDrillImmunityTime)
		Vars::CharacterClass->DrillImmunityTime = static_cast<float>(manager->m_pConfig->miscHacks.drillImmunityTime);

	if (manager->m_pConfig->miscHacks.addedLastBulletsDmg)
		Vars::CharacterClass->LastBulletsExtraDamage = manager->m_pConfig->miscHacks.lastBulletsDmg;

	if (manager->m_pConfig->miscHacks.addedDamageImmunity)
		Vars::CharacterClass->DamageImmunity = manager->m_pConfig->miscHacks.damageImmunity;
}

void KFNHacks::FlyHack()
{
	static bool flyHackState = false;
	if (manager->m_pConfig->flyHack.enabled)
	{
		if (manager->m_pConfig->flyHack.noclip)
			Vars::CharacterClass->bActorEnableCollision = false;

		Vars::CharacterClass->CharacterMovement->MaxFlySpeed = 3000.f;
		Vars::CharacterClass->CharacterMovement->MovementMode = SDK::EMovementMode::MOVE_Flying;

		SDK::FVector pos = { 0.f, 0.f, 10.f };
		if (GetAsyncKeyState(VK_SPACE))
			pos = { 0.f, 0.f, 10.f };
		else if (GetAsyncKeyState(VK_LCONTROL))
			pos = { 0.f, 0.f, -10.f };

		Vars::CharacterClass->K2_TeleportTo(Vars::CharacterClass->K2_GetActorLocation() + pos, Vars::CharacterClass->K2_GetActorRotation());
		flyHackState = true;
	}
	else if(!manager->m_pConfig->flyHack.enabled && flyHackState)
	{
		Vars::CharacterClass->bActorEnableCollision = true;
		Vars::CharacterClass->CharacterMovement->MovementMode = SDK::EMovementMode::MOVE_Falling;
		flyHackState = false;
	}
}

void KFNHacks::GunHacks()
{
	// Todo: Actual no recoil
	if (!manager->m_pConfig->gunHacks.enabled)
		return;
	if (!Vars::CharacterClass->HoldingGun)
		return;
	__try
	{
		Vars::CharacterClass->HoldingGun->RecoilStrength = 0.f;
		Vars::CharacterClass->HoldingGun->Accuracy = 99.f;
		Vars::CharacterClass->HoldingGun->CalculatedReloadTime = 0.f;
		Vars::CharacterClass->HoldingGun->Damage = 999;
		Vars::CharacterClass->HoldingGun->BulletsLeft = 1337;
		Vars::CharacterClass->HoldingGun->GunKickMultiplier = 0.f;
	}
	__except(GetExceptionCode() == EXCEPTION_ACCESS_VIOLATION)
	{
		;
	}
}

void KFNHacks::JumpHack()
{
	if (!manager->m_pConfig->jumpHack.enabled)
		return;
	if (Vars::CharacterClass->CharacterMovement == nullptr)
		return;
	Vars::CharacterClass->CharacterMovement->JumpZVelocity = static_cast<float>(manager->m_pConfig->jumpHack.value) * 100.f;
}
