#pragma once

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
	 * BlueprintGeneratedClass CropPlotMedium_SM.CropPlotMedium_SM_C
	 * Size -> 0x0010 (FullSize[0x0F10] - InheritedSize[0x0F00])
	 */
	class ACropPlotMedium_SM_C : public ACropPlotBaseBP_C
	{
	public:
		class UBoxComponent*                                       Box1;                                                    // 0x0F00(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UPrimalInventoryBP_CropPlot_Medium_C*                PrimalInventoryBP_CropPlot_Medium_C1;                    // 0x0F08(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_CropPlotMedium_SM(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
