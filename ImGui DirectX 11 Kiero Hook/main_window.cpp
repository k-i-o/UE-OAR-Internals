#include "manager.h"
#include "version.h"

#include "gui.h"

void GUI::RenderMainWindow()
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
	ImGui::End();
}
