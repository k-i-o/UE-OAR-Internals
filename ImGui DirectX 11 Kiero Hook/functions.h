#pragma once
#include "externals/UEDump/SDK.hpp"

namespace Fns {

	inline bool IsBadPoint(SDK::UGameInstance* ptr)
	{
		std::uintptr_t Pointer = reinterpret_cast<std::uintptr_t>(ptr);

		if ((Pointer < 0xFFFFFFFFFFULL) || (Pointer > 0x2FFFFFFFFFFULL))
			return true;

		else return false;
	}
	inline bool IsBadPoint(SDK::ULocalPlayer* ptr)
	{
		std::uintptr_t Pointer = reinterpret_cast<std::uintptr_t>(ptr);

		if ((Pointer < 0xFFFFFFFFFFULL) || (Pointer > 0x2FFFFFFFFFFULL))
			return true;

		else return false;
	}
	inline bool IsBadPoint(SDK::APlayerController* ptr)
	{
		std::uintptr_t Pointer = reinterpret_cast<std::uintptr_t>(ptr);

		if ((Pointer < 0xFFFFFFFFFFULL) || (Pointer > 0x2FFFFFFFFFFULL))
			return true;

		else return false;
	}
	inline bool IsBadPoint(SDK::APlayerState* ptr)
	{
		std::uintptr_t Pointer = reinterpret_cast<std::uintptr_t>(ptr);

		if ((Pointer < 0xFFFFFFFFFFULL) || (Pointer > 0x2FFFFFFFFFFULL))
			return true;

		else return false;
	}
	inline bool IsBadPoint(SDK::UWorld* ptr)
	{
		std::uintptr_t Pointer = reinterpret_cast<std::uintptr_t>(ptr);

		if ((Pointer < 0xFFFFFFFFFFULL) || (Pointer > 0x2FFFFFFFFFFULL))
			return true;

		else return false;
	}
	inline bool IsBadPoint(SDK::AGameStateBase* ptr)
	{
		std::uintptr_t Pointer = reinterpret_cast<std::uintptr_t>(ptr);

		if ((Pointer < 0xFFFFFFFFFFULL) || (Pointer > 0x2FFFFFFFFFFULL))
			return true;

		else return false;
	}
	inline bool IsBadPoint(SDK::UProjectileMovementComponent* ptr)
	{
		std::uintptr_t Pointer = reinterpret_cast<std::uintptr_t>(ptr);

		if ((Pointer < 0xFFFFFFFFFFULL) || (Pointer > 0x2FFFFFFFFFFULL))
			return true;

		else return false;
	}
}