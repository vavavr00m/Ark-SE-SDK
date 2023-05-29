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
	 * BlueprintGeneratedClass DinoAttackState_GasBagsLaunch.DinoAttackState_GasBagsLaunch_C
	 * Size -> 0x000C (FullSize[0x00AC] - InheritedSize[0x00A0])
	 */
	class UDinoAttackState_GasBagsLaunch_C : public UPrimalAIStateBPBase
	{
	public:
		struct FVector                                             AttackDirection;                                         // 0x00A0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool ShouldSkipRangeCheckEvent();
		void OnBeginEvent(class UPrimalAIState* InParentState);
		bool BPCanAttack(float Distance, float attackRangeOffset, class AActor* OtherTarget);
		bool OnCanUseStateEvent();
		void GetInflation(float* Value, float* Percent);
		void ExecuteUbergraph_DinoAttackState_GasBagsLaunch(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
