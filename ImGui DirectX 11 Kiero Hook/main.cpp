#include "externals/includes.h"

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

Present oPresent;
HWND window = NULL;
WNDPROC oWndProc;
ID3D11Device* pDevice = NULL;
ID3D11DeviceContext* pContext = NULL;
ID3D11RenderTargetView* mainRenderTargetView;

static void InitImGui()
{
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO();
	io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
	ImGui_ImplWin32_Init(window);
	ImGui_ImplDX11_Init(pDevice, pContext);
}

static LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {

	if (Vars::ShowMenu && ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
		return true;

	//if (Vars::ShowMenu) return true;

	return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
}

bool init = false;
static HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{
	if (!init)
	{
		if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&pDevice)))
		{
			pDevice->GetImmediateContext(&pContext);
			DXGI_SWAP_CHAIN_DESC sd;
			pSwapChain->GetDesc(&sd);
			window = sd.OutputWindow;
			ID3D11Texture2D* pBackBuffer;
			pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
			pDevice->CreateRenderTargetView(pBackBuffer, NULL, &mainRenderTargetView);
			pBackBuffer->Release();
			oWndProc = (WNDPROC)SetWindowLongPtr(window, GWLP_WNDPROC, (LONG_PTR)WndProc);
			InitImGui();
			init = true;
		}

		else
			return oPresent(pSwapChain, SyncInterval, Flags);
	}

	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	ImGui::Begin("ImGui Window");
	ImGui::End();


	// cheats

	//for(int i = 0; i < Vars::PlayerArray.Num(); i++)
	//{
	//	if (Vars::PlayerArray[i] == nullptr) continue;

	//	if (Vars::PlayerArray[i]->K2_GetActorLocation().X == 0.f) continue;

	//	if (Vars::PlayerArray[i]->K2_GetActorLocation().X == Vars::PlayerArray[0]->K2_GetActorLocation().X) continue;

	//	printf("Player %d coords: %f %f %f\n", i, Vars::PlayerArray[i]->K2_GetActorLocation().X, Vars::PlayerArray[i]->K2_GetActorLocation().Y, Vars::PlayerArray[i]->K2_GetActorLocation().Z);
	//}


	// always 0 :/
	//printf("MyController coords: %f %f %f\n", Vars::PlayerArray[0]->K2_GetActorLocation().X, Vars::PlayerArray[0]->K2_GetActorLocation().Y, Vars::PlayerArray[0]->K2_GetActorLocation().Z);

	//Vars::CharacterClass = static_cast<SDK::APlayerCharacter_C*>(Vars::MyPawn);

	//printf("Health: %f\n", Vars::CharacterClass->Health);

	////auto LocalPos = Vars::CharacterClass->ReplicatedMovement.Location;

	//Vars::CharacterClass->MaxHealth = 999.f;
	//Vars::CharacterClass->Health = 999.f;


	ImGui::Render();

	if (GetAsyncKeyState(VK_INSERT) & 1)
	{
		Vars::ShowMenu = !Vars::ShowMenu;
	}

	//if (GetKeyState(KEYS::DEATTACH_KEY) & 1)
	//{
	//	MH_DisableHook(MH_ALL_HOOKS);
	//	MH_Uninitialize();
	//	CheatMenuVariables::ShowMenu = false;
	//}

	pContext->OMSetRenderTargets(1, &mainRenderTargetView, NULL);
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
	return oPresent(pSwapChain, SyncInterval, Flags);
}

static void Setup() {
	if (Vars::Debug) {
		AllocConsole();
		AttachConsole(GetCurrentProcessId());
		SetConsoleTitle("OAR");
		FILE* f;
		freopen_s(&f, "CONOUT$", "w", stdout);
		system("cls");

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x03);
		printf("\n****************************************************************************");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
		printf(R"(  
     __  __     __     ______     ______     ______     _____     ______	
    /\ \/ /    /\ \   /\  __ \   /\  ___\   /\  __ \   /\  __-.  /\  ___\	
    \ \  _'-.  \ \ \  \ \ \/\ \  \ \ \____  \ \ \/\ \  \ \ \/\ \ \ \  __\   
     \ \_\ \_\  \ \_\  \ \_____\  \ \_____\  \ \_____\  \ \____-  \ \_____\	
      \/_/\/_/   \/_/   \/_____/   \/_____/   \/_____/   \/____/   \/_____/
	)");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x03);
		printf("\n****************************************************************************\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0F);
	}

	Vars::World = SDK::UWorld::GetWorld();
	Vars::Engine = SDK::UEngine::GetEngine();

	Vars::PlayerArray = Vars::World->GameState->PlayerArray;
	Vars::MyController = Vars::World->OwningGameInstance->LocalPlayers[0]->PlayerController;

	kiero::bind(8, (void**)&oPresent, hkPresent);

}

static DWORD WINAPI MainThread(LPVOID lpReserved)
{

	bool init_hook = false;
	do
	{
		if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success)
		{
			Setup();
			init_hook = true;
		}
	} while (!init_hook);
	return TRUE;
}

static BOOL WINAPI DllMain(HMODULE hMod, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hMod);
		CreateThread(nullptr, 0, MainThread, hMod, 0, nullptr);
		break;
	case DLL_PROCESS_DETACH:
		kiero::shutdown();
		break;
	}
	return TRUE;
}