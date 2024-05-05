#pragma once
#include "externals/UEDump/SDK.hpp"

namespace Fns {

	inline bool IsBadPoint(SDK::UGameInstance* ptr)
	{
		std::uintptr_t Pointer = reinterpret_cast<std::uintptr_t>(ptr);

		if ((Pointer < 0xFFFFFFFFFFULL) || (Pointer > 0x2FFFFFFFFFFULL))
			return true;

		return false;
	}
	inline bool IsBadPoint(SDK::ULocalPlayer* ptr)
	{
		std::uintptr_t Pointer = reinterpret_cast<std::uintptr_t>(ptr);

		if ((Pointer < 0xFFFFFFFFFFULL) || (Pointer > 0x2FFFFFFFFFFULL))
			return true;

		return false;
	}
	inline bool IsBadPoint(SDK::AActor* ptr)
	{
		std::uintptr_t Pointer = reinterpret_cast<std::uintptr_t>(ptr);

		if ((Pointer < 0xFFFFFFFFFFULL) || (Pointer > 0x2FFFFFFFFFFULL))
			return true;

		return false;
	}
	inline bool IsBadPoint(SDK::APlayerController* ptr)
	{
		std::uintptr_t Pointer = reinterpret_cast<std::uintptr_t>(ptr);

		if ((Pointer < 0xFFFFFFFFFFULL) || (Pointer > 0x2FFFFFFFFFFULL))
			return true;

		return false;
	}
	inline bool IsBadPoint(SDK::APlayerState* ptr)
	{
		std::uintptr_t Pointer = reinterpret_cast<std::uintptr_t>(ptr);

		if ((Pointer < 0xFFFFFFFFFFULL) || (Pointer > 0x2FFFFFFFFFFULL))
			return true;

		return false;
	}
	inline bool IsBadPoint(SDK::UWorld* ptr)
	{
		std::uintptr_t Pointer = reinterpret_cast<std::uintptr_t>(ptr);

		if ((Pointer < 0xFFFFFFFFFFULL) || (Pointer > 0x2FFFFFFFFFFULL))
			return true;

		return false;
	}
	inline bool IsBadPoint(SDK::AGameStateBase* ptr)
	{
		std::uintptr_t Pointer = reinterpret_cast<std::uintptr_t>(ptr);

		if ((Pointer < 0xFFFFFFFFFFULL) || (Pointer > 0x2FFFFFFFFFFULL))
			return true;

		return false;
	}
	inline bool IsBadPoint(SDK::UProjectileMovementComponent* ptr)
	{
		std::uintptr_t Pointer = reinterpret_cast<std::uintptr_t>(ptr);

		if ((Pointer < 0xFFFFFFFFFFULL) || (Pointer > 0x2FFFFFFFFFFULL))
			return true;

		return false;
	}

	inline float Visible[3]{ 0.f, 0.f, 1.f };
	inline float NotVisible[3]{ 1.f, 0.f, 0.f };

	inline void DrawLine(SDK::FVector2D posA, SDK::FVector2D posB, float color[3], float t = 1.f, bool bRainbowMode = false, bool bVisibility = false, bool outline = false)
	{
		if (Vars::rainbow && Vars::rainbowESP && bRainbowMode)
		{
			color = Vars::rainbowColor;
		}
		else if (bVisibility)
		{
			if (Vars::isVIsible)
				color = Fns::Visible;
			else
				color = Fns::NotVisible;
		}

		if (outline)
			Vars::draw_list->AddLine(ImVec2(posA.X, posA.Y), ImVec2(posB.X, posB.Y), ImColor(0.f, 0.f, 0.f), t + 1.f);
		Vars::draw_list->AddLine(ImVec2(posA.X, posA.Y), ImVec2(posB.X, posB.Y), ImColor(color[0], color[1], color[2]), t);
	}

	inline void DrawBox(SDK::FVector2D posA, SDK::FVector2D posB, float color[3], float rounding = 0.f, bool bRainbowMode = false, bool bVisibility = false)
	{
		if (Vars::rainbow && Vars::rainbowESP && bRainbowMode)
		{
			color = Vars::rainbowColor;
		}
		else if (bVisibility)
		{
			if (Vars::isVIsible)
				color = Fns::Visible;
			else
				color = Fns::NotVisible;
		}
		Vars::draw_list->AddRect(ImVec2(posA.X, posA.Y), ImVec2(posB.X, posB.Y), ImColor(color[0], color[1], color[2]), rounding);
	}
	inline void DrawFilledRect(int x, int y, int w, int h, float color[3], bool bRainbowMode = false, bool bVisibility = false)
	{
		if (Vars::rainbow && Vars::rainbowESP && bRainbowMode)
		{
			color = Vars::rainbowColor;
		}
		else if (bVisibility)
		{
			if (Vars::isVIsible)
				color = Fns::Visible;
			else
				color = Fns::NotVisible;
		}
		Vars::draw_list->AddRectFilled(ImVec2(x, y), ImVec2(x + w, y + h), ImColor(color[0], color[1], color[2]));
	}

