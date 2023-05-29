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
	 * BlueprintGeneratedClass Buff_GasBursts.Buff_GasBursts_C
	 * Size -> 0x0000 (FullSize[0x0980] - InheritedSize[0x0980])
	 */
	class ABuff_GasBursts_C : public APrimalBuff
	{
	public:
		float BPAdjustStatusValueModification(class UPrimalCharacterStatusComponent* ForComponent, EPrimalCharacterStatusValue ValueType, float InAmount, class UClass* DamageTypeClass, bool bManualModification);
		void BPDeactivated(class AActor* ForInstigator);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_GasBursts(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif