#include "color.h"
#include "manager.h"
#include "version.h"

#include "gui.h"

void KFNGUI::RenderMainWindow()
{
	if (!manager->m_pConfig->menu.enabled)
		return;

	ImVec2 windowSize = ImVec2(700, 700);
	std::string windowName = "KFN";
	bool* windowOpen = &manager->m_pConfig->menu.enabled;
	ImGuiWindowFlags windowFlags = ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar |
		ImGuiWindowFlags_NoScrollWithMouse | ImGuiWindowFlags_AlwaysUseWindowPadding;

	// Set first time window size
	ImGui::SetNextWindowSize(windowSize, ImGuiCond_Once);

	const float opacity = 255.f * 0.85f;
	Colors::windowBgColor.a = opacity;
	ImGui::PushStyleColor(ImGuiCol_WindowBg, Colors::windowBgColor.imGui());
	ImGui::Begin(windowName.c_str(), windowOpen, windowFlags);

	ImGui::SliderInt("Level", &manager->m_pConfig->levelHack.level, 0, 9999);
	if (ImGui::Button("Set Level"))
	{
		manager->m_pConfig->levelHack.setLevel = true;
	}

	ImGui::SliderInt("Cash", &manager->m_pConfig->cashHack.cashValue, 0, 999999999);
	if (ImGui::Button("Set Cash"))
	{
		manager->m_pConfig->cashHack.setCash = true;
	}

	ImGui::Spacing();

	ImGui::Checkbox("Speed", &manager->m_pConfig->speed.enabled);
	if (manager->m_pConfig->speed.enabled)
	{
		ImGui::Indent();
		ImGui::SliderFloat("##speedValue", &manager->m_pConfig->speed.speed, 0.f, 3000.f);
		ImGui::Unindent();
	}

	ImGui::Checkbox("Jump", &manager->m_pConfig->jumpHack.enabled);
	if (manager->m_pConfig->jumpHack.enabled)
	{
		ImGui::Indent();
		ImGui::SliderInt("##jumpValue", &manager->m_pConfig->jumpHack.value, 0.f, 30);
		ImGui::Unindent();
	}

	ImGui::Checkbox("Fly hack", &manager->m_pConfig->flyHack.enabled);
	if(manager->m_pConfig->flyHack.enabled)
	{
		ImGui::Indent();
		ImGui::Checkbox("Noclip", &manager->m_pConfig->flyHack.noclip);
		ImGui::Unindent();
	}

	ImGui::Checkbox("Gun hacks", &manager->m_pConfig->gunHacks.enabled);

	ImGui::Checkbox("Misc hacks", &manager->m_pConfig->miscHacks.enabled);
	if(manager->m_pConfig->miscHacks.enabled)
	{
		ImGui::Indent();

		ImGui::Checkbox("Guard phone time", &manager->m_pConfig->miscHacks.addedGuardPhoneTime);
		if (manager->m_pConfig->miscHacks.addedGuardPhoneTime)
			ImGui::SliderInt("##timeGuardPhone", &manager->m_pConfig->miscHacks.phoneTime, 0, 999);

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
	ImGui::PopStyleColor();
	Colors::windowBgColor.a = 255.f;
}
