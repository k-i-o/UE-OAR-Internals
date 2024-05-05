#include "manager.h"
#include "variables.h"
#include "hacks.h"

#include "externals/UEDump/SDK/GunBase_classes.hpp"


// Main
void KFNHacks::RunHacks()
{
	SpeedHack();
	LevelHack();
	CashHack();
	MiscHacks();
	FlyHack();
	GunHacks();
	ESP();
	Aimbot();
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

void KFNHacks::FlyHack()
{
	// Todo: Improve with camera mgr
	if (!manager->m_pConfig->flyHack.enabled)
		return;
	if (!Vars::CharacterClass)
		return;
	if (!Vars::CharacterClass->HasLoaded_)
		return;

	if (manager->m_pConfig->flyHack.noclip)
		Vars::CharacterClass->bActorEnableCollision = false;

	Vars::CharacterClass->CharacterMovement->MaxFlySpeed = 3000.f;
	Vars::CharacterClass->CharacterMovement->MovementMode = SDK::EMovementMode::MOVE_Flying;

	if (GetAsyncKeyState(VK_SPACE))
	{
		SDK::FVector posUp = { 0.f, 0.f, 10.f };
		Vars::CharacterClass->CharacterMovement->AddInputVector(posUp, true);
	}
	if (GetAsyncKeyState(VK_LCONTROL))
	{
		SDK::FVector posDown = { 0.f, 0.f, -10.f };
		Vars::CharacterClass->CharacterMovement->AddInputVector(posDown, true);
	}
}

void KFNHacks::GunHacks()
{
	// Todo: Actual no recoil
	if (!manager->m_pConfig->gunHacks.enabled)
		return;
	if (!Vars::CharacterClass)
		return;
	if (!Vars::CharacterClass->HasLoaded_)
		return;
	if (!Vars::CharacterClass->HoldingGun)
		return;

	Vars::CharacterClass->HoldingGun->RecoilStrength = 0.f;
	Vars::CharacterClass->HoldingGun->Accuracy = 99.f;
	Vars::CharacterClass->HoldingGun->CalculatedReloadTime = 0.f;
	Vars::CharacterClass->HoldingGun->Damage = 999;
	Vars::CharacterClass->HoldingGun->BulletsLeft = 1337;
	Vars::CharacterClass->HoldingGun->GunKickMultiplier = 0.f;
}

void KFNHacks::ESP() {
	if (!manager->m_pConfig->espHacks.enabled) return;
	if (!Vars::MyController) {
		std::cout << "No controller" << std::endl;
		return;
	}
	if (!Vars::MyController->PlayerCameraManager) {
		std::cout << "No camera manager" << std::endl;
		return;
	}


	Vars::ActorsArray = Vars::World->OwningGameInstance->LocalPlayers[0]->ViewportClient->World->Levels[0]->Actors;

	std::cout << "Actors: " << Vars::ActorsArray.Num() << std::endl;

	for (int i = 0; i < Vars::ActorsArray.Num(); i++)
	{
		auto currActor = Vars::ActorsArray[i];

		if (!currActor) continue;
		if (Fns::IsBadPoint(currActor)) continue;
		if (!currActor->IsA(SDK::ANPCBase_C::StaticClass())) continue;

		SDK::FVector2D w2s_pos{};
		float Visible[3]{ 0.f, 0.f, 1.f };
		if (Vars::MyController->ProjectWorldLocationToScreen(currActor->K2_GetActorLocation(), &w2s_pos, false))
		{
			Fns::DrawLine({ 1920 / 2, 0 }, w2s_pos, Visible, 1.f, false, false);
		}

	}
}

void KFNHacks::Aimbot() {
	if (!manager->m_pConfig->aimbotHacks.enabled) return;
	if (!Vars::MyController) {
		std::cout << "No controller" << std::endl;
		return;
	}
	if (!Vars::MyController->PlayerCameraManager) {
		std::cout << "No camera manager" << std::endl;
		return;	
	}

	SDK::AActor* closest_actor{};
	SDK::FRotator closest_actor_rotation{};
	float MaxDistance = FLT_MAX;
	float CMaxDistance = 0;

	Vars::ActorsArray = Vars::World->OwningGameInstance->LocalPlayers[0]->ViewportClient->World->Levels[0]->Actors;

	std::cout << "Actors: " << Vars::ActorsArray.Num() << std::endl;

	auto CameraLocation = Vars::MyController->PlayerCameraManager->GetCameraLocation();
	auto CameraRotation = Vars::MyController->PlayerCameraManager->GetCameraRotation();

	for (int i = 0; i < Vars::ActorsArray.Num(); i++)
	{
		auto currActor = Vars::ActorsArray[i];

		if (!currActor) continue;
		if (Fns::IsBadPoint(currActor)) continue;
		if (!currActor->IsA(SDK::ANPCBase_C::StaticClass())) continue;

		SDK::FVector2D w2s_pos{};
		if (Vars::MyController->ProjectWorldLocationToScreen(currActor->K2_GetActorLocation(), &w2s_pos, false))
		{
			std::cout << "Actor pos: " << w2s_pos.X << " " << w2s_pos.Y << std::endl;
			auto rot = SDK::UKismetMathLibrary::FindLookAtRotation(CameraLocation, currActor->K2_GetActorLocation());

			SDK::FVector2D screen_middle = { 1920 / 2, 1080 / 2 };

			float aimbot_distance = SDK::UKismetMathLibrary::Distance2D(w2s_pos, screen_middle);

			if (aimbot_distance > CMaxDistance && aimbot_distance < MaxDistance)
			{
				MaxDistance = aimbot_distance;
				closest_actor = currActor;
				closest_actor_rotation = rot;
			}
		}

	}

	if (closest_actor && GetAsyncKeyState(VK_RBUTTON))
	{
		std::cout << "Aiming at pos " << closest_actor_rotation.Pitch << " " << closest_actor_rotation.Yaw << " " << closest_actor_rotation.Roll << std::endl;
		Vars::MyController->SetControlRotation(closest_actor_rotation);
	}
}