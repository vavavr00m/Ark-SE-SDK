﻿#pragma once

/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_358.3
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
	 * BlueprintGeneratedClass DinoTamedInventoryComponent_MoleRat.DinoTamedInventoryComponent_MoleRat_C
	 * Size -> 0x0000 (FullSize[0x0598] - InheritedSize[0x0598])
	 */
	class UDinoTamedInventoryComponent_MoleRat_C : public UDinoTamedInventoryComponent_BP_Base_C
	{
	public:
		float BPOverrideItemMinimumUseInterval(class UPrimalItem* theItem);
		void ExecuteUbergraph_DinoTamedInventoryComponent_MoleRat(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
