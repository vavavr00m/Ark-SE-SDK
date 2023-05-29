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
	 * BlueprintGeneratedClass DinoAttackStateRanged_AmargaSpike.DinoAttackStateRanged_AmargaSpike_C
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UDinoAttackStateRanged_AmargaSpike_C : public UPrimalAIStateDinoRangedState
	{
	public:
		float                                                      ShootAngleDegree;                                        // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ClampedSpeed;                                            // 0x00A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxSpeedMultiplier;                                      // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RT5J[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      ProjClasses;                                             // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void StartAnimationStateEvent(const class FName& CustomEventName, ENetRole Role);
		void BPRangedAttack(struct FVector* TargetLocation, struct FVector* TargetVelocity);
		void BPRangedAttackOnBegin(struct FVector* TargetLocation, struct FVector* TargetVelocity);
		void ExecuteUbergraph_DinoAttackStateRanged_AmargaSpike(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
