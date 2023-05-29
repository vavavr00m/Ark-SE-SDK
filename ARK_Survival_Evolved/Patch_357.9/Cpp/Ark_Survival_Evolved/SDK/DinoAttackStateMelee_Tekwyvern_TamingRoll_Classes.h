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
	 * BlueprintGeneratedClass DinoAttackStateMelee_Tekwyvern_TamingRoll.DinoAttackStateMelee_Tekwyvern_TamingRoll_C
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UDinoAttackStateMelee_Tekwyvern_TamingRoll_C : public UDinoAttackStateMelee_C
	{
	public:
		void BPOnHitActor(struct FHitResult* HitResult);
		void ExecuteUbergraph_DinoAttackStateMelee_Tekwyvern_TamingRoll(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
