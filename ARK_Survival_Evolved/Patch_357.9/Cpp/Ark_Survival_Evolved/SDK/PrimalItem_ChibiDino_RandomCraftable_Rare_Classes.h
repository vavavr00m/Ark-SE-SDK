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
	 * BlueprintGeneratedClass PrimalItem_ChibiDino_RandomCraftable_Rare.PrimalItem_ChibiDino_RandomCraftable_Rare_C
	 * Size -> 0x0000 (FullSize[0x0AF9] - InheritedSize[0x0AF9])
	 */
	class UPrimalItem_ChibiDino_RandomCraftable_Rare_C : public UPrimalItem_ChibiDino_RandomCraftable_C
	{
	public:
		void BPPostInitializeItem(class UWorld* OptionalInitWorld);
		void ExecuteUbergraph_PrimalItem_ChibiDino_RandomCraftable_Rare(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif