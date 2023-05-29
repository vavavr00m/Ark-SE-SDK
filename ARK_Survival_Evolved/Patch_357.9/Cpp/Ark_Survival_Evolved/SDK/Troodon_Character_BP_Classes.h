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
	 * BlueprintGeneratedClass Troodon_Character_BP.Troodon_Character_BP_C
	 * Size -> 0x01F4 (FullSize[0x247C] - InheritedSize[0x2288])
	 */
	class ATroodon_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		class UParticleSystemComponent*                            NightEyes;                                               // 0x2288(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDinoCharacterStatusComponent_BP_Troodon_C*          DinoCharacterStatus_BP_Troodon_C1;                       // 0x2290(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TamingAffinityMultiplier;                                // 0x2298(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      BaseTamingAffinity;                                      // 0x229C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      GiveAlliesXPRange;                                       // 0x22A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RatioOfXPOfKilledToGiveToAllies;                         // 0x22A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DayTimeTargetingRange;                                   // 0x22A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      NightTimeTargetingRange;                                 // 0x22AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DayNotifyNeighborRange;                                  // 0x22B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      NightNotifyNeighborRange;                                // 0x22B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FoodToGetPerKillWhileTaming;                             // 0x22B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       EyesActivated;                                           // 0x22BC(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_1NSN[0x3];                                   // 0x22BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CooldownBeforeRecievingAffinity;                         // 0x22C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KBSB[0x4];                                   // 0x22C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTimeRecievedAffinity;                                // 0x22C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TargetHasARider;                                         // 0x22D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TargetHasATarget;                                        // 0x22D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bStopMovementOnLanding;                                  // 0x22D2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8N3J[0x1];                                   // 0x22D3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DayTimeAffinityMultiplier;                               // 0x22D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FVector>                                     SonarPointsType0;                                        // 0x22D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FVector>                                     SonarPointsType1;                                        // 0x22E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FVector>                                     SonarPointsType2;                                        // 0x22F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<double>                                             SonarDisplayTimes;                                       // 0x2308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UTexture*>                                    SonarIcons;                                              // 0x2318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FVector>                                     SonarPointsType3;                                        // 0x2328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      SonarViewRange;                                          // 0x2338(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SonarDisplayTimeLength;                                  // 0x233C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentSonarRangeLevel;                                  // 0x2340(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    CurrentSonarCooldownLevel;                               // 0x2344(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      BaseSonarRange;                                          // 0x2348(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SonarRangePerLevel;                                      // 0x234C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BaseSonarCooldown;                                       // 0x2350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SonarCooldownReductionPerLevel;                          // 0x2354(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastTimeSonarWasUsed;                                    // 0x2358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    SonarMode;                                               // 0x2360(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EZLE[0x4];                                   // 0x2364(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     SonarPointsType4;                                        // 0x2368(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      FireBuffsToFleeFrom;                                     // 0x2378(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      CloseToLightSourceDistance;                              // 0x2388(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J7QO[0x4];                                   // 0x238C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      LightStructuresToAvoid;                                  // 0x2390(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FVector>                                     WanderPoints;                                            // 0x23A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              DistanceToLightSources;                                  // 0x23B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      FlashLightWeapons;                                       // 0x23C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue;                        // 0x23D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AController*                                         CallFunc_GetController_ReturnValue;                      // 0x23D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class ADayCycleManager*                                    CallFunc_GetDayCycleManager_ReturnValue;                 // 0x23E0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class ATroodon_AIController_BP_C*                          K2Node_DynamicCast_AsTroodon_AIController_BP_C;          // 0x23E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x23F0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDaytime_ReturnValue;                          // 0x23F1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x23F2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9RLW[0x1];                                   // 0x23F3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    K2Node_CustomEvent_SonarType;                            // 0x23F4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		TArray<struct FVector>                                     K2Node_CustomEvent_SonarPoints;                          // 0x23F8(0x0010) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    CallFunc_Array_Length_ReturnValue;                       // 0x2408(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_IntInt_ReturnValue;                     // 0x240C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchInteger_CmpSuccess;                         // 0x240D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_17R6[0x2];                                   // 0x240E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue;               // 0x2410(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue2;                 // 0x2418(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7381[0x7];                                   // 0x2419(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerController*                                   CallFunc_GetPlayerController_ReturnValue;                // 0x2420(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue;                // 0x2428(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetCameraLocation_ReturnValue;                  // 0x2434(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_IntInt_ReturnValue;                  // 0x2440(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_164H[0x3];                                   // 0x2441(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue;              // 0x2444(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize_ReturnValue;                              // 0x2450(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue;                    // 0x2454(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YPCS[0x3];                                   // 0x2455(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue2;              // 0x2458(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x2460(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x2461(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EX5P[0x2];                                   // 0x2462(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_PlayAnimEx_ReturnValue;                         // 0x2464(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty; // 0x2468(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		float                                                      CallFunc_Array_Add_NewItem_RefProperty;                  // 0x2478(0x0004) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData, NoDestructor

	public:
		bool OverrideFinalWanderLocation(struct FVector* outVec);
		void IsLocationInLight(const struct FVector& Location, bool* IsInLight, float* Distance, struct FVector* LocationOfLightSource);
		void OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec);
		bool BPShouldForceFlee();
		float BPGetAddForwardVelocityOnJump();
		void LevelUpSonar(int32_t Selector);
		void BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex);
		void DoSonar(int32_t SonarType);
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		void DrawSonarPoints(int32_t SonarType, TArray<struct FVector>* SonarPoints, class AShooterHUD* TheHUD);
		void BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale);
		void BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode);
		float BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse);
		void OnJumped();
		void OnRep_EyesActivated();
		void BPTimerServer();
		void BPKilledSomethingEvent(class APrimalCharacter* killedTarget);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void NetDisplaySonar(int32_t SonarType, TArray<struct FVector>* SonarPoints);
		void NetUpdateLastTimeSonarUsed();
		void AnimNotify_DoSonar();
		void ExecuteUbergraph_Troodon_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
