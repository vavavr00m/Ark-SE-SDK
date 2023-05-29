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
	 * BlueprintGeneratedClass DmgType_Melee_Dino_Carnivore_Medium_BloodWyvern.DmgType_Melee_Dino_Carnivore_Medium_BloodWyvern_C
	 * Size -> 0x000F (FullSize[0x0140] - InheritedSize[0x0131])
	 */
	class UDmgType_Melee_Dino_Carnivore_Medium_BloodWyvern_C : public UDmgType_Melee_Dino_Carnivore_Medium_C
	{
	public:
		unsigned char                                              UnknownData_U1D4[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              BuffClassForCauserOnDamagedCorpse;                       // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		float BPAdjustDamage(class AActor* Victim, float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
