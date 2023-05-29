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
	 * BlueprintGeneratedClass DinoCharacterStatusComponent_BP_Andrewsarchus.DinoCharacterStatusComponent_BP_Andrewsarchus_C
	 * Size -> 0x0000 (FullSize[0x1090] - InheritedSize[0x1090])
	 */
	class UDinoCharacterStatusComponent_BP_Andrewsarchus_C : public UDinoCharacterStatusComponent_BP_C
	{
	public:
		float BPAdjustStatusValueModification(EPrimalCharacterStatusValue ValueType, float amount, class UClass* DamageTypeClass, bool bManualModification);
		void ExecuteUbergraph_DinoCharacterStatusComponent_BP_Andrewsarchus(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