	inline void DrawCornerBox(int x, int y, int w, int h, int borderPx, float color[3], bool bRainbowMode = false, bool bVisibility = false)
	{
		if (Vars::rainbow && Vars::rainbowESP && bRainbowMode)
		{
			color = Vars::rainbowColor;
		}
		else if (bVisibility)
		{
			if (Vars::isVIsible)
				color = Fns::Visible;
			else
				color = Fns::NotVisible;
		}
		Fns::DrawFilledRect(x + borderPx, y, w / 3, borderPx, color, bRainbowMode, bVisibility);
		Fns::DrawFilledRect(x + w - w / 3 + borderPx, y, w / 3, borderPx, color, bRainbowMode, bVisibility);
		Fns::DrawFilledRect(x, y, borderPx, h / 3, color, bRainbowMode, bVisibility);
		Fns::DrawFilledRect(x, y + h - h / 3 + borderPx * 2, borderPx, h / 3, color, bRainbowMode, bVisibility);
		Fns::DrawFilledRect(x + borderPx, y + h + borderPx, w / 3, borderPx, color, bRainbowMode, bVisibility);
		Fns::DrawFilledRect(x + w - w / 3 + borderPx, y + h + borderPx, w / 3, borderPx, color, bRainbowMode, bVisibility);
		Fns::DrawFilledRect(x + w + borderPx, y, borderPx, h / 3, color, bRainbowMode, bVisibility);
		Fns::DrawFilledRect(x + w + borderPx, y + h - h / 3 + borderPx * 2, borderPx, h / 3, color, bRainbowMode, bVisibility);
	}
	inline void DrawFilledBox(SDK::FVector2D posA, SDK::FVector2D posB, float color[3], float rounding = 0.f, bool bRainbowMode = false, bool bVisibility = false)
	{
		if (Vars::rainbow && Vars::rainbowESP && bRainbowMode)
		{
			color = Vars::rainbowColor;
		}
		else if (bVisibility)
		{
			if (Vars::isVIsible)
				color = Fns::Visible;
			else
				color = Fns::NotVisible;
		}
		Vars::draw_list->AddRectFilled(ImVec2(posA.X, posA.Y), ImVec2(posB.X, posB.Y), ImColor(color[0], color[1], color[2]), rounding);
	}

	inline void DrawText2(SDK::FVector2D pos, float color[3], const char* text, bool bRainbowMode = false, bool bVisibility = false)
	{
		if (Vars::rainbow && Vars::rainbowESP && bRainbowMode)
		{
			color = Vars::rainbowColor;
		}
		else if (bVisibility)
		{
			if (Vars::isVIsible)
				color = Fns::Visible;
			else
				color = Fns::NotVisible;
		}
		Vars::draw_list->AddText(ImVec2(pos.X, pos.Y), ImColor(color[0], color[1], color[2]), text);
	}

