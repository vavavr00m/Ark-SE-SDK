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
	 * BlueprintGeneratedClass WaterTap_Base.WaterTap_Base_C
	 * Size -> 0x0008 (FullSize[0x0E18] - InheritedSize[0x0E10])
	 */
	class AWaterTap_Base_C : public AStructureItemContainerBaseBP_C
	{
	public:
		class UPrimalInventoryBP_Tap_C*                            PrimalInventoryBP_Tap_C1;                                // 0x0E10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WaterTap_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
