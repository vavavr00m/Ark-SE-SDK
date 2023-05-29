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
	 * BlueprintGeneratedClass DinoAttackState_GasBagsInhale.DinoAttackState_GasBagsInhale_C
	 * Size -> 0x000C (FullSize[0x00AC] - InheritedSize[0x00A0])
	 */
	class UDinoAttackState_GasBagsInhale_C : public UPrimalAIStateBPBase
	{
	public:
		struct FVector                                             AttackDirection;                                         // 0x00A0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnBeginEvent(class UPrimalAIState* InParentState);
		void OnEndEvent();
		bool BPCanAttack(float Distance, float attackRangeOffset, class AActor* OtherTarget);
		bool OnCanUseStateEvent();
		void GetInflation(float* Value, float* Percent);
		bool BPShouldEndAttack();
		void ExecuteUbergraph_DinoAttackState_GasBagsInhale(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
