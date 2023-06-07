#pragma once

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
	 * BlueprintGeneratedClass PrimalItemCustomDrinkRecipe_Base.PrimalItemCustomDrinkRecipe_Base_C
	 * Size -> 0x0000 (FullSize[0x0AE8] - InheritedSize[0x0AE8])
	 */
	class UPrimalItemCustomDrinkRecipe_Base_C : public UPrimalItemCustomFoodRecipe_Base_C
	{
	public:
		void ExecuteUbergraph_PrimalItemCustomDrinkRecipe_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
