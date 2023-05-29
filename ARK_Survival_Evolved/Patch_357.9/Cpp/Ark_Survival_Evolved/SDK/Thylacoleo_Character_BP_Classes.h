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
	 * BlueprintGeneratedClass Thylacoleo_Character_BP.Thylacoleo_Character_BP_C
	 * Size -> 0x05A0 (FullSize[0x2828] - InheritedSize[0x2288])
	 */
	class AThylacoleo_Character_BP_C : public ADino_Character_BP_NoBossArena_C
	{
	public:
		class UDinoCharacterStatusComponent_BP_Thylaco_C*          DinoCharacterStatus_BP_Thylaco_C1;                       // 0x2288(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		E_PredatorClimbingState                                    CurrentClimbingState;                                    // 0x2290(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       bWantsToClimb;                                           // 0x2291(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bValidSurfaceBeneath;                                    // 0x2292(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		E_PredatorClimbingState                                    PreviousClimbingState;                                   // 0x2293(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M94O[0x4];                                   // 0x2294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ETraceTypeQuery>                                    ClimbableObjectTypes;                                    // 0x2298(0x0010) Edit, BlueprintVisible, ZeroConstructor
		struct FVector                                             currentPounceVector;                                     // 0x22A8(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             currentClimbableSurfaceNormal;                           // 0x22B4(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		float                                                      GravityScale_Climbing;                                   // 0x22C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TimerInterval_Jumping;                                   // 0x22C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TimerInterval_Climbing;                                  // 0x22C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TimerInterval_Latching;                                  // 0x22CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TimerInterval_Latched_NoRider;                           // 0x22D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TimerInterval_Latched_Rider;                             // 0x22D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TimerInterval_Pouncing;                                  // 0x22D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbingImpulse_MIN;                                     // 0x22DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbingImpulse_MAX;                                     // 0x22E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbingImpulse_Latching;                                // 0x22E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbingImpulse_ToWall_OnWall;                           // 0x22E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxClimbVelocity;                                        // 0x22EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      PounceVelocity;                                          // 0x22F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxPounceTime;                                           // 0x22F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		double                                                     PounceStartTime;                                         // 0x22F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_AttachToWallMontage;                                 // 0x2300(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_ClimbingMontage_LatchedDown_Up;                      // 0x2308(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_ClimbingMontage_Up;                                  // 0x2310(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_ClimbingMontage_Left;                                // 0x2318(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_ClimbingMontage_Right;                               // 0x2320(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_LatchingMontage_Up;                                  // 0x2328(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_LatchingMontage_Down;                                // 0x2330(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_LatchedMontage_Down_Left;                            // 0x2338(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_LatchedMontage_Down_Right;                           // 0x2340(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_LatchedMontage_Up_Left;                              // 0x2348(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_LatchedMontage_Up_Right;                             // 0x2350(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_LatchedMontage_Up;                                   // 0x2358(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_LatchedMontage_Down;                                 // 0x2360(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_PouncingMontage;                                     // 0x2368(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TPVCameraOffsetInterpSpeed;                              // 0x2370(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      targetTPVCameraOffsetX;                                  // 0x2374(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LatchedTPVCameraOffsetX_Down;                            // 0x2378(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TimerInterval_Mauling;                                   // 0x237C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_DropPreyMontage;                                     // 0x2380(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_LandingMontage;                                      // 0x2388(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      GravityScale_Latched;                                    // 0x2390(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I6QL[0x4];                                   // 0x2394(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        CurrentClimbingAnim;                                     // 0x2398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ClimbingAntiSlideImpulse;                                // 0x23A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    currentClimbDir;                                         // 0x23A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    previousClimbDir;                                        // 0x23A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ClimbableSurfaceMinDot;                                  // 0x23AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ClimbingAnimSwitchVelocity;                              // 0x23B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      LatchedTPVCameraOffsetX_Up;                              // 0x23B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbingTPVCameraOffsetX;                                // 0x23B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B3G4[0x4];                                   // 0x23BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        Ref_MaulingMontage;                                      // 0x23C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                MaulEndSectionName;                                      // 0x23C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      facingWallNormalDotThreshold;                            // 0x23D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxWallRunAnimScaleVelocity;                             // 0x23D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      latchedStartVelocity;                                    // 0x23D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ignoreLatchedControlRotationBelowDot;                    // 0x23DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsManuallySkidding;                                     // 0x23E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3QXF[0x3];                                   // 0x23E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GravityScale_ManualSkidding;                             // 0x23E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class FName>                                        WallScanSockets;                                         // 0x23E8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      GravityScale_Pouncing;                                   // 0x23F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SurfaceCheckDistance;                                    // 0x23FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsReadyToClimb;                                         // 0x2400(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ISWM[0x3];                                   // 0x2401(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      startClimbingDelay;                                      // 0x2404(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      changeLatchedOrientationDelay;                           // 0x2408(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      requiredDistanceAboveGroundToClimb;                      // 0x240C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAiLatchedOntoTree;                                      // 0x2410(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDebugThylaco;                                           // 0x2411(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G26V[0x2];                                   // 0x2412(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ManualSkidImpulse;                                       // 0x2414(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      PouncingTPVCameraOffsetX;                                // 0x2418(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      reachedTopOfClimbImpulse;                                // 0x241C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ClimbingImpulse_ToWall_GetToWall;                        // 0x2420(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4QJ6[0x4];                                   // 0x2424(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     PounceEndTime;                                           // 0x2428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      requiredVelocityForwardDotToClimb;                       // 0x2430(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      wantsToClimb_RotationRate;                               // 0x2434(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bServer_JumpPressed;                                     // 0x2438(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DEXA[0x7];                                   // 0x2439(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     lastStartMaulingTime;                                    // 0x2440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      maxMaulTime;                                             // 0x2448(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2IQ4[0x4];                                   // 0x244C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ValidLatchSocketSubstring;                               // 0x2450(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       bRestoreToLatched;                                       // 0x2460(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LA1F[0x3];                                   // 0x2461(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      requiredNormalDotToClimb_MAX;                            // 0x2464(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      requiredNormalDotToClimb_MIN;                            // 0x2468(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      currentDistanceToClimbableWall;                          // 0x246C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      requiredMinDistanceFromWall;                             // 0x2470(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SZVH[0x4];                                   // 0x2474(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        WallPreScanSockets;                                      // 0x2478(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class FName>                                        WallScanSockets_AI;                                      // 0x2488(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       bCanCheckAnims;                                          // 0x2498(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsMaulingPrey;                                          // 0x2499(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T2KS[0x2];                                   // 0x249A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AiCheckForAttachToTreeRadius;                            // 0x249C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bMeshInterpolating;                                      // 0x24A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8VS7[0x3];                                   // 0x24A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      meshInterpSpeed_rotation;                                // 0x24A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      meshInterpSpeed_location;                                // 0x24A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      wallJumpImpulse;                                         // 0x24AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    attackIndex_pounce;                                      // 0x24B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    attackIndex_maul;                                        // 0x24B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_FallFromTreeMontage_Down;                            // 0x24B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             meshTargetLocation;                                      // 0x24C0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            meshTargetRotation;                                      // 0x24CC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     lastWallJumpStartTime;                                   // 0x24D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      noClimbTimeAfterWallJump;                                // 0x24E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bRestoringToLatched;                                     // 0x24E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6D0R[0x3];                                   // 0x24E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        Ref_FallFromTreeMontage_Up;                              // 0x24E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsAttachingToWall;                                      // 0x24F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7SQH[0x3];                                   // 0x24F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      attachToWallDelay;                                       // 0x24F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_HurtMontage;                                         // 0x24F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PounceTargetMaxVelocityRatio;                            // 0x2500(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      pounceNoRiderHomingIntensity;                            // 0x2504(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      updateClimbingNormalBelowDot;                            // 0x2508(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      staminaCost_Climbing;                                    // 0x250C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RequiredStaminaToClimb;                                  // 0x2510(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BOFH[0x4];                                   // 0x2514(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     lastJumpFromGroundTime;                                  // 0x2518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      jumpFromGroundClimbDelay;                                // 0x2520(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K6TB[0x4];                                   // 0x2524(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     lastStaminaCostTime;                                     // 0x2528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              LowStaminaMessage;                                       // 0x2530(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      staminaCost_WallJump;                                    // 0x2540(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      PounceTraceLength;                                       // 0x2544(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      pounceTraceSize;                                         // 0x2548(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDidWallJump;                                            // 0x254C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QQGE[0x3];                                   // 0x254D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StaminaCost_Pounce;                                      // 0x2550(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bAllowPlayLandingAnim;                                   // 0x2554(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VLBF[0x3];                                   // 0x2555(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MeshClimbingOffset;                                      // 0x2558(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      requiredDistanceAboveGroundToClimb_SkiddingDown;         // 0x255C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_Roar_Montage;                                        // 0x2560(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbingDesyncOverride;                                  // 0x2568(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x256C(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate2;                   // 0x257C(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate3;                   // 0x258C(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate4;                   // 0x259C(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue;                // 0x25AC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum_CmpSuccess;                            // 0x25AD(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x25AE(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsMaulingValidCharacter_result;                 // 0x25AF(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsMaulingValidCharacter_result2;                // 0x25B0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9656[0x7];                                   // 0x25B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         CallFunc_GetController_ReturnValue;                      // 0x25B8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_PredatorClimbingState                                    K2Node_CustomEvent_NewState;                             // 0x25C0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RHDC[0x3];                                   // 0x25C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_CustomEvent_delay2;                               // 0x25C4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AThylacoleo_AIController_BP_C*                       CallFunc_Get_Thylaco_Ai_Controller_ref;                  // 0x25C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x25D0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y1H6[0x3];                                   // 0x25D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate5;                   // 0x25D4(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		unsigned char                                              UnknownData_JLZG[0x4];                                   // 0x25E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBlackboardComponent*                                CallFunc_GetBlackboard_ReturnValue;                      // 0x25E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FName                                                CallFunc_MakeLiteralName_ReturnValue;                    // 0x25F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FString                                              CallFunc_Conv_BoolToString_ReturnValue;                  // 0x25F8(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class FString                                              CallFunc_Concat_StrStr_ReturnValue;                      // 0x2608(0x0010) ZeroConstructor, Transient, DuplicateTransient
		float                                                      K2Node_CustomEvent_delay;                                // 0x2618(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y8TQ[0x4];                                   // 0x261C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDinoAttackInfo                                     CallFunc_Array_Get_Item;                                 // 0x2620(0x0130) Transient, DuplicateTransient
		float                                                      CallFunc_Conv_IntToFloat_ReturnValue;                    // 0x2750(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue2;                          // 0x2754(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x2755(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x2756(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BYTA[0x1];                                   // 0x2757(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue;                        // 0x2758(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue;                // 0x2760(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetActorForwardVector_ReturnValue;              // 0x276C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetComponentLocation_ReturnValue;            // 0x2778(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue;                     // 0x2784(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue;               // 0x2788(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_NegateVector_ReturnValue;                       // 0x2794(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue;                   // 0x27A0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetActorUpVector_ReturnValue;                   // 0x27AC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BPFastTrace_ReturnValue;                        // 0x27B8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7ROA[0x3];                                   // 0x27B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            CallFunc_MakeRotFromXZ_ReturnValue;                      // 0x27BC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            CallFunc_SpawnEmitterAtLocation_ReturnValue;             // 0x27C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AThylacoleo_Character_BP_C*                          CallFunc_GetDefaultDino_Ref;                             // 0x27D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        CallFunc_GetCurrentMontage_ReturnValue;                  // 0x27D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsThylacoClimbing_result;                       // 0x27E0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TWTL[0x3];                                   // 0x27E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_PlayAnimEx_ReturnValue;                         // 0x27E4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_ObjectObject_ReturnValue;              // 0x27E8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_HasEnoughStaminaToClimb_result;                 // 0x27E9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IY0C[0x6];                                   // 0x27EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue;               // 0x27F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsMaulingValidCharacter_result3;                // 0x27F8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDinoGrounded_result;                          // 0x27F9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1DTN[0x6];                                   // 0x27FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue2;                       // 0x2800(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_TimeSince_ReturnValue;                          // 0x2808(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue;                    // 0x280C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S2W2[0x3];                                   // 0x280D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_GetActorForwardVector_ReturnValue2;             // 0x2810(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_Conv_VectorToRotator_ReturnValue;               // 0x281C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BPCharacterDetach();
		void CanThylacoCarryCharacter(class APrimalCharacter* Character, bool* Result);
		void CanClimbOutOfWater(bool* Result);
		void SetIK_Active(bool newActive);
		void IsNormalClimbable(const struct FVector& Normal, bool* Result);
		float BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo);
		void ReduceThylacoStamina(float amount);
		void DisplayMessage(const class FString& Message);
		void HasEnoughStaminaToClimb(bool* Result);
		void IsThylacoClimbingDown(bool* Result);
		void IsThylacoClimbing_Up(bool* Result);
		void IsThylacoClimbing(bool* Result);
		void ReduceStaminaOverTime();
		void ManualPlayLandAnim();
		void BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode);
		void CalcThylacoPounceDir(struct FVector* pounceDir);
		void HardSetThylacoRotationButInterpMeshLocation(const struct FRotator& NewRotation);
		void UpdateIsAttachingToWall();
		void CleanUpClimbingAnims(bool* animsClean);
		void SetShouldRestoreToLatched(bool Newval);
		void SetThylacoRotationAndInterpMesh(const struct FRotator& NewRotation);
		void WallJump();
		void InterpolateMesh();
		bool BPShouldForceFlee();
		void CheckForPounceOnTarget(bool* shouldPounce);
		void UpdateThylacoAnims(bool ensureAnimsPlaying);
		void SetUseAimOffsets(bool newUse);
		struct FVector BPModifyAimOffsetTargetLocation(struct FVector* AimTargetLocation);
		void GetWallAttachImpulse(struct FVector* Impulse);
		void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void InitThylaco();
		void BPUnstasis();
		void CheckforAiAttachtoTree();
		void Client_SetClimbingState(E_PredatorClimbingState NewState);
		void IsDinoAboveGround(float CheckDistance, bool* Result);
		void UpdateJumpingAnim();
		void SetAI_LatchedToTree(bool Newval);
		void GetThylacoAiController(class AThylacoleo_AIController_BP_C** Ref);
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		void AiDropFromTree();
		void IsLatched(bool* Result);
		void IsLatching(bool* Result);
		void GetCorrectLatchingAnim(class UAnimMontage** animRef);
		void BPNotifyClearRider(class AShooterCharacter* RiderClearing);
		void BPNotifySetRider(class AShooterCharacter* RiderSetting);
		void BPTimerNonDedicated();
		void RemoveCarryBuffFromPrey();
		void ReleasePrey();
		bool BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget);
		void IsMaulingValidCharacter(bool* Result);
		void CanPounce(bool* Result);
		void OnRep_currentClimbableSurfaceNormal();
		void UpdateThylacoTransforms();
		void GetDesiredDirection(struct FVector* Direction);
		void Pounce_Stop(class APrimalCharacter* HitTarget);
		void CanKeepPouncing(bool* Result);
		void Pounce_Tick();
		void Pounce_Start();
		bool BlueprintCanRiderAttack(int32_t AttackIndex);
		void GetDefaultDino(class AThylacoleo_Character_BP_C** Ref);
		void IsDinoGrounded(bool* Result);
		void CheckForClimbableSurface(const struct FVector& checkDir, float checkDist, bool* Result);
		void OnRep_CurrentClimbingState();
		void NetSetClimbingState(E_PredatorClimbingState NewState);
		void BPTimerServer();
		void UserConstructionScript();
		void Server_JumpPressed();
		void Server_JumpReleased();
		void ReceiveBeginPlay();
		void AnimNotify_MaulPrey();
		void Server_NetSetClimbingState(E_PredatorClimbingState NewState);
		void SetReadyToClimbAfterDelay(float Delay);
		void CheckUntil_SetAiLatchedToTree();
		void EnsureCorrectAnimsPlayingAfterDelay(float Delay);
		void PlayAttachParticleWhenCloseToWall();
		void EnableClimbingAnimsAfterAttachDelay();
		void SyncGravityForPounceFall();
		void EnsureLatchedAnimPlays();
		void CheckUntil_MaulingValidCharacter();
		void PreventLandingAnimBriefly();
		void CheckOnJumpStateAfterJumpDelay();
		void BP_OnJumpPressed();
		void BP_OnJumpReleased();
		void InitThylaco_NextTick();
		void InitThylaco_Now();
		void ExecuteUbergraph_Thylacoleo_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
