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
	 * BlueprintGeneratedClass PrimalItemArmor_TropeSaddle.PrimalItemArmor_TropeSaddle_C
	 * Size -> 0x0004 (FullSize[0x0AF4] - InheritedSize[0x0AF0])
	 */
	class UPrimalItemArmor_TropeSaddle_C : public UPrimalItemArmor_SaddleGeneric_C
	{
	public:
		int32_t                                                    TooltipDisplayQualityOffset;                             // 0x0AF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		class FString GetInventoryIconDisplayText();
		void ExecuteUbergraph_PrimalItemArmor_TropeSaddle(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif