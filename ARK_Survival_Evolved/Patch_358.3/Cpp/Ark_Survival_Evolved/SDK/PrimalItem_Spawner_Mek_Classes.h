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
	 * BlueprintGeneratedClass PrimalItem_Spawner_Mek.PrimalItem_Spawner_Mek_C
	 * Size -> 0x0000 (FullSize[0x0CF0] - InheritedSize[0x0CF0])
	 */
	class UPrimalItem_Spawner_Mek_C : public UPrimalItem_DinoSpawner_Base_C
	{
	public:
		bool BPCanUse(bool bIgnoreCooldown);
		void GetStatDisplayString(EPrimalCharacterStatusValue Stat, int32_t Value, int32_t StatConvertMapIndex, class FString* StatDisplay, class FString* ValueDisplay, bool* ShowInTooltip);
		void ExecuteUbergraph_PrimalItem_Spawner_Mek(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
