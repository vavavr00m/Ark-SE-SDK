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
	 * BlueprintGeneratedClass PhoenixDinoAttackStateRangedAI.PhoenixDinoAttackStateRangedAI_C
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UPhoenixDinoAttackStateRangedAI_C : public UPrimalAIStateDinoRangedState
	{
	public:
		bool BPCanAttack(float Distance, float attackRangeOffset, class AActor* OtherTarget);
		void ExecuteUbergraph_PhoenixDinoAttackStateRangedAI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
