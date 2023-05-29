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
	 * BlueprintGeneratedClass PrimalItemArmor_SpaceWhaleSaddle_Tek.PrimalItemArmor_SpaceWhaleSaddle_Tek_C
	 * Size -> 0x0000 (FullSize[0x0B8C] - InheritedSize[0x0B8C])
	 */
	class UPrimalItemArmor_SpaceWhaleSaddle_Tek_C : public UPrimalItemArmor_SaddleGeneric_Tek_C
	{
	public:
		void BlueprintUnequipped();
		void BlueprintEquipped(bool bIsFromSaveGame);
		void ExecuteUbergraph_PrimalItemArmor_SpaceWhaleSaddle_Tek(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
