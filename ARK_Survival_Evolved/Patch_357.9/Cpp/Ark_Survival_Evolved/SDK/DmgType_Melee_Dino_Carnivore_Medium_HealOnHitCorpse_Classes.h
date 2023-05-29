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
	 * BlueprintGeneratedClass DmgType_Melee_Dino_Carnivore_Medium_HealOnHitCorpse.DmgType_Melee_Dino_Carnivore_Medium_HealOnHitCorpse_C
	 * Size -> 0x000B (FullSize[0x013C] - InheritedSize[0x0131])
	 */
	class UDmgType_Melee_Dino_Carnivore_Medium_HealOnHitCorpse_C : public UDmgType_Melee_Dino_Carnivore_Medium_C
	{
	public:
		unsigned char                                              UnknownData_LRTW[0x3];                                   // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PercentHealthToHealSelf;                                 // 0x0134(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PercentStamToRecover;                                    // 0x0138(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		float BPAdjustHarvestingDamage(class AActor* Victim, float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
