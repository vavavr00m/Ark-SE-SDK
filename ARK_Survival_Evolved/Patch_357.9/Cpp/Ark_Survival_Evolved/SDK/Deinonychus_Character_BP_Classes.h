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
	 * BlueprintGeneratedClass Deinonychus_Character_BP.Deinonychus_Character_BP_C
	 * Size -> 0x0EE7 (FullSize[0x3540] - InheritedSize[0x2659])
	 */
	class ADeinonychus_Character_BP_C : public ARaptor_Character_BP_C
	{
	public:
		unsigned char                                              UnknownData_KF2E[0x7];                                   // 0x2659(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCapsuleComponent*                                   UberpounceDamageComponent;                               // 0x2660(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDinoCharacterStatusComponent_BP_Deinonychus_C*      DinoCharacterStatus_BP_Deinonychus_C1;                   // 0x2668(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		double                                                     PounceApexStart;                                         // 0x2670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class APrimalDinoCharacter*                                PouncedTargetRidingDino;                                 // 0x2678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceRange;                                         // 0x2680(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TWF0[0x4];                                   // 0x2684(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              UpberpounceTargetingLocationsTraceRadii;                 // 0x2688(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              BaseUberpounceSocketName;                                // 0x2698(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class AActor*                                              UberpounceTargetingTagActor;                             // 0x26A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              UberpounceTargetingTagActorClass;                        // 0x26B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BaseUberpounceAngle;                                     // 0x26B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MinBaseUberpounceAngleVertical;                          // 0x26BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxBaseUberpounceAngleVertical;                          // 0x26C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BaseUberounceAngleHoriz;                                 // 0x26C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceAimingDirVectorWeighMult;                      // 0x26C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NUQF[0x4];                                   // 0x26CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    UberpounceTargetCharacter;                               // 0x26D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceInterpSpeedBase;                               // 0x26D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AET2[0x4];                                   // 0x26DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     StartUberpounceTime;                                     // 0x26E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceCapsuleSizeMult;                               // 0x26E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5F8F[0x4];                                   // 0x26EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUberpounceData                                     UberpounceQueuedData;                                    // 0x26F0(0x0030) Edit, BlueprintVisible, Net, DisableEditOnInstance
		struct FUberpounceData                                     UberpounceCurrentData;                                   // 0x2720(0x0030) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      UberpounceEndpounceSpeed;                                // 0x2750(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceTargetingImpactLocationDistanceThreshold;      // 0x2754(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpouncePercentDistanceThresholdForRotationInterp;     // 0x2758(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceInterpSpeedRotationRoll;                       // 0x275C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceCameraDistanceOpacityThreshold;                // 0x2760(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceOpacityFresnelExponent;                        // 0x2764(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EUberpounceState                                           UberpounceState;                                         // 0x2768(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UberpounceBufferedJumpInput;                             // 0x2769(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AUW5[0x2];                                   // 0x276A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UberpounceDistancePercentToTargetThresholdForStateChange; // 0x276C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             CameraOffsetWhenAttachedToLocation;                      // 0x2770(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceMinRange;                                      // 0x277C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             PreviousCameraLocationOffset;                            // 0x2780(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5NT2[0x4];                                   // 0x278C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ServerDebugString;                                       // 0x2790(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance
		double                                                     TimeLastUpdatedUberpounce;                               // 0x27A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       GeoLineSuccess;                                          // 0x27A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z5RV[0x7];                                   // 0x27A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class APrimalCharacter*>                            ActiveBleeds;                                            // 0x27B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		struct FVector2D                                           HUDElementShakeOffsetBase;                               // 0x27C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector2D                                           BleedHUDElementLocationBase;                             // 0x27C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector2D                                           BleedHUDElementSize;                                     // 0x27D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FAnchors                                            BleedHUDElementAnchor;                                   // 0x27D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      BleedIndicatorEdgeMarginPercent;                         // 0x27E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BleedIndicatorSizeMult;                                  // 0x27EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            StartingUberpounceRotation;                              // 0x27F0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      StartingUberpounceDistanceToTarget;                      // 0x27FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpouncePercentDistanceThresholdForYawRotationInterp;  // 0x2800(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpouncePercentDistanceThresholdForPitchRotationInterp; // 0x2804(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpouncePercentDistanceThresholdForRollRotationInterp; // 0x2808(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ScreenPercentMulti;                                      // 0x280C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ScreenPercentAdd;                                        // 0x2810(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceRotationYawAlpha;                              // 0x2814(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceRotationYawInterpSpeed;                        // 0x2818(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            UberpounceAttachToLocationStartTargetRotation;           // 0x281C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FUberpounceData                                     PreviousUberpounceData;                                  // 0x2828(0x0030) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      UberpounceStartTargetRotationInterpSpeed;                // 0x2858(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceOutOfRangeMax;                                 // 0x285C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceTargetingUIIconSize;                           // 0x2860(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FZSF[0x4];                                   // 0x2864(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUberpounceData                                     BackwardUberpounceQueuedData;                            // 0x2868(0x0030) Edit, BlueprintVisible, DisableEditOnInstance
		struct FAnchors                                            BackwardsPounceUIIconAnchor;                             // 0x2898(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector2D                                           BackwardsPounceUIIconLocation;                           // 0x28A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PlayedAttachAnim;                                        // 0x28B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T1I8[0x3];                                   // 0x28B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             StartUberpounceLocation;                                 // 0x28B4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceLocationInterpAlpha;                           // 0x28C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PlayedStateChangeEffects;                                // 0x28C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X4FG[0x3];                                   // 0x28C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UberpounceMinDistanceForInterpSpeed;                     // 0x28C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceAttachLocationCapsuleOffsetMult;               // 0x28CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasQueuedUberpounce;                                     // 0x28D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GJKV[0x3];                                   // 0x28D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UberpounceEndpounceSpeedVertical;                        // 0x28D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             PrevCameraLocation;                                      // 0x28D8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CameraInterpSpeedBase;                                   // 0x28E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PrevFOV;                                                 // 0x28E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FOVInterpSpeed;                                          // 0x28EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceDistanceToTarget;                              // 0x28F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WSHC[0x4];                                   // 0x28F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         CameraInterpSpeedMultCurve;                              // 0x28F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            PrevCameraRotation;                                      // 0x2900(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UberpounceCameraOnLeft;                                  // 0x290C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EDeinonychusCameraState                                    CameraState;                                             // 0x290D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HUCZ[0x2];                                   // 0x290E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             UberpounceTPVOffsetLeft;                                 // 0x2910(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             UberpounceTPVOffsetRight;                                // 0x291C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             TPVOffsetAttachedToCharacter;                            // 0x2928(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             TPVOffsetAttachedToCharacterRight;                       // 0x2934(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CameraRotationInterpSpeedAttachToCharacter;              // 0x2940(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CameraInterpSpeedLeftOrRightCameraState;                 // 0x2944(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceBloodVFXScale;                                 // 0x2948(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceInitialLatchDamageBase;                        // 0x294C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EUberpounceState                                           PreviousUberpounceState;                                 // 0x2950(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DebugMode;                                               // 0x2951(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HUJ5[0x2];                                   // 0x2952(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DebugUberpounceTraceCount;                               // 0x2954(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    DebugTraceCount;                                         // 0x2958(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       QueuedBufferedUberpounce;                                // 0x295C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CWEE[0x3];                                   // 0x295D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UberpouncePercentDistanceThresholdForBufferedJump;       // 0x2960(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UJX4[0x4];                                   // 0x2964(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TimeLastUberpounceAttached;                              // 0x2968(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TimeUntilUberpounceSlidingBase;                          // 0x2970(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EPrimalCharacterStatusValue                                UberpounceSliddingStat;                                  // 0x2974(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UberpounceIsSliding;                                     // 0x2975(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CWK0[0x2];                                   // 0x2976(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UberpounceSlidingCapsuleSizeMult;                        // 0x2978(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8H0F[0x4];                                   // 0x297C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     UberpounceWallImpactEmitter;                             // 0x2980(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     UberpounceDinoImpactEmitter;                             // 0x2988(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<float>                                              UberpounceFanAnglesAimedUp;                              // 0x2990(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      UberpounceDistancePercentToTargetThresholdForStateChangeTargetIsGround; // 0x29A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EY48[0x4];                                   // 0x29A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              UberpounceReflectionMult;                                // 0x29A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      UberounceIsGroundDotProductThreshold;                    // 0x29B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DebugModeShowFans;                                       // 0x29BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZANO[0x3];                                   // 0x29BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              UberpounceFanAnglesAimedDown;                            // 0x29C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              UberpounceGroundTargetingForwardAngles;                  // 0x29D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       ShowCursor;                                              // 0x29E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PHWS[0x3];                                   // 0x29E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UberpounceIsAttachableDotProductThreshold;               // 0x29E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RotationInterpSpeedAttachedToCharacter;                  // 0x29E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceMinCameraDistanceAttachedToCharacter;          // 0x29EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastJumpPressedTime;                                     // 0x29F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastFallingTime;                                         // 0x29F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsJumpButtonHeld;                                        // 0x2A00(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X4Q7[0x7];                                   // 0x2A01(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastUberpounceGrabStartTime;                             // 0x2A08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceTraceSelectDinoDotProductThreshold;            // 0x2A10(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PounceOnSurvivorRange;                                   // 0x2A14(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PounceOnSurvivorTraceRadius;                             // 0x2A18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceParabolicPositionZScaleBase;                   // 0x2A1C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EEasingFunc                                                UberpunceLocationInterpFunction;                         // 0x2A20(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2Y0A[0x3];                                   // 0x2A21(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UberpouncePrevZOffset;                                   // 0x2A24(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpouncePressAndHoldMinTime;                           // 0x2A28(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceMaxSuicideJumpStrength;                        // 0x2A2C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceLatchedJumpMaxSpeed;                           // 0x2A30(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceMaxVelocityZ;                                  // 0x2A34(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceSlideSpeedBase;                                // 0x2A38(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R7Q4[0x4];                                   // 0x2A3C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     UberpounceTimeStartedSliding;                            // 0x2A40(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceMaxSlideSpeed;                                 // 0x2A48(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpouncePressAndHoldCameraShakeScale;                  // 0x2A4C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceGrabTraceRadiusMult;                           // 0x2A50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceJumpSpeed;                                     // 0x2A54(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceJumpAngleFromLocation;                         // 0x2A58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceDistancePercentToTargetThresholdForStateChangeTargetBuffered; // 0x2A5C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceRotationInterpSpeedPitch;                      // 0x2A60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceJumpAngle;                                     // 0x2A64(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DebugModeHUDElements;                                    // 0x2A68(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QAQ6[0x3];                                   // 0x2A69(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           DebugStringHUDElementLoc;                                // 0x2A6C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UberpounceAtTargetRotation;                              // 0x2A74(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UberpounceIsGrab;                                        // 0x2A75(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T743[0x2];                                   // 0x2A76(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UberpounceRotationInterpSpeedPitchGrab;                  // 0x2A78(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DebugModeNonAuthoritativeClient;                         // 0x2A7C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DisableSimulatedMovement;                                // 0x2A7D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZAAF[0x2];                                   // 0x2A7E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UberpoucneTargetIsGroundBufferedThreshold;               // 0x2A80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShowUberpounceHUD;                                       // 0x2A84(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5ZEG[0x3];                                   // 0x2A85(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SuicideJumpSpeedOnFailedTargetIsGround;                  // 0x2A88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZHXK[0x4];                                   // 0x2A8C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUberpounceData                                     AIBufferedUberpounce;                                    // 0x2A90(0x0030) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      AIUberpounceAttackInterval;                              // 0x2AC0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             LatchedJumpVelocity;                                     // 0x2AC4(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DebugModeLatching;                                       // 0x2AD0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KWLO[0x3];                                   // 0x2AD1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LatchedJumpVelcityInterpSpeed;                           // 0x2AD4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LatchedJumpSpeed;                                        // 0x2AD8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LatchedJumpWallHugSpeed;                                 // 0x2ADC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LatchedJumpTimeToAutoLatch;                              // 0x2AE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LatchedJumpOffWallSpeed;                                 // 0x2AE4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastTimeAutoLatchedJump;                                 // 0x2AE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AutoLatchJumpCooldown;                                   // 0x2AF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            LatchedJumpRotation;                                     // 0x2AF4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             CachedLatchJumpVelocity;                                 // 0x2B00(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LatchedAutoJumpSlowDownSpeed;                            // 0x2B0C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceTraceIsFacingThreshold;                        // 0x2B10(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DebugModeUberpounceCharacterTrace;                       // 0x2B14(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UberpounceUseArcTargeting;                               // 0x2B15(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A1YB[0x2];                                   // 0x2B16(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FallingLatchRange;                                       // 0x2B18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FallingInterpFromVerticalSpeed;                          // 0x2B1C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MinDistanceForUberpounce;                                // 0x2B20(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PounceStartedSpeedTowardsTarget;                         // 0x2B24(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PounceStartedUpwardsSpeed;                               // 0x2B28(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceInterpSpeedBaseAI;                             // 0x2B2C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceAttachedToCharacterStaminaCostPerSecond;       // 0x2B30(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceAttachedToLocationStaminaCostPerSecond;        // 0x2B34(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      JumpStaminaCost;                                         // 0x2B38(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LatchJumpStaminaCost;                                    // 0x2B3C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceEndpounceSpeedOutOfStamina;                    // 0x2B40(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceFitsInSpaceSizeMult;                           // 0x2B44(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CachedHasLatchableSurfaceInFrontOfDeinonychusResult;     // 0x2B48(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_38H3[0x7];                                   // 0x2B49(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUberpounceData                                     CachedHasLatchableSurfaceInFrontOfDeinonychusUberpounceData; // 0x2B50(0x0030) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    LastFrameCheckedLatchableSurface;                        // 0x2B80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceZOffsetScalar;                                 // 0x2B84(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceZOffsetInterpSpeed;                            // 0x2B88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceInterpSpeed;                                   // 0x2B8C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceFromCharacterFaceCameraRotationThreshold;      // 0x2B90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceAimPitchOffsetAttached;                        // 0x2B94(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DebugModeAimDirection;                                   // 0x2B98(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TDDJ[0x3];                                   // 0x2B99(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            WallRotator;                                             // 0x2B9C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DebugModeLatchedJump;                                    // 0x2BA8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DebugModeWallHugging;                                    // 0x2BA9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YO7P[0x2];                                   // 0x2BAA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LatchedJumpLedgeTopSpeed;                                // 0x2BAC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceSocketToSocketDotProductThreshold;             // 0x2BB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             UberpounceDefaultTPVOffset;                              // 0x2BB4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UberpounceFoundLedge;                                    // 0x2BC0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O6JQ[0x7];                                   // 0x2BC1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAnimMontage*>                                UninteruptableAnimMontages;                              // 0x2BC8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		double                                                     LastTimeJumpReleasedTookAction;                          // 0x2BD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LatchedJumpRequested;                                    // 0x2BE0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bSpawnNestEgg;                                           // 0x2BE1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FH3T[0x2];                                   // 0x2BE2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                NestPointListCustomTagName;                              // 0x2BE4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      StructureSpawnPointMaxDistance;                          // 0x2BEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      StructureCheckRadius;                                    // 0x2BF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VDDD[0x4];                                   // 0x2BF4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              NestToSpawn;                                             // 0x2BF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MaxStructuresInRadius;                                   // 0x2C00(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             StructureTraceImpactOffset;                              // 0x2C04(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             StructureTraceSpawnOffset;                               // 0x2C10(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             NestEggOffset;                                           // 0x2C1C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      NotifyNeighborDeinonychusOfEggRange;                     // 0x2C28(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2EMN[0x4];                                   // 0x2C2C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastEggSpawnTime;                                        // 0x2C30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UnstasisStructureCreateEggInterval;                      // 0x2C38(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DTHF[0x4];                                   // 0x2C3C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastUnstasisStructureTime;                               // 0x2C40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DebugModeUberpounceCollision;                            // 0x2C48(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SYSD[0x3];                                   // 0x2C49(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UberpounceCollisionTraceDistance;                        // 0x2C4C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceCollisionRadiusMult;                           // 0x2C50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             UberpounceLastKnownGoodLocation;                         // 0x2C54(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    UberpounceNumFramesColliding;                            // 0x2C60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    UberpounceNumFramesCollidingToEndUberpounce;             // 0x2C64(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<float>                                              UberpounceTargetingCharactersTraceRadii;                 // 0x2C68(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       DebugModeSliding;                                        // 0x2C78(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F6FW[0x3];                                   // 0x2C79(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             UberpounceStartingTargetLocation;                        // 0x2C7C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      OnSlideEndUberpounceDotThreshold;                        // 0x2C88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceNoSlideThreshold;                              // 0x2C8C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceRedwoodTreeSizeZThreshold;                     // 0x2C90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceAttachedCooldown;                              // 0x2C94(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceTotalDisplacementTraveled;                     // 0x2C98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxUberpounceDistanceGiveUpMult;                         // 0x2C9C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceBaseStaminaCost;                               // 0x2CA0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EUberpounceState                                           UberpounceServerState;                                   // 0x2CA4(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_32YY[0x3];                                   // 0x2CA5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UberpounceDetectDesyncTimer;                             // 0x2CA8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AddedUberpouncePinnedBuff;                               // 0x2CAC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AE5K[0x3];                                   // 0x2CAD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UberpounceErrorLocTolerance;                             // 0x2CB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LatchedJumpErrorLocTolerance;                            // 0x2CB4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceEndSpeedOnJump;                                // 0x2CB8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceMaxTimeToAttach;                               // 0x2CBC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FScriptMulticastDelegate                             NewEventDispatcher;                                      // 0x2CC0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      UberpounceDistanceThresholdForAttach;                    // 0x2CD0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceLoSRadius;                                     // 0x2CD4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             LatchedJumpLastWallNormalVector;                         // 0x2CD8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KSQU[0x4];                                   // 0x2CE4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LatchedJumpTimeLastHadWall;                              // 0x2CE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LatchJumpAppliedCliffImpulse;                            // 0x2CF0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DebugModeLoS;                                            // 0x2CF1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EnablePinnedBuffOnDinos;                                 // 0x2CF2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RespectStaminaDuringUberpounce;                          // 0x2CF3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LVWB[0x4];                                   // 0x2CF4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             LatchJumpRitAnim;                                        // 0x2CF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UObject*                                             LatchJumpLftAnim;                                        // 0x2D00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UObject*                                             LatchJumpAnim;                                           // 0x2D08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        LatchOutToFallAnim;                                      // 0x2D10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        PouncePinInAnim;                                         // 0x2D18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UObject*                                             LatchAutoJumpAnim;                                       // 0x2D20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UObject*                                             LatchHopRightAnim;                                       // 0x2D28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UObject*                                             LatchHopLeftAnim;                                        // 0x2D30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SupportNoHoldWallJumpOff;                                // 0x2D38(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NOMP[0x7];                                   // 0x2D39(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTimeStartedLatchedJump;                              // 0x2D40(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastTimeQueuedAutoJump;                                  // 0x2D48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ImpactVFXScale;                                          // 0x2D50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpoiunceAttachedToLocationCameraShakeScale;           // 0x2D54(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpoiunceAttachedToLocationCameraShakeSpeed;           // 0x2D58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             NewVar_1;                                                // 0x2D5C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastEndUberpounceTime;                                   // 0x2D68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastWalkingTime;                                         // 0x2D70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EnableClientSimulation;                                  // 0x2D78(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T7IH[0x7];                                   // 0x2D79(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTickTime;                                            // 0x2D80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DebugModeTimer;                                          // 0x2D88(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NOT2[0x7];                                   // 0x2D89(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         HoldTimeToJumpSpeedMult;                                 // 0x2D90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        UberpounceDetachMontage;                                 // 0x2D98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CheckForFallingLatchDelayAfterJump;                      // 0x2DA0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3XFS[0x4];                                   // 0x2DA4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUberpounceData                                     OutOfRangeUberpounceData;                                // 0x2DA8(0x0030) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       SupportPressAndHoldUberpounce;                           // 0x2DD8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_11CU[0x7];                                   // 0x2DD9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        UberJumpFXAttachNames;                                   // 0x2DE0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UParticleSystem*                                     UberJumpFXParticle;                                      // 0x2DF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       InstantJumpOffWall;                                      // 0x2DF8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1FJX[0x3];                                   // 0x2DF9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            EndUberpounceTargetRotation;                             // 0x2DFC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       InstantRotateOnUberpounce;                               // 0x2E08(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G18R[0x3];                                   // 0x2E09(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EndUberpounceTargetRotationInterpSpeed;                  // 0x2E0C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseLeapImpactFX;                                         // 0x2E10(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HAQX[0x3];                                   // 0x2E11(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpawnLocalClinetSuperJumpFXDelay;                        // 0x2E14(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     LeapImpactFX;                                            // 0x2E18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UberpounceTargetsCharacters;                             // 0x2E20(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HL40[0x3];                                   // 0x2E21(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    UberpounceTraceGroups;                                   // 0x2E24(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ECollisionChannel                                          UberpounceTraceChannel;                                  // 0x2E28(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YKGW[0x3];                                   // 0x2E29(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MeshDebugDrawDuration;                                   // 0x2E2C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MeshProtectionLatchedDashScalar;                         // 0x2E30(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DebugModeLatchMesh;                                      // 0x2E34(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SC5M[0x3];                                   // 0x2E35(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OffsetLatch;                                             // 0x2E38(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             AttachedCharacterLocation;                               // 0x2E3C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             UberpounceStartLocation;                                 // 0x2E48(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceHackDistCheck;                                 // 0x2E54(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastTimeCarried;                                         // 0x2E58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceFitsInSpaceMultHalfHeight;                     // 0x2E60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SlidingInputPressed;                                     // 0x2E64(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WBTV[0x3];                                   // 0x2E65(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              FallingLatchingAngles;                                   // 0x2E68(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FVector                                             MeshLocationOffset;                                      // 0x2E78(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UberpounceLocationUpdatesOnServerOnly;                   // 0x2E84(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_07S1[0x3];                                   // 0x2E85(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LatchJumpBlendIn;                                        // 0x2E88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LatchJumpBlendOut;                                       // 0x2E8C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LatchingMeshMultForCapsuleValidation;                    // 0x2E90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EndUberpounceOnStaminaDepleted;                          // 0x2E94(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J2LZ[0x3];                                   // 0x2E95(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DelayBeforeLatchJumpLedgeTopPush;                        // 0x2E98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H2U9[0x4];                                   // 0x2E9C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastCliffImpulseTime;                                    // 0x2EA0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastTimeAppliedVelocityOnEndUberpounce;                  // 0x2EA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LatchJumpAnimPlayRate;                                   // 0x2EB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MinJumpStrengthOnJumpFromUberpounce;                     // 0x2EB4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LastEndUberpounceWasJumpFromWall;                        // 0x2EB8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EnableWallHugging;                                       // 0x2EB9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1DEO[0x2];                                   // 0x2EBA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WallHugMaxSpeed;                                         // 0x2EBC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SlideInterpSpeed;                                        // 0x2EC0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SupportsLatchJumpOnJumpReleased;                         // 0x2EC4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3934[0x3];                                   // 0x2EC5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SupportsLatchJumpOnJumpReleasedDotProductThresholdForCameraDirection; // 0x2EC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceTargetRotatorIsEqualThreshold;                 // 0x2ECC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SupportsUberpounceClampingAtTargetRotation;              // 0x2ED0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SupportsLedgeTopPushValidation;                          // 0x2ED1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseQinterpForUberpounceRotation;                         // 0x2ED2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EnableServerUpdateTransformDuringLatchedJump;            // 0x2ED3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ServerUpdateTransformDuringLatchedJumpValidation;        // 0x2ED4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K0YS[0x3];                                   // 0x2ED5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ValidateUberpounceDistance;                              // 0x2ED8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MinVelocityThresholdForRotationOnEndUberpounce;          // 0x2EDC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastServerTransformCorrectionTime;                       // 0x2EE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastRequestJumpTime;                                     // 0x2EE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue;                        // 0x2EF0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue;                // 0x2EF8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue2;               // 0x2EF9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_DoubleDouble_ReturnValue;            // 0x2EFA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MKH2[0x1];                                   // 0x2EFB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             K2Node_CustomEvent_Location4;                            // 0x2EFC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_Location3;                            // 0x2F08(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		EUberpounceState                                           K2Node_CustomEvent_VerifiedState;                        // 0x2F14(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_K2_SetActorLocation_ReturnValue;                // 0x2F15(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DAVO[0x2];                                   // 0x2F16(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUberpounceData                                     K2Node_CustomEvent_Data2;                                // 0x2F18(0x0030) Transient, DuplicateTransient
		struct FVector                                             K2Node_CustomEvent_Location2;                            // 0x2F48(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            K2Node_CustomEvent_rotation;                             // 0x2F54(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetUberpounceTransform_Location;                // 0x2F60(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_GetUberpounceTransform_Rotation;                // 0x2F6C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_GetUberpounceTransform_IsGroundSurface;         // 0x2F78(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x2F79(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C3KD[0x6];                                   // 0x2F7A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUberpounceData                                     K2Node_CustomEvent_Data;                                 // 0x2F80(0x0030) Transient, DuplicateTransient
		bool                                                       CallFunc_IsLocallyControlledByPlayer_ReturnValue;        // 0x2FB0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R749[0x3];                                   // 0x2FB1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue;                // 0x2FB4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue;              // 0x2FC0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize_ReturnValue;                              // 0x2FCC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLocallyControlledByPlayer_ReturnValue2;       // 0x2FD0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HOP5[0x3];                                   // 0x2FD1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             K2Node_CustomEvent_Velocity2;                            // 0x2FD4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Normal_ReturnValue;                             // 0x2FE0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetModeBP                                                 CallFunc_SwitchNetworkMode_OutNetworkMode;               // 0x2FEC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum_CmpSuccess;                            // 0x2FED(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IDAU[0x2];                                   // 0x2FEE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             K2Node_CustomEvent_velocity;                             // 0x2FF0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetModeBP                                                 CallFunc_SwitchNetworkMode_OutNetworkMode2;              // 0x2FFC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z4X5[0x3];                                   // 0x2FFD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Normal_ReturnValue2;                            // 0x3000(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum2_CmpSuccess;                           // 0x300C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8GZM[0x3];                                   // 0x300D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             K2Node_CustomEvent_Velocity3;                            // 0x3010(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum3_CmpSuccess;                           // 0x301C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CIFN[0x3];                                   // 0x301D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             K2Node_CustomEvent_Velocity4;                            // 0x3020(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize_ReturnValue2;                             // 0x302C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_Velocity5;                            // 0x3030(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JS4L[0x4];                                   // 0x303C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        K2Node_CustomEvent_MontageToPlayOnNonZeroVelocity;       // 0x3040(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FUberpounceData                                     K2Node_CustomEvent_QueuedUberpounceData;                 // 0x3048(0x0030) Transient, DuplicateTransient
		bool                                                       K2Node_CustomEvent_QuickUberpounce;                      // 0x3078(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3XUV[0x7];                                   // 0x3079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        CallFunc_GetInitialAnimationForUberpounce_OutAnim;       // 0x3080(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FName                                                CallFunc_GetInitialAnimationForUberpounce_RetStartSectionName; // 0x3088(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        CallFunc_GetInitialAnimationForUberpounce_OutAnim2;      // 0x3090(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FName                                                CallFunc_GetInitialAnimationForUberpounce_RetStartSectionName2; // 0x3098(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_PlayAnimEx_ReturnValue;                         // 0x30A0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_PlayAnimEx_ReturnValue2;                        // 0x30A4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetUberpounceTransform_Location2;               // 0x30A8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_GetUberpounceTransform_Rotation2;               // 0x30B4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_GetUberpounceTransform_IsGroundSurface2;        // 0x30C0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue;                // 0x30C1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NearlyEqual_VectorVector_ReturnValue;           // 0x30C2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DAUQ[0x1];                                   // 0x30C3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_GetActorRightVector_ReturnValue;                // 0x30C4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x30D0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1NVK[0x3];                                   // 0x30D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Dot_VectorVector_ReturnValue;                   // 0x30D4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x30D8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue;                 // 0x30D9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue;                    // 0x30DA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x30DB(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x30DC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue2;                           // 0x30DD(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_528K[0x2];                                   // 0x30DE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue2;               // 0x30E0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue3;               // 0x30EC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue2;             // 0x30F8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetUpVector_ReturnValue;                        // 0x3104(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Normal_ReturnValue3;                            // 0x3110(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue;               // 0x311C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue2;              // 0x3128(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue;                   // 0x3134(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue4;               // 0x3140(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue2;                  // 0x314C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_Velocity6;                            // 0x3158(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1C6W[0x4];                                   // 0x3164(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        K2Node_CustomEvent_MontageToPlayOnNonZeroVelocity2;      // 0x3168(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalCharacter*                                    K2Node_CustomEvent_target;                               // 0x3170(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_DeductStamina_SuccessfullyRemovedStamina;       // 0x3178(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_DeductStamina_SuccessfullyRemovedStamina2;      // 0x3179(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_DeductStamina_SuccessfullyRemovedStamina3;      // 0x317A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_DeductStamina_SuccessfullyRemovedStamina4;      // 0x317B(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetActorRightVector_ReturnValue2;               // 0x317C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Dot_VectorVector_ReturnValue2;                  // 0x3188(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue2;                // 0x318C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue2;                   // 0x318D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue3;                        // 0x318E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue3;                       // 0x318F(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetActorUpVector_ReturnValue;                   // 0x3190(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_NegateVector_ReturnValue;                       // 0x319C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue3;              // 0x31A8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_K2_GetActorRotation_ReturnValue;                // 0x31B4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue3;                  // 0x31C0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetUpVector_ReturnValue2;                       // 0x31CC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetUpVector_ReturnValue3;                       // 0x31D8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_newTargetLocation;                    // 0x31E4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            K2Node_CustomEvent_NewTargetRotation;                    // 0x31F0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZXRX[0x4];                                   // 0x31FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    K2Node_CustomEvent_OldTarget;                            // 0x3200(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Dot_VectorVector_ReturnValue3;                  // 0x3208(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue3;                // 0x320C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum4_CmpSuccess;                           // 0x320D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ObjectObject_ReturnValue;            // 0x320E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum5_CmpSuccess;                           // 0x320F(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BPIsTamed_ReturnValue;                          // 0x3210(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue4;                       // 0x3211(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3WG3[0x6];                                   // 0x3212(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetNetworkTimeInSeconds_ReturnValue;            // 0x3218(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_GetNetworkTimeInSeconds_ReturnValue2;           // 0x3220(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_GetNetworkTimeInSeconds_ReturnValue3;           // 0x3228(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_Subtract_DoubleDouble_ReturnValue;              // 0x3230(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Conv_DoubleToFloat_ReturnValue;                 // 0x3238(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue4;                // 0x323C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V4YC[0x3];                                   // 0x323D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_Subtract_DoubleDouble_ReturnValue2;             // 0x3240(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_Location;                             // 0x3248(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Conv_DoubleToFloat_ReturnValue2;                // 0x3254(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_K2_SetActorLocation_ReturnValue2;               // 0x3258(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue5;                // 0x3259(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_DeductStamina_SuccessfullyRemovedStamina5;      // 0x325A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QEEW[0x1];                                   // 0x325B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             K2Node_CustomEvent_Loc;                                  // 0x325C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum6_CmpSuccess;                           // 0x3268(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_10U4[0x7];                                   // 0x3269(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             CallFunc_SelectObject_ReturnValue;                       // 0x3270(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UObject*                                             CallFunc_SelectObject_ReturnValue2;                      // 0x3278(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        K2Node_DynamicCast_AsAnimMontage;                        // 0x3280(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x3288(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YKCH[0x7];                                   // 0x3289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetNetworkTimeInSeconds_ReturnValue4;           // 0x3290(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UObject*                                             CallFunc_SelectObject_ReturnValue3;                      // 0x3298(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UObject*                                             CallFunc_SelectObject_ReturnValue4;                      // 0x32A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_DoubleDouble_ReturnValue2;           // 0x32A8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YP0I[0x7];                                   // 0x32A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        K2Node_DynamicCast_AsAnimMontage2;                       // 0x32B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x32B8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1E2M[0x7];                                   // 0x32B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetNetworkTimeInSeconds_ReturnValue5;           // 0x32C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_GetNetworkTimeInSeconds_ReturnValue6;           // 0x32C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_DoubleDouble_ReturnValue3;           // 0x32D0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AN71[0x7];                                   // 0x32D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     K2Node_CustomEvent_FX_to_Spawn2;                         // 0x32D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		TArray<class FName>                                        K2Node_CustomEvent_Attach_Point_Names2;                  // 0x32E0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystem*                                     K2Node_CustomEvent_FX_to_Spawn;                          // 0x32F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		TArray<class FName>                                        K2Node_CustomEvent_Attach_Point_Names;                   // 0x32F8(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_IsLocallyControlled_ReturnValue;                // 0x3308(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SNFP[0x3];                                   // 0x3309(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue5;               // 0x330C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue3;             // 0x3318(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue4;             // 0x3324(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize_ReturnValue3;                             // 0x3330(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize_ReturnValue4;                             // 0x3334(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue6;                // 0x3338(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_83R1[0x3];                                   // 0x3339(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue6;               // 0x333C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x3348(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HLV3[0x7];                                   // 0x3349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHitResult                                          CallFunc_VTraceSingleBP_OutHit;                          // 0x3350(0x0088) Transient, DuplicateTransient
		bool                                                       CallFunc_VTraceSingleBP_ReturnValue;                     // 0x33D8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RWIV[0x3];                                   // 0x33D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue5;             // 0x33DC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue2;                       // 0x33E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize_ReturnValue5;                             // 0x33F0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8Z6A[0x4];                                   // 0x33F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHitResult                                          CallFunc_VTraceSingleBP_OutHit2;                         // 0x33F8(0x0088) Transient, DuplicateTransient
		bool                                                       CallFunc_VTraceSingleBP_ReturnValue2;                    // 0x3480(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue3;                   // 0x3481(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_87M3[0x2];                                   // 0x3482(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetUberpounceMaxRange_REt;                      // 0x3484(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue;                // 0x3488(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NearlyEqual_VectorVector_ReturnValue2;          // 0x348C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue4;                   // 0x348D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L6CO[0x2];                                   // 0x348E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue7;               // 0x3490(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue6;             // 0x349C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize_ReturnValue6;                             // 0x34A8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue5;                   // 0x34AC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CGNR[0x3];                                   // 0x34AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue3;                       // 0x34B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue2;                         // 0x34B8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsTimeSince_Network_ReturnValue;                // 0x34B9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue5;                       // 0x34BA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue6;                       // 0x34BB(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue4;                        // 0x34BC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue5;                        // 0x34BD(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X5VP[0x2];                                   // 0x34BE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_PlayAnimEx_ReturnValue3;                        // 0x34C0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_PlayAnimEx_ReturnValue4;                        // 0x34C4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_L;                                    // 0x34C8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            K2Node_CustomEvent_R;                                    // 0x34D4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum7_CmpSuccess;                           // 0x34E0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_SetActorLocationAndRotation_ReturnValue;        // 0x34E1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsPrimalCharWalking_ReturnValue;                // 0x34E2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Is_Recently_Unlatched_Ret;                      // 0x34E3(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue8;               // 0x34E4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue4;                       // 0x34F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VectorDistance_ReturnValue;                     // 0x34F8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BPFastTrace_ReturnValue;                        // 0x34FC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue6;                   // 0x34FD(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CW2V[0x2];                                   // 0x34FE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue5;                       // 0x3500(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_GetNetworkTimeInSeconds_ReturnValue7;           // 0x3508(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsTimeSince_Network_ReturnValue2;               // 0x3510(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsPrimalCharWalking_ReturnValue2;               // 0x3511(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WEXV[0x2];                                   // 0x3512(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue2;               // 0x3514(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue6;                       // 0x3518(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue7;                   // 0x3520(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsTimeSince_Network_ReturnValue3;               // 0x3521(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AY2F[0x6];                                   // 0x3522(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetNetworkTimeInSeconds_ReturnValue8;           // 0x3528(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty; // 0x3530(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		void IsUsingZipline(bool* Ret);
		void IsPlayingLatchedJumpAnimPublic(float TimeFromEndToConsiderFinished, bool* Ret);
		bool CanUpdateRotation();
		void updateRotation(float DeltaSeconds);
		struct FVector GetUberpounceTraceStartingLocation();
		void UpdateErrorTolerance();
		void IsValidUberpounceTargetingData(const struct FUberpounceData& TargetingData, bool* Ret);
		void MultiRequestJumpFn(const struct FVector& Velocity);
		void CanContinueUberpounce(bool* Ret);
		void GetDelayBeforeLatchAfterLatchedJump(float* LatchedJumpTimeToAutoLatch);
		void JumpFromUberpounce(float JumpStrength);
		void IsPlayingLatchedJumpAnim(float TimeFromEndToConsiderFinished, bool* Ret);
		float GetTargetFOV();
		void ServerEndUberpounceFn(const struct FVector& Velocity, class UAnimMontage* MontageToPlayOnNonZeroVelocity);
		void TickSetRotation(float DeltaTime);
		void UpdateRotationForUberpounce(float PercentDistanceToTarget, const struct FRotator& TargetRotation, bool* Ret);
		void GetFallingLatchingAngles(TArray<float>* FallingLatchingAngles);
		void IsValidUberpounceDataForLatching(const struct FUberpounceData& Data, bool* Ret);
		bool IsValidDirectionForLatchingSurfaceTrace(const struct FVector& Direction);
		void BPRemovedAsPassenger(class APrimalCharacter* Character);
		void BP_OnEndCarried(bool bFromDino, bool bCancelAnyCarryBuffs);
		bool BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams);
		void OnNonInstanceJumpOffWallInput(float HoldTime);
		void GetLatchJumpSpeedThresholdForRotate(float* res);
		void SpawnUberJumpFX(TArray<class FName>* AttachPointNames, class UParticleSystem* FXtoSpawn, const struct FRotator& Rotation);
		void IsRecentlyUnlatched(float Threshold, bool* Ret);
		void GetCameraInterpSpeed(float* InterpSpeed);
		void OnJumpFromGround(float HoldTime);
		void GetUberpounceInterpSpeed(float* Speed);
		void CalcCurrentJumpHoldTime(float* Result);
		void ClearOutOfRangeData();
		void GetUberpounceRangeBase(float* Ret);
		void GetUberpounceMaxRange(float* Ret);
		void UpdateTickThrottles();
		void BPTimerNonDedicated();
		void ThrottledTickFn();
		void BPTimerServer();
		void OnUberpounceAttachedToLocation();
		void ScheduleCheckingFallingLatch(float Delay);
		void TryAddPinnedBuff(class APrimalCharacter* Target);
		void ApplyJump(const struct FVector& Velocity, class UAnimMontage* Anim);
		void GetPounceLatchedAnim(class UAnimMontage** Anim, class FName* StartSectionName);
		void GetInitialAnimationForUberpounce(bool QuickUberpounce, class UAnimMontage** OutAnim, class FName* RetStartSectionName);
		void Los(const struct FVector& Start, const struct FVector& End, float Radius, class APrimalCharacter* Target, bool* Ret);
		void OnRep_UberpounceServerState();
		void UberpounceSurfaceNormalAllowsSliding(bool* Allowed, struct FVector* Direction, bool* EndUberpounce);
		void BPDoAttack(int32_t AttackIndex);
		void IsGroundRotation(const struct FRotator& Rotation, bool* Result, bool* IsCeiling);
		void IsPounceTarget(class APrimalCharacter* Target, bool* Result);
		void UberpounceCollisionCheck(bool* RetHitSomething);
		void SpawnNestEgg();
		void GetUberpounceLocationOffsetForSocket(const struct FRotator& Rotation, struct FVector* Offset);
		void TerrainCheck(const struct FVector& Start, const struct FVector& End, float Radius, bool* HitSomething);
		void IsAnotherDeinonychusAttachedToSocket(class APrimalCharacter* Target, const class FName& Socket, bool* Ret);
		bool AllowPlayMontage(class UAnimMontage* AnimMontage);
		void OnPounceTargetDodged(class APrimalCharacter* Target);
		struct FRotator BPModifyAimOffsetNoTarget(struct FRotator* Aim);
		void GetUberpouncePositionOffsetCurves(class UCurveFloat** RetZOffset, class UCurveFloat** RetXYMult);
		void HasLatchableSurfaceWhileFalling(bool* RetSucccess, struct FUberpounceData* RetResultUberpounceData);
		void GetInitialDamageOnUberpounceLatch(class APrimalCharacter* Target, float* Damage);
		void GetUberpounceStaminaCostOverTime(float* StaminaCost);
		void DeductStamina(float amount, bool* SuccessfullyRemovedStamina);
		void OnPinnedBuffEnded(class APrimalCharacter* BuffTarget);
		void ComputeJumpVector(struct FVector* Ret);
		void PushbackAfterPounceFn();
		void LatchedJumpLaunched();
		void LatchedJumpStart();
		void ResetMeshRelativeRotation();
		void JumpPressedAndHeldFn();
		void CheckForFallingLatchFn(bool AutoJumpAfterLatch);
		void OnDeinonychusLatchedAttack();
		void AllowSurfaceNormalForUberpounce(const struct FVector& surfaceNormal, bool* Ret);
		void TryAIBufferedUberpounce();
		void SetQueuedUberpounceData(const struct FUberpounceData& Data);
		void GetUberpounceTransformPublic(const struct FUberpounceData& UberpounceData, struct FVector* Location, struct FRotator* Rotation, bool* IsGroundSurface);
		void OnUberpounceStateChanged(EUberpounceState NewState, EUberpounceState PrevState);
		void SetUberpounceState(EUberpounceState NewState);
		void LatchedJump(float JumpStrength, bool IsLatchedAutoJump, const struct FVector& WallHugDirection, const struct FVector& DirectionOverride);
		void IsNonAuthoritativeClient(bool* Ret);
		void SendClientMovementAdjustments();
		void IsDebugModeNonAuthoritativeClient(bool* Ret);
		void StartUberpounceFromFalling(const struct FUberpounceData& Data);
		void ClearQueuedData();
		void onJumpInputReleased(bool QueryOnly, bool PounceOnly, bool QueryOnlyOnGroundTarget, struct FUberpounceData* UberpounceData, bool* Result, class APrimalCharacter** RaptorPounceTarget);
		bool BPHandleControllerInitiatedAttack(int32_t AttackIndex);
		void IsValidGeoTypeForUberpounce(class AActor* Actor, class UPrimitiveComponent* HitComponent, bool* Result, bool* RetIsFoliage);
		int32_t BPAdjustAttackIndex(int32_t AttackIndex);
		void CanTryUberpounce(bool* Result);
		void ResetMeshRelativeLocation();
		void K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
		void BP_OnJumpPressed();
		void UberpounceFanTrace(TArray<float>* FanAngles, const struct FVector& Direction, const struct FVector& Start, const struct FRotator& Rotation, struct FUberpounceData* ResultData);
		void OnError(const class FString& Msg);
		void ComputeBufferedUberpounce(const struct FUberpounceData& CurrentUberpounceData, const struct FVector& PreviousUberpounceStartLocation, struct FUberpounceData* ResultData, bool* IsValid);
		void BPOnDinoCheat(const class FName& CheatName, bool bSetValue, float Value);
		void IsUberpounceDataNearlyEqual(const struct FUberpounceData& L, const struct FUberpounceData& R, float FloatErrorTolerance, bool* Result);
		void RidingTick(float DeltaSeconds);
		int32_t BPOverrideGetAttackAnimationIndex(int32_t AttackIndex, TArray<class UAnimMontage*>* AnimationArray);
		bool CanJumpInternal();
		void BP_OnJumpReleased();
		void OnLanded(struct FHitResult* Hit);
		void UberpounceTrace(const struct FVector& Start, const struct FVector& End, float InClosestTargetDistance, bool TraceForLocations, const struct FVector& DeinonychusLocation, const struct FRotator& DeinonychusRotation, bool DebugMode, TArray<float>* TraceRadii, bool CheckDinoDotProduct, const struct FVector& DotProductCompareVector, float DotProductThreshold, const struct FVector& DotProductLocation, bool TraceForCharacters, struct FUberpounceData* Result, bool* RetFoundTarget, bool* RetTargetOutOfRange, float* RetClosestTargetDistance, int32_t* RetFoundIndex);
		void BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale);
		void GetCurrentSocketLevel(class APrimalCharacter* forCharacter, int32_t* OutLevel);
		void GetSocketLevel(const class FString& SocketName, int32_t* OutLevel);
		bool EnableTurnToFaceRotation();
		void FindScreenEdgeLocation(const struct FVector& WorldLocation, float EdgeMarginPct, struct FVector2D* ScreenPosition);
		void GetBleedHUDDataforCharacter(class APrimalCharacter* Character, int32_t index, struct FVector2D* WorldLocToScreenLoc, struct FVector2D* ScreenLoc, float* ProgressBar, class FString* RetBuffCountString, class FString* DinoName, float* Scale, struct FLinearColor* TextColor, bool* Result);
		void BPDrawToRiderHUD(class AShooterHUD* HUD);
		void RemoveBleed(class APrimalCharacter* Instigator);
		void AddBleed(class APrimalCharacter* Instigator);
		void GetDebugString(class FString* Output);
		void GetRotationAndLocationforUberpounceOnSurface(const struct FVector& Location, const struct FVector& surfaceNormal, class UPrimitiveComponent* HitComponent, const struct FVector& DeinonychusLocation, struct FRotator* retRotation, struct FVector* retLocation, bool* Success);
		void IsValidGeoLocationForUberpounce(const struct FVector& Location, const struct FVector& surfaceNormal, class AActor* Actor, const struct FVector& DeinonychusLocation, const struct FRotator& DeinonychusRotation, class UPrimitiveComponent* HitComponent, bool* Result, bool* IsGround, bool* IsFoliage);
		bool BP_InterceptTurnInput(float AxisValue);
		void IsUberpounceActive(bool* Active);
		void BPOverrideCameraViewTarget(const class FName& CurrentCameraMode, const struct FVector& DesiredCameraLocation, const struct FRotator& DesiredCameraRotation, float DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV);
		void GetUberpounceTransform(const struct FUberpounceData& UberpounceData, struct FVector* Location, struct FRotator* Rotation, bool* IsGroundSurface);
		void UpdateAttachedUberpounceFn();
		void SetUberpounceCollision(bool UberpounceActive);
		void DebugDrawRotator(const struct FRotator& Rotator, float DrawScale, const struct FVector& Location, float Duration, float Thinkness);
		void GetUberpounceRotationFromSocket(class APrimalCharacter* Target, const class FName& Socket, struct FRotator* Rotation);
		void StopUberpounceTargeting();
		void BPNotifyClearRider(class AShooterCharacter* RiderClearing);
		void BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements);
		void EndUberpounce(const struct FVector& Velocity, class UAnimMontage* MontageToPlayOnNonZeroVelocity);
		bool BP_InterceptMoveForward(float AxisValue);
		bool BP_InterceptMoveRight(float AxisValue);
		void UpdateUberpounceFn();
		void StartUberPounce(const struct FUberpounceData& Data);
		void FindBestUberpounceSocketonCharacter(class APrimalCharacter* Character, const struct FVector& StartTrace, const struct FVector& EndTrace, float CurrentClosestSocketDistance, const struct FVector& ImpactLocation, float* NewClosestSocketDistance, class FName* RetTargetSocket, class UMeshComponent** RetTargetMesh, bool* RetFoundSocket, struct FRotator* RetTargetRotation);
		void UpdateUberPounceTargetingFn();
		void BPNotifySetRider(class AShooterCharacter* RiderSetting);
		void TryStartUberPounceTargeting();
		bool BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget);
		bool BlueprintCanRiderAttack(int32_t AttackIndex);
		void BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject);
		void UserConstructionScript();
		void InpActEvt_Crouch_K2Node_InputActionEvent_249();
		void InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_248();
		void UpdateUberPounceTargeting();
		void UpdateUberpounce();
		void ServerEndUberpounce(const struct FVector& Velocity, class UAnimMontage* MontageToPlayOnNonZeroVelocity);
		void UpdateAttachedUberpounce();
		void ServerRequestUberpounce(const struct FUberpounceData& QueuedUberpounceData, bool QuickUberpounce);
		void MultiEndUberpounce(const struct FVector& Velocity, class UAnimMontage* MontageToPlayOnNonZeroVelocity);
		void JumpPressedAndHeld();
		void ServerRequestPounce(class APrimalCharacter* Target);
		void ClearPounceEvent();
		void ServerRequestJump(const struct FVector& Velocity);
		void MultiRequestJump(const struct FVector& Velocity);
		void MultiSetLocation(const struct FVector& Location);
		void MultiUpdateCurrentDataLocation(const struct FVector& Location, EUberpounceState VerifiedState);
		void ServerStartUberpounceFromFalling(const struct FUberpounceData& Data, const struct FVector& Location, const struct FRotator& Rotation);
		void MultiStartUberpounceFromFalling(const struct FUberpounceData& Data);
		void QueuedUberpounce();
		void ReceiveBeginPlay();
		void StartCheckingForFallingLatch();
		void ServerRequestLatchedAutoJump(const struct FVector& Velocity);
		void CheckForFallingLatch();
		void ServerRequestLatchedJump(const struct FVector& Velocity);
		void MultiOnPounceStarted();
		void ServerEndPouncing();
		void MULTI_ApplyAtCliffTopVelocity();
		void MULTI_TargetDodgedUberPounce(const struct FVector& NewTargetLocation, const struct FRotator& NewTargetRotation, class APrimalCharacter* OldTarget);
		void BPUnstasis();
		void MULTI_SetLocation(const struct FVector& Location);
		void UberpounceDesyncDetected();
		void ServerSetLocDuringLatchedJump(const struct FVector& Loc);
		void Client_CallServerMulticast_JumpFX(class UParticleSystem* FXtoSpawn, TArray<class FName>* AttachPointNames);
		void Multicast_JumpFX(class UParticleSystem* FXtoSpawn, TArray<class FName>* AttachPointNames);
		void SpawnLocalClinetSuperJumpFX();
		void ServerSlideInputPressed();
		void ServerSlideInputReleased();
		void TimeOutUberpounceRequest();
		void ServerUpdateTransformDuringLatchedJump(const struct FVector& L, const struct FRotator& R);
		void ExecuteUbergraph_Deinonychus_Character_BP(int32_t EntryPoint);
		void NewEventDispatcher__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
