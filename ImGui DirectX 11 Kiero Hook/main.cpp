#define WIN32_LEAN_AND_MEAN
#define NO_MIN_MAX

#include <iostream>

#include "version.h"
#include "manager.h"
#include "externals/libs/kiero/minhook/include/MinHook.h"
std::unique_ptr<MainManager> manager;

DWORD WINAPI MainThread(HMODULE hmodule)
{
	bool init_hook = false;
#ifdef _DEBUG
	FILE* file = nullptr;
#endif
	do
	{
		if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success)
		{
			// Initialize manager
			manager = std::make_unique<MainManager>();

			// Bind kiero
			kiero::bind(8, (void**)&manager->m_pGui->oPresent, manager->m_pGui->hkPresent);

#ifdef _DEBUG
			AllocConsole();
			SetConsoleTitleA(APP_NAME);
			freopen_s(&file, "CONOUT$", "w", stdout);
			std::cout << APP_NAME << " successfully initialized...\n";
			std::cout << "Press INS to open window!\n";
#endif

			// Init SDK
			manager->UpdateSDK();

			init_hook = true;
		}
	} while (!init_hook);

	// Handle unloading
	while (manager->m_pConfig->menu.injected)
	{
		if (GetAsyncKeyState(manager->m_pConfig->menu.keyUnload) & 1)
			break;
		Sleep(1000);
	}

#ifdef _DEBUG
	if (file != nullptr)
		fclose(file);
	FreeConsole();
#endif
	manager->m_pConfig->menu.injected = false;
	FreeLibraryAndExitThread(hmodule, 0);

	return 0;
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
		MH_Uninitialize();
		break;
	default:
		break;
	}
	return TRUE;
}