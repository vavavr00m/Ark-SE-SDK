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
	 * BlueprintGeneratedClass AirConditioner.AirConditioner_C
	 * Size -> 0x0010 (FullSize[0x0E20] - InheritedSize[0x0E10])
	 */
	class AAirConditioner_C : public AStructureItemContainerBaseBP_C
	{
	public:
		class UPrimalInventoryBP_AC_Base_C*                        PrimalInventoryBP_AC_Base_C1;                            // 0x0E10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UChildActorComponent*                                ActivatedEmitter;                                        // 0x0E18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_AirConditioner(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
