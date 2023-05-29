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
	 * BlueprintGeneratedClass DinoAttackStateMelee_Spindles_NormalMode_Spin180.DinoAttackStateMelee_Spindles_NormalMode_Spin180_C
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class UDinoAttackStateMelee_Spindles_NormalMode_Spin180_C : public UDinoAttackStateMelee_C
	{
	public:
		struct FVector                                             targetForward;                                           // 0x0090(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RotationSpeed;                                           // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnBeginEvent(class UPrimalAIState* InParentState);
		bool BPCanAttack(float Distance, float attackRangeOffset, class AActor* OtherTarget);
		void ExecuteUbergraph_DinoAttackStateMelee_Spindles_NormalMode_Spin180(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
