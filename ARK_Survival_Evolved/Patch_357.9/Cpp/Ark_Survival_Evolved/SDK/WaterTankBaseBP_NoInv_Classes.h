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
	 * BlueprintGeneratedClass WaterTankBaseBP_NoInv.WaterTankBaseBP_NoInv_C
	 * Size -> 0x0008 (FullSize[0x0F30] - InheritedSize[0x0F28])
	 */
	class AWaterTankBaseBP_NoInv_C : public APrimalStructureItemContainer_CropPlot_VisualItems
	{
	public:
		class USphereComponent*                                    StasisComponent;                                         // 0x0F28(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WaterTankBaseBP_NoInv(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
