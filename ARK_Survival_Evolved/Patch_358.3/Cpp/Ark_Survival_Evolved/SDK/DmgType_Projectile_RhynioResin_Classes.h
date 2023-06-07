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
	 * BlueprintGeneratedClass DmgType_Projectile_RhynioResin.DmgType_Projectile_RhynioResin_C
	 * Size -> 0x0017 (FullSize[0x0148] - InheritedSize[0x0131])
	 */
	class UDmgType_Projectile_RhynioResin_C : public UDmgType_Projectile_C
	{
	public:
		bool                                                       bOnlyUpdateExistingBuff;                                 // 0x0131(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HRR3[0x2];                                   // 0x0132(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TekTargetDamageMultiplier;                               // 0x0134(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class FName>                                        TekTargetDinoNameTags;                                   // 0x0138(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		float BPAdjustDamage(class AActor* Victim, float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
		class UClass* OverrideBuffToGiveVictimCharacter(class APrimalCharacter* Victim, float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
