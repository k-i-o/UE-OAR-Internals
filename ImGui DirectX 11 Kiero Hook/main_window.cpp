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

	ImGui::Checkbox("Speed", &manager->m_pConfig->speed.enabled);
	if (manager->m_pConfig->speed.enabled)
	{
		ImGui::Indent();
		ImGui::SliderFloat("##speedValue", &manager->m_pConfig->speed.speed, 0.f, 3000.f);
		ImGui::Unindent();
	}
	ImGui::SliderInt("Level", &manager->m_pConfig->levelHack.level, 0, 9999);
	if(ImGui::Button("Set Level"))
	{
		manager->m_pConfig->levelHack.setLevel = true;
	}

	ImGui::SliderInt("Cash", &manager->m_pConfig->cashHack.cashValue, 0, 999999999);
	if (ImGui::Button("Set Cash"))
	{
		manager->m_pConfig->cashHack.setCash = true;
	}

	ImGui::Checkbox("Fly hack", &manager->m_pConfig->flyHack.enabled);
	if(manager->m_pConfig->flyHack.enabled)
	{
		ImGui::Indent();
		ImGui::Checkbox("Noclip", &manager->m_pConfig->flyHack.noclip);
		ImGui::Unindent();
	}

	ImGui::Checkbox("Misc hacks", &manager->m_pConfig->miscHacks.enabled);
	if(manager->m_pConfig->miscHacks.enabled)
	{
		ImGui::Indent();

		ImGui::Checkbox("Guard phone time", &manager->m_pConfig->miscHacks.addedGuardPhoneTime);
		if (manager->m_pConfig->miscHacks.addedGuardPhoneTime)
			ImGui::SliderInt("##timeGuardPhone", &manager->m_pConfig->miscHacks.phoneTime, 0, 999);

		ImGui::Checkbox("Accuracy", &manager->m_pConfig->miscHacks.addedAccuracy);
		if (manager->m_pConfig->miscHacks.addedAccuracy)
			ImGui::SliderInt("##valueAccuracy", &manager->m_pConfig->miscHacks.accuracy, 0, 999);

		ImGui::Checkbox("Drill immunity time", &manager->m_pConfig->miscHacks.addedDrillImmunityTime);
		if (manager->m_pConfig->miscHacks.addedDrillImmunityTime)
			ImGui::SliderInt("##timeImmunityDrill", &manager->m_pConfig->miscHacks.drillImmunityTime, 0, 999);

		ImGui::Checkbox("Last bullets damage", &manager->m_pConfig->miscHacks.addedLastBulletsDmg);
		if (manager->m_pConfig->miscHacks.addedLastBulletsDmg)
			ImGui::SliderInt("##damageLastBullets", &manager->m_pConfig->miscHacks.lastBulletsDmg, 0, 999);

		ImGui::Checkbox("Damage immunity", &manager->m_pConfig->miscHacks.addedDamageImmunity);
		if (manager->m_pConfig->miscHacks.addedDamageImmunity)
			ImGui::SliderInt("##immunityDamage", &manager->m_pConfig->miscHacks.damageImmunity, 0, 999);

		ImGui::Unindent();
	}

#ifdef _DEBUG
	if (ImGui::Button("Dump UObjects"))
		manager->DumpUObjects();
#endif

	ImGui::End();
}
