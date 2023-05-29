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
	 * BlueprintGeneratedClass DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UDinoAttackState_CherufeChargeHeat_C : public UPrimalAIStateBPBase
	{
	public:
		bool BPCanAttack(float Distance, float attackRangeOffset, class AActor* OtherTarget);
		bool ShouldSkipRangeCheckEvent();
		float BPOverrideAttackWeight(float inputWeight, float Distance, float attackRangeOffset, class AActor* OtherTarget);
		void BPOnClearAttackState();
		void EndAnimationStateEvent(const class FName& CustomEventName, ENetRole Role);
		void BPOnAttackEnd(int32_t AttackIndex);
		void BPOnAttackStart(int32_t AttackIndex);
		void ExecuteUbergraph_DinoAttackState_CherufeChargeHeat(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
