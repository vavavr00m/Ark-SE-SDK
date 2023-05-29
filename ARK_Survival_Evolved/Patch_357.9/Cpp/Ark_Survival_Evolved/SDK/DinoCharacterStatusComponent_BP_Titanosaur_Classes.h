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
	 * BlueprintGeneratedClass DinoCharacterStatusComponent_BP_Titanosaur.DinoCharacterStatusComponent_BP_Titanosaur_C
	 * Size -> 0x0001 (FullSize[0x1091] - InheritedSize[0x1090])
	 */
	class UDinoCharacterStatusComponent_BP_Titanosaur_C : public UDinoCharacterStatusComponent_BP_C
	{
	public:
		bool                                                       bAllowTorpidityIncrease;                                 // 0x1090(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		float BPAdjustStatusValueModification(EPrimalCharacterStatusValue ValueType, float amount, class UClass* DamageTypeClass, bool bManualModification);
		void ExecuteUbergraph_DinoCharacterStatusComponent_BP_Titanosaur(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
