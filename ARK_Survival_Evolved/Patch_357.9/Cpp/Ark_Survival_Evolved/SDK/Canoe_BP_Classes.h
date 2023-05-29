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
	 * BlueprintGeneratedClass Canoe_BP.Canoe_BP_C
	 * Size -> 0x04F8 (FullSize[0x27B8] - InheritedSize[0x22C0])
	 */
	class ACanoe_BP_C : public APrimalRaft
	{
	public:
		class UDinoCharacterStatusComponent_BP_Canoe_C*            DinoCharacterStatus_BP_Canoe_C1;                         // 0x22C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            WaterEffectBack;                                         // 0x22C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            WaterEffectFront;                                        // 0x22D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    StasisComponent;                                         // 0x22D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class UAnimMontage*>                                KnockbackAnims;                                          // 0x22E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    MaxBasedCharacters;                                      // 0x22F0(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VCQJ[0x4];                                   // 0x22F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PickupItem;                                              // 0x22F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              DefaultWeaponOverride;                                   // 0x2300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDebug_CanoeReplicatedInputs;                            // 0x2308(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bHasAnyLocallyControlledPassengers;                      // 0x2309(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XVW9[0x2];                                   // 0x230A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AverageRightAxisInput;                                   // 0x230C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AverageForwardAxisInput;                                 // 0x2310(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsUsingAdvancedSimCanoeMovement;                        // 0x2314(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsPerformingAdvancedSimMovement;                        // 0x2315(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bForceAdvancedSimMovementForAllProxies;                  // 0x2316(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bDebug_PrintCanoeMovementVars;                           // 0x2317(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bDebug_CanoeSimulatedMovement;                           // 0x2318(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SS3R[0x7];                                   // 0x2319(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastRightInputStartTime;                                 // 0x2320(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CurrentCanoeRotationSpeed;                               // 0x2328(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCameraAlignmentStopped;                                 // 0x232C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BI1U[0x3];                                   // 0x232D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CameraRotationInterpSpeed;                               // 0x2330(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TPVCameraRotationInterpSpeed;                            // 0x2334(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<double>                                             LastMovedCameraTime;                                     // 0x2338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      TPVCameraAutoAlignTime;                                  // 0x2348(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LastFXOpacityFront;                                      // 0x234C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FXOpacityInterpSpeed;                                    // 0x2350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LastFXOpacityBack;                                       // 0x2354(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FDebugFloatHistory                                  DebugFloatHistory;                                       // 0x2358(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UClass*>                                      ForceAllowedBuffs;                                       // 0x2378(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      CanoeRotationDeceleration_Input;                         // 0x2388(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CanoeRotationDeceleration_NoInput;                       // 0x238C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDebug_CanoeInputSimStep;                                // 0x2390(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		bool                                                       bDebug_SimCanoeErrorCorrection;                          // 0x2391(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bDebug_PreventAdvancedSimMovement;                       // 0x2392(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C8WR[0x1];                                   // 0x2393(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CurrentSimCanoeInterpolatedLocation;                     // 0x2394(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            CurrentSimCanoeInterpolatedRotation;                     // 0x23A0(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ImpactMinVelocity;                                       // 0x23AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastImpactTime;                                          // 0x23B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MinTimeBetweenImpacts;                                   // 0x23B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WJP8[0x4];                                   // 0x23BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     ImpactFX;                                                // 0x23C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<float>                                              ForwardInputPassengerNumCurve_MaxSpeed;                  // 0x23C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              ForwardInputPassengerNumCurve_MaxAccel;                  // 0x23D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              RightInputPassengerNumCurve_RotationRate;                // 0x23E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              RightInputPassengerNumCurve_RotationAccel;               // 0x23F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		double                                                     LastPassengerInputsUpdatedTime;                          // 0x2408(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RowInterval;                                             // 0x2410(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             CurrentSimCanoeVelocity;                                 // 0x2414(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SimCanoeLocInterpSpeed_Return;                           // 0x2420(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SimCanoeRotInterpSpeed;                                  // 0x2424(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SimCanoeRotInterpSpeed_Return;                           // 0x2428(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SimCanoeRotInterpSpeed_RequiredMin;                      // 0x242C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SimCanoeResetLocBelowVelocitySpeed;                      // 0x2430(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SimCanoeResetRotBelowRotationSpeed;                      // 0x2434(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FRepCanoePassengerInputs>                    ReplicatedPassengerInputs;                               // 0x2438(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify
		TArray<struct FVector2D>                                   CurrentPerPassengerInputs;                               // 0x2448(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    PackedInputsNegativeBit;                                 // 0x2458(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CanoeRotationRate;                                       // 0x245C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CanoeRotationAcceleration;                               // 0x2460(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CanoeExtraRotationRateMult;                              // 0x2464(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CanoeExtraRotationAccelMult;                             // 0x2468(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SimCanoeAvoidBlockersInterpSpeed;                        // 0x246C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastToggledAdvancedSimMovementTime;                      // 0x2470(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AdvancedSimCanoeInterpBlendTime;                         // 0x2478(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SimCanoeAllowedPositionalErrorDelta;                     // 0x247C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SimCanoeInterpTargetLocInterpSpeed_Forward;              // 0x2480(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SimCanoeInterpTargetLocInterpSpeed_Right;                // 0x2484(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             DefaultMeshOffset;                                       // 0x2488(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SimCanoeInterpTargetLocInterpSpeed_Z;                    // 0x2494(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             CurrentSimCanoeInterpTargetLocation;                     // 0x2498(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ServerDeltaTime;                                         // 0x24A4(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             LastReceivedServerVelocity;                              // 0x24A8(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HF8E[0x4];                                   // 0x24B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastClientPassengerInputsUpdatedTime;                    // 0x24B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDebug_PrintPerPassengerMovementVars;                    // 0x24C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YCZM[0x7];                                   // 0x24C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastClearedRiderTime;                                    // 0x24C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            FishingRotationOffset;                                   // 0x24D0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             FishingLocationOffset;                                   // 0x24DC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector2D                                           SimCanoeGeneralSync_DistanceMinMax;                      // 0x24E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector2D                                           SimCanoeGeneralSync_InterpSpeedMinMax;                   // 0x24F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FWeaponAnim                                         FishingFireAnim;                                         // 0x24F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FWeaponAnim                                         FishingFireAnimFemale;                                   // 0x2508(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FCanoeServerReceivedPassengerSavedInputs>    PassengerSavedInputsQueue_Forward;                       // 0x2518(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance
		TArray<struct FCanoeServerReceivedPassengerSavedInputs>    PassengerSavedInputsQueue_Right;                         // 0x2528(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance
		double                                                     PreviousServerTickTime_Forward;                          // 0x2538(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     PreviousServerTickTime_Right;                            // 0x2540(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FCanoePassengerSavedInputAxis>               ServerReceivedPerPassengerSavedInputs_Forward;           // 0x2548(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance
		TArray<struct FCanoePassengerSavedInputAxis>               ServerReceivedPerPassengerSavedInputs_Right;             // 0x2558(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance
		int32_t                                                    MaxSavedInputQueueSize;                                  // 0x2568(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bSingleDriverCanoe;                                      // 0x256C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P1OO[0x3];                                   // 0x256D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SimCanoeGeneralSync_InterpSpeedZ;                        // 0x2570(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPreventCanoeExitingWater;                               // 0x2574(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       bDebugCanoePreventExitingWater;                          // 0x2575(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHitSomethingThisFrame;                                  // 0x2576(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QBVC[0x1];                                   // 0x2577(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AllowLeaveWaterTraceOffset;                              // 0x2578(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector2D                                           AllowLeaveWaterTraceHeights;                             // 0x257C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AllowLeaveWaterTraceRadius;                              // 0x2584(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector2D                                           AllowLeaveWaterTraceOffsetVelocityMinMax;                // 0x2588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCanoeWantsToBeach;                                      // 0x2590(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NXW6[0x7];                                   // 0x2591(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastRefreshDisplayBeachInputHudTime;                     // 0x2598(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDisplayBeachInputHUD;                                   // 0x25A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ST13[0x3];                                   // 0x25A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LastCanoeFallingVelZ;                                    // 0x25A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector2D                                           LandingSplashVelocityRange;                              // 0x25A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector2D                                           LandingSplashScaleRange;                                 // 0x25B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector2D                                           LandingSplashTimeDilationRange;                          // 0x25B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CanoeBeachingWalkableFloorAngle;                         // 0x25C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DK15[0x4];                                   // 0x25C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHitResult                                          LastCanoeCapsuleHit;                                     // 0x25C8(0x0088) Edit, BlueprintVisible, Transient, DisableEditOnInstance
		struct FHUDRichTextOverlayData                             BeachRichTextOverlay;                                    // 0x2650(0x0060) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              CanoeTextOverlayMessage_NearShore;                       // 0x26B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              CanoeTextOverlayMessage_BeachInputPressed;               // 0x26C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              CanoeTextOverlayMessage_Beached;                         // 0x26D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FLinearColor                                        CanoeTextOverlayColor_Beached;                           // 0x26E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        CanoeTextOverlayColor_NearShore;                         // 0x26F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        CanoeTextOverlayColor_BeachInputPressed;                 // 0x2700(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCanCanoeBePickedUp;                                     // 0x2710(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6700[0x3];                                   // 0x2711(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentCanoeFallingPitchOffset;                          // 0x2714(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CurrentCanoeDippingVelocity;                             // 0x2718(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CanoeFallingPitchOffsetInterpSpeed_Reset;                // 0x271C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CanoeFallingPitchOffsetInterpSpeed_Falling;              // 0x2720(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CanoeLandingDipVelocityDissapateSpeed;                   // 0x2724(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CanoeLandingDipHeightOffsetResetSpeed;                   // 0x2728(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CanoeFallingPitchOffsetMax;                              // 0x272C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          CanoeImpactSound;                                        // 0x2730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          CanoeWaterLandingSound;                                  // 0x2738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector2D                                           LandingSplashSoundPitchRange;                            // 0x2740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector2D                                           LandingSplashSoundVolumeRange;                           // 0x2748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AllowCanoeMovementSoundAboveSpeed;                       // 0x2750(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector2D                                           SimCanoeInterpTargetLocInterpSpeedRange_Right;           // 0x2754(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EMovementMode                                              CurrentSimCanoeMovementMode;                             // 0x275C(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H47U[0x3];                                   // 0x275D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            WaterEffectFrontMID;                                     // 0x2760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            WaterEffectBackMID;                                      // 0x2768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxCanoePitchAngle;                                      // 0x2770(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCanoeAtRest;                                            // 0x2774(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E9C3[0x3];                                   // 0x2775(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CanoeRestVelocityThreshold;                              // 0x2778(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCanoeAdvancedSimVarsReset;                              // 0x277C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HS6B[0x3];                                   // 0x277D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LastCanoeLocation;                                       // 0x2780(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             LastCanoeActualVelocity;                                 // 0x278C(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDebug_CanoeRest;                                        // 0x2798(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCanoeBeached;                                           // 0x2799(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCanoeFalling;                                           // 0x279A(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCanoeSwimming;                                          // 0x279B(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCanoeHasAnyPassengers;                                  // 0x279C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EMovementMode                                              CurrentCanoeSimMovementMode;                             // 0x279D(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x279E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U9JY[0x1];                                   // 0x279F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    K2Node_CustomEvent_KnockDirectionIndex;                  // 0x27A0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TGFK[0x4];                                   // 0x27A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        CallFunc_Array_Get_Item;                                 // 0x27A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue2;                 // 0x27B0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R7DY[0x3];                                   // 0x27B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_PlayAnimEx_ReturnValue;                         // 0x27B4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		bool AllowGrappling();
		void OnCanoeAtRestStateChanged();
		void UpdateCanoeAtRest();
		void GetCanoeVelocity_External(struct FVector* Velocity);
		void GetCanoeVelocity(struct FVector* Velocity);
		bool BPAllowMovementSound();
		void CanModifyCanoeDesiredRotation(bool* bResult);
		void GetCanoeNumPassengers(int32_t* NumPassengers);
		void DoesCanoeHaveAnyPassengers(bool* bResult);
		void IsPlayerCanoePassenger(class AShooterCharacter* CheckPlayer, bool* bResult);
		void UpdateCanoeHudTextOverlay();
		void RemoveCanoeHudTextOverlayFromPassenger(class AShooterCharacter* FromPassenger);
		void AddCanoeHudTextOverlayToPassenger(class AShooterCharacter* ToPassenger);
		void BPRemovedAttachmentsForItem(class UPrimalItem* anItem);
		void BP_OnPaintingComponentInitialized(class UStructurePaintingComponent* PaintingComp);
		void CanUsePassengerReplicatedInputQueue(bool* bResult);
		void OnRep_bPreventCanoeExitingWater();
		void CanDynamicalyPreventExitingWater(bool* bResult);
		void UpdateBeachInputHUD();
		void OnUpdateCanoePreventExitingWater(bool bNewVal);
		void UpdateCanoeWantsToBeach();
		bool BP_PreventMovementMode(EMovementMode NewMovementMode, unsigned char NewCustomMode);
		void UpdatePreventCanoeFromExitingWater();
		void PackInputAxesIntoVector2D(float Forward, float Right, struct FVector2D* Result);
		void ProcessReceivedPassengerInputsQueue_Right();
		void ProcessReceivedPassengerInputsQueue_Forward();
		void ConvertServerReceivedPassengerInputsIntoVector2Ds(TArray<struct FVector2D>* Inputs);
		void BP_OverrideSwimmingAcceleration(struct FVector* ModifyAcceleration, float DeltaTime);
		void ReceivedSavedPassengerInputStruct(const struct FCanoePassengerClientInputAxes& ClientSavedInputs, class AShooterCharacter* ForPassengerPlayer);
		class UAnimSequence* BPOverridePassengerAdditiveAnim(class APrimalCharacter* ForPassenger);
		void IsCanoeAdvancedSimProxy(bool* bResult);
		void CleanUpAllOarWeapons();
		void BP_OnSetDeath();
		void SetPlayerUseOarWeapon(class AShooterCharacter* ForPlayer, bool bNewUse);
		void BPAddedAttachmentsForItem(class UPrimalItem* anItem);
		void BPOnRefreshColorization(TArray<struct FLinearColor>* Colors);
		void DebugPrintReplicatedInputs();
		void DebugCanoeMovementVars();
		struct FVector BPOverrideSwimmingVelocity(const struct FVector& InitialVelocity, const struct FVector& Gravity, float FluidFriction, float NetBuoyancy, float DeltaTime);
		void TryRow(double WithGameTime);
		void FetchLocallyControlledPassengerInputs();
		void ForceClearPassengerInputs();
		void SetUseAdvancedCanoeSimMovement(bool bNewValue);
		void ResetSimCanoeVars();
		void BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode);
		void ShouldUseAdvancedSimMovement(bool* bResult);
		void BP_OnBasedPawnRemovedNotify(class AActor* RemovedActor);
		void BP_OnBasedPawnAddedNotify(class AActor* AddedActor);
		void DebugPerPassengerMovementVars();
		void UpdateCurrentPassengerInputs(bool* bAnyActive);
		void OnRep_ReplicatedPassengerInputs();
		void UnpackReplicatedPassengerInputs();
		void PackReplicatedPassengerInputs();
		void PerformSimCanoeMovement(float DeltaTime);
		void BPTimerNonDedicated();
		void BPTimerServer();
		void BP_OverrideCameraTargetOriginLocation(struct FVector* OutOverrideOrigin, const class FName& WithCameraStyle);
		void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult* Hit);
		bool BPCanTakePassenger(class APrimalCharacter* Character, int32_t PassengerSeatIndex, bool bForcePassenger, bool bAllowFlyersAndWaterDinos);
		struct FVector GetPlayerSpawnLocation();
		bool BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams);
		void BPDinoPostBeginPlay();
		bool BP_ForceAllowAddBuff(class UClass* BuffClass);
		void HandleFX(float DeltaTime);
		void SortSeatsByDistance(const struct FVector& ToLocation, class APrimalCharacter* forCharacter, TArray<struct FSaddlePassengerSeatDefinition>* SortedSeatDefinitons, TArray<int32_t>* Sortedindices);
		struct FRotator BPCameraBaseOrientation(class APrimalCharacter* viewingCharacter);
		struct FRotator BPLimitPlayerRotation(class APrimalCharacter* viewingCharacter, const struct FRotator& InViewRotation);
		bool BPModifyDesiredRotation(float DeltaTime, struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation);
		void PassengerWeaponChanged(class AShooterWeapon* newWeapon);
		void OnSpawnedForItem(class UPrimalItem* ForItem);
		bool BP_ForceAllowMountedWeapon(class UClass* WeaponTemplate);
		void GetCurrentPassengerAxisInputs(bool bDebug, bool* bAnyActiveInputs, TArray<struct FVector2D>* PerPassengerInputs, float* AvgForward, float* AvgRight, int32_t* NumActiveForward, int32_t* NumActiveRight);
		void BPNotifyClearPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex);
		void BPNotifyAddPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex);
		void PickupCanoe(class AShooterCharacter* forChar);
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		bool BPCanBeBaseForCharacter(class APawn* Pawn);
		bool BPCanCryo(class AShooterPlayerController* ForPC);
		void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void UserConstructionScript();
		void DoPlayKnockAnimation(int32_t KnockDirectionIndex);
		void Multicast_RefreshColors();
		void ExecuteUbergraph_Canoe_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
