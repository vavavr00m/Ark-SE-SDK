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
	 * BlueprintGeneratedClass Buff_FearCourage.Buff_FearCourage_C
	 * Size -> 0x0550 (FullSize[0x0ED0] - InheritedSize[0x0980])
	 */
	class ABuff_FearCourage_C : public APrimalBuff
	{
	public:
		float                                                      DecelerationTimeline_NewTrack_1_6AACC36F4F2B4E29B9CEB1A067F3E6E4; // 0x0980(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         DecelerationTimeline__Direction_6AACC36F4F2B4E29B9CEB1A067F3E6E4; // 0x0984(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YC1W[0x3];                                   // 0x0985(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  DecelerationTimeline;                                    // 0x0988(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      remoteForceFleeTime;                                     // 0x0990(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       isInTerror;                                              // 0x0994(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T0AU[0x3];                                   // 0x0995(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      currentMasterIndexValue;                                 // 0x0998(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      fearPerRoarFixedAmount;                                  // 0x099C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      maxDragWeightToAffect;                                   // 0x09A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      initialFearAsWeightPercentage;                           // 0x09A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      fearDecreaseRate;                                        // 0x09A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PQ1N[0x4];                                   // 0x09AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     timeTerrorStarted;                                       // 0x09B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<EPrimalCharacterStatusValue>                        statsGainPerSecondCourage;                               // 0x09B8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<float>                                              statsGainPerSecondAmountCourage;                         // 0x09C8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       gainPerSecondIsPercentOfMaxCourage;                      // 0x09D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HL31[0x3];                                   // 0x09D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      couragePerRoarFixedAmount;                               // 0x09DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      courageDecreaseRate;                                     // 0x09E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      initialCourageWeightPercentage;                          // 0x09E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      fearPerRoarAsWeightPercent;                              // 0x09E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       isMounted;                                               // 0x09EC(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_435Y[0x3];                                   // 0x09ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      oldForcedFleeTime;                                       // 0x09F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      hudMessageDisplayTime;                                   // 0x09F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FStatusValueModifierDescription                     terrorMessageDescription;                                // 0x09F8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       takeAwayControlDuringTerror;                             // 0x0A48(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DY3Z[0x3];                                   // 0x0A49(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      couragePerRoarAsWeightPercent;                           // 0x0A4C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		double                                                     lastTimeIndexChanged;                                    // 0x0A50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      timeAtMaxCourage;                                        // 0x0A58(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E1IB[0x4];                                   // 0x0A5C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              currentDamageCauser;                                     // 0x0A60(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class APlayerController*                                   lastRiderWithInput;                                      // 0x0A68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      terrorLevel;                                             // 0x0A70(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       showPercentageHUDNotificationsToRider;                   // 0x0A74(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_91VE[0x3];                                   // 0x0A75(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      decelerationTime;                                        // 0x0A78(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      initialFearFixedAmount;                                  // 0x0A7C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      initialCourageFixedAmount;                               // 0x0A80(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             InitialVelocity;                                         // 0x0A84(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      fleeDestinationUpdateFrequency;                          // 0x0A90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NQWR[0x4];                                   // 0x0A94(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     lastTimeUpdateFakeDestination;                           // 0x0A98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UClass*>                                      itemsToReduceTerror;                                     // 0x0AA0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              terrorReductionPerItem;                                  // 0x0AB0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      maxTerrorLevel;                                          // 0x0AC0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_64SF[0x4];                                   // 0x0AC4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStatusValueModifierDescription                     cantAttackMessageDescription;                            // 0x0AC8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     lastTimeCantAttackMessage;                               // 0x0B18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      fixedDistanceForFleePoint;                               // 0x0B20(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      randomDistanceForFleePoint;                              // 0x0B24(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    tamedAggressionLevelBeforeTerror;                        // 0x0B28(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       lastAdditionWasFear;                                     // 0x0B2C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VLT9[0x3];                                   // 0x0B2D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      cooldownTimeForSameEffect;                               // 0x0B30(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M44B[0x4];                                   // 0x0B34(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        poopAnim;                                                // 0x0B38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        allyColor;                                               // 0x0B40(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        enemyColor;                                              // 0x0B50(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<EPrimalCharacterStatusValue>                        statMultipliersCourage;                                  // 0x0B60(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<float>                                              statMultipliersValueCourage;                             // 0x0B70(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      terrorToLosePerSecond;                                   // 0x0B80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      timeBeforeStartLosingTerror;                             // 0x0B84(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      terrorReducedByItems;                                    // 0x0B88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      maxTerrorToLosePerSecond;                                // 0x0B8C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<EPrimalCharacterStatusValue>                        statsDecreasePerSecondFear;                              // 0x0B90(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<float>                                              statsDecreasePerSecondAmountFear;                        // 0x0BA0(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<EPrimalCharacterStatusValue>                        statMultipliersFear;                                     // 0x0BB0(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<float>                                              statMultipliersValueFear;                                // 0x0BC0(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       gainPerSecondIsPercentOfMaxFear;                         // 0x0BD0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ATJ1[0x3];                                   // 0x0BD1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      receivedDamageMultiplierFear;                            // 0x0BD4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      receivedDamageMultiplierCourage;                         // 0x0BD8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      terrorDuration;                                          // 0x0BDC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FStatusValueModifierDescription                     onFearRoarDescription;                                   // 0x0BE0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		struct FStatusValueModifierDescription                     onCourageRoarDescription;                                // 0x0C30(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      lastIndexValueClient;                                    // 0x0C80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ALV8[0x4];                                   // 0x0C84(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     lastTimeIndexChangedClient;                              // 0x0C88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     timeMaxCourageStartedClient;                             // 0x0C90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FStatusValueModifierDescription                     fearStateDescription;                                    // 0x0C98(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		struct FStatusValueModifierDescription                     courageStateDescription;                                 // 0x0CE8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       allowMaxCourageRefresh;                                  // 0x0D38(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1E9W[0x3];                                   // 0x0D39(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      currentMasterIndexValueClient;                           // 0x0D3C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              savedTameFollowTarget;                                   // 0x0D40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              savedWanderAroundActor;                                  // 0x0D48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       variablesRestored;                                       // 0x0D50(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       savedAllowMountedWeaponry;                               // 0x0D51(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q4CI[0x6];                                   // 0x0D52(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            circleParticleComponent;                                 // 0x0D58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       useSecondaryParticlesForCircle;                          // 0x0D60(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HQV7[0x7];                                   // 0x0D61(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     circleParticles;                                         // 0x0D68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      shortMessageDuration;                                    // 0x0D70(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QX03[0x4];                                   // 0x0D74(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              immuneToFearBuff;                                        // 0x0D78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_FloatFloat_ReturnValue;                // 0x0D80(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H5IR[0x3];                                   // 0x0D81(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_CustomEvent_Duration;                             // 0x0D84(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FMax_ReturnValue;                               // 0x0D88(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_479V[0x4];                                   // 0x0D8C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalDinoCharacter*                                K2Node_DynamicCast_AsPrimalDinoCharacter;                // 0x0D90(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0D98(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1HFX[0x3];                                   // 0x0D99(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue;                  // 0x0D9C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsRunning_ReturnValue;                          // 0x0DA0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x0DA1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K9SU[0x6];                                   // 0x0DA2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalDinoCharacter*                                K2Node_CustomEvent_Instigator;                           // 0x0DA8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_Delay2;                               // 0x0DB0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x0DB4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue2;                           // 0x0DB5(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QHIW[0x2];                                   // 0x0DB6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         CallFunc_GetController_ReturnValue;                      // 0x0DB8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APlayerController*                                   CallFunc_CastToPlayerController_ReturnValue;             // 0x0DC0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue3;                           // 0x0DC8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue2;                 // 0x0DC9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K8BU[0x2];                                   // 0x0DCA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             K2Node_CustomEvent_newPathingDestination;                // 0x0DCC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_FloatFloat_ReturnValue;              // 0x0DD8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HEUU[0x7];                                   // 0x0DD9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue;                        // 0x0DE0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue;               // 0x0DE8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsTimeSince_ReturnValue;                        // 0x0DF0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OTCV[0x3];                                   // 0x0DF1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_CustomEvent_Delay;                                // 0x0DF4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalCharacter*                                    K2Node_DynamicCast_AsPrimalCharacter;                    // 0x0DF8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x0E00(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_ClassClass_ReturnValue;                // 0x0E01(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Poop_ReturnValue;                               // 0x0E02(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JHFS[0x5];                                   // 0x0E03(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADoed_Character_BP_C*                                K2Node_DynamicCast_AsDoed_Character_BP_C;                // 0x0E08(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast3_CastSuccess;                         // 0x0E10(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue3;                 // 0x0E11(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue4;                 // 0x0E12(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T3NS[0x5];                                   // 0x0E13(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADoed_Character_BP_C*                                K2Node_DynamicCast_AsDoed_Character_BP_C2;               // 0x0E18(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast4_CastSuccess;                         // 0x0E20(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GLCZ[0x3];                                   // 0x0E21(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue;               // 0x0E24(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetTeamColorForParticles_finalColor;            // 0x0E30(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YIV2[0x4];                                   // 0x0E3C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         CallFunc_GetController_ReturnValue2;                     // 0x0E40(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterPlayerController*                            K2Node_DynamicCast_AsShooterPlayerController;            // 0x0E48(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast5_CastSuccess;                         // 0x0E50(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JYXA[0x3];                                   // 0x0E51(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_SelectFloat_ReturnValue;                        // 0x0E54(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue;                    // 0x0E58(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue5;                 // 0x0E59(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D01X[0x6];                                   // 0x0E5A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalDinoCharacter*                                K2Node_DynamicCast_AsPrimalDinoCharacter2;               // 0x0E60(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast6_CastSuccess;                         // 0x0E68(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RVD3[0x7];                                   // 0x0E69(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct UObject_FTransform                                  CallFunc_GetSocketTransform_ReturnValue;                 // 0x0E70(0x0030) Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_BreakTransform_Location;                        // 0x0EA0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_BreakTransform_Rotation;                        // 0x0EAC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_BreakTransform_Scale;                           // 0x0EB8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue4;                           // 0x0EC4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x0EC5(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7SNZ[0x2];                                   // 0x0EC6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            CallFunc_SpawnEmitterAttached_ReturnValue;               // 0x0EC8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		int32_t GetBuffType();
		void ProcessCourageValue(float Value, class APrimalCharacter* forCharacter, bool CanSwitch, bool useClientIndex, float* finalValue);
		void ProcessFearValue(float Value, class APrimalCharacter* forCharacter, bool CanSwitch, bool useClientIndex, float* finalValue);
		void MaxCourageActionsClient();
		void BPDrawBuffStatusHUD(class AShooterHUD* HUD, float XPos, float YPos, float ScaleMult);
		struct FStatusValueModifierDescription GetBuffDescription();
		void AddFearOrCourageClient(float amountToAdd, bool isFear, class APrimalCharacter* fearCauser, bool switchFromFearToCourageIfNeeded, bool isFromRoar);
		void IsAtMax_f(class APrimalCharacter* Character, bool useClientIndex, bool* courage, bool* Fear);
		void GetTeamColorForParticles(struct FVector* finalColor);
		void SetMultiplier(EPrimalCharacterStatusValue statusValue, int32_t index, bool isFear);
		void isSameTeamOrAlly(int32_t secondTargetingTeam, int32_t firstTargetingTeamOverride, bool* isAllyOrSameTeam);
		void CanAddFearOrCourage(bool isFear, bool* CanAdd);
		void UpdateFleePoint();
		void SendHUDMessagetoRiderFromServer(const class FString& messageID, float Duration);
		bool BPClientHandleNetExecCommand(const class FName& CommandName, struct FBPNetExecParams* ExecParams, class APlayerController* ForPC);
		void ReduceTerror(float amount);
		void BPInventoryItemUsed(class UObject* InventoryItemObject);
		void OnFearAdded(class APrimalCharacter* causer, float fearAmount);
		void ReceiveDestroyed();
		void RestoreVariables();
		void ExtendBuffTimeIfNeeded(bool forceExtend, float toDuration);
		void BuffTickClient(float DeltaTime);
		void CheckDeactivateCondition();
		float GetBuffPostprocessIntensity();
		void OnDinoDismounted();
		void OnDinoMounted();
		void BPDeactivated(class AActor* ForInstigator);
		void SendHUDMessageToRider(const struct FStatusValueModifierDescription& Description, float Scale, float Duration);
		void TerrorActions(float DeltaTime);
		void ActivateUnmountedFlee();
		void ActivateMountedFlee();
		void OnRep_isMounted();
		void UpdateMountedVariable(bool ForceUpdate);
		void OnCourageRoar(bool canSwitchToCourage, float amountOverride, bool useAmountOverride, bool sendMessageToRider);
		void InitializeBuff(bool isFear);
		void IncreaseStat(EPrimalCharacterStatusValue statusValue, int32_t index, class UPrimalCharacterStatusComponent* statusComponent, float DeltaTime, bool isFear);
		void DrawBuffFloatingHUD(int32_t BuffIndex, class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale);
		void BuffTickServer(float DeltaTime);
		void CheckTerrorCondition(class APrimalCharacter* fearCauser);
		void OnFearRoar(class APrimalCharacter* fearCauser, float amountOverride, bool useAmountOverride, bool switchFromFearToCourageIfNeeded, bool sendMessageToRider);
		void AddFearOrCourage(float amountToAdd, bool isFear, class APrimalCharacter* fearCauser, bool switchFromFearToCourageIfNeeded, bool isFromRoar);
		void StartTerror(class APrimalCharacter* fearCauser);
		void UserConstructionScript();
		void DecelerationTimeline__FinishedFunc();
		void DecelerationTimeline__UpdateFunc();
		void InpActEvt_Fire_K2Node_InputActionEvent_158();
		void InpActEvt_Targeting_K2Node_InputActionEvent_157();
		void InpActEvt_Crouch_K2Node_InputActionEvent_156();
		void InpActEvt_Jump_K2Node_InputActionEvent_155();
		void ReceiveBeginPlay();
		void InitializeNonDedi();
		void Decelerate(float Duration);
		void GivePlayerControlAfterDelay(class APrimalDinoCharacter* Instigator, float Delay);
		void UpdatePathingDestination_Multicast(const struct FVector& newPathingDestination);
		void EmitPoopAfterDelay(float Delay);
		void UnrollDoed_Multicast();
		void SetParticlesColorByTeam();
		void UnrollDoed();
		void UnrollDoedIfNeeded();
		void InitializeCircleParticles();
		void ExecuteUbergraph_Buff_FearCourage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
