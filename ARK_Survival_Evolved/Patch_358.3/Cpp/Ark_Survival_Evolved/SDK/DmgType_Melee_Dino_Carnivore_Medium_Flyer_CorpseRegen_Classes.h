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
	 * BlueprintGeneratedClass DmgType_Melee_Dino_Carnivore_Medium_Flyer_CorpseRegen.DmgType_Melee_Dino_Carnivore_Medium_Flyer_CorpseRegen_C
	 * Size -> 0x000F (FullSize[0x0140] - InheritedSize[0x0131])
	 */
	class UDmgType_Melee_Dino_Carnivore_Medium_Flyer_CorpseRegen_C : public UDmgType_Melee_Dino_Carnivore_Medium_Flyer_C
	{
	public:
		unsigned char                                              UnknownData_DWS0[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              BuffClassForCauserOnDamagedCorpse;                       // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		float BPAdjustDamage(class AActor* Victim, float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
