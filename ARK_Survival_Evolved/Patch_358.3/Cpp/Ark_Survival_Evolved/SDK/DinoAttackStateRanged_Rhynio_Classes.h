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
	 * BlueprintGeneratedClass DinoAttackStateRanged_Rhynio.DinoAttackStateRanged_Rhynio_C
	 * Size -> 0x0018 (FullSize[0x00B8] - InheritedSize[0x00A0])
	 */
	class UDinoAttackStateRanged_Rhynio_C : public UPrimalAIStateDinoRangedState
	{
	public:
		float                                                      ShootAngleDegree;                                        // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ClampedPitch;                                            // 0x00A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty; // 0x00A8(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		void ClampDirectionToOwnerDino(const struct FVector& Direction, struct FVector* OutDir);
		void BPRangedAttackOnBegin(struct FVector* TargetLocation, struct FVector* TargetVelocity);
		void BPRangedAttack(struct FVector* TargetLocation, struct FVector* TargetVelocity);
		void ExecuteUbergraph_DinoAttackStateRanged_Rhynio(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
