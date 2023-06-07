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
	 * BlueprintGeneratedClass ElectricGenerator.ElectricGenerator_C
	 * Size -> 0x0010 (FullSize[0x0E20] - InheritedSize[0x0E10])
	 */
	class AElectricGenerator_C : public ABaseFuelBurner_GasOnly_C
	{
	public:
		class UPrimalInventoryBP_ElectricGenerator_C*              PrimalInventoryBP_ElectricGenerator_C1;                  // 0x0E10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UChildActorComponent*                                ActivatedEmitter;                                        // 0x0E18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void BPOnContainerActiveHealthDecrease();
		void UserConstructionScript();
		void ExecuteUbergraph_ElectricGenerator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
