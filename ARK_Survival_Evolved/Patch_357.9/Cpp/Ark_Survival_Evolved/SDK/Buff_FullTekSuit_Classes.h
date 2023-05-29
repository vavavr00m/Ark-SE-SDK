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
	 * BlueprintGeneratedClass Buff_FullTekSuit.Buff_FullTekSuit_C
	 * Size -> 0x0030 (FullSize[0x09B0] - InheritedSize[0x0980])
	 */
	class ABuff_FullTekSuit_C : public APrimalBuff
	{
	public:
		TArray<class UClass*>                                      PreventAddingBuffs;                                      // 0x0980(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<float>                                              DurabilityCostForPreventAddingBuff;                      // 0x0990(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      DurabilityArmorClasses;                                  // 0x09A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		bool BPPreventAddingOtherBuff(class UClass* anotherBuffClass);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_FullTekSuit(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif