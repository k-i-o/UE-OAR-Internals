#include "manager.h"

MainManager::MainManager() noexcept :
    m_pGui(std::make_unique<KFNGUI>()),
	m_pConfig(std::make_unique<KFNConfig>()),
	m_pHacks(std::make_unique<KFNHacks>()) {}

void MainManager::InitSDK()
{
	Vars::World = SDK::UWorld::GetWorld();
	Vars::Engine = SDK::UEngine::GetEngine();

	Vars::PlayerArray = Vars::World->GameState->PlayerArray;
	Vars::MyController = Vars::World->OwningGameInstance->LocalPlayers[0]->PlayerController;

	Vars::MyPawn = Vars::MyController->AcknowledgedPawn;
	Vars::CharacterClass = static_cast<SDK::APlayerCharacter_C*>(Vars::MyPawn);
}

void MainManager::DumpUObjects()
{
    /* Print the full-name of an object ("ClassName PackageName.OptionalOuter.ObjectName") */
    std::cout << Vars::Engine->ConsoleClass->GetFullName() << std::endl;

    /* Manually iterating GObjects and printing the FullName of every UObject that is a Pawn (not recommended) */
    for (int i = 0; i < SDK::UObject::GObjects->Num(); i++)
    {
        SDK::UObject* Obj = SDK::UObject::GObjects->GetByIndex(i);

        if (!Obj)
            continue;

        if (!Obj->IsDefaultObject())
            continue;

        /* Only the 'IsA' check using the cast flags is required, the other 'IsA' is redundant */
        if (Obj->IsA(SDK::APawn::StaticClass()) || Obj->HasTypeFlag(SDK::EClassCastFlags::Pawn))
        {
            std::cout << Obj->GetFullName() << "\n";
        }
    }
}
