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
	 * BlueprintGeneratedClass DmgType_Melee_Dino_GasBagsMelee.DmgType_Melee_Dino_GasBagsMelee_C
	 * Size -> 0x000B (FullSize[0x013C] - InheritedSize[0x0131])
	 */
	class UDmgType_Melee_Dino_GasBagsMelee_C : public UDmgType_Melee_Dino_Herbivore_Medium_C
	{
	public:
		unsigned char                                              UnknownData_TK5R[0x3];                                   // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AggroMinimum;                                            // 0x0134(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AggroMultiplier;                                         // 0x0138(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		float BPAdjustAggro(class APrimalDinoAIController* DamagedCharacterController, class APrimalCharacter* DamagedCharacter, float DesiredAggroValue, float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
