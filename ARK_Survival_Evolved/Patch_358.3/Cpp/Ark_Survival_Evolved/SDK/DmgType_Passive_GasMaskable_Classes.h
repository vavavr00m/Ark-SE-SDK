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
	 * BlueprintGeneratedClass DmgType_Passive_GasMaskable.DmgType_Passive_GasMaskable_C
	 * Size -> 0x001B (FullSize[0x014C] - InheritedSize[0x0131])
	 */
	class UDmgType_Passive_GasMaskable_C : public UDmgType_Passive_C
	{
	public:
		unsigned char                                              UnknownData_DI7O[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      BlockDamageIfEquipped;                                   // 0x0138(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      ArmorDurabilityDamage;                                   // 0x0148(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		float BPAdjustDamage(class AActor* Victim, float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
