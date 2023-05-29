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
	 * BlueprintGeneratedClass Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C
	 * Size -> 0x005C (FullSize[0x0975] - InheritedSize[0x0919])
	 */
	class AHyaenodon_AIController_BP_C : public ADino_AIController_BP_C
	{
	public:
		unsigned char                                              UnknownData_08PA[0x3];                                   // 0x0919(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      fleeRadiusWhenOnTamingFriendlyState;                     // 0x091C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      radiusForMandatoryFleeing;                               // 0x0920(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TRUM[0x4];                                   // 0x0924(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              OldTarget;                                               // 0x0928(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUpdateIgnoreList;                                       // 0x0930(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y077[0x7];                                   // 0x0931(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      ActorIgnoreList;                                         // 0x0938(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		double                                                     TimeOfLastUpdateIgnoreList;                              // 0x0948(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      refreshTimeOnUpdateIgnoreList;                           // 0x0950(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      refreshTimeOnUpdateIgnoreListIfNoCurrentIgnoreTarget;    // 0x0954(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      distanceToCheckForEnemyAllies;                           // 0x0958(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    NumEnemiesNeededToAddToIgnore;                           // 0x095C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bShouldForceFleeCachedVar;                               // 0x0960(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R798[0x3];                                   // 0x0961(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      distanceCanAggro;                                        // 0x0964(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AttackStaminaThreshold;                                  // 0x0968(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      attackFoodWaterThreshold;                                // 0x096C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      distanceCanAggroVulnerableTarget;                        // 0x0970(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIgnoreNextTarget;                                       // 0x0974(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		class AActor* BPUpdateBestTarget(class AActor* bestTarget, bool dontSetIn, bool* dontSetOut);
		void BPSetupFindTarget();
		void ChangedAITarget();
		void IsAThinkingHyaenodon(bool* IsAThinker);
		void BPNotifyTargetSet();
		float BPGetTargetingDesire(class AActor* forTarget, float ForTargetingDesireValue);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Hyaenodon_AIController_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
