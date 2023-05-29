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
	 * BlueprintGeneratedClass DmgType_SpikeWall_AmargaSpike.DmgType_SpikeWall_AmargaSpike_C
	 * Size -> 0x0000 (FullSize[0x0131] - InheritedSize[0x0131])
	 */
	class UDmgType_SpikeWall_AmargaSpike_C : public UDmgType_SpikeWall_C
	{
	public:
		class UClass* OverrideBuffToGiveVictimCharacter(class APrimalCharacter* Victim, float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
