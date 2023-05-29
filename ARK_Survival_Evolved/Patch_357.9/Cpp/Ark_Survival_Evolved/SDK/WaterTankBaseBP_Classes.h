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
	 * BlueprintGeneratedClass WaterTankBaseBP.WaterTankBaseBP_C
	 * Size -> 0x0010 (FullSize[0x0F08] - InheritedSize[0x0EF8])
	 */
	class AWaterTankBaseBP_C : public APrimalStructureItemContainer_CropPlot
	{
	public:
		class UPrimalInventoryBP_WaterTank_C*                      PrimalInventoryBP_WaterTank_C1;                          // 0x0EF8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    StasisComponent;                                         // 0x0F00(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WaterTankBaseBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
