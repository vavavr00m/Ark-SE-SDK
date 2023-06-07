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
	 * BlueprintGeneratedClass DmgType_Melee_Dino_Carnivore_Large_Gnash_TamedAttackerOnly.DmgType_Melee_Dino_Carnivore_Large_Gnash_TamedAttackerOnly_C
	 * Size -> 0x0000 (FullSize[0x0131] - InheritedSize[0x0131])
	 */
	class UDmgType_Melee_Dino_Carnivore_Large_Gnash_TamedAttackerOnly_C : public UDmgType_Melee_Dino_Carnivore_Large_Gnash_C
	{
	public:
		class UClass* OverrideBuffToGiveVictimCharacter(class APrimalCharacter* Victim, float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
