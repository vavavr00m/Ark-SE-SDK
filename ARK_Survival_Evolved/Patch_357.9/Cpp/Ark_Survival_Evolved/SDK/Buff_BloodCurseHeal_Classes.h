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
	 * BlueprintGeneratedClass Buff_BloodCurseHeal.Buff_BloodCurseHeal_C
	 * Size -> 0x0014 (FullSize[0x0994] - InheritedSize[0x0980])
	 */
	class ABuff_BloodCurseHeal_C : public APrimalBuff
	{
	public:
		TArray<class APrimalCharacter*>                            CurrentVictims;                                          // 0x0980(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		float                                                      DamageToHealthRecMultiplier;                             // 0x0990(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void CheckDeactivation();
		void RecoverHealth(float DamageCaused);
		void UpdateVictims(class APrimalCharacter* Character, bool Add);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_BloodCurseHeal(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