	inline void DrawCircle(SDK::FVector2D pos, float radius, float color[3], int num_segments = 12, float t = 1.f, bool bRainbowMode = false, bool bVisibility = false)
	{
		if (Vars::rainbow && Vars::rainbowESP && bRainbowMode)
		{
			color = Vars::rainbowColor;
		}
		else if (bVisibility)
		{
			if (Vars::isVIsible)
				color = Fns::Visible;
			else
				color = Fns::NotVisible;
		}
		Vars::draw_list->AddCircle(ImVec2(pos.X, pos.Y), radius, ImColor(color[0], color[1], color[2]), num_segments, t);
	}
	inline void DrawCircleFilled(SDK::FVector2D pos, float radius, float color[3], int num_segments = 12, bool bRainbowMode = false, bool bVisibility = false)
	{
		if (Vars::rainbow && Vars::rainbowESP && bRainbowMode)
		{
			color = Vars::rainbowColor;
		}
		else if (bVisibility)
		{
			if (Vars::isVIsible)
				color = Fns::Visible;
			else
				color = Fns::NotVisible;
		}
		Vars::draw_list->AddCircleFilled(ImVec2(pos.X, pos.Y), radius, ImColor(color[0], color[1], color[2]), num_segments);
	}
	inline void DrawCrosshair(const float aSize, float color[], float w, bool bRainbowMode = false, bool bVisibility = false) {
		if (Vars::rainbow && Vars::rainbowESP && bRainbowMode)
		{
			color = Vars::rainbowColor;
		}
		else if (bVisibility)
		{
			if (Vars::isVIsible)
				color = Fns::Visible;
			else
				color = Fns::NotVisible;
		}
		ImColor colour = ImColor(color[0], color[1], color[2]);
		Vars::draw_list->AddLine({ 1920 / 2,1080 / 2 - (aSize + 1) }, { 1920 / 2 ,1080 / 2 + (aSize + 1) }, colour, w);
		Vars::draw_list->AddLine({ 1920 / 2 - (aSize + 1),1080 / 2 }, { 1920 / 2 + (aSize + 1), 1080 / 2 }, colour, w);
	}
	inline void Draw3DBox(SDK::FVector& center, SDK::FVector& Bounds, SDK::APlayerController* Controller, float col[3], bool bRainbowMode = false, bool bVisibility = false)
	{
		if (Vars::rainbow && Vars::rainbowESP && bRainbowMode)
		{
			col = Vars::rainbowColor;
		}
		else if (bVisibility)
		{
			if (Vars::isVIsible)
				col = Fns::Visible;
			else
				col = Fns::NotVisible;
		}
		const float wX = (center.X + Bounds.X) - (center.X - Bounds.X);
		const float wY = (center.Y + Bounds.Y) - (center.Y - Bounds.Y);

		SDK::FVector Top{ center.X, center.Y, center.Z + Bounds.Z };
		SDK::FVector Bottom{ center.X, center.Y, center.Z - Bounds.Z };

		SDK::FVector a1 = { center.X - wX / 2, center.Y + wY / 2, Bottom.Z };
		SDK::FVector a2 = { center.X + wX / 2, center.Y + wY / 2, Bottom.Z };
		SDK::FVector a3 = { center.X - wX / 2, center.Y - wY / 2, Bottom.Z };
		SDK::FVector a4 = { center.X + wX / 2, center.Y - wY / 2, Bottom.Z };

		SDK::FVector b1 = { center.X - wX / 2, center.Y + wY / 2, Top.Z };
		SDK::FVector b2 = { center.X + wX / 2, center.Y + wY / 2, Top.Z };
		SDK::FVector b3 = { center.X - wX / 2, center.Y - wY / 2, Top.Z };
		SDK::FVector b4 = { center.X + wX / 2, center.Y - wY / 2, Top.Z };

		SDK::FVector2D a1w2s{};
		SDK::FVector2D a2w2s{};
		SDK::FVector2D a3w2s{};
		SDK::FVector2D a4w2s{};

		SDK::FVector2D b1w2s{};
		SDK::FVector2D b2w2s{};
		SDK::FVector2D b3w2s{};
		SDK::FVector2D b4w2s{};

		if (Controller->ProjectWorldLocationToScreen(a1, &a1w2s, false) && Controller->ProjectWorldLocationToScreen(a2, &a2w2s, false)
			&& Controller->ProjectWorldLocationToScreen(a3, &a3w2s, false) && Controller->ProjectWorldLocationToScreen(a4, &a4w2s, false)
			&& Controller->ProjectWorldLocationToScreen(b1, &b1w2s, false) && Controller->ProjectWorldLocationToScreen(b2, &b2w2s, false)
			&& Controller->ProjectWorldLocationToScreen(b3, &b3w2s, false) && Controller->ProjectWorldLocationToScreen(b4, &b4w2s, false))
		{
			Fns::DrawLine(a1w2s, a2w2s, col, 1.f, bRainbowMode, bVisibility);
			Fns::DrawLine(a2w2s, a4w2s, col, 1.f, bRainbowMode, bVisibility);
			Fns::DrawLine(a4w2s, a3w2s, col, 1.f, bRainbowMode, bVisibility);
			Fns::DrawLine(a3w2s, a1w2s, col, 1.f, bRainbowMode, bVisibility);

			Fns::DrawLine(b1w2s, b2w2s, col, 1.f, bRainbowMode, bVisibility);
			Fns::DrawLine(b2w2s, b4w2s, col, 1.f, bRainbowMode, bVisibility);
			Fns::DrawLine(b4w2s, b3w2s, col, 1.f, bRainbowMode, bVisibility);
			Fns::DrawLine(b3w2s, b1w2s, col, 1.f, bRainbowMode, bVisibility);

			Fns::DrawLine(a1w2s, b1w2s, col, 1.f, bRainbowMode, bVisibility);
			Fns::DrawLine(a2w2s, b2w2s, col, 1.f, bRainbowMode, bVisibility);
			Fns::DrawLine(a3w2s, b3w2s, col, 1.f, bRainbowMode, bVisibility);
			Fns::DrawLine(a4w2s, b4w2s, col, 1.f, bRainbowMode, bVisibility);
		}
	}
}