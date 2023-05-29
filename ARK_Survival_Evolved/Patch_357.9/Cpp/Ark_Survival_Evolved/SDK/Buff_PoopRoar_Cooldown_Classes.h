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
	 * BlueprintGeneratedClass Buff_PoopRoar_Cooldown.Buff_PoopRoar_Cooldown_C
	 * Size -> 0x0018 (FullSize[0x0998] - InheritedSize[0x0980])
	 */
	class ABuff_PoopRoar_Cooldown_C : public ABuff_Base_C
	{
	public:
		class UClass*                                              PlayerPawnBuff;                                          // 0x0980(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              DinoPawnBuff;                                            // 0x0988(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PlayerPawnCooldown;                                      // 0x0990(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DinoPawnCooldown;                                        // 0x0994(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool BPCheckPreventInput(EPrimalCharacterInputType inputType);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_PoopRoar_Cooldown(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
