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
	 * BlueprintGeneratedClass Basilosaurus_Character_BP.Basilosaurus_Character_BP_C
	 * Size -> 0x003C (FullSize[0x22C4] - InheritedSize[0x2288])
	 */
	class ABasilosaurus_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		class UDinoCharacterStatusComponent_BP_Basil_C*            DinoCharacterStatus_BP_Basil_C1;                         // 0x2288(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FollowMeRadius;                                          // 0x2290(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R0SQ[0x4];                                   // 0x2294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTimeShotByPlayer;                                    // 0x2298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TimeBeingHitAllowsAggroTowardsPlayers;                   // 0x22A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxWeightToBeAbleToFollow;                               // 0x22A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MaxNumberOfFollowTargets;                                // 0x22A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2OFH[0x4];                                   // 0x22AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      ValidFollowClasses;                                      // 0x22B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      DinoAddedDepthBeforeHealthLoss;                          // 0x22C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		bool BlueprintCanRiderAttack(int32_t AttackIndex);
		void OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec);
		void IsOfFollowTypeClass(class APrimalDinoCharacter* DinoToCheck, bool* ValidClass);
		void GetValidFollowingTargets(TArray<class APrimalDinoCharacter*>* ValidDinos);
		void BPFedWakingTameEvent(class APlayerController* ForPC);
		void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void BPTimerServer();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void AnimNotify_StopMove();
		void ExecuteUbergraph_Basilosaurus_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
