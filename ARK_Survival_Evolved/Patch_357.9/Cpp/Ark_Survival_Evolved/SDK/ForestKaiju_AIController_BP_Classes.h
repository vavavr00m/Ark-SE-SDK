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
	 * BlueprintGeneratedClass ForestKaiju_AIController_BP.ForestKaiju_AIController_BP_C
	 * Size -> 0x0097 (FullSize[0x09B0] - InheritedSize[0x0919])
	 */
	class AForestKaiju_AIController_BP_C : public ADino_AIController_BP_C
	{
	public:
		unsigned char                                              UnknownData_1M5A[0x7];                                   // 0x0919(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      AllTargets;                                              // 0x0920(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		float                                                      TargetingRadius;                                         // 0x0930(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsTorpid;                                                // 0x0934(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PEQI[0x3];                                   // 0x0935(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FlyerSwatAttackCooldown;                                 // 0x0938(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EOT5[0x4];                                   // 0x093C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastFlyerSwatAttackTime;                                 // 0x0940(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RootAttackCooldown;                                      // 0x0948(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GI17[0x4];                                   // 0x094C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastRootAttackTime;                                      // 0x0950(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      GrabAttackCoolDown;                                      // 0x0958(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MYPW[0x4];                                   // 0x095C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastGrabAttackTime;                                      // 0x0960(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MeleeAttackRange;                                        // 0x0968(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FootstompBothCooldown;                                   // 0x096C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		double                                                     LastFootstompBothTime;                                   // 0x0970(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastWyvernKilledTime;                                    // 0x0978(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastShakePlayersOffTime;                                 // 0x0980(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ShakePlayersOffCooldown;                                 // 0x0988(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             TargetScanCenter;                                        // 0x098C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastTimeHasTarget;                                       // 0x0998(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class AActor*>                                      PlayerActors;                                            // 0x09A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate

	public:
		void BPSetupFindTarget();
		void StartTorpid();
		void UserConstructionScript();
		void ExecuteUbergraph_ForestKaiju_AIController_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
