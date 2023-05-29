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
	 * BlueprintGeneratedClass DinoAttackState_MekPistolShoot.DinoAttackState_MekPistolShoot_C
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UDinoAttackState_MekPistolShoot_C : public UPrimalAIStateBPBase
	{
	public:
		void BPOnAttackTick(float DeltaTime);
		void BPOnAttackStart(int32_t AttackIndex);
		void GetMuzzleInfo(struct FVector* Location, struct FVector* Direction);
		void ExecuteUbergraph_DinoAttackState_MekPistolShoot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif