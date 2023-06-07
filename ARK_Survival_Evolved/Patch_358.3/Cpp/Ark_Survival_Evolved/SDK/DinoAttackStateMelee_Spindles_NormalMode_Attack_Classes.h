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
	 * BlueprintGeneratedClass DinoAttackStateMelee_Spindles_NormalMode_Attack.DinoAttackStateMelee_Spindles_NormalMode_Attack_C
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UDinoAttackStateMelee_Spindles_NormalMode_Attack_C : public UDinoAttackStateMelee_C
	{
	public:
		bool BPCanAttack(float Distance, float attackRangeOffset, class AActor* OtherTarget);
		void ExecuteUbergraph_DinoAttackStateMelee_Spindles_NormalMode_Attack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
