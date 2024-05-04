#pragma once

#include "externals/includes.h"

class GUI
{
public:
	// Vars
	Present oPresent;
	HWND window = NULL;
	WNDPROC oWndProc;
	ID3D11Device* pDevice = NULL;
	ID3D11DeviceContext* pContext = NULL;
	ID3D11RenderTargetView* mainRenderTargetView;

	bool initDx = false;

	// Main
	static HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);

	// ImGui
	void InitImGui();
	void RenderImGui();

	// Menu
	void RenderMainWindow();

	// Helpers - base
	void SetupImGuiFonts();
	void SetupImGuiStyle();

	ImFont* AddFont(float fontSize, const char* fontPath, ImFontConfig* fontCfg = nullptr);
	ImWchar* GetFontGlyphRanges() noexcept;
};
