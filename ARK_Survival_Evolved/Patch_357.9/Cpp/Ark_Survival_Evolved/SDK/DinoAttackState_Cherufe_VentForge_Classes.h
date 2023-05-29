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
	 * BlueprintGeneratedClass DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C
	 * Size -> 0x000C (FullSize[0x00AC] - InheritedSize[0x00A0])
	 */
	class UDinoAttackState_Cherufe_VentForge_C : public UPrimalAIStateBPBase
	{
	public:
		struct FVector                                             AttackDirection;                                         // 0x00A0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPOnAttackStart(int32_t AttackIndex);
		bool BPCanAttack(float Distance, float attackRangeOffset, class AActor* OtherTarget);
		bool OnCanUseStateEvent();
		void GetInflationAndStaminaCost(float* CurrentForgeChargePercent, float* CurrentStamina, float* CurrentStaminaCost);
		void ExecuteUbergraph_DinoAttackState_Cherufe_VentForge(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
