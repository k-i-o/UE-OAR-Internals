#define WIN32_LEAN_AND_MEAN
#define NO_MIN_MAX

#include <iostream>

#include "version.h"
#include "manager.h"
std::unique_ptr<MainManager> manager;

DWORD WINAPI MainThread(HMODULE hmodule)
{
	bool init_hook = false;
	FILE* file = nullptr;
	do
	{
		if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success)
		{
			AllocConsole();
			SetConsoleTitleA(APP_NAME);
			freopen_s(&file, "CONOUT$", "w", stdout);

			// Initialize manager
			manager = std::make_unique<MainManager>();
		
			// Bind kiero
			kiero::bind(8, (void**)&manager->m_pGui->oPresent, manager->m_pGui->hkPresent);
			
			std::cout << APP_NAME << " successfully initialized...\n";
			std::cout << "Press INS to open window!\n";

			init_hook = true;

		}
	} while (!init_hook);

	// Handle unloading
	while (manager->m_pConfig->menu.injected)
	{
		if (GetAsyncKeyState(manager->m_pConfig->menu.keyUnload) & 1)
		{
			if (file != nullptr)
				fclose(file);
			FreeConsole();
	
			manager->m_pConfig->menu.injected = false;
			Sleep(1000);
			FreeLibraryAndExitThread(hmodule, 0);
		}
	}

	return TRUE;
}

BOOL WINAPI DllMain(HMODULE hMod, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hMod);
		CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)MainThread, hMod, 0, nullptr);
		break;
	case DLL_PROCESS_DETACH:
		kiero::shutdown();
		break;
	default:
		break;
	}
	return TRUE;
}