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
	 * BlueprintGeneratedClass AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C
	 * Size -> 0x0010 (FullSize[0x00B0] - InheritedSize[0x00A0])
	 */
	class UAttackStateRanged_Fireball_Cherufe_C : public UPrimalAIStateDinoRangedState
	{
	public:
		float                                                      ShootAngleDegree;                                        // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             ShootOffset;                                             // 0x00A4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool BPCanAttack(float Distance, float attackRangeOffset, class AActor* OtherTarget);
		void StartAnimationStateEvent(const class FName& CustomEventName, ENetRole Role);
		void BPRangedAttack(struct FVector* TargetLocation, struct FVector* TargetVelocity);
		void BPRangedAttackOnBegin(struct FVector* TargetLocation, struct FVector* TargetVelocity);
		void ExecuteUbergraph_AttackStateRanged_Fireball_Cherufe(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
