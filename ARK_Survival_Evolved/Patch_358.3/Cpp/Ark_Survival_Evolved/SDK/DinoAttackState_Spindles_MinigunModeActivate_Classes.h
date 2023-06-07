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
	 * BlueprintGeneratedClass DinoAttackState_Spindles_MinigunModeActivate.DinoAttackState_Spindles_MinigunModeActivate_C
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UDinoAttackState_Spindles_MinigunModeActivate_C : public UDinoAttackState_Spindles_Base_C
	{
	public:
		void OnEndEvent();
		bool BPCanAttack(float Distance, float attackRangeOffset, class AActor* OtherTarget);
		void OnBeginEvent(class UPrimalAIState* InParentState);
		void ExecuteUbergraph_DinoAttackState_Spindles_MinigunModeActivate(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
