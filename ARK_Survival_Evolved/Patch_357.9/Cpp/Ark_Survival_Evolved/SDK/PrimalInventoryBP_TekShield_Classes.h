﻿#pragma once

/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_357.9
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass PrimalInventoryBP_TekShield.PrimalInventoryBP_TekShield_C
	 * Size -> 0x0000 (FullSize[0x0598] - InheritedSize[0x0598])
	 */
	class UPrimalInventoryBP_TekShield_C : public UPrimalInventoryBP_BaseGasolineBurning_C
	{
	public:
		bool BPRemoteInventoryAllowViewing(class AShooterPlayerController* PC);
		void ExecuteUbergraph_PrimalInventoryBP_TekShield(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
