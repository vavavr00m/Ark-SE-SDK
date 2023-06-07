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
	 * BlueprintGeneratedClass FKaijuWyvAttackStateFire.FKaijuWyvAttackStateFire_C
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UFKaijuWyvAttackStateFire_C : public UPrimalAIStateDinoMeleeState
	{
	public:
		void BPOnHitActor(struct FHitResult* HitResult);
		void ExecuteUbergraph_FKaijuWyvAttackStateFire(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
