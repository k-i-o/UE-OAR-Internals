#include "manager.h"
#include "version.h"

#include "gui.h"

void KFNGUI::RenderMainWindow()
{
	if (!manager->m_pConfig->menu.enabled)
		return;

	ImVec2 windowSize = ImVec2(800, 600);
	std::string windowName = "##mainWindow";
	bool* windowOpen = &manager->m_pConfig->menu.enabled;
	ImGuiWindowFlags windowFlags = ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar |
		ImGuiWindowFlags_NoScrollWithMouse | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_AlwaysUseWindowPadding;

	// Set first time window size
	ImGui::SetNextWindowSize(windowSize, ImGuiCond_Once);

	ImGui::Begin(windowName.c_str(), windowOpen, windowFlags);

	ImGui::SetCursorPos(ImVec2{ (windowSize.x - ImGui::CalcTextSize(APP_NAME).x) * 0.5f, ImGui::CalcTextSize(APP_NAME).y * 0.5f });
	ImGui::Text(APP_NAME);
	bool v = false;
	ImGui::Checkbox("IhateNiggers!", &v);

	ImGui::End();
}
