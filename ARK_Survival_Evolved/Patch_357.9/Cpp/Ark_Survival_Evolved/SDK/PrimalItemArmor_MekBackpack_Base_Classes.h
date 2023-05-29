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
	 * BlueprintGeneratedClass PrimalItemArmor_MekBackpack_Base.PrimalItemArmor_MekBackpack_Base_C
	 * Size -> 0x0004 (FullSize[0x0AF4] - InheritedSize[0x0AF0])
	 */
	class UPrimalItemArmor_MekBackpack_Base_C : public UPrimalItemArmor_SaddleGeneric_C
	{
	public:
		float                                                      DurabilityPercentLossOnUnequip;                          // 0x0AF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void BlueprintUnequipped();
		void ExecuteUbergraph_PrimalItemArmor_MekBackpack_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
