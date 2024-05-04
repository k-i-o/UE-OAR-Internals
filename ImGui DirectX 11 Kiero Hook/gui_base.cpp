#include <filesystem>
#include <string>

#include "gui.h"
#include "manager.h"

void GUI::SetupImGuiFonts()
{
	// Setup Dear ImGui font
	const ImGuiIO& io = ImGui::GetIO();

	std::string calibriPath = "C:\\Windows\\Fonts\\Calibri.ttf";
	std::filesystem::path f{ calibriPath.c_str() };
	if (std::filesystem::exists(f))
		AddFont(17.f, calibriPath.c_str());
	else
		ASSERT("Callibri font not found!")

	// Setup icon font - Needs to be 2nd in row
	// ImFontConfig iconConfig;
	// iconConfig.MergeMode = true;
	// iconConfig.PixelSnapH = true;
	// ImGui::GetIO().Fonts->AddFontFromMemoryCompressedTTF(font_awesome_data,
	// 	font_awesome_size,
	// 	18.f,
	// 	&iconConfig,
	// 	ranges);

	io.Fonts->Build();
}

void GUI::SetupImGuiStyle()
{
	ImGuiStyle& style = ImGui::GetStyle();

	// Set style
	style.WindowRounding = 3.f;

	style.ChildRounding = 3.f;
	style.ChildBorderSize = 1.f;

	style.FrameRounding = 3.f;
	style.FrameBorderSize = 1.f;

	style.GrabRounding = 64.f;
	style.GrabMinSize = 10.f;
	style.WindowMenuButtonPosition = ImGuiDir_Right;

	// Scale using DPI
	// style.ScaleAllSizes(vars->dpi / USER_DEFAULT_SCREEN_DPI);

	// Colors
	// style.Colors[ImGuiCol_Border] = Colors::UltramarineBlueLow.imVec4();
	// style.Colors[ImGuiCol_CheckMark] = Colors::UltramarineBlue.imVec4();
	// style.Colors[ImGuiCol_Text] = Colors::mainFontColor.imVec4();
	// 
	// style.Colors[ImGuiCol_TitleBg] = Colors::UltramarineBlue.imVec4();
	// style.Colors[ImGuiCol_TitleBgActive] = Colors::UltramarineBlue.imVec4();
	// 
	// style.Colors[ImGuiCol_WindowBg] = Colors::windowBgColor.imVec4();
	// style.Colors[ImGuiCol_ChildBg] = Colors::childBgColor.imVec4();
	// 
	// style.Colors[ImGuiCol_Button] = Colors::buttonColor.imVec4();
	// style.Colors[ImGuiCol_ButtonHovered] = Colors::buttonHoveredColor.imVec4();
	// style.Colors[ImGuiCol_ButtonActive] = Colors::buttonActiveColor.imVec4();
	// 
	// style.Colors[ImGuiCol_FrameBg] = style.Colors[ImGuiCol_WindowBg]; // Invisible frame bg
	// style.Colors[ImGuiCol_FrameBgHovered] = Colors::frameColor.imVec4();
	// style.Colors[ImGuiCol_FrameBgActive] = Colors::frameColor.imVec4();
	// 
	// style.Colors[ImGuiCol_Header] = Colors::headerColor.imVec4();
	// style.Colors[ImGuiCol_HeaderActive] = Colors::headerColor.imVec4();
	// style.Colors[ImGuiCol_HeaderHovered] = Colors::headerColor.imVec4();
	// 
	// style.Colors[ImGuiCol_Separator] = Colors::UltramarineBlue.imVec4();
	// style.Colors[ImGuiCol_SeparatorHovered] = Colors::UltramarineBlue.imVec4();
	// style.Colors[ImGuiCol_SeparatorActive] = Colors::UltramarineBlue.imVec4();
}


// Base
ImFont* GUI::AddFont(float fontSize, const char* fontPath, ImFontConfig* fontCfg)
{
	ImGuiIO& io = ImGui::GetIO();
	(void)io;

	ImFontConfig cfg;
	cfg.OversampleH = cfg.OversampleV = 2;
	cfg.RasterizerMultiply = 1.4f;
	cfg.FontDataOwnedByAtlas = false;

	if (fontCfg != nullptr)
		cfg = *fontCfg;

	const auto ranges = GetFontGlyphRanges();
	ImFont* font = io.Fonts->AddFontFromFileTTF(fontPath, fontSize, &cfg, ranges);
	return font;
}

ImWchar* GUI::GetFontGlyphRanges() noexcept
{
	static ImVector<ImWchar> ranges;
	if (ranges.empty())
	{
		ImFontGlyphRangesBuilder builder;
		constexpr ImWchar baseRanges[]{ 0x0100, 0x024F, // Latin Extended-A + Latin Extended-B
									   0x0300, 0x03FF, // Combining Diacritical Marks + Greek/Coptic
									   0x0600, 0x06FF, // Arabic
									   0x0E00, 0x0E7F, // Thai
									   /*ICON_MIN_FA, ICON_MAX_FA,*/ // Font Awesome
			0 };
		builder.AddRanges(baseRanges);
		builder.AddRanges(ImGui::GetIO().Fonts->GetGlyphRangesCyrillic());
		builder.AddRanges(ImGui::GetIO().Fonts->GetGlyphRangesChineseSimplifiedCommon());
		builder.AddText("\u9F8D\u738B\u2122\u00E4\u00C4");
		builder.BuildRanges(&ranges);
	}
	return ranges.Data;
}
