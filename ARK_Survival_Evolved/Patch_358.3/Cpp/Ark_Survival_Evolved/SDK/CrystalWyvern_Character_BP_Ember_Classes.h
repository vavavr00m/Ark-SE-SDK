#pragma once

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
	 * BlueprintGeneratedClass CrystalWyvern_Character_BP_Ember.CrystalWyvern_Character_BP_Ember_C
	 * Size -> 0x0018 (FullSize[0x25E8] - InheritedSize[0x25D0])
	 */
	class ACrystalWyvern_Character_BP_Ember_C : public ACrystalWyvern_Character_BP_Base_C
	{
	public:
		float                                                      EmberIncreasePerAttack;                                  // 0x25D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CurrentEmberMultiplier;                                  // 0x25D4(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxEmberMultiplier;                                      // 0x25D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      EmberLossPerSec;                                         // 0x25DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastEmberAttackTime;                                     // 0x25E0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		float BPGetHUDOverrideBuffProgressBarPercent();
		void ExtraFlameFXSetup(class UParticleSystemComponent* ParticleSystem);
		void BPDoAttack(int32_t AttackIndex);
		void UserConstructionScript();
		void ExecuteUbergraph_CrystalWyvern_Character_BP_Ember(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
