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
	 * BlueprintGeneratedClass Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C
	 * Size -> 0x030C (FullSize[0x0E94] - InheritedSize[0x0B88])
	 */
	class ABuff_Grappled_BogSpider_C : public ABuff_Grappled_Base_C
	{
	public:
		float                                                      SwingingVelocityDampingRate_OneWeb_Swinging;             // 0x0B88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RotateGrappleVelocitySpeed_Swinging;                     // 0x0B8C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TetherPullAcceleration_OneWeb;                           // 0x0B90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    SwingCollisionTrace_ProjectionNumSubsteps;               // 0x0B94(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SwingCollisionTrace_ProjectionTime;                      // 0x0B98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SwingCollisionTrace_ExtraTraceDist;                      // 0x0B9C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ABogSpider_Character_BP_C*                           MyBogSpiderOwner;                                        // 0x0BA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             CurrentSwingHitLoc;                                      // 0x0BA8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SwingCollisionTrace_ProjectionSliceDist;                 // 0x0BB4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SwingPaddingDistance;                                    // 0x0BB8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SwingCollision_TraceAboveVelocity;                       // 0x0BBC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastNetNotifyOfSwingCollisionTime;                       // 0x0BC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AllowedNetNotifyOfSwingCollisionInterval;                // 0x0BC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0WDQ[0x4];                                   // 0x0BCC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastIncreasePullVelTime;                                 // 0x0BD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DecreasePullVelAfterTime;                                // 0x0BD8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector2D                                           RotateGrappleVelocitySpeed_Ranges;                       // 0x0BDC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RotateGrappleVelocitySpeed_AboveAnchorMult;              // 0x0BE4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RotateGrappleVelocitySpeed_Swinging_ConstDeltaClamp;     // 0x0BE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      GravityScaleResetInterpSpeed;                            // 0x0BEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      GrappledCharVelocityDampingRate_Idle;                    // 0x0BF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      GrappledCharVelocityDampingRate_Pulling;                 // 0x0BF4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      GrappledCharVelocityDampingRate_Releasing;               // 0x0BF8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TetherPullMaxVelocity_WebSprintMult;                     // 0x0BFC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TetherPullMaxVelocity_WebSprintMult_Swinging;            // 0x0C00(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TetherPullAcceleration_WebSprint;                        // 0x0C04(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AutoBreakWebBelowTetherLength_WebSprint;                 // 0x0C08(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RotateGrappleVelocitySpeed_WebSprint;                    // 0x0C0C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector2D                                           ShortenWebs_MaxLengthPerSecondRanges;                    // 0x0C10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bSlingshot_IsStretchingWebs;                             // 0x0C18(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bSlingshot_WasStretchingWebs;                            // 0x0C19(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CH02[0x2];                                   // 0x0C1A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           SlingshotStretchRatioPerSide;                            // 0x0C1C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Slingshot_TetherStretchLength;                           // 0x0C24(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Slingshot_Acceleration;                                  // 0x0C28(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Slingshot_MaxSpeed;                                      // 0x0C2C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Slingshot_TensionExponent;                               // 0x0C30(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Slingshot_TensionRatioReleaseSpeed;                      // 0x0C34(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             Slingshot_LastLaunchVelocity;                            // 0x0C38(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      GravityScale_Slingshot;                                  // 0x0C44(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      GrappleVelocityMaxRestoreSpeed;                          // 0x0C48(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHasSyncedSlingshotRatios;                               // 0x0C4C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_54TQ[0x3];                                   // 0x0C4D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    CurrentBioGrappledPrimalCharRef;                         // 0x0C50(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TetherTensionStrength_Pulling;                           // 0x0C58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TetherPullAcceleration_NotFalling;                       // 0x0C5C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TetherPullMaxVelocity_OneWeb;                            // 0x0C60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TetherStretchDelta_Pulling;                              // 0x0C64(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      IgnoreSlingshotBelowStretchRatio;                        // 0x0C68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TetherPullAcceleration_NotFalling_WebSprint;             // 0x0C6C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      StrengthenPullAboveDotToAnchorDir;                       // 0x0C70(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RotateGrappleVelocitySpeed_WebSprint_Swinging;           // 0x0C74(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxAllowedTetherShortenLengthDelta;                      // 0x0C78(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LYO7[0x4];                                   // 0x0C7C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastWebCreatedTime_Left;                                 // 0x0C80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastWebCreatedTime_Right;                                // 0x0C88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TetherPostCreation_ForceIdleStateTime;                   // 0x0C90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TetherPostCreation_IncreaseVelocityRotationTime;         // 0x0C94(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RotateGrappleVelocitySpeed_Swinging_ConstDeltaClamp_PostTetherCreation; // 0x0C98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ForceFallingStateForTimeAfterGrapplePullJump;            // 0x0C9C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bLastGrappledCharWasLeftWeb;                             // 0x0CA0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0L2S[0x7];                                   // 0x0CA1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastSlingshotStartTime;                                  // 0x0CA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WildSpiderGrappleBuffLifetime_NoTethers;                 // 0x0CB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LBFI[0x4];                                   // 0x0CB4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastNoTethersTime;                                       // 0x0CB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TamedSpiderGrappleBuffLifetime_NoRider;                  // 0x0CC0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SpiderGrappleBuffLifetime_Default;                       // 0x0CC4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SpiderVisionBoundsMultiplier;                            // 0x0CC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CAP4[0x4];                                   // 0x0CCC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class APrimalCharacter*>                            SpiderVision_BoundsModifiedChars;                        // 0x0CD0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		double                                                     LastDebugTime;                                           // 0x0CE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AllowWebSprintTetherAutoBreakUnderLength;                // 0x0CE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G5YA[0x4];                                   // 0x0CEC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastUpdateSpiderVisionActorBoundsTime;                   // 0x0CF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UpdateSpiderVisionActorBoundsInterval;                   // 0x0CF8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N6PY[0x4];                                   // 0x0CFC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastBioGrappleWebBlockedTime;                            // 0x0D00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AllowBioGrappleWebBlockedTime_NoRider_Players;           // 0x0D08(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9MZ8[0x4];                                   // 0x0D0C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastBioGrappleTraceForBlockersTime;                      // 0x0D10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BioGrappleTraceForBlockersInterval;                      // 0x0D18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             LastPostProcessCachedSpiderVelocity;                     // 0x0D1C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PostProcessVelocityInterpSpeed;                          // 0x0D28(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TetherPullMaxVelocity_WildSpider_Dino;                   // 0x0D2C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TetherPullMaxVelocity_WildSpider_Player;                 // 0x0D30(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TetherPullAcceleration_WildSpider_Dino;                  // 0x0D34(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TetherPullAcceleration_WildSpider_Player;                // 0x0D38(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AllowBioGrappleWebBlockedTime_Players;                   // 0x0D3C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AllowBioGrappleWebBlockedTime_NoRider_Dinos;             // 0x0D40(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AllowBioGrappleWebBlockedTime_Dinos;                     // 0x0D44(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDebug_SwingHitPredictionTraces;                         // 0x0D48(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F0RC[0x3];                                   // 0x0D49(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           CurrentWebShortenTargetLengths;                          // 0x0D4C(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ShortenWebsSpeed;                                        // 0x0D54(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WebShortenMaxSpeedAtLengthDelta;                         // 0x0D58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CurrentWebShortenSpeed;                                  // 0x0D5C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WebShortenSpeedInterpSpeed;                              // 0x0D60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TetherMaxLength_BioGrapple;                              // 0x0D64(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TetherReleaseMaxVelocity_WebSprintMult;                  // 0x0D68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDebug_Slingshot;                                        // 0x0D6C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHasNotifiedOfSlingshotInsufficientStamina;              // 0x0D6D(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I1CX[0x2];                                   // 0x0D6E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LookingAtAgainstSurfaceAngle_WebAnchor;                  // 0x0D70(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ShortTetherVelocityDamping_StartBelowTetherLength;       // 0x0D74(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ShortTetherVelocityDamping_MaxDampingSpeed;              // 0x0D78(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y17R[0x4];                                   // 0x0D7C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      BuffClassesPreventSpiderVision;                          // 0x0D80(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      SpecialDoubleBreak_RequiredBelowDotToAnchor;             // 0x0D90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_AtProjectedLocation;                  // 0x0D94(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_CheckForSwingCollision_foundHit;                // 0x0DA0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8YPB[0x7];                                   // 0x0DA1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHitResult                                          CallFunc_CheckForSwingCollision_swingHit;                // 0x0DA8(0x0088) Transient, DuplicateTransient
		struct FVector                                             CallFunc_BreakHitResult_Location;                        // 0x0E30(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_BreakHitResult_Normal;                          // 0x0E3C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_BreakHitResult_ImpactPoint;                     // 0x0E48(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_BreakHitResult_ImpactNormal;                    // 0x0E54(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UPhysicalMaterial*                                   CallFunc_BreakHitResult_PhysMat;                         // 0x0E60(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              CallFunc_BreakHitResult_HitActor;                        // 0x0E68(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UPrimitiveComponent*                                 CallFunc_BreakHitResult_HitComponent;                    // 0x0E70(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FName                                                CallFunc_BreakHitResult_HitBoneName;                     // 0x0E78(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_BreakHitResult_HitItem;                         // 0x0E80(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BreakHitResult_BlockingHit;                     // 0x0E84(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x0E85(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T3VF[0x2];                                   // 0x0E86(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           K2Node_CustomEvent_Ratios;                               // 0x0E88(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0E90(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue2;                          // 0x0E91(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x0E92(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Array_Set_Item_RefProperty;                     // 0x0E93(0x0001) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData, NoDestructor

	public:
		bool CanUpdateTetherLength(struct FGrappleTether* ForTether, float WithLength);
		bool ShouldUseDynamicTetherTension(struct FGrappleTether* ForTether);
		void CanDrawSpiderVisionOutlines(bool* bResult);
		bool DisplayGrappleSystemHudNotification(class AShooterPlayerController* ForPC, class AActor* FromActor, unsigned char NotificationType, int32_t NotificationID, const class FString& ReasonString);
		bool ShouldReturnToIdleGrappleState();
		bool IsOwnerLookingAtAgainstSurface();
		void CanTraceForSwingCollisions(bool* bResult);
		void ResetOwnerClientPositionErrorTolerance();
		void GetPullingSlingshotRatio(float* Ratio);
		bool IsGrappledCharHardAttached(class APrimalCharacter* forChar);
		float GetGrappleTetherReleaseMaxVelocity(class APrimalCharacter* ForReleasingChar, struct FGrappleTether* ForTether);
		float GetMaxTetherLength(struct FGrappleTether* ForTether);
		float GetIdealSwingHeightAboveFloor();
		bool CanSyncGrappleTetherLengths();
		struct FVector BPOverrideCharacterNewFallVelocity(struct FVector* InitialVelocity, struct FVector* Gravity, float DeltaTime);
		void OnSwingTracePredictedHitFound(const struct FVector& AtHitLocation);
		void CanUseWebSlingshot(bool* bResult);
		void ResetOwnerVars();
		void OnGrappledCharDeath(class APrimalCharacter* DyingChar);
		bool CanBeGrappledAgainstSurface();
		void SetActorComponentsCustomDepthStencilValue(class AActor* forActor, int32_t Value);
		void SetActorComponentsRenderCustomDepth(class AActor* forActor, bool bRender);
		void UpdateSpiderVisionActorBounds(bool bReset);
		void SetSpiderVisionEnabled(class APlayerController* ForController, bool bEnabled);
		void Tick_CheckForDeactivate();
		void BPDeactivated(class AActor* ForInstigator);
		void UpdateSpiderVisionPostProcess();
		bool CanPullChar(class APrimalCharacter* PullChar, bool bForStart);
		void IsPullingBioGrappledChar(bool* bResult);
		void UpdateOwnerMovementSpeed(struct FVector* WithCharVelocity);
		void OnGrappleTetherRemoved(struct FGrappleTether* RemovedTether);
		void OnGrappleTetherAdded(struct FGrappleTether* AddedTether);
		void RotateSwingingVelocityWithLookDir(const struct FVector& CurrentVelDir, float DeltaTime, struct FVector* RotatedVelDir, struct FVector* TargetVelDir);
		void AddAntiGravityPullVelocity(struct FVector* ToVelocity, class APrimalCharacter* forChar);
		bool CheckForAutoBreakTether(struct FGrappleTether* CheckTether);
		bool ShouldReplicateOwnerInputs();
		struct FVector GetCurrentTetherMoveDir(struct FGrappleTether* ForTether);
		void ApplyTetherMoveVelocity(struct FVector* CurrentVelocity, float DeltaTime);
		void SyncSlingshotRatios(bool bForceSync);
		void ForceStopSlingshot();
		void IsSlingshotLaunching(bool* bResult);
		void IsSlingshotLaunchingPure(bool* bResult);
		void ClampGrappleVelocity(struct FVector* ClampVelocity);
		float GetTetherBreakLimit_OwnerPastCurrentLengthDelta(struct FGrappleTether* ForTether);
		bool ShouldTetherBreak(struct FGrappleTether* ForTether, class APrimalCharacter* forChar, float OverrideBreakPastDist);
		void IsSpiderTryingToSlingshot(struct FGrappleTether* ForTether, const struct FVector& WithVelocity, bool* bResult);
		void SimulateTautTetherForces(struct FVector* WithCharVelocity, float DeltaTime, float LastGravityZ);
		float BPGetGravityZScale(float currentScale);
		void IsTetherLeftWeb(struct FGrappleTether* Tether, bool* bIsWebTether, bool* bIsLeftWeb);
		void WhichWebIsOnRightSideOfView(const struct FRotator& WithViewRot, bool* bLeft);
		bool CanOwnerGrappleSwing();
		EGrappleState GetCurrentGrappleState(struct FGrappleTether* ForTether);
		void CanRotateCharVelocity(bool* Result);
		void ModifyOverriddenCharVelocity(struct FVector* CurrentCharVelocity, float DeltaTime);
		void OnReleasedPrimalChar(class APrimalCharacter* ReleasedChar);
		void OnGrappledPrimalChar(class APrimalCharacter* GrappledChar, struct FGrappleTether* WithMasterTether);
		void IsValidSwingHit(struct FHitResult* CheckHit, bool* IsValid);
		void ReceiveBeginPlay();
		void ModifyTetherMoveVelocity(struct FVector* CurrentMoveVelocity, struct FGrappleTether* ForTether);
		void BuffTickServer(float DeltaTime);
		void CheckForSwingCollision(const struct FVector& AtProjectedLocation, bool* foundHit, struct FHitResult* swingHit);
		void BuffTickClient(float DeltaTime);
		void Tick_TraceForSwingCollisions();
		float GetGrappleTetherPullMaxVelocity(class APrimalCharacter* ForPullingChar, struct FGrappleTether* ForTether);
		float GetGrappleTetherPullAcceleration(class APrimalCharacter* ForPullingChar, struct FGrappleTether* ForTether);
		float GetGrappleVelocityDampingRate(class APrimalCharacter* forChar, struct FGrappleTether* ForTether);
		bool CanChangeGrappleState(unsigned char DesiredGrappleState);
		bool ShouldForceOwnerIntoFallingState(struct FGrappleTether* ForTether, struct FVector* WithOwnerVelocity, EMovementMode CheckMovementModeOverride);
		void OnGrappleTethersChanged();
		void EndGrapple();
		void OnGrappleStateChangedNotify(unsigned char* NewGrappleState, bool bIsEarlyNotify);
		void UserConstructionScript();
		void Server_OnSwingTracePredictedHitFound(const struct FVector& AtProjectedLocation);
		void Multi_ForceStopSlingshot();
		void Multi_SyncSlingshotRatios(const struct FVector2D& Ratios);
		void ExecuteUbergraph_Buff_Grappled_BogSpider(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
