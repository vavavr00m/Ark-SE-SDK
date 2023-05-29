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
	 * BlueprintGeneratedClass DmgType_Melee_Dino_Carnivore_Carcha_Tailswipe.DmgType_Melee_Dino_Carnivore_Carcha_Tailswipe_C
	 * Size -> 0x000F (FullSize[0x0140] - InheritedSize[0x0131])
	 */
	class UDmgType_Melee_Dino_Carnivore_Carcha_Tailswipe_C : public UDmgType_Melee_Dino_Carnivore_Large_C
	{
	public:
		unsigned char                                              UnknownData_4OVZ[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              VictimWatchBuff;                                         // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		float BPAdjustDamage(class AActor* Victim, float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
